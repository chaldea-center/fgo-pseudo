void __fastcall FadeInfo___ctor(FadeInfo_o *this, const MethodInfo *method)
{
  this->fields.baseScale = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FadeInfo__OnGUI(FadeInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  FadeLogger_c *v11; // x0
  System_String_o *FadeLog; // x0
  System_String_o *v13; // x19
  float v14; // s10
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o *v19; // x20
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  System_String_o *v31; // x0
  float v32; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Rect_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A4D910 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, method);
    sub_1B863B8(&FadeLogger_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_GUI_TypeInfo, v4);
    sub_1B863B8(&string___TypeInfo, v5);
    sub_1B863B8(&StringLiteral_1736/*"<size="*/, v6);
    sub_1B863B8(&StringLiteral_15698/*"[FADE]\n"*/, v7);
    sub_1B863B8(&StringLiteral_1/*""*/, v8);
    sub_1B863B8(&StringLiteral_1540/*"</size>"*/, v9);
    sub_1B863B8(&StringLiteral_1762/*">"*/, v10);
    byte_4A4D910 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    v11 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    FadeLog = FadeLogger__GetFadeLog((const MethodInfo *)v11);
    v13 = System_String__Concat_61645176((System_String_o *)StringLiteral_15698/*"[FADE]\n"*/, FadeLog, 0LL);
    v14 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v33.fields.m_XMin = 5.0;
    v33.fields.m_YMin = 5.0;
    v33.fields.m_Width = v14 * 660.0;
    v33.fields.m_Height = v14 * 825.0;
    UnityEngine_GUI__Box(v33, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v15 = (System_String_o *)sub_1B86460(string___TypeInfo, 5LL);
    if ( !v15 )
      sub_1B86614(0LL, v16);
    v19 = v15;
    if ( !LODWORD(v15[1].klass) )
      goto LABEL_18;
    v20 = StringLiteral_1736/*"<size="*/;
    v15[1].monitor = (void *)StringLiteral_1736/*"<size="*/;
    sub_1B8635C((CGThumbnailListItem_o *)&v15[1].monitor, v20, v17, v18);
    v32 = v14 * 18.0;
    v15 = System_Single__ToString(v14 * 18.0, (const MethodInfo *)&v32);
    if ( LODWORD(v19[1].klass) <= 1
      || (v19[1].fields = (System_String_Fields)v15,
          sub_1B8635C((CGThumbnailListItem_o *)&v19[1].fields, (int32_t)v15, v21, v22),
          LODWORD(v19[1].klass) <= 2)
      || (v25 = StringLiteral_1762/*">"*/,
          v19[2].klass = (System_String_c *)StringLiteral_1762/*">"*/,
          sub_1B8635C((CGThumbnailListItem_o *)&v19[2], v25, v23, v24),
          LODWORD(v19[1].klass) <= 3)
      || (v19[2].monitor = v13,
          sub_1B8635C((CGThumbnailListItem_o *)&v19[2].monitor, (int32_t)v13, v26, v27),
          LODWORD(v19[1].klass) <= 4) )
    {
LABEL_18:
      sub_1B8661C(v15, v16);
    }
    v30 = StringLiteral_1540/*"</size>"*/;
    v19[2].fields = (System_String_Fields)StringLiteral_1540/*"</size>"*/;
    sub_1B8635C((CGThumbnailListItem_o *)&v19[2].fields, v30, v28, v29);
    v31 = System_String__Concat_61685692((System_String_array *)v19, 0LL);
    v34.fields.m_XMin = 10.0;
    v34.fields.m_YMin = 5.0;
    v34.fields.m_Width = v14 * 800.0;
    v34.fields.m_Height = v14 * 825.0;
    UnityEngine_GUI__Label(v34, v31, 0LL);
  }
}


void __fastcall FadeInfo__SetScaleSoundInfo(FadeInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}