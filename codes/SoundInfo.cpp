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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x21
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  System_String_o *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  System_String_o *v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x20
  int32_t v42; // w1
  float v43; // s0
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w1
  System_String_o *v54; // x20
  int32_t v55; // w20
  BgmManager_c *v56; // x0
  int32_t v57; // [xsp+28h] [xbp-58h] BYREF
  float v58[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5A713 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&UnityEngine_GUI_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&SoundLogger_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/);
    sub_1B885B0(&StringLiteral_15904/*"[BGM]\n"*/);
    sub_1B885B0(&StringLiteral_5294/*"Detail:{0}"*/);
    sub_1B885B0(&StringLiteral_1840/*"<size="*/);
    sub_1B885B0(&StringLiteral_45/*"\n\n\n"*/);
    sub_1B885B0(&StringLiteral_5293/*"Detail: OFF"*/);
    sub_1B885B0(&StringLiteral_65/*"\n[SE]\n"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_1628/*"</size>"*/);
    sub_1B885B0(&StringLiteral_66/*"\n[VOICE]\n"*/);
    sub_1B885B0(&StringLiteral_1861/*">"*/);
    byte_4A5A713 = 1;
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
    v7 = System_String__Concat_61707032((System_String_o *)StringLiteral_15904/*"[BGM]\n"*/, LogBgm, 0LL);
    if ( (bgmIndex & 0x80000000) != 0 )
    {
      v11 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v11);
      v13 = System_String__Concat_61718292(v7, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0LL);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v13);
      v7 = System_String__Concat_61718292(v13, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0LL);
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
    v15 = System_String__Concat_61718292(v7, (System_String_o *)*v10, LogSe, 0LL);
    v16 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v59.fields.m_XMin = 5.0;
    v59.fields.m_YMin = 5.0;
    v59.fields.m_Width = v16 * 310.0;
    v59.fields.m_Height = v16 * 825.0;
    UnityEngine_GUI__Box(v59, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v17 = (System_String_o *)sub_1B88658(string___TypeInfo, 5LL);
    if ( v17 )
    {
      v21 = v17;
      if ( !LODWORD(v17[1].klass) )
        goto LABEL_40;
      v22 = StringLiteral_1840/*"<size="*/;
      v17[1].monitor = (void *)StringLiteral_1840/*"<size="*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v17[1].monitor, v22, v19, v20);
      v58[0] = v16 * 18.0;
      v17 = System_Single__ToString(18.0, (const MethodInfo *)v58);
      if ( LODWORD(v21[1].klass) <= 1 )
        goto LABEL_40;
      v21[1].fields = (System_String_Fields)v17;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v21[1].fields, (int32_t)v17, v23, v24);
      if ( LODWORD(v21[1].klass) <= 2 )
        goto LABEL_40;
      v27 = StringLiteral_1861/*">"*/;
      v21[2].klass = (System_String_c *)StringLiteral_1861/*">"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v21[2], v27, v25, v26);
      if ( LODWORD(v21[1].klass) <= 3 )
        goto LABEL_40;
      v21[2].monitor = v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v21[2].monitor, (int32_t)v15, v28, v29);
      if ( LODWORD(v21[1].klass) <= 4 )
        goto LABEL_40;
      v32 = StringLiteral_1628/*"</size>"*/;
      v21[2].fields = (System_String_Fields)StringLiteral_1628/*"</size>"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v21[2].fields, v32, v30, v31);
      v33 = System_String__Concat_61720560((System_String_array *)v21, 0LL);
      v60.fields.m_XMin = 10.0;
      v60.fields.m_YMin = 5.0;
      v60.fields.m_Width = v16 * 1000.0;
      v60.fields.m_Height = v16 * 825.0;
      UnityEngine_GUI__Label(v60, v33, 0LL);
      if ( (bgmIndex & 0x80000000) != 0 )
      {
        v38 = (System_String_o *)StringLiteral_5293/*"Detail: OFF"*/;
      }
      else
      {
        v57 = this->fields.bgmIndex;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v34, v35, v36);
        v38 = System_String__Format((System_String_o *)StringLiteral_5294/*"Detail:{0}"*/, v37, 0LL);
      }
      v17 = (System_String_o *)sub_1B88658(string___TypeInfo, 5LL);
      if ( v17 )
      {
        v41 = v17;
        if ( LODWORD(v17[1].klass) )
        {
          v42 = StringLiteral_1840/*"<size="*/;
          v17[1].monitor = (void *)StringLiteral_1840/*"<size="*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v17[1].monitor, v42, v39, v40);
          v58[0] = v16 * 18.0;
          v17 = System_Single__ToString(v43, (const MethodInfo *)v58);
          if ( LODWORD(v41[1].klass) > 1 )
          {
            v41[1].fields = (System_String_Fields)v17;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v41[1].fields, (int32_t)v17, v44, v45);
            if ( LODWORD(v41[1].klass) > 2 )
            {
              v48 = StringLiteral_1861/*">"*/;
              v41[2].klass = (System_String_c *)StringLiteral_1861/*">"*/;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v41[2], v48, v46, v47);
              if ( LODWORD(v41[1].klass) > 3 )
              {
                v41[2].monitor = v38;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v41[2].monitor, (int32_t)v38, v49, v50);
                if ( LODWORD(v41[1].klass) > 4 )
                {
                  v53 = StringLiteral_1628/*"</size>"*/;
                  v41[2].fields = (System_String_Fields)StringLiteral_1628/*"</size>"*/;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v41[2].fields, v53, v51, v52);
                  v54 = System_String__Concat_61720560((System_String_array *)v41, 0LL);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v61.fields.m_XMin = 10.0;
                  v61.fields.m_YMin = (float)(v16 * 57.0) + 10.0;
                  v61.fields.m_Width = v16 * 300.0;
                  v61.fields.m_Height = v16 * 40.0;
                  if ( UnityEngine_GUI__Button(v61, v54, 0LL) )
                  {
                    v55 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v55;
                    v56 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v56 = BgmManager_TypeInfo;
                    }
                    if ( v55 >= v56->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1B88814(v17, v18);
      }
    }
    sub_1B8880C(v17, v18);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}