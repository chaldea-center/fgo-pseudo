void __fastcall MotionInfo___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  MotionInfo_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct MotionInfo_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  MotionInfo_c *v28; // x8

  if ( (byte_42E7446 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string____ctor__, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_List_string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&MotionInfo_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E7446 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MotionInfo_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->_IsRandom_k__BackingField = 0;
  v19->static_fields->_IsSe_k__BackingField = 0;
  MotionInfo_TypeInfo->static_fields->scrollPosition = UnityEngine_Vector2__get_zero(0LL);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_string____ctor__);
  v21 = MotionInfo_TypeInfo->static_fields;
  v21->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v21->voicePlaybackLogList,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlaybackLogMaxNum = 500;
  v28->static_fields->voicePlayLogLineSize = 0;
  v28->static_fields->scrollSpeed = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  MotionInfo_c *v12; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int v14; // w1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  MotionInfo_c *v21; // x0
  System_Int32_array **v22; // x20
  struct MotionInfo_StaticFields *v23; // x0
  const MethodInfo *v24; // x0

  if ( (byte_42E7440 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_11744/*"SE"*/, v9, v10, v11);
    byte_42E7440 = 1;
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_42E74E9 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E74E9 = 1;
  }
  v12 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v12 = MotionInfo_TypeInfo;
  }
  v12->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_42E74EA )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    v12 = MotionInfo_TypeInfo;
    byte_42E74EA = 1;
  }
  if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MotionInfo_TypeInfo;
  }
  v12->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_42E74E8 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    v12 = MotionInfo_TypeInfo;
    byte_42E74E8 = 1;
  }
  if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MotionInfo_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->_VoiceId_k__BackingField,
    (System_Int32_array **)seId,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_42E74EC )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v14, (_DWORD)v15, v16);
    byte_42E74EC = 1;
  }
  v21 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v21 = MotionInfo_TypeInfo;
  }
  v21->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_42E74ED )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v14, (_DWORD)v15, v16);
    v21 = MotionInfo_TypeInfo;
    byte_42E74ED = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = MotionInfo_TypeInfo;
  }
  v21->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_42E74EE )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v14, (_DWORD)v15, v16);
    v21 = MotionInfo_TypeInfo;
    byte_42E74EE = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = MotionInfo_TypeInfo;
  }
  v21->static_fields->_IsRandom_k__BackingField = 0;
  v22 = (System_Int32_array **)StringLiteral_11744/*"SE"*/;
  if ( !byte_42E74EB )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v14, (_DWORD)v15, v16);
    v21 = MotionInfo_TypeInfo;
    byte_42E74EB = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = MotionInfo_TypeInfo;
  }
  v23 = v21->static_fields;
  v23->_VoiceType_k__BackingField = (struct System_String_o *)v22;
  sub_B5D560((BattleServantConfConponent_o *)&v23->_VoiceType_k__BackingField, v22, v15, v16, v17, v18, v19, v20);
  MotionInfo__AddVoiceLog(v24);
}


void __fastcall MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x19
  System_String_o *NewLine; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *voicePlaybackLogList; // x0
  __int64 v46; // x1
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  MotionInfo_c *v50; // x0
  __int16 v51; // w8
  int v52; // w8
  MotionInfo_c *v53; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v55; // x0
  __int64 *v56; // x8
  MotionInfo_c *v57; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  MotionInfo_c *v64; // x0
  System_String_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array *v72; // x20
  System_String_o *v73; // x0
  System_Int32_array **v74; // x1
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  float v78; // s0
  MotionInfo_c *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x21
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x1
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  float v97; // s0
  MotionInfo_c *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x21
  System_String_o *v113; // x0
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  MotionInfo_c *v117; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v119; // x0
  System_String_o *v120; // x0
  const MethodInfo *v121; // x0
  __int64 v122; // x0
  __int64 v123; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E7441 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___Add__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&MotionInfo_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&string___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_287/*" 確率 / 合計 : "*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_171/*" VoiceID : "*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_977/*"0.00"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_127/*" / "*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_771/*"--- Voice・SE Log ---"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_163/*" SEID : "*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_285/*" 分類 : "*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_12868/*"ServantID : "*/, v40, v41, v42);
    byte_42E7441 = 1;
  }
  LODWORD(format.klass) = 0;
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_44577788(
                                                                                  (System_String_o *)StringLiteral_771/*"--- Voice・SE Log ---"*/,
                                                                                  NewLine,
                                                                                  0LL);
  if ( !v43 )
    goto LABEL_80;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v43,
    voicePlaybackLogList,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_42E74E1 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v47, v48, v49);
    byte_42E74E1 = 1;
  }
  v50 = MotionInfo_TypeInfo;
  v51 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v51 & 0x400) != 0 )
  {
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v50 = MotionInfo_TypeInfo;
      v51 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v52 = v51 & 0x400;
  }
  else
  {
    v52 = 0;
  }
  if ( v50->static_fields->_IsSe_k__BackingField )
  {
    if ( v52 && !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( !byte_42E74E3 )
    {
      sub_B5D5C4(&MotionInfo_TypeInfo, v47, v48, v49);
      byte_42E74E3 = 1;
    }
    v53 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v53 = MotionInfo_TypeInfo;
    }
    VoiceId_k__BackingField = v53->static_fields->_VoiceId_k__BackingField;
    v55 = System_Environment__get_NewLine(0LL);
    v56 = &StringLiteral_163/*" SEID : "*/;
  }
  else
  {
    if ( v52 && !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( !byte_42E74E2 )
    {
      sub_B5D5C4(&MotionInfo_TypeInfo, v47, v48, v49);
      byte_42E74E2 = 1;
    }
    v57 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v57 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v57->static_fields->_VoiceServantId_k__BackingField;
    v59 = System_Environment__get_NewLine(0LL);
    v60 = System_String__Concat_44580072(
            (System_String_o *)StringLiteral_12868/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            v59,
            0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v43,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    if ( !byte_42E74E3 )
    {
      sub_B5D5C4(&MotionInfo_TypeInfo, v61, v62, v63);
      byte_42E74E3 = 1;
    }
    v64 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v64 = MotionInfo_TypeInfo;
    }
    VoiceId_k__BackingField = v64->static_fields->_VoiceId_k__BackingField;
    v55 = System_Environment__get_NewLine(0LL);
    v56 = &StringLiteral_171/*" VoiceID : "*/;
  }
  v65 = System_String__Concat_44580072((System_String_o *)*v56, VoiceId_k__BackingField, v55, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v43,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  voicePlaybackLogList = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D5DC(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
LABEL_80:
    sub_B5D69C(voicePlaybackLogList, v46);
  v72 = (System_String_array *)voicePlaybackLogList;
  v73 = (System_String_o *)StringLiteral_287/*" 確率 / 合計 : "*/;
  if ( StringLiteral_287/*" 確率 / 合計 : "*/ )
  {
    v73 = (System_String_o *)sub_B5D684(StringLiteral_287/*" 確率 / 合計 : "*/, v72->obj.klass->_1.element_class);
    if ( !v73 )
      goto LABEL_79;
    v74 = (System_Int32_array **)StringLiteral_287/*" 確率 / 合計 : "*/;
  }
  else
  {
    v74 = 0LL;
  }
  if ( !v72->max_length )
    goto LABEL_78;
  v72->m_Items[0] = (System_String_o *)v74;
  sub_B5D560((BattleServantConfConponent_o *)v72->m_Items, v74, v66, v67, v68, v69, v70, v71);
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    LODWORD(v78) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
  if ( !byte_42E74E4 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v75, v76, v77);
    byte_42E74E4 = 1;
  }
  v79 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v78) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v79 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v79->static_fields->_VoiceWeight_k__BackingField;
  v73 = System_Single__ToString_44564460(v78, &format, (const MethodInfo *)StringLiteral_977/*"0.00"*/);
  v86 = (System_Int32_array **)v73;
  if ( v73 )
  {
    v73 = (System_String_o *)sub_B5D684(v73, v72->obj.klass->_1.element_class);
    if ( !v73 )
      goto LABEL_79;
  }
  if ( v72->max_length <= 1 )
    goto LABEL_78;
  v72->m_Items[1] = (System_String_o *)v86;
  sub_B5D560((BattleServantConfConponent_o *)&v72->m_Items[1], v86, v80, v81, v82, v83, v84, v85);
  v73 = (System_String_o *)StringLiteral_127/*" / "*/;
  if ( StringLiteral_127/*" / "*/ )
  {
    v73 = (System_String_o *)sub_B5D684(StringLiteral_127/*" / "*/, v72->obj.klass->_1.element_class);
    if ( !v73 )
      goto LABEL_79;
    v93 = (System_Int32_array **)StringLiteral_127/*" / "*/;
  }
  else
  {
    v93 = 0LL;
  }
  if ( v72->max_length <= 2 )
    goto LABEL_78;
  v72->m_Items[2] = (System_String_o *)v93;
  sub_B5D560((BattleServantConfConponent_o *)&v72->m_Items[2], v93, v87, v88, v89, v90, v91, v92);
  if ( !byte_42E74E5 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v94, v95, v96);
    byte_42E74E5 = 1;
  }
  v98 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v97) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v98 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v98->static_fields->_VoiceTotalWeight_k__BackingField;
  v73 = System_Single__ToString_44564460(v97, &format, (const MethodInfo *)StringLiteral_977/*"0.00"*/);
  v105 = (System_Int32_array **)v73;
  if ( v73 )
  {
    v73 = (System_String_o *)sub_B5D684(v73, v72->obj.klass->_1.element_class);
    if ( !v73 )
      goto LABEL_79;
  }
  if ( v72->max_length <= 3 )
    goto LABEL_78;
  v72->m_Items[3] = (System_String_o *)v105;
  sub_B5D560((BattleServantConfConponent_o *)&v72->m_Items[3], v105, v99, v100, v101, v102, v103, v104);
  v73 = System_Environment__get_NewLine(0LL);
  v112 = (System_Int32_array **)v73;
  if ( v73 )
  {
    v73 = (System_String_o *)sub_B5D684(v73, v72->obj.klass->_1.element_class);
    if ( !v73 )
    {
LABEL_79:
      v123 = sub_B5D6BC();
      sub_B5D668(v123, 0LL);
    }
  }
  if ( v72->max_length <= 4 )
  {
LABEL_78:
    v122 = sub_B5D6C8(v73);
    sub_B5D668(v122, 0LL);
  }
  v72->m_Items[4] = (System_String_o *)v112;
  sub_B5D560((BattleServantConfConponent_o *)&v72->m_Items[4], v112, v106, v107, v108, v109, v110, v111);
  v113 = System_String__Concat_44657912(v72, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v43,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v113,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  if ( !byte_42E74E6 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v114, v115, v116);
    byte_42E74E6 = 1;
  }
  v117 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v117 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v117->static_fields->_VoiceType_k__BackingField;
  v119 = System_Environment__get_NewLine(0LL);
  v120 = System_String__Concat_44580072((System_String_o *)StringLiteral_285/*" 分類 : "*/, VoiceType_k__BackingField, v119, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v43,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v120,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  voicePlaybackLogList = (EventMissionProgressRequest_Argument_ProgressData_o *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_80;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voicePlaybackLogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_string___Add__);
  MotionInfo__UpdateVoicePlaybackLogString(v121);
}


void __fastcall MotionInfo__AddVoiceLog_22816204(System_String_o *str, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *voicePlaybackLogList; // x0
  __int64 v19; // x1
  MotionInfo_c *v20; // x0
  const MethodInfo *v21; // x0

  if ( (byte_42E7442 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&MotionInfo_TypeInfo, v14, v15, v16);
    byte_42E7442 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v17 )
    goto LABEL_9;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v17,
    (EventMissionProgressRequest_Argument_ProgressData_o *)str,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  v20 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
LABEL_9:
    sub_B5D69C(voicePlaybackLogList, v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    voicePlaybackLogList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_string___Add__);
  MotionInfo__UpdateVoicePlaybackLogString(v21);
}


System_String_o *__fastcall MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
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
  __int64 *v14; // x8
  System_String_o *result; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = type;
  if ( (byte_42E743E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_24150/*"バスター"*/, type, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_24132/*"クイック"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_24122/*"アーツ"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_24126/*"エクストラ"*/, v11, v12, v13);
    byte_42E743E = 1;
  }
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v14 = &StringLiteral_24122/*"アーツ"*/;
      goto LABEL_9;
    case 2:
      v14 = &StringLiteral_24150/*"バスター"*/;
      goto LABEL_9;
    case 3:
      v14 = &StringLiteral_24132/*"クイック"*/;
      goto LABEL_9;
    case 4:
      v14 = &StringLiteral_24126/*"エクストラ"*/;
LABEL_9:
      result = (System_String_o *)*v14;
      break;
    default:
      result = System_Int32__ToString((int32_t)&v16, 0LL);
      break;
  }
  return result;
}


void __fastcall MotionInfo__OnGUI(MotionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  MotionInfo_o *v92; // x0
  System_Int32_array **TypeName; // x19
  struct BattleActionData_o *actionData; // x8
  __int64 v95; // x1
  int32_t *p_type; // x8
  MotionInfo_c *v97; // x8
  System_String_o *v98; // x20
  MotionInfo_c *v99; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *NewLine; // x0
  MotionInfo_c *v102; // x0
  __int16 v103; // w8
  int v104; // w8
  System_String_o **v105; // x9
  System_String_o *v106; // x21
  MotionInfo_c *v107; // x0
  System_String_o *VoiceId_k__BackingField; // x22
  System_String_o *v109; // x0
  System_Int32_array **v110; // x21
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_String_array *v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x1
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  float v128; // s0
  MotionInfo_c *v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x21
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x1
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  float v147; // s0
  MotionInfo_c *v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x21
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  System_Int32_array **v162; // x21
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Int32_array **v169; // x1
  int v170; // w1
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array **v177; // x21
  System_Int32_array **v178; // x21
  System_String_array *v179; // x20
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  System_Int32_array **v186; // x22
  il2cpp_array_size_t *p_max_length; // x23
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
  System_Int32_array **svtName; // x22
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  System_Int32_array **v215; // x22
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  System_Int32_array **v222; // x22
  System_String_array **v223; // x2
  System_String_array **v224; // x3
  System_Boolean_array **v225; // x4
  System_Int32_array **v226; // x5
  System_Int32_array *v227; // x6
  System_Int32_array *v228; // x7
  System_Int32_array **v229; // x1
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  System_Int32_array **v236; // x22
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  System_Int32_array **v243; // x22
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  System_Int32_array **v250; // x22
  System_String_array **v251; // x2
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  System_Int32_array **v257; // x22
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  System_Int32_array **v264; // x1
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  System_Int32_array **v271; // x22
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  System_Int32_array **v284; // x19
  System_String_array **v285; // x2
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  System_Int32_array **v291; // x19
  System_String_array **v292; // x2
  System_String_array **v293; // x3
  System_Boolean_array **v294; // x4
  System_Int32_array **v295; // x5
  System_Int32_array *v296; // x6
  System_Int32_array *v297; // x7
  System_Int32_array **v298; // x1
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  System_Int32_array **v305; // x19
  System_String_array **v306; // x2
  System_String_array **v307; // x3
  System_Boolean_array **v308; // x4
  System_Int32_array **v309; // x5
  System_Int32_array *v310; // x6
  System_Int32_array *v311; // x7
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  System_Int32_array **v318; // x19
  System_String_array **v319; // x2
  System_String_array **v320; // x3
  System_Boolean_array **v321; // x4
  System_Int32_array **v322; // x5
  System_Int32_array *v323; // x6
  System_Int32_array *v324; // x7
  System_Int32_array **v325; // x19
  System_Int32_array **v326; // x19
  float v327; // s10
  float v328; // s11
  float v329; // s8
  float v330; // s4
  float v331; // s5
  float v332; // s6
  float v333; // s7
  System_String_array **v334; // x2
  System_String_array **v335; // x3
  System_Boolean_array **v336; // x4
  System_Int32_array **v337; // x5
  System_Int32_array *v338; // x6
  System_Int32_array *v339; // x7
  System_String_array *v340; // x20
  System_Int32_array **v341; // x1
  float v342; // s0
  System_String_array **v343; // x2
  System_String_array **v344; // x3
  System_Boolean_array **v345; // x4
  System_Int32_array **v346; // x5
  System_Int32_array *v347; // x6
  System_Int32_array *v348; // x7
  System_Int32_array **v349; // x21
  System_String_array **v350; // x2
  System_String_array **v351; // x3
  System_Boolean_array **v352; // x4
  System_Int32_array **v353; // x5
  System_Int32_array *v354; // x6
  System_Int32_array *v355; // x7
  System_Int32_array **v356; // x1
  System_String_array **v357; // x2
  System_String_array **v358; // x3
  System_Boolean_array **v359; // x4
  System_Int32_array **v360; // x5
  System_Int32_array *v361; // x6
  System_Int32_array *v362; // x7
  System_String_array **v363; // x2
  System_String_array **v364; // x3
  System_Boolean_array **v365; // x4
  System_Int32_array **v366; // x5
  System_Int32_array *v367; // x6
  System_Int32_array *v368; // x7
  System_Int32_array **v369; // x1
  System_String_o *v370; // x19
  float v371; // s12
  float v372; // s10
  float v373; // s4
  float v374; // s5
  float v375; // s6
  float v376; // s7
  float v377; // s0
  System_String_o *v378; // x0
  System_String_o *v379; // x0
  MotionInfo_c *v380; // x0
  float v381; // s4
  float v382; // s5
  float v383; // s6
  float v384; // s7
  float v385; // s0
  System_String_o *v386; // x0
  System_String_o *v387; // x19
  MotionInfo_c *v388; // x0
  float v389; // s4
  float v390; // s5
  float v391; // s6
  float v392; // s7
  float v393; // s0
  System_String_o *v394; // x0
  System_String_o *v395; // x19
  MotionInfo_c *v396; // x0
  int32_t v397; // w19
  float v398; // s4
  float v399; // s5
  float v400; // s6
  float v401; // s7
  System_String_array **v402; // x2
  System_String_array **v403; // x3
  System_Boolean_array **v404; // x4
  System_Int32_array **v405; // x5
  System_Int32_array *v406; // x6
  System_Int32_array *v407; // x7
  System_String_array *v408; // x19
  System_Int32_array **v409; // x1
  System_String_array **v410; // x2
  System_String_array **v411; // x3
  System_Boolean_array **v412; // x4
  System_Int32_array **v413; // x5
  System_Int32_array *v414; // x6
  System_Int32_array *v415; // x7
  System_Int32_array **v416; // x20
  System_String_array **v417; // x2
  System_String_array **v418; // x3
  System_Boolean_array **v419; // x4
  System_Int32_array **v420; // x5
  System_Int32_array *v421; // x6
  System_Int32_array *v422; // x7
  System_Int32_array **v423; // x1
  MotionInfo_c *v424; // x0
  System_String_array **v425; // x2
  System_String_array **v426; // x3
  System_Boolean_array **v427; // x4
  System_Int32_array **v428; // x5
  System_Int32_array *v429; // x6
  System_Int32_array *v430; // x7
  System_Int32_array **v431; // x20
  System_String_array **v432; // x2
  System_String_array **v433; // x3
  System_Boolean_array **v434; // x4
  System_Int32_array **v435; // x5
  System_Int32_array *v436; // x6
  System_Int32_array *v437; // x7
  System_Int32_array **v438; // x1
  System_String_array **v439; // x2
  System_String_array **v440; // x3
  System_Boolean_array **v441; // x4
  System_Int32_array **v442; // x5
  System_Int32_array *v443; // x6
  System_Int32_array *v444; // x7
  System_Int32_array **v445; // x20
  System_String_array **v446; // x2
  System_String_array **v447; // x3
  System_Boolean_array **v448; // x4
  System_Int32_array **v449; // x5
  System_Int32_array *v450; // x6
  System_Int32_array *v451; // x7
  System_Int32_array **v452; // x1
  System_String_o *v453; // x19
  float v454; // s4
  float v455; // s5
  float v456; // s6
  float v457; // s7
  float v458; // s0
  System_String_o *v459; // x0
  System_String_o *v460; // x0
  MotionInfo_c *v461; // x0
  int32_t v462; // w19
  float v463; // s9
  float v464; // s4
  float v465; // s5
  float v466; // s6
  float v467; // s7
  float v468; // s4
  float v469; // s5
  float v470; // s6
  float v471; // s7
  MotionInfo_c *v472; // x0
  float *static_fields; // x8
  float v474; // s10
  float v475; // s11
  struct UnityEngine_Vector2_o v476; // kr00_8
  int v477; // w28
  int32_t v478; // w9
  int v479; // w23
  int32_t v480; // w19
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x19
  int32_t v482; // w19
  System_String_o *v483; // x19
  float v484; // s4
  float v485; // s5
  float v486; // s6
  float v487; // s7
  System_Int32_array **v488; // x20
  __int64 v489; // x1
  System_String_array **v490; // x2
  System_String_array **v491; // x3
  System_Boolean_array **v492; // x4
  System_Int32_array **v493; // x5
  System_Int32_array *v494; // x6
  System_Int32_array *v495; // x7
  System_String_array *v496; // x19
  __int64 v497; // x0
  System_Int32_array **v498; // x1
  float v499; // s0
  System_String_o *v500; // x0
  System_String_array **v501; // x2
  System_String_array **v502; // x3
  System_Boolean_array **v503; // x4
  System_Int32_array **v504; // x5
  System_Int32_array *v505; // x6
  System_Int32_array *v506; // x7
  System_Int32_array **v507; // x21
  System_String_array **v508; // x2
  System_String_array **v509; // x3
  System_Boolean_array **v510; // x4
  System_Int32_array **v511; // x5
  System_Int32_array *v512; // x6
  System_Int32_array *v513; // x7
  __int64 v514; // x0
  System_Int32_array **v515; // x1
  __int64 v516; // x0
  System_String_array **v517; // x2
  System_String_array **v518; // x3
  System_Boolean_array **v519; // x4
  System_Int32_array **v520; // x5
  System_Int32_array *v521; // x6
  System_Int32_array *v522; // x7
  System_String_array **v523; // x2
  System_String_array **v524; // x3
  System_Boolean_array **v525; // x4
  System_Int32_array **v526; // x5
  System_Int32_array *v527; // x6
  System_Int32_array *v528; // x7
  __int64 v529; // x0
  System_Int32_array **v530; // x1
  __int64 v531; // x0
  int v532; // w8
  __int64 v533; // x0
  __int64 v534; // x0
  __int64 v535; // x0
  __int64 v536; // x0
  __int64 v537; // x0
  __int64 v538; // x0
  __int64 v539; // x0
  __int64 v540; // x0
  __int64 v541; // x0
  __int64 v542; // x0
  __int64 v543; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-110h]
  int32_t v545; // [xsp+1Ch] [xbp-F4h]
  MethodInfo methoda; // [xsp+20h] [xbp-F0h] BYREF
  System_String_o format; // [xsp+70h] [xbp-A0h] BYREF
  MethodInfo v548; // [xsp+88h] [xbp-88h] BYREF
  UnityEngine_Vector2_o v549; // 0:s4.4,4:s5.4
  UnityEngine_Rect_o v550; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v551; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v552; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v553; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v554; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v555; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v556; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v557; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v558; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v559; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v560; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v561; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v562; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v563; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v564; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E743D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_GUI_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Math_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&MotionInfo_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&string___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1538/*">+</size>"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_1546/*">▼</size>"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_24110/*"【モーションID】"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_24109/*"【ボイス・SE】"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_15379/*"VoiceID : "*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_24111/*"【名前】"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_287/*" 確率 / 合計 : "*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_1545/*">▲</size>"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_1516/*"<size="*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_24108/*"【カード属性】"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1539/*">-</size>"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_977/*"0.00"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_127/*" / "*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_163/*" SEID : "*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_1/*""*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_285/*" 分類 : "*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_1332/*"</size>"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_1535/*">"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_12868/*"ServantID : "*/, v89, v90, v91);
    byte_42E743D = 1;
  }
  v548.methodPointer = 0LL;
  format.klass = 0LL;
  memset((char *)&methoda.parameters + 4, 0, 28);
  if ( !LOBYTE(this[1].klass) )
    return;
  HIDWORD(v548.methodPointer) = 0;
  v92 = (MotionInfo_o *)MotionInfo_TypeInfo;
  TypeName = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v92 = (MotionInfo_o *)MotionInfo_TypeInfo;
  }
  actionData = *(struct BattleActionData_o **)(*(_QWORD *)&v92[7].fields + 8LL);
  if ( actionData )
  {
    if ( (v92[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v92[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(v92);
      v92 = (MotionInfo_o *)MotionInfo_TypeInfo;
      actionData = MotionInfo_TypeInfo->static_fields->actionData;
      if ( !actionData )
        goto LABEL_338;
    }
    HIDWORD(v548.methodPointer) = actionData->fields.motionId;
    if ( actionData->fields.commandType == -1 )
    {
      if ( (v92[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v92[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(v92);
        actionData = MotionInfo_TypeInfo->static_fields->actionData;
        if ( !actionData )
          goto LABEL_338;
      }
      p_type = &actionData->fields.type;
    }
    else
    {
      if ( (v92[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v92[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(v92);
        actionData = MotionInfo_TypeInfo->static_fields->actionData;
        if ( !actionData )
          goto LABEL_338;
      }
      p_type = &actionData->fields.commandType;
    }
    TypeName = (System_Int32_array **)MotionInfo__GetTypeName(v92, *p_type, v2);
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_42E74E1 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E74E1 = 1;
  }
  v97 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v97 = MotionInfo_TypeInfo;
  }
  if ( v97->static_fields->_IsSe_k__BackingField )
  {
    v98 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v97);
    if ( !byte_42E74E2 )
    {
      sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
      byte_42E74E2 = 1;
    }
    v99 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v99 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v99->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v98 = System_String__Concat_44580072(
            (System_String_o *)StringLiteral_12868/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v97 = MotionInfo_TypeInfo;
  }
  if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v97);
  if ( !byte_42E74E1 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E74E1 = 1;
  }
  v102 = MotionInfo_TypeInfo;
  v103 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v103 & 0x400) != 0 )
  {
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v102 = MotionInfo_TypeInfo;
      v103 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v104 = v103 & 0x400;
  }
  else
  {
    v104 = 0;
  }
  if ( v102->static_fields->_IsSe_k__BackingField )
    v105 = (System_String_o **)&StringLiteral_163/*" SEID : "*/;
  else
    v105 = (System_String_o **)&StringLiteral_15379/*"VoiceID : "*/;
  v106 = *v105;
  if ( v104 && !v102->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v102);
  if ( !byte_42E74E3 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E74E3 = 1;
  }
  v107 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v107 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v107->static_fields->_VoiceId_k__BackingField;
  v109 = System_Environment__get_NewLine(0LL);
  v110 = (System_Int32_array **)System_String__Concat_44581200(v98, v106, VoiceId_k__BackingField, v109, 0LL);
  v92 = (MotionInfo_o *)sub_B5D5DC(string___TypeInfo, 8LL);
  if ( !v92 )
    goto LABEL_338;
  v117 = (System_String_array *)v92;
  if ( v110 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v110, v92->klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( !v117->max_length )
    goto LABEL_339;
  v117->m_Items[0] = (System_String_o *)v110;
  sub_B5D560((BattleServantConfConponent_o *)v117->m_Items, v110, v111, v112, v113, v114, v115, v116);
  v92 = (MotionInfo_o *)StringLiteral_287/*" 確率 / 合計 : "*/;
  if ( StringLiteral_287/*" 確率 / 合計 : "*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_287/*" 確率 / 合計 : "*/, v117->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v124 = (System_Int32_array **)StringLiteral_287/*" 確率 / 合計 : "*/;
  }
  else
  {
    v124 = 0LL;
  }
  if ( v117->max_length <= 1 )
    goto LABEL_339;
  v117->m_Items[1] = (System_String_o *)v124;
  sub_B5D560((BattleServantConfConponent_o *)&v117->m_Items[1], v124, v118, v119, v120, v121, v122, v123);
  if ( !byte_42E74E4 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v125, v126, v127);
    byte_42E74E4 = 1;
  }
  v129 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v128) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v129 = MotionInfo_TypeInfo;
  }
  HIDWORD(format.klass) = LODWORD(v129->static_fields->_VoiceWeight_k__BackingField);
  v92 = (MotionInfo_o *)System_Single__ToString_44564460(
                          v128,
                          (System_String_o *)((char *)&format.klass + 4),
                          (const MethodInfo *)StringLiteral_977/*"0.00"*/);
  v136 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v117->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( v117->max_length <= 2 )
    goto LABEL_339;
  v117->m_Items[2] = (System_String_o *)v136;
  sub_B5D560((BattleServantConfConponent_o *)&v117->m_Items[2], v136, v130, v131, v132, v133, v134, v135);
  v92 = (MotionInfo_o *)StringLiteral_127/*" / "*/;
  if ( StringLiteral_127/*" / "*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_127/*" / "*/, v117->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v143 = (System_Int32_array **)StringLiteral_127/*" / "*/;
  }
  else
  {
    v143 = 0LL;
  }
  if ( v117->max_length <= 3 )
    goto LABEL_339;
  v117->m_Items[3] = (System_String_o *)v143;
  sub_B5D560((BattleServantConfConponent_o *)&v117->m_Items[3], v143, v137, v138, v139, v140, v141, v142);
  if ( !byte_42E74E5 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v144, v145, v146);
    byte_42E74E5 = 1;
  }
  v148 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    LODWORD(v147) = j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo).n128_u32[0];
    v148 = MotionInfo_TypeInfo;
  }
  HIDWORD(format.klass) = LODWORD(v148->static_fields->_VoiceTotalWeight_k__BackingField);
  v92 = (MotionInfo_o *)System_Single__ToString_44564460(
                          v147,
                          (System_String_o *)((char *)&format.klass + 4),
                          (const MethodInfo *)StringLiteral_977/*"0.00"*/);
  v155 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v117->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( v117->max_length <= 4 )
    goto LABEL_339;
  v117->m_Items[4] = (System_String_o *)v155;
  sub_B5D560((BattleServantConfConponent_o *)&v117->m_Items[4], v155, v149, v150, v151, v152, v153, v154);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v162 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v117->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( v117->max_length <= 5 )
    goto LABEL_339;
  v117->m_Items[5] = (System_String_o *)v162;
  sub_B5D560((BattleServantConfConponent_o *)&v117->m_Items[5], v162, v156, v157, v158, v159, v160, v161);
  v92 = (MotionInfo_o *)StringLiteral_285/*" 分類 : "*/;
  if ( StringLiteral_285/*" 分類 : "*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_285/*" 分類 : "*/, v117->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v169 = (System_Int32_array **)StringLiteral_285/*" 分類 : "*/;
  }
  else
  {
    v169 = 0LL;
  }
  if ( v117->max_length <= 6 )
    goto LABEL_339;
  v117->m_Items[6] = (System_String_o *)v169;
  sub_B5D560((BattleServantConfConponent_o *)&v117->m_Items[6], v169, v163, v164, v165, v166, v167, v168);
  if ( !byte_42E74E6 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v170, (_DWORD)v171, v172);
    byte_42E74E6 = 1;
  }
  v92 = (MotionInfo_o *)MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v92 = (MotionInfo_o *)MotionInfo_TypeInfo;
  }
  v177 = *(System_Int32_array ***)(*(_QWORD *)&v92[7].fields + 40LL);
  if ( v177 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v177, v117->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( v117->max_length <= 7 )
    goto LABEL_339;
  v117->m_Items[7] = (System_String_o *)v177;
  sub_B5D560((BattleServantConfConponent_o *)&v117->m_Items[7], v177, v171, v172, v173, v174, v175, v176);
  v178 = (System_Int32_array **)System_String__Concat_44657912(v117, 0LL);
  v179 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 21LL);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  if ( !v179 )
    goto LABEL_338;
  v186 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  p_max_length = &v179->max_length;
  if ( !v179->max_length )
    goto LABEL_339;
  v179->m_Items[0] = (System_String_o *)v186;
  sub_B5D560((BattleServantConfConponent_o *)v179->m_Items, v186, v180, v181, v182, v183, v184, v185);
  v92 = (MotionInfo_o *)StringLiteral_24111/*"【名前】"*/;
  if ( StringLiteral_24111/*"【名前】"*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_24111/*"【名前】"*/, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v194 = (System_Int32_array **)StringLiteral_24111/*"【名前】"*/;
  }
  else
  {
    v194 = 0LL;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_339;
  v179->m_Items[1] = (System_String_o *)v194;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[1], v194, v188, v189, v190, v191, v192, v193);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v201 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_339;
  v179->m_Items[2] = (System_String_o *)v201;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[2], v201, v195, v196, v197, v198, v199, v200);
  svtName = (System_Int32_array **)MotionInfo_TypeInfo->static_fields->svtName;
  if ( svtName )
  {
    v92 = (MotionInfo_o *)sub_B5D684(svtName, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_339;
  v179->m_Items[3] = (System_String_o *)svtName;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[3], svtName, v202, v203, v204, v205, v206, v207);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v215 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_339;
  v179->m_Items[4] = (System_String_o *)v215;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[4], v215, v209, v210, v211, v212, v213, v214);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v222 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_339;
  v179->m_Items[5] = (System_String_o *)v222;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[5], v222, v216, v217, v218, v219, v220, v221);
  v92 = (MotionInfo_o *)StringLiteral_24110/*"【モーションID】"*/;
  if ( StringLiteral_24110/*"【モーションID】"*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_24110/*"【モーションID】"*/, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v229 = (System_Int32_array **)StringLiteral_24110/*"【モーションID】"*/;
  }
  else
  {
    v229 = 0LL;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_339;
  v179->m_Items[6] = (System_String_o *)v229;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[6], v229, v223, v224, v225, v226, v227, v228);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v236 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_339;
  v179->m_Items[7] = (System_String_o *)v236;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[7], v236, v230, v231, v232, v233, v234, v235);
  v92 = (MotionInfo_o *)System_Int32__ToString((int32_t)&v548.methodPointer + 4, 0LL);
  v243 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_339;
  v179->m_Items[8] = (System_String_o *)v243;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[8], v243, v237, v238, v239, v240, v241, v242);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v250 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_339;
  v179->m_Items[9] = (System_String_o *)v250;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[9], v250, v244, v245, v246, v247, v248, v249);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v257 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_339;
  v179->m_Items[10] = (System_String_o *)v257;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[10], v257, v251, v252, v253, v254, v255, v256);
  v92 = (MotionInfo_o *)StringLiteral_24108/*"【カード属性】"*/;
  if ( StringLiteral_24108/*"【カード属性】"*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_24108/*"【カード属性】"*/, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v264 = (System_Int32_array **)StringLiteral_24108/*"【カード属性】"*/;
  }
  else
  {
    v264 = 0LL;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_339;
  v179->m_Items[11] = (System_String_o *)v264;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[11], v264, v258, v259, v260, v261, v262, v263);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v271 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_339;
  v179->m_Items[12] = (System_String_o *)v271;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[12], v271, v265, v266, v267, v268, v269, v270);
  if ( TypeName )
  {
    v92 = (MotionInfo_o *)sub_B5D684(TypeName, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_339;
  v179->m_Items[13] = (System_String_o *)TypeName;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[13], TypeName, v272, v273, v274, v275, v276, v277);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v284 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_339;
  v179->m_Items[14] = (System_String_o *)v284;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[14], v284, v278, v279, v280, v281, v282, v283);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v291 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_339;
  v179->m_Items[15] = (System_String_o *)v291;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[15], v291, v285, v286, v287, v288, v289, v290);
  v92 = (MotionInfo_o *)StringLiteral_24109/*"【ボイス・SE】"*/;
  if ( StringLiteral_24109/*"【ボイス・SE】"*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_24109/*"【ボイス・SE】"*/, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v298 = (System_Int32_array **)StringLiteral_24109/*"【ボイス・SE】"*/;
  }
  else
  {
    v298 = 0LL;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_339;
  v179->m_Items[16] = (System_String_o *)v298;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[16], v298, v292, v293, v294, v295, v296, v297);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v305 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_339;
  v179->m_Items[17] = (System_String_o *)v305;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[17], v305, v299, v300, v301, v302, v303, v304);
  if ( v178 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v178, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_339;
  v179->m_Items[18] = (System_String_o *)v178;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[18], v178, v306, v307, v308, v309, v310, v311);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v318 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_339;
  v179->m_Items[19] = (System_String_o *)v318;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[19], v318, v312, v313, v314, v315, v316, v317);
  v92 = (MotionInfo_o *)System_Environment__get_NewLine(0LL);
  v325 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v179->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_339;
  v179->m_Items[20] = (System_String_o *)v325;
  sub_B5D560((BattleServantConfConponent_o *)&v179->m_Items[20], v325, v319, v320, v321, v322, v323, v324);
  v326 = (System_Int32_array **)System_String__Concat_44657912(v179, 0LL);
  v327 = (float)UnityEngine_Screen__get_height(0LL) * 0.25;
  v328 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *(float *)&v548.methodPointer = v328 * 17.5;
  v329 = v328 * 250.0;
  v550.fields.m_XMin = (float)UnityEngine_Screen__get_width(0LL) - (float)(v328 * 250.0);
  v550.fields.m_Height = v327 * 4.0;
  v550.fields.m_YMin = 10.0;
  v550.fields.m_Width = v328 * 250.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v550, v330, v331, v332, v333, &methoda);
  v92 = (MotionInfo_o *)sub_B5D5DC(string___TypeInfo, 5LL);
  if ( !v92 )
    goto LABEL_338;
  v340 = (System_String_array *)v92;
  v92 = (MotionInfo_o *)StringLiteral_1516/*"<size="*/;
  if ( StringLiteral_1516/*"<size="*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_1516/*"<size="*/, v340->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v341 = (System_Int32_array **)StringLiteral_1516/*"<size="*/;
  }
  else
  {
    v341 = 0LL;
  }
  if ( !v340->max_length )
    goto LABEL_339;
  v340->m_Items[0] = (System_String_o *)v341;
  sub_B5D560((BattleServantConfConponent_o *)v340->m_Items, v341, v334, v335, v336, v337, v338, v339);
  v92 = (MotionInfo_o *)System_Single__ToString(v342, &v548);
  v349 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v340->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( v340->max_length <= 1 )
    goto LABEL_339;
  v340->m_Items[1] = (System_String_o *)v349;
  sub_B5D560((BattleServantConfConponent_o *)&v340->m_Items[1], v349, v343, v344, v345, v346, v347, v348);
  v92 = (MotionInfo_o *)StringLiteral_1535/*">"*/;
  if ( StringLiteral_1535/*">"*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_1535/*">"*/, v340->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v356 = (System_Int32_array **)StringLiteral_1535/*">"*/;
  }
  else
  {
    v356 = 0LL;
  }
  if ( v340->max_length <= 2 )
    goto LABEL_339;
  v340->m_Items[2] = (System_String_o *)v356;
  sub_B5D560((BattleServantConfConponent_o *)&v340->m_Items[2], v356, v350, v351, v352, v353, v354, v355);
  if ( v326 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v326, v340->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( v340->max_length <= 3 )
    goto LABEL_339;
  v340->m_Items[3] = (System_String_o *)v326;
  sub_B5D560((BattleServantConfConponent_o *)&v340->m_Items[3], v326, v357, v358, v359, v360, v361, v362);
  v92 = (MotionInfo_o *)StringLiteral_1332/*"</size>"*/;
  if ( StringLiteral_1332/*"</size>"*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_1332/*"</size>"*/, v340->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v369 = (System_Int32_array **)StringLiteral_1332/*"</size>"*/;
  }
  else
  {
    v369 = 0LL;
  }
  if ( v340->max_length <= 4 )
    goto LABEL_339;
  v340->m_Items[4] = (System_String_o *)v369;
  sub_B5D560((BattleServantConfConponent_o *)&v340->m_Items[4], v369, v363, v364, v365, v366, v367, v368);
  v370 = System_String__Concat_44657912(v340, 0LL);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v551.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v551.fields.m_Width = methoda.invoker_method;
  UnityEngine_GUI__Box(v551, v370, 0LL);
  v371 = v328 * 40.0;
  v372 = v327 + v327;
  v552.fields.m_XMin = (float)UnityEngine_Screen__get_width(0LL) - v329;
  v552.fields.m_YMin = (float)(v372 + 10.0) - (float)(v328 * 40.0);
  v552.fields.m_Width = v328 * 40.0;
  v552.fields.m_Height = v328 * 40.0;
  methoda.klass = 0LL;
  methoda.return_type = 0LL;
  UnityEngine_Rect___ctor(v552, v373, v374, v375, v376, (const MethodInfo *)&methoda.klass);
  v378 = System_Single__ToString(v377, &v548);
  v379 = System_String__Concat_44580072(
           (System_String_o *)StringLiteral_1516/*"<size="*/,
           v378,
           (System_String_o *)StringLiteral_1545/*">▲</size>"*/,
           0LL);
  if ( UnityEngine_GUI__RepeatButton(*(UnityEngine_Rect_o *)&methoda.klass, v379, 0LL) )
  {
    v380 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v380 = MotionInfo_TypeInfo;
    }
    v380->static_fields->scrollPosition.fields.y = v380->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v380->static_fields->scrollSpeed * -10.0);
  }
  v553.fields.m_XMin = v371 + (float)((float)UnityEngine_Screen__get_width(0LL) - v329);
  v553.fields.m_YMin = (float)(v372 + 10.0) - v371;
  v553.fields.m_Width = v328 * 40.0;
  v553.fields.m_Height = v328 * 40.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v553, v381, v382, v383, v384, &methoda);
  v386 = System_Single__ToString(v385, &v548);
  v387 = System_String__Concat_44580072(
           (System_String_o *)StringLiteral_1516/*"<size="*/,
           v386,
           (System_String_o *)StringLiteral_1546/*">▼</size>"*/,
           0LL);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v554.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v554.fields.m_Width = methoda.invoker_method;
  if ( UnityEngine_GUI__RepeatButton(v554, v387, 0LL) )
  {
    v388 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v388 = MotionInfo_TypeInfo;
    }
    v388->static_fields->scrollPosition.fields.y = v388->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v388->static_fields->scrollSpeed * 10.0);
  }
  v555.fields.m_XMin = (float)(v371 + v371) + (float)((float)UnityEngine_Screen__get_width(0LL) - v329);
  v555.fields.m_YMin = (float)(v372 + 10.0) - v371;
  v555.fields.m_Width = v328 * 40.0;
  v555.fields.m_Height = v328 * 40.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v555, v389, v390, v391, v392, &methoda);
  v394 = System_Single__ToString(v393, &v548);
  v395 = System_String__Concat_44580072(
           (System_String_o *)StringLiteral_1516/*"<size="*/,
           v394,
           (System_String_o *)StringLiteral_1539/*">-</size>"*/,
           0LL);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v556.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v556.fields.m_Width = methoda.invoker_method;
  if ( UnityEngine_GUI__Button(v556, v395, 0LL) )
  {
    v396 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v396 = MotionInfo_TypeInfo;
    }
    v397 = --v396->static_fields->scrollSpeed;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Max_45149472(v397, 1, 0LL);
  }
  v557.fields.m_XMin = (float)(v371 * 3.0) + (float)((float)UnityEngine_Screen__get_width(0LL) - v329);
  v557.fields.m_YMin = (float)(v372 + 10.0) + (float)(v371 * -0.75);
  v557.fields.m_Width = v328 * 40.0;
  v557.fields.m_Height = v328 * 40.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v557, v398, v399, v400, v401, &methoda);
  v92 = (MotionInfo_o *)sub_B5D5DC(string___TypeInfo, 7LL);
  if ( !v92 )
LABEL_338:
    sub_B5D69C(v92, v95);
  v408 = (System_String_array *)v92;
  v92 = (MotionInfo_o *)StringLiteral_1516/*"<size="*/;
  if ( StringLiteral_1516/*"<size="*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_1516/*"<size="*/, v408->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v409 = (System_Int32_array **)StringLiteral_1516/*"<size="*/;
  }
  else
  {
    v409 = 0LL;
  }
  if ( !v408->max_length )
    goto LABEL_339;
  v408->m_Items[0] = (System_String_o *)v409;
  sub_B5D560((BattleServantConfConponent_o *)v408->m_Items, v409, v402, v403, v404, v405, v406, v407);
  *((float *)&format.klass + 1) = *(float *)&v548.methodPointer * 0.9;
  v92 = (MotionInfo_o *)System_Single__ToString(
                          *(float *)&v548.methodPointer * 0.9,
                          (const MethodInfo *)((char *)&format.klass + 4));
  v416 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v408->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( v408->max_length <= 1 )
    goto LABEL_339;
  v408->m_Items[1] = (System_String_o *)v416;
  sub_B5D560((BattleServantConfConponent_o *)&v408->m_Items[1], v416, v410, v411, v412, v413, v414, v415);
  v92 = (MotionInfo_o *)StringLiteral_1535/*">"*/;
  if ( StringLiteral_1535/*">"*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_1535/*">"*/, v408->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v423 = (System_Int32_array **)StringLiteral_1535/*">"*/;
  }
  else
  {
    v423 = 0LL;
  }
  if ( v408->max_length <= 2 )
    goto LABEL_339;
  v408->m_Items[2] = (System_String_o *)v423;
  sub_B5D560((BattleServantConfConponent_o *)&v408->m_Items[2], v423, v417, v418, v419, v420, v421, v422);
  v424 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v424 = MotionInfo_TypeInfo;
  }
  v92 = (MotionInfo_o *)System_Int32__ToString((unsigned int)v424->static_fields + 80, 0LL);
  v431 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v408->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
  }
  if ( v408->max_length <= 3 )
    goto LABEL_339;
  v408->m_Items[3] = (System_String_o *)v431;
  sub_B5D560((BattleServantConfConponent_o *)&v408->m_Items[3], v431, v425, v426, v427, v428, v429, v430);
  v92 = (MotionInfo_o *)StringLiteral_885/*"/"*/;
  if ( StringLiteral_885/*"/"*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_885/*"/"*/, v408->obj.klass->_1.element_class);
    if ( !v92 )
      goto LABEL_340;
    v438 = (System_Int32_array **)StringLiteral_885/*"/"*/;
  }
  else
  {
    v438 = 0LL;
  }
  if ( v408->max_length <= 4 )
    goto LABEL_339;
  v408->m_Items[4] = (System_String_o *)v438;
  sub_B5D560((BattleServantConfConponent_o *)&v408->m_Items[4], v438, v432, v433, v434, v435, v436, v437);
  LODWORD(format.klass) = 10;
  v92 = (MotionInfo_o *)System_Int32__ToString((int32_t)&format, 0LL);
  v445 = (System_Int32_array **)v92;
  if ( v92 )
  {
    v92 = (MotionInfo_o *)sub_B5D684(v92, v408->obj.klass->_1.element_class);
    if ( !v92 )
    {
LABEL_340:
      v543 = sub_B5D6BC();
      sub_B5D668(v543, 0LL);
    }
  }
  if ( v408->max_length <= 5 )
    goto LABEL_339;
  v408->m_Items[5] = (System_String_o *)v445;
  sub_B5D560((BattleServantConfConponent_o *)&v408->m_Items[5], v445, v439, v440, v441, v442, v443, v444);
  v92 = (MotionInfo_o *)StringLiteral_1332/*"</size>"*/;
  if ( StringLiteral_1332/*"</size>"*/ )
  {
    v92 = (MotionInfo_o *)sub_B5D684(StringLiteral_1332/*"</size>"*/, v408->obj.klass->_1.element_class);
    if ( v92 )
    {
      v452 = (System_Int32_array **)StringLiteral_1332/*"</size>"*/;
      goto LABEL_260;
    }
    goto LABEL_340;
  }
  v452 = 0LL;
LABEL_260:
  if ( v408->max_length <= 6 )
  {
LABEL_339:
    v542 = sub_B5D6C8(v92);
    sub_B5D668(v542, 0LL);
  }
  v408->m_Items[6] = (System_String_o *)v452;
  sub_B5D560((BattleServantConfConponent_o *)&v408->m_Items[6], v452, v446, v447, v448, v449, v450, v451);
  v453 = System_String__Concat_44657912(v408, 0LL);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v558.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v558.fields.m_Width = methoda.invoker_method;
  UnityEngine_GUI__Box(v558, v453, 0LL);
  v559.fields.m_XMin = (float)(v371 * 4.0) + (float)((float)UnityEngine_Screen__get_width(0LL) - v329);
  v559.fields.m_YMin = (float)(v372 + 10.0) - v371;
  v559.fields.m_Width = v328 * 40.0;
  v559.fields.m_Height = v328 * 40.0;
  methoda.klass = 0LL;
  methoda.return_type = 0LL;
  UnityEngine_Rect___ctor(v559, v454, v455, v456, v457, (const MethodInfo *)&methoda.klass);
  v459 = System_Single__ToString(v458, &v548);
  v460 = System_String__Concat_44580072(
           (System_String_o *)StringLiteral_1516/*"<size="*/,
           v459,
           (System_String_o *)StringLiteral_1538/*">+</size>"*/,
           0LL);
  if ( UnityEngine_GUI__Button(*(UnityEngine_Rect_o *)&methoda.klass, v460, 0LL) )
  {
    v461 = MotionInfo_TypeInfo;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v461 = MotionInfo_TypeInfo;
    }
    v462 = ++v461->static_fields->scrollSpeed;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Min_45104456(v462, 10, 0LL);
  }
  v463 = *(float *)&v548.methodPointer + 10.0;
  v560.fields.m_XMin = (float)UnityEngine_Screen__get_width(0LL) - v329;
  v560.fields.m_YMin = v372 + 10.0;
  v560.fields.m_Width = v328 * 250.0;
  v560.fields.m_Height = v372;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v560, v464, v465, v466, v467, &methoda);
  v472 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v472 = MotionInfo_TypeInfo;
  }
  static_fields = (float *)v472->static_fields;
  v561.fields.m_YMin = 0.0;
  v475 = static_fields[14];
  v474 = static_fields[15];
  v561.fields.m_Height = v463 * (float)*((int *)static_fields + 19);
  v561.fields.m_XMin = 0.0;
  v561.fields.m_Width = 500.0;
  methoda.klass = 0LL;
  methoda.return_type = 0LL;
  UnityEngine_Rect___ctor(v561, v468, v469, v470, v471, (const MethodInfo *)&methoda.klass);
  if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  }
  *(_QWORD *)&v562.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v562.fields.m_Width = methoda.invoker_method;
  viewRect.fields.m_Height = *((float *)&methoda.return_type + 1);
  viewRect.fields.m_XMin = *(float *)&methoda.klass;
  v549.fields.x = v475;
  v549.fields.y = v474;
  *(_QWORD *)&viewRect.fields.m_YMin = *(Il2CppClass **)((char *)&methoda.klass + 4);
  v476 = UnityEngine_GUI__BeginScrollView(v562, v549, viewRect, 0LL);
  v477 = 0;
  v478 = 0;
  v92 = (MotionInfo_o *)MotionInfo_TypeInfo;
  v479 = 0;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v476;
  while ( 1 )
  {
    if ( (v92[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v92[9].monitor) )
    {
      v480 = v478;
      j_il2cpp_runtime_class_init_0(v92);
      v478 = v480;
      v92 = (MotionInfo_o *)MotionInfo_TypeInfo;
    }
    voicePlaybackLogList = *(struct System_Collections_Generic_List_List_string___o **)(*(_QWORD *)&v92[7].fields + 64LL);
    if ( !voicePlaybackLogList )
      goto LABEL_338;
    if ( v478 >= voicePlaybackLogList->fields._size )
      break;
    if ( (v92[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(v92[9].monitor) )
    {
      v482 = v478;
      j_il2cpp_runtime_class_init_0(v92);
      v478 = v482;
      voicePlaybackLogList = MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
      if ( !voicePlaybackLogList )
        goto LABEL_338;
    }
    if ( voicePlaybackLogList->fields._size <= (unsigned int)v478 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v545 = v478;
    v92 = (MotionInfo_o *)voicePlaybackLogList->fields._items->m_Items[v478];
    if ( !v92 )
      goto LABEL_338;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v92,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    *(_QWORD *)&methoda.token = methoda.name;
    *(_OWORD *)&methoda.rgctx_data = *(_OWORD *)&methoda.methodPointer;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.rgctx_data,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v488 = *(System_Int32_array ***)&methoda.token;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      v564.fields.m_YMin = v463 * (float)v479;
      v564.fields.m_XMin = 0.0;
      v564.fields.m_Width = 500.0;
      v564.fields.m_Height = v463;
      UnityEngine_Rect___ctor(v564, v484, v485, v486, v487, &methoda);
      v496 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
      if ( !v496 )
        sub_B5D69C(0LL, v489);
      v497 = StringLiteral_1516/*"<size="*/;
      if ( StringLiteral_1516/*"<size="*/ )
      {
        v497 = sub_B5D684(StringLiteral_1516/*"<size="*/, v496->obj.klass->_1.element_class);
        if ( !v497 )
        {
          v540 = sub_B5D6BC();
          sub_B5D668(v540, 0LL);
        }
        v498 = (System_Int32_array **)StringLiteral_1516/*"<size="*/;
      }
      else
      {
        v498 = 0LL;
      }
      if ( !v496->max_length )
      {
        v534 = sub_B5D6C8(v497);
        sub_B5D668(v534, 0LL);
      }
      v496->m_Items[0] = (System_String_o *)v498;
      sub_B5D560((BattleServantConfConponent_o *)v496->m_Items, v498, v490, v491, v492, v493, v494, v495);
      v500 = System_Single__ToString(v499, &v548);
      v507 = (System_Int32_array **)v500;
      if ( v500 )
      {
        v500 = (System_String_o *)sub_B5D684(v500, v496->obj.klass->_1.element_class);
        if ( !v500 )
        {
          v541 = sub_B5D6BC();
          sub_B5D668(v541, 0LL);
        }
      }
      if ( v496->max_length <= 1 )
      {
        v536 = sub_B5D6C8(v500);
        sub_B5D668(v536, 0LL);
      }
      v496->m_Items[1] = (System_String_o *)v507;
      sub_B5D560((BattleServantConfConponent_o *)&v496->m_Items[1], v507, v501, v502, v503, v504, v505, v506);
      v514 = StringLiteral_1535/*">"*/;
      if ( StringLiteral_1535/*">"*/ )
      {
        v514 = sub_B5D684(StringLiteral_1535/*">"*/, v496->obj.klass->_1.element_class);
        if ( !v514 )
        {
          v537 = sub_B5D6BC();
          sub_B5D668(v537, 0LL);
        }
        v515 = (System_Int32_array **)StringLiteral_1535/*">"*/;
      }
      else
      {
        v515 = 0LL;
      }
      if ( v496->max_length <= 2 )
      {
        v533 = sub_B5D6C8(v514);
        sub_B5D668(v533, 0LL);
      }
      v496->m_Items[2] = (System_String_o *)v515;
      sub_B5D560((BattleServantConfConponent_o *)&v496->m_Items[2], v515, v508, v509, v510, v511, v512, v513);
      if ( v488 )
      {
        v516 = sub_B5D684(v488, v496->obj.klass->_1.element_class);
        if ( !v516 )
        {
          v538 = sub_B5D6BC();
          sub_B5D668(v538, 0LL);
        }
      }
      if ( v496->max_length <= 3 )
      {
        v535 = sub_B5D6C8(v516);
        sub_B5D668(v535, 0LL);
      }
      v496->m_Items[3] = (System_String_o *)v488;
      sub_B5D560((BattleServantConfConponent_o *)&v496->m_Items[3], v488, v517, v518, v519, v520, v521, v522);
      v529 = StringLiteral_1332/*"</size>"*/;
      if ( StringLiteral_1332/*"</size>"*/ )
      {
        v529 = sub_B5D684(StringLiteral_1332/*"</size>"*/, v496->obj.klass->_1.element_class);
        if ( !v529 )
        {
          v539 = sub_B5D6BC();
          sub_B5D668(v539, 0LL);
        }
        v530 = (System_Int32_array **)StringLiteral_1332/*"</size>"*/;
      }
      else
      {
        v530 = 0LL;
      }
      if ( v496->max_length <= 4 )
      {
        v531 = sub_B5D6C8(v529);
        sub_B5D668(v531, 0LL);
      }
      v496->m_Items[4] = (System_String_o *)v530;
      sub_B5D560((BattleServantConfConponent_o *)&v496->m_Items[4], v530, v523, v524, v525, v526, v527, v528);
      v483 = System_String__Concat_44657912(v496, 0LL);
      if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
      }
      *(_QWORD *)&v563.fields.m_XMin = methoda.methodPointer;
      *(_QWORD *)&v563.fields.m_Width = methoda.invoker_method;
      UnityEngine_GUI__Label(v563, v483, 0LL);
      ++v479;
    }
    *((_DWORD *)&methoda.parameters + v477) = 1406;
    v477 = ++HIDWORD(methoda.parameters);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.rgctx_data,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( v477 )
    {
      v532 = v477 - 1;
      if ( *((_DWORD *)&methoda.return_type + v477 + 1) == 1406 )
      {
        --v477;
        HIDWORD(methoda.parameters) = v532;
      }
    }
    v92 = (MotionInfo_o *)MotionInfo_TypeInfo;
    v478 = v545 + 1;
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
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Int32_array **v11; // x20
  MotionInfo_c *v12; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int v14; // w1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x20
  MotionInfo_c *v22; // x0
  struct MotionInfo_StaticFields *v23; // x0
  int v24; // w1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  MotionInfo_c *v31; // x0
  System_Int32_array **v32; // x20
  struct MotionInfo_StaticFields *v33; // x0
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  MotionInfo_c *v37; // x0

  if ( (byte_42E743F & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E743F = 1;
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42E74E7 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, (_DWORD)v2, v3);
    byte_42E74E7 = 1;
  }
  v12 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v12 = MotionInfo_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->_VoiceServantId_k__BackingField = (struct System_String_o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->_VoiceServantId_k__BackingField,
    v11,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v21 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42E74E8 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v14, (_DWORD)v15, v16);
    byte_42E74E8 = 1;
  }
  v22 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v22 = MotionInfo_TypeInfo;
  }
  v23 = v22->static_fields;
  v23->_VoiceId_k__BackingField = (struct System_String_o *)v21;
  sub_B5D560((BattleServantConfConponent_o *)&v23->_VoiceId_k__BackingField, v21, v15, v16, v17, v18, v19, v20);
  if ( !byte_42E74E9 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v24, (_DWORD)v25, v26);
    byte_42E74E9 = 1;
  }
  v31 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v31 = MotionInfo_TypeInfo;
  }
  v31->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_42E74EA )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v24, (_DWORD)v25, v26);
    v31 = MotionInfo_TypeInfo;
    byte_42E74EA = 1;
  }
  if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = MotionInfo_TypeInfo;
  }
  v31->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v32 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42E74EB )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v24, (_DWORD)v25, v26);
    v31 = MotionInfo_TypeInfo;
    byte_42E74EB = 1;
  }
  if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = MotionInfo_TypeInfo;
  }
  v33 = v31->static_fields;
  v33->_VoiceType_k__BackingField = (struct System_String_o *)v32;
  sub_B5D560((BattleServantConfConponent_o *)&v33->_VoiceType_k__BackingField, v32, v25, v26, v27, v28, v29, v30);
  if ( !byte_42E74EC )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v34, v35, v36);
    byte_42E74EC = 1;
  }
  v37 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v37 = MotionInfo_TypeInfo;
  }
  v37->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_42E74ED )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v34, v35, v36);
    v37 = MotionInfo_TypeInfo;
    byte_42E74ED = 1;
  }
  if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = MotionInfo_TypeInfo;
  }
  v37->static_fields->_IsSe_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v4; // x0

  if ( (byte_42E7445 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E7445 = 1;
  }
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_42E74EE )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E74EE = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_IsRandom_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoicePlaybackLog(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  MotionInfo_c *v7; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *voicePlaybackLogList; // x0

  if ( (byte_42E7444 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___Clear__, v1, v2, v3);
    sub_B5D5C4(&MotionInfo_TypeInfo, v4, v5, v6);
    byte_42E7444 = 1;
  }
  v7 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v7 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v7->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    voicePlaybackLogList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_List_string___Clear__);
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

  if ( (byte_42E743C & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)svtName, (_DWORD)method, v3);
    byte_42E743C = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  static_fields = (BattleServantConfConponent_o *)v10->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)svtName;
  sub_B5D560(static_fields, (System_Int32_array **)svtName, (System_String_array **)method, v3, v4, v5, v6, v7);
  v12 = MotionInfo_TypeInfo->static_fields;
  v12->actionData = actionData;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  MotionInfo_c *v16; // x0
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x20
  int32_t size; // w9
  int32_t voicePlayLogLineSize; // w21
  System_Collections_Generic_List_string__o *v21; // x8
  struct MotionInfo_StaticFields *v22; // x8
  int32_t v23; // w21
  struct System_Collections_Generic_List_List_string___o *v24; // x22
  System_Collections_Generic_List_string__o *v25; // x8
  MotionInfo_c *v26; // x9
  __int16 v27; // w8
  int v28; // w9

  if ( (byte_42E7443 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___RemoveAt__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_string___get_Item__, v10, v11, v12);
    sub_B5D5C4(&MotionInfo_TypeInfo, v13, v14, v15);
    byte_42E7443 = 1;
  }
  v16 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
  }
  static_fields = v16->static_fields;
  voicePlaybackLogList = static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_35;
  if ( voicePlaybackLogList->fields._size < 1 )
    return;
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    static_fields = MotionInfo_TypeInfo->static_fields;
    voicePlaybackLogList = static_fields->voicePlaybackLogList;
    if ( !voicePlaybackLogList )
      goto LABEL_35;
  }
  size = voicePlaybackLogList->fields._size;
  voicePlayLogLineSize = static_fields->voicePlayLogLineSize;
  if ( !size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v21 = voicePlaybackLogList->fields._items->m_Items[size - 1];
  if ( !v21 )
LABEL_35:
    sub_B5D69C(v16, v1);
  v16 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v21->fields._size + voicePlayLogLineSize;
  while ( 1 )
  {
    v27 = WORD1(v16->vtable._0_Equals.methodPtr);
    if ( (v27 & 0x400) != 0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = MotionInfo_TypeInfo;
        v27 = WORD1(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr);
      }
      v28 = v27 & 0x400;
    }
    else
    {
      v28 = 0;
    }
    v22 = v16->static_fields;
    v23 = v22->voicePlayLogLineSize;
    if ( v23 < v22->voicePlaybackLogMaxNum )
      break;
    if ( v28 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v22 = MotionInfo_TypeInfo->static_fields;
      v23 = v22->voicePlayLogLineSize;
    }
    v24 = v22->voicePlaybackLogList;
    if ( !v24 )
      goto LABEL_35;
    if ( !v24->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v25 = v24->fields._items->m_Items[0];
    if ( !v25 )
      goto LABEL_35;
    v26 = MotionInfo_TypeInfo;
    MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v23 - v25->fields._size;
    v16 = (MotionInfo_c *)v26->static_fields->voicePlaybackLogList;
    if ( !v16 )
      goto LABEL_35;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v16,
      0,
      (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v16 = MotionInfo_TypeInfo;
  }
  if ( v28 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v23 = MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize;
    }
  }
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0LL) * v23);
}


bool __fastcall MotionInfo__get_IsRandom(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v4; // x0

  if ( (byte_42E7438 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E7438 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  return v4->static_fields->_IsRandom_k__BackingField;
}


bool __fastcall MotionInfo__get_IsSe(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v4; // x0

  if ( (byte_42E743A & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E743A = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  return v4->static_fields->_IsSe_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v4; // x0

  if ( (byte_42E7432 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E7432 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  return v4->static_fields->_VoiceId_k__BackingField;
}


int32_t __fastcall MotionInfo__get_VoiceIndex(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v4; // x0

  if ( (byte_42E7436 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E7436 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  return v4->static_fields->_VoiceIndex_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceServantId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v4; // x0

  if ( (byte_42E742C & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E742C = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  return v4->static_fields->_VoiceServantId_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceTotalWeight(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v4; // x0

  if ( (byte_42E7430 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E7430 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  return v4->static_fields->_VoiceTotalWeight_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceType(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v4; // x0

  if ( (byte_42E7434 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E7434 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  return v4->static_fields->_VoiceType_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceWeight(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v4; // x0

  if ( (byte_42E742E & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v1, v2, v3);
    byte_42E742E = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  return v4->static_fields->_VoiceWeight_k__BackingField;
}


void __fastcall MotionInfo__set_IsRandom(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v5; // x0

  if ( (byte_42E7439 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7439 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_IsRandom_k__BackingField = value;
}


void __fastcall MotionInfo__set_IsSe(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v5; // x0

  if ( (byte_42E743B & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E743B = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_IsSe_k__BackingField = value;
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

  if ( (byte_42E7433 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7433 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  MotionInfo_c *v5; // x0

  if ( (byte_42E7437 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7437 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceIndex_k__BackingField = value;
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

  if ( (byte_42E742D & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E742D = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_B5D560(
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
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  MotionInfo_c *v6; // x0

  if ( (byte_42E7431 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v2, v3, v4);
    byte_42E7431 = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceTotalWeight_k__BackingField = value;
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

  if ( (byte_42E7435 & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7435 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_B5D560(
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
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  MotionInfo_c *v6; // x0

  if ( (byte_42E742F & 1) == 0 )
  {
    sub_B5D5C4(&MotionInfo_TypeInfo, v2, v3, v4);
    byte_42E742F = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceWeight_k__BackingField = value;
}