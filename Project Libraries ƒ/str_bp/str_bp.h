/******************************************\|**| str_bp.h\******************************************/#ifndef kstr_bp_h#define kstr_bp_h#pragma mark ��INCLUDES��/******************************************\|**| #includes\******************************************/#pragma mark _system includes_/* - system*******************************************/#pragma mark _third party includes_/* - third party libraries*******************************************/#pragma mark _bp libraries includes_/* - bp libraries*******************************************/#pragma mark _this library includes_/* - this project*******************************************/#pragma mark ��DEFINITIONS��/******************************************\|**| #defines\******************************************//* - definitions*******************************************/#pragma mark _macros_/* - macros*******************************************/#ifndef c2pstr#define c2pstr( m_pstr) c2pstrcpy( (StringPtr)m_pstr, (char *)m_pstr); m_pstr#endif c2pstr#ifndef p2cstr#define p2cstr( m_cstr) p2cstrcpy( (char *)m_cstr, (StringPtr)m_cstr); m_cstr#endif p2cstr//#define pstrcpy( m_pstr1, m_pstr2) PLstrcpy( m_pstr1, m_pstr2)//#define pstrcat( m_pstr1, m_pstr2) PLstrcat( m_pstr1, m_pstr2)#define pstrcpy( m_pstr1, m_pstr2) pstrcpy_bp( m_pstr1, m_pstr2)#define pstrcat( m_pstr1, m_pstr2) pstrcat_bp( m_pstr1, m_pstr2)#pragma mark ��TYPEDEFS��/******************************************\|**| typedefs\******************************************/#pragma mark ��PUBLIC PROTOTYPES��/******************************************\|**| public function prototypes\******************************************/void c2pstrcpy_bp( StringPtr dst, const char* src );char *p2cstrcpy_bp( char *dst, const StringPtr src);StringPtr pstrcpy_bp( StringPtr dst, const unsigned char *src);int pstrcmp( StringPtr s1, StringPtr s2);int pstrcmp_nocase( StringPtr s1, StringPtr s2);StringPtr pstrcat_bp( StringPtr dst, StringPtr src);StringPtr pstr_getFileExtension( StringPtr dst, StringPtr src);long pstr_getCharOffset( StringPtr src, char key);StringPtr pstr_trim( StringPtr dst);StringPtr pstr_copyFormat( StringPtr dst, StringPtr s, ...);#endif kstr_bp_h