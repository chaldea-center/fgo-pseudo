void __fastcall SoundInfo___ctor(SoundInfo_o *this, const MethodInfo *method)
{
  this->fields.baseScale = 0.6;
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
  SoundLogger_c *v13; // x0
  System_String_o *LogBgm; // x0
  System_String_o *v15; // x20
  System_String_o *LogVoice; // x0
  System_String_o *v17; // x20
  System_String_o *LogSe; // x0
  System_String_o *v19; // x20
  float v20; // s10
  System_String_o *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x19
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  System_String_o *v37; // x0
  float v38; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E1DEC & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_GUI_TypeInfo, v3);
    sub_1B00CCC(&SoundLogger_TypeInfo, v4);
    sub_1B00CCC(&string___TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_15673/*"[BGM]\n"*/, v6);
    sub_1B00CCC(&StringLiteral_1836/*"<size="*/, v7);
    sub_1B00CCC(&StringLiteral_63/*"\n[SE]\n"*/, v8);
    sub_1B00CCC(&StringLiteral_1/*""*/, v9);
    sub_1B00CCC(&StringLiteral_1624/*"</size>"*/, v10);
    sub_1B00CCC(&StringLiteral_64/*"\n[VOICE]\n"*/, v11);
    sub_1B00CCC(&StringLiteral_1857/*">"*/, v12);
    byte_48E1DEC = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    v13 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v13);
    v15 = System_String__Concat_60325748((System_String_o *)StringLiteral_15673/*"[BGM]\n"*/, LogBgm, 0LL);
    LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v15);
    v17 = System_String__Concat_60337008(v15, (System_String_o *)StringLiteral_64/*"\n[VOICE]\n"*/, LogVoice, 0LL);
    LogSe = SoundLogger__getLogSe((const MethodInfo *)v17);
    v19 = System_String__Concat_60337008(v17, (System_String_o *)StringLiteral_63/*"\n[SE]\n"*/, LogSe, 0LL);
    v20 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v39.fields.m_XMin = 5.0;
    v39.fields.m_YMin = 5.0;
    v39.fields.m_Width = v20 * 310.0;
    v39.fields.m_Height = v20 * 825.0;
    UnityEngine_GUI__Box(v39, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v21 = (System_String_o *)sub_1B00D74(string___TypeInfo, 5LL);
    if ( !v21 )
      sub_1B00F28(0LL, v22);
    v25 = v21;
    if ( !LODWORD(v21[1].klass) )
      goto LABEL_18;
    v26 = StringLiteral_1836/*"<size="*/;
    v21[1].monitor = (void *)StringLiteral_1836/*"<size="*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v21[1].monitor, v26, v23, v24);
    v38 = v20 * 18.0;
    v21 = System_Single__ToString(v20 * 18.0, (const MethodInfo *)&v38);
    if ( LODWORD(v25[1].klass) <= 1
      || (v25[1].fields = (System_String_Fields)v21,
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v25[1].fields, (int32_t)v21, v27, v28),
          LODWORD(v25[1].klass) <= 2)
      || (v31 = StringLiteral_1857/*">"*/,
          v25[2].klass = (System_String_c *)StringLiteral_1857/*">"*/,
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v25[2], v31, v29, v30),
          LODWORD(v25[1].klass) <= 3)
      || (v25[2].monitor = v19,
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v25[2].monitor, (int32_t)v19, v32, v33),
          LODWORD(v25[1].klass) <= 4) )
    {
LABEL_18:
      sub_1B00F30(v21, v22);
    }
    v36 = StringLiteral_1624/*"</size>"*/;
    v25[2].fields = (System_String_Fields)StringLiteral_1624/*"</size>"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v25[2].fields, v36, v34, v35);
    v37 = System_String__Concat_60339276((System_String_array *)v25, 0LL);
    v40.fields.m_XMin = 10.0;
    v40.fields.m_YMin = 5.0;
    v40.fields.m_Width = v20 * 1000.0;
    v40.fields.m_Height = v20 * 825.0;
    UnityEngine_GUI__Label(v40, v37, 0LL);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}