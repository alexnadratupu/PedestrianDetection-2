#ifndef _MY_XML_LABEL_H_
#define _MY_XML_LABEL_H_

#include <iostream>
#include <map>

/**
 * @brief A lookup tabel for XML tags.
 */
class myXMLLabel {
public:
    /**
     * @brief Pre-defined XML tags.
     */
    enum class Tags {
        ROOT = 0,               //!< Root tag
        FILE_DESCRIPTION,       //!< FileDescription tag
        VIDEO_FILE_NAME,        //!< VideoFile tag
        CREATE_DATE,            //!< CreateDate tag
        LASTEST_MODIFY_DATE,    //!< LastestModifyDate tag
        DATA_SET,               //!< DataSet tag
        HEADER,                 //!< Header tag
        RECORD,                 //!< Record tag
        SHAPE,                  //!< Shape tag
        START_POINT,            //!< StartPoint tag
        HEIGHT,                 //!< Height tag
        WIDTH                   //!< Width tag
    };

    /**
     * @brief Pre-defined XML tags.
     */
    enum class Attributes {
        FRAME_NUMBER = 0,       //!< frameNumber attribute
        TOTAL_RECORD,           //!< totalRecord attribute
        SERIAL_NUMBER           //!< serialNumber attribute
    };

    /**
     * @brief Pre-defined XML tags.
     */
    enum class Shapes {
        RECTANGLE = 0,          //!< Rectangle
        ELLIPSE,                //!< Ellipse
        CIRCLE                  //!< Circle
    };

    /// Mapping Tags to string.
    static std::map<myXMLLabel::Tags, std::string> m_sTagStrings;

    /// Mapping Shapes to string.
    static std::map<myXMLLabel::Shapes, std::string> m_sShapeStrings;

    /// Mapping Attributes to string.
    static std::map<myXMLLabel::Attributes, std::string> m_sAttributeStrings;

public:
    /**
     * @brief Default constructor.
     */
    myXMLLabel(void) {}

    /**
     * @brief Get tag string
     *
     * @param Label Pre-defined Tags
     */
    static std::string GetTagString(Tags Label) {
        return m_sTagStrings[Label];
    }

    /**
     * @brief Get tag string
     *
     * @param Shape Pre-defined Shapes
     */
    static std::string GetShapeString(Shapes Shape) {
        return m_sShapeStrings[Shape];
    }

    /**
     * @brief Get tag string
     *
     * @param Attribute Pre-defined Attributes
     */
    static std::string GetAttributeString(Attributes Attribute) {
        return m_sAttributeStrings[Attribute];
    }
};

#endif