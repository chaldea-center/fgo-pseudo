void OtherUserServantLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  struct OtherUserServantLimitCountManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  if ( (byte_4E72DB3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TypeInfo);
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E72DB3 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_3600C34 *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData___ctor__);
  static_fields = OtherUserServantLimitCountManager_TypeInfo->static_fields;
  static_fields->dicServant = (struct System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__o *)v1;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->dicServant, (int32_t)v1, v3, v4, v5, v6, v7, v8);
}


void OtherUserServantLimitCountManager__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserServantLimitCountManager_c *v2; // x0
  System_Collections_Generic_Dictionary_object__object__o *dicServant; // x0

  if ( (byte_4E72DAB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__Clear__);
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E72DAB = 1;
  }
  v2 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
    v2 = OtherUserServantLimitCountManager_TypeInfo;
  }
  dicServant = (System_Collections_Generic_Dictionary_object__object__o *)v2->static_fields->dicServant;
  if ( !dicServant )
    sub_1D0F30C(0, v1);
  System_Collections_Generic_Dictionary_object__object___Clear(
    dicServant,
    (const MethodInfo_360176C *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__Clear__);
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
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x6
  int32_t v22; // w28
  int32_t v23; // w25
  const MethodInfo *v24; // x6
  int32_t v25; // w23
  const MethodInfo *v26; // x6
  int32_t v27; // w22
  const MethodInfo *v28; // x6
  int32_t v29; // w19
  __int64 v30; // x20
  int32_t maxLimitCountStageHasReward[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4E72DAE & 1) == 0 )
  {
    sub_1D0F0B4(&OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E72DAE = 1;
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
    if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
    SupportLimitCountGroup = OtherUserServantLimitCountManager__GetSupportLimitCountGroup(
                               svtId,
                               limitCount,
                               OptionAfter,
                               v20);
  }
  v22 = maxLimitCountStageHasReward[0];
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  v23 = OtherUserServantLimitCountManager__GetOptionAfter(
          svtId,
          commandCardStage,
          v15,
          limitCount,
          OptionAfter,
          SupportLimitCountGroup,
          v21);
  v25 = OtherUserServantLimitCountManager__GetOptionAfter(
          svtId,
          portraitStage,
          v15,
          limitCount,
          OptionAfter,
          SupportLimitCountGroup,
          v24);
  v27 = OtherUserServantLimitCountManager__GetOptionAfter(
          svtId,
          imageStage,
          v22,
          limitCount,
          OptionAfter,
          SupportLimitCountGroup,
          v26);
  v29 = OtherUserServantLimitCountManager__GetOptionAfter(
          svtId,
          iconStage,
          v22,
          limitCount,
          OptionAfter,
          SupportLimitCountGroup,
          v28);
  v30 = sub_1D0F300(OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0);
  *(_DWORD *)(v30 + 16) = v15;
  *(_DWORD *)(v30 + 20) = v22;
  *(_DWORD *)(v30 + 24) = OptionAfter;
  *(_DWORD *)(v30 + 28) = v23;
  *(_DWORD *)(v30 + 32) = v25;
  *(_DWORD *)(v30 + 36) = v27;
  *(_DWORD *)(v30 + 40) = v29;
  return (OtherUserServantLimitCountManager_LimitCountStageData_o *)v30;
}


OtherUserServantLimitCountManager_LimitCountStageData_o *OtherUserServantLimitCountManager__CreateLimitCountStageData_35202888(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *randomLimitCountTargets,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Int32_array *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  int *v11; // x20
  System_Func_int__bool__o *v12; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  System_Func_int__bool__o *v14; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x22
  __int64 v17; // x0
  int32_t v18; // w22
  const MethodInfo *v19; // x1
  int32_t v20; // w24
  int32_t v21; // w23
  const MethodInfo *v22; // x3
  int32_t v23; // w24
  int32_t SupportLimitCountGroup; // w0
  const MethodInfo *v25; // x3
  int32_t v26; // w21
  int v27; // w20
  __int64 v28; // x19
  int32_t maxLimitCountStage; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4E72DAF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    sub_1D0F0B4(&Method_OtherUserServantLimitCountManager___c__DisplayClass10_0__CreateLimitCountStageData_b__0__);
    sub_1D0F0B4(&Method_OtherUserServantLimitCountManager___c__DisplayClass10_0__CreateLimitCountStageData_b__1__);
    sub_1D0F0B4(&OtherUserServantLimitCountManager___c__DisplayClass10_0_TypeInfo);
    byte_4E72DAF = 1;
  }
  maxLimitCountStage = 0;
  v7 = sub_1D0F300(OtherUserServantLimitCountManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_DWORD *)(v7 + 20) = svtId;
  v11 = (int *)(v7 + 16);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  OtherUserServantLimitCountManager__GetMaxLimitCountStage(
    svtId,
    limitCount,
    &maxLimitCountStage,
    (int32_t *)(v7 + 16),
    v10);
  v12 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_OtherUserServantLimitCountManager___c__DisplayClass10_0__CreateLimitCountStageData_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)randomLimitCountTargets,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3297274 *)Method_System_Linq_Enumerable_Where_int___);
  v14 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_OtherUserServantLimitCountManager___c__DisplayClass10_0__CreateLimitCountStageData_b__1__,
    0);
  v15 = System_Linq_Enumerable__Where_int_(
          v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3297274 *)Method_System_Linq_Enumerable_Where_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v15,
         (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v8 )
LABEL_18:
    sub_1D0F30C(v8, v9);
  v16 = v8;
  v17 = UnityEngine_Random__Range_73319196(0, v8->max_length, 0);
  if ( (unsigned int)v17 >= LODWORD(v16->max_length) )
    sub_1D0F314(v17);
  v18 = v16->m_Items[(int)v17];
  if ( LimitCountUtility__IsRewardStage(v18, 0) )
  {
    v20 = *(_DWORD *)(v7 + 20);
    v21 = v18 - 1;
    if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
    if ( OtherUserServantLimitCountManager__IsEnableSupportLimitCountToDispLimitCount(v20, v19) )
    {
      v23 = *(_DWORD *)(v7 + 20);
      if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
      SupportLimitCountGroup = OtherUserServantLimitCountManager__GetSupportLimitCountGroup(v23, limitCount, v21, v22);
      if ( SupportLimitCountGroup != OtherUserServantLimitCountManager__GetSupportLimitCountGroup(
                                       *(_DWORD *)(v7 + 20),
                                       limitCount,
                                       v18,
                                       v25) )
        --v18;
    }
  }
  else
  {
    v21 = v18;
  }
  v26 = maxLimitCountStage;
  v27 = *v11;
  v28 = sub_1D0F300(OtherUserServantLimitCountManager_LimitCountStageData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0);
  *(_DWORD *)(v28 + 16) = v26;
  *(_DWORD *)(v28 + 20) = v27;
  *(_DWORD *)(v28 + 24) = v21;
  *(_DWORD *)(v28 + 28) = v21;
  *(_DWORD *)(v28 + 36) = v18;
  *(_DWORD *)(v28 + 40) = v18;
  *(_DWORD *)(v28 + 32) = v21;
  return (OtherUserServantLimitCountManager_LimitCountStageData_o *)v28;
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

  if ( (byte_4E72DAC & 1) == 0 )
  {
    sub_1D0F0B4(&long_TypeInfo);
    sub_1D0F0B4(&StringLiteral_25700/*"{0}:{1}"*/);
    byte_4E72DAC = 1;
  }
  v9 = userId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v9);
  v8 = userSvtId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v8);
  return System_String__Format_65604080((System_String_o *)StringLiteral_25700/*"{0}:{1}"*/, v5, v6, 0);
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
  int32_t IconLimitCountStage; // w27
  Il2CppObject *LimitCountStageData; // x0
  System_Int32_array *v22; // x23
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x25
  struct System_Int32_array *v24; // x8
  int64_t v25; // x22
  __int64 v26; // x23
  bool v27; // w24
  Il2CppObject *v28; // x21
  int32_t v29; // w0
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x7
  int32_t v32; // w20
  int32_t v33; // w22
  int32_t imageLimitCount; // w24
  int32_t dispLimitCount; // w26
  int32_t commandCardLimitCount; // w27
  int32_t v37; // w23
  int32_t iconLimitCount; // w25
  int32_t *p_iconLimitCount; // t2
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Int32_array *v46; // x23
  OtherUserServantLimitCountManager_c *v47; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v3 = info;
  if ( (byte_4E72DAD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TryGetValue__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__set_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    info = (ServantLeaderInfo_o *)sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E72DAD = 1;
  }
  value = 0;
  if ( !v3 )
    goto LABEL_43;
  userId = v3->fields.userId;
  userSvtId = v3->fields.userSvtId;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  info = (ServantLeaderInfo_o *)OtherUserServantLimitCountManager__GenerateKey(userId, userSvtId, v2);
  if ( !OtherUserServantLimitCountManager_TypeInfo->static_fields->dicServant )
    goto LABEL_43;
  v6 = (Il2CppObject *)info;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)OtherUserServantLimitCountManager_TypeInfo->static_fields->dicServant,
          (Il2CppObject *)info,
          &value,
          (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__TryGetValue__) )
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
    *(_QWORD *)&v50.fields.currentCryptoKey = v10;
    *(_QWORD *)&v50.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v50, 0);
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
      LimitCountStageData = (Il2CppObject *)OtherUserServantLimitCountManager__CreateLimitCountStageData(
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
      LimitCountStageData = (Il2CppObject *)OtherUserServantLimitCountManager__CreateLimitCountStageData_35202888(
                                              v14,
                                              limitCount,
                                              v22,
                                              v12);
    }
    value = LimitCountStageData;
    if ( v3->fields.afterTransformSvtInfo && ServantLeaderInfo__get_IsSaveTransformServant(v3, 0) )
    {
      info = (ServantLeaderInfo_o *)ServantLeaderInfo__get_SaveTransformServantEntity(v3, 0);
      if ( !info )
        goto LABEL_43;
      afterTransformSvtInfo = v3->fields.afterTransformSvtInfo;
      if ( !afterTransformSvtInfo )
        goto LABEL_43;
      v24 = afterTransformSvtInfo->fields.randomLimitCountTargets;
      v26 = *(_QWORD *)&info->fields.supportDeckId;
      v25 = info->fields.userId;
      if ( v24 )
        v27 = LODWORD(v24->max_length) == 0;
      else
        v27 = 1;
      v28 = value;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v26;
      *(_QWORD *)&v51.fields.fakeValue = v25;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v51, 0);
      v32 = v3->fields.limitCount;
      v33 = v29;
      if ( v27 )
      {
        imageLimitCount = afterTransformSvtInfo->fields.imageLimitCount;
        dispLimitCount = afterTransformSvtInfo->fields.dispLimitCount;
        commandCardLimitCount = afterTransformSvtInfo->fields.commandCardLimitCount;
        p_iconLimitCount = &afterTransformSvtInfo->fields.iconLimitCount;
        iconLimitCount = afterTransformSvtInfo->fields.iconLimitCount;
        v37 = p_iconLimitCount[1];
        if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
        info = (ServantLeaderInfo_o *)OtherUserServantLimitCountManager__CreateLimitCountStageData(
                                        v33,
                                        v32,
                                        dispLimitCount,
                                        commandCardLimitCount,
                                        v37,
                                        imageLimitCount,
                                        iconLimitCount,
                                        v31);
      }
      else
      {
        v46 = afterTransformSvtInfo->fields.randomLimitCountTargets;
        if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
        info = (ServantLeaderInfo_o *)OtherUserServantLimitCountManager__CreateLimitCountStageData_35202888(
                                        v33,
                                        v32,
                                        v46,
                                        v30);
      }
      method = (const MethodInfo *)info;
      if ( !v28 )
        goto LABEL_43;
      v28[3].klass = (Il2CppClass *)info;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v28[3], (int32_t)info, v40, v41, v42, v43, v44, v45);
    }
    v47 = OtherUserServantLimitCountManager_TypeInfo;
    if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
      v47 = OtherUserServantLimitCountManager_TypeInfo;
    }
    info = (ServantLeaderInfo_o *)v47->static_fields->dicServant;
    if ( info )
    {
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)info,
        v6,
        value,
        (const MethodInfo_36015D0 *)Method_System_Collections_Generic_Dictionary_string__OtherUserServantLimitCountManager_LimitCountStageData__set_Item__);
      return (OtherUserServantLimitCountManager_LimitCountStageData_o *)value;
    }
LABEL_43:
    sub_1D0F30C(info, method);
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
  const MethodInfo *v13; // x3
  ServantCostumeMaster_o *Master_object; // x0
  __int64 v15; // x1
  int32_t SupportBaseLimitCount; // w0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E72DB0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E72DB0 = 1;
  }
  entity = 0;
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !LimitCountUtility__CheckOption(svtId, limitCountStage, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
      sub_1D0F30C(Master_object, v15);
    }
  }
  else if ( limitCountStage > maxLimitCountStage )
  {
    limitCountStage = maxLimitCountStage;
  }
  if ( dispStageLimitCountGroup < 0 )
    return limitCountStage;
LABEL_14:
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  if ( OtherUserServantLimitCountManager__GetSupportLimitCountGroup(svtId, limitCount, limitCountStage, v13) != dispStageLimitCountGroup )
    return dispStage;
  return limitCountStage;
}


int32_t OtherUserServantLimitCountManager__GetSupportLimitCountGroup(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCountStage,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *Master_object; // x0
  __int64 v8; // x1
  int32_t v10; // w20
  ServantCostumeEntity_o *v11; // [xsp+0h] [xbp-40h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E72DB2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E72DB2 = 1;
  }
  v11 = 0;
  entity = 0;
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
    if ( !Master_object )
      goto LABEL_18;
    if ( ServantCostumeMaster__TryGetEntity(Master_object, &v11, svtId, limitCountStage, 0) )
    {
      Master_object = (ServantCostumeMaster_o *)v11;
      if ( v11 )
        return ServantCostumeEntity__GetSupportLimitCountGroup(v11, 0);
LABEL_18:
      sub_1D0F30C(Master_object, v8);
    }
    return 0;
  }
  v10 = LimitCountUtility__ConvertStageToLimitCount(limitCount, limitCountStage, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Master_object, &entity, svtId, v10, 0) )
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
  OtherUserServantLimitCountManager_c *v3; // x0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4E72DB1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&OptionManager_TypeInfo);
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E72DB1 = 1;
  }
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  if ( !byte_4E72E15 )
  {
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E72E15 = 1;
  }
  v3 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
    v3 = OtherUserServantLimitCountManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField )
    return 0;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetSupportLimitCountToDispLimitCountSetting(0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v6);
  return ServantMaster__IsEnableSupportLimitCountToDispLimitCount((ServantMaster_o *)Master_object, svtId, 0);
}


bool OtherUserServantLimitCountManager__get_IsEnableAdjustSupportLimitCount(const MethodInfo *method)
{
  OtherUserServantLimitCountManager_c *v1; // x0

  if ( (byte_4E72DA9 & 1) == 0 )
  {
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E72DA9 = 1;
  }
  v1 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
    v1 = OtherUserServantLimitCountManager_TypeInfo;
  }
  return v1->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField;
}


void OtherUserServantLimitCountManager__set_IsEnableAdjustSupportLimitCount(bool value, const MethodInfo *method)
{
  OtherUserServantLimitCountManager_c *v3; // x0

  if ( (byte_4E72DAA & 1) == 0 )
  {
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E72DAA = 1;
  }
  v3 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
    v3 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v3->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = value;
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


void OtherUserServantLimitCountManager_LimitCountStageData___ctor_35204732(
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._AfterTransform_k__BackingField = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._AfterTransform_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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