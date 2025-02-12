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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_String_o *v23; // x20
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  System_String_o *v51; // x0
  float v52; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Rect_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BC6F2C & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Application_TypeInfo, method);
    sub_1C1ABD4(&FadeLogger_TypeInfo, v3);
    sub_1C1ABD4(&UnityEngine_GUI_TypeInfo, v4);
    sub_1C1ABD4(&string___TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_1842/*"<size="*/, v6);
    sub_1C1ABD4(&StringLiteral_16194/*"[FADE]\n"*/, v7);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v8);
    sub_1C1ABD4(&StringLiteral_1630/*"</size>"*/, v9);
    sub_1C1ABD4(&StringLiteral_1871/*">"*/, v10);
    byte_4BC6F2C = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    v11 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    FadeLog = FadeLogger__GetFadeLog((const MethodInfo *)v11);
    v13 = System_String__Concat_63040368((System_String_o *)StringLiteral_16194/*"[FADE]\n"*/, FadeLog, 0LL);
    v14 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v53.fields.m_XMin = 5.0;
    v53.fields.m_YMin = 5.0;
    v53.fields.m_Width = v14 * 660.0;
    v53.fields.m_Height = v14 * 825.0;
    UnityEngine_GUI__Box(v53, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v15 = (System_String_o *)sub_1C1AC7C(string___TypeInfo, 5LL);
    if ( !v15 )
      sub_1C1AE30(0LL, v16);
    v23 = v15;
    if ( !LODWORD(v15[1].klass) )
      goto LABEL_18;
    v24 = StringLiteral_1842/*"<size="*/;
    v15[1].monitor = (void *)StringLiteral_1842/*"<size="*/;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v15[1].monitor, v24, v17, v18, v19, v20, v21, v22);
    v52 = v14 * 18.0;
    v15 = System_Single__ToString(v14 * 18.0, (const MethodInfo *)&v52);
    if ( LODWORD(v23[1].klass) <= 1
      || (v23[1].fields = (System_String_Fields)v15,
          sub_1C1AB78((PartyOrganizationUtility_o *)&v23[1].fields, (int64_t)v15, v25, v26, v27, v28, v29, v30),
          LODWORD(v23[1].klass) <= 2)
      || (v37 = StringLiteral_1871/*">"*/,
          v23[2].klass = (System_String_c *)StringLiteral_1871/*">"*/,
          sub_1C1AB78((PartyOrganizationUtility_o *)&v23[2], v37, v31, v32, v33, v34, v35, v36),
          LODWORD(v23[1].klass) <= 3)
      || (v23[2].monitor = v13,
          sub_1C1AB78((PartyOrganizationUtility_o *)&v23[2].monitor, (int64_t)v13, v38, v39, v40, v41, v42, v43),
          LODWORD(v23[1].klass) <= 4) )
    {
LABEL_18:
      sub_1C1AE38(v15, v16);
    }
    v50 = StringLiteral_1630/*"</size>"*/;
    v23[2].fields = (System_String_Fields)StringLiteral_1630/*"</size>"*/;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v23[2].fields, v50, v44, v45, v46, v47, v48, v49);
    v51 = System_String__Concat_63053896((System_String_array *)v23, 0LL);
    v54.fields.m_XMin = 10.0;
    v54.fields.m_YMin = 5.0;
    v54.fields.m_Width = v14 * 800.0;
    v54.fields.m_Height = v14 * 825.0;
    UnityEngine_GUI__Label(v54, v51, 0LL);
  }
}


void __fastcall FadeInfo__SetScaleSoundInfo(FadeInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}