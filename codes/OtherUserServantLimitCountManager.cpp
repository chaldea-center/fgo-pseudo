void OtherUserServantLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  struct OtherUserServantLimitCountManager_StaticFields *static_fields; // x0
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  if ( (byte_596BB11 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TypeInfo);
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596BB11 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData___ctor__);
  static_fields = OtherUserServantLimitCountManager_TypeInfo->static_fields;
  static_fields->dicServant = (struct System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__o *)v1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->dicServant, (int32_t)v1, v3, v4, v5, v6, v7, v8);
}


void OtherUserServantLimitCountManager__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OtherUserServantLimitCountManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *dicServant; // x0

  if ( (byte_596BB09 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__Clear__);
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596BB09 = 1;
  }
  v3 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v1, v2);
    v3 = OtherUserServantLimitCountManager_TypeInfo;
  }
  dicServant = (System_Collections_Generic_Dictionary_object__object__o *)v3->static_fields->dicServant;
  if ( !dicServant )
    sub_2213CDC(0, v1);
  System_Collections_Generic_Dictionary_object__object___Clear(
    dicServant,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__Clear__);
}


// local variable allocation has failed, the output may be wrong!
OtherUserServantLimitCountManager_LimitCountStageData_o *OtherUserServantLimitCountManager__CreateLimitCountStageData(
        int32_t svtId,
        int32_t limitCount,
        int32_t dispStage,
        int32_t commandCardStage,
        int32_t portraitStage,
        int32_t imageStage,
        int32_t iconStage,
        const MethodInfo *method)
{
  int32_t v15; // w24
  int32_t SupportLimitCountGroup; // w27
  const MethodInfo *v17; // x6
  int32_t OptionAfter; // w26
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x6
  int32_t v24; // w28
  int32_t v25; // w25
  const MethodInfo *v26; // x6
  int32_t v27; // w23
  const MethodInfo *v28; // x6
  int32_t v29; // w22
  const MethodInfo *v30; // x6
  int32_t v31; // w19
  __int64 v32; // x20
  OtherUserServantLimitCountManager_LimitCountStageData_o *result; // x0
  int32_t maxLimitCountStageHasReward[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596BB0C & 1) == 0 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596BB0C = 1;
  }
  *(_QWORD *)maxLimitCountStageHasReward = 0;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      OtherUserServantLimitCountManager_TypeInfo,
      *(_QWORD *)&limitCount,
      *(_QWORD *)&dispStage);
  OtherUserServantLimitCountManager__GetMaxLimitCountStage(
    svtId,
    limitCount,
    &maxLimitCountStageHasReward[1],
    maxLimitCountStageHasReward,
    *(const MethodInfo **)&portraitStage);
  v15 = maxLimitCountStageHasReward[1];
  SupportLimitCountGroup = -1;
  OptionAfter = OtherUserServantLimitCountManager__GetOptionAfter(
                  svtId,
                  dispStage,
                  maxLimitCountStageHasReward[1],
                  limitCount,
                  0,
                  -1,
                  v17);
  if ( OtherUserServantLimitCountManager__IsEnableSupportLimitCountToDispLimitCount(svtId, v19) )
  {
    if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v20, v21);
    SupportLimitCountGroup = OtherUserServantLimitCountManager__GetSupportLimitCountGroup(
                               svtId,
                               limitCount,
                               OptionAfter,
                               v22);
  }
  v24 = maxLimitCountStageHasReward[0];
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v20, v21);
  v25 = OtherUserServantLimitCountManager__GetOptionAfter(
          svtId,
          commandCardStage,
          v15,
          limitCount,
          OptionAfter,
          SupportLimitCountGroup,
          v23);
  v27 = OtherUserServantLimitCountManager__GetOptionAfter(
          svtId,
          portraitStage,
          v15,
          limitCount,
          OptionAfter,
          SupportLimitCountGroup,
          v26);
  v29 = OtherUserServantLimitCountManager__GetOptionAfter(
          svtId,
          imageStage,
          v24,
          limitCount,
          OptionAfter,
          SupportLimitCountGroup,
          v28);
  v31 = OtherUserServantLimitCountManager__GetOptionAfter(
          svtId,
          iconStage,
          v24,
          limitCount,
          OptionAfter,
          SupportLimitCountGroup,
          v30);
  v32 = sub_2213CCC(OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0);
  *(_DWORD *)(v32 + 16) = v15;
  *(_DWORD *)(v32 + 20) = v24;
  result = (OtherUserServantLimitCountManager_LimitCountStageData_o *)v32;
  *(_DWORD *)(v32 + 24) = OptionAfter;
  *(_DWORD *)(v32 + 28) = v25;
  *(_DWORD *)(v32 + 32) = v27;
  *(_DWORD *)(v32 + 36) = v29;
  *(_DWORD *)(v32 + 40) = v31;
  return result;
}


OtherUserServantLimitCountManager_LimitCountStageData_o *OtherUserServantLimitCountManager__CreateLimitCountStageData_40465756(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *randomLimitCountTargets,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Int32_array *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x4
  OtherUserServantLimitCountManager_c *v12; // x0
  int v13; // w8
  System_Func_int__bool__o *v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  System_Func_int__bool__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Int32_array *v18; // x21
  __int64 v19; // x0
  int32_t v20; // w21
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  int32_t v23; // w23
  int32_t v24; // w22
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  int32_t v28; // w23
  int32_t SupportLimitCountGroup; // w23
  const MethodInfo *v30; // x3
  int32_t v31; // w23
  int v32; // w20
  __int64 v33; // x19
  OtherUserServantLimitCountManager_LimitCountStageData_o *result; // x0
  int32_t maxLimitCountStage; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596BB0D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    sub_2213A60(&Method_OtherUserServantLimitCountManager___c__DisplayClass10_0__CreateLimitCountStageData_b__0__);
    sub_2213A60(&Method_OtherUserServantLimitCountManager___c__DisplayClass10_0__CreateLimitCountStageData_b__1__);
    sub_2213A60(&OtherUserServantLimitCountManager___c__DisplayClass10_0_TypeInfo);
    byte_596BB0D = 1;
  }
  maxLimitCountStage = 0;
  v7 = sub_2213CCC(OtherUserServantLimitCountManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  v12 = OtherUserServantLimitCountManager_TypeInfo;
  v13 = *(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v7 + 20) = svtId;
  if ( !v13 )
    j_il2cpp_runtime_class_init_0(v12, v9, v10);
  OtherUserServantLimitCountManager__GetMaxLimitCountStage(
    svtId,
    limitCount,
    &maxLimitCountStage,
    (int32_t *)(v7 + 16),
    v11);
  v14 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_OtherUserServantLimitCountManager___c__DisplayClass10_0__CreateLimitCountStageData_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)randomLimitCountTargets,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v16 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v7,
    Method_OtherUserServantLimitCountManager___c__DisplayClass10_0__CreateLimitCountStageData_b__1__,
    0);
  v17 = System_Linq_Enumerable__Where_int_(
          v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v17,
         (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v8 )
LABEL_18:
    sub_2213CDC(v8, v9);
  v18 = v8;
  v19 = UnityEngine_Random__Range_83400680(0, v8->max_length, 0);
  if ( (unsigned int)v19 >= LODWORD(v18->max_length) )
    sub_2213CE4(v19);
  v20 = v18->m_Items[(int)v19];
  if ( LimitCountUtility__IsRewardStage(v20, 0) )
  {
    v23 = *(_DWORD *)(v7 + 20);
    v24 = v20 - 1;
    if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v21, v22);
    if ( OtherUserServantLimitCountManager__IsEnableSupportLimitCountToDispLimitCount(v23, v21) )
    {
      v28 = *(_DWORD *)(v7 + 20);
      if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v25, v26);
      SupportLimitCountGroup = OtherUserServantLimitCountManager__GetSupportLimitCountGroup(v28, limitCount, v24, v27);
      if ( SupportLimitCountGroup != OtherUserServantLimitCountManager__GetSupportLimitCountGroup(
                                       *(_DWORD *)(v7 + 20),
                                       limitCount,
                                       v20,
                                       v30) )
        --v20;
    }
  }
  else
  {
    v24 = v20;
  }
  v31 = maxLimitCountStage;
  v32 = *(_DWORD *)(v7 + 16);
  v33 = sub_2213CCC(OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0);
  *(_DWORD *)(v33 + 16) = v31;
  *(_DWORD *)(v33 + 20) = v32;
  result = (OtherUserServantLimitCountManager_LimitCountStageData_o *)v33;
  *(_DWORD *)(v33 + 24) = v24;
  *(_DWORD *)(v33 + 28) = v24;
  *(_DWORD *)(v33 + 36) = v20;
  *(_DWORD *)(v33 + 40) = v20;
  *(_DWORD *)(v33 + 32) = v24;
  return result;
}


System_String_o *OtherUserServantLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int64_t v8; // [xsp+8h] [xbp-38h] BYREF
  int64_t v9; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596BB0A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26573/*"{0}:{1}"*/);
    byte_596BB0A = 1;
  }
  v9 = userId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v9);
  v8 = userSvtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v8);
  return System_String__Format_75697880((System_String_o *)StringLiteral_26573/*"{0}:{1}"*/, v5, v6, 0);
}


OtherUserServantLimitCountManager_LimitCountStageData_o *OtherUserServantLimitCountManager__GetLimitCountStageData(
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantLeaderInfo_o *v3; // x20
  int64_t userId; // x19
  int64_t userSvtId; // x21
  Il2CppObject *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *randomLimitCountTargets; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  int32_t limitCount; // w21
  int32_t v17; // w23
  System_Int32_array *v18; // x22
  Il2CppObject *LimitCountStageData_40465756; // x0
  __int64 v20; // x2
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w0
  int32_t v24; // w21
  int32_t v25; // w22
  int32_t DispLimitCountStage; // w23
  int32_t CommandCardLimitCountStage; // w24
  int32_t PortraitLimitCountStage; // w25
  int32_t ImageLimitCountStage; // w26
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x7
  int32_t IconLimitCountStage; // w27
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  __int64 v35; // x2
  struct AfterTransformSvtInfo_o *v36; // x24
  int64_t v37; // x22
  __int64 v38; // x23
  struct System_Int32_array *v39; // x8
  Il2CppObject *v40; // x21
  int32_t v41; // w0
  __int64 v42; // x1
  __int64 v43; // x2
  const MethodInfo *v44; // x3
  int32_t v45; // w20
  int32_t v46; // w23
  System_Int32_array *v47; // x22
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w0
  __int64 v55; // x1
  __int64 v56; // x2
  const MethodInfo *v57; // x7
  int32_t v58; // w22
  int32_t v59; // w27
  int32_t imageLimitCount; // w23
  int32_t dispLimitCount; // w25
  int32_t commandCardLimitCount; // w26
  int32_t v63; // w20
  int32_t iconLimitCount; // w24
  int32_t *p_iconLimitCount; // t2
  OtherUserServantLimitCountManager_c *v66; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  v3 = info;
  if ( (byte_596BB0B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__set_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    info = (ServantLeaderInfo_o *)sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596BB0B = 1;
  }
  value = 0;
  if ( !v3 )
    goto LABEL_43;
  userId = v3->fields.userId;
  userSvtId = v3->fields.userSvtId;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, method, v2);
  info = (ServantLeaderInfo_o *)OtherUserServantLimitCountManager__GenerateKey(userId, userSvtId, v2);
  if ( !OtherUserServantLimitCountManager_TypeInfo->static_fields->dicServant )
    goto LABEL_43;
  v6 = (Il2CppObject *)info;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)OtherUserServantLimitCountManager_TypeInfo->static_fields->dicServant,
          (Il2CppObject *)info,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TryGetValue__) )
  {
    randomLimitCountTargets = v3->fields.randomLimitCountTargets;
    if ( randomLimitCountTargets && LODWORD(randomLimitCountTargets->max_length) )
    {
      v10 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
      *(_QWORD *)&v69.fields.currentCryptoKey = v10;
      *(_QWORD *)&v69.fields.fakeValue = v11;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v69, 0);
      limitCount = v3->fields.limitCount;
      v17 = v12;
      v18 = v3->fields.randomLimitCountTargets;
      if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v13, v14);
      LimitCountStageData_40465756 = (Il2CppObject *)OtherUserServantLimitCountManager__CreateLimitCountStageData_40465756(
                                                       v17,
                                                       limitCount,
                                                       v18,
                                                       v15);
    }
    else
    {
      v21 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
      *(_QWORD *)&v70.fields.currentCryptoKey = v21;
      *(_QWORD *)&v70.fields.fakeValue = v22;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v70, 0);
      v24 = v3->fields.limitCount;
      v25 = v23;
      DispLimitCountStage = ServantLeaderInfo__get_DispLimitCountStage(v3, 0);
      CommandCardLimitCountStage = ServantLeaderInfo__get_CommandCardLimitCountStage(v3, 0);
      PortraitLimitCountStage = ServantLeaderInfo__get_PortraitLimitCountStage(v3, 0);
      ImageLimitCountStage = ServantLeaderInfo__get_ImageLimitCountStage(v3, 0);
      IconLimitCountStage = ServantLeaderInfo__get_IconLimitCountStage(v3, 0);
      if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v30, v31);
      LimitCountStageData_40465756 = (Il2CppObject *)OtherUserServantLimitCountManager__CreateLimitCountStageData(
                                                       v25,
                                                       v24,
                                                       DispLimitCountStage,
                                                       CommandCardLimitCountStage,
                                                       PortraitLimitCountStage,
                                                       ImageLimitCountStage,
                                                       IconLimitCountStage,
                                                       v32);
    }
    afterTransformSvtInfo = v3->fields.afterTransformSvtInfo;
    value = LimitCountStageData_40465756;
    if ( afterTransformSvtInfo && ServantLeaderInfo__get_IsSaveTransformServant(v3, 0) )
    {
      info = (ServantLeaderInfo_o *)ServantLeaderInfo__get_SaveTransformServantEntity(v3, 0);
      if ( !info )
        goto LABEL_43;
      v36 = v3->fields.afterTransformSvtInfo;
      if ( !v36 )
        goto LABEL_43;
      v38 = *(_QWORD *)&info->fields.supportDeckId;
      v37 = info->fields.userId;
      v39 = v36->fields.randomLimitCountTargets;
      v40 = value;
      if ( v39 && LODWORD(v39->max_length) )
      {
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v35);
        *(_QWORD *)&v71.fields.currentCryptoKey = v38;
        *(_QWORD *)&v71.fields.fakeValue = v37;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v71, 0);
        v45 = v3->fields.limitCount;
        v46 = v41;
        v47 = v36->fields.randomLimitCountTargets;
        if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v42, v43);
        info = (ServantLeaderInfo_o *)OtherUserServantLimitCountManager__CreateLimitCountStageData_40465756(
                                        v46,
                                        v45,
                                        v47,
                                        v44);
      }
      else
      {
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v35);
        *(_QWORD *)&v72.fields.currentCryptoKey = v38;
        *(_QWORD *)&v72.fields.fakeValue = v37;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v72, 0);
        v58 = v3->fields.limitCount;
        v59 = v54;
        imageLimitCount = v36->fields.imageLimitCount;
        dispLimitCount = v36->fields.dispLimitCount;
        commandCardLimitCount = v36->fields.commandCardLimitCount;
        p_iconLimitCount = &v36->fields.iconLimitCount;
        iconLimitCount = v36->fields.iconLimitCount;
        v63 = p_iconLimitCount[1];
        if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v55, v56);
        info = (ServantLeaderInfo_o *)OtherUserServantLimitCountManager__CreateLimitCountStageData(
                                        v59,
                                        v58,
                                        dispLimitCount,
                                        commandCardLimitCount,
                                        v63,
                                        imageLimitCount,
                                        iconLimitCount,
                                        v57);
      }
      method = (const MethodInfo *)info;
      if ( !v40 )
        goto LABEL_43;
      v40[3].klass = (Il2CppClass *)info;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40[3], (int32_t)info, v48, v49, v50, v51, v52, v53);
    }
    v66 = OtherUserServantLimitCountManager_TypeInfo;
    if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, method, v20);
      v66 = OtherUserServantLimitCountManager_TypeInfo;
    }
    info = (ServantLeaderInfo_o *)v66->static_fields->dicServant;
    if ( info )
    {
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)info,
        v6,
        value,
        (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__set_Item__);
      return (OtherUserServantLimitCountManager_LimitCountStageData_o *)value;
    }
LABEL_43:
    sub_2213CDC(info, method);
  }
  return (OtherUserServantLimitCountManager_LimitCountStageData_o *)value;
}


void OtherUserServantLimitCountManager__GetMaxLimitCountStage(
        int32_t svtId,
        int32_t limitCount,
        int32_t *maxLimitCountStage,
        int32_t *maxLimitCountStageHasReward,
        const MethodInfo *method)
{
  int32_t v9; // w0
  int32_t OptionAfter; // w0

  v9 = LimitCountUtility__ConvertLimitCountToStage(limitCount, 1, 0);
  *maxLimitCountStageHasReward = v9;
  OptionAfter = LimitCountUtility__GetOptionAfter(svtId, limitCount, v9, 1, 0);
  *maxLimitCountStageHasReward = OptionAfter;
  *maxLimitCountStage = OptionAfter;
  if ( LimitCountUtility__IsRewardStage(OptionAfter, 0) )
    --*maxLimitCountStage;
}


int32_t OtherUserServantLimitCountManager__GetOptionAfter(
        int32_t svtId,
        int32_t limitCountStage,
        int32_t maxLimitCountStage,
        int32_t limitCount,
        int32_t dispStage,
        int32_t dispStageLimitCountGroup,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  ServantCostumeMaster_o *Master_object; // x0
  int32_t SupportBaseLimitCount; // w0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596BB0E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596BB0E = 1;
  }
  entity = 0;
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !LimitCountUtility__CheckOption(svtId, limitCountStage, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
      Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( Master_object )
      {
        if ( !ServantCostumeMaster__TryGetEntity(Master_object, &entity, svtId, limitCountStage, 0) )
        {
          SupportBaseLimitCount = 0;
LABEL_20:
          if ( SupportBaseLimitCount >= maxLimitCountStage || SupportBaseLimitCount <= 0 )
            limitCountStage = maxLimitCountStage;
          else
            limitCountStage = SupportBaseLimitCount;
          if ( dispStageLimitCountGroup < 0 )
            return limitCountStage;
          goto LABEL_14;
        }
        Master_object = (ServantCostumeMaster_o *)entity;
        if ( entity )
        {
          SupportBaseLimitCount = ServantCostumeEntity__GetSupportBaseLimitCount(entity, 0);
          goto LABEL_20;
        }
      }
      sub_2213CDC(Master_object, v13);
    }
  }
  else if ( limitCountStage >= maxLimitCountStage )
  {
    limitCountStage = maxLimitCountStage;
  }
  if ( dispStageLimitCountGroup < 0 )
    return limitCountStage;
LABEL_14:
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v13, v14);
  if ( OtherUserServantLimitCountManager__GetSupportLimitCountGroup(svtId, limitCount, limitCountStage, v15) != dispStageLimitCountGroup )
    return dispStage;
  return limitCountStage;
}


int32_t OtherUserServantLimitCountManager__GetSupportLimitCountGroup(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCountStage,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  ServantCostumeMaster_o *Master_object; // x0
  __int64 v10; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w20
  ServantCostumeEntity_o *v15; // [xsp+0h] [xbp-40h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596BB10 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596BB10 = 1;
  }
  v15 = 0;
  entity = 0;
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
    if ( !Master_object )
      goto LABEL_18;
    if ( ServantCostumeMaster__TryGetEntity(Master_object, &v15, svtId, limitCountStage, 0) )
    {
      Master_object = (ServantCostumeMaster_o *)v15;
      if ( v15 )
        return ServantCostumeEntity__GetSupportLimitCountGroup(v15, 0);
LABEL_18:
      sub_2213CDC(Master_object, v10);
    }
    return 0;
  }
  v14 = LimitCountUtility__ConvertStageToLimitCount(limitCount, limitCountStage, 1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Master_object, &entity, svtId, v14, 0) )
    return 0;
  Master_object = (ServantCostumeMaster_o *)entity;
  if ( !entity )
    goto LABEL_18;
  return ServantLimitAddEntity__GetSupportLimitCountGroup(entity, 0);
}


bool OtherUserServantLimitCountManager__IsEnableSupportLimitCountToDispLimitCount(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  OtherUserServantLimitCountManager_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_596BB0F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596BB0F = 1;
  }
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, method, v2);
  if ( !byte_596BB4C )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596BB4C = 1;
  }
  v4 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, method, v2);
    v4 = OtherUserServantLimitCountManager_TypeInfo;
  }
  if ( !v4->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField )
    return 0;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  if ( OptionManager__GetSupportLimitCountToDispLimitCountSetting(0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v9);
  return ServantMaster__IsEnableSupportLimitCountToDispLimitCount((ServantMaster_o *)Master_object, svtId, 0);
}


bool OtherUserServantLimitCountManager__get_IsEnableAdjustSupportLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OtherUserServantLimitCountManager_c *v3; // x0

  if ( (byte_596BB07 & 1) == 0 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596BB07 = 1;
  }
  v3 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v1, v2);
    v3 = OtherUserServantLimitCountManager_TypeInfo;
  }
  return v3->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField;
}


void OtherUserServantLimitCountManager__set_IsEnableAdjustSupportLimitCount(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  OtherUserServantLimitCountManager_c *v4; // x0

  if ( (byte_596BB08 & 1) == 0 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_596BB08 = 1;
  }
  v4 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, method, v2);
    v4 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v4->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = value;
}


void OtherUserServantLimitCountManager_LimitCountStageData___ctor(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        int32_t max,
        int32_t maxHasReward,
        int32_t dispStage,
        int32_t commandCardStage,
        int32_t portraitStage,
        int32_t imageStage,
        int32_t iconStage,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Max_k__BackingField = max;
  this->fields._MaxHasReward_k__BackingField = maxHasReward;
  this->fields._DispStage_k__BackingField = dispStage;
  this->fields._CommandCardStage_k__BackingField = commandCardStage;
  this->fields._PortraitStage_k__BackingField = portraitStage;
  this->fields._ImageStage_k__BackingField = imageStage;
  this->fields._IconStage_k__BackingField = iconStage;
}


void OtherUserServantLimitCountManager_LimitCountStageData___ctor_40467588(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        int32_t max,
        int32_t maxHasReward,
        int32_t stage,
        int32_t stageHasReward,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Max_k__BackingField = max;
  this->fields._MaxHasReward_k__BackingField = maxHasReward;
  this->fields._DispStage_k__BackingField = stage;
  this->fields._CommandCardStage_k__BackingField = stage;
  this->fields._ImageStage_k__BackingField = stageHasReward;
  this->fields._IconStage_k__BackingField = stageHasReward;
  this->fields._PortraitStage_k__BackingField = stage;
}


int32_t OtherUserServantLimitCountManager_LimitCountStageData__GetMax(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        bool hasRewardStage,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 16;
  if ( hasRewardStage )
    v3 = 20;
  return *(_DWORD *)((char *)&this->klass + v3);
}


OtherUserServantLimitCountManager_LimitCountStageData_o *OtherUserServantLimitCountManager_LimitCountStageData__get_AfterTransform(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._AfterTransform_k__BackingField;
}


int32_t OtherUserServantLimitCountManager_LimitCountStageData__get_CommandCardStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCardStage_k__BackingField;
}


int32_t OtherUserServantLimitCountManager_LimitCountStageData__get_DispStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._DispStage_k__BackingField;
}


int32_t OtherUserServantLimitCountManager_LimitCountStageData__get_IconStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._IconStage_k__BackingField;
}


int32_t OtherUserServantLimitCountManager_LimitCountStageData__get_ImageStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._ImageStage_k__BackingField;
}


int32_t OtherUserServantLimitCountManager_LimitCountStageData__get_Max(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Max_k__BackingField;
}


int32_t OtherUserServantLimitCountManager_LimitCountStageData__get_MaxHasReward(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._MaxHasReward_k__BackingField;
}


int32_t OtherUserServantLimitCountManager_LimitCountStageData__get_PortraitStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._PortraitStage_k__BackingField;
}


void OtherUserServantLimitCountManager_LimitCountStageData__set_AfterTransform(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        OtherUserServantLimitCountManager_LimitCountStageData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AfterTransform_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AfterTransform_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void OtherUserServantLimitCountManager_LimitCountStageData__set_CommandCardStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandCardStage_k__BackingField = value;
}


void OtherUserServantLimitCountManager_LimitCountStageData__set_DispStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DispStage_k__BackingField = value;
}


void OtherUserServantLimitCountManager_LimitCountStageData__set_IconStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IconStage_k__BackingField = value;
}


void OtherUserServantLimitCountManager_LimitCountStageData__set_ImageStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ImageStage_k__BackingField = value;
}


void OtherUserServantLimitCountManager_LimitCountStageData__set_Max(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Max_k__BackingField = value;
}


void OtherUserServantLimitCountManager_LimitCountStageData__set_MaxHasReward(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MaxHasReward_k__BackingField = value;
}


void OtherUserServantLimitCountManager_LimitCountStageData__set_PortraitStage(
        OtherUserServantLimitCountManager_LimitCountStageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PortraitStage_k__BackingField = value;
}


void OtherUserServantLimitCountManager___c__DisplayClass10_0___ctor(
        OtherUserServantLimitCountManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool OtherUserServantLimitCountManager___c__DisplayClass10_0___CreateLimitCountStageData_b__0(
        OtherUserServantLimitCountManager___c__DisplayClass10_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return LimitCountUtility__IsCostume(e, 0) || this->fields.maxLimitCountStageHasReward >= e;
}


bool OtherUserServantLimitCountManager___c__DisplayClass10_0___CreateLimitCountStageData_b__1(
        OtherUserServantLimitCountManager___c__DisplayClass10_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return LimitCountUtility__CheckOption(this->fields.svtId, e, 0);
}