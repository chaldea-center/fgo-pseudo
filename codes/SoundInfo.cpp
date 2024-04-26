void __fastcall SoundInfo___ctor(SoundInfo_o *this, const MethodInfo *method)
{
  LODWORD(this[1].klass) = 1058642330;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundInfo__OnGUI(SoundInfo_o *this, const MethodInfo *method)
{
  SoundLogger_c *v3; // x0
  System_String_o *LogBgm; // x0
  System_String_o *v5; // x19
  System_String_o *LogVoice; // x0
  System_String_o *v7; // x19
  System_String_o *LogSe; // x0
  System_Int32_array **v9; // x19
  float v10; // s9
  float v11; // s5
  float v12; // s6
  float v13; // s7
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array *v26; // x20
  System_String_o *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_o *v56; // x0
  __int64 v57; // x0
  __int64 v58; // x0
  UnityEngine_Rect_o v59; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Rect_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4350A86 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_GUI_TypeInfo);
    sub_B70694(&SoundLogger_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_15934/*"[BGM]\n"*/);
    sub_B70694(&StringLiteral_1521/*"<size="*/);
    sub_B70694(&StringLiteral_47/*"\n[SE]\n"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_1337/*"</size>"*/);
    sub_B70694(&StringLiteral_48/*"\n[VOICE]\n"*/);
    sub_B70694(&StringLiteral_1540/*">"*/);
    byte_4350A86 = 1;
  }
  HIDWORD(methoda.parameters) = 0;
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    v3 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v3);
    v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_15934/*"[BGM]\n"*/, LogBgm, 0LL);
    LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v5);
    v7 = System_String__Concat_44760452(v5, (System_String_o *)StringLiteral_48/*"\n[VOICE]\n"*/, LogVoice, 0LL);
    LogSe = SoundLogger__getLogSe((const MethodInfo *)v7);
    v9 = (System_Int32_array **)System_String__Concat_44760452(v7, (System_String_o *)StringLiteral_47/*"\n[SE]\n"*/, LogSe, 0LL);
    v10 = *(float *)&this[1].klass * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    v61.fields.m_XMin = 5.0;
    v61.fields.m_Width = v10 * 310.0;
    v61.fields.m_YMin = 5.0;
    v61.fields.m_Height = v10 * 825.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v61, 825.0, v11, v12, v13, &methoda);
    if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    }
    *(_QWORD *)&v62.fields.m_XMin = methoda.methodPointer;
    *(_QWORD *)&v62.fields.m_Width = methoda.invoker_method;
    UnityEngine_GUI__Box(v62, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v63.fields.m_YMin = 5.0;
    v63.fields.m_Height = v10 * 825.0;
    v63.fields.m_Width = v10 * 1000.0;
    v63.fields.m_XMin = 10.0;
    *(_QWORD *)&v59.fields.m_XMin = 0LL;
    *(_QWORD *)&v59.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v63, v14, v15, v16, v17, (const MethodInfo *)&v59);
    v18 = sub_B706AC(string___TypeInfo, 5LL);
    if ( !v18 )
      sub_B7076C(0LL, v19);
    v26 = (System_String_array *)v18;
    v27 = (System_String_o *)StringLiteral_1521/*"<size="*/;
    if ( StringLiteral_1521/*"<size="*/ )
    {
      v27 = (System_String_o *)sub_B70754(StringLiteral_1521/*"<size="*/, v26->obj.klass->_1.element_class);
      if ( !v27 )
        goto LABEL_35;
      v28 = (System_Int32_array **)StringLiteral_1521/*"<size="*/;
    }
    else
    {
      v28 = 0LL;
    }
    if ( !v26->max_length )
      goto LABEL_34;
    v26->m_Items[0] = (System_String_o *)v28;
    sub_B70630((BattleServantConfConponent_o *)v26->m_Items, v28, v20, v21, v22, v23, v24, v25);
    *((float *)&methoda.parameters + 1) = v10 * 18.0;
    v27 = System_Single__ToString(v10 * 18.0, (const MethodInfo *)((char *)&methoda.parameters + 4));
    v35 = (System_Int32_array **)v27;
    if ( !v27 || (v27 = (System_String_o *)sub_B70754(v27, v26->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v26->max_length <= 1 )
        goto LABEL_34;
      v26->m_Items[1] = (System_String_o *)v35;
      sub_B70630((BattleServantConfConponent_o *)&v26->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
      v27 = (System_String_o *)StringLiteral_1540/*">"*/;
      if ( StringLiteral_1540/*">"*/ )
      {
        v27 = (System_String_o *)sub_B70754(StringLiteral_1540/*">"*/, v26->obj.klass->_1.element_class);
        if ( !v27 )
          goto LABEL_35;
        v42 = (System_Int32_array **)StringLiteral_1540/*">"*/;
      }
      else
      {
        v42 = 0LL;
      }
      if ( v26->max_length <= 2 )
        goto LABEL_34;
      v26->m_Items[2] = (System_String_o *)v42;
      sub_B70630((BattleServantConfConponent_o *)&v26->m_Items[2], v42, v36, v37, v38, v39, v40, v41);
      if ( !v9 || (v27 = (System_String_o *)sub_B70754(v9, v26->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v26->max_length <= 3 )
          goto LABEL_34;
        v26->m_Items[3] = (System_String_o *)v9;
        sub_B70630((BattleServantConfConponent_o *)&v26->m_Items[3], v9, v43, v44, v45, v46, v47, v48);
        v27 = (System_String_o *)StringLiteral_1337/*"</size>"*/;
        if ( !StringLiteral_1337/*"</size>"*/ )
        {
          v55 = 0LL;
LABEL_31:
          if ( v26->max_length > 4 )
          {
            v26->m_Items[4] = (System_String_o *)v55;
            sub_B70630((BattleServantConfConponent_o *)&v26->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
            v56 = System_String__Concat_44838292(v26, 0LL);
            UnityEngine_GUI__Label(v59, v56, 0LL);
            return;
          }
LABEL_34:
          v57 = sub_B70798(v27);
          sub_B70738(v57, 0LL);
        }
        v27 = (System_String_o *)sub_B70754(StringLiteral_1337/*"</size>"*/, v26->obj.klass->_1.element_class);
        if ( v27 )
        {
          v55 = (System_Int32_array **)StringLiteral_1337/*"</size>"*/;
          goto LABEL_31;
        }
      }
    }
LABEL_35:
    v58 = sub_B7078C(v27);
    sub_B70738(v58, 0LL);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  *(float *)&this[1].klass = scale;
}