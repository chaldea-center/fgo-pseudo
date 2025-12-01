void SoundInfo___ctor(SoundInfo_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.baseScale = -3236324966LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SoundInfo__OnGUI(SoundInfo_o *this, const MethodInfo *method)
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_String_o *v25; // x21
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  System_String_o *v53; // x0
  Il2CppObject *v54; // x0
  System_String_o *v55; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  System_String_o *v62; // x20
  int32_t v63; // w1
  float v64; // s0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  int32_t v77; // w1
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w1
  System_String_o *v91; // x20
  int32_t v92; // w20
  BgmManager_c *v93; // x0
  int32_t v94; // [xsp+28h] [xbp-58h] BYREF
  float v95[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC6982 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&BgmManager_TypeInfo);
    sub_1C713B0(&UnityEngine_GUI_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&SoundLogger_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/);
    sub_1C713B0(&StringLiteral_15895/*"[BGM]\n"*/);
    sub_1C713B0(&StringLiteral_5247/*"Detail:{0}"*/);
    sub_1C713B0(&StringLiteral_1717/*"<size="*/);
    sub_1C713B0(&StringLiteral_45/*"\n\n\n"*/);
    sub_1C713B0(&StringLiteral_5246/*"Detail: OFF"*/);
    sub_1C713B0(&StringLiteral_65/*"\n[SE]\n"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_1520/*"</size>"*/);
    sub_1C713B0(&StringLiteral_66/*"\n[VOICE]\n"*/);
    sub_1C713B0(&StringLiteral_1743/*">"*/);
    byte_4CC6982 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    bgmIndex = this->fields.bgmIndex;
    v4 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v4);
    v7 = System_String__Concat_64031724((System_String_o *)StringLiteral_15895/*"[BGM]\n"*/, LogBgm, 0);
    if ( bgmIndex < 0 )
    {
      v11 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v11);
      v13 = System_String__Concat_64069988(v7, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v13);
      v7 = System_String__Concat_64069988(v13, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0);
      LogSe = SoundLogger__getLogSe((const MethodInfo *)v7);
      v10 = &StringLiteral_65/*"\n[SE]\n"*/;
    }
    else
    {
      v8 = this->fields.bgmIndex;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogSe = SoundLogger__GetLogBgmDetail(v8, v6);
      v10 = &StringLiteral_45/*"\n\n\n"*/;
    }
    v15 = System_String__Concat_64069988(v7, (System_String_o *)*v10, LogSe, 0);
    v16 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v96.fields.m_XMin = 5.0;
    v96.fields.m_YMin = 5.0;
    v96.fields.m_Width = v16 * 310.0;
    v96.fields.m_Height = v16 * 825.0;
    UnityEngine_GUI__Box(v96, (System_String_o *)StringLiteral_1/*""*/, 0);
    v17 = (System_String_o *)sub_1C71458(string___TypeInfo, 5);
    if ( v17 )
    {
      v25 = v17;
      if ( !LODWORD(v17[1].klass) )
        goto LABEL_40;
      v26 = StringLiteral_1717/*"<size="*/;
      v17[1].monitor = (void *)StringLiteral_1717/*"<size="*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v17[1].monitor, v26, v19, v20, v21, v22, v23, v24);
      v95[0] = v16 * 18.0;
      v17 = System_Single__ToString(18.0, (const MethodInfo *)v95);
      if ( LODWORD(v25[1].klass) <= 1 )
        goto LABEL_40;
      v25[1].fields = (System_String_Fields)v17;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v25[1].fields, (int32_t)v17, v27, v28, v29, v30, v31, v32);
      if ( LODWORD(v25[1].klass) <= 2 )
        goto LABEL_40;
      v39 = StringLiteral_1743/*">"*/;
      v25[2].klass = (System_String_c *)StringLiteral_1743/*">"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v25[2], v39, v33, v34, v35, v36, v37, v38);
      if ( LODWORD(v25[1].klass) <= 3 )
        goto LABEL_40;
      v25[2].monitor = v15;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v25[2].monitor, (int32_t)v15, v40, v41, v42, v43, v44, v45);
      if ( LODWORD(v25[1].klass) <= 4 )
        goto LABEL_40;
      v52 = StringLiteral_1520/*"</size>"*/;
      v25[2].fields = (System_String_Fields)StringLiteral_1520/*"</size>"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v25[2].fields, v52, v46, v47, v48, v49, v50, v51);
      v53 = System_String__Concat_64072256((System_String_array *)v25, 0);
      v97.fields.m_XMin = 10.0;
      v97.fields.m_YMin = 5.0;
      v97.fields.m_Width = v16 * 1000.0;
      v97.fields.m_Height = v16 * 825.0;
      UnityEngine_GUI__Label(v97, v53, 0);
      if ( bgmIndex < 0 )
      {
        v55 = (System_String_o *)StringLiteral_5246/*"Detail: OFF"*/;
      }
      else
      {
        v94 = this->fields.bgmIndex;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
        v55 = System_String__Format((System_String_o *)StringLiteral_5247/*"Detail:{0}"*/, v54, 0);
      }
      v17 = (System_String_o *)sub_1C71458(string___TypeInfo, 5);
      if ( v17 )
      {
        v62 = v17;
        if ( LODWORD(v17[1].klass) )
        {
          v63 = StringLiteral_1717/*"<size="*/;
          v17[1].monitor = (void *)StringLiteral_1717/*"<size="*/;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v17[1].monitor, v63, v56, v57, v58, v59, v60, v61);
          v95[0] = v16 * 18.0;
          v17 = System_Single__ToString(v64, (const MethodInfo *)v95);
          if ( LODWORD(v62[1].klass) > 1 )
          {
            v62[1].fields = (System_String_Fields)v17;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v62[1].fields, (int32_t)v17, v65, v66, v67, v68, v69, v70);
            if ( LODWORD(v62[1].klass) > 2 )
            {
              v77 = StringLiteral_1743/*">"*/;
              v62[2].klass = (System_String_c *)StringLiteral_1743/*">"*/;
              sub_1C71354((GrandQuestFolderBoardItem_o *)&v62[2], v77, v71, v72, v73, v74, v75, v76);
              if ( LODWORD(v62[1].klass) > 3 )
              {
                v62[2].monitor = v55;
                sub_1C71354((GrandQuestFolderBoardItem_o *)&v62[2].monitor, (int32_t)v55, v78, v79, v80, v81, v82, v83);
                if ( LODWORD(v62[1].klass) > 4 )
                {
                  v90 = StringLiteral_1520/*"</size>"*/;
                  v62[2].fields = (System_String_Fields)StringLiteral_1520/*"</size>"*/;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)&v62[2].fields, v90, v84, v85, v86, v87, v88, v89);
                  v91 = System_String__Concat_64072256((System_String_array *)v62, 0);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v98.fields.m_XMin = 10.0;
                  v98.fields.m_YMin = (float)(v16 * 57.0) + 10.0;
                  v98.fields.m_Width = v16 * 300.0;
                  v98.fields.m_Height = v16 * 40.0;
                  if ( UnityEngine_GUI__Button(v98, v91, 0) )
                  {
                    v92 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v92;
                    v93 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v93 = BgmManager_TypeInfo;
                    }
                    if ( v92 >= v93->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1C71610(v17);
      }
    }
    sub_1C71608(v17, v18);
  }
}


void SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}