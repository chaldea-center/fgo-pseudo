void __fastcall FadeInfo___ctor(FadeInfo_o *this, const MethodInfo *method)
{
  this->fields.baseScale = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FadeInfo__OnGUI(FadeInfo_o *this, const MethodInfo *method)
{
  FadeLogger_c *v3; // x0
  System_String_o *FadeLog; // x0
  System_String_o *v5; // x19
  float v6; // s10
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x20
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  System_String_o *v23; // x0
  float v24; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5A61E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&FadeLogger_TypeInfo);
    sub_1B885B0(&UnityEngine_GUI_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1840/*"<size="*/);
    sub_1B885B0(&StringLiteral_15931/*"[FADE]\n"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_1628/*"</size>"*/);
    sub_1B885B0(&StringLiteral_1861/*">"*/);
    byte_4A5A61E = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    v3 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    FadeLog = FadeLogger__GetFadeLog((const MethodInfo *)v3);
    v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_15931/*"[FADE]\n"*/, FadeLog, 0LL);
    v6 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v25.fields.m_XMin = 5.0;
    v25.fields.m_YMin = 5.0;
    v25.fields.m_Width = v6 * 660.0;
    v25.fields.m_Height = v6 * 825.0;
    UnityEngine_GUI__Box(v25, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v7 = (System_String_o *)sub_1B88658(string___TypeInfo, 5LL);
    if ( !v7 )
      sub_1B8880C(0LL, v8);
    v11 = v7;
    if ( !LODWORD(v7[1].klass) )
      goto LABEL_18;
    v12 = StringLiteral_1840/*"<size="*/;
    v7[1].monitor = (void *)StringLiteral_1840/*"<size="*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v7[1].monitor, v12, v9, v10);
    v24 = v6 * 18.0;
    v7 = System_Single__ToString(v6 * 18.0, (const MethodInfo *)&v24);
    if ( LODWORD(v11[1].klass) <= 1
      || (v11[1].fields = (System_String_Fields)v7,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[1].fields, (int32_t)v7, v13, v14),
          LODWORD(v11[1].klass) <= 2)
      || (v17 = StringLiteral_1861/*">"*/,
          v11[2].klass = (System_String_c *)StringLiteral_1861/*">"*/,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[2], v17, v15, v16),
          LODWORD(v11[1].klass) <= 3)
      || (v11[2].monitor = v5,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[2].monitor, (int32_t)v5, v18, v19),
          LODWORD(v11[1].klass) <= 4) )
    {
LABEL_18:
      sub_1B88814(v7, v8);
    }
    v22 = StringLiteral_1628/*"</size>"*/;
    v11[2].fields = (System_String_Fields)StringLiteral_1628/*"</size>"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[2].fields, v22, v20, v21);
    v23 = System_String__Concat_61720560((System_String_array *)v11, 0LL);
    v26.fields.m_XMin = 10.0;
    v26.fields.m_YMin = 5.0;
    v26.fields.m_Width = v6 * 800.0;
    v26.fields.m_Height = v6 * 825.0;
    UnityEngine_GUI__Label(v26, v23, 0LL);
  }
}


void __fastcall FadeInfo__SetScaleSoundInfo(FadeInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}