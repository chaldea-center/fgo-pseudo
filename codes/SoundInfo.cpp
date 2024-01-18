void __fastcall SoundInfo___ctor(SoundInfo_o *this, const MethodInfo *method)
{
  LODWORD(this[1].klass) = 1058642330;
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
  SoundLogger_c *v12; // x0
  System_String_o *LogBgm; // x0
  System_String_o *v14; // x19
  System_String_o *LogVoice; // x0
  System_String_o *v16; // x19
  System_String_o *LogSe; // x0
  System_Int32_array **v18; // x19
  float v19; // s9
  float v20; // s5
  float v21; // s6
  float v22; // s7
  float v23; // s4
  float v24; // s5
  float v25; // s6
  float v26; // s7
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array *v35; // x20
  System_String_o *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_o *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  UnityEngine_Rect_o v68; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Rect_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418766C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GUI_TypeInfo, method);
    sub_B2C35C(&SoundLogger_TypeInfo, v3);
    sub_B2C35C(&string___TypeInfo, v4);
    sub_B2C35C(&StringLiteral_15713/*"[BGM]\n"*/, v5);
    sub_B2C35C(&StringLiteral_1495/*"<size="*/, v6);
    sub_B2C35C(&StringLiteral_45/*"\n[SE]\n"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    sub_B2C35C(&StringLiteral_1311/*"</size>"*/, v9);
    sub_B2C35C(&StringLiteral_46/*"\n[VOICE]\n"*/, v10);
    sub_B2C35C(&StringLiteral_1514/*">"*/, v11);
    byte_418766C = 1;
  }
  HIDWORD(methoda.parameters) = 0;
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    v12 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    LogBgm = SoundLogger__getLogBgm((const MethodInfo *)v12);
    v14 = System_String__Concat_44305532((System_String_o *)StringLiteral_15713/*"[BGM]\n"*/, LogBgm, 0LL);
    LogVoice = SoundLogger__getLogVoice((const MethodInfo *)v14);
    v16 = System_String__Concat_44307816(v14, (System_String_o *)StringLiteral_46/*"\n[VOICE]\n"*/, LogVoice, 0LL);
    LogSe = SoundLogger__getLogSe((const MethodInfo *)v16);
    v18 = (System_Int32_array **)System_String__Concat_44307816(v16, (System_String_o *)StringLiteral_45/*"\n[SE]\n"*/, LogSe, 0LL);
    v19 = *(float *)&this[1].klass * (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656);
    v70.fields.m_XMin = 5.0;
    v70.fields.m_Width = v19 * 310.0;
    v70.fields.m_YMin = 5.0;
    v70.fields.m_Height = v19 * 825.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v70, 825.0, v20, v21, v22, &methoda);
    if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    }
    *(_QWORD *)&v71.fields.m_XMin = methoda.methodPointer;
    *(_QWORD *)&v71.fields.m_Width = methoda.invoker_method;
    UnityEngine_GUI__Box(v71, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v72.fields.m_YMin = 5.0;
    v72.fields.m_Height = v19 * 825.0;
    v72.fields.m_Width = v19 * 1000.0;
    v72.fields.m_XMin = 10.0;
    *(_QWORD *)&v68.fields.m_XMin = 0LL;
    *(_QWORD *)&v68.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v72, v23, v24, v25, v26, (const MethodInfo *)&v68);
    v27 = sub_B2C374(string___TypeInfo, 5LL);
    if ( !v27 )
      sub_B2C434(0LL, v28);
    v35 = (System_String_array *)v27;
    v36 = (System_String_o *)StringLiteral_1495/*"<size="*/;
    if ( StringLiteral_1495/*"<size="*/ )
    {
      v36 = (System_String_o *)sub_B2C41C(StringLiteral_1495/*"<size="*/, v35->obj.klass->_1.element_class);
      if ( !v36 )
        goto LABEL_35;
      v37 = (System_Int32_array **)StringLiteral_1495/*"<size="*/;
    }
    else
    {
      v37 = 0LL;
    }
    if ( !v35->max_length )
      goto LABEL_34;
    v35->m_Items[0] = (System_String_o *)v37;
    sub_B2C2F8((BattleServantConfConponent_o *)v35->m_Items, v37, v29, v30, v31, v32, v33, v34);
    *((float *)&methoda.parameters + 1) = v19 * 18.0;
    v36 = System_Single__ToString(v19 * 18.0, (const MethodInfo *)((char *)&methoda.parameters + 4));
    v44 = (System_Int32_array **)v36;
    if ( !v36 || (v36 = (System_String_o *)sub_B2C41C(v36, v35->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v35->max_length <= 1 )
        goto LABEL_34;
      v35->m_Items[1] = (System_String_o *)v44;
      sub_B2C2F8((BattleServantConfConponent_o *)&v35->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
      v36 = (System_String_o *)StringLiteral_1514/*">"*/;
      if ( StringLiteral_1514/*">"*/ )
      {
        v36 = (System_String_o *)sub_B2C41C(StringLiteral_1514/*">"*/, v35->obj.klass->_1.element_class);
        if ( !v36 )
          goto LABEL_35;
        v51 = (System_Int32_array **)StringLiteral_1514/*">"*/;
      }
      else
      {
        v51 = 0LL;
      }
      if ( v35->max_length <= 2 )
        goto LABEL_34;
      v35->m_Items[2] = (System_String_o *)v51;
      sub_B2C2F8((BattleServantConfConponent_o *)&v35->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
      if ( !v18 || (v36 = (System_String_o *)sub_B2C41C(v18, v35->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v35->max_length <= 3 )
          goto LABEL_34;
        v35->m_Items[3] = (System_String_o *)v18;
        sub_B2C2F8((BattleServantConfConponent_o *)&v35->m_Items[3], v18, v52, v53, v54, v55, v56, v57);
        v36 = (System_String_o *)StringLiteral_1311/*"</size>"*/;
        if ( !StringLiteral_1311/*"</size>"*/ )
        {
          v64 = 0LL;
LABEL_31:
          if ( v35->max_length > 4 )
          {
            v35->m_Items[4] = (System_String_o *)v64;
            sub_B2C2F8((BattleServantConfConponent_o *)&v35->m_Items[4], v64, v58, v59, v60, v61, v62, v63);
            v65 = System_String__Concat_44385656(v35, 0LL);
            UnityEngine_GUI__Label(v68, v65, 0LL);
            return;
          }
LABEL_34:
          v66 = sub_B2C460(v36);
          sub_B2C400(v66, 0LL);
        }
        v36 = (System_String_o *)sub_B2C41C(StringLiteral_1311/*"</size>"*/, v35->obj.klass->_1.element_class);
        if ( v36 )
        {
          v64 = (System_Int32_array **)StringLiteral_1311/*"</size>"*/;
          goto LABEL_31;
        }
      }
    }
LABEL_35:
    v67 = sub_B2C454(v36);
    sub_B2C400(v67, 0LL);
  }
}


void __fastcall SoundInfo__SetScaleSoundInfo(SoundInfo_o *this, float scale, const MethodInfo *method)
{
  *(float *)&this[1].klass = scale;
}