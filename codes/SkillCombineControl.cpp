void SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4DFE90E & 1) == 0 )
  {
    sub_1CE6700(&CombineMenuControl_TypeInfo);
    byte_4DFE90E = 1;
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

  if ( (byte_4DFE909 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1CE6700(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (SkillCombineControl_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFE909 = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))resData->klass->vtable._6_getSkillLevelList.methodPtr)(
                                          resData,
                                          resData->klass->vtable._6_getSkillLevelList.method),
        !SkillIdList) )
  {
LABEL_17:
    sub_1CE6958(this, resData);
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
        sub_1CE6960(this);
      v10 = SkillIdList->m_Items[v8];
      if ( v10 >= 1 )
      {
        v11 = *((_DWORD *)p_combineRootComponent + v8);
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10,
                                          (const MethodInfo_34E925C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  SkillEntity_o *v17; // x23
  const MethodInfo *v18; // x2
  CombineSkillEntity_o *CombineSkillEntity; // x26
  SetLevelUpData_o *v20; // x22
  __int64 v21; // x1
  System_String_o *Name; // x0
  System_String_o **p_targetName; // x24
  const MethodInfo *v24; // x1
  int32_t qp; // w1
  System_Nullable_int__o v26; // x0
  float v27; // s0
  System_Nullable_float__o v28; // x0
  float v29; // x27^4
  int v30; // w28
  const MethodInfo *v31; // x1
  float CombineCampaignQpRate; // s0
  System_Nullable_float__o v33; // x0
  double v34; // d0
  int v35; // w8
  __int64 itemIds; // x1
  __int64 itemNums; // x1
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w21
  UserServantEntity_o *baseUserServantEntity; // x8
  ServantLimitAddMaster_o *v40; // x20
  System_String_o *OverwriteSkillName; // x0
  __int64 v43; // [xsp+8h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4DFE90B & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1CE6700(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1CE6700(&Method_System_Nullable_int___ctor__);
    sub_1CE6700(&Method_System_Nullable_float___ctor__);
    sub_1CE6700(&Method_System_Nullable_float__get_HasValue__);
    sub_1CE6700(&Method_System_Nullable_int__get_HasValue__);
    sub_1CE6700(&SetLevelUpData_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4DFE90B = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_33;
  v17 = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           skillId,
                           (const MethodInfo_34E925C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  CombineSkillEntity = SkillCombineControl__GetCombineSkillEntity(this, skillLv, v18);
  v20 = (SetLevelUpData_o *)sub_1CE694C(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v20, 0);
  if ( !v20 )
    goto LABEL_33;
  v20->fields.currentId = skillId;
  v20->fields.actualId = actualSkillId;
  v20->fields.currentIndex = idx + 1;
  v20->fields.realIndex = idx;
  v21 = StringLiteral_1/*""*/;
  v20->fields.targetRuby = (struct System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)sub_1CE66A4(&v20->fields.targetRuby, v21);
  if ( !v17 )
    goto LABEL_33;
  Name = SkillEntity__getName(v17, 0);
  v20->fields.targetName = Name;
  p_targetName = &v20->fields.targetName;
  sub_1CE66A4(&v20->fields.targetName, Name);
  v20->fields.currentLv = skillLv;
  v20->fields.nextLv = skillLv + 1;
  v20->fields.maxLv = v17->fields.maxLv;
  if ( CombineSkillEntity
    && (qp = CombineSkillEntity->fields.qp,
        v26 = (System_Nullable_int__o)&v43,
        v43 = 0,
        System_Nullable_int____ctor(v26, qp, (const MethodInfo_3A2DE74 *)Method_System_Nullable_int___ctor__),
        (_BYTE)v43) )
  {
    v27 = (float)SHIDWORD(v43);
    v28 = (System_Nullable_float__o)&v43;
    v43 = 0;
    System_Nullable_float____ctor(v28, v27, (const MethodInfo_3A30574 *)Method_System_Nullable_float___ctor__);
    v29 = *((float *)&v43 + 1);
    v30 = (unsigned __int8)v43;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(this, v31);
    if ( v30 )
    {
      v33 = (System_Nullable_float__o)&v43;
      v43 = 0;
      System_Nullable_float____ctor(
        v33,
        CombineCampaignQpRate * v29,
        (const MethodInfo_3A30574 *)Method_System_Nullable_float___ctor__);
      v34 = *((float *)&v43 + 1);
      goto LABEL_13;
    }
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(this, v24);
  }
  v34 = 0.0;
LABEL_13:
  if ( v34 == INFINITY )
    v35 = 0x80000000;
  else
    v35 = (int)v34;
  v20->fields.spendQp = v35;
  v20->fields.haveQp = this->fields.userQP;
  if ( !CombineSkillEntity || (itemIds = (__int64)CombineSkillEntity->fields.itemIds) == 0 )
    itemIds = sub_1CE67A8(int___TypeInfo, 0);
  v20->fields.combineItemIds = (struct System_Int32_array *)itemIds;
  sub_1CE66A4(&v20->fields.combineItemIds, itemIds);
  if ( !CombineSkillEntity || (itemNums = (__int64)CombineSkillEntity->fields.itemNums) == 0 )
    itemNums = sub_1CE67A8(int___TypeInfo, 0);
  v20->fields.combineItemNums = (struct System_Int32_array *)itemNums;
  sub_1CE66A4(&v20->fields.combineItemNums, itemNums);
  v20->fields.displayText = titleText;
  sub_1CE66A4(&v20->fields.displayText, titleText);
  Instance = (DataManager_o *)this->fields.baseUserServantEntity;
  if ( !Instance )
    goto LABEL_33;
  DispLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    (UserServantEntity_o *)Instance,
                                                    overrideTransformVal,
                                                    0,
                                                    0,
                                                    0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_33;
  v40 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantEntity__GetServantId(baseUserServantEntity, overrideTransformVal, 0);
  if ( !v40 )
    goto LABEL_33;
  if ( ServantLimitAddMaster__TryGetEntity(
         v40,
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
        OverwriteSkillName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v17->fields.id, *p_targetName, 0);
        *p_targetName = OverwriteSkillName;
        sub_1CE66A4(&v20->fields.targetName, OverwriteSkillName);
        return v20;
      }
LABEL_33:
      sub_1CE6958(Instance, v16);
    }
  }
  return v20;
}


float SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *combineEventList; // x0
  float v4; // s8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4DFE90D & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    byte_4DFE90D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  v4 = 1.0;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      combineEventList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v5 )
        break;
      if ( !v8.fields._current )
        sub_1CE6958(v5, v6);
      if ( *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v4 = *(float *)((char *)&v8.fields._current->klass + (unsigned __int64)&word_38);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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

  if ( (byte_4DFE90C & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_CombineSkillMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4DFE90C = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
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
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v14, 0);
  if ( !v8
    || (v11 = DataMasterBase_object__object__int___GetEntity(
                v8,
                (int32_t)Master_object,
                (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v11)
    || !Master_object )
  {
LABEL_12:
    sub_1CE6958(Master_object, v6);
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

  if ( (byte_4DFE900 & 1) == 0 )
  {
    sub_1CE6700(&SvtUseSkillData_TypeInfo);
    byte_4DFE900 = 1;
  }
  v5 = (SvtUseSkillData_o *)sub_1CE694C(SvtUseSkillData_TypeInfo);
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
  sub_1CE66A4(&v5->fields, baseUserServantEntity);
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
  sub_1CE66A4(&v5->fields.svtActualSkillIdList, svtUseSkillIdList);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
LABEL_14:
    sub_1CE6958(baseUserServantEntity, v6);
  v10 = ((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.methodPtr)(
          baseUserServantEntity,
          baseUserServantEntity->klass->vtable._6_getSkillLevelList.method);
  v5->fields.svtSkillLvList = (struct System_Int32_array *)v10;
  sub_1CE66A4(&v5->fields.svtSkillLvList, v10);
  return v5;
}


SetLevelUpData_o *SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  struct SetLevelUpData_array *lvUpDataList; // x8

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_1CE6958(this, method);
  if ( !LODWORD(lvUpDataList->max_length) )
    sub_1CE6960(this);
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

  if ( (byte_4DFE8FC & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_8872/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_1CE6700(&StringLiteral_8875/*"MSG_SKILL_SELECT"*/);
    sub_1CE6700(&StringLiteral_9310/*"NEED_QP_INFO"*/);
    byte_4DFE8FC = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8872/*"MSG_PRESELECT_BASE_SVT"*/, 0);
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
        sub_1CE6960(gameObject);
      v10 = selectSkillHelpLabels->m_Items[v9];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8875/*"MSG_SKILL_SELECT"*/, 0);
      if ( !v10 )
        break;
      UILabel__set_text(v10, (System_String_o *)gameObject, 0);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_18;
    }
LABEL_29:
    sub_1CE6958(gameObject, v5);
  }
LABEL_18:
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9310/*"NEED_QP_INFO"*/, 0);
  if ( !needQpLb )
    goto LABEL_29;
  UILabel__set_text(needQpLb, (System_String_o *)gameObject, 0);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  gameObject = System_Int32__ToString((int)this + 392, 0);
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
                     (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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

  if ( (byte_4DFE8FB & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_17865/*"buttontxt_synthesis"*/);
    byte_4DFE8FB = 1;
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
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17865/*"buttontxt_synthesis"*/, 0);
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
    UnityEngine_Object__Destroy_72918540(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_1CE66A4(&this->fields.charaGraph, 0);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0),
        (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_30:
    sub_1CE6958(helpBtn, v5);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1CE66A4(&this->fields.combineEventList, combineEventList);
  v13 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v13 && v13->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      v13,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v14 )
        break;
      if ( !v17.fields._current )
        sub_1CE6958(v14, v15);
      if ( *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v16 = this->fields.menuListCtr;
        if ( !v16 )
          sub_1CE6958(0, v15);
        MenuListControl__setBannerIcon(
          v16,
          this->fields.eventNoticeImg,
          *(EventEntity_o **)((char *)&v17.fields._current->klass + (unsigned __int64)off_50),
          0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  SetRarityDialogControl_o *exeCombineDlg; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  System_String_o *v8; // x20
  System_Object_array *lvUpDataList; // x23
  int32_t v10; // w0
  int32_t v11; // w4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4DFE907 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_IsValidIndex_SetLevelUpData___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&StringLiteral_3801/*"CONFIRM_TITLE_SKILL_COMBINE"*/);
    byte_4DFE907 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exeCombineDlg = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_16;
  v6 = *(_QWORD *)&baseUserServantEntity->fields.transformVal.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.transformVal.fields.fakeValue;
  v8 = (System_String_o *)exeCombineDlg;
  if ( !UserServantEntity__get_IsSaveTransformServant(this->fields.baseUserServantEntity, 0) )
    goto LABEL_13;
  lvUpDataList = (System_Object_array *)this->fields.lvUpDataList;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v12, 0);
  if ( BasicHelper__IsValidIndex_object__52374156(
         lvUpDataList,
         v10,
         (const MethodInfo_31F2A8C *)Method_BasicHelper_IsValidIndex_SetLevelUpData___) )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v13, 0);
  }
  else
  {
LABEL_13:
    v11 = 0;
  }
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
LABEL_16:
    sub_1CE6958(exeCombineDlg, v4);
  SetRarityDialogControl__SetSkillNpCombineInfo(
    exeCombineDlg,
    this->fields.lvUpDataList,
    v8,
    this->fields._TransformIsNotSkillChange_k__BackingField,
    v11,
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
  if ( (byte_4DFE90A & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    this = (SkillCombineControl_o *)sub_1CE6700(&Method_SkillCombineControl_OnClickSwitchSkill__);
    byte_4DFE90A = 1;
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
    sub_1CE6958(this, method);
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
    v11 = (_QWORD *)sub_1CE6718(Method_SkillCombineControl_OnClickSwitchSkill__);
  v12 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
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

  if ( (byte_4DFE8FD & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    byte_4DFE8FD = 1;
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
                                                                     (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !skillInfoList )
        break;
      v7 = (UnityEngine_Component_o *)skillInfoList;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)skillInfoList, 0);
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)v6 * 230.0, 0);
      v9 = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalPositionY(v9, 0.0, 0);
      v10 = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalScale_37163176(v10, 1.0, 0);
      if ( v5 == v6 )
        goto LABEL_10;
      skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
      ++v6;
    }
    while ( skillInfoList );
LABEL_13:
    sub_1CE6958(skillInfoList, method);
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
  sub_1CE66A4(p_charaGraph, v5);
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
  __int64 transformTotal; // x1
  struct SvtUseSkillData_array *v13; // x0
  const MethodInfo *v14; // x2
  unsigned int *skillDataList; // x25
  unsigned __int64 v16; // x21
  int32_t *p_switchIdxType; // x23
  __int64 v18; // x24
  SvtUseSkillData_o *SvtSkillData; // x0
  SvtUseSkillData_o *v20; // x22
  int v21; // w8
  struct UnityEngine_Color_o *p_CondTitleLabelColor_k__BackingField; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  float *v26; // x11
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v28; // x10
  float *v29; // x9
  const MethodInfo *v30; // x1
  int32_t ServantId; // w0
  UnityEngine_GameObject_o *v32; // x1
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-60h]
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4DFE8FF & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&SvtUseSkillData___TypeInfo);
    byte_4DFE8FF = 1;
  }
  if ( usrSvtEn )
  {
    v7 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v35 = v36;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v35, 0);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v8;
    sub_1CE66A4(&this->fields.baseUserServantEntity, usrSvtEn);
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
    this->fields.switchIdx = 0;
    this->fields.switchIdxType = 0;
    if ( TransformIsNotSkillChange_k__BackingField && !this->fields._IsSaveTransformServant_k__BackingField )
      transformTotal = 1;
    else
      transformTotal = (unsigned int)this->fields.transformTotal;
    v13 = (struct SvtUseSkillData_array *)sub_1CE67A8(SvtUseSkillData___TypeInfo, transformTotal);
    this->fields.skillDataList = v13;
    preSelectBaseLb = (UnityEngine_Component_o *)sub_1CE66A4(&this->fields.skillDataList, v13);
    skillDataList = (unsigned int *)this->fields.skillDataList;
    if ( !skillDataList )
      goto LABEL_20;
    v16 = 0;
    p_switchIdxType = &this->fields.switchIdxType;
    v18 = 8;
    while ( (__int64)v16 < (int)skillDataList[6] )
    {
      SvtSkillData = SkillCombineControl__GetSvtSkillData(this, v16, v14);
      v20 = SvtSkillData;
      if ( SvtSkillData )
      {
        SvtSkillData = (SvtUseSkillData_o *)sub_1CE683C(SvtSkillData, *(_QWORD *)(*(_QWORD *)skillDataList + 64LL));
        if ( !SvtSkillData )
        {
          v34 = sub_1CE697C();
          sub_1CE6828(v34, 0);
        }
      }
      if ( v16 >= skillDataList[6] )
        sub_1CE6960(SvtSkillData);
      *(_QWORD *)&skillDataList[v18] = v20;
      preSelectBaseLb = (UnityEngine_Component_o *)sub_1CE66A4(&skillDataList[v18], v20);
      skillDataList = (unsigned int *)this->fields.skillDataList;
      ++v16;
      v18 += 2;
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
        v37.fields.a = *p_a;
        v37.fields.b = *p_b;
        v37.fields.g = *p_g;
        v37.fields.r = p_CondTitleLabelColor_k__BackingField->fields.r;
        UIWidget__set_color((UIWidget_o *)preSelectBaseLb, v37, 0);
        preSelectBaseLb = (UnityEngine_Component_o *)this->fields.condTitleSprite;
        if ( this->fields.displayTransformIndex <= 0 )
        {
          p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
          v29 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
          v28 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
          v26 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
          if ( !preSelectBaseLb )
            goto LABEL_20;
        }
        else
        {
          p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
          v29 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
          v28 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
          v26 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
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
        v26 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
        p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
        v28 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
        v29 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
      }
      v38.fields.a = *v26;
      v38.fields.b = *v28;
      v38.fields.g = *v29;
      v38.fields.r = p_CondTitleSpriteColor_k__BackingField->fields.r;
      UIWidget__set_color((UIWidget_o *)preSelectBaseLb, v38, 0);
      v21 = 1;
    }
    else
    {
      if ( !SkillCombineControl__TrySetSwitchSkillIdsList(this, v9) )
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
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, *p_switchIdxType != 0, 0);
              if ( *p_switchIdxType )
                SkillCombineControl__SetTitleText(this, v30);
              else
                SkillCombineControl__ResetDispSkillInfo(this, v30);
              ServantId = UserServantEntity__GetServantId(usrSvtEn, -1, 0);
              SkillCombineControl__SetCombineSkillList(this, v32, ServantId, v33);
              return;
            }
          }
        }
LABEL_20:
        sub_1CE6958(preSelectBaseLb, v9);
      }
      v21 = 2;
    }
    *p_switchIdxType = v21;
    goto LABEL_39;
  }
}


void SkillCombineControl__SetCombineSkillList(
        SkillCombineControl_o *this,
        UnityEngine_GameObject_o *targetGo,
        int32_t svtId,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x20
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SvtUseSkillData_o *v7; // x8
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  il2cpp_array_size_t max_length; // x21
  System_Collections_Generic_List_object__o *v11; // x19
  const MethodInfo *v12; // x2
  unsigned __int64 v13; // x23
  UnityEngine_Component_o *v14; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  struct System_Int32_array *v18; // x8
  int32_t v19; // w26
  System_ValueTuple_object__object__o Item; // kr00_16
  System_ValueTuple_object__object__o v21; // kr10_16
  int32_t IsSaveTransformServant_k__BackingField; // w8
  struct SvtUseSkillData_array *v23; // x9
  SvtUseSkillData_o *v24; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int32_t v26; // w29
  Il2CppObject *v27; // x0
  SkillEntity_o *v28; // x28
  int32_t IconId; // w25
  System_String_o *Name; // x22
  unsigned __int64 v31; // x28
  int maxLv; // w21
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w21
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v35; // x19
  int32_t StrengthStatus; // w0
  int32_t skillRecord; // w26
  int32_t v38; // w21
  UserServantEntity_o *baseUserServantEntity; // x27
  int32_t transformIndex; // w25
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x19
  const MethodInfo *v42; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v44; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v46; // x8
  SkillCombineControl_o **p_targetList; // [xsp+28h] [xbp-88h]
  __int64 v48; // [xsp+30h] [xbp-80h]
  int32_t skillMaxLv; // [xsp+3Ch] [xbp-74h]
  int32_t v51; // [xsp+40h] [xbp-70h]
  int32_t v52; // [xsp+44h] [xbp-6Ch]
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4DFE903 & 1) == 0 )
  {
    sub_1CE6700(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SkillCombineControl_OnClickInfo__);
    this = (SkillCombineControl_o *)sub_1CE6700(&StringLiteral_860/*"-"*/);
    byte_4DFE903 = 1;
  }
  entity = 0;
  skillDataList = v4->fields.skillDataList;
  if ( v4->fields._TransformIsNotSkillChange_k__BackingField && !v4->fields._IsSaveTransformServant_k__BackingField )
  {
    displayTransformIndex = 0;
    if ( !skillDataList )
      goto LABEL_68;
  }
  else
  {
    displayTransformIndex = v4->fields.displayTransformIndex;
    if ( !skillDataList )
      goto LABEL_68;
  }
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_69:
    sub_1CE6960(this);
  v7 = skillDataList->m_Items[displayTransformIndex];
  if ( !v7
    || (svtUseSkillIdList = v7->fields.svtUseSkillIdList,
        v4->fields.useSkillIdList = svtUseSkillIdList,
        this = (SkillCombineControl_o *)sub_1CE66A4(&v4->fields.useSkillIdList, svtUseSkillIdList),
        (useSkillIdList = v4->fields.useSkillIdList) == 0) )
  {
LABEL_68:
    sub_1CE6958(this, targetGo);
  }
  max_length = useSkillIdList->max_length;
  v11 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v4->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v11;
  p_targetList = (SkillCombineControl_o **)&v4->fields.targetList;
  sub_1CE66A4(&v4->fields.targetList, v11);
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    v48 = (unsigned int)max_length;
    do
    {
      this = (SkillCombineControl_o *)v4->fields.skillInfoList;
      if ( !this )
        goto LABEL_68;
      this = (SkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v13,
                                        (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      v14 = (UnityEngine_Component_o *)this;
      if ( v4->fields.switchIdxType )
      {
        if ( !this )
          goto LABEL_68;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)(int)v13 * 234.0, 0);
        v16 = UnityEngine_Component__get_gameObject(v14, 0);
        GameObjectExtensions__SetLocalPositionY(v16, -16.0, 0);
        v17 = UnityEngine_Component__get_gameObject(v14, 0);
        GameObjectExtensions__SetLocalScale_37163176(v17, v4->fields.scaleOffset, 0);
      }
      v18 = v4->fields.useSkillIdList;
      if ( !v18 )
        goto LABEL_68;
      if ( v13 >= LODWORD(v18->max_length) )
        goto LABEL_69;
      v19 = v18->m_Items[v13];
      if ( v4->fields.switchIdxType == 2 )
      {
        this = (SkillCombineControl_o *)v4->fields.switchSkillIdsList;
        if ( !this )
          goto LABEL_68;
        Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                 (System_Collections_Generic_List_T__o *)this,
                 v4->fields.switchIdx,
                 (const MethodInfo_38B4FD8 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
        targetGo = (UnityEngine_GameObject_o *)Item.fields.Item2;
        this = (SkillCombineControl_o *)Item.fields.Item1;
        if ( !Item.fields.Item2 )
          goto LABEL_68;
        if ( v13 >= LODWORD(Item.fields.Item2[1].monitor) )
          goto LABEL_69;
        if ( *((int *)&Item.fields.Item2[2].klass + v13) >= 1 )
        {
          this = (SkillCombineControl_o *)v4->fields.switchSkillIdsList;
          if ( !this )
            goto LABEL_68;
          v21 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                  (System_Collections_Generic_List_T__o *)this,
                  v4->fields.switchIdx,
                  (const MethodInfo_38B4FD8 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
          targetGo = (UnityEngine_GameObject_o *)v21.fields.Item2;
          this = (SkillCombineControl_o *)v21.fields.Item1;
          if ( !v21.fields.Item2 )
            goto LABEL_68;
          if ( v13 >= LODWORD(v21.fields.Item2[1].monitor) )
            goto LABEL_69;
          v19 = *((_DWORD *)&v21.fields.Item2[2].klass + v13);
        }
      }
      if ( v19 <= 0 )
      {
        v31 = v13 + 1;
      }
      else
      {
        if ( !v4->fields._TransformIsNotSkillChange_k__BackingField
          || (IsSaveTransformServant_k__BackingField = v4->fields._IsSaveTransformServant_k__BackingField) != 0 )
        {
          IsSaveTransformServant_k__BackingField = v4->fields.displayTransformIndex;
        }
        v23 = v4->fields.skillDataList;
        if ( !v23 )
          goto LABEL_68;
        if ( (unsigned int)IsSaveTransformServant_k__BackingField >= LODWORD(v23->max_length) )
          goto LABEL_69;
        v24 = v23->m_Items[IsSaveTransformServant_k__BackingField];
        if ( !v24 )
          goto LABEL_68;
        svtSkillLvList = v24->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          goto LABEL_68;
        if ( v13 >= LODWORD(svtSkillLvList->max_length) )
          goto LABEL_69;
        v26 = svtSkillLvList->m_Items[v13];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_68;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_68;
        v27 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v19,
                (const MethodInfo_34E925C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( v27 )
        {
          v28 = (SkillEntity_o *)v27;
          IconId = SkillEntity__GetIconId((SkillEntity_o *)v27, 0);
          Name = SkillEntity__getName(v28, 0);
          if ( v4->fields._IsSaveTransformServant_k__BackingField )
            targetGo = (UnityEngine_GameObject_o *)(unsigned int)v4->fields.displayTransformIndex;
          else
            targetGo = (UnityEngine_GameObject_o *)0xFFFFFFFFLL;
          this = (SkillCombineControl_o *)v4->fields.baseUserServantEntity;
          if ( !this )
            goto LABEL_68;
          DispLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                            (UserServantEntity_o *)this,
                                                            (int32_t)targetGo,
                                                            0,
                                                            0,
                                                            0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (SkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          if ( !this )
            goto LABEL_68;
          if ( ServantLimitAddMaster__TryGetEntity(
                 (ServantLimitAddMaster_o *)this,
                 &entity,
                 svtId,
                 DispLimitCountStageSealAfterAtStageLimitCount,
                 0) )
          {
            this = (SkillCombineControl_o *)entity;
            if ( !entity )
              goto LABEL_68;
            if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
            {
              this = (SkillCombineControl_o *)entity;
              if ( !entity )
                goto LABEL_68;
              Name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v28->fields.id, Name, 0);
            }
          }
          maxLv = v28->fields.maxLv;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          Name = (System_String_o *)StringLiteral_860/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_68;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          goto LABEL_68;
        v31 = v13 + 1;
        skillMaxLv = maxLv;
        v52 = v19;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                              (ServantSkillMaster_o *)this,
                              svtId,
                              (int)v13 + 1,
                              v19,
                              0);
        v51 = IconId;
        if ( EntityFromSkillId )
        {
          v35 = EntityFromSkillId;
          StrengthStatus = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, -1, 0);
          skillRecord = v35->fields.skillNum;
          v38 = StrengthStatus;
        }
        else
        {
          v38 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v4->fields.baseUserServantEntity;
        transformIndex = v4->fields.displayTransformIndex;
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1CE694C(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          callback,
          (Il2CppObject *)v4,
          Method_SkillCombineControl_OnClickInfo__,
          v42);
        if ( !v14 )
          goto LABEL_68;
        ServantSkillInfoIconComponent__SetSkillInfo(
          (ServantSkillInfoIconComponent_o *)v14,
          v13,
          v52,
          v26,
          skillMaxLv,
          Name,
          v51,
          v38,
          skillRecord,
          baseUserServantEntity,
          transformIndex,
          callback,
          0);
        this = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_68;
        m_CachedPtr = this->fields.m_CachedPtr;
        v44 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_68;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v14,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v46 + 32) = v14;
          sub_1CE66A4(v46 + 32, v14);
        }
      }
      v13 = v31;
    }
    while ( v31 != v48 );
  }
  SkillCombineControl__SetNeedItemInfo(v4, v4->fields.currentIdx, v12);
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

  if ( (byte_4DFE906 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4DFE906 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1CE6958(combineBtnBg, method);
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

  if ( (byte_4DFE8FE & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_9304/*"N0"*/);
    byte_4DFE8FE = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_66636500(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9304/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1CE6958(SelfUserGame, v4);
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
  const MethodInfo_38B4FD8 **v10; // x28
  int32_t v11; // w21
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v13; // x9
  int32_t v14; // w25
  ServantSkillInfoIconComponent_o *v15; // x22
  System_ValueTuple_object__object__o Item; // kr00_16
  __int64 v17; // x8
  System_ValueTuple_object__object__o v18; // kr10_16
  __int64 v19; // x8
  __int64 transformTotal; // x1
  int32_t displayTransformIndex; // w25
  struct SetLevelUpData_array *v22; // x0
  struct SetLevelUpData_array **p_lvUpDataList; // x21
  const MethodInfo *v24; // x2
  struct SetLevelUpData_array *lvUpDataList; // x8
  unsigned int v26; // w22
  __int64 v27; // x26
  const MethodInfo *v28; // x7
  struct SvtUseSkillData_array *skillDataList; // x8
  _QWORD *v30; // x9
  __int64 v31; // x8
  __int64 v32; // x10
  __int64 v33; // x9
  struct SetLevelUpData_array *v34; // x27
  int32_t v35; // w6
  __int64 v36; // x23
  System_Collections_Generic_List_T__o *switchSkillIdsList; // x22
  System_Predicate_T__o *v38; // x23
  System_Collections_Generic_List_T__o *All; // x25
  __int64 v40; // x0
  unsigned __int64 v41; // x23
  __int64 v42; // x29
  System_ValueTuple_object__object__o v43; // kr20_16
  __int64 v44; // x24
  struct SvtUseSkillData_array *v45; // x8
  __int64 v46; // x9
  SvtUseSkillData_o *v47; // x9
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *svtActualSkillIdList; // x9
  const MethodInfo_38B4FD8 **v50; // x22
  const MethodInfo_38B4FD8 *v51; // x2
  unsigned int *v52; // x28
  int32_t v53; // w21
  int32_t v54; // w26
  int32_t v55; // w27
  Il2CppObject *Item1; // x0
  const MethodInfo *v57; // x7
  __int64 v58; // x24
  struct SetLevelUpData_array *v59; // x8
  __int64 v60; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4DFE904 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_1CE6700(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_1CE6700(&SetLevelUpData___TypeInfo);
    sub_1CE6700(&Method_SkillCombineControl___c__DisplayClass49_0__SetNeedItemInfo_b__0__);
    sub_1CE6700(&SkillCombineControl___c__DisplayClass49_0_TypeInfo);
    byte_4DFE904 = 1;
  }
  transformInfo = 0;
  v5 = sub_1CE694C(SkillCombineControl___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_58;
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
            goto LABEL_85;
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
                  goto LABEL_85;
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
                      v10 = (const MethodInfo_38B4FD8 **)&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__;
                      v11 = 0;
                      while ( v11 < *(_DWORD *)(selectSkillInfo + 24) )
                      {
                        selectSkillInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)selectSkillInfo,
                                                     v11,
                                                     (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
                        useSkillIdList = this->fields.useSkillIdList;
                        if ( !useSkillIdList )
                          goto LABEL_58;
                        v13 = *(int *)(v5 + 16);
                        if ( (unsigned int)v13 >= LODWORD(useSkillIdList->max_length) )
                          goto LABEL_85;
                        v14 = useSkillIdList->m_Items[v13];
                        v15 = (ServantSkillInfoIconComponent_o *)selectSkillInfo;
                        if ( this->fields.switchIdxType == 2 )
                        {
                          selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
                          if ( !selectSkillInfo )
                            goto LABEL_58;
                          Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                                   (System_Collections_Generic_List_T__o *)selectSkillInfo,
                                   this->fields.switchIdx,
                                   (const MethodInfo_38B4FD8 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
                          Item2 = Item.fields.Item2;
                          selectSkillInfo = (__int64)Item.fields.Item1;
                          if ( !Item.fields.Item2 )
                            goto LABEL_58;
                          v17 = *(int *)(v5 + 16);
                          if ( (unsigned int)v17 >= LODWORD(Item.fields.Item2[1].monitor) )
                            goto LABEL_85;
                          if ( *((int *)&Item.fields.Item2[2].klass + v17) >= 1 )
                          {
                            selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
                            if ( !selectSkillInfo )
                              goto LABEL_58;
                            v18 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                                    (System_Collections_Generic_List_T__o *)selectSkillInfo,
                                    this->fields.switchIdx,
                                    (const MethodInfo_38B4FD8 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
                            Item2 = v18.fields.Item2;
                            selectSkillInfo = (__int64)v18.fields.Item1;
                            if ( !v18.fields.Item2 )
                              goto LABEL_58;
                            v19 = *(int *)(v5 + 16);
                            if ( (unsigned int)v19 >= LODWORD(v18.fields.Item2[1].monitor) )
                              goto LABEL_85;
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
                      v22 = (struct SetLevelUpData_array *)sub_1CE67A8(SetLevelUpData___TypeInfo, transformTotal);
                      p_lvUpDataList = &this->fields.lvUpDataList;
                      this->fields.lvUpDataList = v22;
                      selectSkillInfo = sub_1CE66A4(&this->fields.lvUpDataList, v22);
                      lvUpDataList = this->fields.lvUpDataList;
                      if ( lvUpDataList )
                      {
                        v26 = 0;
                        v27 = 32;
                        while ( (signed int)v26 < SLODWORD(lvUpDataList->max_length) )
                        {
                          selectSkillInfo = (__int64)this->fields.baseUserServantEntity;
                          if ( !selectSkillInfo )
                            goto LABEL_58;
                          selectSkillInfo = UserServantEntity__GetTransformedServantInfo(
                                              (UserServantEntity_o *)selectSkillInfo,
                                              &transformInfo,
                                              v26,
                                              0);
                          skillDataList = this->fields.skillDataList;
                          if ( !skillDataList )
                            goto LABEL_58;
                          if ( v26 >= LODWORD(skillDataList->max_length) )
                            goto LABEL_85;
                          v30 = *(Il2CppClass **)((char *)&skillDataList->obj.klass + v27);
                          if ( !v30 )
                            goto LABEL_58;
                          v31 = v30[2];
                          if ( !v31 )
                            goto LABEL_58;
                          Item2 = (Il2CppObject *)*(int *)(v5 + 16);
                          if ( (unsigned int)Item2 >= *(_DWORD *)(v31 + 24) )
                            goto LABEL_85;
                          v32 = v30[3];
                          if ( !v32 )
                            goto LABEL_58;
                          if ( (unsigned int)Item2 >= *(_DWORD *)(v32 + 24) )
                            goto LABEL_85;
                          v33 = v30[5];
                          if ( !v33 )
                            goto LABEL_58;
                          if ( (unsigned int)Item2 >= *(_DWORD *)(v33 + 24) )
                            goto LABEL_85;
                          if ( !transformInfo )
                            goto LABEL_58;
                          v34 = *p_lvUpDataList;
                          v35 = this->fields._IsSaveTransformServant_k__BackingField ? v26 : -1;
                          selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                                       this,
                                                       (int32_t)Item2,
                                                       *(_DWORD *)(v31 + 4LL * (_QWORD)Item2 + 32),
                                                       *(_DWORD *)(v32 + 4LL * (_QWORD)Item2 + 32),
                                                       transformInfo->fields.titleText,
                                                       *(_DWORD *)(v33 + 4LL * (_QWORD)Item2 + 32),
                                                       v35,
                                                       v28);
                          if ( !v34 )
                            goto LABEL_58;
                          v36 = selectSkillInfo;
                          if ( selectSkillInfo )
                          {
                            selectSkillInfo = sub_1CE683C(selectSkillInfo, v34->obj.klass->_1.element_class);
                            if ( !selectSkillInfo )
                            {
LABEL_86:
                              v60 = sub_1CE697C();
                              sub_1CE6828(v60, 0);
                            }
                          }
                          if ( v26 >= LODWORD(v34->max_length) )
                            goto LABEL_85;
                          *(Il2CppClass **)((char *)&v34->obj.klass + v27) = (Il2CppClass *)v36;
                          selectSkillInfo = sub_1CE66A4((char *)v34 + v27, v36);
                          lvUpDataList = *p_lvUpDataList;
                          ++v26;
                          v27 += 8;
                          if ( !*p_lvUpDataList )
                            goto LABEL_58;
                        }
                        if ( this->fields.switchIdxType == 2 )
                        {
                          switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
                          v38 = (System_Predicate_T__o *)sub_1CE694C(System_Predicate_ValueTuple_string__int_____TypeInfo);
                          System_Predicate_ValueTuple_object__object_____ctor(
                            v38,
                            (Il2CppObject *)v5,
                            Method_SkillCombineControl___c__DisplayClass49_0__SetNeedItemInfo_b__0__,
                            0);
                          if ( !switchSkillIdsList )
                            goto LABEL_58;
                          All = System_Collections_Generic_List_ValueTuple_object__object____FindAll(
                                  switchSkillIdsList,
                                  v38,
                                  (const MethodInfo_38B5A3C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
                          selectSkillInfo = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)All, 0);
                          if ( (selectSkillInfo & 1) == 0 )
                          {
                            if ( !All )
                              goto LABEL_58;
                            v40 = sub_1CE67A8(SetLevelUpData___TypeInfo, (unsigned int)All->fields._size);
                            *p_lvUpDataList = (struct SetLevelUpData_array *)v40;
                            selectSkillInfo = sub_1CE66A4(&this->fields.lvUpDataList, v40);
                            if ( All->fields._size >= 1 )
                            {
                              v41 = 0;
                              v42 = 8;
                              do
                              {
                                v43 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                                        All,
                                        v41,
                                        *v10);
                                Item2 = v43.fields.Item2;
                                selectSkillInfo = (__int64)v43.fields.Item1;
                                if ( !v43.fields.Item2 )
                                  goto LABEL_58;
                                v44 = *(int *)(v5 + 16);
                                if ( (unsigned int)v44 >= LODWORD(v43.fields.Item2[1].monitor) )
                                  goto LABEL_85;
                                v45 = this->fields.skillDataList;
                                if ( !v45 )
                                  goto LABEL_58;
                                v46 = this->fields.displayTransformIndex;
                                if ( (unsigned int)v46 >= LODWORD(v45->max_length) )
                                  goto LABEL_85;
                                v47 = v45->m_Items[v46];
                                if ( !v47 )
                                  goto LABEL_58;
                                svtSkillLvList = v47->fields.svtSkillLvList;
                                if ( !svtSkillLvList )
                                  goto LABEL_58;
                                if ( (unsigned int)v44 >= LODWORD(svtSkillLvList->max_length) )
                                  goto LABEL_85;
                                svtActualSkillIdList = v47->fields.svtActualSkillIdList;
                                if ( !svtActualSkillIdList )
                                  goto LABEL_58;
                                if ( (unsigned int)v44 >= LODWORD(svtActualSkillIdList->max_length) )
                                  goto LABEL_85;
                                v50 = v10;
                                v51 = *v10;
                                v52 = (unsigned int *)this->fields.lvUpDataList;
                                v53 = *((_DWORD *)&v43.fields.Item2[2].klass + v44);
                                v54 = svtSkillLvList->m_Items[v44];
                                v55 = svtActualSkillIdList->m_Items[v44];
                                Item1 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                                          All,
                                          v41,
                                          v51).fields.Item1;
                                selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                                             this,
                                                             v44,
                                                             v53,
                                                             v54,
                                                             (System_String_o *)Item1,
                                                             v55,
                                                             -1,
                                                             v57);
                                if ( !v52 )
                                  goto LABEL_58;
                                v58 = selectSkillInfo;
                                if ( selectSkillInfo )
                                {
                                  selectSkillInfo = sub_1CE683C(selectSkillInfo, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
                                  if ( !selectSkillInfo )
                                    goto LABEL_86;
                                }
                                if ( v41 >= v52[6] )
                                  goto LABEL_85;
                                *(_QWORD *)&v52[v42] = v58;
                                selectSkillInfo = sub_1CE66A4(&v52[v42], v58);
                                ++v41;
                                v42 += 2;
                                v10 = v50;
                              }
                              while ( (__int64)v41 < All->fields._size );
                              p_lvUpDataList = &this->fields.lvUpDataList;
                            }
                          }
                          displayTransformIndex = 0;
                        }
                        v59 = *p_lvUpDataList;
                        if ( *p_lvUpDataList )
                        {
                          if ( (unsigned int)displayTransformIndex < LODWORD(v59->max_length) )
                          {
                            SkillCombineControl__SetSvtSkillCombineData(this, v59->m_Items[displayTransformIndex], v24);
                            goto LABEL_84;
                          }
LABEL_85:
                          sub_1CE6960(selectSkillInfo);
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
LABEL_58:
    sub_1CE6958(selectSkillInfo, Item2);
  }
LABEL_84:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillCombineControl__SetStateInfoMsg(SkillCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4DFE908 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_7509/*"INFO_MSG_SKILLUP"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4DFE908 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_12;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7509/*"INFO_MSG_SKILLUP"*/, 0);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_12:
    sub_1CE6958(detailInfoLb, *(_QWORD *)&state);
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

  if ( (byte_4DFE905 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_5830/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1CE6700(&StringLiteral_17865/*"buttontxt_synthesis"*/);
    sub_1CE6700(&StringLiteral_9304/*"N0"*/);
    sub_1CE6700(&StringLiteral_12311/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1CE6700(&StringLiteral_12312/*"SHORT_QP_INFO_MSG"*/);
    sub_1CE6700(&StringLiteral_17862/*"buttontxt_notsynthesis"*/);
    sub_1CE6700(&StringLiteral_1117/*"0"*/);
    byte_4DFE905 = 1;
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
                                                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                                                (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                                (System_String_o *)StringLiteral_5830/*"EXE_SUMMON_COMBINE_TXT"*/,
                                                                0);
  if ( !setLvUpData )
    goto LABEL_8;
  if ( setLvUpData->fields.currentLv < setLvUpData->fields.maxLv )
  {
    v8 = itemInfoList;
    itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
    if ( itemInfoList )
    {
      UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17865/*"buttontxt_synthesis"*/, 0);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
      if ( itemInfoList )
      {
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))itemInfoList->klass->vtable._33_get_Item.methodPtr)(
          itemInfoList,
          itemInfoList->klass->vtable._33_get_Item.method);
        qpLb = this->fields.qpLb;
        this->fields.spendQpVal = setLvUpData->fields.spendQp;
        itemInfoList = (System_Collections_Generic_List_object__o *)System_Int32__ToString_66631324(
                                                                      (int)this + 392,
                                                                      (System_String_o *)StringLiteral_9304/*"N0"*/,
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
                                                                              (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                  sub_1CE6960(itemInfoList);
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
                                                                              (System_String_o *)StringLiteral_12312/*"SHORT_QP_INFO_MSG"*/,
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
                v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12311/*"SHORT_ITEM_INFO_MSG"*/, 0);
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
    sub_1CE6958(itemInfoList, setLvUpData);
  }
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, (const MethodInfo *)setLvUpData);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  UILabel__set_text((UILabel_o *)itemInfoList, (System_String_o *)StringLiteral_1117/*"0"*/, 0);
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
  UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17862/*"buttontxt_notsynthesis"*/, 0);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))itemInfoList->klass->vtable._33_get_Item.methodPtr)(
    itemInfoList,
    itemInfoList->klass->vtable._33_get_Item.method);
}


// local variable allocation has failed, the output may be wrong!
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
  float b; // s2
  float a; // s3
  float r; // s0 OVERLAPPED
  float g; // s1
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v16; // x9
  float *v17; // x10
  float *v18; // x11
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4DFE901 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    byte_4DFE901 = 1;
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
               (const MethodInfo_38B4FD8 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
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
      v16 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
      v17 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
      v18 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
      if ( !switchSkillIdsList )
        goto LABEL_25;
    }
    else
    {
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
      v16 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
      v17 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
      v18 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
      if ( !switchSkillIdsList )
        goto LABEL_25;
    }
    a = *v18;
    b = *v17;
    g = *v16;
    r = p_CondTitleSpriteColor_k__BackingField->fields.r;
    goto LABEL_22;
  }
  if ( !switchSkillIdsList
    || (UIWidget__set_color((UIWidget_o *)switchSkillIdsList, this->fields._CondTitleLabelColor_k__BackingField, 0),
        (switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.condTitleSprite) == 0) )
  {
LABEL_25:
    sub_1CE6958(switchSkillIdsList, method);
  }
  b = this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
  a = this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
  r = this->fields._CondTitleSpriteColor_k__BackingField.fields.r;
  g = this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
LABEL_22:
  UIWidget__set_color((UIWidget_o *)switchSkillIdsList, *(UnityEngine_Color_o *)&r, 0);
}


bool SkillCombineControl__TrySetSwitchSkillIdsList(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v2; // x21
  System_Collections_ICollection_o **p_switchSkillIdsList; // x20
  System_ValueTuple_object__object__o v4; // x1 OVERLAPPED
  UserServantEntity_o *baseUserServantEntity; // x0
  struct SvtUseSkillData_array *skillDataList; // x8
  SkillCombineControl_o *v7; // x19
  __int64 displayTransformIndex; // x9
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
  System_ValueTuple_object__object__o v29; // kr00_16
  BalanceConfig_c *v30; // x0
  Il2CppObject *klass; // x23
  Il2CppObject *v32; // x2
  const MethodInfo_3C87808 *v33; // x4
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

  if ( (byte_4DFE902 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_1CE6700(&Method_SkillCombineControl___c__DisplayClass46_0__TrySetSwitchSkillIdsList_b__0__);
    sub_1CE6700(&SkillCombineControl___c__DisplayClass46_0_TypeInfo);
    sub_1CE6700(&Method_System_ValueTuple_string__int_____ctor__);
    byte_4DFE902 = 1;
  }
  v47.fields.Item2 = 0;
  transformInfo = 0;
  v47.fields.Item1 = 0;
  v2 = (System_Collections_Generic_List_T__o *)sub_1CE694C(System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v2,
    (const MethodInfo_38B4A74 *)Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
  p_switchSkillIdsList = (System_Collections_ICollection_o **)&this->fields.switchSkillIdsList;
  this->fields.switchSkillIdsList = (struct System_Collections_Generic_List_ValueTuple_string__int_____o *)v2;
  sub_1CE66A4(&this->fields.switchSkillIdsList, v2);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_52;
  UserServantEntity__GetTransformedServantInfo(
    baseUserServantEntity,
    &transformInfo,
    this->fields.displayTransformIndex,
    0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  skillDataList = this->fields.skillDataList;
  v7 = this;
  v45 = (ServantSkillAddMaster_o *)baseUserServantEntity;
  if ( this->fields._TransformIsNotSkillChange_k__BackingField && !this->fields._IsSaveTransformServant_k__BackingField )
  {
    displayTransformIndex = 0;
    if ( !skillDataList )
      goto LABEL_52;
  }
  else
  {
    displayTransformIndex = this->fields.displayTransformIndex;
    if ( !skillDataList )
      goto LABEL_52;
  }
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_54:
    sub_1CE6960(baseUserServantEntity);
  v9 = skillDataList->m_Items[displayTransformIndex];
  if ( !v9 || (svtUseSkillIdList = v9->fields.svtUseSkillIdList) == 0 )
LABEL_52:
    sub_1CE6958(baseUserServantEntity, v4.fields.Item1);
  v11 = &BalanceConfig_TypeInfo;
  v12 = 0;
  v44 = v9;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    if ( (__int64)v12 >= (int)max_length_low )
      return !BasicHelper__IsNullOrEmpty(*p_switchSkillIdsList, 0);
    if ( v12 >= max_length_low )
      goto LABEL_54;
    if ( !transformInfo )
      goto LABEL_52;
    v14 = v7->fields.baseUserServantEntity;
    if ( !v14 )
      goto LABEL_52;
    v15 = v11;
    svtId = transformInfo->fields.svtId;
    v17 = svtUseSkillIdList->m_Items[v12];
    v19 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
    v18 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v19;
    *(_QWORD *)&v49.fields.fakeValue = v18;
    baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                     v49,
                                                     0);
    if ( !transformInfo )
      goto LABEL_52;
    v20 = (int)baseUserServantEntity;
    baseUserServantEntity = (UserServantEntity_o *)v45;
    if ( !v45 )
      goto LABEL_52;
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
        goto LABEL_52;
      v23 = 0;
      while ( (__int64)v23 < currentCryptoKey[6] )
      {
        v24 = (Il2CppObject *)sub_1CE694C(SkillCombineControl___c__DisplayClass46_0_TypeInfo);
        System_Object___ctor(v24, 0);
        titles = v22->fields.titles;
        if ( !titles )
          goto LABEL_52;
        if ( v23 >= LODWORD(titles->max_length) )
          goto LABEL_54;
        if ( !v24 )
          goto LABEL_52;
        v26 = (Il2CppClass *)titles->m_Items[v23];
        v24[1].klass = v26;
        sub_1CE66A4(&v24[1], v26);
        v27 = *p_switchSkillIdsList;
        v28 = (System_Predicate_T__o *)sub_1CE694C(System_Predicate_ValueTuple_string__int_____TypeInfo);
        System_Predicate_ValueTuple_object__object_____ctor(
          v28,
          v24,
          Method_SkillCombineControl___c__DisplayClass46_0__TrySetSwitchSkillIdsList_b__0__,
          0);
        if ( !v27 )
          goto LABEL_52;
        v29 = System_Collections_Generic_List_ValueTuple_object__object____Find(
                (System_Collections_Generic_List_T__o *)v27,
                v28,
                (const MethodInfo_38B5980 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
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
          v32 = (Il2CppObject *)sub_1CE67A8(int___TypeInfo, (unsigned int)v30->static_fields->SvtSkillListMax);
          v50.fields.Item1 = (Il2CppObject *)&v47;
          v50.fields.Item2 = klass;
          System_ValueTuple_object__object____ctor(
            v50,
            v32,
            (Il2CppObject *)Method_System_ValueTuple_string__int_____ctor__,
            v33);
          baseUserServantEntity = (UserServantEntity_o *)*p_switchSkillIdsList;
          if ( !*p_switchSkillIdsList )
            goto LABEL_52;
          v4 = v47;
          v34 = (System_Collections_ICollection_c *)baseUserServantEntity->fields.id.fields.currentCryptoKey;
          v35 = Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__;
          ++HIDWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( !v34 )
            goto LABEL_52;
          hiddenValue_low = SLODWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v34->_1.namespaze) )
          {
            System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
              (System_Collections_Generic_List_T__o *)baseUserServantEntity,
              v4,
              *(const MethodInfo_38B52F4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = (System_ValueTuple_object__object__o *)((char *)v34 + 16 * hiddenValue_low);
            LODWORD(baseUserServantEntity->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
            v37[2] = v4;
            baseUserServantEntity = (UserServantEntity_o *)sub_1CE66A4(&v37[2], 0);
          }
        }
        skillIds = v22->fields.skillIds;
        if ( skillIds )
        {
          if ( v23 >= LODWORD(skillIds->max_length) )
            goto LABEL_54;
          LODWORD(skillIds) = v22->fields.skillIds->m_Items[v23];
        }
        if ( v47.fields.Item2 )
        {
          if ( v12 >= LODWORD(v47.fields.Item2[1].monitor) )
            goto LABEL_54;
          *((_DWORD *)&v47.fields.Item2[2].klass + v12) = (_DWORD)skillIds;
          currentCryptoKey = (int *)v22->fields.titles;
          ++v23;
          if ( currentCryptoKey )
            continue;
        }
        goto LABEL_52;
      }
      v7 = this;
      condTitleLabel = (UIWidget_o *)this->fields.condTitleLabel;
      CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v22, 0);
      DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
      v52 = ColorHelper__ParseColorCode_45269000(CondLabelColor, DefaultCondTitleLabelColor, 0);
      if ( !condTitleLabel )
        goto LABEL_52;
      UIWidget__set_color(condTitleLabel, v52, 0);
      condTitleSprite = (UIWidget_o *)this->fields.condTitleSprite;
      CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v22, 0);
      DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
      v54 = ColorHelper__ParseColorCode_45269000(CondSpriteColor, DefaultCondTitleSpriteColor, 0);
      if ( !condTitleSprite )
        goto LABEL_52;
      v11 = v15;
      UIWidget__set_color(condTitleSprite, v54, 0);
    }
    else
    {
      v7 = this;
    }
    ++v12;
    svtUseSkillIdList = v44->fields.svtUseSkillIdList;
    if ( !svtUseSkillIdList )
      goto LABEL_52;
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
    sub_1CE6958(this, x.fields.Item1);
  idx = this->fields.idx;
  if ( (unsigned int)idx >= LODWORD(x.fields.Item2->max_length) )
    sub_1CE6960(this);
  return x.fields.Item2->m_Items[idx] > 0;
}