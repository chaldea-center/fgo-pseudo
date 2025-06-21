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
  __int64 v35; // x2
  const MethodInfo *v36; // x3
  System_String_o *v37; // x21
  int32_t v38; // w1
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  System_String_o *v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  System_String_o *v50; // x21
  const MethodInfo *v51; // x3
  System_String_o *v52; // x20
  int32_t v53; // w1
  float v54; // s0
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  int32_t v57; // w1
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  int32_t v60; // w1
  System_String_o *v61; // x20
  int32_t v62; // w20
  BgmManager_c *v63; // x0
  int32_t v64; // [xsp+28h] [xbp-58h] BYREF
  float v65[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1BAF3 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, method);
    sub_1BCAFF8(&BgmManager_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_GUI_TypeInfo, v4);
    sub_1BCAFF8(&int_TypeInfo, v5);
    sub_1BCAFF8(&SoundLogger_TypeInfo, v6);
    sub_1BCAFF8(&string___TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, v8);
    sub_1BCAFF8(&StringLiteral_15761/*"[BGM]\n"*/, v9);
    sub_1BCAFF8(&StringLiteral_5212/*"Detail:{0}"*/, v10);
    sub_1BCAFF8(&StringLiteral_1715/*"<size="*/, v11);
    sub_1BCAFF8(&StringLiteral_45/*"\n\n\n"*/, v12);
    sub_1BCAFF8(&StringLiteral_5211/*"Detail: OFF"*/, v13);
    sub_1BCAFF8(&StringLiteral_65/*"\n[SE]\n"*/, v14);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v15);
    sub_1BCAFF8(&StringLiteral_1518/*"</size>"*/, v16);
    sub_1BCAFF8(&StringLiteral_66/*"\n[VOICE]\n"*/, v17);
    sub_1BCAFF8(&StringLiteral_1741/*">"*/, v18);
    byte_4B1BAF3 = 1;
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
    v23 = System_String__Concat_62450424((System_String_o *)StringLiteral_15761/*"[BGM]\n"*/, LogBgm, 0LL);
    if ( (bgmIndex & 0x80000000) != 0 )
    {
      v27 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v27);
      v29 = System_String__Concat_62488672(v23, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0LL);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v29);
      v23 = System_String__Concat_62488672(v29, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0LL);
      LogSe = SoundLogger__getLogSe((const MethodInfo *)v23);
      v26 = &StringLiteral_65/*"\n[SE]\n"*/;
    }
    else
    {
      v24 = this->fields.bgmIndex;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogSe = SoundLogger__GetLogBgmDetail(v24, v22);
      v26 = &StringLiteral_45/*"\n\n\n"*/;
    }
    v31 = System_String__Concat_62488672(v23, (System_String_o *)*v26, LogSe, 0LL);
    v32 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v66.fields.m_XMin = 5.0;
    v66.fields.m_YMin = 5.0;
    v66.fields.m_Width = v32 * 310.0;
    v66.fields.m_Height = v32 * 825.0;
    UnityEngine_GUI__Box(v66, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v33 = (System_String_o *)sub_1BCB0A0(string___TypeInfo, 5LL);
    if ( v33 )
    {
      v37 = v33;
      if ( !LODWORD(v33[1].klass) )
        goto LABEL_40;
      v38 = StringLiteral_1715/*"<size="*/;
      v33[1].monitor = (void *)StringLiteral_1715/*"<size="*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v33[1].monitor, v38, v35, v36);
      v65[0] = v32 * 18.0;
      v33 = System_Single__ToString(18.0, (const MethodInfo *)v65);
      if ( LODWORD(v37[1].klass) <= 1 )
        goto LABEL_40;
      v37[1].fields = (System_String_Fields)v33;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v37[1].fields, (int32_t)v33, v35, v39);
      if ( LODWORD(v37[1].klass) <= 2 )
        goto LABEL_40;
      v41 = StringLiteral_1741/*">"*/;
      v37[2].klass = (System_String_c *)StringLiteral_1741/*">"*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v37[2], v41, v35, v40);
      if ( LODWORD(v37[1].klass) <= 3 )
        goto LABEL_40;
      v37[2].monitor = v31;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v37[2].monitor, (int32_t)v31, v35, v42);
      if ( LODWORD(v37[1].klass) <= 4 )
        goto LABEL_40;
      v44 = StringLiteral_1518/*"</size>"*/;
      v37[2].fields = (System_String_Fields)StringLiteral_1518/*"</size>"*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v37[2].fields, v44, v35, v43);
      v45 = System_String__Concat_62490940((System_String_array *)v37, 0LL);
      v67.fields.m_XMin = 10.0;
      v67.fields.m_YMin = 5.0;
      v67.fields.m_Width = v32 * 1000.0;
      v67.fields.m_Height = v32 * 825.0;
      UnityEngine_GUI__Label(v67, v45, 0LL);
      if ( (bgmIndex & 0x80000000) != 0 )
      {
        v50 = (System_String_o *)StringLiteral_5211/*"Detail: OFF"*/;
      }
      else
      {
        v64 = this->fields.bgmIndex;
        v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v46, v47, v48);
        v50 = System_String__Format((System_String_o *)StringLiteral_5212/*"Detail:{0}"*/, v49, 0LL);
      }
      v33 = (System_String_o *)sub_1BCB0A0(string___TypeInfo, 5LL);
      if ( v33 )
      {
        v52 = v33;
        if ( LODWORD(v33[1].klass) )
        {
          v53 = StringLiteral_1715/*"<size="*/;
          v33[1].monitor = (void *)StringLiteral_1715/*"<size="*/;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v33[1].monitor, v53, v35, v51);
          v65[0] = v32 * 18.0;
          v33 = System_Single__ToString(v54, (const MethodInfo *)v65);
          if ( LODWORD(v52[1].klass) > 1 )
          {
            v52[1].fields = (System_String_Fields)v33;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v52[1].fields, (int32_t)v33, v35, v55);
            if ( LODWORD(v52[1].klass) > 2 )
            {
              v57 = StringLiteral_1741/*">"*/;
              v52[2].klass = (System_String_c *)StringLiteral_1741/*">"*/;
              sub_1BCAF9C((CGThumbnailListItem_o *)&v52[2], v57, v35, v56);
              if ( LODWORD(v52[1].klass) > 3 )
              {
                v52[2].monitor = v50;
                sub_1BCAF9C((CGThumbnailListItem_o *)&v52[2].monitor, (int32_t)v50, v35, v58);
                if ( LODWORD(v52[1].klass) > 4 )
                {
                  v60 = StringLiteral_1518/*"</size>"*/;
                  v52[2].fields = (System_String_Fields)StringLiteral_1518/*"</size>"*/;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&v52[2].fields, v60, v35, v59);
                  v61 = System_String__Concat_62490940((System_String_array *)v52, 0LL);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v68.fields.m_XMin = 10.0;
                  v68.fields.m_YMin = (float)(v32 * 57.0) + 10.0;
                  v68.fields.m_Width = v32 * 300.0;
                  v68.fields.m_Height = v32 * 40.0;
                  if ( UnityEngine_GUI__Button(v68, v61, 0LL) )
                  {
                    v62 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v62;
                    v63 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v63 = BgmManager_TypeInfo;
                    }
                    if ( v62 >= v63->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1BCB25C(v33, v34, v35);
      }
    }
    sub_1BCB254(v33, v34);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}