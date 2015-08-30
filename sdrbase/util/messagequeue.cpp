///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2015 F4EXB                                                      //
// written by Edouard Griffiths                                                  //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#include <QDebug>
#include "util/messagequeue.h"
#include "util/message.h"

MessageQueue::MessageQueue(QObject* parent) :
	QObject(parent),
	m_lock(),
	m_queue()
{
}

MessageQueue::~MessageQueue()
{
	Message* message;

	while ((message = pop()) != 0)
	{
		qDebug() << "MessageQueue::~MessageQueue: message: " << message->getIdentifier() << " was still in queue";
		delete message;
	}
}

void MessageQueue::push(Message* message, bool emitSignal)
{
	if (message)
	{
		m_lock.lock();
		m_queue.append(message);
		m_lock.unlock();
	}

	if (emitSignal)
	{
		emit messageEnqueued();
	}
}

Message* MessageQueue::pop()
{
	SpinlockHolder spinlockHolder(&m_lock);

	if (m_queue.isEmpty())
	{
		return 0;
	}
	else
	{
		return m_queue.takeFirst();
	}
}

int MessageQueue::size()
{
	SpinlockHolder spinlockHolder(&m_lock);

	return m_queue.size();
}

void MessageQueue::clear()
{
	m_queue.clear();
}
