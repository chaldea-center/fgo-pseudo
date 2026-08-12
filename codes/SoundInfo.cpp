void SoundInfo___ctor(SoundInfo_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.baseScale = -3236324966LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SoundInfo__OnGUI(SoundInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SoundLogger_c *v4; // x0
  int32_t bgmIndex; // w24
  System_String_o *LogBgm; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x20
  int32_t v9; // w21
  System_String_o *LogSe; // x0
  __int64 *v11; // x8
  SoundLogger_c *v12; // x0
  System_String_o *LogBgmDetailLast; // x0
  System_String_o *v14; // x20
  System_String_o *LogVoice; // x0
  System_String_o *v16; // x20
  __int64 v17; // x1
  float v18; // s10
  System_String_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x21
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  System_String_o *v55; // x0
  Il2CppObject *v56; // x0
  System_String_o *v57; // x20
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_String_o *v64; // x19
  int32_t v65; // w1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  int32_t v78; // w1
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  int32_t v91; // w1
  float v92; // s0
  float v93; // s9
  float v94; // s10
  float v95; // s8
  __int64 v96; // x1
  System_String_o *v97; // x19
  int32_t v98; // [xsp+8h] [xbp-68h] BYREF
  MethodInfo methoda; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Rect_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FD4F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_GUI_TypeInfo);
    sub_2213A60(&SoundLogger_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_47/*"\n\n\n[Detail Last]\n"*/);
    sub_2213A60(&StringLiteral_16516/*"[BGM]\n"*/);
    sub_2213A60(&StringLiteral_5446/*"Detail:{0}"*/);
    sub_2213A60(&StringLiteral_1805/*"<size="*/);
    sub_2213A60(&StringLiteral_45/*"\n\n\n"*/);
    sub_2213A60(&StringLiteral_5445/*"Detail: OFF"*/);
    sub_2213A60(&StringLiteral_65/*"\n[SE]\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1607/*"</size>"*/);
    sub_2213A60(&StringLiteral_66/*"\n[VOICE]\n"*/);
    sub_2213A60(&StringLiteral_1831/*">"*/);
    byte_596FD4F = 1;
  }
  LODWORD(methoda.methodPointer) = 0;
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v4 = SoundLogger_TypeInfo;
    bgmIndex = this->fields.bgmIndex;
    if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v3);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v4);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_16516/*"[BGM]\n"*/, LogBgm, 0);
    if ( bgmIndex < 0 )
    {
      v12 = SoundLogger_TypeInfo;
      if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v7);
      LogBgmDetailLast = SoundLogger__GetLogBgmDetailLast((const MethodInfo *)v12);
      v14 = System_String__Concat_75694928(v8, (System_String_o *)StringLiteral_47/*"\n\n\n[Detail Last]\n"*/, LogBgmDetailLast, 0);
      LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v14);
      v8 = System_String__Concat_75694928(v14, (System_String_o *)StringLiteral_66/*"\n[VOICE]\n"*/, LogVoice, 0);
      LogSe = SoundLogger__getLogSe((const MethodInfo *)v8);
      v11 = &StringLiteral_65/*"\n[SE]\n"*/;
    }
    else
    {
      v9 = this->fields.bgmIndex;
      if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v7);
      LogSe = SoundLogger__GetLogBgmDetail(v9, v7);
      v11 = &StringLiteral_45/*"\n\n\n"*/;
    }
    v16 = System_String__Concat_75694928(v8, (System_String_o *)*v11, LogSe, 0);
    v18 = this->fields.baseScale * vcvts_n_f32_s32(UnityEngine_Screen__get_width(0), 0xAu);
    if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v17);
    v100.fields.m_Width = v18 * 310.0;
    v100.fields.m_Height = v18 * 825.0;
    v100.fields.m_XMin = 5.0;
    v100.fields.m_YMin = 5.0;
    UnityEngine_GUI__Box(v100, (System_String_o *)StringLiteral_1/*""*/, 0);
    v19 = (System_String_o *)sub_2213B20(string___TypeInfo, 5);
    if ( v19 )
    {
      v27 = v19;
      if ( !LODWORD(v19[1].klass) )
        goto LABEL_36;
      v28 = StringLiteral_1805/*"<size="*/;
      v19[1].monitor = (void *)StringLiteral_1805/*"<size="*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19[1].monitor, v28, v21, v22, v23, v24, v25, v26);
      *(float *)&methoda.methodPointer = v18 * 18.0;
      v19 = System_Single__ToString(v18 * 18.0, &methoda);
      if ( ((__int64)v27[1].klass & 0xFFFFFFFE) == 0 )
        goto LABEL_36;
      v27[1].fields = (System_String_Fields)v19;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27[1].fields, (int32_t)v19, v29, v30, v31, v32, v33, v34);
      if ( LODWORD(v27[1].klass) <= 2 )
        goto LABEL_36;
      v41 = StringLiteral_1831/*">"*/;
      v27[2].klass = (System_String_c *)StringLiteral_1831/*">"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27[2], v41, v35, v36, v37, v38, v39, v40);
      if ( ((__int64)v27[1].klass & 0xFFFFFFFC) == 0 )
        goto LABEL_36;
      v27[2].monitor = v16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27[2].monitor, (int32_t)v16, v42, v43, v44, v45, v46, v47);
      if ( LODWORD(v27[1].klass) <= 4 )
        goto LABEL_36;
      v54 = StringLiteral_1607/*"</size>"*/;
      v27[2].fields = (System_String_Fields)StringLiteral_1607/*"</size>"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27[2].fields, v54, v48, v49, v50, v51, v52, v53);
      v55 = System_String__Concat_75697120((System_String_array *)v27, 0);
      v101.fields.m_Width = v18 * 1000.0;
      v101.fields.m_Height = v18 * 825.0;
      v101.fields.m_XMin = 10.0;
      v101.fields.m_YMin = 5.0;
      UnityEngine_GUI__Label(v101, v55, 0);
      if ( bgmIndex < 0 )
      {
        v57 = (System_String_o *)StringLiteral_5445/*"Detail: OFF"*/;
      }
      else
      {
        v98 = this->fields.bgmIndex;
        v56 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v98);
        v57 = System_String__Format((System_String_o *)StringLiteral_5446/*"Detail:{0}"*/, v56, 0);
      }
      v19 = (System_String_o *)sub_2213B20(string___TypeInfo, 5);
      if ( v19 )
      {
        v64 = v19;
        if ( LODWORD(v19[1].klass) )
        {
          v65 = StringLiteral_1805/*"<size="*/;
          v19[1].monitor = (void *)StringLiteral_1805/*"<size="*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19[1].monitor, v65, v58, v59, v60, v61, v62, v63);
          *(float *)&methoda.methodPointer = v18 * 22.0;
          v19 = System_Single__ToString(v18 * 22.0, &methoda);
          if ( ((__int64)v64[1].klass & 0xFFFFFFFE) != 0 )
          {
            v64[1].fields = (System_String_Fields)v19;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64[1].fields, (int32_t)v19, v66, v67, v68, v69, v70, v71);
            if ( LODWORD(v64[1].klass) > 2 )
            {
              v78 = StringLiteral_1831/*">"*/;
              v64[2].klass = (System_String_c *)StringLiteral_1831/*">"*/;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64[2], v78, v72, v73, v74, v75, v76, v77);
              if ( ((__int64)v64[1].klass & 0xFFFFFFFC) != 0 )
              {
                v64[2].monitor = v57;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v64[2].monitor,
                  (int32_t)v57,
                  v79,
                  v80,
                  v81,
                  v82,
                  v83,
                  v84);
                if ( LODWORD(v64[1].klass) > 4 )
                {
                  v91 = StringLiteral_1607/*"</size>"*/;
                  v92 = v18 * 57.0;
                  v64[2].fields = (System_String_Fields)StringLiteral_1607/*"</size>"*/;
                  v93 = v18 * 300.0;
                  v94 = v18 * 40.0;
                  v95 = v92 + 10.0;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64[2].fields, v91, v85, v86, v87, v88, v89, v90);
                  v97 = System_String__Concat_75697120((System_String_array *)v64, 0);
                  if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v96);
                  v102.fields.m_YMin = v95;
                  v102.fields.m_Width = v93;
                  v102.fields.m_Height = v94;
                  v102.fields.m_XMin = 10.0;
                  UnityEngine_GUI__Label(v102, v97, 0);
                  return;
                }
              }
            }
          }
        }
LABEL_36:
        sub_2213CE4(v19);
      }
    }
    sub_2213CDC(v19, v20);
  }
}


void SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}