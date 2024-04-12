void __fastcall MotionInfo___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  MotionInfo_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct MotionInfo_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  MotionInfo_c *v18; // x8

  if ( (byte_42AE83D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_List_string____ctor__);
    sub_B52984(&System_Collections_Generic_List_List_string___TypeInfo);
    sub_B52984(&MotionInfo_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE83D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MotionInfo_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->_IsRandom_k__BackingField = 0;
  v9->static_fields->_IsSe_k__BackingField = 0;
  MotionInfo_TypeInfo->static_fields->scrollPosition = UnityEngine_Vector2__get_zero(0LL);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v11 = MotionInfo_TypeInfo->static_fields;
  v11->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&v11->voicePlaybackLogList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlaybackLogMaxNum = 500;
  v18->static_fields->voicePlayLogLineSize = 0;
  v18->static_fields->scrollSpeed = 1;
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
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  MotionInfo_c *v17; // x0
  System_Int32_array **v18; // x20
  struct MotionInfo_StaticFields *v19; // x0
  const MethodInfo *v20; // x0

  if ( (byte_42AE837 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    sub_B52984(&StringLiteral_11698/*"SE"*/);
    byte_42AE837 = 1;
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_42AE8E0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8E0 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_42AE8E1 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_42AE8E1 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_42AE8DF )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_42AE8DF = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->_VoiceId_k__BackingField,
    (System_Int32_array **)seId,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_42AE8E3 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8E3 = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_42AE8E4 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
    byte_42AE8E4 = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_42AE8E5 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
    byte_42AE8E5 = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_IsRandom_k__BackingField = 0;
  v18 = (System_Int32_array **)StringLiteral_11698/*"SE"*/;
  if ( !byte_42AE8E2 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
    byte_42AE8E2 = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v19 = v17->static_fields;
  v19->_VoiceType_k__BackingField = (struct System_String_o *)v18;
  sub_B52920((BattleServantConfConponent_o *)&v19->_VoiceType_k__BackingField, v18, v11, v12, v13, v14, v15, v16);
  MotionInfo__AddVoiceLog(v20);
}


void __fastcall MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v1; // x19
  System_String_o *NewLine; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *voicePlaybackLogList; // x0
  __int64 v4; // x1
  MotionInfo_c *v5; // x0
  __int16 v6; // w8
  int v7; // w8
  MotionInfo_c *v8; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v10; // x0
  __int64 *v11; // x8
  MotionInfo_c *v12; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  MotionInfo_c *v16; // x0
  System_String_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array *v24; // x20
  System_String_o *v25; // x0
  System_Int32_array **v26; // x1
  float v27; // s0
  MotionInfo_c *v28; // x0
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
  float v43; // s0
  MotionInfo_c *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x21
  System_String_o *v59; // x0
  MotionInfo_c *v60; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  const MethodInfo *v64; // x0
  __int64 v65; // x0
  __int64 v66; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42AE838 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&MotionInfo_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_288/*" 確率 / 合計 : "*/);
    sub_B52984(&StringLiteral_172/*" VoiceID : "*/);
    sub_B52984(&StringLiteral_973/*"0.00"*/);
    sub_B52984(&StringLiteral_128/*" / "*/);
    sub_B52984(&StringLiteral_773/*"--- Voice・SE Log ---"*/);
    sub_B52984(&StringLiteral_164/*" SEID : "*/);
    sub_B52984(&StringLiteral_286/*" 分類 : "*/);
    sub_B52984(&StringLiteral_12809/*"ServantID : "*/);
    byte_42AE838 = 1;
  }
  LODWORD(format.klass) = 0;
  v1 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v1,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_44568316(
                                                                                  (System_String_o *)StringLiteral_773/*"--- Voice・SE Log ---"*/,
                                                                                  NewLine,
                                                                                  0LL);
  if ( !v1 )
    goto LABEL_80;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v1,
    voicePlaybackLogList,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_42AE8D8 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8D8 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  v6 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v6 & 0x400) != 0 )
  {
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v5 = MotionInfo_TypeInfo;
      v6 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v7 = v6 & 0x400;
  }
  else
  {
    v7 = 0;
  }
  if ( v5->static_fields->_IsSe_k__BackingField )
  {
    if ( v7 && !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_42AE8DA )
    {
      sub_B52984(&MotionInfo_TypeInfo);
      byte_42AE8DA = 1;
    }
    v8 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v8 = MotionInfo_TypeInfo;
    }
    VoiceId_k__BackingField = v8->static_fields->_VoiceId_k__BackingField;
    v10 = System_Environment__get_NewLine(0LL);
    v11 = &StringLiteral_164/*" SEID : "*/;
  }
  else
  {
    if ( v7 && !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_42AE8D9 )
    {
      sub_B52984(&MotionInfo_TypeInfo);
      byte_42AE8D9 = 1;
    }
    v12 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v12 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v12->static_fields->_VoiceServantId_k__BackingField;
    v14 = System_Environment__get_NewLine(0LL);
    v15 = System_String__Concat_44570600(
            (System_String_o *)StringLiteral_12809/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            v14,
            0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v1,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    if ( !byte_42AE8DA )
    {
      sub_B52984(&MotionInfo_TypeInfo);
      byte_42AE8DA = 1;
    }
    v16 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v16 = MotionInfo_TypeInfo;
    }
    VoiceId_k__BackingField = v16->static_fields->_VoiceId_k__BackingField;
    v10 = System_Environment__get_NewLine(0LL);
    v11 = &StringLiteral_172/*" VoiceID : "*/;
  }
  v17 = System_String__Concat_44570600((System_String_o *)*v11, VoiceId_k__BackingField, v10, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v1,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  voicePlaybackLogList = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5299C(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
LABEL_80:
    sub_B52A5C(voicePlaybackLogList, v4);
  v24 = (System_String_array *)voicePlaybackLogList;
  v25 = (System_String_o *)StringLiteral_288/*" 確率 / 合計 : "*/;
  if ( StringLiteral_288/*" 確率 / 合計 : "*/ )
  {
    v25 = (System_String_o *)sub_B52A44(StringLiteral_288/*" 確率 / 合計 : "*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_79;
    v26 = (System_Int32_array **)StringLiteral_288/*" 確率 / 合計 : "*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v24->max_length )
    goto LABEL_78;
  v24->m_Items[0] = (System_String_o *)v26;
  sub_B52920((BattleServantConfConponent_o *)v24->m_Items, v26, v18, v19, v20, v21, v22, v23);
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    LODWORD(v27) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
  if ( !byte_42AE8DB )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8DB = 1;
  }
  v28 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v27) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v28 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v28->static_fields->_VoiceWeight_k__BackingField;
  v25 = System_Single__ToString_44554988(v27, &format, (const MethodInfo *)StringLiteral_973/*"0.00"*/);
  v35 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = (System_String_o *)sub_B52A44(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_79;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_78;
  v24->m_Items[1] = (System_String_o *)v35;
  sub_B52920((BattleServantConfConponent_o *)&v24->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
  v25 = (System_String_o *)StringLiteral_128/*" / "*/;
  if ( StringLiteral_128/*" / "*/ )
  {
    v25 = (System_String_o *)sub_B52A44(StringLiteral_128/*" / "*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_79;
    v42 = (System_Int32_array **)StringLiteral_128/*" / "*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_78;
  v24->m_Items[2] = (System_String_o *)v42;
  sub_B52920((BattleServantConfConponent_o *)&v24->m_Items[2], v42, v36, v37, v38, v39, v40, v41);
  if ( !byte_42AE8DC )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8DC = 1;
  }
  v44 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v43) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v44 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v44->static_fields->_VoiceTotalWeight_k__BackingField;
  v25 = System_Single__ToString_44554988(v43, &format, (const MethodInfo *)StringLiteral_973/*"0.00"*/);
  v51 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = (System_String_o *)sub_B52A44(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_79;
  }
  if ( v24->max_length <= 3 )
    goto LABEL_78;
  v24->m_Items[3] = (System_String_o *)v51;
  sub_B52920((BattleServantConfConponent_o *)&v24->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
  v25 = System_Environment__get_NewLine(0LL);
  v58 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = (System_String_o *)sub_B52A44(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
    {
LABEL_79:
      v66 = sub_B52A7C();
      sub_B52A28(v66, 0LL);
    }
  }
  if ( v24->max_length <= 4 )
  {
LABEL_78:
    v65 = sub_B52A88(v25);
    sub_B52A28(v65, 0LL);
  }
  v24->m_Items[4] = (System_String_o *)v58;
  sub_B52920((BattleServantConfConponent_o *)&v24->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
  v59 = System_String__Concat_44648440(v24, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v1,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  if ( !byte_42AE8DD )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8DD = 1;
  }
  v60 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v60 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v60->static_fields->_VoiceType_k__BackingField;
  v62 = System_Environment__get_NewLine(0LL);
  v63 = System_String__Concat_44570600((System_String_o *)StringLiteral_286/*" 分類 : "*/, VoiceType_k__BackingField, v62, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v1,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  voicePlaybackLogList = (EventMissionProgressRequest_Argument_ProgressData_o *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_80;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voicePlaybackLogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v1,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_string___Add__);
  MotionInfo__UpdateVoicePlaybackLogString(v64);
}


void __fastcall MotionInfo__AddVoiceLog_22428728(System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *voicePlaybackLogList; // x0
  __int64 v5; // x1
  MotionInfo_c *v6; // x0
  const MethodInfo *v7; // x0

  if ( (byte_42AE839 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE839 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)str,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  v6 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
LABEL_9:
    sub_B52A5C(voicePlaybackLogList, v5);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    voicePlaybackLogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v3,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_string___Add__);
  MotionInfo__UpdateVoicePlaybackLogString(v7);
}


System_String_o *__fastcall MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 *v4; // x8
  System_String_o *result; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = type;
  if ( (byte_42AE835 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_24032/*"バスター"*/);
    sub_B52984(&StringLiteral_24014/*"クイック"*/);
    sub_B52984(&StringLiteral_24004/*"アーツ"*/);
    sub_B52984(&StringLiteral_24008/*"エクストラ"*/);
    byte_42AE835 = 1;
  }
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v4 = &StringLiteral_24004/*"アーツ"*/;
      goto LABEL_9;
    case 2:
      v4 = &StringLiteral_24032/*"バスター"*/;
      goto LABEL_9;
    case 3:
      v4 = &StringLiteral_24014/*"クイック"*/;
      goto LABEL_9;
    case 4:
      v4 = &StringLiteral_24008/*"エクストラ"*/;
LABEL_9:
      result = (System_String_o *)*v4;
      break;
    default:
      result = System_Int32__ToString((int32_t)&v6, 0LL);
      break;
  }
  return result;
}


void __fastcall MotionInfo__OnGUI(MotionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MotionInfo_o *v4; // x0
  System_Int32_array **TypeName; // x19
  struct BattleActionData_o *actionData; // x8
  __int64 v7; // x1
  int32_t *p_type; // x8
  MotionInfo_c *v9; // x8
  System_String_o *v10; // x20
  MotionInfo_c *v11; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *NewLine; // x0
  MotionInfo_c *v14; // x0
  __int16 v15; // w8
  int v16; // w8
  System_String_o **v17; // x9
  System_String_o *v18; // x21
  MotionInfo_c *v19; // x0
  System_String_o *VoiceId_k__BackingField; // x22
  System_String_o *v21; // x0
  System_Int32_array **v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  float v37; // s0
  MotionInfo_c *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  float v53; // s0
  MotionInfo_c *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x21
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
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x21
  System_Int32_array **v83; // x21
  System_String_array *v84; // x20
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x22
  il2cpp_array_size_t *p_max_length; // x23
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x22
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **svtName; // x22
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x22
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x22
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x1
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x22
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x22
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x22
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  System_Int32_array **v162; // x22
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Int32_array **v169; // x1
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array **v176; // x22
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Int32_array **v189; // x19
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  System_Int32_array **v196; // x19
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x1
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  System_Int32_array **v210; // x19
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  System_Int32_array **v223; // x19
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  System_Int32_array **v230; // x19
  System_Int32_array **v231; // x19
  float v232; // s10
  float v233; // s11
  float v234; // s8
  float v235; // s4
  float v236; // s5
  float v237; // s6
  float v238; // s7
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  System_String_array *v245; // x20
  System_Int32_array **v246; // x1
  float v247; // s0
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  System_Int32_array **v254; // x21
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  System_Int32_array **v261; // x1
  System_String_array **v262; // x2
  System_String_array **v263; // x3
  System_Boolean_array **v264; // x4
  System_Int32_array **v265; // x5
  System_Int32_array *v266; // x6
  System_Int32_array *v267; // x7
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  System_Int32_array **v274; // x1
  System_String_o *v275; // x19
  float v276; // s12
  float v277; // s10
  float v278; // s4
  float v279; // s5
  float v280; // s6
  float v281; // s7
  float v282; // s0
  System_String_o *v283; // x0
  System_String_o *v284; // x0
  MotionInfo_c *v285; // x0
  float v286; // s4
  float v287; // s5
  float v288; // s6
  float v289; // s7
  float v290; // s0
  System_String_o *v291; // x0
  System_String_o *v292; // x19
  MotionInfo_c *v293; // x0
  float v294; // s4
  float v295; // s5
  float v296; // s6
  float v297; // s7
  float v298; // s0
  System_String_o *v299; // x0
  System_String_o *v300; // x19
  MotionInfo_c *v301; // x0
  int32_t v302; // w19
  float v303; // s4
  float v304; // s5
  float v305; // s6
  float v306; // s7
  System_String_array **v307; // x2
  System_String_array **v308; // x3
  System_Boolean_array **v309; // x4
  System_Int32_array **v310; // x5
  System_Int32_array *v311; // x6
  System_Int32_array *v312; // x7
  System_String_array *v313; // x19
  System_Int32_array **v314; // x1
  System_String_array **v315; // x2
  System_String_array **v316; // x3
  System_Boolean_array **v317; // x4
  System_Int32_array **v318; // x5
  System_Int32_array *v319; // x6
  System_Int32_array *v320; // x7
  System_Int32_array **v321; // x20
  System_String_array **v322; // x2
  System_String_array **v323; // x3
  System_Boolean_array **v324; // x4
  System_Int32_array **v325; // x5
  System_Int32_array *v326; // x6
  System_Int32_array *v327; // x7
  System_Int32_array **v328; // x1
  MotionInfo_c *v329; // x0
  System_String_array **v330; // x2
  System_String_array **v331; // x3
  System_Boolean_array **v332; // x4
  System_Int32_array **v333; // x5
  System_Int32_array *v334; // x6
  System_Int32_array *v335; // x7
  System_Int32_array **v336; // x20
  System_String_array **v337; // x2
  System_String_array **v338; // x3
  System_Boolean_array **v339; // x4
  System_Int32_array **v340; // x5
  System_Int32_array *v341; // x6
  System_Int32_array *v342; // x7
  System_Int32_array **v343; // x1
  System_String_array **v344; // x2
  System_String_array **v345; // x3
  System_Boolean_array **v346; // x4
  System_Int32_array **v347; // x5
  System_Int32_array *v348; // x6
  System_Int32_array *v349; // x7
  System_Int32_array **v350; // x20
  System_String_array **v351; // x2
  System_String_array **v352; // x3
  System_Boolean_array **v353; // x4
  System_Int32_array **v354; // x5
  System_Int32_array *v355; // x6
  System_Int32_array *v356; // x7
  System_Int32_array **v357; // x1
  System_String_o *v358; // x19
  float v359; // s4
  float v360; // s5
  float v361; // s6
  float v362; // s7
  float v363; // s0
  System_String_o *v364; // x0
  System_String_o *v365; // x0
  MotionInfo_c *v366; // x0
  int32_t v367; // w19
  float v368; // s9
  float v369; // s4
  float v370; // s5
  float v371; // s6
  float v372; // s7
  float v373; // s4
  float v374; // s5
  float v375; // s6
  float v376; // s7
  MotionInfo_c *v377; // x0
  float *static_fields; // x8
  float v379; // s10
  float v380; // s11
  struct UnityEngine_Vector2_o v381; // kr00_8
  int v382; // w28
  int32_t v383; // w9
  int v384; // w23
  int32_t v385; // w19
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x19
  int32_t v387; // w19
  System_String_o *v388; // x19
  float v389; // s4
  float v390; // s5
  float v391; // s6
  float v392; // s7
  System_Int32_array **v393; // x20
  __int64 v394; // x1
  System_String_array **v395; // x2
  System_String_array **v396; // x3
  System_Boolean_array **v397; // x4
  System_Int32_array **v398; // x5
  System_Int32_array *v399; // x6
  System_Int32_array *v400; // x7
  System_String_array *v401; // x19
  __int64 v402; // x0
  System_Int32_array **v403; // x1
  float v404; // s0
  System_String_o *v405; // x0
  System_String_array **v406; // x2
  System_String_array **v407; // x3
  System_Boolean_array **v408; // x4
  System_Int32_array **v409; // x5
  System_Int32_array *v410; // x6
  System_Int32_array *v411; // x7
  System_Int32_array **v412; // x21
  System_String_array **v413; // x2
  System_String_array **v414; // x3
  System_Boolean_array **v415; // x4
  System_Int32_array **v416; // x5
  System_Int32_array *v417; // x6
  System_Int32_array *v418; // x7
  __int64 v419; // x0
  System_Int32_array **v420; // x1
  __int64 v421; // x0
  System_String_array **v422; // x2
  System_String_array **v423; // x3
  System_Boolean_array **v424; // x4
  System_Int32_array **v425; // x5
  System_Int32_array *v426; // x6
  System_Int32_array *v427; // x7
  System_String_array **v428; // x2
  System_String_array **v429; // x3
  System_Boolean_array **v430; // x4
  System_Int32_array **v431; // x5
  System_Int32_array *v432; // x6
  System_Int32_array *v433; // x7
  __int64 v434; // x0
  System_Int32_array **v435; // x1
  __int64 v436; // x0
  int v437; // w8
  __int64 v438; // x0
  __int64 v439; // x0
  __int64 v440; // x0
  __int64 v441; // x0
  __int64 v442; // x0
  __int64 v443; // x0
  __int64 v444; // x0
  __int64 v445; // x0
  __int64 v446; // x0
  __int64 v447; // x0
  __int64 v448; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-110h]
  int32_t v450; // [xsp+1Ch] [xbp-F4h]
  MethodInfo methoda; // [xsp+20h] [xbp-F0h] BYREF
  System_String_o format; // [xsp+70h] [xbp-A0h] BYREF
  MethodInfo v453; // [xsp+88h] [xbp-88h] BYREF
  UnityEngine_Vector2_o v454; // 0:s4.4,4:s5.4
  UnityEngine_Rect_o v455; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v456; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v457; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v458; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v459; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v460; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v461; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v462; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v463; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v464; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v465; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v466; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v467; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v468; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v469; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AE834 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B52984(&UnityEngine_GUI_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&MotionInfo_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1533/*">+</size>"*/);
    sub_B52984(&StringLiteral_1541/*">▼</size>"*/);
    sub_B52984(&StringLiteral_23992/*"【モーションID】"*/);
    sub_B52984(&StringLiteral_23991/*"【ボイス・SE】"*/);
    sub_B52984(&StringLiteral_15320/*"VoiceID : "*/);
    sub_B52984(&StringLiteral_23993/*"【名前】"*/);
    sub_B52984(&StringLiteral_288/*" 確率 / 合計 : "*/);
    sub_B52984(&StringLiteral_1540/*">▲</size>"*/);
    sub_B52984(&StringLiteral_1511/*"<size="*/);
    sub_B52984(&StringLiteral_23990/*"【カード属性】"*/);
    sub_B52984(&StringLiteral_1534/*">-</size>"*/);
    sub_B52984(&StringLiteral_973/*"0.00"*/);
    sub_B52984(&StringLiteral_886/*"/"*/);
    sub_B52984(&StringLiteral_128/*" / "*/);
    sub_B52984(&StringLiteral_164/*" SEID : "*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_286/*" 分類 : "*/);
    sub_B52984(&StringLiteral_1327/*"</size>"*/);
    sub_B52984(&StringLiteral_1530/*">"*/);
    sub_B52984(&StringLiteral_12809/*"ServantID : "*/);
    byte_42AE834 = 1;
  }
  v453.methodPointer = 0LL;
  format.klass = 0LL;
  memset((char *)&methoda.parameters + 4, 0, 28);
  if ( !LOBYTE(this[1].klass) )
    return;
  HIDWORD(v453.methodPointer) = 0;
  v4 = (MotionInfo_o *)MotionInfo_TypeInfo;
  TypeName = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = (MotionInfo_o *)MotionInfo_TypeInfo;
  }
  actionData = *(struct BattleActionData_o **)(*(_QWORD *)&v4[7].fields + 8LL);
  if ( actionData )
  {
    if ( (v4[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v4[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = (MotionInfo_o *)MotionInfo_TypeInfo;
      actionData = MotionInfo_TypeInfo->static_fields->actionData;
      if ( !actionData )
        goto LABEL_338;
    }
    HIDWORD(v453.methodPointer) = actionData->fields.motionId;
    if ( actionData->fields.commandType == -1 )
    {
      if ( (v4[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v4[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(v4);
        actionData = MotionInfo_TypeInfo->static_fields->actionData;
        if ( !actionData )
          goto LABEL_338;
      }
      p_type = &actionData->fields.type;
    }
    else
    {
      if ( (v4[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v4[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(v4);
        actionData = MotionInfo_TypeInfo->static_fields->actionData;
        if ( !actionData )
          goto LABEL_338;
      }
      p_type = &actionData->fields.commandType;
    }
    TypeName = (System_Int32_array **)MotionInfo__GetTypeName(v4, *p_type, v2);
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_42AE8D8 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8D8 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  if ( v9->static_fields->_IsSe_k__BackingField )
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_42AE8D9 )
    {
      sub_B52984(&MotionInfo_TypeInfo);
      byte_42AE8D9 = 1;
    }
    v11 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v11 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v11->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v10 = System_String__Concat_44570600(
            (System_String_o *)StringLiteral_12809/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v9 = MotionInfo_TypeInfo;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9);
  if ( !byte_42AE8D8 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8D8 = 1;
  }
  v14 = MotionInfo_TypeInfo;
  v15 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v15 & 0x400) != 0 )
  {
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v14 = MotionInfo_TypeInfo;
      v15 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v16 = v15 & 0x400;
  }
  else
  {
    v16 = 0;
  }
  if ( v14->static_fields->_IsSe_k__BackingField )
    v17 = (System_String_o **)&StringLiteral_164/*" SEID : "*/;
  else
    v17 = (System_String_o **)&StringLiteral_15320/*"VoiceID : "*/;
  v18 = *v17;
  if ( v16 && !v14->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v14);
  if ( !byte_42AE8DA )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8DA = 1;
  }
  v19 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v19 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v19->static_fields->_VoiceId_k__BackingField;
  v21 = System_Environment__get_NewLine(0LL);
  v22 = (System_Int32_array **)System_String__Concat_44571728(v10, v18, VoiceId_k__BackingField, v21, 0LL);
  v4 = (MotionInfo_o *)sub_B5299C(string___TypeInfo, 8LL);
  if ( !v4 )
    goto LABEL_338;
  v29 = (System_String_array *)v4;
  if ( v22 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v22, v4->klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( !v29->max_length )
    goto LABEL_339;
  v29->m_Items[0] = (System_String_o *)v22;
  sub_B52920((BattleServantConfConponent_o *)v29->m_Items, v22, v23, v24, v25, v26, v27, v28);
  v4 = (MotionInfo_o *)StringLiteral_288/*" 確率 / 合計 : "*/;
  if ( StringLiteral_288/*" 確率 / 合計 : "*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_288/*" 確率 / 合計 : "*/, v29->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v36 = (System_Int32_array **)StringLiteral_288/*" 確率 / 合計 : "*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_339;
  v29->m_Items[1] = (System_String_o *)v36;
  sub_B52920((BattleServantConfConponent_o *)&v29->m_Items[1], v36, v30, v31, v32, v33, v34, v35);
  if ( !byte_42AE8DB )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8DB = 1;
  }
  v38 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v37) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v38 = MotionInfo_TypeInfo;
  }
  HIDWORD(format.klass) = LODWORD(v38->static_fields->_VoiceWeight_k__BackingField);
  v4 = (MotionInfo_o *)System_Single__ToString_44554988(
                         v37,
                         (System_String_o *)((char *)&format.klass + 4),
                         (const MethodInfo *)StringLiteral_973/*"0.00"*/);
  v45 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v29->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_339;
  v29->m_Items[2] = (System_String_o *)v45;
  sub_B52920((BattleServantConfConponent_o *)&v29->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
  v4 = (MotionInfo_o *)StringLiteral_128/*" / "*/;
  if ( StringLiteral_128/*" / "*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_128/*" / "*/, v29->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v52 = (System_Int32_array **)StringLiteral_128/*" / "*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v29->max_length <= 3 )
    goto LABEL_339;
  v29->m_Items[3] = (System_String_o *)v52;
  sub_B52920((BattleServantConfConponent_o *)&v29->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
  if ( !byte_42AE8DC )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8DC = 1;
  }
  v54 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v53) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v54 = MotionInfo_TypeInfo;
  }
  HIDWORD(format.klass) = LODWORD(v54->static_fields->_VoiceTotalWeight_k__BackingField);
  v4 = (MotionInfo_o *)System_Single__ToString_44554988(
                         v53,
                         (System_String_o *)((char *)&format.klass + 4),
                         (const MethodInfo *)StringLiteral_973/*"0.00"*/);
  v61 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v29->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( v29->max_length <= 4 )
    goto LABEL_339;
  v29->m_Items[4] = (System_String_o *)v61;
  sub_B52920((BattleServantConfConponent_o *)&v29->m_Items[4], v61, v55, v56, v57, v58, v59, v60);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v68 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v29->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( v29->max_length <= 5 )
    goto LABEL_339;
  v29->m_Items[5] = (System_String_o *)v68;
  sub_B52920((BattleServantConfConponent_o *)&v29->m_Items[5], v68, v62, v63, v64, v65, v66, v67);
  v4 = (MotionInfo_o *)StringLiteral_286/*" 分類 : "*/;
  if ( StringLiteral_286/*" 分類 : "*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_286/*" 分類 : "*/, v29->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v75 = (System_Int32_array **)StringLiteral_286/*" 分類 : "*/;
  }
  else
  {
    v75 = 0LL;
  }
  if ( v29->max_length <= 6 )
    goto LABEL_339;
  v29->m_Items[6] = (System_String_o *)v75;
  sub_B52920((BattleServantConfConponent_o *)&v29->m_Items[6], v75, v69, v70, v71, v72, v73, v74);
  if ( !byte_42AE8DD )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8DD = 1;
  }
  v4 = (MotionInfo_o *)MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = (MotionInfo_o *)MotionInfo_TypeInfo;
  }
  v82 = *(System_Int32_array ***)(*(_QWORD *)&v4[7].fields + 40LL);
  if ( v82 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v82, v29->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( v29->max_length <= 7 )
    goto LABEL_339;
  v29->m_Items[7] = (System_String_o *)v82;
  sub_B52920((BattleServantConfConponent_o *)&v29->m_Items[7], v82, v76, v77, v78, v79, v80, v81);
  v83 = (System_Int32_array **)System_String__Concat_44648440(v29, 0LL);
  v84 = (System_String_array *)sub_B5299C(string___TypeInfo, 21LL);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  if ( !v84 )
    goto LABEL_338;
  v91 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  p_max_length = &v84->max_length;
  if ( !v84->max_length )
    goto LABEL_339;
  v84->m_Items[0] = (System_String_o *)v91;
  sub_B52920((BattleServantConfConponent_o *)v84->m_Items, v91, v85, v86, v87, v88, v89, v90);
  v4 = (MotionInfo_o *)StringLiteral_23993/*"【名前】"*/;
  if ( StringLiteral_23993/*"【名前】"*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_23993/*"【名前】"*/, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v99 = (System_Int32_array **)StringLiteral_23993/*"【名前】"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_339;
  v84->m_Items[1] = (System_String_o *)v99;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[1], v99, v93, v94, v95, v96, v97, v98);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v106 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_339;
  v84->m_Items[2] = (System_String_o *)v106;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[2], v106, v100, v101, v102, v103, v104, v105);
  svtName = (System_Int32_array **)MotionInfo_TypeInfo->static_fields->svtName;
  if ( svtName )
  {
    v4 = (MotionInfo_o *)sub_B52A44(svtName, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_339;
  v84->m_Items[3] = (System_String_o *)svtName;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[3], svtName, v107, v108, v109, v110, v111, v112);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v120 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_339;
  v84->m_Items[4] = (System_String_o *)v120;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[4], v120, v114, v115, v116, v117, v118, v119);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v127 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_339;
  v84->m_Items[5] = (System_String_o *)v127;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[5], v127, v121, v122, v123, v124, v125, v126);
  v4 = (MotionInfo_o *)StringLiteral_23992/*"【モーションID】"*/;
  if ( StringLiteral_23992/*"【モーションID】"*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_23992/*"【モーションID】"*/, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v134 = (System_Int32_array **)StringLiteral_23992/*"【モーションID】"*/;
  }
  else
  {
    v134 = 0LL;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_339;
  v84->m_Items[6] = (System_String_o *)v134;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[6], v134, v128, v129, v130, v131, v132, v133);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v141 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_339;
  v84->m_Items[7] = (System_String_o *)v141;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[7], v141, v135, v136, v137, v138, v139, v140);
  v4 = (MotionInfo_o *)System_Int32__ToString((int32_t)&v453.methodPointer + 4, 0LL);
  v148 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_339;
  v84->m_Items[8] = (System_String_o *)v148;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[8], v148, v142, v143, v144, v145, v146, v147);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v155 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_339;
  v84->m_Items[9] = (System_String_o *)v155;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[9], v155, v149, v150, v151, v152, v153, v154);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v162 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_339;
  v84->m_Items[10] = (System_String_o *)v162;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[10], v162, v156, v157, v158, v159, v160, v161);
  v4 = (MotionInfo_o *)StringLiteral_23990/*"【カード属性】"*/;
  if ( StringLiteral_23990/*"【カード属性】"*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_23990/*"【カード属性】"*/, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v169 = (System_Int32_array **)StringLiteral_23990/*"【カード属性】"*/;
  }
  else
  {
    v169 = 0LL;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_339;
  v84->m_Items[11] = (System_String_o *)v169;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[11], v169, v163, v164, v165, v166, v167, v168);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v176 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_339;
  v84->m_Items[12] = (System_String_o *)v176;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[12], v176, v170, v171, v172, v173, v174, v175);
  if ( TypeName )
  {
    v4 = (MotionInfo_o *)sub_B52A44(TypeName, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_339;
  v84->m_Items[13] = (System_String_o *)TypeName;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[13], TypeName, v177, v178, v179, v180, v181, v182);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v189 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_339;
  v84->m_Items[14] = (System_String_o *)v189;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[14], v189, v183, v184, v185, v186, v187, v188);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v196 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_339;
  v84->m_Items[15] = (System_String_o *)v196;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[15], v196, v190, v191, v192, v193, v194, v195);
  v4 = (MotionInfo_o *)StringLiteral_23991/*"【ボイス・SE】"*/;
  if ( StringLiteral_23991/*"【ボイス・SE】"*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_23991/*"【ボイス・SE】"*/, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v203 = (System_Int32_array **)StringLiteral_23991/*"【ボイス・SE】"*/;
  }
  else
  {
    v203 = 0LL;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_339;
  v84->m_Items[16] = (System_String_o *)v203;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[16], v203, v197, v198, v199, v200, v201, v202);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v210 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_339;
  v84->m_Items[17] = (System_String_o *)v210;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[17], v210, v204, v205, v206, v207, v208, v209);
  if ( v83 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v83, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_339;
  v84->m_Items[18] = (System_String_o *)v83;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[18], v83, v211, v212, v213, v214, v215, v216);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v223 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_339;
  v84->m_Items[19] = (System_String_o *)v223;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[19], v223, v217, v218, v219, v220, v221, v222);
  v4 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v230 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v84->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_339;
  v84->m_Items[20] = (System_String_o *)v230;
  sub_B52920((BattleServantConfConponent_o *)&v84->m_Items[20], v230, v224, v225, v226, v227, v228, v229);
  v231 = (System_Int32_array **)System_String__Concat_44648440(v84, 0LL);
  v232 = (float)UnityEngine_Screen__get_height(0LL) * 0.25;
  v233 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *(float *)&v453.methodPointer = v233 * 17.5;
  v234 = v233 * 250.0;
  v455.fields.m_XMin = (float)UnityEngine_Screen__get_width(0LL) - (float)(v233 * 250.0);
  v455.fields.m_Height = v232 * 4.0;
  v455.fields.m_YMin = 10.0;
  v455.fields.m_Width = v233 * 250.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v455, v235, v236, v237, v238, &methoda);
  v4 = (MotionInfo_o *)sub_B5299C(string___TypeInfo, 5LL);
  if ( !v4 )
    goto LABEL_338;
  v245 = (System_String_array *)v4;
  v4 = (MotionInfo_o *)StringLiteral_1511/*"<size="*/;
  if ( StringLiteral_1511/*"<size="*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_1511/*"<size="*/, v245->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v246 = (System_Int32_array **)StringLiteral_1511/*"<size="*/;
  }
  else
  {
    v246 = 0LL;
  }
  if ( !v245->max_length )
    goto LABEL_339;
  v245->m_Items[0] = (System_String_o *)v246;
  sub_B52920((BattleServantConfConponent_o *)v245->m_Items, v246, v239, v240, v241, v242, v243, v244);
  v4 = (MotionInfo_o *)System_Single__ToString(v247, &v453);
  v254 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v245->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( v245->max_length <= 1 )
    goto LABEL_339;
  v245->m_Items[1] = (System_String_o *)v254;
  sub_B52920((BattleServantConfConponent_o *)&v245->m_Items[1], v254, v248, v249, v250, v251, v252, v253);
  v4 = (MotionInfo_o *)StringLiteral_1530/*">"*/;
  if ( StringLiteral_1530/*">"*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_1530/*">"*/, v245->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v261 = (System_Int32_array **)StringLiteral_1530/*">"*/;
  }
  else
  {
    v261 = 0LL;
  }
  if ( v245->max_length <= 2 )
    goto LABEL_339;
  v245->m_Items[2] = (System_String_o *)v261;
  sub_B52920((BattleServantConfConponent_o *)&v245->m_Items[2], v261, v255, v256, v257, v258, v259, v260);
  if ( v231 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v231, v245->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( v245->max_length <= 3 )
    goto LABEL_339;
  v245->m_Items[3] = (System_String_o *)v231;
  sub_B52920((BattleServantConfConponent_o *)&v245->m_Items[3], v231, v262, v263, v264, v265, v266, v267);
  v4 = (MotionInfo_o *)StringLiteral_1327/*"</size>"*/;
  if ( StringLiteral_1327/*"</size>"*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_1327/*"</size>"*/, v245->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v274 = (System_Int32_array **)StringLiteral_1327/*"</size>"*/;
  }
  else
  {
    v274 = 0LL;
  }
  if ( v245->max_length <= 4 )
    goto LABEL_339;
  v245->m_Items[4] = (System_String_o *)v274;
  sub_B52920((BattleServantConfConponent_o *)&v245->m_Items[4], v274, v268, v269, v270, v271, v272, v273);
  v275 = System_String__Concat_44648440(v245, 0LL);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v456.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v456.fields.m_Width = methoda.invoker_method;
  UnityEngine_GUI__Box(v456, v275, 0LL);
  v276 = v233 * 40.0;
  v277 = v232 + v232;
  v457.fields.m_XMin = (float)UnityEngine_Screen__get_width(0LL) - v234;
  v457.fields.m_YMin = (float)(v277 + 10.0) - (float)(v233 * 40.0);
  v457.fields.m_Width = v233 * 40.0;
  v457.fields.m_Height = v233 * 40.0;
  methoda.klass = 0LL;
  methoda.return_type = 0LL;
  UnityEngine_Rect___ctor(v457, v278, v279, v280, v281, (const MethodInfo *)&methoda.klass);
  v283 = System_Single__ToString(v282, &v453);
  v284 = System_String__Concat_44570600(
           (System_String_o *)StringLiteral_1511/*"<size="*/,
           v283,
           (System_String_o *)StringLiteral_1540/*">▲</size>"*/,
           0LL);
  if ( UnityEngine_GUI__RepeatButton(*(UnityEngine_Rect_o *)&methoda.klass, v284, 0LL) )
  {
    v285 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v285 = MotionInfo_TypeInfo;
    }
    v285->static_fields->scrollPosition.fields.y = v285->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v285->static_fields->scrollSpeed * -10.0);
  }
  v458.fields.m_XMin = v276 + (float)((float)UnityEngine_Screen__get_width(0LL) - v234);
  v458.fields.m_YMin = (float)(v277 + 10.0) - v276;
  v458.fields.m_Width = v233 * 40.0;
  v458.fields.m_Height = v233 * 40.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v458, v286, v287, v288, v289, &methoda);
  v291 = System_Single__ToString(v290, &v453);
  v292 = System_String__Concat_44570600(
           (System_String_o *)StringLiteral_1511/*"<size="*/,
           v291,
           (System_String_o *)StringLiteral_1541/*">▼</size>"*/,
           0LL);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v459.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v459.fields.m_Width = methoda.invoker_method;
  if ( UnityEngine_GUI__RepeatButton(v459, v292, 0LL) )
  {
    v293 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v293 = MotionInfo_TypeInfo;
    }
    v293->static_fields->scrollPosition.fields.y = v293->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v293->static_fields->scrollSpeed * 10.0);
  }
  v460.fields.m_XMin = (float)(v276 + v276) + (float)((float)UnityEngine_Screen__get_width(0LL) - v234);
  v460.fields.m_YMin = (float)(v277 + 10.0) - v276;
  v460.fields.m_Width = v233 * 40.0;
  v460.fields.m_Height = v233 * 40.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v460, v294, v295, v296, v297, &methoda);
  v299 = System_Single__ToString(v298, &v453);
  v300 = System_String__Concat_44570600(
           (System_String_o *)StringLiteral_1511/*"<size="*/,
           v299,
           (System_String_o *)StringLiteral_1534/*">-</size>"*/,
           0LL);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v461.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v461.fields.m_Width = methoda.invoker_method;
  if ( UnityEngine_GUI__Button(v461, v300, 0LL) )
  {
    v301 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v301 = MotionInfo_TypeInfo;
    }
    v302 = --v301->static_fields->scrollSpeed;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Max_45036604(v302, 1, 0LL);
  }
  v462.fields.m_XMin = (float)(v276 * 3.0) + (float)((float)UnityEngine_Screen__get_width(0LL) - v234);
  v462.fields.m_YMin = (float)(v277 + 10.0) + (float)(v276 * -0.75);
  v462.fields.m_Width = v233 * 40.0;
  v462.fields.m_Height = v233 * 40.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v462, v303, v304, v305, v306, &methoda);
  v4 = (MotionInfo_o *)sub_B5299C(string___TypeInfo, 7LL);
  if ( !v4 )
LABEL_338:
    sub_B52A5C(v4, v7);
  v313 = (System_String_array *)v4;
  v4 = (MotionInfo_o *)StringLiteral_1511/*"<size="*/;
  if ( StringLiteral_1511/*"<size="*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_1511/*"<size="*/, v313->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v314 = (System_Int32_array **)StringLiteral_1511/*"<size="*/;
  }
  else
  {
    v314 = 0LL;
  }
  if ( !v313->max_length )
    goto LABEL_339;
  v313->m_Items[0] = (System_String_o *)v314;
  sub_B52920((BattleServantConfConponent_o *)v313->m_Items, v314, v307, v308, v309, v310, v311, v312);
  *((float *)&format.klass + 1) = *(float *)&v453.methodPointer * 0.9;
  v4 = (MotionInfo_o *)System_Single__ToString(
                         *(float *)&v453.methodPointer * 0.9,
                         (const MethodInfo *)((char *)&format.klass + 4));
  v321 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v313->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( v313->max_length <= 1 )
    goto LABEL_339;
  v313->m_Items[1] = (System_String_o *)v321;
  sub_B52920((BattleServantConfConponent_o *)&v313->m_Items[1], v321, v315, v316, v317, v318, v319, v320);
  v4 = (MotionInfo_o *)StringLiteral_1530/*">"*/;
  if ( StringLiteral_1530/*">"*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_1530/*">"*/, v313->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v328 = (System_Int32_array **)StringLiteral_1530/*">"*/;
  }
  else
  {
    v328 = 0LL;
  }
  if ( v313->max_length <= 2 )
    goto LABEL_339;
  v313->m_Items[2] = (System_String_o *)v328;
  sub_B52920((BattleServantConfConponent_o *)&v313->m_Items[2], v328, v322, v323, v324, v325, v326, v327);
  v329 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v329 = MotionInfo_TypeInfo;
  }
  v4 = (MotionInfo_o *)System_Int32__ToString((unsigned int)v329->static_fields + 80, 0LL);
  v336 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v313->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
  }
  if ( v313->max_length <= 3 )
    goto LABEL_339;
  v313->m_Items[3] = (System_String_o *)v336;
  sub_B52920((BattleServantConfConponent_o *)&v313->m_Items[3], v336, v330, v331, v332, v333, v334, v335);
  v4 = (MotionInfo_o *)StringLiteral_886/*"/"*/;
  if ( StringLiteral_886/*"/"*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_886/*"/"*/, v313->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_340;
    v343 = (System_Int32_array **)StringLiteral_886/*"/"*/;
  }
  else
  {
    v343 = 0LL;
  }
  if ( v313->max_length <= 4 )
    goto LABEL_339;
  v313->m_Items[4] = (System_String_o *)v343;
  sub_B52920((BattleServantConfConponent_o *)&v313->m_Items[4], v343, v337, v338, v339, v340, v341, v342);
  LODWORD(format.klass) = 10;
  v4 = (MotionInfo_o *)System_Int32__ToString((int32_t)&format, 0LL);
  v350 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (MotionInfo_o *)sub_B52A44(v4, v313->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_340:
      v448 = sub_B52A7C();
      sub_B52A28(v448, 0LL);
    }
  }
  if ( v313->max_length <= 5 )
    goto LABEL_339;
  v313->m_Items[5] = (System_String_o *)v350;
  sub_B52920((BattleServantConfConponent_o *)&v313->m_Items[5], v350, v344, v345, v346, v347, v348, v349);
  v4 = (MotionInfo_o *)StringLiteral_1327/*"</size>"*/;
  if ( StringLiteral_1327/*"</size>"*/ )
  {
    v4 = (MotionInfo_o *)sub_B52A44(StringLiteral_1327/*"</size>"*/, v313->obj.klass->_1.element_class);
    if ( v4 )
    {
      v357 = (System_Int32_array **)StringLiteral_1327/*"</size>"*/;
      goto LABEL_260;
    }
    goto LABEL_340;
  }
  v357 = 0LL;
LABEL_260:
  if ( v313->max_length <= 6 )
  {
LABEL_339:
    v447 = sub_B52A88(v4);
    sub_B52A28(v447, 0LL);
  }
  v313->m_Items[6] = (System_String_o *)v357;
  sub_B52920((BattleServantConfConponent_o *)&v313->m_Items[6], v357, v351, v352, v353, v354, v355, v356);
  v358 = System_String__Concat_44648440(v313, 0LL);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v463.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v463.fields.m_Width = methoda.invoker_method;
  UnityEngine_GUI__Box(v463, v358, 0LL);
  v464.fields.m_XMin = (float)(v276 * 4.0) + (float)((float)UnityEngine_Screen__get_width(0LL) - v234);
  v464.fields.m_YMin = (float)(v277 + 10.0) - v276;
  v464.fields.m_Width = v233 * 40.0;
  v464.fields.m_Height = v233 * 40.0;
  methoda.klass = 0LL;
  methoda.return_type = 0LL;
  UnityEngine_Rect___ctor(v464, v359, v360, v361, v362, (const MethodInfo *)&methoda.klass);
  v364 = System_Single__ToString(v363, &v453);
  v365 = System_String__Concat_44570600(
           (System_String_o *)StringLiteral_1511/*"<size="*/,
           v364,
           (System_String_o *)StringLiteral_1533/*">+</size>"*/,
           0LL);
  if ( UnityEngine_GUI__Button(*(UnityEngine_Rect_o *)&methoda.klass, v365, 0LL) )
  {
    v366 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v366 = MotionInfo_TypeInfo;
    }
    v367 = ++v366->static_fields->scrollSpeed;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Min_44991588(v367, 10, 0LL);
  }
  v368 = *(float *)&v453.methodPointer + 10.0;
  v465.fields.m_XMin = (float)UnityEngine_Screen__get_width(0LL) - v234;
  v465.fields.m_YMin = v277 + 10.0;
  v465.fields.m_Width = v233 * 250.0;
  v465.fields.m_Height = v277;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v465, v369, v370, v371, v372, &methoda);
  v377 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v377 = MotionInfo_TypeInfo;
  }
  static_fields = (float *)v377->static_fields;
  v466.fields.m_YMin = 0.0;
  v380 = static_fields[14];
  v379 = static_fields[15];
  v466.fields.m_Height = v368 * (float)*((int *)static_fields + 19);
  v466.fields.m_XMin = 0.0;
  v466.fields.m_Width = 500.0;
  methoda.klass = 0LL;
  methoda.return_type = 0LL;
  UnityEngine_Rect___ctor(v466, v373, v374, v375, v376, (const MethodInfo *)&methoda.klass);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v467.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v467.fields.m_Width = methoda.invoker_method;
  viewRect.fields.m_Height = *((float *)&methoda.return_type + 1);
  viewRect.fields.m_XMin = *(float *)&methoda.klass;
  v454.fields.x = v380;
  v454.fields.y = v379;
  *(_QWORD *)&viewRect.fields.m_YMin = *(Il2CppClass **)((char *)&methoda.klass + 4);
  v381 = UnityEngine_GUI__BeginScrollView(v467, v454, viewRect, 0LL);
  v382 = 0;
  v383 = 0;
  v4 = (MotionInfo_o *)MotionInfo_TypeInfo;
  v384 = 0;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v381;
  while ( 1 )
  {
    if ( (v4[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v4[9].monitor) )
    {
      v385 = v383;
      j_il2cpp_runtime_class_init_0(v4);
      v383 = v385;
      v4 = (MotionInfo_o *)MotionInfo_TypeInfo;
    }
    voicePlaybackLogList = *(struct System_Collections_Generic_List_List_string___o **)(*(_QWORD *)&v4[7].fields + 64LL);
    if ( !voicePlaybackLogList )
      goto LABEL_338;
    if ( v383 >= voicePlaybackLogList->fields._size )
      break;
    if ( (v4[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v4[9].monitor) )
    {
      v387 = v383;
      j_il2cpp_runtime_class_init_0(v4);
      v383 = v387;
      voicePlaybackLogList = MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
      if ( !voicePlaybackLogList )
        goto LABEL_338;
    }
    if ( voicePlaybackLogList->fields._size <= (unsigned int)v383 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v450 = v383;
    v4 = (MotionInfo_o *)voicePlaybackLogList->fields._items->m_Items[v383];
    if ( !v4 )
      goto LABEL_338;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    *(_QWORD *)&methoda.token = methoda.name;
    *(_OWORD *)&methoda.rgctx_data = *(_OWORD *)&methoda.methodPointer;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.rgctx_data,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v393 = *(System_Int32_array ***)&methoda.token;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      v469.fields.m_YMin = v368 * (float)v384;
      v469.fields.m_XMin = 0.0;
      v469.fields.m_Width = 500.0;
      v469.fields.m_Height = v368;
      UnityEngine_Rect___ctor(v469, v389, v390, v391, v392, &methoda);
      v401 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
      if ( !v401 )
        sub_B52A5C(0LL, v394);
      v402 = StringLiteral_1511/*"<size="*/;
      if ( StringLiteral_1511/*"<size="*/ )
      {
        v402 = sub_B52A44(StringLiteral_1511/*"<size="*/, v401->obj.klass->_1.element_class);
        if ( !v402 )
        {
          v445 = sub_B52A7C();
          sub_B52A28(v445, 0LL);
        }
        v403 = (System_Int32_array **)StringLiteral_1511/*"<size="*/;
      }
      else
      {
        v403 = 0LL;
      }
      if ( !v401->max_length )
      {
        v439 = sub_B52A88(v402);
        sub_B52A28(v439, 0LL);
      }
      v401->m_Items[0] = (System_String_o *)v403;
      sub_B52920((BattleServantConfConponent_o *)v401->m_Items, v403, v395, v396, v397, v398, v399, v400);
      v405 = System_Single__ToString(v404, &v453);
      v412 = (System_Int32_array **)v405;
      if ( v405 )
      {
        v405 = (System_String_o *)sub_B52A44(v405, v401->obj.klass->_1.element_class);
        if ( !v405 )
        {
          v446 = sub_B52A7C();
          sub_B52A28(v446, 0LL);
        }
      }
      if ( v401->max_length <= 1 )
      {
        v441 = sub_B52A88(v405);
        sub_B52A28(v441, 0LL);
      }
      v401->m_Items[1] = (System_String_o *)v412;
      sub_B52920((BattleServantConfConponent_o *)&v401->m_Items[1], v412, v406, v407, v408, v409, v410, v411);
      v419 = StringLiteral_1530/*">"*/;
      if ( StringLiteral_1530/*">"*/ )
      {
        v419 = sub_B52A44(StringLiteral_1530/*">"*/, v401->obj.klass->_1.element_class);
        if ( !v419 )
        {
          v442 = sub_B52A7C();
          sub_B52A28(v442, 0LL);
        }
        v420 = (System_Int32_array **)StringLiteral_1530/*">"*/;
      }
      else
      {
        v420 = 0LL;
      }
      if ( v401->max_length <= 2 )
      {
        v438 = sub_B52A88(v419);
        sub_B52A28(v438, 0LL);
      }
      v401->m_Items[2] = (System_String_o *)v420;
      sub_B52920((BattleServantConfConponent_o *)&v401->m_Items[2], v420, v413, v414, v415, v416, v417, v418);
      if ( v393 )
      {
        v421 = sub_B52A44(v393, v401->obj.klass->_1.element_class);
        if ( !v421 )
        {
          v443 = sub_B52A7C();
          sub_B52A28(v443, 0LL);
        }
      }
      if ( v401->max_length <= 3 )
      {
        v440 = sub_B52A88(v421);
        sub_B52A28(v440, 0LL);
      }
      v401->m_Items[3] = (System_String_o *)v393;
      sub_B52920((BattleServantConfConponent_o *)&v401->m_Items[3], v393, v422, v423, v424, v425, v426, v427);
      v434 = StringLiteral_1327/*"</size>"*/;
      if ( StringLiteral_1327/*"</size>"*/ )
      {
        v434 = sub_B52A44(StringLiteral_1327/*"</size>"*/, v401->obj.klass->_1.element_class);
        if ( !v434 )
        {
          v444 = sub_B52A7C();
          sub_B52A28(v444, 0LL);
        }
        v435 = (System_Int32_array **)StringLiteral_1327/*"</size>"*/;
      }
      else
      {
        v435 = 0LL;
      }
      if ( v401->max_length <= 4 )
      {
        v436 = sub_B52A88(v434);
        sub_B52A28(v436, 0LL);
      }
      v401->m_Items[4] = (System_String_o *)v435;
      sub_B52920((BattleServantConfConponent_o *)&v401->m_Items[4], v435, v428, v429, v430, v431, v432, v433);
      v388 = System_String__Concat_44648440(v401, 0LL);
      if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
      }
      *(_QWORD *)&v468.fields.m_XMin = methoda.methodPointer;
      *(_QWORD *)&v468.fields.m_Width = methoda.invoker_method;
      UnityEngine_GUI__Label(v468, v388, 0LL);
      ++v384;
    }
    *((_DWORD *)&methoda.parameters + v382) = 1406;
    v382 = ++HIDWORD(methoda.parameters);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.rgctx_data,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( v382 )
    {
      v437 = v382 - 1;
      if ( *((_DWORD *)&methoda.return_type + v382 + 1) == 1406 )
      {
        --v382;
        HIDWORD(methoda.parameters) = v437;
      }
    }
    v4 = (MotionInfo_o *)MotionInfo_TypeInfo;
    v383 = v450 + 1;
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
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  System_Int32_array **v7; // x20
  MotionInfo_c *v8; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x20
  MotionInfo_c *v17; // x0
  struct MotionInfo_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  MotionInfo_c *v25; // x0
  System_Int32_array **v26; // x20
  struct MotionInfo_StaticFields *v27; // x0
  MotionInfo_c *v28; // x0

  if ( (byte_42AE836 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE836 = 1;
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v7 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42AE8DE )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8DE = 1;
  }
  v8 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v8 = MotionInfo_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_VoiceServantId_k__BackingField = (struct System_String_o *)v7;
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->_VoiceServantId_k__BackingField,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v16 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42AE8DF )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8DF = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v18 = v17->static_fields;
  v18->_VoiceId_k__BackingField = (struct System_String_o *)v16;
  sub_B52920((BattleServantConfConponent_o *)&v18->_VoiceId_k__BackingField, v16, v10, v11, v12, v13, v14, v15);
  if ( !byte_42AE8E0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8E0 = 1;
  }
  v25 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v25 = MotionInfo_TypeInfo;
  }
  v25->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_42AE8E1 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    v25 = MotionInfo_TypeInfo;
    byte_42AE8E1 = 1;
  }
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = MotionInfo_TypeInfo;
  }
  v25->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v26 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42AE8E2 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    v25 = MotionInfo_TypeInfo;
    byte_42AE8E2 = 1;
  }
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = MotionInfo_TypeInfo;
  }
  v27 = v25->static_fields;
  v27->_VoiceType_k__BackingField = (struct System_String_o *)v26;
  sub_B52920((BattleServantConfConponent_o *)&v27->_VoiceType_k__BackingField, v26, v19, v20, v21, v22, v23, v24);
  if ( !byte_42AE8E3 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8E3 = 1;
  }
  v28 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v28 = MotionInfo_TypeInfo;
  }
  v28->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_42AE8E4 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    v28 = MotionInfo_TypeInfo;
    byte_42AE8E4 = 1;
  }
  if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = MotionInfo_TypeInfo;
  }
  v28->static_fields->_IsSe_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_42AE83C & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE83C = 1;
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_42AE8E5 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE8E5 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  v1->static_fields->_IsRandom_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoicePlaybackLog(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *voicePlaybackLogList; // x0

  if ( (byte_42AE83B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_List_string___Clear__);
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE83B = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    sub_B52A5C(0LL, v1);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    voicePlaybackLogList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_List_string___Clear__);
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

  if ( (byte_42AE833 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE833 = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  static_fields = (BattleServantConfConponent_o *)v10->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)svtName;
  sub_B52920(static_fields, (System_Int32_array **)svtName, (System_String_array **)method, v3, v4, v5, v6, v7);
  v12 = MotionInfo_TypeInfo->static_fields;
  v12->actionData = actionData;
  sub_B52920(
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
  MotionInfo_c *v2; // x0
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x20
  int32_t size; // w9
  int32_t voicePlayLogLineSize; // w21
  System_Collections_Generic_List_string__o *v7; // x8
  struct MotionInfo_StaticFields *v8; // x8
  int32_t v9; // w21
  struct System_Collections_Generic_List_List_string___o *v10; // x22
  System_Collections_Generic_List_string__o *v11; // x8
  MotionInfo_c *v12; // x9
  __int16 v13; // w8
  int v14; // w9

  if ( (byte_42AE83A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_List_string___RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE83A = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  static_fields = v2->static_fields;
  voicePlaybackLogList = static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_35;
  if ( voicePlaybackLogList->fields._size < 1 )
    return;
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    static_fields = MotionInfo_TypeInfo->static_fields;
    voicePlaybackLogList = static_fields->voicePlaybackLogList;
    if ( !voicePlaybackLogList )
      goto LABEL_35;
  }
  size = voicePlaybackLogList->fields._size;
  voicePlayLogLineSize = static_fields->voicePlayLogLineSize;
  if ( !size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v7 = voicePlaybackLogList->fields._items->m_Items[size - 1];
  if ( !v7 )
LABEL_35:
    sub_B52A5C(v2, v1);
  v2 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v7->fields._size + voicePlayLogLineSize;
  while ( 1 )
  {
    v13 = WORD1(v2->vtable._0_Equals.methodPtr);
    if ( (v13 & 0x400) != 0 )
    {
      if ( !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = MotionInfo_TypeInfo;
        v13 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
      }
      v14 = v13 & 0x400;
    }
    else
    {
      v14 = 0;
    }
    v8 = v2->static_fields;
    v9 = v8->voicePlayLogLineSize;
    if ( v9 < v8->voicePlaybackLogMaxNum )
      break;
    if ( v14 && !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v8 = MotionInfo_TypeInfo->static_fields;
      v9 = v8->voicePlayLogLineSize;
    }
    v10 = v8->voicePlaybackLogList;
    if ( !v10 )
      goto LABEL_35;
    if ( !v10->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v11 = v10->fields._items->m_Items[0];
    if ( !v11 )
      goto LABEL_35;
    v12 = MotionInfo_TypeInfo;
    MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v9 - v11->fields._size;
    v2 = (MotionInfo_c *)v12->static_fields->voicePlaybackLogList;
    if ( !v2 )
      goto LABEL_35;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2,
      0,
      (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v2 = MotionInfo_TypeInfo;
  }
  if ( v14 )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v9 = MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize;
    }
  }
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0LL) * v9);
}


bool __fastcall MotionInfo__get_IsRandom(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_42AE82F & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE82F = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_IsRandom_k__BackingField;
}


bool __fastcall MotionInfo__get_IsSe(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_42AE831 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE831 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_IsSe_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceId(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_42AE829 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE829 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceId_k__BackingField;
}


int32_t __fastcall MotionInfo__get_VoiceIndex(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_42AE82D & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE82D = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceIndex_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceServantId(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_42AE823 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE823 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceServantId_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceTotalWeight(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_42AE827 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE827 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceTotalWeight_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceType(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_42AE82B & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE82B = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceType_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceWeight(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_42AE825 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE825 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceWeight_k__BackingField;
}


void __fastcall MotionInfo__set_IsRandom(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_42AE830 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE830 = 1;
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

  if ( (byte_42AE832 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE832 = 1;
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

  if ( (byte_42AE82A & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE82A = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_B52920(
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

  if ( (byte_42AE82E & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE82E = 1;
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

  if ( (byte_42AE824 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE824 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_B52920(
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
  MotionInfo_c *v3; // x0

  if ( (byte_42AE828 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE828 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceTotalWeight_k__BackingField = value;
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

  if ( (byte_42AE82C & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE82C = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_B52920(
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
  MotionInfo_c *v3; // x0

  if ( (byte_42AE826 & 1) == 0 )
  {
    sub_B52984(&MotionInfo_TypeInfo);
    byte_42AE826 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceWeight_k__BackingField = value;
}