void FadeInfo___ctor(FadeInfo_o *this, const MethodInfo *method)
{
  this->fields.baseScale = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FadeInfo__OnGUI(FadeInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FadeLogger_c *v4; // x0
  System_String_o *FadeLog; // x0
  System_String_o *v6; // x19
  __int64 v7; // x1
  float v8; // s10
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x20
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w1
  System_String_o *v45; // x0
  float v46; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5937AD8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&FadeLogger_TypeInfo);
    sub_21FFC50(&UnityEngine_GUI_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_1804/*"<size="*/);
    sub_21FFC50(&StringLiteral_16511/*"[FADE]\n"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_1606/*"</size>"*/);
    sub_21FFC50(&StringLiteral_1830/*">"*/);
    byte_5937AD8 = 1;
  }
  v46 = 0.0;
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v4 = FadeLogger_TypeInfo;
    if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v3);
    FadeLog = FadeLogger__GetFadeLog((const MethodInfo *)v4);
    v6 = System_String__Concat_75438412((System_String_o *)StringLiteral_16511/*"[FADE]\n"*/, FadeLog, 0);
    v8 = this->fields.baseScale * vcvts_n_f32_s32(UnityEngine_Screen__get_width(0), 0xAu);
    if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v7);
    v47.fields.m_Width = v8 * 660.0;
    v47.fields.m_Height = v8 * 825.0;
    v47.fields.m_XMin = 5.0;
    v47.fields.m_YMin = 5.0;
    UnityEngine_GUI__Box(v47, (System_String_o *)StringLiteral_1/*""*/, 0);
    v9 = (System_String_o *)sub_21FFD10(string___TypeInfo, 5);
    if ( !v9 )
      sub_21FFECC(0, v10);
    v17 = v9;
    if ( !LODWORD(v9[1].klass) )
      goto LABEL_18;
    v18 = StringLiteral_1804/*"<size="*/;
    v9[1].monitor = (void *)StringLiteral_1804/*"<size="*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9[1].monitor, v18, v11, v12, v13, v14, v15, v16);
    v46 = v8 * 18.0;
    v9 = System_Single__ToString(v8 * 18.0, (const MethodInfo *)&v46);
    if ( ((__int64)v17[1].klass & 0xFFFFFFFE) == 0
      || (v17[1].fields = (System_String_Fields)v9,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17[1].fields, (int32_t)v9, v19, v20, v21, v22, v23, v24),
          LODWORD(v17[1].klass) <= 2)
      || (v31 = StringLiteral_1830/*">"*/,
          v17[2].klass = (System_String_c *)StringLiteral_1830/*">"*/,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17[2], v31, v25, v26, v27, v28, v29, v30),
          ((__int64)v17[1].klass & 0xFFFFFFFC) == 0)
      || (v17[2].monitor = v6,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17[2].monitor, (int32_t)v6, v32, v33, v34, v35, v36, v37),
          LODWORD(v17[1].klass) <= 4) )
    {
LABEL_18:
      sub_21FFED4(v9);
    }
    v44 = StringLiteral_1606/*"</size>"*/;
    v17[2].fields = (System_String_Fields)StringLiteral_1606/*"</size>"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17[2].fields, v44, v38, v39, v40, v41, v42, v43);
    v45 = System_String__Concat_75483816((System_String_array *)v17, 0);
    v48.fields.m_Width = v8 * 800.0;
    v48.fields.m_Height = v8 * 825.0;
    v48.fields.m_XMin = 10.0;
    v48.fields.m_YMin = 5.0;
    UnityEngine_GUI__Label(v48, v45, 0);
  }
}


void FadeInfo__SetScaleSoundInfo(FadeInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}