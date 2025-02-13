void __fastcall SoundInfo___ctor(SoundInfo_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.baseScale = -3236324966LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundInfo__OnGUI(SoundInfo_o *this, const MethodInfo *method)
{
  int32_t bgmIndex; // w24
  SoundLogger_c *v4; // x0
  System_String_o *LogBgm; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x20
  int32_t v8; // w21
  System_String_o *LogSe; // x0
  __int64 *v10; // x8
  SoundLogger_c *v11; // x0
  System_String_o *LogBgmDetailLast; // x0
  System_String_o *v13; // x20
  System_String_o *LogVoice; // x0
  System_String_o *v15; // x20
  float v16; // s11
  System_String_o *v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *v25; // x21
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  System_String_o *v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  System_String_o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_String_o *v65; // x20
  int64_t v66; // x1
  float v67; // s0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x1
  System_String_o *v94; // x20
  int32_t v95; // w20
  BgmManager_c *v96; // x0
  int32_t v97; // [xsp+28h] [xbp-58h] BYREF
  float v98[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDBAB9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&UnityEngine_GUI_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&SoundLogger_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/);
    sub_1C21E38(&StringLiteral_16178/*"[BGM]\n"*/);
    sub_1C21E38(&StringLiteral_5403/*"Detail:{0}"*/);
    sub_1C21E38(&StringLiteral_1842/*"<size="*/);
    sub_1C21E38(&StringLiteral_45/*"\n\n\n"*/);
    sub_1C21E38(&StringLiteral_5402/*"Detail: OFF"*/);
    sub_1C21E38(&StringLiteral_66/*"\n[SE]\n"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_1630/*"</size>"*/);
    sub_1C21E38(&StringLiteral_67/*"\n[VOICE]\n"*/);
    sub_1C21E38(&StringLiteral_1871/*">"*/);
    byte_4BDBAB9 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    bgmIndex = this->fields.bgmIndex;
    v4 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v4);
    v7 = System_String__Concat_63115476((System_String_o *)StringLiteral_16178/*"[BGM]\n"*/, LogBgm, 0LL);
    if ( (bgmIndex & 0x80000000) != 0 )
    {
      v11 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v11);
      v13 = System_String__Concat_63126736(v7, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0LL);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v13);
      v7 = System_String__Concat_63126736(v13, (System_String_o *)StringLiteral_67/*"\n[VOICE]\n"*/, LogVoice, 0LL);
      LogSe = SoundLogger__getLogSe((const MethodInfo *)v7);
      v10 = &StringLiteral_66/*"\n[SE]\n"*/;
    }
    else
    {
      v8 = this->fields.bgmIndex;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogSe = SoundLogger__GetLogBgmDetail(v8, v6);
      v10 = &StringLiteral_45/*"\n\n\n"*/;
    }
    v15 = System_String__Concat_63126736(v7, (System_String_o *)*v10, LogSe, 0LL);
    v16 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v99.fields.m_XMin = 5.0;
    v99.fields.m_YMin = 5.0;
    v99.fields.m_Width = v16 * 310.0;
    v99.fields.m_Height = v16 * 825.0;
    UnityEngine_GUI__Box(v99, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v17 = (System_String_o *)sub_1C21EE0(string___TypeInfo, 5LL);
    if ( v17 )
    {
      v25 = v17;
      if ( !LODWORD(v17[1].klass) )
        goto LABEL_40;
      v26 = StringLiteral_1842/*"<size="*/;
      v17[1].monitor = (void *)StringLiteral_1842/*"<size="*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v17[1].monitor, v26, v19, v20, v21, v22, v23, v24);
      v98[0] = v16 * 18.0;
      v17 = System_Single__ToString(18.0, (const MethodInfo *)v98);
      if ( LODWORD(v25[1].klass) <= 1 )
        goto LABEL_40;
      v25[1].fields = (System_String_Fields)v17;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v25[1].fields, (int64_t)v17, v27, v28, v29, v30, v31, v32);
      if ( LODWORD(v25[1].klass) <= 2 )
        goto LABEL_40;
      v39 = StringLiteral_1871/*">"*/;
      v25[2].klass = (System_String_c *)StringLiteral_1871/*">"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v25[2], v39, v33, v34, v35, v36, v37, v38);
      if ( LODWORD(v25[1].klass) <= 3 )
        goto LABEL_40;
      v25[2].monitor = v15;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v25[2].monitor, (int64_t)v15, v40, v41, v42, v43, v44, v45);
      if ( LODWORD(v25[1].klass) <= 4 )
        goto LABEL_40;
      v52 = StringLiteral_1630/*"</size>"*/;
      v25[2].fields = (System_String_Fields)StringLiteral_1630/*"</size>"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v25[2].fields, v52, v46, v47, v48, v49, v50, v51);
      v53 = System_String__Concat_63129004((System_String_array *)v25, 0LL);
      v100.fields.m_XMin = 10.0;
      v100.fields.m_YMin = 5.0;
      v100.fields.m_Width = v16 * 1000.0;
      v100.fields.m_Height = v16 * 825.0;
      UnityEngine_GUI__Label(v100, v53, 0LL);
      if ( (bgmIndex & 0x80000000) != 0 )
      {
        v58 = (System_String_o *)StringLiteral_5402/*"Detail: OFF"*/;
      }
      else
      {
        v97 = this->fields.bgmIndex;
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97, v54, v55, v56);
        v58 = System_String__Format((System_String_o *)StringLiteral_5403/*"Detail:{0}"*/, v57, 0LL);
      }
      v17 = (System_String_o *)sub_1C21EE0(string___TypeInfo, 5LL);
      if ( v17 )
      {
        v65 = v17;
        if ( LODWORD(v17[1].klass) )
        {
          v66 = StringLiteral_1842/*"<size="*/;
          v17[1].monitor = (void *)StringLiteral_1842/*"<size="*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v17[1].monitor, v66, v59, v60, v61, v62, v63, v64);
          v98[0] = v16 * 18.0;
          v17 = System_Single__ToString(v67, (const MethodInfo *)v98);
          if ( LODWORD(v65[1].klass) > 1 )
          {
            v65[1].fields = (System_String_Fields)v17;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v65[1].fields, (int64_t)v17, v68, v69, v70, v71, v72, v73);
            if ( LODWORD(v65[1].klass) > 2 )
            {
              v80 = StringLiteral_1871/*">"*/;
              v65[2].klass = (System_String_c *)StringLiteral_1871/*">"*/;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v65[2], v80, v74, v75, v76, v77, v78, v79);
              if ( LODWORD(v65[1].klass) > 3 )
              {
                v65[2].monitor = v58;
                sub_1C21DDC((PartyOrganizationUtility_o *)&v65[2].monitor, (int64_t)v58, v81, v82, v83, v84, v85, v86);
                if ( LODWORD(v65[1].klass) > 4 )
                {
                  v93 = StringLiteral_1630/*"</size>"*/;
                  v65[2].fields = (System_String_Fields)StringLiteral_1630/*"</size>"*/;
                  sub_1C21DDC((PartyOrganizationUtility_o *)&v65[2].fields, v93, v87, v88, v89, v90, v91, v92);
                  v94 = System_String__Concat_63129004((System_String_array *)v65, 0LL);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v101.fields.m_XMin = 10.0;
                  v101.fields.m_YMin = (float)(v16 * 57.0) + 10.0;
                  v101.fields.m_Width = v16 * 300.0;
                  v101.fields.m_Height = v16 * 40.0;
                  if ( UnityEngine_GUI__Button(v101, v94, 0LL) )
                  {
                    v95 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v95;
                    v96 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v96 = BgmManager_TypeInfo;
                    }
                    if ( v95 >= v96->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1C2209C(v17, v18);
      }
    }
    sub_1C22094(v17, v18);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}