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
  const MethodInfo *v20; // x3
  System_String_o *v21; // x21
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  System_String_o *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  Il2CppObject *v40; // x0
  System_String_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_String_o *v44; // x20
  int32_t v45; // w1
  float v46; // s0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w1
  System_String_o *v57; // x20
  int32_t v58; // w20
  BgmManager_c *v59; // x0
  int32_t v60; // [xsp+28h] [xbp-58h] BYREF
  float v61[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C562FA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&UnityEngine_GUI_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&SoundLogger_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/);
    sub_1C3E564(&StringLiteral_15905/*"[BGM]\n"*/);
    sub_1C3E564(&StringLiteral_5256/*"Detail:{0}"*/);
    sub_1C3E564(&StringLiteral_1723/*"<size="*/);
    sub_1C3E564(&StringLiteral_45/*"\n\n\n"*/);
    sub_1C3E564(&StringLiteral_5255/*"Detail: OFF"*/);
    sub_1C3E564(&StringLiteral_65/*"\n[SE]\n"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_1526/*"</size>"*/);
    sub_1C3E564(&StringLiteral_66/*"\n[VOICE]\n"*/);
    sub_1C3E564(&StringLiteral_1749/*">"*/);
    byte_4C562FA = 1;
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
    v7 = System_String__Concat_63636468((System_String_o *)StringLiteral_15905/*"[BGM]\n"*/, LogBgm, 0);
    if ( bgmIndex < 0 )
    {
      v11 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v11);
      v13 = System_String__Concat_63674716(v7, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v13);
      v7 = System_String__Concat_63674716(v13, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0);
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
    v15 = System_String__Concat_63674716(v7, (System_String_o *)*v10, LogSe, 0);
    v16 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v62.fields.m_XMin = 5.0;
    v62.fields.m_YMin = 5.0;
    v62.fields.m_Width = v16 * 310.0;
    v62.fields.m_Height = v16 * 825.0;
    UnityEngine_GUI__Box(v62, (System_String_o *)StringLiteral_1/*""*/, 0);
    v17 = (System_String_o *)sub_1C3E60C(string___TypeInfo, 5);
    if ( v17 )
    {
      v21 = v17;
      if ( !LODWORD(v17[1].klass) )
        goto LABEL_40;
      v22 = StringLiteral_1723/*"<size="*/;
      v17[1].monitor = (void *)StringLiteral_1723/*"<size="*/;
      sub_1C3E508((CGThumbnailListItem_o *)&v17[1].monitor, v22, v19, v20);
      v61[0] = v16 * 18.0;
      v17 = System_Single__ToString(18.0, (const MethodInfo *)v61);
      if ( LODWORD(v21[1].klass) <= 1 )
        goto LABEL_40;
      v21[1].fields = (System_String_Fields)v17;
      sub_1C3E508((CGThumbnailListItem_o *)&v21[1].fields, (int32_t)v17, v23, v24);
      if ( LODWORD(v21[1].klass) <= 2 )
        goto LABEL_40;
      v27 = StringLiteral_1749/*">"*/;
      v21[2].klass = (System_String_c *)StringLiteral_1749/*">"*/;
      sub_1C3E508((CGThumbnailListItem_o *)&v21[2], v27, v25, v26);
      if ( LODWORD(v21[1].klass) <= 3 )
        goto LABEL_40;
      v21[2].monitor = v15;
      sub_1C3E508((CGThumbnailListItem_o *)&v21[2].monitor, (int32_t)v15, v28, v29);
      if ( LODWORD(v21[1].klass) <= 4 )
        goto LABEL_40;
      v32 = StringLiteral_1526/*"</size>"*/;
      v21[2].fields = (System_String_Fields)StringLiteral_1526/*"</size>"*/;
      sub_1C3E508((CGThumbnailListItem_o *)&v21[2].fields, v32, v30, v31);
      v33 = System_String__Concat_63676984((System_String_array *)v21, 0);
      v63.fields.m_XMin = 10.0;
      v63.fields.m_YMin = 5.0;
      v63.fields.m_Width = v16 * 1000.0;
      v63.fields.m_Height = v16 * 825.0;
      UnityEngine_GUI__Label(v63, v33, 0);
      if ( bgmIndex < 0 )
      {
        v41 = (System_String_o *)StringLiteral_5255/*"Detail: OFF"*/;
      }
      else
      {
        v60 = this->fields.bgmIndex;
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v34, v35, v36, v37, v38, v39);
        v41 = System_String__Format((System_String_o *)StringLiteral_5256/*"Detail:{0}"*/, v40, 0);
      }
      v17 = (System_String_o *)sub_1C3E60C(string___TypeInfo, 5);
      if ( v17 )
      {
        v44 = v17;
        if ( LODWORD(v17[1].klass) )
        {
          v45 = StringLiteral_1723/*"<size="*/;
          v17[1].monitor = (void *)StringLiteral_1723/*"<size="*/;
          sub_1C3E508((CGThumbnailListItem_o *)&v17[1].monitor, v45, v42, v43);
          v61[0] = v16 * 18.0;
          v17 = System_Single__ToString(v46, (const MethodInfo *)v61);
          if ( LODWORD(v44[1].klass) > 1 )
          {
            v44[1].fields = (System_String_Fields)v17;
            sub_1C3E508((CGThumbnailListItem_o *)&v44[1].fields, (int32_t)v17, v47, v48);
            if ( LODWORD(v44[1].klass) > 2 )
            {
              v51 = StringLiteral_1749/*">"*/;
              v44[2].klass = (System_String_c *)StringLiteral_1749/*">"*/;
              sub_1C3E508((CGThumbnailListItem_o *)&v44[2], v51, v49, v50);
              if ( LODWORD(v44[1].klass) > 3 )
              {
                v44[2].monitor = v41;
                sub_1C3E508((CGThumbnailListItem_o *)&v44[2].monitor, (int32_t)v41, v52, v53);
                if ( LODWORD(v44[1].klass) > 4 )
                {
                  v56 = StringLiteral_1526/*"</size>"*/;
                  v44[2].fields = (System_String_Fields)StringLiteral_1526/*"</size>"*/;
                  sub_1C3E508((CGThumbnailListItem_o *)&v44[2].fields, v56, v54, v55);
                  v57 = System_String__Concat_63676984((System_String_array *)v44, 0);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v64.fields.m_XMin = 10.0;
                  v64.fields.m_YMin = (float)(v16 * 57.0) + 10.0;
                  v64.fields.m_Width = v16 * 300.0;
                  v64.fields.m_Height = v16 * 40.0;
                  if ( UnityEngine_GUI__Button(v64, v57, 0) )
                  {
                    v58 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v58;
                    v59 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v59 = BgmManager_TypeInfo;
                    }
                    if ( v58 >= v59->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1C3E7C8(v17, v18);
      }
    }
    sub_1C3E7C0(v17, v18);
  }
}


void SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}