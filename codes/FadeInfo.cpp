void FadeInfo___ctor(FadeInfo_o *this, const MethodInfo *method)
{
  this->fields.baseScale = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FadeInfo__OnGUI(FadeInfo_o *this, const MethodInfo *method)
{
  FadeLogger_c *v3; // x0
  System_String_o *FadeLog; // x0
  System_String_o *v5; // x19
  float v6; // s10
  System_String_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x20
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  System_String_o *v22; // x0
  float v23; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Rect_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C423AD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&FadeLogger_TypeInfo);
    sub_1C37058(&UnityEngine_GUI_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_1724/*"<size="*/);
    sub_1C37058(&StringLiteral_15921/*"[FADE]\n"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_1527/*"</size>"*/);
    sub_1C37058(&StringLiteral_1750/*">"*/);
    byte_4C423AD = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v3 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    FadeLog = FadeLogger__GetFadeLog((const MethodInfo *)v3);
    v5 = System_String__Concat_63561656((System_String_o *)StringLiteral_15921/*"[FADE]\n"*/, FadeLog, 0);
    v6 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v24.fields.m_XMin = 5.0;
    v24.fields.m_YMin = 5.0;
    v24.fields.m_Width = v6 * 660.0;
    v24.fields.m_Height = v6 * 825.0;
    UnityEngine_GUI__Box(v24, (System_String_o *)StringLiteral_1/*""*/, 0);
    v7 = (System_String_o *)sub_1C37100(string___TypeInfo, 5);
    if ( !v7 )
      sub_1C372B4(0);
    v10 = v7;
    if ( !LODWORD(v7[1].klass) )
      goto LABEL_18;
    v11 = StringLiteral_1724/*"<size="*/;
    v7[1].monitor = (void *)StringLiteral_1724/*"<size="*/;
    sub_1C36FFC((CGThumbnailListItem_o *)&v7[1].monitor, v11, v8, v9);
    v23 = v6 * 18.0;
    v7 = System_Single__ToString(v6 * 18.0, (const MethodInfo *)&v23);
    if ( LODWORD(v10[1].klass) <= 1
      || (v10[1].fields = (System_String_Fields)v7,
          sub_1C36FFC((CGThumbnailListItem_o *)&v10[1].fields, (int32_t)v7, v12, v13),
          LODWORD(v10[1].klass) <= 2)
      || (v16 = StringLiteral_1750/*">"*/,
          v10[2].klass = (System_String_c *)StringLiteral_1750/*">"*/,
          sub_1C36FFC((CGThumbnailListItem_o *)&v10[2], v16, v14, v15),
          LODWORD(v10[1].klass) <= 3)
      || (v10[2].monitor = v5,
          sub_1C36FFC((CGThumbnailListItem_o *)&v10[2].monitor, (int32_t)v5, v17, v18),
          LODWORD(v10[1].klass) <= 4) )
    {
LABEL_18:
      sub_1C372BC(v7);
    }
    v21 = StringLiteral_1527/*"</size>"*/;
    v10[2].fields = (System_String_Fields)StringLiteral_1527/*"</size>"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)&v10[2].fields, v21, v19, v20);
    v22 = System_String__Concat_63602172((System_String_array *)v10, 0);
    v25.fields.m_XMin = 10.0;
    v25.fields.m_YMin = 5.0;
    v25.fields.m_Width = v6 * 800.0;
    v25.fields.m_Height = v6 * 825.0;
    UnityEngine_GUI__Label(v25, v22, 0);
  }
}


void FadeInfo__SetScaleSoundInfo(FadeInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}