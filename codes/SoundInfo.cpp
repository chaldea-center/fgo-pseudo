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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x21
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  System_String_o *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  Il2CppObject *v39; // x0
  System_String_o *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_String_o *v43; // x20
  int32_t v44; // w1
  float v45; // s0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  System_String_o *v56; // x20
  int32_t v57; // w20
  BgmManager_c *v58; // x0
  int32_t v59; // [xsp+28h] [xbp-58h] BYREF
  float v60[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C42551 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&UnityEngine_GUI_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&SoundLogger_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/);
    sub_1C37058(&StringLiteral_15895/*"[BGM]\n"*/);
    sub_1C37058(&StringLiteral_5256/*"Detail:{0}"*/);
    sub_1C37058(&StringLiteral_1724/*"<size="*/);
    sub_1C37058(&StringLiteral_45/*"\n\n\n"*/);
    sub_1C37058(&StringLiteral_5255/*"Detail: OFF"*/);
    sub_1C37058(&StringLiteral_65/*"\n[SE]\n"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_1527/*"</size>"*/);
    sub_1C37058(&StringLiteral_66/*"\n[VOICE]\n"*/);
    sub_1C37058(&StringLiteral_1750/*">"*/);
    byte_4C42551 = 1;
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
    v7 = System_String__Concat_63561656((System_String_o *)StringLiteral_15895/*"[BGM]\n"*/, LogBgm, 0);
    if ( bgmIndex < 0 )
    {
      v11 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v11);
      v13 = System_String__Concat_63599904(v7, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v13);
      v7 = System_String__Concat_63599904(v13, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0);
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
    v15 = System_String__Concat_63599904(v7, (System_String_o *)*v10, LogSe, 0);
    v16 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v61.fields.m_XMin = 5.0;
    v61.fields.m_YMin = 5.0;
    v61.fields.m_Width = v16 * 310.0;
    v61.fields.m_Height = v16 * 825.0;
    UnityEngine_GUI__Box(v61, (System_String_o *)StringLiteral_1/*""*/, 0);
    v17 = (System_String_o *)sub_1C37100(string___TypeInfo, 5);
    if ( v17 )
    {
      v20 = v17;
      if ( !LODWORD(v17[1].klass) )
        goto LABEL_40;
      v21 = StringLiteral_1724/*"<size="*/;
      v17[1].monitor = (void *)StringLiteral_1724/*"<size="*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v17[1].monitor, v21, v18, v19);
      v60[0] = v16 * 18.0;
      v17 = System_Single__ToString(18.0, (const MethodInfo *)v60);
      if ( LODWORD(v20[1].klass) <= 1 )
        goto LABEL_40;
      v20[1].fields = (System_String_Fields)v17;
      sub_1C36FFC((CGThumbnailListItem_o *)&v20[1].fields, (int32_t)v17, v22, v23);
      if ( LODWORD(v20[1].klass) <= 2 )
        goto LABEL_40;
      v26 = StringLiteral_1750/*">"*/;
      v20[2].klass = (System_String_c *)StringLiteral_1750/*">"*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v20[2], v26, v24, v25);
      if ( LODWORD(v20[1].klass) <= 3 )
        goto LABEL_40;
      v20[2].monitor = v15;
      sub_1C36FFC((CGThumbnailListItem_o *)&v20[2].monitor, (int32_t)v15, v27, v28);
      if ( LODWORD(v20[1].klass) <= 4 )
        goto LABEL_40;
      v31 = StringLiteral_1527/*"</size>"*/;
      v20[2].fields = (System_String_Fields)StringLiteral_1527/*"</size>"*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v20[2].fields, v31, v29, v30);
      v32 = System_String__Concat_63602172((System_String_array *)v20, 0);
      v62.fields.m_XMin = 10.0;
      v62.fields.m_YMin = 5.0;
      v62.fields.m_Width = v16 * 1000.0;
      v62.fields.m_Height = v16 * 825.0;
      UnityEngine_GUI__Label(v62, v32, 0);
      if ( bgmIndex < 0 )
      {
        v40 = (System_String_o *)StringLiteral_5255/*"Detail: OFF"*/;
      }
      else
      {
        v59 = this->fields.bgmIndex;
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v33, v34, v35, v36, v37, v38);
        v40 = System_String__Format((System_String_o *)StringLiteral_5256/*"Detail:{0}"*/, v39, 0);
      }
      v17 = (System_String_o *)sub_1C37100(string___TypeInfo, 5);
      if ( v17 )
      {
        v43 = v17;
        if ( LODWORD(v17[1].klass) )
        {
          v44 = StringLiteral_1724/*"<size="*/;
          v17[1].monitor = (void *)StringLiteral_1724/*"<size="*/;
          sub_1C36FFC((CGThumbnailListItem_o *)&v17[1].monitor, v44, v41, v42);
          v60[0] = v16 * 18.0;
          v17 = System_Single__ToString(v45, (const MethodInfo *)v60);
          if ( LODWORD(v43[1].klass) > 1 )
          {
            v43[1].fields = (System_String_Fields)v17;
            sub_1C36FFC((CGThumbnailListItem_o *)&v43[1].fields, (int32_t)v17, v46, v47);
            if ( LODWORD(v43[1].klass) > 2 )
            {
              v50 = StringLiteral_1750/*">"*/;
              v43[2].klass = (System_String_c *)StringLiteral_1750/*">"*/;
              sub_1C36FFC((CGThumbnailListItem_o *)&v43[2], v50, v48, v49);
              if ( LODWORD(v43[1].klass) > 3 )
              {
                v43[2].monitor = v40;
                sub_1C36FFC((CGThumbnailListItem_o *)&v43[2].monitor, (int32_t)v40, v51, v52);
                if ( LODWORD(v43[1].klass) > 4 )
                {
                  v55 = StringLiteral_1527/*"</size>"*/;
                  v43[2].fields = (System_String_Fields)StringLiteral_1527/*"</size>"*/;
                  sub_1C36FFC((CGThumbnailListItem_o *)&v43[2].fields, v55, v53, v54);
                  v56 = System_String__Concat_63602172((System_String_array *)v43, 0);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v63.fields.m_XMin = 10.0;
                  v63.fields.m_YMin = (float)(v16 * 57.0) + 10.0;
                  v63.fields.m_Width = v16 * 300.0;
                  v63.fields.m_Height = v16 * 40.0;
                  if ( UnityEngine_GUI__Button(v63, v56, 0) )
                  {
                    v57 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v57;
                    v58 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v58 = BgmManager_TypeInfo;
                    }
                    if ( v57 >= v58->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1C372BC(v17);
      }
    }
    sub_1C372B4(v17);
  }
}


void SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}