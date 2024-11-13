void __fastcall FadeInfo___ctor(FadeInfo_o *this, const MethodInfo *method)
{
  this->fields.baseScale = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FadeInfo__OnGUI(FadeInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  FadeLogger_c *v21; // x0
  System_String_o *FadeLog; // x0
  System_String_o *v23; // x19
  __int64 v24; // x1
  float v25; // s10
  System_String_o *v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o *v34; // x20
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x1
  System_String_o *v62; // x0
  float v63; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Rect_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B15688 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&FadeLogger_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_GUI_TypeInfo, v6, v7);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1837/*"<size="*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16097/*"[FADE]\n"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1625/*"</size>"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1858/*">"*/, v18, v19);
    byte_4B15688 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    v21 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v20);
    FadeLog = FadeLogger__GetFadeLog((const MethodInfo *)v21);
    v23 = System_String__Concat_62401220((System_String_o *)StringLiteral_16097/*"[FADE]\n"*/, FadeLog, 0LL);
    v25 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v24);
    v64.fields.m_XMin = 5.0;
    v64.fields.m_YMin = 5.0;
    v64.fields.m_Width = v25 * 660.0;
    v64.fields.m_Height = v25 * 825.0;
    UnityEngine_GUI__Box(v64, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v26 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
    if ( !v26 )
      sub_1BCAA3C(0LL, v27);
    v34 = v26;
    if ( !LODWORD(v26[1].klass) )
      goto LABEL_18;
    v35 = StringLiteral_1837/*"<size="*/;
    v26[1].monitor = (void *)StringLiteral_1837/*"<size="*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v26[1].monitor, v35, v28, v29, v30, v31, v32, v33);
    v63 = v25 * 18.0;
    v26 = System_Single__ToString(v25 * 18.0, (const MethodInfo *)&v63);
    if ( LODWORD(v34[1].klass) <= 1
      || (v34[1].fields = (System_String_Fields)v26,
          sub_1BCA784((PartyOrganizationUtility_o *)&v34[1].fields, (int64_t)v26, v36, v37, v38, v39, v40, v41),
          LODWORD(v34[1].klass) <= 2)
      || (v48 = StringLiteral_1858/*">"*/,
          v34[2].klass = (System_String_c *)StringLiteral_1858/*">"*/,
          sub_1BCA784((PartyOrganizationUtility_o *)&v34[2], v48, v42, v43, v44, v45, v46, v47),
          LODWORD(v34[1].klass) <= 3)
      || (v34[2].monitor = v23,
          sub_1BCA784((PartyOrganizationUtility_o *)&v34[2].monitor, (int64_t)v23, v49, v50, v51, v52, v53, v54),
          LODWORD(v34[1].klass) <= 4) )
    {
LABEL_18:
      sub_1BCAA44(v26, v27);
    }
    v61 = StringLiteral_1625/*"</size>"*/;
    v34[2].fields = (System_String_Fields)StringLiteral_1625/*"</size>"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v34[2].fields, v61, v55, v56, v57, v58, v59, v60);
    v62 = System_String__Concat_62414748((System_String_array *)v34, 0LL);
    v65.fields.m_XMin = 10.0;
    v65.fields.m_YMin = 5.0;
    v65.fields.m_Width = v25 * 800.0;
    v65.fields.m_Height = v25 * 825.0;
    UnityEngine_GUI__Label(v65, v62, 0LL);
  }
}


void __fastcall FadeInfo__SetScaleSoundInfo(FadeInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}