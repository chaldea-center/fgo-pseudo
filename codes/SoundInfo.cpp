void __fastcall SoundInfo___ctor(SoundInfo_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.baseScale = -3236324966LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundInfo__OnGUI(SoundInfo_o *this, const MethodInfo *method)
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
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  int32_t bgmIndex; // w24
  SoundLogger_c *v38; // x0
  System_String_o *LogBgm; // x0
  const MethodInfo *v40; // x1
  System_String_o *v41; // x20
  int32_t v42; // w21
  System_String_o *LogSe; // x0
  __int64 *v44; // x8
  SoundLogger_c *v45; // x0
  System_String_o *LogBgmDetailLast; // x0
  System_String_o *v47; // x20
  System_String_o *LogVoice; // x0
  System_String_o *v49; // x20
  __int64 v50; // x1
  float v51; // s11
  System_String_o *v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_String_o *v60; // x21
  int64_t v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x1
  System_String_o *v88; // x0
  Il2CppObject *v89; // x0
  System_String_o *v90; // x21
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_String_o *v97; // x20
  int64_t v98; // x1
  float v99; // s0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x1
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  int64_t v125; // x1
  __int64 v126; // x1
  System_String_o *v127; // x20
  __int64 v128; // x1
  int32_t v129; // w20
  BgmManager_c *v130; // x0
  int32_t v131; // [xsp+28h] [xbp-58h] BYREF
  float v132[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v133; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1577D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_GUI_TypeInfo, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&SoundLogger_TypeInfo, v10, v11);
    sub_1BCA7E0(&string___TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16070/*"[BGM]\n"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_5368/*"Detail:{0}"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1837/*"<size="*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_45/*"\n\n\n"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_5367/*"Detail: OFF"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_65/*"\n[SE]\n"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_1625/*"</size>"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_66/*"\n[VOICE]\n"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_1858/*">"*/, v34, v35);
    byte_4B1577D = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    bgmIndex = this->fields.bgmIndex;
    v38 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v36);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v38);
    v41 = System_String__Concat_62401220((System_String_o *)StringLiteral_16070/*"[BGM]\n"*/, LogBgm, 0LL);
    if ( (bgmIndex & 0x80000000) != 0 )
    {
      v45 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v40);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v45);
      v47 = System_String__Concat_62412480(v41, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0LL);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v47);
      v41 = System_String__Concat_62412480(v47, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0LL);
      LogSe = SoundLogger__getLogSe((const MethodInfo *)v41);
      v44 = &StringLiteral_65/*"\n[SE]\n"*/;
    }
    else
    {
      v42 = this->fields.bgmIndex;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v40);
      LogSe = SoundLogger__GetLogBgmDetail(v42, v40);
      v44 = &StringLiteral_45/*"\n\n\n"*/;
    }
    v49 = System_String__Concat_62412480(v41, (System_String_o *)*v44, LogSe, 0LL);
    v51 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v50);
    v133.fields.m_XMin = 5.0;
    v133.fields.m_YMin = 5.0;
    v133.fields.m_Width = v51 * 310.0;
    v133.fields.m_Height = v51 * 825.0;
    UnityEngine_GUI__Box(v133, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v52 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
    if ( v52 )
    {
      v60 = v52;
      if ( !LODWORD(v52[1].klass) )
        goto LABEL_40;
      v61 = StringLiteral_1837/*"<size="*/;
      v52[1].monitor = (void *)StringLiteral_1837/*"<size="*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v52[1].monitor, v61, v54, v55, v56, v57, v58, v59);
      v132[0] = v51 * 18.0;
      v52 = System_Single__ToString(18.0, (const MethodInfo *)v132);
      if ( LODWORD(v60[1].klass) <= 1 )
        goto LABEL_40;
      v60[1].fields = (System_String_Fields)v52;
      sub_1BCA784((PartyOrganizationUtility_o *)&v60[1].fields, (int64_t)v52, v62, v63, v64, v65, v66, v67);
      if ( LODWORD(v60[1].klass) <= 2 )
        goto LABEL_40;
      v74 = StringLiteral_1858/*">"*/;
      v60[2].klass = (System_String_c *)StringLiteral_1858/*">"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v60[2], v74, v68, v69, v70, v71, v72, v73);
      if ( LODWORD(v60[1].klass) <= 3 )
        goto LABEL_40;
      v60[2].monitor = v49;
      sub_1BCA784((PartyOrganizationUtility_o *)&v60[2].monitor, (int64_t)v49, v75, v76, v77, v78, v79, v80);
      if ( LODWORD(v60[1].klass) <= 4 )
        goto LABEL_40;
      v87 = StringLiteral_1625/*"</size>"*/;
      v60[2].fields = (System_String_Fields)StringLiteral_1625/*"</size>"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v60[2].fields, v87, v81, v82, v83, v84, v85, v86);
      v88 = System_String__Concat_62414748((System_String_array *)v60, 0LL);
      v134.fields.m_XMin = 10.0;
      v134.fields.m_YMin = 5.0;
      v134.fields.m_Width = v51 * 1000.0;
      v134.fields.m_Height = v51 * 825.0;
      UnityEngine_GUI__Label(v134, v88, 0LL);
      if ( (bgmIndex & 0x80000000) != 0 )
      {
        v90 = (System_String_o *)StringLiteral_5367/*"Detail: OFF"*/;
      }
      else
      {
        v131 = this->fields.bgmIndex;
        v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
        v90 = System_String__Format((System_String_o *)StringLiteral_5368/*"Detail:{0}"*/, v89, 0LL);
      }
      v52 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
      if ( v52 )
      {
        v97 = v52;
        if ( LODWORD(v52[1].klass) )
        {
          v98 = StringLiteral_1837/*"<size="*/;
          v52[1].monitor = (void *)StringLiteral_1837/*"<size="*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&v52[1].monitor, v98, v91, v92, v93, v94, v95, v96);
          v132[0] = v51 * 18.0;
          v52 = System_Single__ToString(v99, (const MethodInfo *)v132);
          if ( LODWORD(v97[1].klass) > 1 )
          {
            v97[1].fields = (System_String_Fields)v52;
            sub_1BCA784((PartyOrganizationUtility_o *)&v97[1].fields, (int64_t)v52, v100, v101, v102, v103, v104, v105);
            if ( LODWORD(v97[1].klass) > 2 )
            {
              v112 = StringLiteral_1858/*">"*/;
              v97[2].klass = (System_String_c *)StringLiteral_1858/*">"*/;
              sub_1BCA784((PartyOrganizationUtility_o *)&v97[2], v112, v106, v107, v108, v109, v110, v111);
              if ( LODWORD(v97[1].klass) > 3 )
              {
                v97[2].monitor = v90;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v97[2].monitor,
                  (int64_t)v90,
                  v113,
                  v114,
                  v115,
                  v116,
                  v117,
                  v118);
                if ( LODWORD(v97[1].klass) > 4 )
                {
                  v125 = StringLiteral_1625/*"</size>"*/;
                  v97[2].fields = (System_String_Fields)StringLiteral_1625/*"</size>"*/;
                  sub_1BCA784((PartyOrganizationUtility_o *)&v97[2].fields, v125, v119, v120, v121, v122, v123, v124);
                  v127 = System_String__Concat_62414748((System_String_array *)v97, 0LL);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v126);
                  v135.fields.m_XMin = 10.0;
                  v135.fields.m_YMin = (float)(v51 * 57.0) + 10.0;
                  v135.fields.m_Width = v51 * 300.0;
                  v135.fields.m_Height = v51 * 40.0;
                  if ( UnityEngine_GUI__Button(v135, v127, 0LL) )
                  {
                    v129 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v129;
                    v130 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v128);
                      v130 = BgmManager_TypeInfo;
                    }
                    if ( v129 >= v130->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1BCAA44(v52, v53);
      }
    }
    sub_1BCAA3C(v52, v53);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}