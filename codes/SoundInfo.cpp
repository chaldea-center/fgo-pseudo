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
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x21
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w1
  System_String_o *v49; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  System_String_o *v54; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x20
  int32_t v58; // w1
  float v59; // s0
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w1
  System_String_o *v70; // x20
  int32_t v71; // w20
  BgmManager_c *v72; // x0
  int32_t v73; // [xsp+28h] [xbp-58h] BYREF
  float v74[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A1F07C & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Application_TypeInfo, method);
    sub_1B715CC(&BgmManager_TypeInfo, v3);
    sub_1B715CC(&UnityEngine_GUI_TypeInfo, v4);
    sub_1B715CC(&int_TypeInfo, v5);
    sub_1B715CC(&SoundLogger_TypeInfo, v6);
    sub_1B715CC(&string___TypeInfo, v7);
    sub_1B715CC(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, v8);
    sub_1B715CC(&StringLiteral_15854/*"[BGM]\n"*/, v9);
    sub_1B715CC(&StringLiteral_5275/*"Detail:{0}"*/, v10);
    sub_1B715CC(&StringLiteral_1841/*"<size="*/, v11);
    sub_1B715CC(&StringLiteral_45/*"\n\n\n"*/, v12);
    sub_1B715CC(&StringLiteral_5274/*"Detail: OFF"*/, v13);
    sub_1B715CC(&StringLiteral_65/*"\n[SE]\n"*/, v14);
    sub_1B715CC(&StringLiteral_1/*""*/, v15);
    sub_1B715CC(&StringLiteral_1629/*"</size>"*/, v16);
    sub_1B715CC(&StringLiteral_66/*"\n[VOICE]\n"*/, v17);
    sub_1B715CC(&StringLiteral_1862/*">"*/, v18);
    byte_4A1F07C = 1;
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
    v23 = System_String__Concat_61505504((System_String_o *)StringLiteral_15854/*"[BGM]\n"*/, LogBgm, 0LL);
    if ( (bgmIndex & 0x80000000) != 0 )
    {
      v27 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v27);
      v29 = System_String__Concat_61516764(v23, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0LL);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v29);
      v23 = System_String__Concat_61516764(v29, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0LL);
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
    v31 = System_String__Concat_61516764(v23, (System_String_o *)*v26, LogSe, 0LL);
    v32 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v75.fields.m_XMin = 5.0;
    v75.fields.m_YMin = 5.0;
    v75.fields.m_Width = v32 * 310.0;
    v75.fields.m_Height = v32 * 825.0;
    UnityEngine_GUI__Box(v75, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v33 = (System_String_o *)sub_1B71674(string___TypeInfo, 5LL);
    if ( v33 )
    {
      v37 = v33;
      if ( !LODWORD(v33[1].klass) )
        goto LABEL_40;
      v38 = StringLiteral_1841/*"<size="*/;
      v33[1].monitor = (void *)StringLiteral_1841/*"<size="*/;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v33[1].monitor, v38, v35, v36);
      v74[0] = v32 * 18.0;
      v33 = System_Single__ToString(18.0, (const MethodInfo *)v74);
      if ( LODWORD(v37[1].klass) <= 1 )
        goto LABEL_40;
      v37[1].fields = (System_String_Fields)v33;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v37[1].fields, (int32_t)v33, v39, v40);
      if ( LODWORD(v37[1].klass) <= 2 )
        goto LABEL_40;
      v43 = StringLiteral_1862/*">"*/;
      v37[2].klass = (System_String_c *)StringLiteral_1862/*">"*/;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v37[2], v43, v41, v42);
      if ( LODWORD(v37[1].klass) <= 3 )
        goto LABEL_40;
      v37[2].monitor = v31;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v37[2].monitor, (int32_t)v31, v44, v45);
      if ( LODWORD(v37[1].klass) <= 4 )
        goto LABEL_40;
      v48 = StringLiteral_1629/*"</size>"*/;
      v37[2].fields = (System_String_Fields)StringLiteral_1629/*"</size>"*/;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v37[2].fields, v48, v46, v47);
      v49 = System_String__Concat_61519032((System_String_array *)v37, 0LL);
      v76.fields.m_XMin = 10.0;
      v76.fields.m_YMin = 5.0;
      v76.fields.m_Width = v32 * 1000.0;
      v76.fields.m_Height = v32 * 825.0;
      UnityEngine_GUI__Label(v76, v49, 0LL);
      if ( (bgmIndex & 0x80000000) != 0 )
      {
        v54 = (System_String_o *)StringLiteral_5274/*"Detail: OFF"*/;
      }
      else
      {
        v73 = this->fields.bgmIndex;
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v50, v51, v52);
        v54 = System_String__Format((System_String_o *)StringLiteral_5275/*"Detail:{0}"*/, v53, 0LL);
      }
      v33 = (System_String_o *)sub_1B71674(string___TypeInfo, 5LL);
      if ( v33 )
      {
        v57 = v33;
        if ( LODWORD(v33[1].klass) )
        {
          v58 = StringLiteral_1841/*"<size="*/;
          v33[1].monitor = (void *)StringLiteral_1841/*"<size="*/;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v33[1].monitor, v58, v55, v56);
          v74[0] = v32 * 18.0;
          v33 = System_Single__ToString(v59, (const MethodInfo *)v74);
          if ( LODWORD(v57[1].klass) > 1 )
          {
            v57[1].fields = (System_String_Fields)v33;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v57[1].fields, (int32_t)v33, v60, v61);
            if ( LODWORD(v57[1].klass) > 2 )
            {
              v64 = StringLiteral_1862/*">"*/;
              v57[2].klass = (System_String_c *)StringLiteral_1862/*">"*/;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&v57[2], v64, v62, v63);
              if ( LODWORD(v57[1].klass) > 3 )
              {
                v57[2].monitor = v54;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&v57[2].monitor, (int32_t)v54, v65, v66);
                if ( LODWORD(v57[1].klass) > 4 )
                {
                  v69 = StringLiteral_1629/*"</size>"*/;
                  v57[2].fields = (System_String_Fields)StringLiteral_1629/*"</size>"*/;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)&v57[2].fields, v69, v67, v68);
                  v70 = System_String__Concat_61519032((System_String_array *)v57, 0LL);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v77.fields.m_XMin = 10.0;
                  v77.fields.m_YMin = (float)(v32 * 57.0) + 10.0;
                  v77.fields.m_Width = v32 * 300.0;
                  v77.fields.m_Height = v32 * 40.0;
                  if ( UnityEngine_GUI__Button(v77, v70, 0LL) )
                  {
                    v71 = this->fields.bgmIndex + 1;
                    this->fields.bgmIndex = v71;
                    v72 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v72 = BgmManager_TypeInfo;
                    }
                    if ( v71 >= v72->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1B71830(v33, v34);
      }
    }
    sub_1B71828(v33, v34);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}