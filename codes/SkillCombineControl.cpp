void SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineMenuControl_c *v4; // x0

  if ( (byte_596A3B8 & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TypeInfo);
    byte_596A3B8 = 1;
  }
  v4 = CombineMenuControl_TypeInfo;
  this->fields.ignoreRandomSettings = 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool SkillCombineControl__CheckIsMaxLvSkills(
        SkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  System_Int32_array *SkillIdList; // x19
  il2cpp_array_size_t max_length; // x8
  bool v6; // w22
  SkillCombineControl_o *v7; // x20
  unsigned __int64 v8; // x23
  struct CombineRootComponent_o **p_combineRootComponent; // x27
  int32_t v10; // w21
  int32_t v11; // w29

  if ( (byte_596A3B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (SkillCombineControl_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A3B3 = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))resData->klass->vtable._6_getSkillLevelList.methodPtr)(
                                          resData,
                                          resData->klass->vtable._6_getSkillLevelList.method),
        !SkillIdList) )
  {
LABEL_17:
    sub_2213CDC(this, resData);
  }
  max_length = SkillIdList->max_length;
  v6 = (int)max_length < 1;
  if ( (int)max_length >= 1 )
  {
    v7 = this;
    v8 = 0;
    p_combineRootComponent = &this->fields.combineRootComponent;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        goto LABEL_18;
      if ( !v7 )
        goto LABEL_17;
      if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
LABEL_18:
        sub_2213CE4(this);
      v10 = SkillIdList->m_Items[v8];
      if ( v10 >= 1 )
      {
        v11 = *((_DWORD *)p_combineRootComponent + v8);
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10,
                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_17;
        if ( v11 < this->fields.type )
          return v6;
      }
      LODWORD(max_length) = SkillIdList->max_length;
      v6 = (__int64)++v8 >= (int)max_length;
    }
    while ( (__int64)v8 < (int)max_length );
  }
  return v6;
}


SetLevelUpData_o *SkillCombineControl__CreateLeveUpData(
        SkillCombineControl_o *this,
        int32_t idx,
        int32_t skillId,
        int32_t skillLv,
        System_String_o *titleText,
        int32_t actualSkillId,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  SkillEntity_o *v17; // x23
  const MethodInfo *v18; // x2
  CombineSkillEntity_o *CombineSkillEntity; // x25
  __int64 v20; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w1
  System_String_o *Name; // x0
  System_String_o **v29; // x24
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  const MethodInfo *v36; // x1
  int32_t qp; // w1
  const MethodInfo *v38; // x1
  unsigned __int64 v39; // x8
  float v40; // x28^4
  __int64 v41; // x29
  const MethodInfo *v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  float CombineCampaignQpRate; // s0
  double v50; // d0
  __int64 v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  int v58; // w8
  __int64 itemIds; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 itemNums; // x1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  __int64 v74; // x2
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w21
  UserServantEntity_o *baseUserServantEntity; // x8
  ServantLimitAddMaster_o *v77; // x20
  System_String_o *OverwriteSkillName; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  unsigned __int64 v86; // [xsp+0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596A3B5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_System_Nullable_float__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&SetLevelUpData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A3B5 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_33;
  v17 = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           skillId,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  CombineSkillEntity = SkillCombineControl__GetCombineSkillEntity(this, skillLv, v18);
  v20 = sub_2213CCC(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v20, 0);
  if ( !v20 )
    goto LABEL_33;
  v27 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v20 + 32) = StringLiteral_1/*""*/;
  *(_DWORD *)(v20 + 16) = skillId;
  *(_DWORD *)(v20 + 20) = actualSkillId;
  *(_DWORD *)(v20 + 24) = idx + 1;
  *(_DWORD *)(v20 + 28) = idx;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 32), v27, v21, v22, v23, v24, v25, v26);
  if ( !v17 )
    goto LABEL_33;
  Name = SkillEntity__getName(v17, 0);
  *(_QWORD *)(v20 + 40) = Name;
  v29 = (System_String_o **)(v20 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 40), (int32_t)Name, v30, v31, v32, v33, v34, v35);
  *(_DWORD *)(v20 + 64) = skillLv;
  *(_DWORD *)(v20 + 68) = skillLv + 1;
  *(_DWORD *)(v20 + 72) = v17->fields.maxLv;
  if ( !CombineSkillEntity )
  {
    SkillCombineControl__GetCombineCampaignQpRate(this, v36);
    *(_DWORD *)(v20 + 76) = 0;
    *(_QWORD *)(v20 + 80) = this->fields.userQP;
    v51 = sub_2213B20(int___TypeInfo, 0);
    *(_QWORD *)(v20 + 96) = v51;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 96), v51, v52, v53, v54, v55, v56, v57);
LABEL_21:
    itemNums = sub_2213B20(int___TypeInfo, 0);
    goto LABEL_22;
  }
  qp = CombineSkillEntity->fields.qp;
  v86 = 0;
  System_Nullable_int____ctor(
    (System_Nullable_int__o)&v86,
    qp,
    (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  if ( (_BYTE)v86 )
  {
    v39 = HIDWORD(v86);
    v86 = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&v86,
      (float)(int)v39,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v40 = *((float *)&v86 + 1);
    v41 = (unsigned __int8)v86;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(this, v42);
    if ( v41 )
    {
      v86 = 0;
      System_Nullable_float____ctor(
        (System_Nullable_float__o)&v86,
        CombineCampaignQpRate * v40,
        (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
      v50 = *((float *)&v86 + 1);
    }
    else
    {
      v50 = 0.0;
    }
    if ( v50 == INFINITY )
      v58 = 0x80000000;
    else
      v58 = (int)v50;
    *(_DWORD *)(v20 + 76) = v58;
    *(_QWORD *)(v20 + 80) = this->fields.userQP;
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(this, v38);
    *(_DWORD *)(v20 + 76) = 0;
    *(_QWORD *)(v20 + 80) = this->fields.userQP;
  }
  itemIds = (__int64)CombineSkillEntity->fields.itemIds;
  if ( !itemIds )
    itemIds = sub_2213B20(int___TypeInfo, 0);
  *(_QWORD *)(v20 + 96) = itemIds;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 96), itemIds, v43, v44, v45, v46, v47, v48);
  itemNums = (__int64)CombineSkillEntity->fields.itemNums;
  if ( !itemNums )
    goto LABEL_21;
LABEL_22:
  *(_QWORD *)(v20 + 104) = itemNums;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 104), itemNums, v60, v61, v62, v63, v64, v65);
  *(_QWORD *)(v20 + 56) = titleText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 56), (int32_t)titleText, v67, v68, v69, v70, v71, v72);
  Instance = (DataManager_o *)this->fields.baseUserServantEntity;
  if ( !Instance )
    goto LABEL_33;
  DispLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    (UserServantEntity_o *)Instance,
                                                    overrideTransformVal,
                                                    0,
                                                    0,
                                                    0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v73, v74);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_33;
  v77 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantEntity__GetServantId(baseUserServantEntity, overrideTransformVal, 0);
  if ( !v77 )
    goto LABEL_33;
  if ( ServantLimitAddMaster__TryGetEntity(
         v77,
         &entity,
         (int32_t)Instance,
         DispLimitCountStageSealAfterAtStageLimitCount,
         0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_33;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        OverwriteSkillName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v17->fields.id, *v29, 0);
        *v29 = OverwriteSkillName;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v20 + 40),
          (int32_t)OverwriteSkillName,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84);
        return (SetLevelUpData_o *)v20;
      }
LABEL_33:
      sub_2213CDC(Instance, v16);
    }
  }
  return (SetLevelUpData_o *)v20;
}


float SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  float v3; // s8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596A3B7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    byte_596A3B7 = 1;
  }
  v3 = 1.0;
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  memset(&v8, 0, sizeof(v8));
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      combineEventList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v5 )
        break;
      if ( !v8.fields._current )
        sub_2213CDC(v5, v6);
      if ( *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v3 = *(float *)((char *)&v8.fields._current->klass + (unsigned __int64)&word_38);
        goto LABEL_11;
      }
    }
    v3 = 1.0;
LABEL_11:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *SkillCombineControl__GetCombineSkillEntity(
        SkillCombineControl_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  Il2CppObject *v13; // x20
  CombineSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596A3B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CombineSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596A3B6 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&skillLv, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_12;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  if ( !v10
    || (v13 = DataMasterBase_object__object__int___GetEntity(
                v10,
                (int32_t)Master_object,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v13)
    || !Master_object )
  {
LABEL_12:
    sub_2213CDC(Master_object, v7);
  }
  CombineSkillMaster__TryGetEntity((CombineSkillMaster_o *)Master_object, &entity, (int32_t)v13[7].klass, skillLv, 0);
  return entity;
}


SvtUseSkillData_o *SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  char ignoreRandomSettings; // w6
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Int32_array *TransformedSkillIdList; // x1
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_596A3AA & 1) == 0 )
  {
    sub_2213A60(&SvtUseSkillData_TypeInfo);
    byte_596A3AA = 1;
  }
  v5 = sub_2213CCC(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v5, 0);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( this->fields._IsTransformServant_k__BackingField )
  {
    ignoreRandomSettings = 1;
    if ( !baseUserServantEntity )
      goto LABEL_14;
  }
  else
  {
    ignoreRandomSettings = this->fields.ignoreRandomSettings;
    if ( !baseUserServantEntity )
      goto LABEL_14;
  }
  baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedSkillIdList(
                                                   baseUserServantEntity,
                                                   transformIndex,
                                                   -1,
                                                   -1,
                                                   1,
                                                   -1,
                                                   ignoreRandomSettings,
                                                   0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = baseUserServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v5 + 16),
    (int32_t)baseUserServantEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( this->fields.ignoreRandomSettings )
  {
    TransformedSkillIdList = *(System_Int32_array **)(v5 + 16);
  }
  else
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_14;
    TransformedSkillIdList = UserServantEntity__GetTransformedSkillIdList(
                               baseUserServantEntity,
                               transformIndex,
                               -1,
                               -1,
                               1,
                               -1,
                               1,
                               0);
  }
  *(_QWORD *)(v5 + 40) = TransformedSkillIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v5 + 40),
    (int32_t)TransformedSkillIdList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
LABEL_14:
    sub_2213CDC(baseUserServantEntity, v6);
  v22 = ((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.methodPtr)(
          baseUserServantEntity,
          baseUserServantEntity->klass->vtable._6_getSkillLevelList.method);
  *(_QWORD *)(v5 + 24) = v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), v22, v23, v24, v25, v26, v27, v28);
  return (SvtUseSkillData_o *)v5;
}


SetLevelUpData_o *SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  struct SetLevelUpData_array *lvUpDataList; // x8

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_2213CDC(this, method);
  if ( !LODWORD(lvUpDataList->max_length) )
    sub_2213CE4(this);
  return lvUpDataList->m_Items[0];
}


int32_t SkillCombineControl__GetTutorialOpenType(SkillCombineControl_o *this, const MethodInfo *method)
{
  return 37;
}


void SkillCombineControl__InitDispCombineInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  struct UILabel_array *selectSkillHelpLabels; // x22
  int max_length; // w8
  unsigned int v11; // w24
  UILabel_o *v12; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v15; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x8
  int size; // w21
  int32_t v18; // w20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A3A6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9171/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_2213A60(&StringLiteral_9174/*"MSG_SKILL_SELECT"*/);
    sub_2213A60(&StringLiteral_9623/*"NEED_QP_INFO"*/);
    byte_596A3A6 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9171/*"MSG_PRESELECT_BASE_SVT"*/, 0);
  if ( !preSelectBaseLb )
    goto LABEL_33;
  UILabel__set_text(preSelectBaseLb, gameObject, 0);
  gameObject = (System_String_o *)this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_33;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (System_String_o *)this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (System_String_o *)this->fields.selectSkillInfo;
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  SkillCombineControl__SetHaveQpInfo(this, v7);
  selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
  if ( !selectSkillHelpLabels )
    goto LABEL_33;
  max_length = selectSkillHelpLabels->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_2213CE4(gameObject);
      v12 = selectSkillHelpLabels->m_Items[v11];
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v8);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9174/*"MSG_SKILL_SELECT"*/, 0);
      if ( !v12 )
        break;
      UILabel__set_text(v12, gameObject, 0);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_18;
    }
LABEL_33:
    sub_2213CDC(gameObject, v6);
  }
LABEL_18:
  needQpLb = this->fields.needQpLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v8);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9623/*"NEED_QP_INFO"*/, 0);
  if ( !needQpLb )
    goto LABEL_33;
  UILabel__set_text(needQpLb, gameObject, 0);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  gameObject = System_Int32__ToString((int)this + 392, 0);
  if ( !qpLb )
    goto LABEL_33;
  UILabel__set_text(qpLb, gameObject, 0);
  gameObject = (System_String_o *)this->fields.qpLb;
  if ( !gameObject )
    goto LABEL_33;
  v19.fields.r = 1.0;
  v19.fields.g = 1.0;
  v19.fields.b = 1.0;
  v19.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v19, 0);
  SkillCombineControl__ResetDispSkillInfo(this, v15);
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_33;
  size = itemInfoList->fields._size;
  if ( size >= 1 )
  {
    v18 = 0;
    do
    {
      gameObject = (System_String_o *)this->fields.itemInfoList;
      if ( !gameObject )
        goto LABEL_33;
      gameObject = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)gameObject,
                                        v18,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        goto LABEL_33;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0);
    }
    while ( size != ++v18 );
  }
  gameObject = (System_String_o *)this->fields.skillSwitchButton;
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (System_String_o *)this->fields.condTitleLabel;
  if ( !gameObject )
    goto LABEL_33;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
}


void SkillCombineControl__InitSvtSkillCombine(
        SkillCombineControl_o *this,
        bool isResultReset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *helpBtn; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_c *v11; // x8
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  MenuListControl_o *v32; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596A3A5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18448/*"buttontxt_synthesis"*/);
    byte_596A3A5 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0);
  SkillCombineControl__InitDispCombineInfo(this, v7);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v8);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_18448/*"buttontxt_synthesis"*/, 0);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  if ( !isResultReset )
    this->fields.ignoreRandomSettings = 1;
  helpBtn = UserGameMaster__getSelfUserGame(0);
  if ( !helpBtn )
    goto LABEL_30;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v11 = UnityEngine_Object_TypeInfo;
  this->fields.userQP = *((_QWORD *)helpBtn + 12);
  if ( !*(&v11->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v11, v5, v9);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    helpBtn = this->fields.charaGraph;
    if ( !helpBtn )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, 0, v15, v16, v17, v18, v19, v20);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0),
        (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_30:
    sub_2213CDC(helpBtn, v5);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineEventList,
    (int32_t)combineEventList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v29 && v29->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      v29,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v30 )
        break;
      if ( !v33.fields._current )
        sub_2213CDC(v30, v31);
      if ( *(_DWORD *)((char *)&v33.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v32 = this->fields.menuListCtr;
        if ( !v32 )
          sub_2213CDC(0, v31);
        MenuListControl__setBannerIcon(
          v32,
          this->fields.eventNoticeImg,
          *(EventEntity_o **)((char *)&v33.fields._current->klass + (unsigned __int64)off_50),
          0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SetRarityDialogControl_o *exeCombineDlg; // x0
  __int64 v5; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  System_String_o *v9; // x20
  __int64 v10; // x2
  System_Object_array *lvUpDataList; // x23
  int32_t v12; // w0
  __int64 v13; // x2
  int32_t v14; // w4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596A3B1 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IsValidIndex_SetLevelUpData___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_3916/*"CONFIRM_TITLE_SKILL_COMBINE"*/);
    byte_596A3B1 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  exeCombineDlg = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3916/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_16;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.transformVal.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.transformVal.fields.fakeValue;
  v9 = (System_String_o *)exeCombineDlg;
  if ( !UserServantEntity__get_IsSaveTransformServant(this->fields.baseUserServantEntity, 0) )
    goto LABEL_13;
  lvUpDataList = (System_Object_array *)this->fields.lvUpDataList;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v10);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  if ( BasicHelper__IsValidIndex_object__58806224(
         lvUpDataList,
         v12,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_SetLevelUpData___) )
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v13);
    *(_QWORD *)&v16.fields.currentCryptoKey = v7;
    *(_QWORD *)&v16.fields.fakeValue = v8;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  }
  else
  {
LABEL_13:
    v14 = 0;
  }
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
LABEL_16:
    sub_2213CDC(exeCombineDlg, v5);
  SetRarityDialogControl__SetSkillNpCombineInfo(
    exeCombineDlg,
    this->fields.lvUpDataList,
    v9,
    this->fields._TransformIsNotSkillChange_k__BackingField,
    v14,
    0);
}


// local variable allocation has failed, the output may be wrong!
void SkillCombineControl__OnClickInfo(
        SkillCombineControl_o *this,
        bool isdecide,
        int32_t idx,
        const MethodInfo *method)
{
  this->fields.currentIdx = idx;
  SkillCombineControl__SetNeedItemInfo(this, idx, *(const MethodInfo **)&idx);
}


void SkillCombineControl__OnClickSwitchSkill(SkillCombineControl_o *this, const MethodInfo *method)
{
  SkillCombineControl_o *v2; // x19
  int32_t switchIdxType; // w8
  int32_t *p_switchIdx; // x8
  int32_t *p_size; // x9
  struct System_Collections_Generic_List_ValueTuple_string__int_____o *switchSkillIdsList; // x9
  int32_t ServantId; // w0
  UnityEngine_GameObject_o *v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  v2 = this;
  if ( (byte_596A3B4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    this = (SkillCombineControl_o *)sub_2213A60(&Method_SkillCombineControl_OnClickSwitchSkill__);
    byte_596A3B4 = 1;
  }
  switchIdxType = v2->fields.switchIdxType;
  if ( switchIdxType == 2 )
  {
    switchSkillIdsList = v2->fields.switchSkillIdsList;
    if ( !switchSkillIdsList )
      goto LABEL_17;
    p_switchIdx = &v2->fields.switchIdx;
    p_size = &switchSkillIdsList->fields._size;
  }
  else
  {
    if ( switchIdxType != 1 )
      goto LABEL_9;
    p_switchIdx = &v2->fields.displayTransformIndex;
    p_size = &v2->fields.transformTotal;
  }
  *p_switchIdx = (*p_switchIdx + 1) % *p_size;
LABEL_9:
  this = (SkillCombineControl_o *)v2->fields.baseUserServantEntity;
  if ( v2->fields._IsSaveTransformServant_k__BackingField )
  {
    method = (const MethodInfo *)(unsigned int)v2->fields.displayTransformIndex;
    if ( this )
      goto LABEL_11;
LABEL_17:
    sub_2213CDC(this, method);
  }
  method = (const MethodInfo *)0xFFFFFFFFLL;
  if ( !this )
    goto LABEL_17;
LABEL_11:
  ServantId = UserServantEntity__GetServantId((UserServantEntity_o *)this, (int32_t)method, 0);
  SkillCombineControl__SetCombineSkillList(v2, v8, ServantId, v9);
  if ( v2->fields.switchIdxType )
    SkillCombineControl__SetTitleText(v2, v10);
  v11 = Method_SkillCombineControl_OnClickSwitchSkill__;
  if ( (*((_BYTE *)Method_SkillCombineControl_OnClickSwitchSkill__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_2213A78(Method_SkillCombineControl_OnClickSwitchSkill__);
  v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
}


void SkillCombineControl__ResetDispSkillInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  SkillCombineControl_o *v2; // x19
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x8
  int size; // w22
  int32_t v5; // w20
  UnityEngine_Component_o *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  UIWidget_o *condTitleLabel; // x20
  UIWidget_o *condTitleSprite; // x19
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_596A3A7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    this = (SkillCombineControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    byte_596A3A7 = 1;
  }
  skillInfoList = v2->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_12;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (SkillCombineControl_o *)v2->fields.skillInfoList;
      if ( !this )
        break;
      this = (SkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v5,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !this )
        break;
      v6 = (UnityEngine_Component_o *)this;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)this, 0);
      gameObject = UnityEngine_Component__get_gameObject(v6, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)v5 * 230.0, 0);
      v8 = UnityEngine_Component__get_gameObject(v6, 0);
      GameObjectExtensions__SetLocalPositionY(v8, 0.0, 0);
      v9 = UnityEngine_Component__get_gameObject(v6, 0);
      GameObjectExtensions__SetLocalScale_42893524(v9, 1.0, 0);
      if ( size == ++v5 )
        goto LABEL_9;
    }
LABEL_12:
    sub_2213CDC(this, method);
  }
LABEL_9:
  condTitleLabel = (UIWidget_o *)v2->fields.condTitleLabel;
  DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
  if ( !condTitleLabel )
    goto LABEL_12;
  UIWidget__set_color(condTitleLabel, DefaultCondTitleLabelColor, 0);
  condTitleSprite = (UIWidget_o *)v2->fields.condTitleSprite;
  DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
  if ( !condTitleSprite )
    goto LABEL_12;
  UIWidget__set_color(condTitleSprite, DefaultCondTitleSpriteColor, 0);
}


void SkillCombineControl__SetBaseSvtCardImg(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(SkillCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  _BOOL4 TransformIsNotSkillChange_k__BackingField; // w8
  __int64 transformTotal; // x1
  struct SvtUseSkillData_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x2
  unsigned int *skillDataList; // x23
  unsigned __int64 v28; // x21
  __int64 v29; // x24
  SvtUseSkillData_o *SvtSkillData; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  SvtUseSkillData_o *v37; // x22
  __int64 v38; // x1
  int32_t v39; // w8
  struct UnityEngine_Color_o *p_CondTitleLabelColor_k__BackingField; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  float *v44; // x11
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v46; // x10
  float *v47; // x9
  const MethodInfo *v48; // x1
  int32_t ServantId; // w0
  UnityEngine_GameObject_o *v50; // x1
  const MethodInfo *v51; // x3
  __int64 v52; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-60h]
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A3A9 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&SvtUseSkillData___TypeInfo);
    byte_596A3A9 = 1;
  }
  if ( usrSvtEn )
  {
    v7 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v54.fields.fakeValue = v7;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usrSvtEn, *(_QWORD *)&idx);
    v53 = v54;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
      (int32_t)usrSvtEn,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb )
      goto LABEL_20;
    preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0);
    if ( !preSelectBaseLb )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb;
    if ( !preSelectBaseLb )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0);
    CombineMenuControl__SetTransformInfo((CombineMenuControl_o *)this, 0);
    TransformIsNotSkillChange_k__BackingField = this->fields._TransformIsNotSkillChange_k__BackingField;
    *(_QWORD *)&this->fields.switchIdxType = 0;
    if ( TransformIsNotSkillChange_k__BackingField && !this->fields._IsSaveTransformServant_k__BackingField )
      transformTotal = 1;
    else
      transformTotal = (unsigned int)this->fields.transformTotal;
    v19 = (struct SvtUseSkillData_array *)sub_2213B20(SvtUseSkillData___TypeInfo, transformTotal);
    this->fields.skillDataList = v19;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.skillDataList,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    skillDataList = (unsigned int *)this->fields.skillDataList;
    if ( !skillDataList )
      goto LABEL_20;
    v28 = 0;
    v29 = 8;
    while ( (__int64)v28 < (int)skillDataList[6] )
    {
      SvtSkillData = SkillCombineControl__GetSvtSkillData(this, v28, v26);
      v37 = SvtSkillData;
      if ( SvtSkillData )
      {
        SvtSkillData = (SvtUseSkillData_o *)sub_2213BB4(SvtSkillData, *(_QWORD *)(*(_QWORD *)skillDataList + 64LL));
        if ( !SvtSkillData )
        {
          v52 = sub_2213D00(0, v38);
          sub_2213BA0(v52, 0);
        }
      }
      if ( v28 >= skillDataList[6] )
        sub_2213CE4(SvtSkillData);
      *(_QWORD *)&skillDataList[2 * v28 + 8] = v37;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&skillDataList[v29], (int32_t)v37, v31, v32, v33, v34, v35, v36);
      skillDataList = (unsigned int *)this->fields.skillDataList;
      ++v28;
      v29 += 2;
      if ( !skillDataList )
        goto LABEL_20;
    }
    if ( this->fields._IsTransformServant_k__BackingField && !this->fields._TransformIsNotSkillChange_k__BackingField )
    {
      preSelectBaseLb = (UnityEngine_Component_o *)this->fields.condTitleLabel;
      if ( this->fields._IsSaveTransformServant_k__BackingField )
      {
        if ( this->fields.displayTransformIndex <= 0 )
        {
          p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColor_k__BackingField;
          p_g = &this->fields._CondTitleLabelColor_k__BackingField.fields.g;
          p_b = &this->fields._CondTitleLabelColor_k__BackingField.fields.b;
          p_a = &this->fields._CondTitleLabelColor_k__BackingField.fields.a;
          if ( !preSelectBaseLb )
            goto LABEL_20;
        }
        else
        {
          p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColorAfter_k__BackingField;
          p_g = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.g;
          p_b = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.b;
          p_a = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a;
          if ( !preSelectBaseLb )
            goto LABEL_20;
        }
        v55.fields.a = *p_a;
        v55.fields.b = *p_b;
        v55.fields.g = *p_g;
        v55.fields.r = p_CondTitleLabelColor_k__BackingField->fields.r;
        UIWidget__set_color((UIWidget_o *)preSelectBaseLb, v55, 0);
        preSelectBaseLb = (UnityEngine_Component_o *)this->fields.condTitleSprite;
        if ( this->fields.displayTransformIndex <= 0 )
        {
          p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
          v47 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
          v46 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
          v44 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
          if ( !preSelectBaseLb )
            goto LABEL_20;
        }
        else
        {
          p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
          v47 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
          v46 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
          v44 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
          if ( !preSelectBaseLb )
            goto LABEL_20;
        }
      }
      else
      {
        if ( !preSelectBaseLb )
          goto LABEL_20;
        UIWidget__set_color((UIWidget_o *)preSelectBaseLb, this->fields._CondTitleLabelColor_k__BackingField, 0);
        preSelectBaseLb = (UnityEngine_Component_o *)this->fields.condTitleSprite;
        if ( !preSelectBaseLb )
          goto LABEL_20;
        v44 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
        p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
        v46 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
        v47 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
      }
      v56.fields.a = *v44;
      v56.fields.b = *v46;
      v56.fields.g = *v47;
      v56.fields.r = p_CondTitleSpriteColor_k__BackingField->fields.r;
      UIWidget__set_color((UIWidget_o *)preSelectBaseLb, v56, 0);
      v39 = 1;
    }
    else
    {
      if ( !SkillCombineControl__TrySetSwitchSkillIdsList(this, v15) )
      {
LABEL_39:
        preSelectBaseLb = (UnityEngine_Component_o *)this->fields.skillSwitchButton;
        if ( preSelectBaseLb )
        {
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)preSelectBaseLb,
            this->fields.switchIdxType != 0,
            0);
          preSelectBaseLb = (UnityEngine_Component_o *)this->fields.condTitleLabel;
          if ( preSelectBaseLb )
          {
            preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0);
            if ( preSelectBaseLb )
            {
              UnityEngine_GameObject__SetActive(
                (UnityEngine_GameObject_o *)preSelectBaseLb,
                this->fields.switchIdxType != 0,
                0);
              if ( this->fields.switchIdxType )
                SkillCombineControl__SetTitleText(this, v48);
              else
                SkillCombineControl__ResetDispSkillInfo(this, v48);
              ServantId = UserServantEntity__GetServantId(usrSvtEn, -1, 0);
              SkillCombineControl__SetCombineSkillList(this, v50, ServantId, v51);
              return;
            }
          }
        }
LABEL_20:
        sub_2213CDC(preSelectBaseLb, v15);
      }
      v39 = 2;
    }
    this->fields.switchIdxType = v39;
    goto LABEL_39;
  }
}


// local variable allocation has failed, the output may be wrong!
void SkillCombineControl__SetCombineSkillList(
        SkillCombineControl_o *this,
        UnityEngine_GameObject_o *targetGo,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SkillCombineControl_o *v8; // x20
  _BOOL4 TransformIsNotSkillChange_k__BackingField; // w9
  struct SvtUseSkillData_array *skillDataList; // x8
  int32_t displayTransformIndex; // w9
  SvtUseSkillData_o *v12; // x8
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  il2cpp_array_size_t max_length; // x21
  System_Collections_Generic_List_object__o *v16; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x2
  unsigned __int64 v24; // x22
  UnityEngine_Component_o *v25; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  struct System_Int32_array *v29; // x8
  int32_t v30; // w23
  System_ValueTuple_object__object__o Item; // kr00_16
  System_ValueTuple_object__object__o v32; // kr10_16
  int32_t IsSaveTransformServant_k__BackingField; // w8
  struct SvtUseSkillData_array *v34; // x9
  SvtUseSkillData_o *v35; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int32_t v37; // w24
  Il2CppObject *v38; // x0
  SkillEntity_o *v39; // x27
  int32_t IconId; // w25
  System_String_o *Name; // x21
  unsigned __int64 v42; // x27
  int maxLv; // w27
  __int64 v44; // x1
  __int64 v45; // x2
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w28
  int32_t v47; // w21
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v49; // x19
  ServantSkillInfoIconComponent_o *v50; // x23
  int32_t v51; // w28
  int32_t StrengthStatus; // w0
  int32_t skillRecord; // w25
  int32_t v54; // w29
  UserServantEntity_o *baseUserServantEntity; // x26
  int32_t transformIndex; // w24
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x19
  const MethodInfo *v58; // x3
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  intptr_t m_CachedPtr; // x8
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v67; // x8
  __int64 v68; // [xsp+28h] [xbp-88h]
  int32_t skillMaxLv; // [xsp+34h] [xbp-7Ch]
  System_String_o *skillName; // [xsp+38h] [xbp-78h]
  int32_t skillIconId; // [xsp+44h] [xbp-6Ch]
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_596A3AD & 1) == 0 )
  {
    sub_2213A60(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SkillCombineControl_OnClickInfo__);
    this = (SkillCombineControl_o *)sub_2213A60(&StringLiteral_923/*"-"*/);
    byte_596A3AD = 1;
  }
  TransformIsNotSkillChange_k__BackingField = v8->fields._TransformIsNotSkillChange_k__BackingField;
  skillDataList = v8->fields.skillDataList;
  entity = 0;
  if ( !TransformIsNotSkillChange_k__BackingField
    || (displayTransformIndex = v8->fields._IsSaveTransformServant_k__BackingField) != 0 )
  {
    displayTransformIndex = v8->fields.displayTransformIndex;
  }
  if ( !skillDataList )
    goto LABEL_67;
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_68:
    sub_2213CE4(this);
  v12 = skillDataList->m_Items[displayTransformIndex];
  if ( !v12 )
    goto LABEL_67;
  svtUseSkillIdList = v12->fields.svtUseSkillIdList;
  v8->fields.useSkillIdList = svtUseSkillIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v8->fields.useSkillIdList,
    (int32_t)svtUseSkillIdList,
    *(System_String_o **)&svtId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  useSkillIdList = v8->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_67;
  max_length = useSkillIdList->max_length;
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v8->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.targetList, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  if ( (int)max_length >= 1 )
  {
    v24 = 0;
    v68 = (unsigned int)max_length;
    while ( 1 )
    {
      this = (SkillCombineControl_o *)v8->fields.skillInfoList;
      if ( !this )
        break;
      this = (SkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v24,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      v25 = (UnityEngine_Component_o *)this;
      if ( v8->fields.switchIdxType )
      {
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)(int)v24 * 234.0, 0);
        v27 = UnityEngine_Component__get_gameObject(v25, 0);
        GameObjectExtensions__SetLocalPositionY(v27, -16.0, 0);
        v28 = UnityEngine_Component__get_gameObject(v25, 0);
        GameObjectExtensions__SetLocalScale_42893524(v28, v8->fields.scaleOffset, 0);
      }
      v29 = v8->fields.useSkillIdList;
      if ( !v29 )
        break;
      if ( v24 >= LODWORD(v29->max_length) )
        goto LABEL_68;
      v30 = v29->m_Items[v24];
      if ( v8->fields.switchIdxType == 2 )
      {
        this = (SkillCombineControl_o *)v8->fields.switchSkillIdsList;
        if ( !this )
          break;
        Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                 (System_Collections_Generic_List_T__o *)this,
                 v8->fields.switchIdx,
                 (const MethodInfo_43FED4C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
        targetGo = (UnityEngine_GameObject_o *)Item.fields.Item2;
        this = (SkillCombineControl_o *)Item.fields.Item1;
        if ( !Item.fields.Item2 )
          break;
        if ( v24 >= LODWORD(Item.fields.Item2[1].monitor) )
          goto LABEL_68;
        if ( *((int *)&Item.fields.Item2[2].klass + v24) >= 1 )
        {
          this = (SkillCombineControl_o *)v8->fields.switchSkillIdsList;
          if ( !this )
            break;
          v32 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                  (System_Collections_Generic_List_T__o *)this,
                  v8->fields.switchIdx,
                  (const MethodInfo_43FED4C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
          targetGo = (UnityEngine_GameObject_o *)v32.fields.Item2;
          this = (SkillCombineControl_o *)v32.fields.Item1;
          if ( !v32.fields.Item2 )
            break;
          if ( v24 >= LODWORD(v32.fields.Item2[1].monitor) )
            goto LABEL_68;
          v30 = *((_DWORD *)&v32.fields.Item2[2].klass + v24);
        }
      }
      if ( v30 <= 0 )
      {
        v42 = v24 + 1;
      }
      else
      {
        if ( !v8->fields._TransformIsNotSkillChange_k__BackingField
          || (IsSaveTransformServant_k__BackingField = v8->fields._IsSaveTransformServant_k__BackingField) != 0 )
        {
          IsSaveTransformServant_k__BackingField = v8->fields.displayTransformIndex;
        }
        v34 = v8->fields.skillDataList;
        if ( !v34 )
          break;
        if ( (unsigned int)IsSaveTransformServant_k__BackingField >= LODWORD(v34->max_length) )
          goto LABEL_68;
        v35 = v34->m_Items[IsSaveTransformServant_k__BackingField];
        if ( !v35 )
          break;
        svtSkillLvList = v35->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v24 >= LODWORD(svtSkillLvList->max_length) )
          goto LABEL_68;
        v37 = svtSkillLvList->m_Items[v24];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        v38 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v30,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( v38 )
        {
          v39 = (SkillEntity_o *)v38;
          IconId = SkillEntity__GetIconId((SkillEntity_o *)v38, 0);
          Name = SkillEntity__getName(v39, 0);
          if ( v8->fields._IsSaveTransformServant_k__BackingField )
            targetGo = (UnityEngine_GameObject_o *)(unsigned int)v8->fields.displayTransformIndex;
          else
            targetGo = (UnityEngine_GameObject_o *)0xFFFFFFFFLL;
          this = (SkillCombineControl_o *)v8->fields.baseUserServantEntity;
          if ( !this )
            break;
          DispLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                            (UserServantEntity_o *)this,
                                                            (int32_t)targetGo,
                                                            0,
                                                            0,
                                                            0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44, v45);
          this = (SkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          if ( !this )
            break;
          if ( ServantLimitAddMaster__TryGetEntity(
                 (ServantLimitAddMaster_o *)this,
                 &entity,
                 svtId,
                 DispLimitCountStageSealAfterAtStageLimitCount,
                 0) )
          {
            this = (SkillCombineControl_o *)entity;
            if ( !entity )
              break;
            if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
            {
              this = (SkillCombineControl_o *)entity;
              if ( !entity )
                break;
              Name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v39->fields.id, Name, 0);
            }
          }
          maxLv = v39->fields.maxLv;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          Name = (System_String_o *)StringLiteral_923/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        skillMaxLv = maxLv;
        v42 = v24 + 1;
        skillName = Name;
        v47 = v30;
        skillIconId = IconId;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                              (ServantSkillMaster_o *)this,
                              svtId,
                              (int)v24 + 1,
                              v30,
                              0);
        if ( EntityFromSkillId )
        {
          v49 = EntityFromSkillId;
          v50 = (ServantSkillInfoIconComponent_o *)v25;
          v51 = v37;
          StrengthStatus = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, -1, 0);
          skillRecord = v49->fields.skillNum;
          v54 = StrengthStatus;
        }
        else
        {
          v50 = (ServantSkillInfoIconComponent_o *)v25;
          v51 = v37;
          v54 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v8->fields.baseUserServantEntity;
        transformIndex = v8->fields.displayTransformIndex;
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_2213CCC(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          callback,
          (Il2CppObject *)v8,
          Method_SkillCombineControl_OnClickInfo__,
          v58);
        if ( !v50 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          v50,
          v24,
          v47,
          v51,
          skillMaxLv,
          skillName,
          skillIconId,
          v54,
          skillRecord,
          baseUserServantEntity,
          transformIndex,
          callback,
          0);
        this = (SkillCombineControl_o *)v8->fields.targetList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v50,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__
                                                       + 4)
                                                     + 192LL)
                                         + 112LL));
        }
        else
        {
          v67 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v67 + 32) = v50;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v67 + 32), (int32_t)v50, v59, v60, v61, v62, v63, v64);
        }
      }
      v24 = v42;
      if ( v42 == v68 )
        goto LABEL_66;
    }
LABEL_67:
    sub_2213CDC(this, targetGo);
  }
LABEL_66:
  SkillCombineControl__SetNeedItemInfo(v8, v8->fields.currentIdx, v23);
}


void SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A3B0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_596A3B0 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v8, 0);
      if ( v4 )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        UIWidget__set_color(v4, v9, 0);
        if ( v7 )
        {
          UnityEngine_Behaviour__set_enabled(v7, 1, 0);
          UITweener__PlayForward((UITweener_o *)v7, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_2213CDC(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v10, 0);
  if ( !v4 )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v4, v11, 0);
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0);
}


void SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20
  System_String_o *v6; // x1

  if ( (byte_596A3A8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_596A3A8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        v6 = (System_String_o *)StringLiteral_9617/*"N0"*/,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_77143864((int64_t)&this->fields.haveQpVal, v6, 0),
        !haveQpLb) )
  {
    sub_2213CDC(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


void SkillCombineControl__SetIgnoreRandomSettings(SkillCombineControl_o *this, bool ignore, const MethodInfo *method)
{
  this->fields.ignoreRandomSettings = ignore;
}


void SkillCombineControl__SetNeedItemInfo(SkillCombineControl_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 selectSkillInfo; // x0
  Il2CppObject *Item2; // x1
  struct UILabel_array *selectSkillHelpLabels; // x8
  struct UILabel_array *v9; // x8
  int32_t v10; // w21
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v12; // x9
  ServantSkillInfoIconComponent_o *v13; // x22
  int32_t v14; // w25
  System_ValueTuple_object__object__o Item; // kr00_16
  __int64 v16; // x8
  System_ValueTuple_object__object__o v17; // kr10_16
  __int64 v18; // x8
  __int64 transformTotal; // x1
  int32_t displayTransformIndex; // w24
  struct SetLevelUpData_array *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x2
  struct SetLevelUpData_array *lvUpDataList; // x8
  int32_t v30; // w21
  const MethodInfo *v31; // x7
  struct SvtUseSkillData_array *skillDataList; // x8
  SvtUseSkillData_o *v33; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x10
  struct System_Int32_array *svtActualSkillIdList; // x9
  struct SetLevelUpData_array *v37; // x25
  int32_t v38; // w6
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x22
  __int64 v46; // x1
  __int64 v47; // x8
  Il2CppClass **v48; // x0
  System_Collections_Generic_List_T__o *switchSkillIdsList; // x21
  System_Predicate_T__o *v50; // x22
  System_Collections_Generic_List_T__o *All; // x21
  struct SetLevelUpData_array *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  unsigned __int64 v59; // x22
  __int64 v60; // x28
  System_ValueTuple_object__object__o v61; // kr20_16
  __int64 v62; // x23
  struct SvtUseSkillData_array *v63; // x8
  __int64 v64; // x9
  SvtUseSkillData_o *v65; // x9
  struct System_Int32_array *v66; // x8
  struct System_Int32_array *v67; // x9
  unsigned int *v68; // x29
  int32_t v69; // w24
  int32_t v70; // w25
  int32_t v71; // w26
  Il2CppObject *Item1; // x0
  const MethodInfo *v73; // x7
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  __int64 v80; // x23
  struct SetLevelUpData_array *v81; // x8
  __int64 v82; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596A3AE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_2213A60(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_2213A60(&SetLevelUpData___TypeInfo);
    sub_2213A60(&Method_SkillCombineControl___c__DisplayClass49_0__SetNeedItemInfo_b__0__);
    sub_2213A60(&SkillCombineControl___c__DisplayClass49_0_TypeInfo);
    byte_596A3AE = 1;
  }
  transformInfo = 0;
  v5 = sub_2213CCC(SkillCombineControl___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_58;
  *(_DWORD *)(v5 + 16) = idx;
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  if ( this->fields.baseUserServantEntity )
  {
    if ( !this->fields.targetList )
      goto LABEL_58;
    selectSkillInfo = (__int64)this->fields.selectSkillInfo;
    if ( !selectSkillInfo )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, 1, 0);
    selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
    if ( !selectSkillHelpLabels )
      goto LABEL_58;
    if ( !LODWORD(selectSkillHelpLabels->max_length) )
      goto LABEL_84;
    selectSkillInfo = (__int64)selectSkillHelpLabels->m_Items[0];
    if ( !selectSkillInfo )
      goto LABEL_58;
    selectSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectSkillInfo, 0);
    if ( !selectSkillInfo )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, this->fields.switchIdxType == 0, 0);
    v9 = this->fields.selectSkillHelpLabels;
    if ( !v9 )
      goto LABEL_58;
    if ( (v9->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_84;
    selectSkillInfo = (__int64)v9->m_Items[1];
    if ( !selectSkillInfo )
      goto LABEL_58;
    selectSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectSkillInfo, 0);
    if ( !selectSkillInfo )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, this->fields.switchIdxType != 0, 0);
    selectSkillInfo = (__int64)this->fields.targetList;
    if ( !selectSkillInfo )
      goto LABEL_58;
    v10 = 0;
    while ( v10 < *(_DWORD *)(selectSkillInfo + 24) )
    {
      selectSkillInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)selectSkillInfo,
                                   v10,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = this->fields.useSkillIdList;
      if ( !useSkillIdList )
        goto LABEL_58;
      v12 = *(int *)(v5 + 16);
      if ( (unsigned int)v12 >= LODWORD(useSkillIdList->max_length) )
        goto LABEL_84;
      v13 = (ServantSkillInfoIconComponent_o *)selectSkillInfo;
      v14 = useSkillIdList->m_Items[v12];
      if ( this->fields.switchIdxType == 2 )
      {
        selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
        if ( !selectSkillInfo )
          goto LABEL_58;
        Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                 (System_Collections_Generic_List_T__o *)selectSkillInfo,
                 this->fields.switchIdx,
                 (const MethodInfo_43FED4C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
        Item2 = Item.fields.Item2;
        selectSkillInfo = (__int64)Item.fields.Item1;
        if ( !Item.fields.Item2 )
          goto LABEL_58;
        v16 = *(int *)(v5 + 16);
        if ( (unsigned int)v16 >= LODWORD(Item.fields.Item2[1].monitor) )
          goto LABEL_84;
        if ( *((int *)&Item.fields.Item2[2].klass + v16) >= 1 )
        {
          selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
          if ( !selectSkillInfo )
            goto LABEL_58;
          v17 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                  (System_Collections_Generic_List_T__o *)selectSkillInfo,
                  this->fields.switchIdx,
                  (const MethodInfo_43FED4C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
          Item2 = v17.fields.Item2;
          selectSkillInfo = (__int64)v17.fields.Item1;
          if ( !v17.fields.Item2 )
            goto LABEL_58;
          v18 = *(int *)(v5 + 16);
          if ( (unsigned int)v18 >= LODWORD(v17.fields.Item2[1].monitor) )
            goto LABEL_84;
          v14 = *((_DWORD *)&v17.fields.Item2[2].klass + v18);
        }
      }
      if ( v13 )
      {
        ServantSkillInfoIconComponent__SetDispSelectMskImg(v13, v14 == v13->fields.currentSkillId, 0);
        selectSkillInfo = (__int64)this->fields.targetList;
        ++v10;
        if ( selectSkillInfo )
          continue;
      }
      goto LABEL_58;
    }
    if ( this->fields._TransformIsNotSkillChange_k__BackingField
      && !this->fields._IsSaveTransformServant_k__BackingField )
    {
      displayTransformIndex = 0;
      transformTotal = 1;
    }
    else
    {
      displayTransformIndex = this->fields.displayTransformIndex;
      transformTotal = (unsigned int)this->fields.transformTotal;
    }
    v21 = (struct SetLevelUpData_array *)sub_2213B20(SetLevelUpData___TypeInfo, transformTotal);
    this->fields.lvUpDataList = v21;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.lvUpDataList,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    lvUpDataList = this->fields.lvUpDataList;
    if ( !lvUpDataList )
LABEL_58:
      sub_2213CDC(selectSkillInfo, Item2);
    v30 = 0;
    while ( v30 < SLODWORD(lvUpDataList->max_length) )
    {
      selectSkillInfo = (__int64)this->fields.baseUserServantEntity;
      if ( !selectSkillInfo )
        goto LABEL_58;
      selectSkillInfo = UserServantEntity__GetTransformedServantInfo(
                          (UserServantEntity_o *)selectSkillInfo,
                          &transformInfo,
                          v30,
                          0);
      skillDataList = this->fields.skillDataList;
      if ( !skillDataList )
        goto LABEL_58;
      if ( (unsigned int)v30 >= LODWORD(skillDataList->max_length) )
        goto LABEL_84;
      v33 = skillDataList->m_Items[v30];
      if ( !v33 )
        goto LABEL_58;
      svtUseSkillIdList = v33->fields.svtUseSkillIdList;
      if ( !svtUseSkillIdList )
        goto LABEL_58;
      Item2 = (Il2CppObject *)*(int *)(v5 + 16);
      if ( (unsigned int)Item2 >= LODWORD(svtUseSkillIdList->max_length) )
        goto LABEL_84;
      svtSkillLvList = v33->fields.svtSkillLvList;
      if ( !svtSkillLvList )
        goto LABEL_58;
      if ( (unsigned int)Item2 >= LODWORD(svtSkillLvList->max_length) )
        goto LABEL_84;
      svtActualSkillIdList = v33->fields.svtActualSkillIdList;
      if ( !svtActualSkillIdList )
        goto LABEL_58;
      if ( (unsigned int)Item2 >= LODWORD(svtActualSkillIdList->max_length) )
        goto LABEL_84;
      if ( !transformInfo )
        goto LABEL_58;
      v37 = this->fields.lvUpDataList;
      v38 = this->fields._IsSaveTransformServant_k__BackingField ? v30 : -1;
      selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                   this,
                                   (int32_t)Item2,
                                   svtUseSkillIdList->m_Items[(_QWORD)Item2],
                                   svtSkillLvList->m_Items[(_QWORD)Item2],
                                   transformInfo->fields.titleText,
                                   svtActualSkillIdList->m_Items[(_QWORD)Item2],
                                   v38,
                                   v31);
      if ( !v37 )
        goto LABEL_58;
      v45 = selectSkillInfo;
      if ( selectSkillInfo )
      {
        selectSkillInfo = sub_2213BB4(selectSkillInfo, v37->obj.klass->_1.element_class);
        if ( !selectSkillInfo )
        {
LABEL_85:
          v82 = sub_2213D00(selectSkillInfo, v46);
          sub_2213BA0(v82, 0);
        }
      }
      if ( (unsigned int)v30 >= LODWORD(v37->max_length) )
        goto LABEL_84;
      v47 = v30++;
      v48 = &v37->obj.klass + v47;
      v48[4] = (Il2CppClass *)v45;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 4), v45, v39, v40, v41, v42, v43, v44);
      lvUpDataList = this->fields.lvUpDataList;
      if ( !lvUpDataList )
        goto LABEL_58;
    }
    if ( this->fields.switchIdxType == 2 )
    {
      switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
      v50 = (System_Predicate_T__o *)sub_2213CCC(System_Predicate_ValueTuple_string__int_____TypeInfo);
      System_Predicate_ValueTuple_object__object_____ctor(
        v50,
        (Il2CppObject *)v5,
        Method_SkillCombineControl___c__DisplayClass49_0__SetNeedItemInfo_b__0__,
        0);
      if ( !switchSkillIdsList )
        goto LABEL_58;
      All = System_Collections_Generic_List_ValueTuple_object__object____FindAll(
              switchSkillIdsList,
              v50,
              (const MethodInfo_43FF790 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
      selectSkillInfo = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)All, 0);
      if ( (selectSkillInfo & 1) == 0 )
      {
        if ( !All )
          goto LABEL_58;
        v52 = (struct SetLevelUpData_array *)sub_2213B20(SetLevelUpData___TypeInfo, (unsigned int)All->fields._size);
        this->fields.lvUpDataList = v52;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.lvUpDataList,
          (int32_t)v52,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        if ( All->fields._size >= 1 )
        {
          v59 = 0;
          v60 = 8;
          do
          {
            v61 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                    All,
                    v59,
                    (const MethodInfo_43FED4C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
            Item2 = v61.fields.Item2;
            selectSkillInfo = (__int64)v61.fields.Item1;
            if ( !v61.fields.Item2 )
              goto LABEL_58;
            v62 = *(int *)(v5 + 16);
            if ( (unsigned int)v62 >= LODWORD(v61.fields.Item2[1].monitor) )
              goto LABEL_84;
            v63 = this->fields.skillDataList;
            if ( !v63 )
              goto LABEL_58;
            v64 = this->fields.displayTransformIndex;
            if ( (unsigned int)v64 >= LODWORD(v63->max_length) )
              goto LABEL_84;
            v65 = v63->m_Items[v64];
            if ( !v65 )
              goto LABEL_58;
            v66 = v65->fields.svtSkillLvList;
            if ( !v66 )
              goto LABEL_58;
            if ( (unsigned int)v62 >= LODWORD(v66->max_length) )
              goto LABEL_84;
            v67 = v65->fields.svtActualSkillIdList;
            if ( !v67 )
              goto LABEL_58;
            if ( (unsigned int)v62 >= LODWORD(v67->max_length) )
              goto LABEL_84;
            v68 = (unsigned int *)this->fields.lvUpDataList;
            v69 = *((_DWORD *)&v61.fields.Item2[2].klass + v62);
            v70 = v66->m_Items[v62];
            v71 = v67->m_Items[v62];
            Item1 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                      All,
                      v59,
                      (const MethodInfo_43FED4C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__).fields.Item1;
            selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                         this,
                                         v62,
                                         v69,
                                         v70,
                                         (System_String_o *)Item1,
                                         v71,
                                         -1,
                                         v73);
            if ( !v68 )
              goto LABEL_58;
            v80 = selectSkillInfo;
            if ( selectSkillInfo )
            {
              selectSkillInfo = sub_2213BB4(selectSkillInfo, *(_QWORD *)(*(_QWORD *)v68 + 64LL));
              if ( !selectSkillInfo )
                goto LABEL_85;
            }
            if ( v59 >= v68[6] )
              goto LABEL_84;
            *(_QWORD *)&v68[v60] = v80;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v68[v60], v80, v74, v75, v76, v77, v78, v79);
            ++v59;
            v60 += 2;
          }
          while ( (__int64)v59 < All->fields._size );
        }
      }
      displayTransformIndex = 0;
    }
    v81 = this->fields.lvUpDataList;
    if ( !v81 )
      goto LABEL_58;
    if ( (unsigned int)displayTransformIndex >= LODWORD(v81->max_length) )
LABEL_84:
      sub_2213CE4(selectSkillInfo);
    SkillCombineControl__SetSvtSkillCombineData(this, v81->m_Items[displayTransformIndex], v28);
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillCombineControl__SetStateInfoMsg(SkillCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_596A3B2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7773/*"INFO_MSG_SKILLUP"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A3B2 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_12;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_12;
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0);
  if ( v3 )
  {
    *(_QWORD *)&state = StringLiteral_1/*""*/;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7773/*"INFO_MSG_SKILLUP"*/, 0);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_12:
    sub_2213CDC(detailInfoLb, *(_QWORD *)&state);
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0);
}


void SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        SetLevelUpData_o *setLvUpData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemInfoList; // x0
  int32_t v6; // w20
  UIWidget_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x21
  UILabel_o *qpLb; // x23
  System_String_o *v12; // x1
  struct System_Int32_array *combineItemIds; // x27
  struct System_Int32_array *combineItemNums; // x28
  unsigned __int64 v15; // x23
  int32_t *m_Items; // x21
  char v17; // w26
  int32_t *v18; // x24
  signed __int64 v19; // x29
  System_Collections_Generic_List_object__o *v20; // x22
  const MethodInfo *v21; // x1
  int64_t haveQpVal; // x8
  int64_t spendQpVal; // x9
  System_String_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_String_o *v29; // [xsp+8h] [xbp-68h]
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A3AF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_2213A60(&StringLiteral_18448/*"buttontxt_synthesis"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_18445/*"buttontxt_notsynthesis"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596A3AF = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_8;
  v6 = 0;
  while ( v6 < itemInfoList->fields._size )
  {
    itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemInfoList,
                                                                  v6,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( itemInfoList )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)itemInfoList, 0);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
      ++v6;
      if ( itemInfoList )
        continue;
    }
    goto LABEL_8;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.detailInfoLb;
  if ( !itemInfoList )
    goto LABEL_8;
  itemInfoList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)itemInfoList,
                                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !itemInfoList )
    goto LABEL_8;
  v30.fields.r = 0.0;
  v30.fields.a = 1.0;
  v30.fields.g = 0.87891;
  v30.fields.b = 0.98828;
  v7 = (UIWidget_o *)itemInfoList;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v30, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/,
                                                                0);
  if ( !setLvUpData )
    goto LABEL_8;
  if ( setLvUpData->fields.currentLv < setLvUpData->fields.maxLv )
  {
    v10 = itemInfoList;
    itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
    if ( itemInfoList )
    {
      UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_18448/*"buttontxt_synthesis"*/, 0);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
      if ( itemInfoList )
      {
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))itemInfoList->klass->vtable._33_get_Item.methodPtr)(
          itemInfoList,
          itemInfoList->klass->vtable._33_get_Item.method);
        qpLb = this->fields.qpLb;
        v12 = (System_String_o *)StringLiteral_9617/*"N0"*/;
        this->fields.spendQpVal = setLvUpData->fields.spendQp;
        itemInfoList = (System_Collections_Generic_List_object__o *)System_Int32__ToString_77138656(
                                                                      (int)this + 392,
                                                                      v12,
                                                                      0);
        if ( qpLb )
        {
          v29 = (System_String_o *)v10;
          UILabel__set_text(qpLb, (System_String_o *)itemInfoList, 0);
          combineItemIds = setLvUpData->fields.combineItemIds;
          if ( combineItemIds )
          {
            combineItemNums = setLvUpData->fields.combineItemNums;
            v15 = 0;
            m_Items = combineItemIds->m_Items;
            v17 = 1;
            v18 = combineItemNums->m_Items;
            v19 = LODWORD(combineItemIds->max_length) - 1;
            do
            {
              if ( (__int64)v15 <= v19 )
              {
                itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              itemInfoList,
                                                                              v15,
                                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
                if ( v15 >= LODWORD(combineItemIds->max_length) )
                  goto LABEL_47;
                if ( !combineItemNums )
                  goto LABEL_8;
                if ( v15 >= LODWORD(combineItemNums->max_length) )
                  goto LABEL_47;
                v20 = itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                LimitCntUpItemComponent__setLimitUpItemInfo(
                  (LimitCntUpItemComponent_o *)itemInfoList,
                  this->fields.userId,
                  m_Items[v15],
                  v18[v15],
                  0);
                if ( v15 >= LODWORD(combineItemIds->max_length) || v15 >= LODWORD(combineItemNums->max_length) )
LABEL_47:
                  sub_2213CE4(itemInfoList);
                CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, m_Items[v15], v18[v15], 0);
                v17 &= LOBYTE(v20[2].fields._syncRoot) != 0;
              }
              ++v15;
            }
            while ( v15 != 5 );
            itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
            if ( itemInfoList )
            {
              v31.fields.r = 1.0;
              v31.fields.g = 1.0;
              v31.fields.b = 1.0;
              v31.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)itemInfoList, v31, 0);
              haveQpVal = this->fields.haveQpVal;
              spendQpVal = this->fields.spendQpVal;
              this->fields._IsExeCombine_k__BackingField = 1;
              v24 = v29;
              if ( haveQpVal < spendQpVal )
              {
                v32.fields.r = 1.0;
                v32.fields.g = 1.0;
                v32.fields.b = 1.0;
                v32.fields.a = 1.0;
                UIWidget__set_color(v7, v32, 0);
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
                itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/,
                                                                              0);
                if ( !this->fields.qpLb )
                  goto LABEL_8;
                v33.fields.g = 0.0;
                v33.fields.b = 0.0;
                v24 = (System_String_o *)itemInfoList;
                v33.fields.r = 1.0;
                v33.fields.a = 1.0;
                UIWidget__set_color((UIWidget_o *)this->fields.qpLb, v33, 0);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              if ( (v17 & 1) == 0 )
              {
                v34.fields.r = 1.0;
                v34.fields.g = 1.0;
                v34.fields.b = 1.0;
                v34.fields.a = 1.0;
                UIWidget__set_color(v7, v34, 0);
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
                v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/, 0);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              SkillCombineControl__SetExeBtnState(this, v21);
              itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.detailInfoLb;
              if ( itemInfoList )
              {
                UILabel__set_text((UILabel_o *)itemInfoList, v24, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_8:
    sub_2213CDC(itemInfoList, setLvUpData);
  }
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, (const MethodInfo *)setLvUpData);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  UILabel__set_text((UILabel_o *)itemInfoList, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  v35.fields.r = 1.0;
  v35.fields.g = 1.0;
  v35.fields.b = 1.0;
  v35.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v35, 0);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_18445/*"buttontxt_notsynthesis"*/, 0);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))itemInfoList->klass->vtable._33_get_Item.methodPtr)(
    itemInfoList,
    itemInfoList->klass->vtable._33_get_Item.method);
}


void SkillCombineControl__SetTitleText(SkillCombineControl_o *this, const MethodInfo *method)
{
  int32_t switchIdxType; // w8
  System_Collections_Generic_List_T__o *switchSkillIdsList; // x0
  struct UnityEngine_Color_o *p_CondTitleLabelColor_k__BackingField; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  UILabel_o *condTitleLabel; // x20
  System_ValueTuple_object__object__o Item; // kr00_16
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v15; // x9
  float *v16; // x10
  float *v17; // x11
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF
  UnityEngine_Color_o CondTitleSpriteColor_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A3AB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    byte_596A3AB = 1;
  }
  switchIdxType = this->fields.switchIdxType;
  transformInfo = 0;
  if ( switchIdxType == 2 )
  {
    switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
    if ( switchSkillIdsList )
    {
      condTitleLabel = this->fields.condTitleLabel;
      Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
               switchSkillIdsList,
               this->fields.switchIdx,
               (const MethodInfo_43FED4C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
      method = (const MethodInfo *)Item.fields.Item2;
      switchSkillIdsList = (System_Collections_Generic_List_T__o *)Item.fields.Item1;
      if ( condTitleLabel )
      {
        UILabel__set_text(condTitleLabel, (System_String_o *)Item.fields.Item1, 0);
        return;
      }
    }
    goto LABEL_25;
  }
  if ( switchIdxType != 1 )
    return;
  switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.baseUserServantEntity;
  if ( !switchSkillIdsList )
    goto LABEL_25;
  switchSkillIdsList = (System_Collections_Generic_List_T__o *)UserServantEntity__GetTransformedServantInfo(
                                                                 (UserServantEntity_o *)switchSkillIdsList,
                                                                 &transformInfo,
                                                                 this->fields.displayTransformIndex,
                                                                 0);
  if ( !transformInfo )
    goto LABEL_25;
  switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.condTitleLabel;
  if ( !switchSkillIdsList )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)switchSkillIdsList, transformInfo->fields.titleText, 0);
  switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.condTitleLabel;
  if ( this->fields._IsSaveTransformServant_k__BackingField )
  {
    if ( this->fields.displayTransformIndex <= 0 )
    {
      p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColor_k__BackingField;
      p_g = &this->fields._CondTitleLabelColor_k__BackingField.fields.g;
      p_b = &this->fields._CondTitleLabelColor_k__BackingField.fields.b;
      p_a = &this->fields._CondTitleLabelColor_k__BackingField.fields.a;
      if ( !switchSkillIdsList )
        goto LABEL_25;
    }
    else
    {
      p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColorAfter_k__BackingField;
      p_g = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.g;
      p_b = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.b;
      p_a = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a;
      if ( !switchSkillIdsList )
        goto LABEL_25;
    }
    v20.fields.a = *p_a;
    v20.fields.b = *p_b;
    v20.fields.g = *p_g;
    v20.fields.r = p_CondTitleLabelColor_k__BackingField->fields.r;
    UIWidget__set_color((UIWidget_o *)switchSkillIdsList, v20, 0);
    switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.condTitleSprite;
    if ( this->fields.displayTransformIndex <= 0 )
    {
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
      v15 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
      v16 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
      v17 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
      if ( !switchSkillIdsList )
        goto LABEL_25;
    }
    else
    {
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
      v15 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
      v16 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
      v17 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
      if ( !switchSkillIdsList )
        goto LABEL_25;
    }
    CondTitleSpriteColor_k__BackingField.fields.a = *v17;
    CondTitleSpriteColor_k__BackingField.fields.b = *v16;
    CondTitleSpriteColor_k__BackingField.fields.g = *v15;
    CondTitleSpriteColor_k__BackingField.fields.r = p_CondTitleSpriteColor_k__BackingField->fields.r;
    goto LABEL_22;
  }
  if ( !switchSkillIdsList
    || (UIWidget__set_color((UIWidget_o *)switchSkillIdsList, this->fields._CondTitleLabelColor_k__BackingField, 0),
        (switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.condTitleSprite) == 0) )
  {
LABEL_25:
    sub_2213CDC(switchSkillIdsList, method);
  }
  CondTitleSpriteColor_k__BackingField = this->fields._CondTitleSpriteColor_k__BackingField;
LABEL_22:
  UIWidget__set_color((UIWidget_o *)switchSkillIdsList, CondTitleSpriteColor_k__BackingField, 0);
}


bool SkillCombineControl__TrySetSwitchSkillIdsList(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_ValueTuple_object__object__o v10; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct SvtUseSkillData_array *skillDataList; // x8
  ServantSkillAddMaster_o *v15; // x25
  int32_t displayTransformIndex; // w9
  SvtUseSkillData_o *v17; // x28
  struct System_Int32_array *svtUseSkillIdList; // x8
  BalanceConfig_c **v19; // x23
  unsigned __int64 v20; // x20
  unsigned __int64 max_length_low; // x9
  struct UserServantEntity_o *v22; // x10
  BalanceConfig_c **v23; // x29
  __int64 v24; // x23
  __int64 v25; // x24
  int32_t v26; // w21
  int32_t svtId; // w22
  struct System_String_array *currentCryptoKey; // x8
  ServantSkillAddEntity_o *v29; // x21
  unsigned __int64 v30; // x28
  __int64 v31; // x23
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_String_array *titles; // x8
  System_Collections_Generic_List_T__o *switchSkillIdsList; // x24
  System_Predicate_T__o *v39; // x25
  System_ValueTuple_object__object__o v40; // kr40_16
  BalanceConfig_c *v41; // x0
  Il2CppObject *v42; // x22
  Il2CppObject *v43; // x2
  const MethodInfo_3CF8CCC *v44; // x4
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int64_t v50; // x8
  _QWORD *v51; // x9
  __int64 hiddenValue_low; // x10
  int64_t v53; // x8
  struct System_Int32_array *skillIds; // x9
  UIWidget_o *condTitleLabel; // x22
  System_String_o *CondLabelColor; // x23
  UIWidget_o *condTitleSprite; // x22
  System_String_o *CondSpriteColor; // x21
  SvtUseSkillData_o *v60; // [xsp+8h] [xbp-88h]
  ServantSkillAddMaster_o *v61; // [xsp+10h] [xbp-80h]
  System_ValueTuple_object__object__o v62; // [xsp+18h] [xbp-78h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  System_ValueTuple_object__object__o v65; // 0:x0.16
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A3AC & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
    sub_2213A60(&System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_2213A60(&Method_SkillCombineControl___c__DisplayClass46_0__TrySetSwitchSkillIdsList_b__0__);
    sub_2213A60(&SkillCombineControl___c__DisplayClass46_0_TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_string__int_____ctor__);
    byte_596A3AC = 1;
  }
  v62.fields.Item2 = 0;
  transformInfo = 0;
  v62.fields.Item1 = 0;
  v3 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_43FE7B4 *)Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
  this->fields.switchSkillIdsList = (struct System_Collections_Generic_List_ValueTuple_string__int_____o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.switchSkillIdsList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_50;
  UserServantEntity__GetTransformedServantInfo(
    baseUserServantEntity,
    &transformInfo,
    this->fields.displayTransformIndex,
    0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  skillDataList = this->fields.skillDataList;
  v15 = (ServantSkillAddMaster_o *)baseUserServantEntity;
  if ( !this->fields._TransformIsNotSkillChange_k__BackingField
    || (displayTransformIndex = this->fields._IsSaveTransformServant_k__BackingField) != 0 )
  {
    displayTransformIndex = this->fields.displayTransformIndex;
  }
  if ( !skillDataList )
    goto LABEL_50;
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_52:
    sub_2213CE4(baseUserServantEntity);
  v17 = skillDataList->m_Items[displayTransformIndex];
  if ( !v17 || (svtUseSkillIdList = v17->fields.svtUseSkillIdList) == 0 )
LABEL_50:
    sub_2213CDC(baseUserServantEntity, v10.fields.Item1);
  v19 = &BalanceConfig_TypeInfo;
  v20 = 0;
  v60 = v17;
  v61 = (ServantSkillAddMaster_o *)baseUserServantEntity;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    if ( (__int64)v20 >= (int)max_length_low )
      return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.switchSkillIdsList, 0);
    if ( v20 >= max_length_low )
      goto LABEL_52;
    if ( !transformInfo )
      goto LABEL_50;
    v22 = this->fields.baseUserServantEntity;
    if ( !v22 )
      goto LABEL_50;
    v23 = v19;
    v24 = *(_QWORD *)&v22->fields.limitCount.fields.currentCryptoKey;
    v25 = *(_QWORD *)&v22->fields.limitCount.fields.fakeValue;
    v26 = svtUseSkillIdList->m_Items[v20];
    svtId = transformInfo->fields.svtId;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        v10.fields.Item1,
        v10.fields.Item2);
    *(_QWORD *)&v64.fields.currentCryptoKey = v24;
    *(_QWORD *)&v64.fields.fakeValue = v25;
    baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     v64,
                                                     0);
    if ( !transformInfo || !v15 )
      goto LABEL_50;
    v19 = v23;
    baseUserServantEntity = (UserServantEntity_o *)ServantSkillAddMaster__GetEnableEntity(
                                                     v15,
                                                     svtId,
                                                     (int32_t)baseUserServantEntity,
                                                     v26,
                                                     0,
                                                     transformInfo->fields.dispLimitCount,
                                                     1,
                                                     0);
    if ( baseUserServantEntity )
    {
      currentCryptoKey = (struct System_String_array *)baseUserServantEntity->fields.userId.fields.currentCryptoKey;
      v29 = (ServantSkillAddEntity_o *)baseUserServantEntity;
      if ( !currentCryptoKey )
        goto LABEL_50;
      v30 = 0;
      while ( (__int64)v30 < SLODWORD(currentCryptoKey->max_length) )
      {
        v31 = sub_2213CCC(SkillCombineControl___c__DisplayClass46_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v31, 0);
        titles = v29->fields.titles;
        if ( !titles )
          goto LABEL_50;
        if ( v30 >= LODWORD(titles->max_length) )
          goto LABEL_52;
        if ( !v31 )
          goto LABEL_50;
        v10.fields.Item1 = (Il2CppObject *)titles->m_Items[v30];
        *(_QWORD *)(v31 + 16) = v10.fields.Item1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v31 + 16),
          (int32_t)v10.fields.Item1,
          (System_String_o *)v10.fields.Item2,
          v32,
          v33,
          v34,
          v35,
          v36);
        switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
        v39 = (System_Predicate_T__o *)sub_2213CCC(System_Predicate_ValueTuple_string__int_____TypeInfo);
        System_Predicate_ValueTuple_object__object_____ctor(
          v39,
          (Il2CppObject *)v31,
          Method_SkillCombineControl___c__DisplayClass46_0__TrySetSwitchSkillIdsList_b__0__,
          0);
        if ( !switchSkillIdsList )
          goto LABEL_50;
        v40 = System_Collections_Generic_List_ValueTuple_object__object____Find(
                switchSkillIdsList,
                v39,
                (const MethodInfo_43FF6D4 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
        v62 = v40;
        baseUserServantEntity = (UserServantEntity_o *)System_String__op_Equality(
                                                         (System_String_o *)v40.fields.Item1,
                                                         0,
                                                         0);
        if ( ((unsigned __int8)baseUserServantEntity & 1) != 0 && !v40.fields.Item2 )
        {
          v41 = *v23;
          v42 = *(Il2CppObject **)(v31 + 16);
          if ( !*(&(*v23)->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v41, v10.fields.Item1, v10.fields.Item2);
            v41 = *v23;
          }
          v43 = (Il2CppObject *)sub_2213B20(int___TypeInfo, (unsigned int)v41->static_fields->SvtSkillListMax);
          v65.fields.Item1 = (Il2CppObject *)&v62;
          v65.fields.Item2 = v42;
          System_ValueTuple_object__object____ctor(
            v65,
            v43,
            (Il2CppObject *)Method_System_ValueTuple_string__int_____ctor__,
            v44);
          baseUserServantEntity = (UserServantEntity_o *)this->fields.switchSkillIdsList;
          if ( !baseUserServantEntity )
            goto LABEL_50;
          v50 = baseUserServantEntity->fields.id.fields.currentCryptoKey;
          v10 = v62;
          v51 = Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__;
          ++HIDWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( !v50 )
            goto LABEL_50;
          hiddenValue_low = SLODWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= *(_DWORD *)(v50 + 24) )
          {
            System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
              (System_Collections_Generic_List_T__o *)baseUserServantEntity,
              v10,
              *(const MethodInfo_43FF060 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = v50 + 16 * hiddenValue_low;
            LODWORD(baseUserServantEntity->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
            *(System_ValueTuple_object__object__o *)(v53 + 32) = v10;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v53 + 32),
              0,
              (System_String_o *)v10.fields.Item2,
              v45,
              v46,
              v47,
              v48,
              v49);
          }
        }
        skillIds = v29->fields.skillIds;
        if ( skillIds )
        {
          if ( v30 >= LODWORD(skillIds->max_length) )
            goto LABEL_52;
          LODWORD(skillIds) = skillIds->m_Items[v30];
        }
        if ( v62.fields.Item2 )
        {
          if ( v20 >= LODWORD(v62.fields.Item2[1].monitor) )
            goto LABEL_52;
          currentCryptoKey = v29->fields.titles;
          ++v30;
          *((_DWORD *)&v62.fields.Item2[2].klass + v20) = (_DWORD)skillIds;
          if ( currentCryptoKey )
            continue;
        }
        goto LABEL_50;
      }
      condTitleLabel = (UIWidget_o *)this->fields.condTitleLabel;
      CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v29, 0);
      DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
      v67 = ColorHelper__ParseColorCode_51166816(CondLabelColor, DefaultCondTitleLabelColor, 0);
      if ( !condTitleLabel )
        goto LABEL_50;
      UIWidget__set_color(condTitleLabel, v67, 0);
      condTitleSprite = (UIWidget_o *)this->fields.condTitleSprite;
      CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v29, 0);
      DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
      v69 = ColorHelper__ParseColorCode_51166816(CondSpriteColor, DefaultCondTitleSpriteColor, 0);
      v17 = v60;
      v15 = v61;
      if ( !condTitleSprite )
        goto LABEL_50;
      v19 = v23;
      UIWidget__set_color(condTitleSprite, v69, 0);
    }
    svtUseSkillIdList = v17->fields.svtUseSkillIdList;
    ++v20;
    if ( !svtUseSkillIdList )
      goto LABEL_50;
  }
}


bool SkillCombineControl__get_IsSkillSwitchable(SkillCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.switchIdxType != 0;
}


void SkillCombineControl___c__DisplayClass46_0___ctor(
        SkillCombineControl___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SkillCombineControl___c__DisplayClass46_0___TrySetSwitchSkillIdsList_b__0(
        SkillCombineControl___c__DisplayClass46_0_o *this,
        System_ValueTuple_string__int____o x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x.fields.Item1, this->fields.title, 0);
}


void SkillCombineControl___c__DisplayClass49_0___ctor(
        SkillCombineControl___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SkillCombineControl___c__DisplayClass49_0___SetNeedItemInfo_b__0(
        SkillCombineControl___c__DisplayClass49_0_o *this,
        System_ValueTuple_string__int____o x,
        const MethodInfo *method)
{
  __int64 idx; // x8

  if ( !x.fields.Item2 )
    sub_2213CDC(this, x.fields.Item1);
  idx = this->fields.idx;
  if ( (unsigned int)idx >= LODWORD(x.fields.Item2->max_length) )
    sub_2213CE4(this);
  return x.fields.Item2->m_Items[idx] > 0;
}