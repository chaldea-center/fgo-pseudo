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
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  System_String_o *v21; // x21
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  System_String_o *v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x21
  const MethodInfo *v35; // x3
  System_String_o *v36; // x20
  int32_t v37; // w1
  float v38; // s0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  System_String_o *v45; // x20
  int32_t v46; // w20
  BgmManager_c *v47; // x0
  int32_t v48; // [xsp+28h] [xbp-58h] BYREF
  float v49[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2688A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&UnityEngine_GUI_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&SoundLogger_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/);
    sub_1C2D490(&StringLiteral_15892/*"[BGM]\n"*/);
    sub_1C2D490(&StringLiteral_5247/*"Detail:{0}"*/);
    sub_1C2D490(&StringLiteral_1723/*"<size="*/);
    sub_1C2D490(&StringLiteral_45/*"\n\n\n"*/);
    sub_1C2D490(&StringLiteral_5246/*"Detail: OFF"*/);
    sub_1C2D490(&StringLiteral_65/*"\n[SE]\n"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_1526/*"</size>"*/);
    sub_1C2D490(&StringLiteral_66/*"\n[VOICE]\n"*/);
    sub_1C2D490(&StringLiteral_1749/*">"*/);
    byte_4C2688A = 1;
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
    v7 = System_String__Concat_63457864((System_String_o *)StringLiteral_15892/*"[BGM]\n"*/, LogBgm, 0);
    if ( bgmIndex < 0 )
    {
      v11 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v11);
      v13 = System_String__Concat_63496112(v7, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v13);
      v7 = System_String__Concat_63496112(v13, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0);
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
    v15 = System_String__Concat_63496112(v7, (System_String_o *)*v10, LogSe, 0);
    v16 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v50.fields.m_XMin = 5.0;
    v50.fields.m_YMin = 5.0;
    v50.fields.m_Width = v16 * 310.0;
    v50.fields.m_Height = v16 * 825.0;
    UnityEngine_GUI__Box(v50, (System_String_o *)StringLiteral_1/*""*/, 0);
    v17 = (System_String_o *)sub_1C2D538(string___TypeInfo, 5);
    if ( v17 )
    {
      v21 = v17;
      if ( !LODWORD(v17[1].klass) )
        goto LABEL_40;
      v22 = StringLiteral_1723/*"<size="*/;
      v17[1].monitor = (void *)StringLiteral_1723/*"<size="*/;
      sub_1C2D434((CGThumbnailListItem_o *)&v17[1].monitor, v22, v19, v20);
      v49[0] = v16 * 18.0;
      v17 = System_Single__ToString(18.0, (const MethodInfo *)v49);
      if ( LODWORD(v21[1].klass) <= 1 )
        goto LABEL_40;
      v21[1].fields = (System_String_Fields)v17;
      sub_1C2D434((CGThumbnailListItem_o *)&v21[1].fields, (int32_t)v17, v19, v23);
      if ( LODWORD(v21[1].klass) <= 2 )
        goto LABEL_40;
      v25 = StringLiteral_1749/*">"*/;
      v21[2].klass = (System_String_c *)StringLiteral_1749/*">"*/;
      sub_1C2D434((CGThumbnailListItem_o *)&v21[2], v25, v19, v24);
      if ( LODWORD(v21[1].klass) <= 3 )
        goto LABEL_40;
      v21[2].monitor = v15;
      sub_1C2D434((CGThumbnailListItem_o *)&v21[2].monitor, (int32_t)v15, v19, v26);
      if ( LODWORD(v21[1].klass) <= 4 )
        goto LABEL_40;
      v28 = StringLiteral_1526/*"</size>"*/;
      v21[2].fields = (System_String_Fields)StringLiteral_1526/*"</size>"*/;
      sub_1C2D434((CGThumbnailListItem_o *)&v21[2].fields, v28, v19, v27);
      v29 = System_String__Concat_63498380((System_String_array *)v21, 0);
      v51.fields.m_XMin = 10.0;
      v51.fields.m_YMin = 5.0;
      v51.fields.m_Width = v16 * 1000.0;
      v51.fields.m_Height = v16 * 825.0;
      UnityEngine_GUI__Label(v51, v29, 0);
      if ( bgmIndex < 0 )
      {
        v34 = (System_String_o *)StringLiteral_5246/*"Detail: OFF"*/;
      }
      else
      {
        v48 = this->fields.bgmIndex;
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v30, v31, v32);
        v34 = System_String__Format((System_String_o *)StringLiteral_5247/*"Detail:{0}"*/, v33, 0);
      }
      v17 = (System_String_o *)sub_1C2D538(string___TypeInfo, 5);
      if ( v17 )
      {
        v36 = v17;
        if ( LODWORD(v17[1].klass) )
        {
          v37 = StringLiteral_1723/*"<size="*/;
          v17[1].monitor = (void *)StringLiteral_1723/*"<size="*/;
          sub_1C2D434((CGThumbnailListItem_o *)&v17[1].monitor, v37, v19, v35);
          v49[0] = v16 * 18.0;
          v17 = System_Single__ToString(v38, (const MethodInfo *)v49);
          if ( LODWORD(v36[1].klass) > 1 )
          {
            v36[1].fields = (System_String_Fields)v17;
            sub_1C2D434((CGThumbnailListItem_o *)&v36[1].fields, (int32_t)v17, v19, v39);
            if ( LODWORD(v36[1].klass) > 2 )
            {
              v41 = StringLiteral_1749/*">"*/;
              v36[2].klass = (System_String_c *)StringLiteral_1749/*">"*/;
              sub_1C2D434((CGThumbnailListItem_o *)&v36[2], v41, v19, v40);
              if ( LODWORD(v36[1].klass) > 3 )
              {
                v36[2].monitor = v34;
                sub_1C2D434((CGThumbnailListItem_o *)&v36[2].monitor, (int32_t)v34, v19, v42);
                if ( LODWORD(v36[1].klass) > 4 )
                {
                  v44 = StringLiteral_1526/*"</size>"*/;
                  v36[2].fields = (System_String_Fields)StringLiteral_1526/*"</size>"*/;
                  sub_1C2D434((CGThumbnailListItem_o *)&v36[2].fields, v44, v19, v43);
                  v45 = System_String__Concat_63498380((System_String_array *)v36, 0);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v52.fields.m_XMin = 10.0;
                  v52.fields.m_YMin = (float)(v16 * 57.0) + 10.0;
                  v52.fields.m_Width = v16 * 300.0;
                  v52.fields.m_Height = v16 * 40.0;
                  if ( UnityEngine_GUI__Button(v52, v45, 0) )
                  {
                    v46 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v46;
                    v47 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v47 = BgmManager_TypeInfo;
                    }
                    if ( v46 >= v47->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1C2D6F4(v17, v18, v19);
      }
    }
    sub_1C2D6EC(v17, v18);
  }
}


void SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}