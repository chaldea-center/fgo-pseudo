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
  int32_t bgmVolumeIndex; // w24
  SoundLogger_c *v20; // x0
  System_String_o *LogBgm; // x0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x20
  int32_t v24; // w21
  System_String_o *LogSe; // x0
  __int64 *v26; // x8
  SoundLogger_c *v27; // x0
  System_String_o *LogBgmVolumeSimple; // x0
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
  Il2CppObject *v50; // x0
  System_String_o *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x20
  int32_t v55; // w1
  float v56; // s0
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w1
  System_String_o *v67; // x20
  int32_t v68; // w20
  BgmManager_c *v69; // x0
  int32_t v70; // [xsp+28h] [xbp-58h] BYREF
  float v71[21]; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB9CC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&BgmManager_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_GUI_TypeInfo, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&SoundLogger_TypeInfo, v6);
    sub_1B640C8(&string___TypeInfo, v7);
    sub_1B640C8(&StringLiteral_15310/*"Volume Detail:{0}"*/, v8);
    sub_1B640C8(&StringLiteral_47/*"\n\n\n[BGM Volume]\n"*/, v9);
    sub_1B640C8(&StringLiteral_15836/*"[BGM]\n"*/, v10);
    sub_1B640C8(&StringLiteral_1842/*"<size="*/, v11);
    sub_1B640C8(&StringLiteral_45/*"\n\n\n"*/, v12);
    sub_1B640C8(&StringLiteral_15309/*"Volume Detail: OFF"*/, v13);
    sub_1B640C8(&StringLiteral_65/*"\n[SE]\n"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    sub_1B640C8(&StringLiteral_1630/*"</size>"*/, v16);
    sub_1B640C8(&StringLiteral_66/*"\n[VOICE]\n"*/, v17);
    sub_1B640C8(&StringLiteral_1863/*">"*/, v18);
    byte_49FB9CC = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    bgmVolumeIndex = this->fields.bgmVolumeIndex;
    v20 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v20);
    v23 = System_String__Concat_61375396((System_String_o *)StringLiteral_15836/*"[BGM]\n"*/, LogBgm, 0LL);
    if ( (bgmVolumeIndex & 0x80000000) != 0 )
    {
      v27 = SoundLogger_TypeInfo;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogBgmVolumeSimple = SoundLogger__GetLogBgmVolumeSimple((const MethodInfo *)v27);
      v29 = System_String__Concat_61386656(v23, (System_String_o *)StringLiteral_47/*"\n\n\n[BGM Volume]\n"*/, LogBgmVolumeSimple, 0LL);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v29);
      v23 = System_String__Concat_61386656(v29, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0LL);
      LogSe = SoundLogger__getLogSe((const MethodInfo *)v23);
      v26 = &StringLiteral_65/*"\n[SE]\n"*/;
    }
    else
    {
      v24 = this->fields.bgmVolumeIndex;
      if ( !SoundLogger_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      LogSe = SoundLogger__GetLogBgmVolumeDetail(v24, v22);
      v26 = &StringLiteral_45/*"\n\n\n"*/;
    }
    v31 = System_String__Concat_61386656(v23, (System_String_o *)*v26, LogSe, 0LL);
    v32 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v72.fields.m_XMin = 5.0;
    v72.fields.m_YMin = 5.0;
    v72.fields.m_Width = v32 * 310.0;
    v72.fields.m_Height = v32 * 825.0;
    UnityEngine_GUI__Box(v72, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v33 = (System_String_o *)sub_1B64170(string___TypeInfo, 5LL);
    if ( v33 )
    {
      v37 = v33;
      if ( !LODWORD(v33[1].klass) )
        goto LABEL_40;
      v38 = StringLiteral_1842/*"<size="*/;
      v33[1].monitor = (void *)StringLiteral_1842/*"<size="*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33[1].monitor, v38, v35, v36);
      v71[0] = v32 * 18.0;
      v33 = System_Single__ToString(18.0, (const MethodInfo *)v71);
      if ( LODWORD(v37[1].klass) <= 1 )
        goto LABEL_40;
      v37[1].fields = (System_String_Fields)v33;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37[1].fields, (int32_t)v33, v39, v40);
      if ( LODWORD(v37[1].klass) <= 2 )
        goto LABEL_40;
      v43 = StringLiteral_1863/*">"*/;
      v37[2].klass = (System_String_c *)StringLiteral_1863/*">"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37[2], v43, v41, v42);
      if ( LODWORD(v37[1].klass) <= 3 )
        goto LABEL_40;
      v37[2].monitor = v31;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37[2].monitor, (int32_t)v31, v44, v45);
      if ( LODWORD(v37[1].klass) <= 4 )
        goto LABEL_40;
      v48 = StringLiteral_1630/*"</size>"*/;
      v37[2].fields = (System_String_Fields)StringLiteral_1630/*"</size>"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37[2].fields, v48, v46, v47);
      v49 = System_String__Concat_61388924((System_String_array *)v37, 0LL);
      v73.fields.m_XMin = 10.0;
      v73.fields.m_YMin = 5.0;
      v73.fields.m_Width = v32 * 1000.0;
      v73.fields.m_Height = v32 * 825.0;
      UnityEngine_GUI__Label(v73, v49, 0LL);
      if ( (bgmVolumeIndex & 0x80000000) != 0 )
      {
        v51 = (System_String_o *)StringLiteral_15309/*"Volume Detail: OFF"*/;
      }
      else
      {
        v70 = this->fields.bgmVolumeIndex;
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
        v51 = System_String__Format((System_String_o *)StringLiteral_15310/*"Volume Detail:{0}"*/, v50, 0LL);
      }
      v33 = (System_String_o *)sub_1B64170(string___TypeInfo, 5LL);
      if ( v33 )
      {
        v54 = v33;
        if ( LODWORD(v33[1].klass) )
        {
          v55 = StringLiteral_1842/*"<size="*/;
          v33[1].monitor = (void *)StringLiteral_1842/*"<size="*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33[1].monitor, v55, v52, v53);
          v71[0] = v32 * 18.0;
          v33 = System_Single__ToString(v56, (const MethodInfo *)v71);
          if ( LODWORD(v54[1].klass) > 1 )
          {
            v54[1].fields = (System_String_Fields)v33;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54[1].fields, (int32_t)v33, v57, v58);
            if ( LODWORD(v54[1].klass) > 2 )
            {
              v61 = StringLiteral_1863/*">"*/;
              v54[2].klass = (System_String_c *)StringLiteral_1863/*">"*/;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54[2], v61, v59, v60);
              if ( LODWORD(v54[1].klass) > 3 )
              {
                v54[2].monitor = v51;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54[2].monitor, (int32_t)v51, v62, v63);
                if ( LODWORD(v54[1].klass) > 4 )
                {
                  v66 = StringLiteral_1630/*"</size>"*/;
                  v54[2].fields = (System_String_Fields)StringLiteral_1630/*"</size>"*/;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54[2].fields, v66, v64, v65);
                  v67 = System_String__Concat_61388924((System_String_array *)v54, 0LL);
                  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                  v74.fields.m_XMin = 10.0;
                  v74.fields.m_YMin = (float)(v32 * 57.0) + 10.0;
                  v74.fields.m_Width = v32 * 300.0;
                  v74.fields.m_Height = v32 * 40.0;
                  if ( UnityEngine_GUI__Button(v74, v67, 0LL) )
                  {
                    v68 = this->fields.bgmVolumeIndex + 1;
                    this->fields.bgmVolumeIndex = v68;
                    v69 = BgmManager_TypeInfo;
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                      v69 = BgmManager_TypeInfo;
                    }
                    if ( v68 >= v69->static_fields->BGM_PLAYER_MAX_COUNT )
                      this->fields.bgmVolumeIndex = -1;
                  }
                  return;
                }
              }
            }
          }
        }
LABEL_40:
        sub_1B6432C(v33, v34);
      }
    }
    sub_1B64324(v33);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}