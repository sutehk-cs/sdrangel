/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.6
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGGLSpectrum.h
 *
 * GLSpectrumGUI settings
 */

#ifndef SWGGLSpectrum_H_
#define SWGGLSpectrum_H_

#include <QJsonObject>



#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGGLSpectrum: public SWGObject {
public:
    SWGGLSpectrum();
    SWGGLSpectrum(QString* json);
    virtual ~SWGGLSpectrum();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGGLSpectrum* fromJson(QString &jsonString) override;

    qint32 getFftSize();
    void setFftSize(qint32 fft_size);

    qint32 getFftOverlap();
    void setFftOverlap(qint32 fft_overlap);

    qint32 getFftWindow();
    void setFftWindow(qint32 fft_window);

    float getRefLevel();
    void setRefLevel(float ref_level);

    float getPowerRange();
    void setPowerRange(float power_range);

    qint32 getDisplayWaterfall();
    void setDisplayWaterfall(qint32 display_waterfall);

    qint32 getInvertedWaterfall();
    void setInvertedWaterfall(qint32 inverted_waterfall);

    qint32 getDisplayMaxHold();
    void setDisplayMaxHold(qint32 display_max_hold);

    qint32 getDisplayHistogram();
    void setDisplayHistogram(qint32 display_histogram);

    qint32 getDecay();
    void setDecay(qint32 decay);

    qint32 getDisplayGrid();
    void setDisplayGrid(qint32 display_grid);

    qint32 getInvert();
    void setInvert(qint32 invert);

    qint32 getDisplayGridIntensity();
    void setDisplayGridIntensity(qint32 display_grid_intensity);

    qint32 getDecayDivisor();
    void setDecayDivisor(qint32 decay_divisor);

    qint32 getHistogramStroke();
    void setHistogramStroke(qint32 histogram_stroke);

    qint32 getDisplayCurrent();
    void setDisplayCurrent(qint32 display_current);

    qint32 getDisplayTraceIntensity();
    void setDisplayTraceIntensity(qint32 display_trace_intensity);

    float getWaterfallShare();
    void setWaterfallShare(float waterfall_share);

    qint32 getAveragingMode();
    void setAveragingMode(qint32 averaging_mode);

    qint32 getAveragingValue();
    void setAveragingValue(qint32 averaging_value);

    qint32 getLinear();
    void setLinear(qint32 linear);


    virtual bool isSet() override;

private:
    qint32 fft_size;
    bool m_fft_size_isSet;

    qint32 fft_overlap;
    bool m_fft_overlap_isSet;

    qint32 fft_window;
    bool m_fft_window_isSet;

    float ref_level;
    bool m_ref_level_isSet;

    float power_range;
    bool m_power_range_isSet;

    qint32 display_waterfall;
    bool m_display_waterfall_isSet;

    qint32 inverted_waterfall;
    bool m_inverted_waterfall_isSet;

    qint32 display_max_hold;
    bool m_display_max_hold_isSet;

    qint32 display_histogram;
    bool m_display_histogram_isSet;

    qint32 decay;
    bool m_decay_isSet;

    qint32 display_grid;
    bool m_display_grid_isSet;

    qint32 invert;
    bool m_invert_isSet;

    qint32 display_grid_intensity;
    bool m_display_grid_intensity_isSet;

    qint32 decay_divisor;
    bool m_decay_divisor_isSet;

    qint32 histogram_stroke;
    bool m_histogram_stroke_isSet;

    qint32 display_current;
    bool m_display_current_isSet;

    qint32 display_trace_intensity;
    bool m_display_trace_intensity_isSet;

    float waterfall_share;
    bool m_waterfall_share_isSet;

    qint32 averaging_mode;
    bool m_averaging_mode_isSet;

    qint32 averaging_value;
    bool m_averaging_value_isSet;

    qint32 linear;
    bool m_linear_isSet;

};

}

#endif /* SWGGLSpectrum_H_ */
