void __fastcall SoundInfo___ctor(SoundInfo_o *this, const MethodInfo *method)
{
  LODWORD(this[1].klass) = 1058642330;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundInfo__OnGUI(SoundInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  SoundLogger_c *v32; // x0
  System_String_o *LogBgm; // x0
  System_String_o *v34; // x19
  System_String_o *LogVoice; // x0
  System_String_o *v36; // x19
  System_String_o *LogSe; // x0
  System_Int32_array **v38; // x19
  float v39; // s9
  float v40; // s5
  float v41; // s6
  float v42; // s7
  float v43; // s4
  float v44; // s5
  float v45; // s6
  float v46; // s7
  __int64 v47; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array *v55; // x20
  System_String_o *v56; // x0
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x21
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  System_String_o *v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0
  UnityEngine_Rect_o v88; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Rect_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E790F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GUI_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundLogger_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15903/*"[BGM]\n"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1516/*"<size="*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_46/*"\n[SE]\n"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1332/*"</size>"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_47/*"\n[VOICE]\n"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1535/*">"*/, v29, v30, v31);
    byte_42E790F = 1;
  }
  HIDWORD(methoda.parameters) = 0;
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    v32 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v32);
    v34 = System_String__Concat_44577788((System_String_o *)StringLiteral_15903/*"[BGM]\n"*/, LogBgm, 0LL);
    LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v34);
    v36 = System_String__Concat_44580072(v34, (System_String_o *)StringLiteral_47/*"\n[VOICE]\n"*/, LogVoice, 0LL);
    LogSe = SoundLogger__getLogSe((const MethodInfo *)v36);
    v38 = (System_Int32_array **)System_String__Concat_44580072(v36, (System_String_o *)StringLiteral_46/*"\n[SE]\n"*/, LogSe, 0LL);
    v39 = *(float *)&this[1].klass * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    v90.fields.m_XMin = 5.0;
    v90.fields.m_Width = v39 * 310.0;
    v90.fields.m_YMin = 5.0;
    v90.fields.m_Height = v39 * 825.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v90, 825.0, v40, v41, v42, &methoda);
    if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    }
    *(_QWORD *)&v91.fields.m_XMin = methoda.methodPointer;
    *(_QWORD *)&v91.fields.m_Width = methoda.invoker_method;
    UnityEngine_GUI__Box(v91, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v92.fields.m_YMin = 5.0;
    v92.fields.m_Height = v39 * 825.0;
    v92.fields.m_Width = v39 * 1000.0;
    v92.fields.m_XMin = 10.0;
    *(_QWORD *)&v88.fields.m_XMin = 0LL;
    *(_QWORD *)&v88.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v92, v43, v44, v45, v46, (const MethodInfo *)&v88);
    v47 = sub_B5D5DC(string___TypeInfo, 5LL);
    if ( !v47 )
      sub_B5D69C(0LL, v48);
    v55 = (System_String_array *)v47;
    v56 = (System_String_o *)StringLiteral_1516/*"<size="*/;
    if ( StringLiteral_1516/*"<size="*/ )
    {
      v56 = (System_String_o *)sub_B5D684(StringLiteral_1516/*"<size="*/, v55->obj.klass->_1.element_class);
      if ( !v56 )
        goto LABEL_35;
      v57 = (System_Int32_array **)StringLiteral_1516/*"<size="*/;
    }
    else
    {
      v57 = 0LL;
    }
    if ( !v55->max_length )
      goto LABEL_34;
    v55->m_Items[0] = (System_String_o *)v57;
    sub_B5D560((BattleServantConfConponent_o *)v55->m_Items, v57, v49, v50, v51, v52, v53, v54);
    *((float *)&methoda.parameters + 1) = v39 * 18.0;
    v56 = System_Single__ToString(v39 * 18.0, (const MethodInfo *)((char *)&methoda.parameters + 4));
    v64 = (System_Int32_array **)v56;
    if ( !v56 || (v56 = (System_String_o *)sub_B5D684(v56, v55->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v55->max_length <= 1 )
        goto LABEL_34;
      v55->m_Items[1] = (System_String_o *)v64;
      sub_B5D560((BattleServantConfConponent_o *)&v55->m_Items[1], v64, v58, v59, v60, v61, v62, v63);
      v56 = (System_String_o *)StringLiteral_1535/*">"*/;
      if ( StringLiteral_1535/*">"*/ )
      {
        v56 = (System_String_o *)sub_B5D684(StringLiteral_1535/*">"*/, v55->obj.klass->_1.element_class);
        if ( !v56 )
          goto LABEL_35;
        v71 = (System_Int32_array **)StringLiteral_1535/*">"*/;
      }
      else
      {
        v71 = 0LL;
      }
      if ( v55->max_length <= 2 )
        goto LABEL_34;
      v55->m_Items[2] = (System_String_o *)v71;
      sub_B5D560((BattleServantConfConponent_o *)&v55->m_Items[2], v71, v65, v66, v67, v68, v69, v70);
      if ( !v38 || (v56 = (System_String_o *)sub_B5D684(v38, v55->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v55->max_length <= 3 )
          goto LABEL_34;
        v55->m_Items[3] = (System_String_o *)v38;
        sub_B5D560((BattleServantConfConponent_o *)&v55->m_Items[3], v38, v72, v73, v74, v75, v76, v77);
        v56 = (System_String_o *)StringLiteral_1332/*"</size>"*/;
        if ( !StringLiteral_1332/*"</size>"*/ )
        {
          v84 = 0LL;
LABEL_31:
          if ( v55->max_length > 4 )
          {
            v55->m_Items[4] = (System_String_o *)v84;
            sub_B5D560((BattleServantConfConponent_o *)&v55->m_Items[4], v84, v78, v79, v80, v81, v82, v83);
            v85 = System_String__Concat_44657912(v55, 0LL);
            UnityEngine_GUI__Label(v88, v85, 0LL);
            return;
          }
LABEL_34:
          v86 = sub_B5D6C8(v56);
          sub_B5D668(v86, 0LL);
        }
        v56 = (System_String_o *)sub_B5D684(StringLiteral_1332/*"</size>"*/, v55->obj.klass->_1.element_class);
        if ( v56 )
        {
          v84 = (System_Int32_array **)StringLiteral_1332/*"</size>"*/;
          goto LABEL_31;
        }
      }
    }
LABEL_35:
    v87 = sub_B5D6BC();
    sub_B5D668(v87, 0LL);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  *(float *)&this[1].klass = scale;
}