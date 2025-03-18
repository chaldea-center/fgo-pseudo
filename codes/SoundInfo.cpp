void __fastcall SoundInfo___ctor(SoundInfo_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.baseScale = -3236324966LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundInfo__OnGUI(SoundInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t bgmIndex; // w24
  SoundLogger_c *v20; // x0
  System_String_o *LogBgm; // x0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x20
  int32_t v24; // w21
  System_String_o *LogSe; // x0
  __int64 *v26; // x8
  SoundLogger_c *v27; // x0
  System_String_o *LogBgmDetailLast; // x0
  System_String_o *v29; // x20
  System_String_o *LogVoice; // x0
  System_String_o *v31; // x20
  float v32; // s11
  System_String_o *v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o *v41; // x21
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  System_String_o *v69; // x0
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  System_String_o *v74; // x21
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_String_o *v81; // x20
  int64_t v82; // x1
  float v83; // s0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x1
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x1
  System_String_o *v110; // x20
  int32_t v111; // w20
  BgmManager_c *v112; // x0
  int32_t v113; // [xsp+28h] [xbp-58h] BYREF
  float v114[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C214CC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Application_TypeInfo, method);
    sub_1C3B764(&BgmManager_TypeInfo, v3);
    sub_1C3B764(&UnityEngine_GUI_TypeInfo, v4);
    sub_1C3B764(&int_TypeInfo, v5);
    sub_1C3B764(&SoundLogger_TypeInfo, v6);
    sub_1C3B764(&string___TypeInfo, v7);
    sub_1C3B764(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, v8);
    sub_1C3B764(&StringLiteral_16219/*"_oneValue"*/, v9);
    sub_1C3B764(&StringLiteral_5391/*"EOF"*/, v10);
    sub_1C3B764(&StringLiteral_1821/*"A label in the input string exceeded the length in ASCII representation, at {0}"*/, v11);
    sub_1C3B764(&StringLiteral_45/*"\n\n\n"*/, v12);
    sub_1C3B764(&StringLiteral_5390/*"ENUMERATED"*/, v13);
    sub_1C3B764(&StringLiteral_66/*"\n[SE]\n"*/, v14);
    sub_1C3B764(&StringLiteral_1/*""*/, v15);
    sub_1C3B764(&StringLiteral_1609/*"<ds.DataColumn.set_AutoIncrementStep|API> {0}, {1}"*/, v16);
    sub_1C3B764(&StringLiteral_67/*"\n[VOICE]\n"*/, v17);
    sub_1C3B764(&StringLiteral_1847/*"A.D."*/, v18);
    byte_4C214CC = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    bgmIndex = this->fields.bgmIndex;
    v20 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v20);
    v23 = System_String__Concat_63368612((System_String_o *)StringLiteral_16219/*"_oneValue"*/, LogBgm, 0LL);
    if ( (bgmIndex & 0x80000000) != 0 )
    {
      v27 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v27);
      v29 = System_String__Concat_63379872(v23, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0LL);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v29);
      v23 = System_String__Concat_63379872(v29, (System_String_o *)StringLiteral_67/*"\n[VOICE]\n"*/, LogVoice, 0LL);
      LogSe = SoundLogger__getLogSe((const MethodInfo *)v23);
      v26 = &StringLiteral_66/*"\n[SE]\n"*/;
    }
    else
    {
      v24 = this->fields.bgmIndex;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogSe = SoundLogger__GetLogBgmDetail(v24, v22);
      v26 = &StringLiteral_45/*"\n\n\n"*/;
    }
    v31 = System_String__Concat_63379872(v23, (System_String_o *)*v26, LogSe, 0LL);
    v32 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v115.fields.m_XMin = 5.0;
    v115.fields.m_YMin = 5.0;
    v115.fields.m_Width = v32 * 310.0;
    v115.fields.m_Height = v32 * 825.0;
    UnityEngine_GUI__Box(v115, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v33 = (System_String_o *)sub_1C3B80C(string___TypeInfo, 5LL);
    if ( v33 )
    {
      v41 = v33;
      if ( !LODWORD(v33[1].klass) )
        goto LABEL_40;
      v42 = StringLiteral_1821/*"A label in the input string exceeded the length in ASCII representation, at {0}"*/;
      v33[1].monitor = (void *)StringLiteral_1821/*"A label in the input string exceeded the length in ASCII representation, at {0}"*/;
      sub_1C3B708((PartyOrganizationUtility_o *)&v33[1].monitor, v42, v35, v36, v37, v38, v39, v40);
      v114[0] = v32 * 18.0;
      v33 = System_Single__ToString(18.0, (const MethodInfo *)v114);
      if ( LODWORD(v41[1].klass) <= 1 )
        goto LABEL_40;
      v41[1].fields = (System_String_Fields)v33;
      sub_1C3B708((PartyOrganizationUtility_o *)&v41[1].fields, (int64_t)v33, v43, v44, v45, v46, v47, v48);
      if ( LODWORD(v41[1].klass) <= 2 )
        goto LABEL_40;
      v55 = StringLiteral_1847/*"A.D."*/;
      v41[2].klass = (System_String_c *)StringLiteral_1847/*"A.D."*/;
      sub_1C3B708((PartyOrganizationUtility_o *)&v41[2], v55, v49, v50, v51, v52, v53, v54);
      if ( LODWORD(v41[1].klass) <= 3 )
        goto LABEL_40;
      v41[2].monitor = v31;
      sub_1C3B708((PartyOrganizationUtility_o *)&v41[2].monitor, (int64_t)v31, v56, v57, v58, v59, v60, v61);
      if ( LODWORD(v41[1].klass) <= 4 )
        goto LABEL_40;
      v68 = StringLiteral_1609/*"<ds.DataColumn.set_AutoIncrementStep|API> {0}, {1}"*/;
      v41[2].fields = (System_String_Fields)StringLiteral_1609/*"<ds.DataColumn.set_AutoIncrementStep|API> {0}, {1}"*/;
      sub_1C3B708((PartyOrganizationUtility_o *)&v41[2].fields, v68, v62, v63, v64, v65, v66, v67);
      v69 = System_String__Concat_63382140((System_String_array *)v41, 0LL);
      v116.fields.m_XMin = 10.0;
      v116.fields.m_YMin = 5.0;
      v116.fields.m_Width = v32 * 1000.0;
      v116.fields.m_Height = v32 * 825.0;
      UnityEngine_GUI__Label(v116, v69, 0LL);
      if ( (bgmIndex & 0x80000000) != 0 )
      {
        v74 = (System_String_o *)StringLiteral_5390/*"ENUMERATED"*/;
      }
      else
      {
        v113 = this->fields.bgmIndex;
        v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v113, v70, v71, v72);
        v74 = System_String__Format((System_String_o *)StringLiteral_5391/*"EOF"*/, v73, 0LL);
      }
      v33 = (System_String_o *)sub_1C3B80C(string___TypeInfo, 5LL);
      if ( v33 )
      {
        v81 = v33;
        if ( LODWORD(v33[1].klass) )
        {
          v82 = StringLiteral_1821/*"A label in the input string exceeded the length in ASCII representation, at {0}"*/;
          v33[1].monitor = (void *)StringLiteral_1821/*"A label in the input string exceeded the length in ASCII representation, at {0}"*/;
          sub_1C3B708((PartyOrganizationUtility_o *)&v33[1].monitor, v82, v75, v76, v77, v78, v79, v80);
          v114[0] = v32 * 18.0;
          v33 = System_Single__ToString(v83, (const MethodInfo *)v114);
          if ( LODWORD(v81[1].klass) > 1 )
          {
            v81[1].fields = (System_String_Fields)v33;
            sub_1C3B708((PartyOrganizationUtility_o *)&v81[1].fields, (int64_t)v33, v84, v85, v86, v87, v88, v89);
            if ( LODWORD(v81[1].klass) > 2 )
            {
              v96 = StringLiteral_1847/*"A.D."*/;
              v81[2].klass = (System_String_c *)StringLiteral_1847/*"A.D."*/;
              sub_1C3B708((PartyOrganizationUtility_o *)&v81[2], v96, v90, v91, v92, v93, v94, v95);
              if ( LODWORD(v81[1].klass) > 3 )
              {
                v81[2].monitor = v74;
                sub_1C3B708(
                  (PartyOrganizationUtility_o *)&v81[2].monitor,
                  (int64_t)v74,
                  v97,
                  v98,
                  v99,
                  v100,
                  v101,
                  v102);
                if ( LODWORD(v81[1].klass) > 4 )
                {
                  v109 = StringLiteral_1609/*"<ds.DataColumn.set_AutoIncrementStep|API> {0}, {1}"*/;
                  v81[2].fields = (System_String_Fields)StringLiteral_1609/*"<ds.DataColumn.set_AutoIncrementStep|API> {0}, {1}"*/;
                  sub_1C3B708((PartyOrganizationUtility_o *)&v81[2].fields, v109, v103, v104, v105, v106, v107, v108);
                  v110 = System_String__Concat_63382140((System_String_array *)v81, 0LL);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v117.fields.m_XMin = 10.0;
                  v117.fields.m_YMin = (float)(v32 * 57.0) + 10.0;
                  v117.fields.m_Width = v32 * 300.0;
                  v117.fields.m_Height = v32 * 40.0;
                  if ( UnityEngine_GUI__Button(v117, v110, 0LL) )
                  {
                    v111 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v111;
                    v112 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v112 = BgmManager_TypeInfo;
                    }
                    if ( v111 >= v112->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1C3B9C8(v33, v34);
      }
    }
    sub_1C3B9C0(v33, v34);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}