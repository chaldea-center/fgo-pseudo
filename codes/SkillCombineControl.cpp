void SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A8EC & 1) == 0 )
  {
    sub_1C93AD4(&CombineMenuControl_TypeInfo);
    byte_4D2A8EC = 1;
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
  il2cpp_array_size_t max_length; // x8
  bool v6; // w22
  SkillCombineControl_o *v7; // x20
  unsigned __int64 v8; // x23
  struct CombineRootComponent_o **p_combineRootComponent; // x27
  int32_t v10; // w21
  int32_t v11; // w29

  if ( (byte_4D2A8E7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (SkillCombineControl_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2A8E7 = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))resData->klass->vtable._6_getSkillLevelList.methodPtr)(
                                          resData,
                                          resData->klass->vtable._6_getSkillLevelList.method),
        !SkillIdList) )
  {
LABEL_17:
    sub_1C93D2C(this, resData);
  }
  max_length = SkillIdList->max_length;
  v6 = (int)max_length > 0;
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
        sub_1C93D34(this);
      v10 = SkillIdList->m_Items[v8];
      if ( v10 >= 1 )
      {
        v11 = *((_DWORD *)p_combineRootComponent + v8);
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10,
                                          (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_17;
        if ( v11 < this->fields.type )
          return !v6;
      }
      LODWORD(max_length) = SkillIdList->max_length;
      v6 = (__int64)++v8 < (int)max_length;
    }
    while ( (__int64)v8 < (int)max_length );
  }
  return !v6;
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
  SetLevelUpData_o *v18; // x20
  __int64 v19; // x1
  System_String_o *Name; // x0
  System_String_o **p_targetName; // x22
  const MethodInfo *v22; // x1
  int32_t qp; // w1
  float v24; // s0
  float v25; // x26^4
  int v26; // w27
  const MethodInfo *v27; // x1
  float CombineCampaignQpRate; // s0
  float v29; // w8
  int v30; // w8
  __int64 itemIds; // x1
  __int64 itemNums; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantLimitImageMaster_o *v34; // x23
  __int64 v35; // x24
  __int64 v36; // x25
  int32_t v37; // w24
  int32_t ServantImageLimitSealAfter; // w24
  struct UserServantEntity_o *v39; // x8
  ServantLimitAddMaster_o *v40; // x23
  struct UserServantEntity_o *v41; // x8
  int32_t v42; // w19
  int32_t v43; // w25
  System_String_o *OverwriteSkillName; // x0
  __int64 v46; // [xsp+0h] [xbp-60h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4D2A8E9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&Method_System_Nullable_float__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_int__get_HasValue__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&SetLevelUpData_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A8E9 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_40;
  v15 = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           skillId,
                           (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  CombineSkillEntity = SkillCombineControl__GetCombineSkillEntity(this, skillLv, v16);
  v18 = (SetLevelUpData_o *)sub_1C93D20(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v18, 0);
  if ( !v18 )
    goto LABEL_40;
  v18->fields.currentId = skillId;
  v18->fields.actualId = actualSkillId;
  v18->fields.currentIndex = idx + 1;
  v18->fields.realIndex = idx;
  v19 = StringLiteral_1/*""*/;
  v18->fields.targetRuby = (struct System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)sub_1C93A78(&v18->fields.targetRuby, v19);
  if ( !v15 )
    goto LABEL_40;
  Name = SkillEntity__getName(v15, 0);
  v18->fields.targetName = Name;
  p_targetName = &v18->fields.targetName;
  sub_1C93A78(&v18->fields.targetName, Name);
  v18->fields.currentLv = skillLv;
  v18->fields.nextLv = skillLv + 1;
  v18->fields.maxLv = v15->fields.maxLv;
  if ( CombineSkillEntity
    && (qp = CombineSkillEntity->fields.qp,
        v46 = 0,
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v46,
          qp,
          (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__),
        (_BYTE)v46) )
  {
    v24 = (float)SHIDWORD(v46);
    v46 = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&v46,
      v24,
      (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
    v25 = *((float *)&v46 + 1);
    v26 = (unsigned __int8)v46;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(this, v27);
    if ( v26 )
    {
      v46 = 0;
      System_Nullable_float____ctor(
        (System_Nullable_float__o)&v46,
        CombineCampaignQpRate * v25,
        (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
      v29 = *((float *)&v46 + 1);
      goto LABEL_13;
    }
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(this, v22);
  }
  v29 = 0.0;
LABEL_13:
  if ( v29 == INFINITY )
    v30 = 0x80000000;
  else
    v30 = (int)v29;
  v18->fields.spendQp = v30;
  v18->fields.haveQp = this->fields.userQP;
  if ( !CombineSkillEntity || (itemIds = (__int64)CombineSkillEntity->fields.itemIds) == 0 )
    itemIds = sub_1C93B7C(int___TypeInfo, 0);
  v18->fields.combineItemIds = (struct System_Int32_array *)itemIds;
  sub_1C93A78(&v18->fields.combineItemIds, itemIds);
  if ( !CombineSkillEntity || (itemNums = (__int64)CombineSkillEntity->fields.itemNums) == 0 )
    itemNums = sub_1C93B7C(int___TypeInfo, 0);
  v18->fields.combineItemNums = (struct System_Int32_array *)itemNums;
  sub_1C93A78(&v18->fields.combineItemNums, itemNums);
  v18->fields.displayText = titleText;
  sub_1C93A78(&v18->fields.displayText, titleText);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_40;
  v34 = (ServantLimitImageMaster_o *)Instance;
  v36 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v36;
  *(_QWORD *)&v48.fields.fakeValue = v35;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v48, 0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_40;
  v37 = (int)Instance;
  Instance = (DataManager_o *)UserServantEntity__getDispLimitCount(this->fields.baseUserServantEntity, 0, 0);
  if ( !v34 )
    goto LABEL_40;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v34, v37, (int32_t)Instance, 0);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v39 = this->fields.baseUserServantEntity;
  if ( !v39 )
    goto LABEL_40;
  v40 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v39->fields.svtId, 0);
  v41 = this->fields.baseUserServantEntity;
  if ( !v41 )
    goto LABEL_40;
  v42 = (int)Instance;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v41->fields.limitCount, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, v43, 0);
  if ( !v40 )
    goto LABEL_40;
  if ( ServantLimitAddMaster__TryGetEntity(v40, &entity, v42, (int32_t)Instance, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_40;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        OverwriteSkillName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v15->fields.id, *p_targetName, 0);
        *p_targetName = OverwriteSkillName;
        sub_1C93A78(&v18->fields.targetName, OverwriteSkillName);
        return v18;
      }
LABEL_40:
      sub_1C93D2C(Instance, v14);
    }
  }
  return v18;
}


float SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *combineEventList; // x0
  float v4; // s8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2A8EB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    byte_4D2A8EB = 1;
  }
  memset(&v8, 0, sizeof(v8));
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  v4 = 1.0;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      combineEventList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v5 )
        break;
      if ( !v8.fields._current )
        sub_1C93D2C(v5, v6);
      if ( *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v4 = *(float *)((char *)&v8.fields._current->klass + (unsigned __int64)&word_38);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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

  if ( (byte_4D2A8EA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_CombineSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A8EA = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
  if ( !v8
    || (v11 = DataMasterBase_object__object__int___GetEntity(
                v8,
                (int32_t)Master_object,
                (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v11)
    || !Master_object )
  {
LABEL_12:
    sub_1C93D2C(Master_object, v6);
  }
  CombineSkillMaster__TryGetEntity((CombineSkillMaster_o *)Master_object, &entity, (int32_t)v11[7].klass, skillLv, 0);
  return entity;
}


SvtUseSkillData_o *SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  SvtUseSkillData_o *v5; // x19
  __int64 v6; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  char ignoreRandomSettings; // w6
  System_Int32_array *svtUseSkillIdList; // x1
  __int64 v10; // x0

  if ( (byte_4D2A8DE & 1) == 0 )
  {
    sub_1C93AD4(&SvtUseSkillData_TypeInfo);
    byte_4D2A8DE = 1;
  }
  v5 = (SvtUseSkillData_o *)sub_1C93D20(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor(v5, 0);
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
  v5->fields.svtUseSkillIdList = (struct System_Int32_array *)baseUserServantEntity;
  sub_1C93A78(&v5->fields, baseUserServantEntity);
  if ( this->fields.ignoreRandomSettings )
  {
    svtUseSkillIdList = v5->fields.svtUseSkillIdList;
  }
  else
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_14;
    svtUseSkillIdList = UserServantEntity__GetTransformedSkillIdList(
                          baseUserServantEntity,
                          transformIndex,
                          -1,
                          -1,
                          1,
                          -1,
                          1,
                          0);
  }
  v5->fields.svtActualSkillIdList = svtUseSkillIdList;
  sub_1C93A78(&v5->fields.svtActualSkillIdList, svtUseSkillIdList);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
LABEL_14:
    sub_1C93D2C(baseUserServantEntity, v6);
  v10 = ((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.methodPtr)(
          baseUserServantEntity,
          baseUserServantEntity->klass->vtable._6_getSkillLevelList.method);
  v5->fields.svtSkillLvList = (struct System_Int32_array *)v10;
  sub_1C93A78(&v5->fields.svtSkillLvList, v10);
  return v5;
}


SetLevelUpData_o *SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  struct SetLevelUpData_array *lvUpDataList; // x8

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_1C93D2C(this, method);
  if ( !LODWORD(lvUpDataList->max_length) )
    sub_1C93D34(this);
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
  struct UILabel_array *selectSkillHelpLabels; // x22
  int max_length; // w8
  unsigned int v9; // w23
  UILabel_o *v10; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v13; // x1
  int v14; // w21
  int32_t v15; // w20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A8DA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8857/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_1C93AD4(&StringLiteral_8860/*"MSG_SKILL_SELECT"*/);
    sub_1C93AD4(&StringLiteral_9292/*"NEED_QP_INFO"*/);
    byte_4D2A8DA = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8857/*"MSG_PRESELECT_BASE_SVT"*/, 0);
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
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C93D34(gameObject);
      v10 = selectSkillHelpLabels->m_Items[v9];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8860/*"MSG_SKILL_SELECT"*/, 0);
      if ( !v10 )
        break;
      UILabel__set_text(v10, (System_String_o *)gameObject, 0);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_18;
    }
LABEL_29:
    sub_1C93D2C(gameObject, v5);
  }
LABEL_18:
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9292/*"NEED_QP_INFO"*/, 0);
  if ( !needQpLb )
    goto LABEL_29;
  UILabel__set_text(needQpLb, (System_String_o *)gameObject, 0);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  gameObject = System_Int32__ToString((int)this + 360, 0);
  if ( !qpLb )
    goto LABEL_29;
  UILabel__set_text(qpLb, (System_String_o *)gameObject, 0);
  gameObject = this->fields.qpLb;
  if ( !gameObject )
    goto LABEL_29;
  v16.fields.r = 1.0;
  v16.fields.g = 1.0;
  v16.fields.b = 1.0;
  v16.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v16, 0);
  SkillCombineControl__ResetDispSkillInfo(this, v13);
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_29;
  v14 = *((_DWORD *)gameObject + 6);
  if ( v14 >= 1 )
  {
    v15 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v15,
                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0);
      if ( v14 == ++v15 )
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
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  MenuListControl_o *v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2A8D9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_17809/*"buttontxt_synthesis"*/);
    byte_4D2A8D9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
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
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17809/*"buttontxt_synthesis"*/, 0);
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
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_1C93A78(&this->fields.charaGraph, 0);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0),
        (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_30:
    sub_1C93D2C(helpBtn, v5);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1C93A78(&this->fields.combineEventList, combineEventList);
  v13 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v13 && v13->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      v13,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v14 )
        break;
      if ( !v17.fields._current )
        sub_1C93D2C(v14, v15);
      if ( *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v16 = this->fields.menuListCtr;
        if ( !v16 )
          sub_1C93D2C(0, v15);
        MenuListControl__setBannerIcon(
          v16,
          this->fields.eventNoticeImg,
          *(EventEntity_o **)((char *)&v17.fields._current->klass + (unsigned __int64)off_50),
          0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4D2A8E5 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3794/*"CONFIRM_TITLE_SKILL_COMBINE"*/);
    byte_4D2A8E5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3794/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C93D2C(v3, v4);
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
  if ( (byte_4D2A8E8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SkillCombineControl_o *)sub_1C93AD4(&Method_SkillCombineControl_OnClickSwitchSkill__);
    byte_4D2A8E8 = 1;
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
    sub_1C93D2C(this, method);
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v16, 0);
  SkillCombineControl__SetCombineSkillList(v2, v11, v10, v12);
  if ( v2->fields.switchIdxType )
    SkillCombineControl__SetTitleText(v2, v13);
  v14 = Method_SkillCombineControl_OnClickSwitchSkill__;
  if ( (*((_BYTE *)Method_SkillCombineControl_OnClickSwitchSkill__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C93AEC(Method_SkillCombineControl_OnClickSwitchSkill__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
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
  UIWidget_o *condTitleLabel; // x20
  UIWidget_o *condTitleSprite; // x19
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A8DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    byte_4D2A8DB = 1;
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
                                                                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !skillInfoList )
        break;
      v7 = (UnityEngine_Component_o *)skillInfoList;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)skillInfoList, 0);
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)v6 * 230.0, 0);
      v9 = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalPositionY(v9, 0.0, 0);
      v10 = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalScale_36747176(v10, 1.0, 0);
      if ( v5 == v6 )
        goto LABEL_10;
      skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
      ++v6;
    }
    while ( skillInfoList );
LABEL_13:
    sub_1C93D2C(skillInfoList, method);
  }
LABEL_10:
  condTitleLabel = (UIWidget_o *)this->fields.condTitleLabel;
  DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
  if ( !condTitleLabel )
    goto LABEL_13;
  UIWidget__set_color(condTitleLabel, DefaultCondTitleLabelColor, 0);
  condTitleSprite = (UIWidget_o *)this->fields.condTitleSprite;
  DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
  if ( !condTitleSprite )
    goto LABEL_13;
  UIWidget__set_color(condTitleSprite, DefaultCondTitleSpriteColor, 0);
}


void SkillCombineControl__SetBaseSvtCardImg(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x1

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(SkillCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1C93A78(p_charaGraph, v5);
}


void SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t v8; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  _BOOL4 TransformIsNotSkillChange_k__BackingField; // w8
  __int64 v12; // x1
  struct SvtUseSkillData_array *v13; // x0
  struct SvtUseSkillData_array **p_skillDataList; // x21
  const MethodInfo *v15; // x2
  unsigned int *skillDataList; // x26
  unsigned __int64 v17; // x22
  int32_t *p_switchIdxType; // x25
  __int64 v19; // x27
  SvtUseSkillData_o *SvtSkillData; // x0
  SvtUseSkillData_o *v21; // x23
  int v22; // w8
  const MethodInfo *v23; // x1
  __int64 v24; // x20
  __int64 v25; // x21
  int32_t v26; // w0
  UnityEngine_GameObject_o *v27; // x1
  const MethodInfo *v28; // x3
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4D2A8DD & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&SvtUseSkillData___TypeInfo);
    byte_4D2A8DD = 1;
  }
  if ( usrSvtEn )
  {
    v7 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v31.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v30 = v31;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v30, 0);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v8;
    sub_1C93A78(&this->fields.baseUserServantEntity, usrSvtEn);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb )
      goto LABEL_19;
    preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0);
    if ( !preSelectBaseLb )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb;
    if ( !preSelectBaseLb )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0);
    CombineMenuControl__SetTransformInfo((CombineMenuControl_o *)this, 0);
    TransformIsNotSkillChange_k__BackingField = this->fields._TransformIsNotSkillChange_k__BackingField;
    this->fields.switchIdx = 0;
    this->fields.switchIdxType = 0;
    v12 = TransformIsNotSkillChange_k__BackingField ? 1LL : (unsigned int)this->fields.transformTotal;
    v13 = (struct SvtUseSkillData_array *)sub_1C93B7C(SvtUseSkillData___TypeInfo, v12);
    p_skillDataList = &this->fields.skillDataList;
    this->fields.skillDataList = v13;
    preSelectBaseLb = (UnityEngine_Component_o *)sub_1C93A78(&this->fields.skillDataList, v13);
    skillDataList = (unsigned int *)this->fields.skillDataList;
    if ( !skillDataList )
      goto LABEL_19;
    v17 = 0;
    p_switchIdxType = &this->fields.switchIdxType;
    v19 = 8;
    while ( (__int64)v17 < (int)skillDataList[6] )
    {
      SvtSkillData = SkillCombineControl__GetSvtSkillData(this, v17, v15);
      v21 = SvtSkillData;
      if ( SvtSkillData )
      {
        SvtSkillData = (SvtUseSkillData_o *)sub_1C93C10(SvtSkillData, *(_QWORD *)(*(_QWORD *)skillDataList + 64LL));
        if ( !SvtSkillData )
        {
          v29 = sub_1C93D50();
          sub_1C93BFC(v29, 0);
        }
      }
      if ( v17 >= skillDataList[6] )
        sub_1C93D34(SvtSkillData);
      *(_QWORD *)&skillDataList[v19] = v21;
      preSelectBaseLb = (UnityEngine_Component_o *)sub_1C93A78(&skillDataList[v19], v21);
      skillDataList = (unsigned int *)*p_skillDataList;
      ++v17;
      v19 += 2;
      if ( !*p_skillDataList )
        goto LABEL_19;
    }
    if ( this->fields._IsTransformServant_k__BackingField && !this->fields._TransformIsNotSkillChange_k__BackingField )
    {
      preSelectBaseLb = (UnityEngine_Component_o *)this->fields.condTitleLabel;
      if ( !preSelectBaseLb )
        goto LABEL_19;
      UIWidget__set_color((UIWidget_o *)preSelectBaseLb, this->fields._CondTitleLabelColor_k__BackingField, 0);
      preSelectBaseLb = (UnityEngine_Component_o *)this->fields.condTitleSprite;
      if ( !preSelectBaseLb )
        goto LABEL_19;
      UIWidget__set_color((UIWidget_o *)preSelectBaseLb, this->fields._CondTitleSpriteColor_k__BackingField, 0);
      v22 = 1;
    }
    else
    {
      if ( !SkillCombineControl__TrySetSwitchSkillIdsList(this, v9) )
      {
LABEL_28:
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
                SkillCombineControl__SetTitleText(this, v23);
              else
                SkillCombineControl__ResetDispSkillInfo(this, v23);
              v25 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
              v24 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v32.fields.currentCryptoKey = v25;
              *(_QWORD *)&v32.fields.fakeValue = v24;
              v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v32, 0);
              SkillCombineControl__SetCombineSkillList(this, v27, v26, v28);
              return;
            }
          }
        }
LABEL_19:
        sub_1C93D2C(preSelectBaseLb, v9);
      }
      v22 = 2;
    }
    *p_switchIdxType = v22;
    goto LABEL_28;
  }
}


void SkillCombineControl__SetCombineSkillList(
        SkillCombineControl_o *this,
        UnityEngine_GameObject_o *targetGo,
        int32_t svtId,
        const MethodInfo *method)
{
  SkillCombineControl_o *v5; // x20
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SvtUseSkillData_o *v8; // x8
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  il2cpp_array_size_t max_length; // x21
  System_Collections_Generic_List_object__o *v12; // x19
  const MethodInfo *v13; // x2
  unsigned __int64 v14; // x24
  UnityEngine_Component_o *v15; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  struct System_Int32_array *v19; // x8
  int32_t v20; // w25
  System_ValueTuple_object__object__o Item; // kr00_16
  System_ValueTuple_object__object__o v22; // kr10_16
  struct SvtUseSkillData_array *v23; // x8
  __int64 v24; // x9
  SvtUseSkillData_o *v25; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int32_t v27; // w19
  Il2CppObject *v28; // x0
  SkillEntity_o *v29; // x29
  int32_t IconId; // w26
  ServantLimitImageMaster_o *v31; // x21
  int32_t ServantImageLimitSealAfter; // w21
  struct UserServantEntity_o *v33; // x8
  ServantLimitAddMaster_o *v34; // x22
  __int64 v35; // x19
  __int64 v36; // x27
  int32_t v37; // w19
  int32_t maxLv; // w22
  unsigned __int64 v39; // x29
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v41; // x19
  int32_t StrengthStatus; // w0
  int32_t skillRecord; // w27
  int32_t v44; // w21
  UserServantEntity_o *baseUserServantEntity; // x28
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x19
  const MethodInfo *v47; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v49; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v51; // x8
  int32_t v52; // [xsp+2Ch] [xbp-94h]
  SkillCombineControl_o **p_targetList; // [xsp+30h] [xbp-90h]
  __int64 v54; // [xsp+38h] [xbp-88h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+40h] [xbp-80h]
  int32_t skillLv; // [xsp+4Ch] [xbp-74h]
  System_String_o *defaultName; // [xsp+50h] [xbp-70h]
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v5 = this;
  if ( (byte_4D2A8E1 & 1) == 0 )
  {
    sub_1C93AD4(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SkillCombineControl_OnClickInfo__);
    this = (SkillCombineControl_o *)sub_1C93AD4(&StringLiteral_859/*"-"*/);
    byte_4D2A8E1 = 1;
  }
  entity = 0;
  skillDataList = v5->fields.skillDataList;
  if ( !skillDataList )
    goto LABEL_64;
  displayTransformIndex = v5->fields.displayTransformIndex;
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_65:
    sub_1C93D34(this);
  v8 = skillDataList->m_Items[displayTransformIndex];
  if ( !v8 )
    goto LABEL_64;
  svtUseSkillIdList = v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v5->fields.useSkillIdList;
  v5->fields.useSkillIdList = svtUseSkillIdList;
  this = (SkillCombineControl_o *)sub_1C93A78(&v5->fields.useSkillIdList, svtUseSkillIdList);
  useSkillIdList = v5->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_64;
  max_length = useSkillIdList->max_length;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v5->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v12;
  p_targetList = (SkillCombineControl_o **)&v5->fields.targetList;
  sub_1C93A78(&v5->fields.targetList, v12);
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    v54 = (unsigned int)max_length;
    v52 = svtId;
    while ( 1 )
    {
      this = (SkillCombineControl_o *)v5->fields.skillInfoList;
      if ( !this )
        break;
      this = (SkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v14,
                                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      v15 = (UnityEngine_Component_o *)this;
      if ( v5->fields.switchIdxType )
      {
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)(int)v14 * 234.0, 0);
        v17 = UnityEngine_Component__get_gameObject(v15, 0);
        GameObjectExtensions__SetLocalPositionY(v17, -16.0, 0);
        v18 = UnityEngine_Component__get_gameObject(v15, 0);
        GameObjectExtensions__SetLocalScale_36747176(v18, v5->fields.scaleOffset, 0);
      }
      v19 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v14 >= LODWORD(v19->max_length) )
        goto LABEL_65;
      v20 = v19->m_Items[v14];
      if ( v5->fields.switchIdxType == 2 )
      {
        this = (SkillCombineControl_o *)v5->fields.switchSkillIdsList;
        if ( !this )
          break;
        Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                 (System_Collections_Generic_List_T__o *)this,
                 v5->fields.switchIdx,
                 (const MethodInfo_3828A0C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
        targetGo = (UnityEngine_GameObject_o *)Item.fields.Item2;
        this = (SkillCombineControl_o *)Item.fields.Item1;
        if ( !Item.fields.Item2 )
          break;
        if ( v14 >= LODWORD(Item.fields.Item2[1].monitor) )
          goto LABEL_65;
        if ( *((int *)&Item.fields.Item2[2].klass + v14) >= 1 )
        {
          this = (SkillCombineControl_o *)v5->fields.switchSkillIdsList;
          if ( !this )
            break;
          v22 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                  (System_Collections_Generic_List_T__o *)this,
                  v5->fields.switchIdx,
                  (const MethodInfo_3828A0C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
          targetGo = (UnityEngine_GameObject_o *)v22.fields.Item2;
          this = (SkillCombineControl_o *)v22.fields.Item1;
          if ( !v22.fields.Item2 )
            break;
          if ( v14 >= LODWORD(v22.fields.Item2[1].monitor) )
            goto LABEL_65;
          v20 = *((_DWORD *)&v22.fields.Item2[2].klass + v14);
        }
      }
      if ( v20 <= 0 )
      {
        v39 = v14 + 1;
      }
      else
      {
        v23 = v5->fields.skillDataList;
        if ( !v23 )
          break;
        v24 = v5->fields.displayTransformIndex;
        if ( (unsigned int)v24 >= LODWORD(v23->max_length) )
          goto LABEL_65;
        v25 = v23->m_Items[v24];
        if ( !v25 )
          break;
        svtSkillLvList = v25->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v14 >= LODWORD(svtSkillLvList->max_length) )
          goto LABEL_65;
        v27 = svtSkillLvList->m_Items[v14];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        v28 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v20,
                (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        skillLv = v27;
        if ( v28 )
        {
          v29 = (SkillEntity_o *)v28;
          IconId = SkillEntity__GetIconId((SkillEntity_o *)v28, 0);
          defaultName = SkillEntity__getName(v29, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (SkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !v5->fields.baseUserServantEntity )
            break;
          v31 = (ServantLimitImageMaster_o *)this;
          this = (SkillCombineControl_o *)UserServantEntity__getDispLimitCount(v5->fields.baseUserServantEntity, 0, 0);
          if ( !v31 )
            break;
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         v31,
                                         svtId,
                                         (int32_t)this,
                                         0);
          this = (SkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v33 = v5->fields.baseUserServantEntity;
          if ( !v33 )
            break;
          v34 = (ServantLimitAddMaster_o *)this;
          v36 = *(_QWORD *)&v33->fields.limitCount.fields.currentCryptoKey;
          v35 = *(_QWORD *)&v33->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = v36;
          *(_QWORD *)&v59.fields.fakeValue = v35;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v59, 0);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          this = (SkillCombineControl_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, v37, 0);
          if ( !v34 )
            break;
          if ( ServantLimitAddMaster__TryGetEntity(v34, &entity, svtId, (int32_t)this, 0) )
          {
            this = (SkillCombineControl_o *)entity;
            if ( !entity )
              break;
            if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
            {
              this = (SkillCombineControl_o *)entity;
              if ( !entity )
                break;
              defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v29->fields.id, defaultName, 0);
            }
          }
          maxLv = v29->fields.maxLv;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          defaultName = (System_String_o *)StringLiteral_859/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        v39 = v14 + 1;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                              (ServantSkillMaster_o *)this,
                              svtId,
                              (int)v14 + 1,
                              v20,
                              0);
        if ( EntityFromSkillId )
        {
          v41 = EntityFromSkillId;
          StrengthStatus = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, -1, 0);
          skillRecord = v41->fields.skillNum;
          v44 = StrengthStatus;
        }
        else
        {
          v44 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v5->fields.baseUserServantEntity;
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1C93D20(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          callback,
          (Il2CppObject *)v5,
          Method_SkillCombineControl_OnClickInfo__,
          v47);
        if ( !v15 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          (ServantSkillInfoIconComponent_o *)v15,
          v14,
          v20,
          skillLv,
          maxLv,
          defaultName,
          IconId,
          v44,
          skillRecord,
          baseUserServantEntity,
          callback,
          0);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        svtId = v52;
        v49 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v15,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v51 + 32) = v15;
          sub_1C93A78(v51 + 32, v15);
        }
      }
      v14 = v39;
      if ( v39 == v54 )
        goto LABEL_63;
    }
LABEL_64:
    sub_1C93D2C(this, targetGo);
  }
LABEL_63:
  SkillCombineControl__SetNeedItemInfo(v5, v5->fields.currentIdx, v13);
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

  if ( (byte_4D2A8E4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4D2A8E4 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C93D2C(combineBtnBg, method);
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

  if ( (byte_4D2A8DC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9286/*"N0"*/);
    byte_4D2A8DC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65939396(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9286/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C93D2C(SelfUserGame, v4);
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
  const MethodInfo_3828A0C **v10; // x28
  int32_t v11; // w21
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v13; // x9
  int32_t v14; // w25
  ServantSkillInfoIconComponent_o *v15; // x22
  System_ValueTuple_object__object__o Item; // kr00_16
  __int64 v17; // x8
  System_ValueTuple_object__object__o v18; // kr10_16
  __int64 v19; // x8
  __int64 v20; // x1
  int32_t displayTransformIndex; // w25
  struct SetLevelUpData_array *v22; // x0
  struct SetLevelUpData_array **p_lvUpDataList; // x21
  const MethodInfo *v24; // x2
  struct SetLevelUpData_array *lvUpDataList; // x8
  unsigned int v26; // w22
  __int64 v27; // x26
  const MethodInfo *v28; // x6
  struct SvtUseSkillData_array *skillDataList; // x8
  _QWORD *v30; // x9
  __int64 v31; // x8
  __int64 v32; // x10
  __int64 v33; // x9
  struct SetLevelUpData_array *v34; // x27
  __int64 v35; // x23
  System_Collections_Generic_List_T__o *switchSkillIdsList; // x22
  System_Predicate_T__o *v37; // x23
  System_Collections_Generic_List_T__o *All; // x25
  __int64 v39; // x0
  unsigned __int64 v40; // x23
  __int64 v41; // x29
  System_ValueTuple_object__object__o v42; // kr20_16
  __int64 v43; // x24
  struct SvtUseSkillData_array *v44; // x8
  __int64 v45; // x9
  SvtUseSkillData_o *v46; // x9
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *svtActualSkillIdList; // x9
  const MethodInfo_3828A0C **v49; // x22
  const MethodInfo_3828A0C *v50; // x2
  unsigned int *v51; // x28
  int32_t v52; // w21
  int32_t v53; // w26
  int32_t v54; // w27
  Il2CppObject *Item1; // x0
  const MethodInfo *v56; // x6
  __int64 v57; // x24
  struct SetLevelUpData_array *v58; // x8
  __int64 v59; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2A8E2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_1C93AD4(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_1C93AD4(&SetLevelUpData___TypeInfo);
    sub_1C93AD4(&Method_SkillCombineControl___c__DisplayClass49_0__SetNeedItemInfo_b__0__);
    sub_1C93AD4(&SkillCombineControl___c__DisplayClass49_0_TypeInfo);
    byte_4D2A8E2 = 1;
  }
  transformInfo = 0;
  v5 = sub_1C93D20(SkillCombineControl___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_54;
  *(_DWORD *)(v5 + 16) = idx;
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  if ( this->fields.baseUserServantEntity )
  {
    if ( this->fields.targetList )
    {
      selectSkillInfo = (__int64)this->fields.selectSkillInfo;
      if ( selectSkillInfo )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, 1, 0);
        selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
        if ( selectSkillHelpLabels )
        {
          if ( !LODWORD(selectSkillHelpLabels->max_length) )
            goto LABEL_81;
          selectSkillInfo = (__int64)selectSkillHelpLabels->m_Items[0];
          if ( selectSkillInfo )
          {
            selectSkillInfo = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)selectSkillInfo,
                                         0);
            if ( selectSkillInfo )
            {
              UnityEngine_GameObject__SetActive(
                (UnityEngine_GameObject_o *)selectSkillInfo,
                this->fields.switchIdxType == 0,
                0);
              v9 = this->fields.selectSkillHelpLabels;
              if ( v9 )
              {
                if ( LODWORD(v9->max_length) <= 1 )
                  goto LABEL_81;
                selectSkillInfo = (__int64)v9->m_Items[1];
                if ( selectSkillInfo )
                {
                  selectSkillInfo = (__int64)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)selectSkillInfo,
                                               0);
                  if ( selectSkillInfo )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)selectSkillInfo,
                      this->fields.switchIdxType != 0,
                      0);
                    selectSkillInfo = (__int64)this->fields.targetList;
                    if ( selectSkillInfo )
                    {
                      v10 = (const MethodInfo_3828A0C **)&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__;
                      v11 = 0;
                      while ( v11 < *(_DWORD *)(selectSkillInfo + 24) )
                      {
                        selectSkillInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)selectSkillInfo,
                                                     v11,
                                                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
                        useSkillIdList = this->fields.useSkillIdList;
                        if ( !useSkillIdList )
                          goto LABEL_54;
                        v13 = *(int *)(v5 + 16);
                        if ( (unsigned int)v13 >= LODWORD(useSkillIdList->max_length) )
                          goto LABEL_81;
                        v14 = useSkillIdList->m_Items[v13];
                        v15 = (ServantSkillInfoIconComponent_o *)selectSkillInfo;
                        if ( this->fields.switchIdxType == 2 )
                        {
                          selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
                          if ( !selectSkillInfo )
                            goto LABEL_54;
                          Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                                   (System_Collections_Generic_List_T__o *)selectSkillInfo,
                                   this->fields.switchIdx,
                                   (const MethodInfo_3828A0C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
                          Item2 = Item.fields.Item2;
                          selectSkillInfo = (__int64)Item.fields.Item1;
                          if ( !Item.fields.Item2 )
                            goto LABEL_54;
                          v17 = *(int *)(v5 + 16);
                          if ( (unsigned int)v17 >= LODWORD(Item.fields.Item2[1].monitor) )
                            goto LABEL_81;
                          if ( *((int *)&Item.fields.Item2[2].klass + v17) >= 1 )
                          {
                            selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
                            if ( !selectSkillInfo )
                              goto LABEL_54;
                            v18 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                                    (System_Collections_Generic_List_T__o *)selectSkillInfo,
                                    this->fields.switchIdx,
                                    (const MethodInfo_3828A0C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
                            Item2 = v18.fields.Item2;
                            selectSkillInfo = (__int64)v18.fields.Item1;
                            if ( !v18.fields.Item2 )
                              goto LABEL_54;
                            v19 = *(int *)(v5 + 16);
                            if ( (unsigned int)v19 >= LODWORD(v18.fields.Item2[1].monitor) )
                              goto LABEL_81;
                            v14 = *((_DWORD *)&v18.fields.Item2[2].klass + v19);
                          }
                        }
                        if ( v15 )
                        {
                          ServantSkillInfoIconComponent__SetDispSelectMskImg(v15, v14 == v15->fields.currentSkillId, 0);
                          selectSkillInfo = (__int64)this->fields.targetList;
                          ++v11;
                          if ( selectSkillInfo )
                            continue;
                        }
                        goto LABEL_54;
                      }
                      v20 = this->fields._TransformIsNotSkillChange_k__BackingField
                          ? 1LL
                          : (unsigned int)this->fields.transformTotal;
                      displayTransformIndex = this->fields.displayTransformIndex;
                      v22 = (struct SetLevelUpData_array *)sub_1C93B7C(SetLevelUpData___TypeInfo, v20);
                      p_lvUpDataList = &this->fields.lvUpDataList;
                      this->fields.lvUpDataList = v22;
                      selectSkillInfo = sub_1C93A78(&this->fields.lvUpDataList, v22);
                      lvUpDataList = this->fields.lvUpDataList;
                      if ( lvUpDataList )
                      {
                        v26 = 0;
                        v27 = 32;
                        while ( (signed int)v26 < SLODWORD(lvUpDataList->max_length) )
                        {
                          selectSkillInfo = (__int64)this->fields.baseUserServantEntity;
                          if ( !selectSkillInfo )
                            goto LABEL_54;
                          selectSkillInfo = UserServantEntity__GetTransformedServantInfo(
                                              (UserServantEntity_o *)selectSkillInfo,
                                              &transformInfo,
                                              v26,
                                              0);
                          skillDataList = this->fields.skillDataList;
                          if ( !skillDataList )
                            goto LABEL_54;
                          if ( v26 >= LODWORD(skillDataList->max_length) )
                            goto LABEL_81;
                          v30 = *(Il2CppClass **)((char *)&skillDataList->obj.klass + v27);
                          if ( !v30 )
                            goto LABEL_54;
                          v31 = v30[2];
                          if ( !v31 )
                            goto LABEL_54;
                          Item2 = (Il2CppObject *)*(int *)(v5 + 16);
                          if ( (unsigned int)Item2 >= *(_DWORD *)(v31 + 24) )
                            goto LABEL_81;
                          v32 = v30[3];
                          if ( !v32 )
                            goto LABEL_54;
                          if ( (unsigned int)Item2 >= *(_DWORD *)(v32 + 24) )
                            goto LABEL_81;
                          v33 = v30[5];
                          if ( !v33 )
                            goto LABEL_54;
                          if ( (unsigned int)Item2 >= *(_DWORD *)(v33 + 24) )
                            goto LABEL_81;
                          if ( !transformInfo )
                            goto LABEL_54;
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
                            goto LABEL_54;
                          v35 = selectSkillInfo;
                          if ( selectSkillInfo )
                          {
                            selectSkillInfo = sub_1C93C10(selectSkillInfo, v34->obj.klass->_1.element_class);
                            if ( !selectSkillInfo )
                            {
LABEL_82:
                              v59 = sub_1C93D50();
                              sub_1C93BFC(v59, 0);
                            }
                          }
                          if ( v26 >= LODWORD(v34->max_length) )
                            goto LABEL_81;
                          *(Il2CppClass **)((char *)&v34->obj.klass + v27) = (Il2CppClass *)v35;
                          selectSkillInfo = sub_1C93A78((char *)v34 + v27, v35);
                          lvUpDataList = *p_lvUpDataList;
                          ++v26;
                          v27 += 8;
                          if ( !*p_lvUpDataList )
                            goto LABEL_54;
                        }
                        if ( this->fields.switchIdxType == 2 )
                        {
                          switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
                          v37 = (System_Predicate_T__o *)sub_1C93D20(System_Predicate_ValueTuple_string__int_____TypeInfo);
                          System_Predicate_ValueTuple_object__object_____ctor(
                            v37,
                            (Il2CppObject *)v5,
                            Method_SkillCombineControl___c__DisplayClass49_0__SetNeedItemInfo_b__0__,
                            0);
                          if ( !switchSkillIdsList )
                            goto LABEL_54;
                          All = System_Collections_Generic_List_ValueTuple_object__object____FindAll(
                                  switchSkillIdsList,
                                  v37,
                                  (const MethodInfo_3829470 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
                          selectSkillInfo = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)All, 0);
                          if ( (selectSkillInfo & 1) == 0 )
                          {
                            if ( !All )
                              goto LABEL_54;
                            v39 = sub_1C93B7C(SetLevelUpData___TypeInfo, (unsigned int)All->fields._size);
                            *p_lvUpDataList = (struct SetLevelUpData_array *)v39;
                            selectSkillInfo = sub_1C93A78(&this->fields.lvUpDataList, v39);
                            if ( All->fields._size >= 1 )
                            {
                              v40 = 0;
                              v41 = 8;
                              do
                              {
                                v42 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                                        All,
                                        v40,
                                        *v10);
                                Item2 = v42.fields.Item2;
                                selectSkillInfo = (__int64)v42.fields.Item1;
                                if ( !v42.fields.Item2 )
                                  goto LABEL_54;
                                v43 = *(int *)(v5 + 16);
                                if ( (unsigned int)v43 >= LODWORD(v42.fields.Item2[1].monitor) )
                                  goto LABEL_81;
                                v44 = this->fields.skillDataList;
                                if ( !v44 )
                                  goto LABEL_54;
                                v45 = this->fields.displayTransformIndex;
                                if ( (unsigned int)v45 >= LODWORD(v44->max_length) )
                                  goto LABEL_81;
                                v46 = v44->m_Items[v45];
                                if ( !v46 )
                                  goto LABEL_54;
                                svtSkillLvList = v46->fields.svtSkillLvList;
                                if ( !svtSkillLvList )
                                  goto LABEL_54;
                                if ( (unsigned int)v43 >= LODWORD(svtSkillLvList->max_length) )
                                  goto LABEL_81;
                                svtActualSkillIdList = v46->fields.svtActualSkillIdList;
                                if ( !svtActualSkillIdList )
                                  goto LABEL_54;
                                if ( (unsigned int)v43 >= LODWORD(svtActualSkillIdList->max_length) )
                                  goto LABEL_81;
                                v49 = v10;
                                v50 = *v10;
                                v51 = (unsigned int *)this->fields.lvUpDataList;
                                v52 = *((_DWORD *)&v42.fields.Item2[2].klass + v43);
                                v53 = svtSkillLvList->m_Items[v43];
                                v54 = svtActualSkillIdList->m_Items[v43];
                                Item1 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                                          All,
                                          v40,
                                          v50).fields.Item1;
                                selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                                             this,
                                                             v43,
                                                             v52,
                                                             v53,
                                                             (System_String_o *)Item1,
                                                             v54,
                                                             v56);
                                if ( !v51 )
                                  goto LABEL_54;
                                v57 = selectSkillInfo;
                                if ( selectSkillInfo )
                                {
                                  selectSkillInfo = sub_1C93C10(selectSkillInfo, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
                                  if ( !selectSkillInfo )
                                    goto LABEL_82;
                                }
                                if ( v40 >= v51[6] )
                                  goto LABEL_81;
                                *(_QWORD *)&v51[v41] = v57;
                                selectSkillInfo = sub_1C93A78(&v51[v41], v57);
                                ++v40;
                                v41 += 2;
                                v10 = v49;
                              }
                              while ( (__int64)v40 < All->fields._size );
                              p_lvUpDataList = &this->fields.lvUpDataList;
                            }
                          }
                          displayTransformIndex = 0;
                        }
                        v58 = *p_lvUpDataList;
                        if ( *p_lvUpDataList )
                        {
                          if ( (unsigned int)displayTransformIndex < LODWORD(v58->max_length) )
                          {
                            SkillCombineControl__SetSvtSkillCombineData(this, v58->m_Items[displayTransformIndex], v24);
                            goto LABEL_80;
                          }
LABEL_81:
                          sub_1C93D34(selectSkillInfo);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_54:
    sub_1C93D2C(selectSkillInfo, Item2);
  }
LABEL_80:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillCombineControl__SetStateInfoMsg(SkillCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4D2A8E6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_7493/*"INFO_MSG_SKILLUP"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A8E6 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_12;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7493/*"INFO_MSG_SKILLUP"*/, 0);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_12:
    sub_1C93D2C(detailInfoLb, *(_QWORD *)&state);
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
  System_Collections_Generic_List_object__o *v17; // x22
  const MethodInfo *v18; // x1
  int64_t haveQpVal; // x8
  int64_t spendQpVal; // x9
  System_String_o *v21; // x22
  System_String_o *v22; // [xsp+8h] [xbp-68h]
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A8E3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_5816/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C93AD4(&StringLiteral_17809/*"buttontxt_synthesis"*/);
    sub_1C93AD4(&StringLiteral_9286/*"N0"*/);
    sub_1C93AD4(&StringLiteral_12276/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1C93AD4(&StringLiteral_12277/*"SHORT_QP_INFO_MSG"*/);
    sub_1C93AD4(&StringLiteral_17806/*"buttontxt_notsynthesis"*/);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2A8E3 = 1;
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
                                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                                                (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !itemInfoList )
    goto LABEL_8;
  v23.fields.r = 0.0;
  v23.fields.a = 1.0;
  v23.fields.g = 0.87891;
  v23.fields.b = 0.98828;
  v7 = (UIWidget_o *)itemInfoList;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v23, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5816/*"EXE_SUMMON_COMBINE_TXT"*/,
                                                                0);
  if ( !setLvUpData )
    goto LABEL_8;
  if ( setLvUpData->fields.currentLv < setLvUpData->fields.maxLv )
  {
    v8 = itemInfoList;
    itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
    if ( itemInfoList )
    {
      UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17809/*"buttontxt_synthesis"*/, 0);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
      if ( itemInfoList )
      {
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))itemInfoList->klass->vtable._33_get_Item.methodPtr)(
          itemInfoList,
          itemInfoList->klass->vtable._33_get_Item.method);
        qpLb = this->fields.qpLb;
        this->fields.spendQpVal = setLvUpData->fields.spendQp;
        itemInfoList = (System_Collections_Generic_List_object__o *)System_Int32__ToString_65934220(
                                                                      (int)this + 360,
                                                                      (System_String_o *)StringLiteral_9286/*"N0"*/,
                                                                      0);
        if ( qpLb )
        {
          v22 = (System_String_o *)v8;
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
                                                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
                if ( v12 >= LODWORD(combineItemIds->max_length) )
                  goto LABEL_47;
                if ( !combineItemNums )
                  goto LABEL_8;
                if ( v12 >= LODWORD(combineItemNums->max_length) )
                  goto LABEL_47;
                v17 = itemInfoList;
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
                  sub_1C93D34(itemInfoList);
                CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, m_Items[v12], v14[v12], 0);
                v16 &= LOBYTE(v17[2].fields._syncRoot) != 0;
              }
              ++v12;
            }
            while ( v12 != 5 );
            itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
            if ( itemInfoList )
            {
              v24.fields.r = 1.0;
              v24.fields.g = 1.0;
              v24.fields.b = 1.0;
              v24.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)itemInfoList, v24, 0);
              haveQpVal = this->fields.haveQpVal;
              spendQpVal = this->fields.spendQpVal;
              this->fields._IsExeCombine_k__BackingField = 1;
              v21 = v22;
              if ( haveQpVal < spendQpVal )
              {
                v25.fields.r = 1.0;
                v25.fields.g = 1.0;
                v25.fields.b = 1.0;
                v25.fields.a = 1.0;
                UIWidget__set_color(v7, v25, 0);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_12277/*"SHORT_QP_INFO_MSG"*/,
                                                                              0);
                if ( !this->fields.qpLb )
                  goto LABEL_8;
                v21 = (System_String_o *)itemInfoList;
                v26.fields.r = 1.0;
                v26.fields.g = 0.0;
                v26.fields.b = 0.0;
                v26.fields.a = 1.0;
                UIWidget__set_color((UIWidget_o *)this->fields.qpLb, v26, 0);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              if ( (v16 & 1) == 0 )
              {
                v27.fields.r = 1.0;
                v27.fields.g = 1.0;
                v27.fields.b = 1.0;
                v27.fields.a = 1.0;
                UIWidget__set_color(v7, v27, 0);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12276/*"SHORT_ITEM_INFO_MSG"*/, 0);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              SkillCombineControl__SetExeBtnState(this, v18);
              itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.detailInfoLb;
              if ( itemInfoList )
              {
                UILabel__set_text((UILabel_o *)itemInfoList, v21, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_8:
    sub_1C93D2C(itemInfoList, setLvUpData);
  }
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, (const MethodInfo *)setLvUpData);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  UILabel__set_text((UILabel_o *)itemInfoList, (System_String_o *)StringLiteral_1116/*"0"*/, 0);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  v28.fields.r = 1.0;
  v28.fields.g = 1.0;
  v28.fields.b = 1.0;
  v28.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v28, 0);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17806/*"buttontxt_notsynthesis"*/, 0);
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

  if ( (byte_4D2A8DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    byte_4D2A8DF = 1;
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
               (const MethodInfo_3828A0C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
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
    sub_1C93D2C(switchSkillIdsList, method);
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
  System_ValueTuple_object__object__o v4; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SkillCombineControl_o *v8; // x19
  SvtUseSkillData_o *v9; // x10
  struct System_Int32_array *svtUseSkillIdList; // x8
  BalanceConfig_c **v11; // x24
  unsigned __int64 v12; // x29
  unsigned __int64 max_length_low; // x9
  struct UserServantEntity_o *v14; // x10
  BalanceConfig_c **v15; // x21
  int32_t svtId; // w23
  int32_t v17; // w22
  __int64 v18; // x24
  __int64 v19; // x25
  int32_t v20; // w2
  int *currentCryptoKey; // x8
  ServantSkillAddEntity_o *v22; // x22
  unsigned __int64 v23; // x19
  Il2CppObject *v24; // x24
  struct System_String_array *titles; // x8
  Il2CppClass *v26; // x1
  System_Collections_ICollection_o *v27; // x25
  System_Predicate_T__o *v28; // x26
  System_ValueTuple_object__object__o v29; // kr40_16
  BalanceConfig_c *v30; // x0
  Il2CppObject *klass; // x23
  Il2CppObject *v32; // x2
  const MethodInfo_3BE077C *v33; // x4
  System_Collections_ICollection_c *v34; // x8
  _QWORD *v35; // x9
  __int64 hiddenValue_low; // x10
  System_ValueTuple_object__object__o *v37; // x8
  struct System_Int32_array *skillIds; // x9
  UIWidget_o *condTitleLabel; // x23
  System_String_o *CondLabelColor; // x24
  UIWidget_o *condTitleSprite; // x23
  System_String_o *CondSpriteColor; // x22
  SvtUseSkillData_o *v44; // [xsp+0h] [xbp-90h]
  ServantSkillAddMaster_o *v45; // [xsp+8h] [xbp-88h]
  System_ValueTuple_object__object__o v47; // [xsp+18h] [xbp-78h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  System_ValueTuple_object__object__o v50; // 0:x0.16
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A8E0 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_1C93AD4(&Method_SkillCombineControl___c__DisplayClass46_0__TrySetSwitchSkillIdsList_b__0__);
    sub_1C93AD4(&SkillCombineControl___c__DisplayClass46_0_TypeInfo);
    sub_1C93AD4(&Method_System_ValueTuple_string__int_____ctor__);
    byte_4D2A8E0 = 1;
  }
  v47.fields.Item2 = 0;
  transformInfo = 0;
  v47.fields.Item1 = 0;
  v2 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v2,
    (const MethodInfo_38284A8 *)Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
  p_switchSkillIdsList = (System_Collections_ICollection_o **)&this->fields.switchSkillIdsList;
  this->fields.switchSkillIdsList = (struct System_Collections_Generic_List_ValueTuple_string__int_____o *)v2;
  sub_1C93A78(&this->fields.switchSkillIdsList, v2);
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
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  skillDataList = this->fields.skillDataList;
  v45 = (ServantSkillAddMaster_o *)baseUserServantEntity;
  if ( !skillDataList )
    goto LABEL_48;
  displayTransformIndex = this->fields.displayTransformIndex;
  v8 = this;
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_50:
    sub_1C93D34(baseUserServantEntity);
  v9 = skillDataList->m_Items[displayTransformIndex];
  if ( !v9 || (svtUseSkillIdList = v9->fields.svtUseSkillIdList) == 0 )
LABEL_48:
    sub_1C93D2C(baseUserServantEntity, v4.fields.Item1);
  v11 = &BalanceConfig_TypeInfo;
  v12 = 0;
  v44 = v9;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    if ( (__int64)v12 >= (int)max_length_low )
      return !BasicHelper__IsNullOrEmpty(*p_switchSkillIdsList, 0);
    if ( v12 >= max_length_low )
      goto LABEL_50;
    if ( !transformInfo )
      goto LABEL_48;
    v14 = v8->fields.baseUserServantEntity;
    if ( !v14 )
      goto LABEL_48;
    v15 = v11;
    svtId = transformInfo->fields.svtId;
    v17 = svtUseSkillIdList->m_Items[v12];
    v19 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
    v18 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v19;
    *(_QWORD *)&v49.fields.fakeValue = v18;
    baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                     v49,
                                                     0);
    if ( !transformInfo )
      goto LABEL_48;
    v20 = (int)baseUserServantEntity;
    baseUserServantEntity = (UserServantEntity_o *)v45;
    if ( !v45 )
      goto LABEL_48;
    v11 = v15;
    baseUserServantEntity = (UserServantEntity_o *)ServantSkillAddMaster__GetEnableEntity(
                                                     v45,
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
        v24 = (Il2CppObject *)sub_1C93D20(SkillCombineControl___c__DisplayClass46_0_TypeInfo);
        System_Object___ctor(v24, 0);
        titles = v22->fields.titles;
        if ( !titles )
          goto LABEL_48;
        if ( v23 >= LODWORD(titles->max_length) )
          goto LABEL_50;
        if ( !v24 )
          goto LABEL_48;
        v26 = (Il2CppClass *)titles->m_Items[v23];
        v24[1].klass = v26;
        sub_1C93A78(&v24[1], v26);
        v27 = *p_switchSkillIdsList;
        v28 = (System_Predicate_T__o *)sub_1C93D20(System_Predicate_ValueTuple_string__int_____TypeInfo);
        System_Predicate_ValueTuple_object__object_____ctor(
          v28,
          v24,
          Method_SkillCombineControl___c__DisplayClass46_0__TrySetSwitchSkillIdsList_b__0__,
          0);
        if ( !v27 )
          goto LABEL_48;
        v29 = System_Collections_Generic_List_ValueTuple_object__object____Find(
                (System_Collections_Generic_List_T__o *)v27,
                v28,
                (const MethodInfo_38293B4 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
        v47 = v29;
        baseUserServantEntity = (UserServantEntity_o *)System_String__op_Equality(
                                                         (System_String_o *)v29.fields.Item1,
                                                         0,
                                                         0);
        if ( !v29.fields.Item2 && ((unsigned __int8)baseUserServantEntity & 1) != 0 )
        {
          v30 = *v15;
          klass = (Il2CppObject *)v24[1].klass;
          if ( !(*v15)->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v30);
            v30 = *v15;
          }
          v32 = (Il2CppObject *)sub_1C93B7C(int___TypeInfo, (unsigned int)v30->static_fields->SvtSkillListMax);
          v50.fields.Item1 = (Il2CppObject *)&v47;
          v50.fields.Item2 = klass;
          System_ValueTuple_object__object____ctor(
            v50,
            v32,
            (Il2CppObject *)Method_System_ValueTuple_string__int_____ctor__,
            v33);
          baseUserServantEntity = (UserServantEntity_o *)*p_switchSkillIdsList;
          if ( !*p_switchSkillIdsList )
            goto LABEL_48;
          v4 = v47;
          v34 = (System_Collections_ICollection_c *)baseUserServantEntity->fields.id.fields.currentCryptoKey;
          v35 = Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__;
          ++HIDWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( !v34 )
            goto LABEL_48;
          hiddenValue_low = SLODWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v34->_1.namespaze) )
          {
            System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
              (System_Collections_Generic_List_T__o *)baseUserServantEntity,
              v4,
              *(const MethodInfo_3828D28 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = (System_ValueTuple_object__object__o *)((char *)v34 + 16 * hiddenValue_low);
            LODWORD(baseUserServantEntity->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
            v37[2] = v4;
            baseUserServantEntity = (UserServantEntity_o *)sub_1C93A78(&v37[2], 0);
          }
        }
        skillIds = v22->fields.skillIds;
        if ( skillIds )
        {
          if ( v23 >= LODWORD(skillIds->max_length) )
            goto LABEL_50;
          LODWORD(skillIds) = v22->fields.skillIds->m_Items[v23];
        }
        if ( v47.fields.Item2 )
        {
          if ( v12 >= LODWORD(v47.fields.Item2[1].monitor) )
            goto LABEL_50;
          *((_DWORD *)&v47.fields.Item2[2].klass + v12) = (_DWORD)skillIds;
          currentCryptoKey = (int *)v22->fields.titles;
          ++v23;
          if ( currentCryptoKey )
            continue;
        }
        goto LABEL_48;
      }
      v8 = this;
      condTitleLabel = (UIWidget_o *)this->fields.condTitleLabel;
      CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v22, 0);
      DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
      v52 = ColorHelper__ParseColorCode_44837332(CondLabelColor, DefaultCondTitleLabelColor, 0);
      if ( !condTitleLabel )
        goto LABEL_48;
      UIWidget__set_color(condTitleLabel, v52, 0);
      condTitleSprite = (UIWidget_o *)this->fields.condTitleSprite;
      CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v22, 0);
      DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
      v54 = ColorHelper__ParseColorCode_44837332(CondSpriteColor, DefaultCondTitleSpriteColor, 0);
      if ( !condTitleSprite )
        goto LABEL_48;
      v11 = v15;
      UIWidget__set_color(condTitleSprite, v54, 0);
    }
    else
    {
      v8 = this;
    }
    ++v12;
    svtUseSkillIdList = v44->fields.svtUseSkillIdList;
    if ( !svtUseSkillIdList )
      goto LABEL_48;
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
    sub_1C93D2C(this, x.fields.Item1);
  idx = this->fields.idx;
  if ( (unsigned int)idx >= LODWORD(x.fields.Item2->max_length) )
    sub_1C93D34(this);
  return x.fields.Item2->m_Items[idx] > 0;
}