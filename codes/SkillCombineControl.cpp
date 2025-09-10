void SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C2B571 & 1) == 0 )
  {
    sub_1C2D490(&CombineMenuControl_TypeInfo);
    byte_4C2B571 = 1;
  }
  this->fields.ignoreRandomSettings = 1;
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool SkillCombineControl__CheckIsMaxLvSkills(
        SkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  System_Int32_array *SkillIdList; // x19
  __int64 v5; // x2
  il2cpp_array_size_t max_length; // x8
  bool v7; // w22
  SkillCombineControl_o *v8; // x20
  unsigned __int64 v9; // x23
  struct CombineRootComponent_o **p_combineRootComponent; // x27
  int32_t v11; // w21
  int32_t v12; // w29

  if ( (byte_4C2B56C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (SkillCombineControl_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B56C = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))resData->klass->vtable._6_getSkillLevelList.methodPtr)(
                                          resData,
                                          resData->klass->vtable._6_getSkillLevelList.method),
        !SkillIdList) )
  {
LABEL_17:
    sub_1C2D6EC(this, resData);
  }
  max_length = SkillIdList->max_length;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = this;
    v9 = 0;
    p_combineRootComponent = &this->fields.combineRootComponent;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        goto LABEL_18;
      if ( !v8 )
        goto LABEL_17;
      if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
LABEL_18:
        sub_1C2D6F4(this, resData, v5);
      v11 = SkillIdList->m_Items[v9];
      if ( v11 >= 1 )
      {
        v12 = *((_DWORD *)p_combineRootComponent + v9);
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v11,
                                          (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_17;
        if ( v12 < this->fields.type )
          return !v7;
      }
      LODWORD(max_length) = SkillIdList->max_length;
      v7 = (__int64)++v9 < (int)max_length;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  return !v7;
}


SetLevelUpData_o *SkillCombineControl__CreateLeveUpData(
        SkillCombineControl_o *this,
        int32_t idx,
        int32_t skillId,
        int32_t skillLv,
        System_String_o *titleText,
        int32_t actualSkillId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  SkillEntity_o *v15; // x21
  const MethodInfo *v16; // x2
  CombineSkillEntity_o *CombineSkillEntity; // x25
  __int64 v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  System_String_o *Name; // x0
  System_String_o **v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  int32_t qp; // w1
  System_Nullable_int__o v28; // x0
  float v29; // s0
  System_Nullable_float__o v30; // x0
  float v31; // x26^4
  int v32; // w27
  const MethodInfo *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  float CombineCampaignQpRate; // s0
  System_Nullable_float__o v37; // x0
  float v38; // w8
  int v39; // w8
  __int64 itemIds; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 itemNums; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantLimitImageMaster_o *v47; // x23
  __int64 v48; // x24
  __int64 v49; // x25
  int32_t v50; // w24
  int32_t ServantImageLimitSealAfter; // w24
  struct UserServantEntity_o *v52; // x8
  ServantLimitAddMaster_o *v53; // x23
  struct UserServantEntity_o *v54; // x8
  int32_t v55; // w19
  int32_t v56; // w25
  System_String_o *OverwriteSkillName; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v61; // [xsp+0h] [xbp-60h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4C2B56E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&Method_System_Nullable_float__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&SetLevelUpData_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B56E = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_40;
  v15 = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           skillId,
                           (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  CombineSkillEntity = SkillCombineControl__GetCombineSkillEntity(this, skillLv, v16);
  v18 = sub_1C2D6DC(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v18, 0);
  if ( !v18 )
    goto LABEL_40;
  *(_DWORD *)(v18 + 16) = skillId;
  *(_DWORD *)(v18 + 20) = actualSkillId;
  *(_DWORD *)(v18 + 24) = idx + 1;
  *(_DWORD *)(v18 + 28) = idx;
  v21 = StringLiteral_1/*""*/;
  *(_QWORD *)(v18 + 32) = StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v18 + 32), v21, v19, v20);
  if ( !v15 )
    goto LABEL_40;
  Name = SkillEntity__getName(v15, 0);
  *(_QWORD *)(v18 + 40) = Name;
  v23 = (System_String_o **)(v18 + 40);
  sub_1C2D434((CGThumbnailListItem_o *)(v18 + 40), (int32_t)Name, v24, v25);
  *(_DWORD *)(v18 + 64) = skillLv;
  *(_DWORD *)(v18 + 68) = skillLv + 1;
  *(_DWORD *)(v18 + 72) = v15->fields.maxLv;
  if ( CombineSkillEntity
    && (qp = CombineSkillEntity->fields.qp,
        v28 = (System_Nullable_int__o)&v61,
        v61 = 0,
        System_Nullable_int____ctor(v28, qp, (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__),
        (_BYTE)v61) )
  {
    v29 = (float)SHIDWORD(v61);
    v30 = (System_Nullable_float__o)&v61;
    v61 = 0;
    System_Nullable_float____ctor(v30, v29, (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
    v31 = *((float *)&v61 + 1);
    v32 = (unsigned __int8)v61;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(this, v33);
    if ( v32 )
    {
      v37 = (System_Nullable_float__o)&v61;
      v61 = 0;
      System_Nullable_float____ctor(
        v37,
        CombineCampaignQpRate * v31,
        (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
      v38 = *((float *)&v61 + 1);
      goto LABEL_13;
    }
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(this, v26);
  }
  v38 = 0.0;
LABEL_13:
  if ( v38 == INFINITY )
    v39 = 0x80000000;
  else
    v39 = (int)v38;
  *(_DWORD *)(v18 + 76) = v39;
  *(_QWORD *)(v18 + 80) = this->fields.userQP;
  if ( !CombineSkillEntity || (itemIds = (__int64)CombineSkillEntity->fields.itemIds) == 0 )
    itemIds = sub_1C2D538(int___TypeInfo, 0);
  *(_QWORD *)(v18 + 96) = itemIds;
  sub_1C2D434((CGThumbnailListItem_o *)(v18 + 96), itemIds, v34, v35);
  if ( !CombineSkillEntity || (itemNums = (__int64)CombineSkillEntity->fields.itemNums) == 0 )
    itemNums = sub_1C2D538(int___TypeInfo, 0);
  *(_QWORD *)(v18 + 104) = itemNums;
  sub_1C2D434((CGThumbnailListItem_o *)(v18 + 104), itemNums, v41, v42);
  *(_QWORD *)(v18 + 56) = titleText;
  sub_1C2D434((CGThumbnailListItem_o *)(v18 + 56), (int32_t)titleText, v44, v45);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_40;
  v47 = (ServantLimitImageMaster_o *)Instance;
  v49 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v49;
  *(_QWORD *)&v63.fields.fakeValue = v48;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v63, 0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_40;
  v50 = (int)Instance;
  Instance = (DataManager_o *)UserServantEntity__getDispLimitCount(this->fields.baseUserServantEntity, 0, 0);
  if ( !v47 )
    goto LABEL_40;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v47, v50, (int32_t)Instance, 0);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v52 = this->fields.baseUserServantEntity;
  if ( !v52 )
    goto LABEL_40;
  v53 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52->fields.svtId, 0);
  v54 = this->fields.baseUserServantEntity;
  if ( !v54 )
    goto LABEL_40;
  v55 = (int)Instance;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v54->fields.limitCount, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, v56, 0);
  if ( !v53 )
    goto LABEL_40;
  if ( ServantLimitAddMaster__TryGetEntity(v53, &entity, v55, (int32_t)Instance, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_40;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        OverwriteSkillName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v15->fields.id, *v23, 0);
        *v23 = OverwriteSkillName;
        sub_1C2D434((CGThumbnailListItem_o *)(v18 + 40), (int32_t)OverwriteSkillName, v58, v59);
        return (SetLevelUpData_o *)v18;
      }
LABEL_40:
      sub_1C2D6EC(Instance, v14);
    }
  }
  return (SetLevelUpData_o *)v18;
}


float SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *combineEventList; // x0
  float v4; // s8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2B570 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    byte_4C2B570 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  v4 = 1.0;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      combineEventList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v5 )
        break;
      if ( !v8.fields._current )
        sub_1C2D6EC(v5, v6);
      if ( *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v4 = *(float *)((char *)&v8.fields._current->klass + (unsigned __int64)&word_38);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  return v4;
}


CombineSkillEntity_o *SkillCombineControl__GetCombineSkillEntity(
        SkillCombineControl_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  Il2CppObject *v11; // x20
  CombineSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C2B56F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CombineSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B56F = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_12;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v14, 0);
  if ( !v8
    || (v11 = DataMasterBase_object__object__int___GetEntity(
                v8,
                (int32_t)Master_object,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v11)
    || !Master_object )
  {
LABEL_12:
    sub_1C2D6EC(Master_object, v6);
  }
  CombineSkillMaster__TryGetEntity((CombineSkillMaster_o *)Master_object, &entity, (int32_t)v11[7].klass, skillLv, 0);
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
  bool v8; // w6
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Int32_array *TransformedSkillIdList; // x1
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C2B563 & 1) == 0 )
  {
    sub_1C2D490(&SvtUseSkillData_TypeInfo);
    byte_4C2B563 = 1;
  }
  v5 = sub_1C2D6DC(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v5, 0);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  v8 = this->fields.transformTotal > 1 || this->fields.ignoreRandomSettings;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedSkillIdList(
                                                   baseUserServantEntity,
                                                   transformIndex,
                                                   -1,
                                                   -1,
                                                   1,
                                                   -1,
                                                   v8,
                                                   0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = baseUserServantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)baseUserServantEntity, v9, v10);
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
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)TransformedSkillIdList, v11, v12);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
LABEL_14:
    sub_1C2D6EC(baseUserServantEntity, v6);
  v14 = ((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.methodPtr)(
          baseUserServantEntity,
          baseUserServantEntity->klass->vtable._6_getSkillLevelList.method);
  *(_QWORD *)(v5 + 24) = v14;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), v14, v15, v16);
  return (SvtUseSkillData_o *)v5;
}


SetLevelUpData_o *SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SetLevelUpData_array *lvUpDataList; // x8

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_1C2D6EC(this, method);
  if ( !LODWORD(lvUpDataList->max_length) )
    sub_1C2D6F4(this, method, v2);
  return lvUpDataList->m_Items[0];
}


int32_t SkillCombineControl__GetTutorialOpenType(SkillCombineControl_o *this, const MethodInfo *method)
{
  return 37;
}


void SkillCombineControl__InitDispCombineInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *preSelectBaseLb; // x20
  void *gameObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct UILabel_array *selectSkillHelpLabels; // x22
  int max_length; // w8
  unsigned int v10; // w23
  UILabel_o *v11; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v14; // x1
  int v15; // w21
  int32_t v16; // w20
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B55F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8799/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_1C2D490(&StringLiteral_8802/*"MSG_SKILL_SELECT"*/);
    sub_1C2D490(&StringLiteral_9231/*"NEED_QP_INFO"*/);
    byte_4C2B55F = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8799/*"MSG_PRESELECT_BASE_SVT"*/, 0);
  if ( !preSelectBaseLb )
    goto LABEL_29;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)gameObject, 0);
  gameObject = this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = this->fields.selectSkillInfo;
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  SkillCombineControl__SetHaveQpInfo(this, v6);
  selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
  if ( !selectSkillHelpLabels )
    goto LABEL_29;
  max_length = selectSkillHelpLabels->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2D6F4(gameObject, v5, v7);
      v11 = selectSkillHelpLabels->m_Items[v10];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MSG_SKILL_SELECT"*/, 0);
      if ( !v11 )
        break;
      UILabel__set_text(v11, (System_String_o *)gameObject, 0);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_18;
    }
LABEL_29:
    sub_1C2D6EC(gameObject, v5);
  }
LABEL_18:
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NEED_QP_INFO"*/, 0);
  if ( !needQpLb )
    goto LABEL_29;
  UILabel__set_text(needQpLb, (System_String_o *)gameObject, 0);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  gameObject = System_Int32__ToString((int)this + 320, 0);
  if ( !qpLb )
    goto LABEL_29;
  UILabel__set_text(qpLb, (System_String_o *)gameObject, 0);
  gameObject = this->fields.qpLb;
  if ( !gameObject )
    goto LABEL_29;
  v17.fields.r = 1.0;
  v17.fields.g = 1.0;
  v17.fields.b = 1.0;
  v17.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v17, 0);
  SkillCombineControl__ResetDispSkillInfo(this, v14);
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_29;
  v15 = *((_DWORD *)gameObject + 6);
  if ( v15 >= 1 )
  {
    v16 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v16,
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0);
      if ( v15 == ++v16 )
        goto LABEL_30;
      gameObject = this->fields.itemInfoList;
    }
    while ( gameObject );
    goto LABEL_29;
  }
LABEL_30:
  gameObject = this->fields.skillSwitchButton;
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = this->fields.condTitleLabel;
  if ( !gameObject )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_29;
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
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  MenuListControl_o *v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2B55E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17664/*"buttontxt_synthesis"*/);
    byte_4C2B55E = 1;
  }
  memset(&v21, 0, sizeof(v21));
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
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17664/*"buttontxt_synthesis"*/, 0);
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
  this->fields.userQP = *((_QWORD *)helpBtn + 12);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    helpBtn = this->fields.charaGraph;
    if ( !helpBtn )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.charaGraph, 0, v11, v12);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0),
        (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_30:
    sub_1C2D6EC(helpBtn, v5);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v13, v14);
  v17 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v17 && v17->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      v17,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v18 )
        break;
      if ( !v21.fields._current )
        sub_1C2D6EC(v18, v19);
      if ( *(_DWORD *)((char *)&v21.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v20 = this->fields.menuListCtr;
        if ( !v20 )
          sub_1C2D6EC(0, v19);
        MenuListControl__setBannerIcon(
          v20,
          this->fields.eventNoticeImg,
          *(EventEntity_o **)((char *)&v21.fields._current->klass + (unsigned __int64)off_50),
          0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4C2B56A & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3765/*"CONFIRM_TITLE_SKILL_COMBINE"*/);
    byte_4C2B56A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C2D6EC(v3, v4);
  SetRarityDialogControl__SetSkillNpCombineInfo(exeCombineDlg, this->fields.lvUpDataList, v3, 0);
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
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  UnityEngine_GameObject_o *v11; // x1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v2 = this;
  if ( (byte_4C2B56D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SkillCombineControl_o *)sub_1C2D490(&Method_SkillCombineControl_OnClickSwitchSkill__);
    byte_4C2B56D = 1;
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
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
LABEL_17:
    sub_1C2D6EC(this, method);
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v16, 0);
  SkillCombineControl__SetCombineSkillList(v2, v11, v10, v12);
  if ( v2->fields.switchIdxType )
    SkillCombineControl__SetTitleText(v2, v13);
  v14 = Method_SkillCombineControl_OnClickSwitchSkill__;
  if ( (*((_BYTE *)Method_SkillCombineControl_OnClickSwitchSkill__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C2D4A8(Method_SkillCombineControl_OnClickSwitchSkill__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C2D474(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
}


void SkillCombineControl__ResetDispSkillInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *skillInfoList; // x0
  int size; // w8
  int v5; // w22
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B560 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    byte_4C2B560 = 1;
  }
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_13;
  size = skillInfoList->fields._size;
  v5 = size - 1;
  if ( size >= 1 )
  {
    v6 = 0;
    do
    {
      skillInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     skillInfoList,
                                                                     v6,
                                                                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !skillInfoList )
        break;
      v7 = (UnityEngine_Component_o *)skillInfoList;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)skillInfoList, 0);
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)v6 * 230.0, 0);
      v9 = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalPositionY(v9, 0.0, 0);
      v10 = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalScale_35920504(v10, 1.0, 0);
      if ( v5 == v6 )
        goto LABEL_10;
      skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
      ++v6;
    }
    while ( skillInfoList );
LABEL_13:
    sub_1C2D6EC(skillInfoList, method);
  }
LABEL_10:
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.condTitleLabel;
  if ( !skillInfoList )
    goto LABEL_13;
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skillInfoList, v11, 0);
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.condTitleSprite;
  if ( !skillInfoList )
    goto LABEL_13;
  v12.fields.g = 0.33333;
  v12.fields.b = 0.8;
  v12.fields.r = 0.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skillInfoList, v12, 0);
}


void SkillCombineControl__SetBaseSvtCardImg(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(SkillCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1C2D434((CGThumbnailListItem_o *)p_charaGraph, (int32_t)v5, v6, v7);
}


void SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  int32_t TransformCount; // w0
  int32_t *p_switchIdxType; // x23
  struct SvtUseSkillData_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  unsigned __int64 v19; // x21
  __int64 v20; // x24
  unsigned int *skillDataList; // x25
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  UnityEngine_Component_o *v24; // x22
  signed __int64 transformTotal; // x8
  int v26; // w8
  const MethodInfo *v27; // x1
  __int64 v28; // x20
  __int64 v29; // x21
  int32_t v30; // w0
  UnityEngine_GameObject_o *v31; // x1
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4C2B562 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&SvtUseSkillData___TypeInfo);
    byte_4C2B562 = 1;
  }
  if ( usrSvtEn )
  {
    v7 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v35;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v34, 0);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v8;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)usrSvtEn, v9, v10);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb )
      goto LABEL_31;
    preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0);
    if ( !preSelectBaseLb )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb;
    if ( !preSelectBaseLb )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0);
    this->fields.displayTransformIndex = 0;
    TransformCount = UserServantEntity__GetTransformCount(usrSvtEn, 1, 0);
    CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0);
    this->fields.switchIdx = 0;
    this->fields.switchIdxType = 0;
    p_switchIdxType = &this->fields.switchIdxType;
    v15 = (struct SvtUseSkillData_array *)sub_1C2D538(
                                            SvtUseSkillData___TypeInfo,
                                            (unsigned int)this->fields.transformTotal);
    this->fields.skillDataList = v15;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillDataList, (int32_t)v15, v16, v17);
    if ( this->fields.transformTotal < 1 )
      goto LABEL_17;
    v19 = 0;
    v20 = 8;
    do
    {
      skillDataList = (unsigned int *)this->fields.skillDataList;
      preSelectBaseLb = (UnityEngine_Component_o *)SkillCombineControl__GetSvtSkillData(this, v19, v18);
      if ( !skillDataList )
        goto LABEL_31;
      v24 = preSelectBaseLb;
      if ( preSelectBaseLb )
      {
        preSelectBaseLb = (UnityEngine_Component_o *)sub_1C2D5CC(
                                                       preSelectBaseLb,
                                                       *(_QWORD *)(*(_QWORD *)skillDataList + 64LL));
        if ( !preSelectBaseLb )
        {
          v33 = sub_1C2D710(0);
          sub_1C2D5B8(v33, 0);
        }
      }
      if ( v19 >= skillDataList[6] )
        sub_1C2D6F4(preSelectBaseLb, v11, v22);
      *(_QWORD *)&skillDataList[v20] = v24;
      sub_1C2D434((CGThumbnailListItem_o *)&skillDataList[v20], (int32_t)v24, v22, v23);
      transformTotal = this->fields.transformTotal;
      ++v19;
      v20 += 2;
    }
    while ( (__int64)v19 < transformTotal );
    if ( (int)transformTotal > 1 )
    {
      v26 = 1;
    }
    else
    {
LABEL_17:
      if ( !SkillCombineControl__TrySetSwitchSkillIdsList(this, v11) )
      {
LABEL_21:
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
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, *p_switchIdxType != 0, 0);
              if ( *p_switchIdxType )
                SkillCombineControl__SetTitleText(this, v27);
              else
                SkillCombineControl__ResetDispSkillInfo(this, v27);
              v29 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
              v28 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v36.fields.currentCryptoKey = v29;
              *(_QWORD *)&v36.fields.fakeValue = v28;
              v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0);
              SkillCombineControl__SetCombineSkillList(this, v31, v30, v32);
              return;
            }
          }
        }
LABEL_31:
        sub_1C2D6EC(preSelectBaseLb, v11);
      }
      v26 = 2;
    }
    *p_switchIdxType = v26;
    goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void SkillCombineControl__SetCombineSkillList(
        SkillCombineControl_o *this,
        UnityEngine_GameObject_o *targetGo,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v4; // w28
  SkillCombineControl_o *v5; // x20
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SvtUseSkillData_o *v8; // x8
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  il2cpp_array_size_t max_length; // x21
  System_Collections_Generic_List_object__o *v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  unsigned __int64 v15; // x24
  UnityEngine_Component_o *v16; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  struct System_Int32_array *v20; // x8
  int32_t v21; // w25
  System_ValueTuple_object__object__o Item; // kr00_16
  System_ValueTuple_object__object__o v23; // kr10_16
  struct SvtUseSkillData_array *v24; // x8
  __int64 v25; // x9
  SvtUseSkillData_o *v26; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int32_t v28; // w19
  Il2CppObject *v29; // x0
  SkillEntity_o *v30; // x29
  int32_t IconId; // w26
  ServantLimitImageMaster_o *v32; // x21
  int32_t ServantImageLimitSealAfter; // w21
  struct UserServantEntity_o *v34; // x8
  ServantLimitAddMaster_o *v35; // x22
  __int64 v36; // x19
  __int64 v37; // x27
  int32_t v38; // w19
  int32_t maxLv; // w22
  unsigned __int64 v40; // x29
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v42; // x19
  int32_t StrengthStatus; // w0
  int32_t skillRecord; // w27
  int32_t v45; // w21
  UserServantEntity_o *baseUserServantEntity; // x28
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x19
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v52; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v54; // x8
  int32_t v55; // [xsp+2Ch] [xbp-94h]
  SkillCombineControl_o **p_targetList; // [xsp+30h] [xbp-90h]
  __int64 v57; // [xsp+38h] [xbp-88h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+40h] [xbp-80h]
  int32_t skillLv; // [xsp+4Ch] [xbp-74h]
  System_String_o *defaultName; // [xsp+50h] [xbp-70h]
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v4 = svtId;
  v5 = this;
  if ( (byte_4C2B566 & 1) == 0 )
  {
    sub_1C2D490(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SkillCombineControl_OnClickInfo__);
    this = (SkillCombineControl_o *)sub_1C2D490(&StringLiteral_861/*"-"*/);
    byte_4C2B566 = 1;
  }
  entity = 0;
  skillDataList = v5->fields.skillDataList;
  if ( !skillDataList )
    goto LABEL_64;
  displayTransformIndex = v5->fields.displayTransformIndex;
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_65:
    sub_1C2D6F4(this, targetGo, *(_QWORD *)&svtId);
  v8 = skillDataList->m_Items[displayTransformIndex];
  if ( !v8 )
    goto LABEL_64;
  svtUseSkillIdList = v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v5->fields.useSkillIdList;
  v5->fields.useSkillIdList = svtUseSkillIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.useSkillIdList, (int32_t)svtUseSkillIdList, svtId, method);
  useSkillIdList = v5->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_64;
  max_length = useSkillIdList->max_length;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v5->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v12;
  p_targetList = (SkillCombineControl_o **)&v5->fields.targetList;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.targetList, (int32_t)v12, v13, v14);
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    v57 = (unsigned int)max_length;
    v55 = v4;
    while ( 1 )
    {
      this = (SkillCombineControl_o *)v5->fields.skillInfoList;
      if ( !this )
        break;
      this = (SkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v15,
                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      v16 = (UnityEngine_Component_o *)this;
      if ( v5->fields.switchIdxType )
      {
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)(int)v15 * 234.0, 0);
        v18 = UnityEngine_Component__get_gameObject(v16, 0);
        GameObjectExtensions__SetLocalPositionY(v18, -16.0, 0);
        v19 = UnityEngine_Component__get_gameObject(v16, 0);
        GameObjectExtensions__SetLocalScale_35920504(v19, v5->fields.scaleOffset, 0);
      }
      v20 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v15 >= LODWORD(v20->max_length) )
        goto LABEL_65;
      v21 = v20->m_Items[v15];
      if ( v5->fields.switchIdxType == 2 )
      {
        this = (SkillCombineControl_o *)v5->fields.switchSkillIdsList;
        if ( !this )
          break;
        Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                 (System_Collections_Generic_List_T__o *)this,
                 v5->fields.switchIdx,
                 (const MethodInfo_3738BF4 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
        targetGo = (UnityEngine_GameObject_o *)Item.fields.Item2;
        this = (SkillCombineControl_o *)Item.fields.Item1;
        if ( !Item.fields.Item2 )
          break;
        if ( v15 >= LODWORD(Item.fields.Item2[1].monitor) )
          goto LABEL_65;
        if ( *((int *)&Item.fields.Item2[2].klass + v15) >= 1 )
        {
          this = (SkillCombineControl_o *)v5->fields.switchSkillIdsList;
          if ( !this )
            break;
          v23 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                  (System_Collections_Generic_List_T__o *)this,
                  v5->fields.switchIdx,
                  (const MethodInfo_3738BF4 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
          targetGo = (UnityEngine_GameObject_o *)v23.fields.Item2;
          this = (SkillCombineControl_o *)v23.fields.Item1;
          if ( !v23.fields.Item2 )
            break;
          if ( v15 >= LODWORD(v23.fields.Item2[1].monitor) )
            goto LABEL_65;
          v21 = *((_DWORD *)&v23.fields.Item2[2].klass + v15);
        }
      }
      if ( v21 <= 0 )
      {
        v40 = v15 + 1;
      }
      else
      {
        v24 = v5->fields.skillDataList;
        if ( !v24 )
          break;
        v25 = v5->fields.displayTransformIndex;
        if ( (unsigned int)v25 >= LODWORD(v24->max_length) )
          goto LABEL_65;
        v26 = v24->m_Items[v25];
        if ( !v26 )
          break;
        svtSkillLvList = v26->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v15 >= LODWORD(svtSkillLvList->max_length) )
          goto LABEL_65;
        v28 = svtSkillLvList->m_Items[v15];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        v29 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v21,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        skillLv = v28;
        if ( v29 )
        {
          v30 = (SkillEntity_o *)v29;
          IconId = SkillEntity__GetIconId((SkillEntity_o *)v29, 0);
          defaultName = SkillEntity__getName(v30, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (SkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !v5->fields.baseUserServantEntity )
            break;
          v32 = (ServantLimitImageMaster_o *)this;
          this = (SkillCombineControl_o *)UserServantEntity__getDispLimitCount(v5->fields.baseUserServantEntity, 0, 0);
          if ( !v32 )
            break;
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v32, v4, (int32_t)this, 0);
          this = (SkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v34 = v5->fields.baseUserServantEntity;
          if ( !v34 )
            break;
          v35 = (ServantLimitAddMaster_o *)this;
          v37 = *(_QWORD *)&v34->fields.limitCount.fields.currentCryptoKey;
          v36 = *(_QWORD *)&v34->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v62.fields.currentCryptoKey = v37;
          *(_QWORD *)&v62.fields.fakeValue = v36;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v62, 0);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          this = (SkillCombineControl_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, v38, 0);
          if ( !v35 )
            break;
          if ( ServantLimitAddMaster__TryGetEntity(v35, &entity, v4, (int32_t)this, 0) )
          {
            this = (SkillCombineControl_o *)entity;
            if ( !entity )
              break;
            if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
            {
              this = (SkillCombineControl_o *)entity;
              if ( !entity )
                break;
              defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v30->fields.id, defaultName, 0);
            }
          }
          maxLv = v30->fields.maxLv;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          defaultName = (System_String_o *)StringLiteral_861/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        v40 = v15 + 1;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                              (ServantSkillMaster_o *)this,
                              v4,
                              (int)v15 + 1,
                              v21,
                              0);
        if ( EntityFromSkillId )
        {
          v42 = EntityFromSkillId;
          StrengthStatus = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0);
          skillRecord = v42->fields.skillNum;
          v45 = StrengthStatus;
        }
        else
        {
          v45 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v5->fields.baseUserServantEntity;
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1C2D6DC(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          callback,
          (Il2CppObject *)v5,
          Method_SkillCombineControl_OnClickInfo__,
          v48);
        if ( !v16 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          (ServantSkillInfoIconComponent_o *)v16,
          v15,
          v21,
          skillLv,
          maxLv,
          defaultName,
          IconId,
          v45,
          skillRecord,
          baseUserServantEntity,
          callback,
          0);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v4 = v55;
        v52 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v16,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v54 + 32) = v16;
          sub_1C2D434((CGThumbnailListItem_o *)(v54 + 32), (int32_t)v16, v49, v50);
        }
      }
      v15 = v40;
      if ( v40 == v57 )
        goto LABEL_63;
    }
LABEL_64:
    sub_1C2D6EC(this, targetGo);
  }
LABEL_63:
  SkillCombineControl__SetNeedItemInfo(v5, v5->fields.currentIdx, *(const MethodInfo **)&svtId);
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

  if ( (byte_4C2B569 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C2B569 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C2D6EC(combineBtnBg, method);
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

  if ( (byte_4C2B561 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9225/*"N0"*/);
    byte_4C2B561 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_64973892(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9225/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C2D6EC(SelfUserGame, v4);
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
  const MethodInfo *v8; // x2
  struct UILabel_array *selectSkillHelpLabels; // x8
  struct UILabel_array *v10; // x8
  const MethodInfo_3738BF4 **v11; // x28
  int32_t v12; // w21
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v14; // x9
  int32_t v15; // w25
  ServantSkillInfoIconComponent_o *v16; // x22
  System_ValueTuple_object__object__o Item; // kr00_16
  __int64 v18; // x8
  System_ValueTuple_object__object__o v19; // kr10_16
  __int64 v20; // x8
  int32_t displayTransformIndex; // w25
  struct SetLevelUpData_array *v22; // x0
  struct SetLevelUpData_array **p_lvUpDataList; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  unsigned int v26; // w22
  __int64 v27; // x26
  const MethodInfo *v28; // x6
  struct SvtUseSkillData_array *skillDataList; // x8
  _QWORD *v30; // x9
  __int64 v31; // x8
  __int64 v32; // x10
  __int64 v33; // x9
  struct SetLevelUpData_array *v34; // x27
  const MethodInfo *v35; // x3
  __int64 v36; // x23
  System_Collections_Generic_List_T__o *switchSkillIdsList; // x22
  System_Predicate_T__o *v38; // x23
  System_Collections_Generic_List_T__o *All; // x22
  __int64 v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  unsigned __int64 v43; // x23
  __int64 v44; // x29
  System_ValueTuple_object__object__o v45; // kr20_16
  __int64 v46; // x24
  struct SvtUseSkillData_array *v47; // x8
  __int64 v48; // x9
  SvtUseSkillData_o *v49; // x9
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *svtActualSkillIdList; // x9
  const MethodInfo_3738BF4 **v52; // x21
  const MethodInfo_3738BF4 *v53; // x2
  unsigned int *lvUpDataList; // x28
  int32_t v55; // w25
  int32_t v56; // w26
  int32_t v57; // w27
  Il2CppObject *Item1; // x0
  const MethodInfo *v59; // x6
  const MethodInfo *v60; // x3
  __int64 v61; // x24
  struct SetLevelUpData_array *v62; // x8
  __int64 v63; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2B567 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_1C2D490(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_1C2D490(&SetLevelUpData___TypeInfo);
    sub_1C2D490(&Method_SkillCombineControl___c__DisplayClass53_0__SetNeedItemInfo_b__0__);
    sub_1C2D490(&SkillCombineControl___c__DisplayClass53_0_TypeInfo);
    byte_4C2B567 = 1;
  }
  transformInfo = 0;
  v5 = sub_1C2D6DC(SkillCombineControl___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_31;
  *(_DWORD *)(v5 + 16) = idx;
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  if ( this->fields.baseUserServantEntity )
  {
    if ( !this->fields.targetList )
      goto LABEL_31;
    selectSkillInfo = (__int64)this->fields.selectSkillInfo;
    if ( !selectSkillInfo )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, 1, 0);
    selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
    if ( !selectSkillHelpLabels )
      goto LABEL_31;
    if ( !LODWORD(selectSkillHelpLabels->max_length) )
      goto LABEL_76;
    selectSkillInfo = (__int64)selectSkillHelpLabels->m_Items[0];
    if ( !selectSkillInfo )
      goto LABEL_31;
    selectSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectSkillInfo, 0);
    if ( !selectSkillInfo )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, this->fields.switchIdxType == 0, 0);
    v10 = this->fields.selectSkillHelpLabels;
    if ( !v10 )
      goto LABEL_31;
    if ( LODWORD(v10->max_length) <= 1 )
      goto LABEL_76;
    selectSkillInfo = (__int64)v10->m_Items[1];
    if ( !selectSkillInfo )
      goto LABEL_31;
    selectSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectSkillInfo, 0);
    if ( !selectSkillInfo )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, this->fields.switchIdxType != 0, 0);
    selectSkillInfo = (__int64)this->fields.targetList;
    if ( !selectSkillInfo )
      goto LABEL_31;
    v11 = (const MethodInfo_3738BF4 **)&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__;
    v12 = 0;
    while ( v12 < *(_DWORD *)(selectSkillInfo + 24) )
    {
      selectSkillInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)selectSkillInfo,
                                   v12,
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = this->fields.useSkillIdList;
      if ( !useSkillIdList )
        goto LABEL_31;
      v14 = *(int *)(v5 + 16);
      if ( (unsigned int)v14 >= LODWORD(useSkillIdList->max_length) )
        goto LABEL_76;
      v15 = useSkillIdList->m_Items[v14];
      v16 = (ServantSkillInfoIconComponent_o *)selectSkillInfo;
      if ( this->fields.switchIdxType == 2 )
      {
        selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
        if ( !selectSkillInfo )
          goto LABEL_31;
        Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                 (System_Collections_Generic_List_T__o *)selectSkillInfo,
                 this->fields.switchIdx,
                 (const MethodInfo_3738BF4 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
        Item2 = Item.fields.Item2;
        selectSkillInfo = (__int64)Item.fields.Item1;
        if ( !Item.fields.Item2 )
          goto LABEL_31;
        v18 = *(int *)(v5 + 16);
        if ( (unsigned int)v18 >= LODWORD(Item.fields.Item2[1].monitor) )
          goto LABEL_76;
        if ( *((int *)&Item.fields.Item2[2].klass + v18) >= 1 )
        {
          selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
          if ( !selectSkillInfo )
            goto LABEL_31;
          v19 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                  (System_Collections_Generic_List_T__o *)selectSkillInfo,
                  this->fields.switchIdx,
                  (const MethodInfo_3738BF4 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
          Item2 = v19.fields.Item2;
          selectSkillInfo = (__int64)v19.fields.Item1;
          if ( !v19.fields.Item2 )
            goto LABEL_31;
          v20 = *(int *)(v5 + 16);
          if ( (unsigned int)v20 >= LODWORD(v19.fields.Item2[1].monitor) )
            goto LABEL_76;
          v15 = *((_DWORD *)&v19.fields.Item2[2].klass + v20);
        }
      }
      if ( v16 )
      {
        ServantSkillInfoIconComponent__SetDispSelectMskImg(v16, v15 == v16->fields.currentSkillId, 0);
        selectSkillInfo = (__int64)this->fields.targetList;
        ++v12;
        if ( selectSkillInfo )
          continue;
      }
      goto LABEL_31;
    }
    displayTransformIndex = this->fields.displayTransformIndex;
    v22 = (struct SetLevelUpData_array *)sub_1C2D538(
                                           SetLevelUpData___TypeInfo,
                                           (unsigned int)this->fields.transformTotal);
    p_lvUpDataList = &this->fields.lvUpDataList;
    this->fields.lvUpDataList = v22;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.lvUpDataList, (int32_t)v22, v24, v25);
    if ( this->fields.transformTotal >= 1 )
    {
      v26 = 0;
      v27 = 32;
      do
      {
        selectSkillInfo = (__int64)this->fields.baseUserServantEntity;
        if ( !selectSkillInfo )
          goto LABEL_31;
        selectSkillInfo = UserServantEntity__GetTransformedServantInfo(
                            (UserServantEntity_o *)selectSkillInfo,
                            &transformInfo,
                            v26,
                            0);
        skillDataList = this->fields.skillDataList;
        if ( !skillDataList )
          goto LABEL_31;
        if ( v26 >= LODWORD(skillDataList->max_length) )
          goto LABEL_76;
        v30 = *(Il2CppClass **)((char *)&skillDataList->obj.klass + v27);
        if ( !v30 )
          goto LABEL_31;
        v31 = v30[2];
        if ( !v31 )
          goto LABEL_31;
        Item2 = (Il2CppObject *)*(int *)(v5 + 16);
        if ( (unsigned int)Item2 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_76;
        v32 = v30[3];
        if ( !v32 )
          goto LABEL_31;
        if ( (unsigned int)Item2 >= *(_DWORD *)(v32 + 24) )
          goto LABEL_76;
        v33 = v30[5];
        if ( !v33 )
          goto LABEL_31;
        if ( (unsigned int)Item2 >= *(_DWORD *)(v33 + 24) )
          goto LABEL_76;
        if ( !transformInfo )
          goto LABEL_31;
        v34 = *p_lvUpDataList;
        selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                     this,
                                     (int32_t)Item2,
                                     *(_DWORD *)(v31 + 4LL * (_QWORD)Item2 + 32),
                                     *(_DWORD *)(v32 + 4LL * (_QWORD)Item2 + 32),
                                     transformInfo->fields.titleText,
                                     *(_DWORD *)(v33 + 4LL * (_QWORD)Item2 + 32),
                                     v28);
        if ( !v34 )
          goto LABEL_31;
        v36 = selectSkillInfo;
        if ( selectSkillInfo )
        {
          selectSkillInfo = sub_1C2D5CC(selectSkillInfo, v34->obj.klass->_1.element_class);
          if ( !selectSkillInfo )
          {
LABEL_77:
            v63 = sub_1C2D710(selectSkillInfo);
            sub_1C2D5B8(v63, 0);
          }
        }
        if ( v26 >= LODWORD(v34->max_length) )
          goto LABEL_76;
        *(Il2CppClass **)((char *)&v34->obj.klass + v27) = (Il2CppClass *)v36;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)v34 + v27), v36, (int32_t)v8, v35);
        ++v26;
        v27 += 8;
      }
      while ( (signed int)v26 < this->fields.transformTotal );
    }
    if ( this->fields.switchIdxType == 2 )
    {
      switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
      v38 = (System_Predicate_T__o *)sub_1C2D6DC(System_Predicate_ValueTuple_string__int_____TypeInfo);
      System_Predicate_ValueTuple_object__object_____ctor(
        v38,
        (Il2CppObject *)v5,
        Method_SkillCombineControl___c__DisplayClass53_0__SetNeedItemInfo_b__0__,
        0);
      if ( !switchSkillIdsList )
        goto LABEL_31;
      All = System_Collections_Generic_List_ValueTuple_object__object____FindAll(
              switchSkillIdsList,
              v38,
              (const MethodInfo_3739658 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
      selectSkillInfo = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)All, 0);
      if ( (selectSkillInfo & 1) == 0 )
      {
        if ( !All )
          goto LABEL_31;
        v40 = sub_1C2D538(SetLevelUpData___TypeInfo, (unsigned int)All->fields._size);
        *p_lvUpDataList = (struct SetLevelUpData_array *)v40;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.lvUpDataList, v40, v41, v42);
        if ( All->fields._size >= 1 )
        {
          v43 = 0;
          v44 = 8;
          do
          {
            v45 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(All, v43, *v11);
            Item2 = v45.fields.Item2;
            selectSkillInfo = (__int64)v45.fields.Item1;
            if ( !v45.fields.Item2 )
              goto LABEL_31;
            v46 = *(int *)(v5 + 16);
            if ( (unsigned int)v46 >= LODWORD(v45.fields.Item2[1].monitor) )
              goto LABEL_76;
            v47 = this->fields.skillDataList;
            if ( !v47 )
              goto LABEL_31;
            v48 = this->fields.displayTransformIndex;
            if ( (unsigned int)v48 >= LODWORD(v47->max_length) )
              goto LABEL_76;
            v49 = v47->m_Items[v48];
            if ( !v49 )
              goto LABEL_31;
            svtSkillLvList = v49->fields.svtSkillLvList;
            if ( !svtSkillLvList )
              goto LABEL_31;
            if ( (unsigned int)v46 >= LODWORD(svtSkillLvList->max_length) )
              goto LABEL_76;
            svtActualSkillIdList = v49->fields.svtActualSkillIdList;
            if ( !svtActualSkillIdList )
              goto LABEL_31;
            if ( (unsigned int)v46 >= LODWORD(svtActualSkillIdList->max_length) )
              goto LABEL_76;
            v52 = v11;
            v53 = *v11;
            lvUpDataList = (unsigned int *)this->fields.lvUpDataList;
            v55 = *((_DWORD *)&v45.fields.Item2[2].klass + v46);
            v56 = svtSkillLvList->m_Items[v46];
            v57 = svtActualSkillIdList->m_Items[v46];
            Item1 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(All, v43, v53).fields.Item1;
            selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                         this,
                                         v46,
                                         v55,
                                         v56,
                                         (System_String_o *)Item1,
                                         v57,
                                         v59);
            if ( !lvUpDataList )
              goto LABEL_31;
            v61 = selectSkillInfo;
            if ( selectSkillInfo )
            {
              selectSkillInfo = sub_1C2D5CC(selectSkillInfo, *(_QWORD *)(*(_QWORD *)lvUpDataList + 64LL));
              if ( !selectSkillInfo )
                goto LABEL_77;
            }
            if ( v43 >= lvUpDataList[6] )
              goto LABEL_76;
            *(_QWORD *)&lvUpDataList[v44] = v61;
            sub_1C2D434((CGThumbnailListItem_o *)&lvUpDataList[v44], v61, (int32_t)v8, v60);
            ++v43;
            v44 += 2;
            v11 = v52;
          }
          while ( (__int64)v43 < All->fields._size );
          p_lvUpDataList = &this->fields.lvUpDataList;
        }
      }
      displayTransformIndex = 0;
    }
    v62 = *p_lvUpDataList;
    if ( !*p_lvUpDataList )
LABEL_31:
      sub_1C2D6EC(selectSkillInfo, Item2);
    if ( (unsigned int)displayTransformIndex >= LODWORD(v62->max_length) )
LABEL_76:
      sub_1C2D6F4(selectSkillInfo, Item2, v8);
    SkillCombineControl__SetSvtSkillCombineData(this, v62->m_Items[displayTransformIndex], v8);
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillCombineControl__SetStateInfoMsg(SkillCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4C2B56B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_7446/*"INFO_MSG_SKILLUP"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B56B = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_12;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_12;
  v6.fields.r = 0.0;
  v6.fields.a = 1.0;
  v6.fields.g = 0.87891;
  v6.fields.b = 0.98828;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v6, 0);
  if ( v3 )
  {
    *(_QWORD *)&state = StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7446/*"INFO_MSG_SKILLUP"*/, 0);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_12:
    sub_1C2D6EC(detailInfoLb, *(_QWORD *)&state);
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
  System_Collections_Generic_List_object__o *v8; // x21
  UILabel_o *qpLb; // x23
  struct System_Int32_array *combineItemIds; // x27
  struct System_Int32_array *combineItemNums; // x28
  unsigned __int64 v12; // x23
  int32_t *m_Items; // x29
  int32_t *v14; // x24
  signed __int64 v15; // x21
  char v16; // w26
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x22
  const MethodInfo *v19; // x1
  int64_t haveQpVal; // x8
  int64_t spendQpVal; // x9
  System_String_o *v22; // x22
  System_String_o *v23; // [xsp+8h] [xbp-68h]
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B568 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5781/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C2D490(&StringLiteral_17664/*"buttontxt_synthesis"*/);
    sub_1C2D490(&StringLiteral_9225/*"N0"*/);
    sub_1C2D490(&StringLiteral_12185/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1C2D490(&StringLiteral_12186/*"SHORT_QP_INFO_MSG"*/);
    sub_1C2D490(&StringLiteral_17661/*"buttontxt_notsynthesis"*/);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    byte_4C2B568 = 1;
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                                                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !itemInfoList )
    goto LABEL_8;
  v24.fields.r = 0.0;
  v24.fields.a = 1.0;
  v24.fields.g = 0.87891;
  v24.fields.b = 0.98828;
  v7 = (UIWidget_o *)itemInfoList;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v24, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5781/*"EXE_SUMMON_COMBINE_TXT"*/,
                                                                0);
  if ( !setLvUpData )
    goto LABEL_8;
  if ( setLvUpData->fields.currentLv < setLvUpData->fields.maxLv )
  {
    v8 = itemInfoList;
    itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
    if ( itemInfoList )
    {
      UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17664/*"buttontxt_synthesis"*/, 0);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
      if ( itemInfoList )
      {
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))itemInfoList->klass->vtable._33_get_Item.methodPtr)(
          itemInfoList,
          itemInfoList->klass->vtable._33_get_Item.method);
        qpLb = this->fields.qpLb;
        this->fields.spendQpVal = setLvUpData->fields.spendQp;
        itemInfoList = (System_Collections_Generic_List_object__o *)System_Int32__ToString_64968716(
                                                                      (int)this + 320,
                                                                      (System_String_o *)StringLiteral_9225/*"N0"*/,
                                                                      0);
        if ( qpLb )
        {
          v23 = (System_String_o *)v8;
          UILabel__set_text(qpLb, (System_String_o *)itemInfoList, 0);
          combineItemIds = setLvUpData->fields.combineItemIds;
          if ( combineItemIds )
          {
            combineItemNums = setLvUpData->fields.combineItemNums;
            v12 = 0;
            m_Items = combineItemIds->m_Items;
            v14 = combineItemNums->m_Items;
            v15 = LODWORD(combineItemIds->max_length) - 1;
            v16 = 1;
            do
            {
              if ( (__int64)v12 <= v15 )
              {
                itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              itemInfoList,
                                                                              v12,
                                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
                if ( v12 >= LODWORD(combineItemIds->max_length) )
                  goto LABEL_47;
                if ( !combineItemNums )
                  goto LABEL_8;
                if ( v12 >= LODWORD(combineItemNums->max_length) )
                  goto LABEL_47;
                v18 = itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                LimitCntUpItemComponent__setLimitUpItemInfo(
                  (LimitCntUpItemComponent_o *)itemInfoList,
                  this->fields.userId,
                  m_Items[v12],
                  v14[v12],
                  0);
                if ( v12 >= LODWORD(combineItemIds->max_length) || v12 >= LODWORD(combineItemNums->max_length) )
LABEL_47:
                  sub_1C2D6F4(itemInfoList, setLvUpData, v17);
                CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, m_Items[v12], v14[v12], 0);
                v16 &= LOBYTE(v18[2].fields._syncRoot) != 0;
              }
              ++v12;
            }
            while ( v12 != 5 );
            itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
            if ( itemInfoList )
            {
              v25.fields.r = 1.0;
              v25.fields.g = 1.0;
              v25.fields.b = 1.0;
              v25.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)itemInfoList, v25, 0);
              haveQpVal = this->fields.haveQpVal;
              spendQpVal = this->fields.spendQpVal;
              this->fields._IsExeCombine_k__BackingField = 1;
              v22 = v23;
              if ( haveQpVal < spendQpVal )
              {
                v26.fields.r = 1.0;
                v26.fields.g = 1.0;
                v26.fields.b = 1.0;
                v26.fields.a = 1.0;
                UIWidget__set_color(v7, v26, 0);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_12186/*"SHORT_QP_INFO_MSG"*/,
                                                                              0);
                if ( !this->fields.qpLb )
                  goto LABEL_8;
                v22 = (System_String_o *)itemInfoList;
                v27.fields.r = 1.0;
                v27.fields.g = 0.0;
                v27.fields.b = 0.0;
                v27.fields.a = 1.0;
                UIWidget__set_color((UIWidget_o *)this->fields.qpLb, v27, 0);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              if ( (v16 & 1) == 0 )
              {
                v28.fields.r = 1.0;
                v28.fields.g = 1.0;
                v28.fields.b = 1.0;
                v28.fields.a = 1.0;
                UIWidget__set_color(v7, v28, 0);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SHORT_ITEM_INFO_MSG"*/, 0);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              SkillCombineControl__SetExeBtnState(this, v19);
              itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.detailInfoLb;
              if ( itemInfoList )
              {
                UILabel__set_text((UILabel_o *)itemInfoList, v22, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_8:
    sub_1C2D6EC(itemInfoList, setLvUpData);
  }
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, (const MethodInfo *)setLvUpData);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  UILabel__set_text((UILabel_o *)itemInfoList, (System_String_o *)StringLiteral_1122/*"0"*/, 0);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  v29.fields.r = 1.0;
  v29.fields.g = 1.0;
  v29.fields.b = 1.0;
  v29.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v29, 0);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17661/*"buttontxt_notsynthesis"*/, 0);
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
  System_String_o *Item1; // x1
  struct UILabel_o *condTitleLabel; // x20
  System_ValueTuple_object__object__o Item; // kr00_16
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C2B564 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    byte_4C2B564 = 1;
  }
  transformInfo = 0;
  switchIdxType = this->fields.switchIdxType;
  if ( switchIdxType == 2 )
  {
    switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
    if ( switchSkillIdsList )
    {
      condTitleLabel = this->fields.condTitleLabel;
      Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
               switchSkillIdsList,
               this->fields.switchIdx,
               (const MethodInfo_3738BF4 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
      method = (const MethodInfo *)Item.fields.Item2;
      switchSkillIdsList = (System_Collections_Generic_List_T__o *)Item.fields.Item1;
      if ( condTitleLabel )
      {
        Item1 = (System_String_o *)Item.fields.Item1;
        switchSkillIdsList = (System_Collections_Generic_List_T__o *)condTitleLabel;
        goto LABEL_12;
      }
    }
LABEL_14:
    sub_1C2D6EC(switchSkillIdsList, method);
  }
  if ( switchIdxType != 1 )
    return;
  switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.baseUserServantEntity;
  if ( !switchSkillIdsList )
    goto LABEL_14;
  switchSkillIdsList = (System_Collections_Generic_List_T__o *)UserServantEntity__GetTransformedServantInfo(
                                                                 (UserServantEntity_o *)switchSkillIdsList,
                                                                 &transformInfo,
                                                                 this->fields.displayTransformIndex,
                                                                 0);
  if ( !transformInfo )
    goto LABEL_14;
  switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.condTitleLabel;
  if ( !switchSkillIdsList )
    goto LABEL_14;
  Item1 = transformInfo->fields.titleText;
LABEL_12:
  UILabel__set_text((UILabel_o *)switchSkillIdsList, Item1, 0);
}


bool SkillCombineControl__TrySetSwitchSkillIdsList(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v2; // x21
  System_Collections_ICollection_o **p_switchSkillIdsList; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_ValueTuple_object__object__o v6; // x1 OVERLAPPED
  UserServantEntity_o *baseUserServantEntity; // x0
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SkillCombineControl_o *v10; // x19
  SvtUseSkillData_o *v11; // x11
  struct System_Int32_array *svtUseSkillIdList; // x8
  unsigned __int64 v13; // x29
  unsigned __int64 max_length_low; // x9
  struct UserServantEntity_o *v15; // x10
  int32_t svtId; // w23
  int32_t v17; // w22
  __int64 v18; // x24
  __int64 v19; // x25
  int32_t v20; // w2
  int *currentCryptoKey; // x8
  ServantSkillAddEntity_o *v22; // x22
  unsigned __int64 v23; // x19
  __int64 v24; // x24
  const MethodInfo *v25; // x3
  struct System_String_array *titles; // x8
  System_Collections_ICollection_o *v27; // x25
  System_Predicate_T__o *v28; // x26
  System_ValueTuple_object__object__o v29; // kr00_16
  Il2CppObject *v30; // x23
  BalanceConfig_c *v31; // x0
  Il2CppObject *v32; // x2
  const MethodInfo_3AE98C8 *v33; // x4
  const MethodInfo *v34; // x3
  System_Collections_ICollection_c *v35; // x8
  _QWORD *v36; // x9
  __int64 hiddenValue_low; // x10
  char *v38; // x8
  struct System_Int32_array *skillIds; // x9
  UIWidget_o *condTitleLabel; // x23
  UIWidget_o *condTitleSprite; // x23
  SvtUseSkillData_o *v43; // [xsp+0h] [xbp-A0h]
  ServantSkillAddMaster_o *v44; // [xsp+8h] [xbp-98h]
  System_ValueTuple_object__object__o v46; // [xsp+18h] [xbp-88h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+28h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  System_ValueTuple_object__object__o v49; // 0:x0.16
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B565 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_1C2D490(&Method_SkillCombineControl___c__DisplayClass50_0__TrySetSwitchSkillIdsList_b__0__);
    sub_1C2D490(&SkillCombineControl___c__DisplayClass50_0_TypeInfo);
    sub_1C2D490(&Method_System_ValueTuple_string__int_____ctor__);
    byte_4C2B565 = 1;
  }
  v46.fields.Item2 = 0;
  transformInfo = 0;
  v46.fields.Item1 = 0;
  v2 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v2,
    (const MethodInfo_3738690 *)Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
  p_switchSkillIdsList = (System_Collections_ICollection_o **)&this->fields.switchSkillIdsList;
  this->fields.switchSkillIdsList = (struct System_Collections_Generic_List_ValueTuple_string__int_____o *)v2;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.switchSkillIdsList, (int32_t)v2, v4, v5);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_48;
  UserServantEntity__GetTransformedServantInfo(
    baseUserServantEntity,
    &transformInfo,
    this->fields.displayTransformIndex,
    0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  skillDataList = this->fields.skillDataList;
  v44 = (ServantSkillAddMaster_o *)baseUserServantEntity;
  if ( !skillDataList )
    goto LABEL_48;
  displayTransformIndex = this->fields.displayTransformIndex;
  v10 = this;
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_50:
    sub_1C2D6F4(baseUserServantEntity, v6.fields.Item1, v6.fields.Item2);
  v11 = skillDataList->m_Items[displayTransformIndex];
  if ( !v11 || (svtUseSkillIdList = v11->fields.svtUseSkillIdList) == 0 )
LABEL_48:
    sub_1C2D6EC(baseUserServantEntity, v6.fields.Item1);
  v13 = 0;
  v43 = v11;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    if ( (__int64)v13 >= (int)max_length_low )
      return !BasicHelper__IsNullOrEmpty(*p_switchSkillIdsList, 0);
    if ( v13 >= max_length_low )
      goto LABEL_50;
    if ( !transformInfo )
      goto LABEL_48;
    v15 = v10->fields.baseUserServantEntity;
    if ( !v15 )
      goto LABEL_48;
    svtId = transformInfo->fields.svtId;
    v17 = svtUseSkillIdList->m_Items[v13];
    v19 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
    v18 = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v48.fields.currentCryptoKey = v19;
    *(_QWORD *)&v48.fields.fakeValue = v18;
    baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                     v48,
                                                     0);
    if ( !transformInfo )
      goto LABEL_48;
    v20 = (int)baseUserServantEntity;
    baseUserServantEntity = (UserServantEntity_o *)v44;
    if ( !v44 )
      goto LABEL_48;
    baseUserServantEntity = (UserServantEntity_o *)ServantSkillAddMaster__GetEnableEntity(
                                                     v44,
                                                     svtId,
                                                     v20,
                                                     v17,
                                                     0,
                                                     transformInfo->fields.dispLimitCount,
                                                     1,
                                                     0);
    if ( baseUserServantEntity )
    {
      currentCryptoKey = (int *)baseUserServantEntity->fields.userId.fields.currentCryptoKey;
      v22 = (ServantSkillAddEntity_o *)baseUserServantEntity;
      if ( !currentCryptoKey )
        goto LABEL_48;
      v23 = 0;
      while ( (__int64)v23 < currentCryptoKey[6] )
      {
        v24 = sub_1C2D6DC(SkillCombineControl___c__DisplayClass50_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v24, 0);
        titles = v22->fields.titles;
        if ( !titles )
          goto LABEL_48;
        if ( v23 >= LODWORD(titles->max_length) )
          goto LABEL_50;
        if ( !v24 )
          goto LABEL_48;
        v6.fields.Item1 = (Il2CppObject *)titles->m_Items[v23];
        *(_QWORD *)(v24 + 16) = v6.fields.Item1;
        sub_1C2D434((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v6.fields.Item1, (int32_t)v6.fields.Item2, v25);
        v27 = *p_switchSkillIdsList;
        v28 = (System_Predicate_T__o *)sub_1C2D6DC(System_Predicate_ValueTuple_string__int_____TypeInfo);
        System_Predicate_ValueTuple_object__object_____ctor(
          v28,
          (Il2CppObject *)v24,
          Method_SkillCombineControl___c__DisplayClass50_0__TrySetSwitchSkillIdsList_b__0__,
          0);
        if ( !v27 )
          goto LABEL_48;
        v29 = System_Collections_Generic_List_ValueTuple_object__object____Find(
                (System_Collections_Generic_List_T__o *)v27,
                v28,
                (const MethodInfo_373959C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
        v46 = v29;
        baseUserServantEntity = (UserServantEntity_o *)System_String__op_Equality(
                                                         (System_String_o *)v29.fields.Item1,
                                                         0,
                                                         0);
        if ( !v29.fields.Item2 && ((unsigned __int8)baseUserServantEntity & 1) != 0 )
        {
          v30 = *(Il2CppObject **)(v24 + 16);
          v31 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v31 = BalanceConfig_TypeInfo;
          }
          v32 = (Il2CppObject *)sub_1C2D538(int___TypeInfo, (unsigned int)v31->static_fields->SvtSkillListMax);
          v49.fields.Item1 = (Il2CppObject *)&v46;
          v49.fields.Item2 = v30;
          System_ValueTuple_object__object____ctor(
            v49,
            v32,
            (Il2CppObject *)Method_System_ValueTuple_string__int_____ctor__,
            v33);
          baseUserServantEntity = (UserServantEntity_o *)*p_switchSkillIdsList;
          if ( !*p_switchSkillIdsList )
            goto LABEL_48;
          v6 = v46;
          v35 = (System_Collections_ICollection_c *)baseUserServantEntity->fields.id.fields.currentCryptoKey;
          v36 = Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__;
          ++HIDWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( !v35 )
            goto LABEL_48;
          hiddenValue_low = SLODWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v35->_1.namespaze) )
          {
            System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
              (System_Collections_Generic_List_T__o *)baseUserServantEntity,
              v6,
              *(const MethodInfo_3738F10 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = (char *)v35 + 16 * hiddenValue_low;
            LODWORD(baseUserServantEntity->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
            *((System_ValueTuple_object__object__o *)v38 + 2) = v6;
            sub_1C2D434((CGThumbnailListItem_o *)(v38 + 32), 0, (int32_t)v6.fields.Item2, v34);
          }
        }
        skillIds = v22->fields.skillIds;
        if ( skillIds )
        {
          if ( v23 >= LODWORD(skillIds->max_length) )
            goto LABEL_50;
          LODWORD(skillIds) = v22->fields.skillIds->m_Items[v23];
        }
        if ( v46.fields.Item2 )
        {
          if ( v13 >= LODWORD(v46.fields.Item2[1].monitor) )
            goto LABEL_50;
          *((_DWORD *)&v46.fields.Item2[2].klass + v13) = (_DWORD)skillIds;
          currentCryptoKey = (int *)v22->fields.titles;
          ++v23;
          if ( currentCryptoKey )
            continue;
        }
        goto LABEL_48;
      }
      v10 = this;
      v50.fields.r = 1.0;
      v50.fields.g = 1.0;
      v50.fields.b = 1.0;
      condTitleLabel = (UIWidget_o *)this->fields.condTitleLabel;
      v50.fields.a = 1.0;
      CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v22, v50, 0);
      if ( !condTitleLabel )
        goto LABEL_48;
      UIWidget__set_color(condTitleLabel, CondLabelColor, 0);
      condTitleSprite = (UIWidget_o *)this->fields.condTitleSprite;
      v52.fields.r = 0.0;
      v52.fields.a = 1.0;
      v52.fields.g = 0.33333;
      v52.fields.b = 0.8;
      CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v22, v52, 0);
      if ( !condTitleSprite )
        goto LABEL_48;
      UIWidget__set_color(condTitleSprite, CondSpriteColor, 0);
    }
    else
    {
      v10 = this;
    }
    ++v13;
    svtUseSkillIdList = v43->fields.svtUseSkillIdList;
    if ( !svtUseSkillIdList )
      goto LABEL_48;
  }
}


UnityEngine_Color_o SkillCombineControl__get_DefaultCondTitleLabelColor(const MethodInfo *method)
{
  float v1; // s0
  float v2; // s1
  float v3; // s2
  float v4; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v1 = 1.0;
  v2 = 1.0;
  v3 = 1.0;
  v4 = 1.0;
  result.fields.a = v4;
  result.fields.b = v3;
  result.fields.g = v2;
  result.fields.r = v1;
  return result;
}


UnityEngine_Color_o SkillCombineControl__get_DefaultCondTitleSpriteColor(const MethodInfo *method)
{
  float v1; // s1
  float v2; // s2
  float v3; // s0
  float v4; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v1 = 0.33333;
  v2 = 0.8;
  v3 = 0.0;
  v4 = 1.0;
  result.fields.a = v4;
  result.fields.b = v2;
  result.fields.g = v1;
  result.fields.r = v3;
  return result;
}


bool SkillCombineControl__get_IsSkillSwitchable(SkillCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.switchIdxType != 0;
}


void SkillCombineControl___c__DisplayClass50_0___ctor(
        SkillCombineControl___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SkillCombineControl___c__DisplayClass50_0___TrySetSwitchSkillIdsList_b__0(
        SkillCombineControl___c__DisplayClass50_0_o *this,
        System_ValueTuple_string__int____o x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x.fields.Item1, this->fields.title, 0);
}


void SkillCombineControl___c__DisplayClass53_0___ctor(
        SkillCombineControl___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SkillCombineControl___c__DisplayClass53_0___SetNeedItemInfo_b__0(
        SkillCombineControl___c__DisplayClass53_0_o *this,
        System_ValueTuple_string__int____o x,
        const MethodInfo *method)
{
  __int64 idx; // x8

  if ( !x.fields.Item2 )
    sub_1C2D6EC(this, x.fields.Item1);
  idx = this->fields.idx;
  if ( (unsigned int)idx >= LODWORD(x.fields.Item2->max_length) )
    sub_1C2D6F4(this, x.fields.Item1, x.fields.Item2);
  return x.fields.Item2->m_Items[idx] > 0;
}