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
  int32_t v18; // w3
  System_String_o *v19; // x20
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  System_String_o *v31; // x0
  float v32; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Rect_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB8E6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&FadeLogger_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_GUI_TypeInfo, v4);
    sub_1B640C8(&string___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1842/*"<size="*/, v6);
    sub_1B640C8(&StringLiteral_15863/*"[FADE]\n"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    sub_1B640C8(&StringLiteral_1630/*"</size>"*/, v9);
    sub_1B640C8(&StringLiteral_1863/*">"*/, v10);
    byte_49FB8E6 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    v11 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    FadeLog = FadeLogger__GetFadeLog((const MethodInfo *)v11);
    v13 = System_String__Concat_61375396((System_String_o *)StringLiteral_15863/*"[FADE]\n"*/, FadeLog, 0LL);
    v14 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v33.fields.m_XMin = 5.0;
    v33.fields.m_YMin = 5.0;
    v33.fields.m_Width = v14 * 660.0;
    v33.fields.m_Height = v14 * 825.0;
    UnityEngine_GUI__Box(v33, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v15 = (System_String_o *)sub_1B64170(string___TypeInfo, 5LL);
    if ( !v15 )
      sub_1B64324(0LL);
    v19 = v15;
    if ( !LODWORD(v15[1].klass) )
      goto LABEL_18;
    v20 = StringLiteral_1842/*"<size="*/;
    v15[1].monitor = (void *)StringLiteral_1842/*"<size="*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15[1].monitor, v20, v17, v18);
    v32 = v14 * 18.0;
    v15 = System_Single__ToString(v14 * 18.0, (const MethodInfo *)&v32);
    if ( LODWORD(v19[1].klass) <= 1
      || (v19[1].fields = (System_String_Fields)v15,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19[1].fields, (int32_t)v15, v21, v22),
          LODWORD(v19[1].klass) <= 2)
      || (v25 = StringLiteral_1863/*">"*/,
          v19[2].klass = (System_String_c *)StringLiteral_1863/*">"*/,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19[2], v25, v23, v24),
          LODWORD(v19[1].klass) <= 3)
      || (v19[2].monitor = v13,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19[2].monitor, (int32_t)v13, v26, v27),
          LODWORD(v19[1].klass) <= 4) )
    {
LABEL_18:
      sub_1B6432C(v15, v16);
    }
    v30 = StringLiteral_1630/*"</size>"*/;
    v19[2].fields = (System_String_Fields)StringLiteral_1630/*"</size>"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19[2].fields, v30, v28, v29);
    v31 = System_String__Concat_61388924((System_String_array *)v19, 0LL);
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