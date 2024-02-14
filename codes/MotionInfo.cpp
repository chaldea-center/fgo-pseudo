void __fastcall MotionInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  MotionInfo_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  struct MotionInfo_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  MotionInfo_c *v24; // x8

  if ( (byte_4214622 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string____ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_List_List_string___TypeInfo, v8);
    sub_B0D8A4(&MotionInfo_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4214622 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MotionInfo_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->_IsRandom_k__BackingField = 0;
  v13->static_fields->_IsSe_k__BackingField = 0;
  MotionInfo_TypeInfo->static_fields->scrollPosition = UnityEngine_Vector2__get_zero(0LL);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_List_string___TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v17 = MotionInfo_TypeInfo->static_fields;
  v17->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->voicePlaybackLogList,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlaybackLogMaxNum = 500;
  v24->static_fields->voicePlayLogLineSize = 0;
}


void __fastcall MotionInfo___ctor(MotionInfo_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MotionInfo__AddSeLog(System_String_o *seId, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  MotionInfo_c *v10; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  MotionInfo_c *v19; // x0
  System_Int32_array **v20; // x20
  struct MotionInfo_StaticFields *v21; // x0
  const MethodInfo *v22; // x0

  if ( (byte_421461C & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_11638/*"SE"*/, v9);
    byte_421461C = 1;
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_421464F )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_421464F = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  v10->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4214650 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    v10 = MotionInfo_TypeInfo;
    byte_4214650 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MotionInfo_TypeInfo;
  }
  v10->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_421464E )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    v10 = MotionInfo_TypeInfo;
    byte_421464E = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MotionInfo_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_VoiceId_k__BackingField,
    (System_Int32_array **)seId,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4214652 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v12);
    byte_4214652 = 1;
  }
  v19 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v19 = MotionInfo_TypeInfo;
  }
  v19->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4214653 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v12);
    v19 = MotionInfo_TypeInfo;
    byte_4214653 = 1;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = MotionInfo_TypeInfo;
  }
  v19->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4214654 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v12);
    v19 = MotionInfo_TypeInfo;
    byte_4214654 = 1;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = MotionInfo_TypeInfo;
  }
  v19->static_fields->_IsRandom_k__BackingField = 0;
  v20 = (System_Int32_array **)StringLiteral_11638/*"SE"*/;
  if ( !byte_4214651 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v12);
    v19 = MotionInfo_TypeInfo;
    byte_4214651 = 1;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = MotionInfo_TypeInfo;
  }
  v21 = v19->static_fields;
  v21->_VoiceType_k__BackingField = (struct System_String_o *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&v21->_VoiceType_k__BackingField, v20, v13, v14, v15, v16, v17, v18);
  MotionInfo__AddVoiceLog(v22);
}


void __fastcall MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  System_String_o *NewLine; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *voicePlaybackLogList; // x0
  __int64 v19; // x1
  MotionInfo_c *v20; // x0
  __int16 v21; // w8
  int v22; // w8
  MotionInfo_c *v23; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v25; // x0
  __int64 *v26; // x8
  MotionInfo_c *v27; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  MotionInfo_c *v32; // x0
  System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array *v40; // x20
  System_String_o *v41; // x0
  System_Int32_array **v42; // x1
  __int64 v43; // x1
  float v44; // s0
  MotionInfo_c *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  __int64 v60; // x1
  float v61; // s0
  MotionInfo_c *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x21
  System_String_o *v77; // x0
  __int64 v78; // x1
  MotionInfo_c *v79; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  const MethodInfo *v83; // x0
  __int64 v84; // x0
  __int64 v85; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421461D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B0D8A4(&MotionInfo_TypeInfo, v6);
    sub_B0D8A4(&string___TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_286/*" 確率 / 合計 : "*/, v8);
    sub_B0D8A4(&StringLiteral_170/*" VoiceID : "*/, v9);
    sub_B0D8A4(&StringLiteral_964/*"0.00"*/, v10);
    sub_B0D8A4(&StringLiteral_127/*" / "*/, v11);
    sub_B0D8A4(&StringLiteral_769/*"--- Voice・SE Log ---"*/, v12);
    sub_B0D8A4(&StringLiteral_162/*" SEID : "*/, v13);
    sub_B0D8A4(&StringLiteral_284/*" 分類 : "*/, v14);
    sub_B0D8A4(&StringLiteral_12756/*"ServantID : "*/, v15);
    byte_421461D = 1;
  }
  LODWORD(format.klass) = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v1,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_43849904(
                                                                                  (System_String_o *)StringLiteral_769/*"--- Voice・SE Log ---"*/,
                                                                                  NewLine,
                                                                                  0LL);
  if ( !v16 )
    goto LABEL_80;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v16,
    voicePlaybackLogList,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4214647 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v19);
    byte_4214647 = 1;
  }
  v20 = MotionInfo_TypeInfo;
  v21 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v21 & 0x400) != 0 )
  {
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v20 = MotionInfo_TypeInfo;
      v21 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v22 = v21 & 0x400;
  }
  else
  {
    v22 = 0;
  }
  if ( v20->static_fields->_IsSe_k__BackingField )
  {
    if ( v22 && !v20->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v20);
    if ( !byte_4214649 )
    {
      sub_B0D8A4(&MotionInfo_TypeInfo, v19);
      byte_4214649 = 1;
    }
    v23 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v23 = MotionInfo_TypeInfo;
    }
    VoiceId_k__BackingField = v23->static_fields->_VoiceId_k__BackingField;
    v25 = System_Environment__get_NewLine(0LL);
    v26 = &StringLiteral_162/*" SEID : "*/;
  }
  else
  {
    if ( v22 && !v20->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v20);
    if ( !byte_4214648 )
    {
      sub_B0D8A4(&MotionInfo_TypeInfo, v19);
      byte_4214648 = 1;
    }
    v27 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v27 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v27->static_fields->_VoiceServantId_k__BackingField;
    v29 = System_Environment__get_NewLine(0LL);
    v30 = System_String__Concat_43852188(
            (System_String_o *)StringLiteral_12756/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            v29,
            0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    if ( !byte_4214649 )
    {
      sub_B0D8A4(&MotionInfo_TypeInfo, v31);
      byte_4214649 = 1;
    }
    v32 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v32 = MotionInfo_TypeInfo;
    }
    VoiceId_k__BackingField = v32->static_fields->_VoiceId_k__BackingField;
    v25 = System_Environment__get_NewLine(0LL);
    v26 = &StringLiteral_170/*" VoiceID : "*/;
  }
  v33 = System_String__Concat_43852188((System_String_o *)*v26, VoiceId_k__BackingField, v25, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v16,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  voicePlaybackLogList = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0D8BC(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
LABEL_80:
    sub_B0D97C(voicePlaybackLogList);
  v40 = (System_String_array *)voicePlaybackLogList;
  v41 = (System_String_o *)StringLiteral_286/*" 確率 / 合計 : "*/;
  if ( StringLiteral_286/*" 確率 / 合計 : "*/ )
  {
    v41 = (System_String_o *)sub_B0D964(StringLiteral_286/*" 確率 / 合計 : "*/, v40->obj.klass->_1.element_class);
    if ( !v41 )
      goto LABEL_79;
    v42 = (System_Int32_array **)StringLiteral_286/*" 確率 / 合計 : "*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( !v40->max_length )
    goto LABEL_78;
  v40->m_Items[0] = (System_String_o *)v42;
  sub_B0D840((BattleServantConfConponent_o *)v40->m_Items, v42, v34, v35, v36, v37, v38, v39);
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    LODWORD(v44) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
  if ( !byte_421464A )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v43);
    byte_421464A = 1;
  }
  v45 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v44) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v45 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v45->static_fields->_VoiceWeight_k__BackingField;
  v41 = System_Single__ToString_43836576(v44, &format, (const MethodInfo *)StringLiteral_964/*"0.00"*/);
  v52 = (System_Int32_array **)v41;
  if ( v41 )
  {
    v41 = (System_String_o *)sub_B0D964(v41, v40->obj.klass->_1.element_class);
    if ( !v41 )
      goto LABEL_79;
  }
  if ( v40->max_length <= 1 )
    goto LABEL_78;
  v40->m_Items[1] = (System_String_o *)v52;
  sub_B0D840((BattleServantConfConponent_o *)&v40->m_Items[1], v52, v46, v47, v48, v49, v50, v51);
  v41 = (System_String_o *)StringLiteral_127/*" / "*/;
  if ( StringLiteral_127/*" / "*/ )
  {
    v41 = (System_String_o *)sub_B0D964(StringLiteral_127/*" / "*/, v40->obj.klass->_1.element_class);
    if ( !v41 )
      goto LABEL_79;
    v59 = (System_Int32_array **)StringLiteral_127/*" / "*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( v40->max_length <= 2 )
    goto LABEL_78;
  v40->m_Items[2] = (System_String_o *)v59;
  sub_B0D840((BattleServantConfConponent_o *)&v40->m_Items[2], v59, v53, v54, v55, v56, v57, v58);
  if ( !byte_421464B )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v60);
    byte_421464B = 1;
  }
  v62 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v61) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v62 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v62->static_fields->_VoiceTotalWeight_k__BackingField;
  v41 = System_Single__ToString_43836576(v61, &format, (const MethodInfo *)StringLiteral_964/*"0.00"*/);
  v69 = (System_Int32_array **)v41;
  if ( v41 )
  {
    v41 = (System_String_o *)sub_B0D964(v41, v40->obj.klass->_1.element_class);
    if ( !v41 )
      goto LABEL_79;
  }
  if ( v40->max_length <= 3 )
    goto LABEL_78;
  v40->m_Items[3] = (System_String_o *)v69;
  sub_B0D840((BattleServantConfConponent_o *)&v40->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
  v41 = System_Environment__get_NewLine(0LL);
  v76 = (System_Int32_array **)v41;
  if ( v41 )
  {
    v41 = (System_String_o *)sub_B0D964(v41, v40->obj.klass->_1.element_class);
    if ( !v41 )
    {
LABEL_79:
      v85 = sub_B0D99C(v41);
      sub_B0D948(v85, 0LL);
    }
  }
  if ( v40->max_length <= 4 )
  {
LABEL_78:
    v84 = sub_B0D9A8(v41);
    sub_B0D948(v84, 0LL);
  }
  v40->m_Items[4] = (System_String_o *)v76;
  sub_B0D840((BattleServantConfConponent_o *)&v40->m_Items[4], v76, v70, v71, v72, v73, v74, v75);
  v77 = System_String__Concat_43930028(v40, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v16,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  if ( !byte_421464C )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v78);
    byte_421464C = 1;
  }
  v79 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v79 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v79->static_fields->_VoiceType_k__BackingField;
  v81 = System_Environment__get_NewLine(0LL);
  v82 = System_String__Concat_43852188((System_String_o *)StringLiteral_284/*" 分類 : "*/, VoiceType_k__BackingField, v81, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v16,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  voicePlaybackLogList = (EventMissionProgressRequest_Argument_ProgressData_o *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_80;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voicePlaybackLogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_string___Add__);
  MotionInfo__UpdateVoicePlaybackLogString(v83);
}


void __fastcall MotionInfo__AddVoiceLog_24527484(System_String_o *str, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *voicePlaybackLogList; // x0
  MotionInfo_c *v10; // x0
  const MethodInfo *v11; // x0

  if ( (byte_421461E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B0D8A4(&MotionInfo_TypeInfo, v7);
    byte_421461E = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v8 )
    goto LABEL_9;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)str,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  v10 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v10->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
LABEL_9:
    sub_B0D97C(voicePlaybackLogList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    voicePlaybackLogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_string___Add__);
  MotionInfo__UpdateVoicePlaybackLogString(v11);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8
  System_String_o *result; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = type;
  if ( (byte_421461A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23913/*"バスター"*/, *(_QWORD *)&type);
    sub_B0D8A4(&StringLiteral_23896/*"クイック"*/, v4);
    sub_B0D8A4(&StringLiteral_23886/*"アーツ"*/, v5);
    sub_B0D8A4(&StringLiteral_23890/*"エクストラ"*/, v6);
    byte_421461A = 1;
  }
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v7 = &StringLiteral_23886/*"アーツ"*/;
      goto LABEL_9;
    case 2:
      v7 = &StringLiteral_23913/*"バスター"*/;
      goto LABEL_9;
    case 3:
      v7 = &StringLiteral_23896/*"クイック"*/;
      goto LABEL_9;
    case 4:
      v7 = &StringLiteral_23890/*"エクストラ"*/;
LABEL_9:
      result = (System_String_o *)*v7;
      break;
    default:
      result = System_Int32__ToString((int32_t)&v9, 0LL);
      break;
  }
  return result;
}


void __fastcall MotionInfo__OnGUI(MotionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  MotionInfo_o *v27; // x0
  System_Int32_array **TypeName; // x19
  struct BattleActionData_o *actionData; // x8
  int32_t *p_type; // x8
  MotionInfo_c *v31; // x8
  System_String_o *v32; // x20
  MotionInfo_c *v33; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *NewLine; // x0
  MotionInfo_c *v36; // x0
  __int16 v37; // w8
  int v38; // w8
  System_String_o **v39; // x9
  System_String_o *v40; // x21
  MotionInfo_c *v41; // x0
  System_String_o *VoiceId_k__BackingField; // x22
  System_String_o *v43; // x0
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array *v51; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  __int64 v59; // x1
  float v60; // s0
  MotionInfo_c *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  __int64 v76; // x1
  float v77; // s0
  MotionInfo_c *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x21
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  __int64 v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x21
  System_Int32_array **v108; // x21
  System_String_array *v109; // x20
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x22
  il2cpp_array_size_t *p_max_length; // x23
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x1
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x22
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **svtName; // x22
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x22
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x22
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x1
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **v166; // x22
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x22
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x22
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Int32_array **v187; // x22
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_Int32_array **v194; // x1
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  System_Int32_array **v201; // x22
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_Int32_array **v214; // x19
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  System_Int32_array **v221; // x19
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_Int32_array **v228; // x1
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  System_Int32_array **v235; // x19
  System_String_array **v236; // x2
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  System_Int32_array **v248; // x19
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  System_Int32_array **v255; // x19
  System_Int32_array **v256; // x19
  float v257; // s11
  float v258; // s8
  float v259; // s9
  float v260; // s4
  float v261; // s5
  float v262; // s6
  float v263; // s7
  System_String_array **v264; // x2
  System_String_array **v265; // x3
  System_Boolean_array **v266; // x4
  System_Int32_array **v267; // x5
  System_Int32_array *v268; // x6
  System_Int32_array *v269; // x7
  System_String_array *v270; // x20
  System_Int32_array **v271; // x1
  float v272; // s0
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  System_Int32_array **v279; // x21
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  System_Int32_array **v286; // x1
  System_String_array **v287; // x2
  System_String_array **v288; // x3
  System_Boolean_array **v289; // x4
  System_Int32_array **v290; // x5
  System_Int32_array *v291; // x6
  System_Int32_array *v292; // x7
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  System_Int32_array **v299; // x1
  System_String_o *v300; // x19
  float v301; // s8
  int32_t width; // w0
  float v303; // s4
  float v304; // s5
  float v305; // s6
  float v306; // s7
  struct MotionInfo_StaticFields *static_fields; // x8
  float x; // s10
  float y; // s11
  float v310; // s4
  float v311; // s5
  float v312; // s6
  float v313; // s7
  struct UnityEngine_Vector2_o v314; // kr00_8
  int32_t v315; // w9
  int v316; // w23
  int32_t v317; // w19
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x19
  int32_t v319; // w19
  System_String_o *v320; // x19
  float v321; // s4
  float v322; // s5
  float v323; // s6
  float v324; // s7
  System_Int32_array **v325; // x20
  System_String_array **v326; // x2
  System_String_array **v327; // x3
  System_Boolean_array **v328; // x4
  System_Int32_array **v329; // x5
  System_Int32_array *v330; // x6
  System_Int32_array *v331; // x7
  System_String_array *v332; // x19
  __int64 v333; // x0
  System_Int32_array **v334; // x1
  float v335; // s0
  System_String_o *v336; // x0
  System_String_array **v337; // x2
  System_String_array **v338; // x3
  System_Boolean_array **v339; // x4
  System_Int32_array **v340; // x5
  System_Int32_array *v341; // x6
  System_Int32_array *v342; // x7
  System_Int32_array **v343; // x21
  System_String_array **v344; // x2
  System_String_array **v345; // x3
  System_Boolean_array **v346; // x4
  System_Int32_array **v347; // x5
  System_Int32_array *v348; // x6
  System_Int32_array *v349; // x7
  __int64 v350; // x0
  System_Int32_array **v351; // x1
  __int64 v352; // x0
  System_String_array **v353; // x2
  System_String_array **v354; // x3
  System_Boolean_array **v355; // x4
  System_Int32_array **v356; // x5
  System_Int32_array *v357; // x6
  System_Int32_array *v358; // x7
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  __int64 v365; // x0
  System_Int32_array **v366; // x1
  __int64 v367; // x0
  int v368; // w20
  int v369; // w8
  __int64 v370; // x0
  __int64 v371; // x0
  __int64 v372; // x0
  __int64 v373; // x0
  __int64 v374; // x0
  __int64 v375; // x0
  __int64 v376; // x0
  __int64 v377; // x0
  __int64 v378; // x0
  __int64 v379; // x0
  __int64 v380; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-100h]
  int32_t v382; // [xsp+18h] [xbp-E8h]
  int v383; // [xsp+1Ch] [xbp-E4h]
  MethodInfo methoda; // [xsp+20h] [xbp-E0h] BYREF
  const char *name; // [xsp+70h] [xbp-90h]
  System_String_o format; // [xsp+7Ch] [xbp-84h] BYREF
  UnityEngine_Vector2_o v387; // 0:s4.4,4:s5.4
  UnityEngine_Rect_o v388; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v389; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v390; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v391; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v392; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v393; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4214619 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B0D8A4(&UnityEngine_GUI_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___get_Item__, v9);
    sub_B0D8A4(&MotionInfo_TypeInfo, v10);
    sub_B0D8A4(&string___TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_23875/*"【モーションID】"*/, v12);
    sub_B0D8A4(&StringLiteral_23874/*"【ボイス・SE】"*/, v13);
    sub_B0D8A4(&StringLiteral_15267/*"VoiceID : "*/, v14);
    sub_B0D8A4(&StringLiteral_23876/*"【名前】"*/, v15);
    sub_B0D8A4(&StringLiteral_286/*" 確率 / 合計 : "*/, v16);
    sub_B0D8A4(&StringLiteral_1503/*"<size="*/, v17);
    sub_B0D8A4(&StringLiteral_23873/*"【カード属性】"*/, v18);
    sub_B0D8A4(&StringLiteral_964/*"0.00"*/, v19);
    sub_B0D8A4(&StringLiteral_127/*" / "*/, v20);
    sub_B0D8A4(&StringLiteral_162/*" SEID : "*/, v21);
    sub_B0D8A4(&StringLiteral_1/*""*/, v22);
    sub_B0D8A4(&StringLiteral_284/*" 分類 : "*/, v23);
    sub_B0D8A4(&StringLiteral_1319/*"</size>"*/, v24);
    sub_B0D8A4(&StringLiteral_1522/*">"*/, v25);
    sub_B0D8A4(&StringLiteral_12756/*"ServantID : "*/, v26);
    byte_4214619 = 1;
  }
  LODWORD(format.monitor) = 0;
  format.klass = 0LL;
  name = 0LL;
  memset((char *)&methoda.genericContainerHandle + 4, 0, 20);
  if ( !LOBYTE(this[1].klass) )
    return;
  LODWORD(format.monitor) = 0;
  v27 = (MotionInfo_o *)MotionInfo_TypeInfo;
  TypeName = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v27 = (MotionInfo_o *)MotionInfo_TypeInfo;
  }
  actionData = *(struct BattleActionData_o **)(*(_QWORD *)&v27[7].fields + 8LL);
  if ( actionData )
  {
    if ( (v27[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v27[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = (MotionInfo_o *)MotionInfo_TypeInfo;
      actionData = MotionInfo_TypeInfo->static_fields->actionData;
      if ( !actionData )
        goto LABEL_264;
    }
    LODWORD(format.monitor) = actionData->fields.motionId;
    if ( actionData->fields.commandType == -1 )
    {
      if ( (v27[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v27[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(v27);
        actionData = MotionInfo_TypeInfo->static_fields->actionData;
        if ( !actionData )
          goto LABEL_264;
      }
      p_type = &actionData->fields.type;
    }
    else
    {
      if ( (v27[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v27[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(v27);
        actionData = MotionInfo_TypeInfo->static_fields->actionData;
        if ( !actionData )
          goto LABEL_264;
      }
      p_type = &actionData->fields.commandType;
    }
    TypeName = (System_Int32_array **)MotionInfo__GetTypeName(v27, *p_type, v2);
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4214647 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_4214647 = 1;
  }
  v31 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v31 = MotionInfo_TypeInfo;
  }
  if ( v31->static_fields->_IsSe_k__BackingField )
  {
    v32 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v31);
    if ( !byte_4214648 )
    {
      sub_B0D8A4(&MotionInfo_TypeInfo, method);
      byte_4214648 = 1;
    }
    v33 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v33 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v33->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v32 = System_String__Concat_43852188(
            (System_String_o *)StringLiteral_12756/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v31 = MotionInfo_TypeInfo;
  }
  if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v31);
  if ( !byte_4214647 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_4214647 = 1;
  }
  v36 = MotionInfo_TypeInfo;
  v37 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v37 & 0x400) != 0 )
  {
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v36 = MotionInfo_TypeInfo;
      v37 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v38 = v37 & 0x400;
  }
  else
  {
    v38 = 0;
  }
  if ( v36->static_fields->_IsSe_k__BackingField )
    v39 = (System_String_o **)&StringLiteral_162/*" SEID : "*/;
  else
    v39 = (System_String_o **)&StringLiteral_15267/*"VoiceID : "*/;
  v40 = *v39;
  if ( v38 && !v36->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v36);
  if ( !byte_4214649 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_4214649 = 1;
  }
  v41 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v41 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v41->static_fields->_VoiceId_k__BackingField;
  v43 = System_Environment__get_NewLine(0LL);
  v44 = (System_Int32_array **)System_String__Concat_43853316(v32, v40, VoiceId_k__BackingField, v43, 0LL);
  v27 = (MotionInfo_o *)sub_B0D8BC(string___TypeInfo, 8LL);
  if ( !v27 )
    goto LABEL_264;
  v51 = (System_String_array *)v27;
  if ( v44 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v44, v27->klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( !v51->max_length )
    goto LABEL_265;
  v51->m_Items[0] = (System_String_o *)v44;
  sub_B0D840((BattleServantConfConponent_o *)v51->m_Items, v44, v45, v46, v47, v48, v49, v50);
  v27 = (MotionInfo_o *)StringLiteral_286/*" 確率 / 合計 : "*/;
  if ( StringLiteral_286/*" 確率 / 合計 : "*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_286/*" 確率 / 合計 : "*/, v51->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
    v58 = (System_Int32_array **)StringLiteral_286/*" 確率 / 合計 : "*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v51->max_length <= 1 )
    goto LABEL_265;
  v51->m_Items[1] = (System_String_o *)v58;
  sub_B0D840((BattleServantConfConponent_o *)&v51->m_Items[1], v58, v52, v53, v54, v55, v56, v57);
  if ( !byte_421464A )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v59);
    byte_421464A = 1;
  }
  v61 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v60) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v61 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v61->static_fields->_VoiceWeight_k__BackingField;
  v27 = (MotionInfo_o *)System_Single__ToString_43836576(v60, &format, (const MethodInfo *)StringLiteral_964/*"0.00"*/);
  v68 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v51->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( v51->max_length <= 2 )
    goto LABEL_265;
  v51->m_Items[2] = (System_String_o *)v68;
  sub_B0D840((BattleServantConfConponent_o *)&v51->m_Items[2], v68, v62, v63, v64, v65, v66, v67);
  v27 = (MotionInfo_o *)StringLiteral_127/*" / "*/;
  if ( StringLiteral_127/*" / "*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_127/*" / "*/, v51->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
    v75 = (System_Int32_array **)StringLiteral_127/*" / "*/;
  }
  else
  {
    v75 = 0LL;
  }
  if ( v51->max_length <= 3 )
    goto LABEL_265;
  v51->m_Items[3] = (System_String_o *)v75;
  sub_B0D840((BattleServantConfConponent_o *)&v51->m_Items[3], v75, v69, v70, v71, v72, v73, v74);
  if ( !byte_421464B )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v76);
    byte_421464B = 1;
  }
  v78 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v77) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v78 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v78->static_fields->_VoiceTotalWeight_k__BackingField;
  v27 = (MotionInfo_o *)System_Single__ToString_43836576(v77, &format, (const MethodInfo *)StringLiteral_964/*"0.00"*/);
  v85 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v51->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( v51->max_length <= 4 )
    goto LABEL_265;
  v51->m_Items[4] = (System_String_o *)v85;
  sub_B0D840((BattleServantConfConponent_o *)&v51->m_Items[4], v85, v79, v80, v81, v82, v83, v84);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v92 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v51->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( v51->max_length <= 5 )
    goto LABEL_265;
  v51->m_Items[5] = (System_String_o *)v92;
  sub_B0D840((BattleServantConfConponent_o *)&v51->m_Items[5], v92, v86, v87, v88, v89, v90, v91);
  v27 = (MotionInfo_o *)StringLiteral_284/*" 分類 : "*/;
  if ( StringLiteral_284/*" 分類 : "*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_284/*" 分類 : "*/, v51->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
    v99 = (System_Int32_array **)StringLiteral_284/*" 分類 : "*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( v51->max_length <= 6 )
    goto LABEL_265;
  v51->m_Items[6] = (System_String_o *)v99;
  sub_B0D840((BattleServantConfConponent_o *)&v51->m_Items[6], v99, v93, v94, v95, v96, v97, v98);
  if ( !byte_421464C )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v100);
    byte_421464C = 1;
  }
  v27 = (MotionInfo_o *)MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v27 = (MotionInfo_o *)MotionInfo_TypeInfo;
  }
  v107 = *(System_Int32_array ***)(*(_QWORD *)&v27[7].fields + 40LL);
  if ( v107 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v107, v51->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( v51->max_length <= 7 )
    goto LABEL_265;
  v51->m_Items[7] = (System_String_o *)v107;
  sub_B0D840((BattleServantConfConponent_o *)&v51->m_Items[7], v107, v101, v102, v103, v104, v105, v106);
  v108 = (System_Int32_array **)System_String__Concat_43930028(v51, 0LL);
  v109 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 21LL);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  if ( !v109 )
    goto LABEL_264;
  v116 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  p_max_length = &v109->max_length;
  if ( !v109->max_length )
    goto LABEL_265;
  v109->m_Items[0] = (System_String_o *)v116;
  sub_B0D840((BattleServantConfConponent_o *)v109->m_Items, v116, v110, v111, v112, v113, v114, v115);
  v27 = (MotionInfo_o *)StringLiteral_23876/*"【名前】"*/;
  if ( StringLiteral_23876/*"【名前】"*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_23876/*"【名前】"*/, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
    v124 = (System_Int32_array **)StringLiteral_23876/*"【名前】"*/;
  }
  else
  {
    v124 = 0LL;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_265;
  v109->m_Items[1] = (System_String_o *)v124;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[1], v124, v118, v119, v120, v121, v122, v123);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v131 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_265;
  v109->m_Items[2] = (System_String_o *)v131;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[2], v131, v125, v126, v127, v128, v129, v130);
  svtName = (System_Int32_array **)MotionInfo_TypeInfo->static_fields->svtName;
  if ( svtName )
  {
    v27 = (MotionInfo_o *)sub_B0D964(svtName, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_265;
  v109->m_Items[3] = (System_String_o *)svtName;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[3], svtName, v132, v133, v134, v135, v136, v137);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v145 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_265;
  v109->m_Items[4] = (System_String_o *)v145;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[4], v145, v139, v140, v141, v142, v143, v144);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v152 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_265;
  v109->m_Items[5] = (System_String_o *)v152;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[5], v152, v146, v147, v148, v149, v150, v151);
  v27 = (MotionInfo_o *)StringLiteral_23875/*"【モーションID】"*/;
  if ( StringLiteral_23875/*"【モーションID】"*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_23875/*"【モーションID】"*/, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
    v159 = (System_Int32_array **)StringLiteral_23875/*"【モーションID】"*/;
  }
  else
  {
    v159 = 0LL;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_265;
  v109->m_Items[6] = (System_String_o *)v159;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[6], v159, v153, v154, v155, v156, v157, v158);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v166 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_265;
  v109->m_Items[7] = (System_String_o *)v166;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[7], v166, v160, v161, v162, v163, v164, v165);
  v27 = (MotionInfo_o *)System_Int32__ToString((int32_t)&format.monitor, 0LL);
  v173 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_265;
  v109->m_Items[8] = (System_String_o *)v173;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[8], v173, v167, v168, v169, v170, v171, v172);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v180 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_265;
  v109->m_Items[9] = (System_String_o *)v180;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[9], v180, v174, v175, v176, v177, v178, v179);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v187 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_265;
  v109->m_Items[10] = (System_String_o *)v187;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[10], v187, v181, v182, v183, v184, v185, v186);
  v27 = (MotionInfo_o *)StringLiteral_23873/*"【カード属性】"*/;
  if ( StringLiteral_23873/*"【カード属性】"*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_23873/*"【カード属性】"*/, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
    v194 = (System_Int32_array **)StringLiteral_23873/*"【カード属性】"*/;
  }
  else
  {
    v194 = 0LL;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_265;
  v109->m_Items[11] = (System_String_o *)v194;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[11], v194, v188, v189, v190, v191, v192, v193);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v201 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_265;
  v109->m_Items[12] = (System_String_o *)v201;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[12], v201, v195, v196, v197, v198, v199, v200);
  if ( TypeName )
  {
    v27 = (MotionInfo_o *)sub_B0D964(TypeName, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_265;
  v109->m_Items[13] = (System_String_o *)TypeName;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[13], TypeName, v202, v203, v204, v205, v206, v207);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v214 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_265;
  v109->m_Items[14] = (System_String_o *)v214;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[14], v214, v208, v209, v210, v211, v212, v213);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v221 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_265;
  v109->m_Items[15] = (System_String_o *)v221;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[15], v221, v215, v216, v217, v218, v219, v220);
  v27 = (MotionInfo_o *)StringLiteral_23874/*"【ボイス・SE】"*/;
  if ( StringLiteral_23874/*"【ボイス・SE】"*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_23874/*"【ボイス・SE】"*/, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
    v228 = (System_Int32_array **)StringLiteral_23874/*"【ボイス・SE】"*/;
  }
  else
  {
    v228 = 0LL;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_265;
  v109->m_Items[16] = (System_String_o *)v228;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[16], v228, v222, v223, v224, v225, v226, v227);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v235 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_265;
  v109->m_Items[17] = (System_String_o *)v235;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[17], v235, v229, v230, v231, v232, v233, v234);
  if ( v108 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v108, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_265;
  v109->m_Items[18] = (System_String_o *)v108;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[18], v108, v236, v237, v238, v239, v240, v241);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v248 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_265;
  v109->m_Items[19] = (System_String_o *)v248;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[19], v248, v242, v243, v244, v245, v246, v247);
  v27 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v255 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v109->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_265;
  v109->m_Items[20] = (System_String_o *)v255;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[20], v255, v249, v250, v251, v252, v253, v254);
  v256 = (System_Int32_array **)System_String__Concat_43930028(v109, 0LL);
  v257 = (float)UnityEngine_Screen__get_height(0LL) * 0.25;
  v258 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *((float *)&format.klass + 1) = v258 * 18.0;
  v259 = v258 * 250.0;
  v388.fields.m_XMin = (float)UnityEngine_Screen__get_width(0LL) - (float)(v258 * 250.0);
  v388.fields.m_Height = v257 * 4.0;
  v388.fields.m_YMin = 10.0;
  v388.fields.m_Width = v258 * 250.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v388, v260, v261, v262, v263, &methoda);
  v27 = (MotionInfo_o *)sub_B0D8BC(string___TypeInfo, 5LL);
  if ( !v27 )
LABEL_264:
    sub_B0D97C(v27);
  v270 = (System_String_array *)v27;
  v27 = (MotionInfo_o *)StringLiteral_1503/*"<size="*/;
  if ( StringLiteral_1503/*"<size="*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_1503/*"<size="*/, v270->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
    v271 = (System_Int32_array **)StringLiteral_1503/*"<size="*/;
  }
  else
  {
    v271 = 0LL;
  }
  if ( !v270->max_length )
    goto LABEL_265;
  v270->m_Items[0] = (System_String_o *)v271;
  sub_B0D840((BattleServantConfConponent_o *)v270->m_Items, v271, v264, v265, v266, v267, v268, v269);
  v27 = (MotionInfo_o *)System_Single__ToString(v272, (const MethodInfo *)((char *)&format.klass + 4));
  v279 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v27, v270->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
  }
  if ( v270->max_length <= 1 )
    goto LABEL_265;
  v270->m_Items[1] = (System_String_o *)v279;
  sub_B0D840((BattleServantConfConponent_o *)&v270->m_Items[1], v279, v273, v274, v275, v276, v277, v278);
  v27 = (MotionInfo_o *)StringLiteral_1522/*">"*/;
  if ( StringLiteral_1522/*">"*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_1522/*">"*/, v270->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_266;
    v286 = (System_Int32_array **)StringLiteral_1522/*">"*/;
  }
  else
  {
    v286 = 0LL;
  }
  if ( v270->max_length <= 2 )
    goto LABEL_265;
  v270->m_Items[2] = (System_String_o *)v286;
  sub_B0D840((BattleServantConfConponent_o *)&v270->m_Items[2], v286, v280, v281, v282, v283, v284, v285);
  if ( v256 )
  {
    v27 = (MotionInfo_o *)sub_B0D964(v256, v270->obj.klass->_1.element_class);
    if ( !v27 )
    {
LABEL_266:
      v380 = sub_B0D99C(v27);
      sub_B0D948(v380, 0LL);
    }
  }
  if ( v270->max_length <= 3 )
    goto LABEL_265;
  v270->m_Items[3] = (System_String_o *)v256;
  sub_B0D840((BattleServantConfConponent_o *)&v270->m_Items[3], v256, v287, v288, v289, v290, v291, v292);
  v27 = (MotionInfo_o *)StringLiteral_1319/*"</size>"*/;
  if ( StringLiteral_1319/*"</size>"*/ )
  {
    v27 = (MotionInfo_o *)sub_B0D964(StringLiteral_1319/*"</size>"*/, v270->obj.klass->_1.element_class);
    if ( v27 )
    {
      v299 = (System_Int32_array **)StringLiteral_1319/*"</size>"*/;
      goto LABEL_200;
    }
    goto LABEL_266;
  }
  v299 = 0LL;
LABEL_200:
  if ( v270->max_length <= 4 )
  {
LABEL_265:
    v379 = sub_B0D9A8(v27);
    sub_B0D948(v379, 0LL);
  }
  v270->m_Items[4] = (System_String_o *)v299;
  sub_B0D840((BattleServantConfConponent_o *)&v270->m_Items[4], v299, v293, v294, v295, v296, v297, v298);
  v300 = System_String__Concat_43930028(v270, 0LL);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v389.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v389.fields.m_Width = methoda.invoker_method;
  UnityEngine_GUI__Box(v389, v300, 0LL);
  v301 = *((float *)&format.klass + 1) + 10.0;
  width = UnityEngine_Screen__get_width(0LL);
  v390.fields.m_Height = v257 + v257;
  v390.fields.m_XMin = (float)width - v259;
  v390.fields.m_YMin = (float)(v257 + v257) + 10.0;
  v390.fields.m_Width = v259;
  methoda.parameters = 0LL;
  methoda.rgctx_data = 0LL;
  UnityEngine_Rect___ctor(v390, v303, v304, v305, v306, (const MethodInfo *)&methoda.parameters);
  v391.fields.m_YMin = 0.0;
  static_fields = MotionInfo_TypeInfo->static_fields;
  x = static_fields->scrollPosition.fields.x;
  y = static_fields->scrollPosition.fields.y;
  v391.fields.m_Height = v301 * (float)static_fields->voicePlayLogLineSize;
  v391.fields.m_XMin = 0.0;
  v391.fields.m_Width = 500.0;
  methoda.klass = 0LL;
  methoda.return_type = 0LL;
  UnityEngine_Rect___ctor(v391, v310, v311, v312, v313, (const MethodInfo *)&methoda.klass);
  viewRect.fields.m_Height = *((float *)&methoda.return_type + 1);
  viewRect.fields.m_XMin = *(float *)&methoda.klass;
  v387.fields.x = x;
  v387.fields.y = y;
  *(_QWORD *)&viewRect.fields.m_YMin = *(Il2CppClass **)((char *)&methoda.klass + 4);
  v314 = UnityEngine_GUI__BeginScrollView(*(UnityEngine_Rect_o *)&methoda.parameters, v387, viewRect, 0LL);
  v27 = (MotionInfo_o *)MotionInfo_TypeInfo;
  v383 = 0;
  v315 = 0;
  v316 = 0;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v314;
  while ( 1 )
  {
    if ( (v27[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v27[9].monitor) )
    {
      v317 = v315;
      j_il2cpp_runtime_class_init_0(v27);
      v315 = v317;
      v27 = (MotionInfo_o *)MotionInfo_TypeInfo;
    }
    voicePlaybackLogList = *(struct System_Collections_Generic_List_List_string___o **)(*(_QWORD *)&v27[7].fields + 64LL);
    if ( !voicePlaybackLogList )
      goto LABEL_264;
    if ( v315 >= voicePlaybackLogList->fields._size )
      break;
    if ( (v27[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v27[9].monitor) )
    {
      v319 = v315;
      j_il2cpp_runtime_class_init_0(v27);
      v315 = v319;
      voicePlaybackLogList = MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
      if ( !voicePlaybackLogList )
        goto LABEL_264;
    }
    if ( voicePlaybackLogList->fields._size <= (unsigned int)v315 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v382 = v315;
    v27 = (MotionInfo_o *)voicePlaybackLogList->fields._items->m_Items[v315];
    if ( !v27 )
      goto LABEL_264;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v27,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    name = methoda.name;
    *(_OWORD *)&methoda.token = *(_OWORD *)&methoda.methodPointer;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.token,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v325 = (System_Int32_array **)name;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      v393.fields.m_YMin = v301 * (float)v316;
      v393.fields.m_XMin = 0.0;
      v393.fields.m_Width = 500.0;
      v393.fields.m_Height = v301;
      UnityEngine_Rect___ctor(v393, v321, v322, v323, v324, &methoda);
      v332 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
      if ( !v332 )
        sub_B0D97C(0LL);
      v333 = StringLiteral_1503/*"<size="*/;
      if ( StringLiteral_1503/*"<size="*/ )
      {
        v333 = sub_B0D964(StringLiteral_1503/*"<size="*/, v332->obj.klass->_1.element_class);
        if ( !v333 )
        {
          v377 = sub_B0D99C(0LL);
          sub_B0D948(v377, 0LL);
        }
        v334 = (System_Int32_array **)StringLiteral_1503/*"<size="*/;
      }
      else
      {
        v334 = 0LL;
      }
      if ( !v332->max_length )
      {
        v371 = sub_B0D9A8(v333);
        sub_B0D948(v371, 0LL);
      }
      v332->m_Items[0] = (System_String_o *)v334;
      sub_B0D840((BattleServantConfConponent_o *)v332->m_Items, v334, v326, v327, v328, v329, v330, v331);
      v336 = System_Single__ToString(v335, (const MethodInfo *)((char *)&format.klass + 4));
      v343 = (System_Int32_array **)v336;
      if ( v336 )
      {
        v336 = (System_String_o *)sub_B0D964(v336, v332->obj.klass->_1.element_class);
        if ( !v336 )
        {
          v378 = sub_B0D99C(0LL);
          sub_B0D948(v378, 0LL);
        }
      }
      if ( v332->max_length <= 1 )
      {
        v373 = sub_B0D9A8(v336);
        sub_B0D948(v373, 0LL);
      }
      v332->m_Items[1] = (System_String_o *)v343;
      sub_B0D840((BattleServantConfConponent_o *)&v332->m_Items[1], v343, v337, v338, v339, v340, v341, v342);
      v350 = StringLiteral_1522/*">"*/;
      if ( StringLiteral_1522/*">"*/ )
      {
        v350 = sub_B0D964(StringLiteral_1522/*">"*/, v332->obj.klass->_1.element_class);
        if ( !v350 )
        {
          v374 = sub_B0D99C(0LL);
          sub_B0D948(v374, 0LL);
        }
        v351 = (System_Int32_array **)StringLiteral_1522/*">"*/;
      }
      else
      {
        v351 = 0LL;
      }
      if ( v332->max_length <= 2 )
      {
        v370 = sub_B0D9A8(v350);
        sub_B0D948(v370, 0LL);
      }
      v332->m_Items[2] = (System_String_o *)v351;
      sub_B0D840((BattleServantConfConponent_o *)&v332->m_Items[2], v351, v344, v345, v346, v347, v348, v349);
      if ( v325 )
      {
        v352 = sub_B0D964(v325, v332->obj.klass->_1.element_class);
        if ( !v352 )
        {
          v375 = sub_B0D99C(0LL);
          sub_B0D948(v375, 0LL);
        }
      }
      if ( v332->max_length <= 3 )
      {
        v372 = sub_B0D9A8(v352);
        sub_B0D948(v372, 0LL);
      }
      v332->m_Items[3] = (System_String_o *)v325;
      sub_B0D840((BattleServantConfConponent_o *)&v332->m_Items[3], v325, v353, v354, v355, v356, v357, v358);
      v365 = StringLiteral_1319/*"</size>"*/;
      if ( StringLiteral_1319/*"</size>"*/ )
      {
        v365 = sub_B0D964(StringLiteral_1319/*"</size>"*/, v332->obj.klass->_1.element_class);
        if ( !v365 )
        {
          v376 = sub_B0D99C(0LL);
          sub_B0D948(v376, 0LL);
        }
        v366 = (System_Int32_array **)StringLiteral_1319/*"</size>"*/;
      }
      else
      {
        v366 = 0LL;
      }
      if ( v332->max_length <= 4 )
      {
        v367 = sub_B0D9A8(v365);
        sub_B0D948(v367, 0LL);
      }
      v332->m_Items[4] = (System_String_o *)v366;
      sub_B0D840((BattleServantConfConponent_o *)&v332->m_Items[4], v366, v359, v360, v361, v362, v363, v364);
      v320 = System_String__Concat_43930028(v332, 0LL);
      if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
      }
      *(_QWORD *)&v392.fields.m_XMin = methoda.methodPointer;
      *(_QWORD *)&v392.fields.m_Width = methoda.invoker_method;
      UnityEngine_GUI__Label(v392, v320, 0LL);
      ++v316;
    }
    *((_DWORD *)&methoda.genericMethod + v383) = 835;
    v368 = ++HIDWORD(methoda.genericContainerHandle);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.token,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( v368 )
    {
      v369 = v368 - 1;
      if ( *((_DWORD *)&methoda.genericMethod + v368 - 1) == 835 )
      {
        --v368;
        HIDWORD(methoda.genericContainerHandle) = v369;
      }
    }
    v383 = v368;
    v27 = (MotionInfo_o *)MotionInfo_TypeInfo;
    v315 = v382 + 1;
  }
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  UnityEngine_GUI__EndScrollView(0LL);
}


void __fastcall MotionInfo__ResetVoiceLog(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  System_Int32_array **v9; // x20
  MotionInfo_c *v10; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x20
  MotionInfo_c *v20; // x0
  struct MotionInfo_StaticFields *v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  MotionInfo_c *v29; // x0
  System_Int32_array **v30; // x20
  struct MotionInfo_StaticFields *v31; // x0
  __int64 v32; // x1
  MotionInfo_c *v33; // x0

  if ( (byte_421461B & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_421461B = 1;
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_421464D )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_421464D = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_VoiceServantId_k__BackingField = (struct System_String_o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_VoiceServantId_k__BackingField,
    v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_421464E )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v12);
    byte_421464E = 1;
  }
  v20 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
  }
  v21 = v20->static_fields;
  v21->_VoiceId_k__BackingField = (struct System_String_o *)v19;
  sub_B0D840((BattleServantConfConponent_o *)&v21->_VoiceId_k__BackingField, v19, v13, v14, v15, v16, v17, v18);
  if ( !byte_421464F )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v22);
    byte_421464F = 1;
  }
  v29 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v29 = MotionInfo_TypeInfo;
  }
  v29->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4214650 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v22);
    v29 = MotionInfo_TypeInfo;
    byte_4214650 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = MotionInfo_TypeInfo;
  }
  v29->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v30 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_4214651 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v22);
    v29 = MotionInfo_TypeInfo;
    byte_4214651 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = MotionInfo_TypeInfo;
  }
  v31 = v29->static_fields;
  v31->_VoiceType_k__BackingField = (struct System_String_o *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v31->_VoiceType_k__BackingField, v30, v23, v24, v25, v26, v27, v28);
  if ( !byte_4214652 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v32);
    byte_4214652 = 1;
  }
  v33 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v33 = MotionInfo_TypeInfo;
  }
  v33->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4214653 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v32);
    v33 = MotionInfo_TypeInfo;
    byte_4214653 = 1;
  }
  if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = MotionInfo_TypeInfo;
  }
  v33->static_fields->_IsSe_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4214621 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_4214621 = 1;
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4214654 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_4214654 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  v2->static_fields->_IsRandom_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoicePlaybackLog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  MotionInfo_c *v3; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *voicePlaybackLogList; // x0

  if ( (byte_4214620 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___Clear__, v1);
    sub_B0D8A4(&MotionInfo_TypeInfo, v2);
    byte_4214620 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v3->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    voicePlaybackLogList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_List_string___Clear__);
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = 0;
}


void __fastcall MotionInfo__SetActionData(
        BattleActionData_o *actionData,
        System_String_o *svtName,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MotionInfo_c *v10; // x0
  BattleServantConfConponent_o *static_fields; // x0
  struct MotionInfo_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4214618 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, svtName);
    byte_4214618 = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  static_fields = (BattleServantConfConponent_o *)v10->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)svtName;
  sub_B0D840(static_fields, (System_Int32_array **)svtName, (System_String_array **)method, v3, v4, v5, v6, v7);
  v12 = MotionInfo_TypeInfo->static_fields;
  v12->actionData = actionData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v12->actionData,
    (System_Int32_array **)actionData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall MotionInfo__UpdateVoicePlaybackLogString(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x20
  int32_t size; // w9
  int32_t voicePlayLogLineSize; // w21
  System_Collections_Generic_List_string__o *v11; // x8
  struct MotionInfo_StaticFields *v12; // x8
  int32_t v13; // w21
  struct System_Collections_Generic_List_List_string___o *v14; // x22
  System_Collections_Generic_List_string__o *v15; // x8
  MotionInfo_c *v16; // x9
  __int16 v17; // w8
  int v18; // w9

  if ( (byte_421461F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___RemoveAt__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_string___get_Item__, v4);
    sub_B0D8A4(&MotionInfo_TypeInfo, v5);
    byte_421461F = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  static_fields = v6->static_fields;
  voicePlaybackLogList = static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_35;
  if ( voicePlaybackLogList->fields._size < 1 )
    return;
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    static_fields = MotionInfo_TypeInfo->static_fields;
    voicePlaybackLogList = static_fields->voicePlaybackLogList;
    if ( !voicePlaybackLogList )
      goto LABEL_35;
  }
  size = voicePlaybackLogList->fields._size;
  voicePlayLogLineSize = static_fields->voicePlayLogLineSize;
  if ( !size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v11 = voicePlaybackLogList->fields._items->m_Items[size - 1];
  if ( !v11 )
LABEL_35:
    sub_B0D97C(v6);
  v6 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v11->fields._size + voicePlayLogLineSize;
  while ( 1 )
  {
    v17 = WORD1(v6->vtable._0_Equals.methodPtr);
    if ( (v17 & 0x400) != 0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = MotionInfo_TypeInfo;
        v17 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
      }
      v18 = v17 & 0x400;
    }
    else
    {
      v18 = 0;
    }
    v12 = v6->static_fields;
    v13 = v12->voicePlayLogLineSize;
    if ( v13 < v12->voicePlaybackLogMaxNum )
      break;
    if ( v18 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v12 = MotionInfo_TypeInfo->static_fields;
      v13 = v12->voicePlayLogLineSize;
    }
    v14 = v12->voicePlaybackLogList;
    if ( !v14 )
      goto LABEL_35;
    if ( !v14->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v15 = v14->fields._items->m_Items[0];
    if ( !v15 )
      goto LABEL_35;
    v16 = MotionInfo_TypeInfo;
    MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v13 - v15->fields._size;
    v6 = (MotionInfo_c *)v16->static_fields->voicePlaybackLogList;
    if ( !v6 )
      goto LABEL_35;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      0,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v6 = MotionInfo_TypeInfo;
  }
  if ( v18 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v13 = MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize;
    }
  }
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0LL) * v13);
}


bool __fastcall MotionInfo__get_IsRandom(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4214614 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_4214614 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_IsRandom_k__BackingField;
}


bool __fastcall MotionInfo__get_IsSe(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4214616 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_4214616 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_IsSe_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceId(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_421460E & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_421460E = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceId_k__BackingField;
}


int32_t __fastcall MotionInfo__get_VoiceIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4214612 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_4214612 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceIndex_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceServantId(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4214608 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_4214608 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceServantId_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceTotalWeight(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_421460C & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_421460C = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceTotalWeight_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceType(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4214610 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_4214610 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceType_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceWeight(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_421460A & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v1);
    byte_421460A = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceWeight_k__BackingField;
}


void __fastcall MotionInfo__set_IsRandom(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4214615 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_4214615 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_IsRandom_k__BackingField = value;
}


void __fastcall MotionInfo__set_IsSe(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4214617 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_4214617 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_IsSe_k__BackingField = value;
}


void __fastcall MotionInfo__set_VoiceId(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_421460F & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_421460F = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_VoiceId_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4214613 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_4214613 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceIndex_k__BackingField = value;
}


void __fastcall MotionInfo__set_VoiceServantId(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4214609 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_4214609 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_VoiceServantId_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_421460D & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v2);
    byte_421460D = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_VoiceTotalWeight_k__BackingField = value;
}


void __fastcall MotionInfo__set_VoiceType(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4214611 & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, method);
    byte_4214611 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_VoiceType_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_421460B & 1) == 0 )
  {
    sub_B0D8A4(&MotionInfo_TypeInfo, v2);
    byte_421460B = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_VoiceWeight_k__BackingField = value;
}