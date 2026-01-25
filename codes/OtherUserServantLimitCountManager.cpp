void OtherUserServantLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA7BD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TypeInfo);
    sub_1C7BAE8(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CEA7BD = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData___ctor__);
  OtherUserServantLimitCountManager_TypeInfo->static_fields->dicServant = (struct System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)OtherUserServantLimitCountManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void OtherUserServantLimitCountManager__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserServantLimitCountManager_c *v2; // x0
  System_Collections_Generic_Dictionary_object__object__o *dicServant; // x0

  if ( (byte_4CEA7B8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__Clear__);
    sub_1C7BAE8(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CEA7B8 = 1;
  }
  v2 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
    v2 = OtherUserServantLimitCountManager_TypeInfo;
  }
  dicServant = (System_Collections_Generic_Dictionary_object__object__o *)v2->static_fields->dicServant;
  if ( !dicServant )
    sub_1C7BD40(0, v1);
  System_Collections_Generic_Dictionary_object__object___Clear(
    dicServant,
    (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__Clear__);
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
  int32_t v15; // w25
  int32_t v16; // w26
  const MethodInfo *v17; // x3
  int32_t OptionAfter; // w24
  const MethodInfo *v19; // x3
  int32_t v20; // w23
  const MethodInfo *v21; // x3
  int32_t v22; // w22
  const MethodInfo *v23; // x3
  int32_t v24; // w21
  const MethodInfo *v25; // x3
  int32_t v26; // w19
  __int64 v27; // x20
  int32_t maxLimitCountStageHasReward[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEA7BB & 1) == 0 )
  {
    sub_1C7BAE8(&OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
    sub_1C7BAE8(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CEA7BB = 1;
  }
  *(_QWORD *)maxLimitCountStageHasReward = 0;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  OtherUserServantLimitCountManager__GetMaxLimitCountStage(
    svtId,
    limitCount,
    &maxLimitCountStageHasReward[1],
    maxLimitCountStageHasReward,
    *(const MethodInfo **)&portraitStage);
  v16 = maxLimitCountStageHasReward[0];
  v15 = maxLimitCountStageHasReward[1];
  OptionAfter = OtherUserServantLimitCountManager__GetOptionAfter(svtId, dispStage, maxLimitCountStageHasReward[1], v17);
  v20 = OtherUserServantLimitCountManager__GetOptionAfter(svtId, commandCardStage, v15, v19);
  v22 = OtherUserServantLimitCountManager__GetOptionAfter(svtId, portraitStage, v15, v21);
  v24 = OtherUserServantLimitCountManager__GetOptionAfter(svtId, imageStage, v16, v23);
  v26 = OtherUserServantLimitCountManager__GetOptionAfter(svtId, iconStage, v16, v25);
  v27 = sub_1C7BD34(OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0);
  *(_DWORD *)(v27 + 16) = v15;
  *(_DWORD *)(v27 + 20) = v16;
  *(_DWORD *)(v27 + 24) = OptionAfter;
  *(_DWORD *)(v27 + 28) = v20;
  *(_DWORD *)(v27 + 32) = v22;
  *(_DWORD *)(v27 + 36) = v24;
  *(_DWORD *)(v27 + 40) = v26;
  return (OtherUserServantLimitCountManager_LimitCountStageData_o *)v27;
}


OtherUserServantLimitCountManager_LimitCountStageData_o *OtherUserServantLimitCountManager__CreateLimitCountStageData_35647256(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *randomLimitCountTargets,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_Int32_array *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  System_Func_int__bool__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_int__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x19
  __int64 v16; // x0
  int32_t v17; // w19
  bool IsRewardStage; // w0
  int32_t v19; // w22
  int v20; // w23
  int v21; // w21
  __int64 v22; // x20
  int32_t maxLimitCountStage; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CEA7BC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
    sub_1C7BAE8(&OtherUserServantLimitCountManager_TypeInfo);
    sub_1C7BAE8(&Method_OtherUserServantLimitCountManager___c__DisplayClass6_0__CreateLimitCountStageData_b__0__);
    sub_1C7BAE8(&Method_OtherUserServantLimitCountManager___c__DisplayClass6_0__CreateLimitCountStageData_b__1__);
    sub_1C7BAE8(&OtherUserServantLimitCountManager___c__DisplayClass6_0_TypeInfo);
    byte_4CEA7BC = 1;
  }
  maxLimitCountStage = 0;
  v7 = sub_1C7BD34(OtherUserServantLimitCountManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_DWORD *)(v7 + 20) = svtId;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  OtherUserServantLimitCountManager__GetMaxLimitCountStage(
    svtId,
    limitCount,
    &maxLimitCountStage,
    (int32_t *)(v7 + 16),
    v10);
  v11 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_OtherUserServantLimitCountManager___c__DisplayClass6_0__CreateLimitCountStageData_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)randomLimitCountTargets,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  v13 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_OtherUserServantLimitCountManager___c__DisplayClass6_0__CreateLimitCountStageData_b__1__,
    0);
  v14 = System_Linq_Enumerable__Where_int_(
          v12,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v14,
         (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v8 )
LABEL_9:
    sub_1C7BD40(v8, v9);
  v15 = v8;
  v16 = UnityEngine_Random__Range_71829860(0, v8->max_length, 0);
  if ( (unsigned int)v16 >= LODWORD(v15->max_length) )
    sub_1C7BD48(v16);
  v17 = v15->m_Items[(int)v16];
  IsRewardStage = LimitCountUtility__IsRewardStage(v17, 0);
  v19 = maxLimitCountStage;
  v20 = *(_DWORD *)(v7 + 16);
  v21 = v17 - IsRewardStage;
  v22 = sub_1C7BD34(OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0);
  *(_DWORD *)(v22 + 16) = v19;
  *(_DWORD *)(v22 + 20) = v20;
  *(_DWORD *)(v22 + 24) = v21;
  *(_DWORD *)(v22 + 28) = v21;
  *(_DWORD *)(v22 + 36) = v17;
  *(_DWORD *)(v22 + 40) = v17;
  *(_DWORD *)(v22 + 32) = v21;
  return (OtherUserServantLimitCountManager_LimitCountStageData_o *)v22;
}


System_String_o *OtherUserServantLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int64_t v8; // [xsp+0h] [xbp-40h] BYREF
  int64_t v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEA7B9 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25433/*"{0}:{1}"*/);
    byte_4CEA7B9 = 1;
  }
  v9 = userId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v9);
  v8 = userSvtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v8);
  return System_String__Format_64218220((System_String_o *)StringLiteral_25433/*"{0}:{1}"*/, v5, v6, 0);
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
  struct System_Int32_array *randomLimitCountTargets; // x8
  _BOOL4 v8; // w23
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w0
  const MethodInfo *v12; // x3
  int32_t limitCount; // w21
  int32_t v14; // w22
  int32_t DispLimitCountStage; // w23
  int32_t CommandCardLimitCountStage; // w24
  int32_t PortraitLimitCountStage; // w25
  int32_t ImageLimitCountStage; // w26
  const MethodInfo *v19; // x7
  int32_t IconLimitCountStage; // w20
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  System_Int32_array *v22; // x20
  Il2CppObject *v23; // x8
  OtherUserServantLimitCountManager_c *v24; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v3 = info;
  if ( (byte_4CEA7BA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__set_Item__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    info = (ServantLeaderInfo_o *)sub_1C7BAE8(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4CEA7BA = 1;
  }
  value = 0;
  if ( !v3 )
    goto LABEL_25;
  userId = v3->fields.userId;
  userSvtId = v3->fields.userSvtId;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  info = (ServantLeaderInfo_o *)OtherUserServantLimitCountManager__GenerateKey(userId, userSvtId, v2);
  if ( !OtherUserServantLimitCountManager_TypeInfo->static_fields->dicServant )
    goto LABEL_25;
  v6 = (Il2CppObject *)info;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)OtherUserServantLimitCountManager_TypeInfo->static_fields->dicServant,
          (Il2CppObject *)info,
          &value,
          (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TryGetValue__) )
  {
    randomLimitCountTargets = v3->fields.randomLimitCountTargets;
    if ( randomLimitCountTargets )
      v8 = LODWORD(randomLimitCountTargets->max_length) == 0;
    else
      v8 = 1;
    v10 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v10;
    *(_QWORD *)&v27.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
    limitCount = v3->fields.limitCount;
    v14 = v11;
    if ( v8 )
    {
      DispLimitCountStage = ServantLeaderInfo__get_DispLimitCountStage(v3, 0);
      CommandCardLimitCountStage = ServantLeaderInfo__get_CommandCardLimitCountStage(v3, 0);
      PortraitLimitCountStage = ServantLeaderInfo__get_PortraitLimitCountStage(v3, 0);
      ImageLimitCountStage = ServantLeaderInfo__get_ImageLimitCountStage(v3, 0);
      IconLimitCountStage = ServantLeaderInfo__get_IconLimitCountStage(v3, 0);
      if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
      LimitCountStageData = OtherUserServantLimitCountManager__CreateLimitCountStageData(
                              v14,
                              limitCount,
                              DispLimitCountStage,
                              CommandCardLimitCountStage,
                              PortraitLimitCountStage,
                              ImageLimitCountStage,
                              IconLimitCountStage,
                              v19);
    }
    else
    {
      v22 = v3->fields.randomLimitCountTargets;
      if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
      LimitCountStageData = OtherUserServantLimitCountManager__CreateLimitCountStageData_35647256(
                              v14,
                              limitCount,
                              v22,
                              v12);
    }
    v23 = (Il2CppObject *)LimitCountStageData;
    v24 = OtherUserServantLimitCountManager_TypeInfo;
    value = v23;
    if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
      v24 = OtherUserServantLimitCountManager_TypeInfo;
    }
    info = (ServantLeaderInfo_o *)v24->static_fields->dicServant;
    if ( info )
    {
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)info,
        v6,
        value,
        (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__set_Item__);
      return (OtherUserServantLimitCountManager_LimitCountStageData_o *)value;
    }
LABEL_25:
    sub_1C7BD40(info, method);
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
        const MethodInfo *method)
{
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( LimitCountUtility__CheckOption(svtId, limitCountStage, 0) )
      return limitCountStage;
    else
      return maxLimitCountStage;
  }
  else if ( limitCountStage <= maxLimitCountStage )
  {
    return limitCountStage;
  }
  else
  {
    return maxLimitCountStage;
  }
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


void OtherUserServantLimitCountManager_LimitCountStageData___ctor_35648112(
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


void OtherUserServantLimitCountManager___c__DisplayClass6_0___ctor(
        OtherUserServantLimitCountManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool OtherUserServantLimitCountManager___c__DisplayClass6_0___CreateLimitCountStageData_b__0(
        OtherUserServantLimitCountManager___c__DisplayClass6_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return LimitCountUtility__IsCostume(e, 0) || this->fields.maxLimitCountStageHasReward >= e;
}


bool OtherUserServantLimitCountManager___c__DisplayClass6_0___CreateLimitCountStageData_b__1(
        OtherUserServantLimitCountManager___c__DisplayClass6_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return LimitCountUtility__CheckOption(this->fields.svtId, e, 0);
}