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
  System_String_o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  System_String_o *v62; // x19
  int32_t v63; // w1
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  int32_t v89; // w1
  System_String_o *v90; // x19
  int32_t v91; // [xsp+8h] [xbp-78h] BYREF
  MethodInfo methoda; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Rect_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEDC3F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&UnityEngine_GUI_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/);
    sub_1C7BAE8(&StringLiteral_15950/*"[BGM]\n"*/);
    sub_1C7BAE8(&StringLiteral_5259/*"Detail:{0}"*/);
    sub_1C7BAE8(&StringLiteral_1718/*"<size="*/);
    sub_1C7BAE8(&StringLiteral_45/*"\n\n\n"*/);
    sub_1C7BAE8(&StringLiteral_5258/*"Detail: OFF"*/);
    sub_1C7BAE8(&StringLiteral_65/*"\n[SE]\n"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_1521/*"</size>"*/);
    sub_1C7BAE8(&StringLiteral_66/*"\n[VOICE]\n"*/);
    sub_1C7BAE8(&StringLiteral_1744/*">"*/);
    byte_4CEDC3F = 1;
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
    v7 = System_String__Concat_64176912((System_String_o *)StringLiteral_15950/*"[BGM]\n"*/, LogBgm, 0);
    if ( bgmIndex < 0 )
    {
      v11 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v11);
      v13 = System_String__Concat_64215176(v7, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v13);
      v7 = System_String__Concat_64215176(v13, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0);
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
    v15 = System_String__Concat_64215176(v7, (System_String_o *)*v10, LogSe, 0);
    v16 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v93.fields.m_XMin = 5.0;
    v93.fields.m_YMin = 5.0;
    v93.fields.m_Width = v16 * 310.0;
    v93.fields.m_Height = v16 * 825.0;
    UnityEngine_GUI__Box(v93, (System_String_o *)StringLiteral_1/*""*/, 0);
    v17 = (System_String_o *)sub_1C7BB90(string___TypeInfo, 5);
    if ( v17 )
    {
      v25 = v17;
      if ( !LODWORD(v17[1].klass) )
        goto LABEL_36;
      v26 = StringLiteral_1718/*"<size="*/;
      v17[1].monitor = (void *)StringLiteral_1718/*"<size="*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17[1].monitor, v26, v19, v20, v21, v22, v23, v24);
      *(float *)&methoda.methodPointer = v16 * 18.0;
      v17 = System_Single__ToString(v16 * 18.0, &methoda);
      if ( LODWORD(v25[1].klass) <= 1 )
        goto LABEL_36;
      v25[1].fields = (System_String_Fields)v17;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25[1].fields, (int32_t)v17, v27, v28, v29, v30, v31, v32);
      if ( LODWORD(v25[1].klass) <= 2 )
        goto LABEL_36;
      v39 = StringLiteral_1744/*">"*/;
      v25[2].klass = (System_String_c *)StringLiteral_1744/*">"*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25[2], v39, v33, v34, v35, v36, v37, v38);
      if ( LODWORD(v25[1].klass) <= 3 )
        goto LABEL_36;
      v25[2].monitor = v15;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25[2].monitor, (int32_t)v15, v40, v41, v42, v43, v44, v45);
      if ( LODWORD(v25[1].klass) <= 4 )
        goto LABEL_36;
      v52 = StringLiteral_1521/*"</size>"*/;
      v25[2].fields = (System_String_Fields)StringLiteral_1521/*"</size>"*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25[2].fields, v52, v46, v47, v48, v49, v50, v51);
      v53 = System_String__Concat_64217444((System_String_array *)v25, 0);
      v94.fields.m_XMin = 10.0;
      v94.fields.m_YMin = 5.0;
      v94.fields.m_Width = v16 * 1000.0;
      v94.fields.m_Height = v16 * 825.0;
      UnityEngine_GUI__Label(v94, v53, 0);
      if ( bgmIndex < 0 )
      {
        v55 = (System_String_o *)StringLiteral_5258/*"Detail: OFF"*/;
      }
      else
      {
        v91 = this->fields.bgmIndex;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91);
        v55 = System_String__Format((System_String_o *)StringLiteral_5259/*"Detail:{0}"*/, v54, 0);
      }
      v17 = (System_String_o *)sub_1C7BB90(string___TypeInfo, 5);
      if ( v17 )
      {
        v62 = v17;
        if ( LODWORD(v17[1].klass) )
        {
          v63 = StringLiteral_1718/*"<size="*/;
          v17[1].monitor = (void *)StringLiteral_1718/*"<size="*/;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17[1].monitor, v63, v56, v57, v58, v59, v60, v61);
          *(float *)&methoda.methodPointer = v16 * 22.0;
          v17 = System_Single__ToString(v16 * 22.0, &methoda);
          if ( LODWORD(v62[1].klass) > 1 )
          {
            v62[1].fields = (System_String_Fields)v17;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v62[1].fields, (int32_t)v17, v64, v65, v66, v67, v68, v69);
            if ( LODWORD(v62[1].klass) > 2 )
            {
              v76 = StringLiteral_1744/*">"*/;
              v62[2].klass = (System_String_c *)StringLiteral_1744/*">"*/;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v62[2], v76, v70, v71, v72, v73, v74, v75);
              if ( LODWORD(v62[1].klass) > 3 )
              {
                v62[2].monitor = v55;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v62[2].monitor, (int32_t)v55, v77, v78, v79, v80, v81, v82);
                if ( LODWORD(v62[1].klass) > 4 )
                {
                  v89 = StringLiteral_1521/*"</size>"*/;
                  v62[2].fields = (System_String_Fields)StringLiteral_1521/*"</size>"*/;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v62[2].fields, v89, v83, v84, v85, v86, v87, v88);
                  v90 = System_String__Concat_64217444((System_String_array *)v62, 0);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v95.fields.m_XMin = 10.0;
                  v95.fields.m_YMin = (float)(v16 * 57.0) + 10.0;
                  v95.fields.m_Width = v16 * 300.0;
                  v95.fields.m_Height = v16 * 40.0;
                  UnityEngine_GUI__Label(v95, v90, 0);
                  return;
                }
              }
            }
          }
        }
LABEL_36:
        sub_1C7BD48(v17);
      }
    }
    sub_1C7BD40(v17, v18);
  }
}


void SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}