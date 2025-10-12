void SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C31AAF & 1) == 0 )
  {
    sub_1C32C20(&CombineMenuControl_TypeInfo);
    byte_4C31AAF = 1;
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

  if ( (byte_4C31AAA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (SkillCombineControl_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31AAA = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))resData->klass->vtable._6_getSkillLevelList.methodPtr)(
                                          resData,
                                          resData->klass->vtable._6_getSkillLevelList.method),
        !SkillIdList) )
  {
LABEL_17:
    sub_1C32E7C(this);
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
        sub_1C32E84(this);
      v10 = SkillIdList->m_Items[v8];
      if ( v10 >= 1 )
      {
        v11 = *((_DWORD *)p_combineRootComponent + v8);
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10,
                                          (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  SkillEntity_o *v14; // x21
  const MethodInfo *v15; // x2
  CombineSkillEntity_o *CombineSkillEntity; // x25
  SetLevelUpData_o *v17; // x20
  __int64 v18; // x1
  System_String_o *Name; // x0
  System_String_o **p_targetName; // x22
  const MethodInfo *v21; // x1
  int32_t qp; // w1
  System_Nullable_int__o v23; // x0
  float v24; // s0
  System_Nullable_float__o v25; // x0
  float v26; // x26^4
  int v27; // w27
  const MethodInfo *v28; // x1
  float CombineCampaignQpRate; // s0
  System_Nullable_float__o v30; // x0
  float v31; // w8
  int v32; // w8
  __int64 itemIds; // x1
  __int64 itemNums; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantLimitImageMaster_o *v36; // x23
  __int64 v37; // x24
  __int64 v38; // x25
  int32_t v39; // w24
  int32_t ServantImageLimitSealAfter; // w24
  struct UserServantEntity_o *v41; // x8
  ServantLimitAddMaster_o *v42; // x23
  struct UserServantEntity_o *v43; // x8
  int32_t v44; // w19
  int32_t v45; // w25
  System_String_o *OverwriteSkillName; // x0
  __int64 v48; // [xsp+0h] [xbp-60h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C31AAC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_System_Nullable_float___ctor__);
    sub_1C32C20(&Method_System_Nullable_float__get_HasValue__);
    sub_1C32C20(&Method_System_Nullable_int__get_HasValue__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&SetLevelUpData_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31AAC = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_40;
  v14 = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           skillId,
                           (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  CombineSkillEntity = SkillCombineControl__GetCombineSkillEntity(this, skillLv, v15);
  v17 = (SetLevelUpData_o *)sub_1C32E6C(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0);
  if ( !v17 )
    goto LABEL_40;
  v17->fields.currentId = skillId;
  v17->fields.actualId = actualSkillId;
  v17->fields.currentIndex = idx + 1;
  v17->fields.realIndex = idx;
  v18 = StringLiteral_1/*""*/;
  v17->fields.targetRuby = (struct System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)sub_1C32BC4(&v17->fields.targetRuby, v18);
  if ( !v14 )
    goto LABEL_40;
  Name = SkillEntity__getName(v14, 0);
  v17->fields.targetName = Name;
  p_targetName = &v17->fields.targetName;
  sub_1C32BC4(&v17->fields.targetName, Name);
  v17->fields.currentLv = skillLv;
  v17->fields.nextLv = skillLv + 1;
  v17->fields.maxLv = v14->fields.maxLv;
  if ( CombineSkillEntity
    && (qp = CombineSkillEntity->fields.qp,
        v23 = (System_Nullable_int__o)&v48,
        v48 = 0,
        System_Nullable_int____ctor(v23, qp, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__),
        (_BYTE)v48) )
  {
    v24 = (float)SHIDWORD(v48);
    v25 = (System_Nullable_float__o)&v48;
    v48 = 0;
    System_Nullable_float____ctor(v25, v24, (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
    v26 = *((float *)&v48 + 1);
    v27 = (unsigned __int8)v48;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(this, v28);
    if ( v27 )
    {
      v30 = (System_Nullable_float__o)&v48;
      v48 = 0;
      System_Nullable_float____ctor(
        v30,
        CombineCampaignQpRate * v26,
        (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
      v31 = *((float *)&v48 + 1);
      goto LABEL_13;
    }
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(this, v21);
  }
  v31 = 0.0;
LABEL_13:
  if ( v31 == INFINITY )
    v32 = 0x80000000;
  else
    v32 = (int)v31;
  v17->fields.spendQp = v32;
  v17->fields.haveQp = this->fields.userQP;
  if ( !CombineSkillEntity || (itemIds = (__int64)CombineSkillEntity->fields.itemIds) == 0 )
    itemIds = sub_1C32CC8(int___TypeInfo, 0);
  v17->fields.combineItemIds = (struct System_Int32_array *)itemIds;
  sub_1C32BC4(&v17->fields.combineItemIds, itemIds);
  if ( !CombineSkillEntity || (itemNums = (__int64)CombineSkillEntity->fields.itemNums) == 0 )
    itemNums = sub_1C32CC8(int___TypeInfo, 0);
  v17->fields.combineItemNums = (struct System_Int32_array *)itemNums;
  sub_1C32BC4(&v17->fields.combineItemNums, itemNums);
  v17->fields.displayText = titleText;
  sub_1C32BC4(&v17->fields.displayText, titleText);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_40;
  v36 = (ServantLimitImageMaster_o *)Instance;
  v38 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v38;
  *(_QWORD *)&v50.fields.fakeValue = v37;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v50, 0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_40;
  v39 = (int)Instance;
  Instance = (DataManager_o *)UserServantEntity__getDispLimitCount(this->fields.baseUserServantEntity, 0, 0);
  if ( !v36 )
    goto LABEL_40;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v36, v39, (int32_t)Instance, 0);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v41 = this->fields.baseUserServantEntity;
  if ( !v41 )
    goto LABEL_40;
  v42 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v41->fields.svtId, 0);
  v43 = this->fields.baseUserServantEntity;
  if ( !v43 )
    goto LABEL_40;
  v44 = (int)Instance;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v43->fields.limitCount, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, v45, 0);
  if ( !v42 )
    goto LABEL_40;
  if ( ServantLimitAddMaster__TryGetEntity(v42, &entity, v44, (int32_t)Instance, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_40;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        OverwriteSkillName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v14->fields.id, *p_targetName, 0);
        *p_targetName = OverwriteSkillName;
        sub_1C32BC4(&v17->fields.targetName, OverwriteSkillName);
        return v17;
      }
LABEL_40:
      sub_1C32E7C(Instance);
    }
  }
  return v17;
}


float SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *combineEventList; // x0
  float v4; // s8
  _BOOL8 v5; // x0
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C31AAE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    byte_4C31AAE = 1;
  }
  memset(&v7, 0, sizeof(v7));
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  v4 = 1.0;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      combineEventList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v7,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v5 )
        break;
      if ( !v7.fields._current )
        sub_1C32E7C(v5);
      if ( *(_DWORD *)((char *)&v7.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v4 = *(float *)((char *)&v7.fields._current->klass + (unsigned __int64)&word_38);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  return v4;
}


CombineSkillEntity_o *SkillCombineControl__GetCombineSkillEntity(
        SkillCombineControl_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  Il2CppObject *v10; // x20
  CombineSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4C31AAD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CombineSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C31AAD = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_12;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v13, 0);
  if ( !v7
    || (v10 = DataMasterBase_object__object__int___GetEntity(
                v7,
                (int32_t)Master_object,
                (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v10)
    || !Master_object )
  {
LABEL_12:
    sub_1C32E7C(Master_object);
  }
  CombineSkillMaster__TryGetEntity((CombineSkillMaster_o *)Master_object, &entity, (int32_t)v10[7].klass, skillLv, 0);
  return entity;
}


SvtUseSkillData_o *SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  SvtUseSkillData_o *v5; // x19
  UserServantEntity_o *baseUserServantEntity; // x0
  bool v7; // w6
  System_Int32_array *svtUseSkillIdList; // x1
  __int64 v9; // x0

  if ( (byte_4C31AA1 & 1) == 0 )
  {
    sub_1C32C20(&SvtUseSkillData_TypeInfo);
    byte_4C31AA1 = 1;
  }
  v5 = (SvtUseSkillData_o *)sub_1C32E6C(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor(v5, 0);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  v7 = this->fields.transformTotal > 1 || this->fields.ignoreRandomSettings;
  if ( !baseUserServantEntity )
    goto LABEL_14;
  baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedSkillIdList(
                                                   baseUserServantEntity,
                                                   transformIndex,
                                                   -1,
                                                   -1,
                                                   1,
                                                   -1,
                                                   v7,
                                                   0);
  if ( !v5 )
    goto LABEL_14;
  v5->fields.svtUseSkillIdList = (struct System_Int32_array *)baseUserServantEntity;
  sub_1C32BC4(&v5->fields, baseUserServantEntity);
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
  sub_1C32BC4(&v5->fields.svtActualSkillIdList, svtUseSkillIdList);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
LABEL_14:
    sub_1C32E7C(baseUserServantEntity);
  v9 = ((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.methodPtr)(
         baseUserServantEntity,
         baseUserServantEntity->klass->vtable._6_getSkillLevelList.method);
  v5->fields.svtSkillLvList = (struct System_Int32_array *)v9;
  sub_1C32BC4(&v5->fields.svtSkillLvList, v9);
  return v5;
}


SetLevelUpData_o *SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  struct SetLevelUpData_array *lvUpDataList; // x8

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_1C32E7C(this);
  if ( !LODWORD(lvUpDataList->max_length) )
    sub_1C32E84(this);
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
  const MethodInfo *v5; // x1
  struct UILabel_array *selectSkillHelpLabels; // x22
  int max_length; // w8
  unsigned int v8; // w23
  UILabel_o *v9; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v12; // x1
  int v13; // w21
  int32_t v14; // w20
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C31A9D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8805/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_1C32C20(&StringLiteral_8808/*"MSG_SKILL_SELECT"*/);
    sub_1C32C20(&StringLiteral_9237/*"NEED_QP_INFO"*/);
    byte_4C31A9D = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8805/*"MSG_PRESELECT_BASE_SVT"*/, 0);
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
  SkillCombineControl__SetHaveQpInfo(this, v5);
  selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
  if ( !selectSkillHelpLabels )
    goto LABEL_29;
  max_length = selectSkillHelpLabels->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C32E84(gameObject);
      v9 = selectSkillHelpLabels->m_Items[v8];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8808/*"MSG_SKILL_SELECT"*/, 0);
      if ( !v9 )
        break;
      UILabel__set_text(v9, (System_String_o *)gameObject, 0);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_18;
    }
LABEL_29:
    sub_1C32E7C(gameObject);
  }
LABEL_18:
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9237/*"NEED_QP_INFO"*/, 0);
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
  v15.fields.r = 1.0;
  v15.fields.g = 1.0;
  v15.fields.b = 1.0;
  v15.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v15, 0);
  SkillCombineControl__ResetDispSkillInfo(this, v12);
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_29;
  v13 = *((_DWORD *)gameObject + 6);
  if ( v13 >= 1 )
  {
    v14 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v14,
                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0);
      if ( v13 == ++v14 )
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
  void *helpBtn; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v12; // x0
  _BOOL8 v13; // x0
  MenuListControl_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C31A9C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17668/*"buttontxt_synthesis"*/);
    byte_4C31A9C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0);
  SkillCombineControl__InitDispCombineInfo(this, v6);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v7);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17668/*"buttontxt_synthesis"*/, 0);
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
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_1C32BC4(&this->fields.charaGraph, 0);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0),
        (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_30:
    sub_1C32E7C(helpBtn);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1C32BC4(&this->fields.combineEventList, combineEventList);
  v12 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v12 && v12->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      v12,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v13 )
        break;
      if ( !v15.fields._current )
        sub_1C32E7C(v13);
      if ( *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&dword_14) == 8 )
      {
        v14 = this->fields.menuListCtr;
        if ( !v14 )
          sub_1C32E7C(0);
        MenuListControl__setBannerIcon(
          v14,
          this->fields.eventNoticeImg,
          *(EventEntity_o **)((char *)&v15.fields._current->klass + (unsigned __int64)off_50),
          0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4C31AA8 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3772/*"CONFIRM_TITLE_SKILL_COMBINE"*/);
    byte_4C31AA8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3772/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C32E7C(v3);
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
  if ( (byte_4C31AAB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SkillCombineControl_o *)sub_1C32C20(&Method_SkillCombineControl_OnClickSwitchSkill__);
    byte_4C31AAB = 1;
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
    sub_1C32E7C(this);
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v16, 0);
  SkillCombineControl__SetCombineSkillList(v2, v11, v10, v12);
  if ( v2->fields.switchIdxType )
    SkillCombineControl__SetTitleText(v2, v13);
  v14 = Method_SkillCombineControl_OnClickSwitchSkill__;
  if ( (*((_BYTE *)Method_SkillCombineControl_OnClickSwitchSkill__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C32C38(Method_SkillCombineControl_OnClickSwitchSkill__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C32C04(v14, v14[4]);
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

  if ( (byte_4C31A9E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    byte_4C31A9E = 1;
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
                                                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !skillInfoList )
        break;
      v7 = (UnityEngine_Component_o *)skillInfoList;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)skillInfoList, 0);
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)v6 * 230.0, 0);
      v9 = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalPositionY(v9, 0.0, 0);
      v10 = UnityEngine_Component__get_gameObject(v7, 0);
      GameObjectExtensions__SetLocalScale_36038768(v10, 1.0, 0);
      if ( v5 == v6 )
        goto LABEL_10;
      skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
      ++v6;
    }
    while ( skillInfoList );
LABEL_13:
    sub_1C32E7C(skillInfoList);
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
  struct UICharaGraphTexture_o *v5; // x1

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(SkillCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1C32BC4(p_charaGraph, v5);
}


void SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t v8; // x0
  UnityEngine_Component_o *preSelectBaseLb; // x0
  int32_t TransformCount; // w0
  int32_t *p_switchIdxType; // x23
  struct SvtUseSkillData_array *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  unsigned __int64 v15; // x21
  __int64 v16; // x24
  unsigned int *skillDataList; // x25
  UnityEngine_Component_o *v18; // x22
  signed __int64 transformTotal; // x8
  int v20; // w8
  const MethodInfo *v21; // x1
  __int64 v22; // x20
  __int64 v23; // x21
  int32_t v24; // w0
  UnityEngine_GameObject_o *v25; // x1
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4C31AA0 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&SvtUseSkillData___TypeInfo);
    byte_4C31AA0 = 1;
  }
  if ( usrSvtEn )
  {
    v7 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v28 = v29;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v28, 0);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v8;
    sub_1C32BC4(&this->fields.baseUserServantEntity, usrSvtEn);
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
    v12 = (struct SvtUseSkillData_array *)sub_1C32CC8(
                                            SvtUseSkillData___TypeInfo,
                                            (unsigned int)this->fields.transformTotal);
    this->fields.skillDataList = v12;
    sub_1C32BC4(&this->fields.skillDataList, v12);
    if ( this->fields.transformTotal < 1 )
      goto LABEL_17;
    v15 = 0;
    v16 = 8;
    do
    {
      skillDataList = (unsigned int *)this->fields.skillDataList;
      preSelectBaseLb = (UnityEngine_Component_o *)SkillCombineControl__GetSvtSkillData(this, v15, v14);
      if ( !skillDataList )
        goto LABEL_31;
      v18 = preSelectBaseLb;
      if ( preSelectBaseLb )
      {
        preSelectBaseLb = (UnityEngine_Component_o *)sub_1C32D5C(
                                                       preSelectBaseLb,
                                                       *(_QWORD *)(*(_QWORD *)skillDataList + 64LL));
        if ( !preSelectBaseLb )
        {
          v27 = sub_1C32EA0();
          sub_1C32D48(v27, 0);
        }
      }
      if ( v15 >= skillDataList[6] )
        sub_1C32E84(preSelectBaseLb);
      *(_QWORD *)&skillDataList[v16] = v18;
      sub_1C32BC4(&skillDataList[v16], v18);
      transformTotal = this->fields.transformTotal;
      ++v15;
      v16 += 2;
    }
    while ( (__int64)v15 < transformTotal );
    if ( (int)transformTotal > 1 )
    {
      v20 = 1;
    }
    else
    {
LABEL_17:
      if ( !SkillCombineControl__TrySetSwitchSkillIdsList(this, v13) )
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
                SkillCombineControl__SetTitleText(this, v21);
              else
                SkillCombineControl__ResetDispSkillInfo(this, v21);
              v23 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
              v22 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v30.fields.currentCryptoKey = v23;
              *(_QWORD *)&v30.fields.fakeValue = v22;
              v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v30, 0);
              SkillCombineControl__SetCombineSkillList(this, v25, v24, v26);
              return;
            }
          }
        }
LABEL_31:
        sub_1C32E7C(preSelectBaseLb);
      }
      v20 = 2;
    }
    *p_switchIdxType = v20;
    goto LABEL_21;
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
  if ( (byte_4C31AA4 & 1) == 0 )
  {
    sub_1C32C20(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SkillCombineControl_OnClickInfo__);
    this = (SkillCombineControl_o *)sub_1C32C20(&StringLiteral_861/*"-"*/);
    byte_4C31AA4 = 1;
  }
  entity = 0;
  skillDataList = v5->fields.skillDataList;
  if ( !skillDataList )
    goto LABEL_64;
  displayTransformIndex = v5->fields.displayTransformIndex;
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_65:
    sub_1C32E84(this);
  v8 = skillDataList->m_Items[displayTransformIndex];
  if ( !v8 )
    goto LABEL_64;
  svtUseSkillIdList = v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v5->fields.useSkillIdList;
  v5->fields.useSkillIdList = svtUseSkillIdList;
  this = (SkillCombineControl_o *)sub_1C32BC4(&v5->fields.useSkillIdList, svtUseSkillIdList);
  useSkillIdList = v5->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_64;
  max_length = useSkillIdList->max_length;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v5->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v12;
  p_targetList = (SkillCombineControl_o **)&v5->fields.targetList;
  sub_1C32BC4(&v5->fields.targetList, v12);
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
                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
        GameObjectExtensions__SetLocalScale_36038768(v18, v5->fields.scaleOffset, 0);
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
                 (const MethodInfo_374782C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
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
                  (const MethodInfo_374782C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
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
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        v28 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v20,
                (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        skillLv = v27;
        if ( v28 )
        {
          v29 = (SkillEntity_o *)v28;
          IconId = SkillEntity__GetIconId((SkillEntity_o *)v28, 0);
          defaultName = SkillEntity__getName(v29, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (SkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
          this = (SkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v59, 0);
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
          defaultName = (System_String_o *)StringLiteral_861/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
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
          StrengthStatus = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0);
          skillRecord = v41->fields.skillNum;
          v44 = StrengthStatus;
        }
        else
        {
          v44 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v5->fields.baseUserServantEntity;
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1C32E6C(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
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
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v51 + 32) = v15;
          sub_1C32BC4(v51 + 32, v15);
        }
      }
      v14 = v39;
      if ( v39 == v54 )
        goto LABEL_63;
    }
LABEL_64:
    sub_1C32E7C(this);
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

  if ( (byte_4C31AA7 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C31AA7 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C32E7C(combineBtnBg);
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
  UILabel_o *haveQpLb; // x20

  if ( (byte_4C31A9F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C31A9F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65033828(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9231/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C32E7C(SelfUserGame);
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
  struct UILabel_array *selectSkillHelpLabels; // x8
  struct UILabel_array *v8; // x8
  const MethodInfo_374782C **v9; // x28
  int32_t v10; // w21
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v12; // x9
  int32_t v13; // w25
  ServantSkillInfoIconComponent_o *v14; // x22
  System_ValueTuple_object__object__o Item; // kr00_16
  __int64 v16; // x8
  System_ValueTuple_object__object__o v17; // kr10_16
  __int64 v18; // x8
  int32_t displayTransformIndex; // w25
  struct SetLevelUpData_array *v20; // x0
  struct SetLevelUpData_array **p_lvUpDataList; // x21
  const MethodInfo *v22; // x2
  unsigned int v23; // w22
  __int64 v24; // x26
  const MethodInfo *v25; // x6
  struct SvtUseSkillData_array *skillDataList; // x8
  _QWORD *v27; // x9
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x10
  __int64 v31; // x9
  struct SetLevelUpData_array *v32; // x27
  __int64 v33; // x23
  System_Collections_Generic_List_T__o *switchSkillIdsList; // x22
  System_Predicate_T__o *v35; // x23
  System_Collections_Generic_List_T__o *All; // x22
  __int64 v37; // x0
  unsigned __int64 v38; // x23
  __int64 v39; // x29
  System_ValueTuple_object__object__o v40; // kr20_16
  __int64 v41; // x24
  struct SvtUseSkillData_array *v42; // x8
  __int64 v43; // x9
  SvtUseSkillData_o *v44; // x9
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Int32_array *svtActualSkillIdList; // x9
  const MethodInfo_374782C **v47; // x21
  const MethodInfo_374782C *v48; // x2
  unsigned int *lvUpDataList; // x28
  int32_t v50; // w25
  int32_t v51; // w26
  int32_t v52; // w27
  Il2CppObject *Item1; // x0
  const MethodInfo *v54; // x6
  __int64 v55; // x24
  struct SetLevelUpData_array *v56; // x8
  __int64 v57; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C31AA5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    sub_1C32C20(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_1C32C20(&SetLevelUpData___TypeInfo);
    sub_1C32C20(&Method_SkillCombineControl___c__DisplayClass53_0__SetNeedItemInfo_b__0__);
    sub_1C32C20(&SkillCombineControl___c__DisplayClass53_0_TypeInfo);
    byte_4C31AA5 = 1;
  }
  transformInfo = 0;
  v5 = sub_1C32E6C(SkillCombineControl___c__DisplayClass53_0_TypeInfo);
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
    v8 = this->fields.selectSkillHelpLabels;
    if ( !v8 )
      goto LABEL_31;
    if ( LODWORD(v8->max_length) <= 1 )
      goto LABEL_76;
    selectSkillInfo = (__int64)v8->m_Items[1];
    if ( !selectSkillInfo )
      goto LABEL_31;
    selectSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectSkillInfo, 0);
    if ( !selectSkillInfo )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, this->fields.switchIdxType != 0, 0);
    selectSkillInfo = (__int64)this->fields.targetList;
    if ( !selectSkillInfo )
      goto LABEL_31;
    v9 = (const MethodInfo_374782C **)&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__;
    v10 = 0;
    while ( v10 < *(_DWORD *)(selectSkillInfo + 24) )
    {
      selectSkillInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)selectSkillInfo,
                                   v10,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = this->fields.useSkillIdList;
      if ( !useSkillIdList )
        goto LABEL_31;
      v12 = *(int *)(v5 + 16);
      if ( (unsigned int)v12 >= LODWORD(useSkillIdList->max_length) )
        goto LABEL_76;
      v13 = useSkillIdList->m_Items[v12];
      v14 = (ServantSkillInfoIconComponent_o *)selectSkillInfo;
      if ( this->fields.switchIdxType == 2 )
      {
        selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
        if ( !selectSkillInfo )
          goto LABEL_31;
        Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                 (System_Collections_Generic_List_T__o *)selectSkillInfo,
                 this->fields.switchIdx,
                 (const MethodInfo_374782C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
        selectSkillInfo = (__int64)Item.fields.Item1;
        if ( !Item.fields.Item2 )
          goto LABEL_31;
        v16 = *(int *)(v5 + 16);
        if ( (unsigned int)v16 >= LODWORD(Item.fields.Item2[1].monitor) )
          goto LABEL_76;
        if ( *((int *)&Item.fields.Item2[2].klass + v16) >= 1 )
        {
          selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
          if ( !selectSkillInfo )
            goto LABEL_31;
          v17 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                  (System_Collections_Generic_List_T__o *)selectSkillInfo,
                  this->fields.switchIdx,
                  (const MethodInfo_374782C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
          selectSkillInfo = (__int64)v17.fields.Item1;
          if ( !v17.fields.Item2 )
            goto LABEL_31;
          v18 = *(int *)(v5 + 16);
          if ( (unsigned int)v18 >= LODWORD(v17.fields.Item2[1].monitor) )
            goto LABEL_76;
          v13 = *((_DWORD *)&v17.fields.Item2[2].klass + v18);
        }
      }
      if ( v14 )
      {
        ServantSkillInfoIconComponent__SetDispSelectMskImg(v14, v13 == v14->fields.currentSkillId, 0);
        selectSkillInfo = (__int64)this->fields.targetList;
        ++v10;
        if ( selectSkillInfo )
          continue;
      }
      goto LABEL_31;
    }
    displayTransformIndex = this->fields.displayTransformIndex;
    v20 = (struct SetLevelUpData_array *)sub_1C32CC8(
                                           SetLevelUpData___TypeInfo,
                                           (unsigned int)this->fields.transformTotal);
    p_lvUpDataList = &this->fields.lvUpDataList;
    this->fields.lvUpDataList = v20;
    selectSkillInfo = sub_1C32BC4(&this->fields.lvUpDataList, v20);
    if ( this->fields.transformTotal >= 1 )
    {
      v23 = 0;
      v24 = 32;
      do
      {
        selectSkillInfo = (__int64)this->fields.baseUserServantEntity;
        if ( !selectSkillInfo )
          goto LABEL_31;
        selectSkillInfo = UserServantEntity__GetTransformedServantInfo(
                            (UserServantEntity_o *)selectSkillInfo,
                            &transformInfo,
                            v23,
                            0);
        skillDataList = this->fields.skillDataList;
        if ( !skillDataList )
          goto LABEL_31;
        if ( v23 >= LODWORD(skillDataList->max_length) )
          goto LABEL_76;
        v27 = *(Il2CppClass **)((char *)&skillDataList->obj.klass + v24);
        if ( !v27 )
          goto LABEL_31;
        v28 = v27[2];
        if ( !v28 )
          goto LABEL_31;
        v29 = *(int *)(v5 + 16);
        if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 24) )
          goto LABEL_76;
        v30 = v27[3];
        if ( !v30 )
          goto LABEL_31;
        if ( (unsigned int)v29 >= *(_DWORD *)(v30 + 24) )
          goto LABEL_76;
        v31 = v27[5];
        if ( !v31 )
          goto LABEL_31;
        if ( (unsigned int)v29 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_76;
        if ( !transformInfo )
          goto LABEL_31;
        v32 = *p_lvUpDataList;
        selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                     this,
                                     v29,
                                     *(_DWORD *)(v28 + 4 * v29 + 32),
                                     *(_DWORD *)(v30 + 4 * v29 + 32),
                                     transformInfo->fields.titleText,
                                     *(_DWORD *)(v31 + 4 * v29 + 32),
                                     v25);
        if ( !v32 )
          goto LABEL_31;
        v33 = selectSkillInfo;
        if ( selectSkillInfo )
        {
          selectSkillInfo = sub_1C32D5C(selectSkillInfo, v32->obj.klass->_1.element_class);
          if ( !selectSkillInfo )
          {
LABEL_77:
            v57 = sub_1C32EA0();
            sub_1C32D48(v57, 0);
          }
        }
        if ( v23 >= LODWORD(v32->max_length) )
          goto LABEL_76;
        *(Il2CppClass **)((char *)&v32->obj.klass + v24) = (Il2CppClass *)v33;
        selectSkillInfo = sub_1C32BC4((char *)v32 + v24, v33);
        ++v23;
        v24 += 8;
      }
      while ( (signed int)v23 < this->fields.transformTotal );
    }
    if ( this->fields.switchIdxType == 2 )
    {
      switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
      v35 = (System_Predicate_T__o *)sub_1C32E6C(System_Predicate_ValueTuple_string__int_____TypeInfo);
      System_Predicate_ValueTuple_object__object_____ctor(
        v35,
        (Il2CppObject *)v5,
        Method_SkillCombineControl___c__DisplayClass53_0__SetNeedItemInfo_b__0__,
        0);
      if ( !switchSkillIdsList )
        goto LABEL_31;
      All = System_Collections_Generic_List_ValueTuple_object__object____FindAll(
              switchSkillIdsList,
              v35,
              (const MethodInfo_3748290 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
      selectSkillInfo = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)All, 0);
      if ( (selectSkillInfo & 1) == 0 )
      {
        if ( !All )
          goto LABEL_31;
        v37 = sub_1C32CC8(SetLevelUpData___TypeInfo, (unsigned int)All->fields._size);
        *p_lvUpDataList = (struct SetLevelUpData_array *)v37;
        selectSkillInfo = sub_1C32BC4(&this->fields.lvUpDataList, v37);
        if ( All->fields._size >= 1 )
        {
          v38 = 0;
          v39 = 8;
          do
          {
            v40 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(All, v38, *v9);
            selectSkillInfo = (__int64)v40.fields.Item1;
            if ( !v40.fields.Item2 )
              goto LABEL_31;
            v41 = *(int *)(v5 + 16);
            if ( (unsigned int)v41 >= LODWORD(v40.fields.Item2[1].monitor) )
              goto LABEL_76;
            v42 = this->fields.skillDataList;
            if ( !v42 )
              goto LABEL_31;
            v43 = this->fields.displayTransformIndex;
            if ( (unsigned int)v43 >= LODWORD(v42->max_length) )
              goto LABEL_76;
            v44 = v42->m_Items[v43];
            if ( !v44 )
              goto LABEL_31;
            svtSkillLvList = v44->fields.svtSkillLvList;
            if ( !svtSkillLvList )
              goto LABEL_31;
            if ( (unsigned int)v41 >= LODWORD(svtSkillLvList->max_length) )
              goto LABEL_76;
            svtActualSkillIdList = v44->fields.svtActualSkillIdList;
            if ( !svtActualSkillIdList )
              goto LABEL_31;
            if ( (unsigned int)v41 >= LODWORD(svtActualSkillIdList->max_length) )
              goto LABEL_76;
            v47 = v9;
            v48 = *v9;
            lvUpDataList = (unsigned int *)this->fields.lvUpDataList;
            v50 = *((_DWORD *)&v40.fields.Item2[2].klass + v41);
            v51 = svtSkillLvList->m_Items[v41];
            v52 = svtActualSkillIdList->m_Items[v41];
            Item1 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(All, v38, v48).fields.Item1;
            selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                         this,
                                         v41,
                                         v50,
                                         v51,
                                         (System_String_o *)Item1,
                                         v52,
                                         v54);
            if ( !lvUpDataList )
              goto LABEL_31;
            v55 = selectSkillInfo;
            if ( selectSkillInfo )
            {
              selectSkillInfo = sub_1C32D5C(selectSkillInfo, *(_QWORD *)(*(_QWORD *)lvUpDataList + 64LL));
              if ( !selectSkillInfo )
                goto LABEL_77;
            }
            if ( v38 >= lvUpDataList[6] )
              goto LABEL_76;
            *(_QWORD *)&lvUpDataList[v39] = v55;
            selectSkillInfo = sub_1C32BC4(&lvUpDataList[v39], v55);
            ++v38;
            v39 += 2;
            v9 = v47;
          }
          while ( (__int64)v38 < All->fields._size );
          p_lvUpDataList = &this->fields.lvUpDataList;
        }
      }
      displayTransformIndex = 0;
    }
    v56 = *p_lvUpDataList;
    if ( !*p_lvUpDataList )
LABEL_31:
      sub_1C32E7C(selectSkillInfo);
    if ( (unsigned int)displayTransformIndex >= LODWORD(v56->max_length) )
LABEL_76:
      sub_1C32E84(selectSkillInfo);
    SkillCombineControl__SetSvtSkillCombineData(this, v56->m_Items[displayTransformIndex], v22);
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
}


void SkillCombineControl__SetStateInfoMsg(SkillCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  UnityEngine_Component_o *detailInfoLb; // x0
  System_String_o *v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C31AA9 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7451/*"INFO_MSG_SKILLUP"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31AA9 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_12;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_12;
  v7.fields.r = 0.0;
  v7.fields.a = 1.0;
  v7.fields.g = 0.87891;
  v7.fields.b = 0.98828;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v7, 0);
  if ( state )
  {
    v6 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_7451/*"INFO_MSG_SKILLUP"*/, 0);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_12:
    sub_1C32E7C(detailInfoLb);
  UILabel__set_text((UILabel_o *)detailInfoLb, v6, 0);
}


void SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        SetLevelUpData_o *setLvUpData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemInfoList; // x0
  int32_t v6; // w20
  UIWidget_o *v7; // x20
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  UILabel_o *qpLb; // x23
  struct System_Int32_array *combineItemIds; // x27
  struct System_Int32_array *combineItemNums; // x28
  unsigned __int64 v13; // x23
  int32_t *m_Items; // x29
  int32_t *v15; // x24
  signed __int64 v16; // x21
  char v17; // w26
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

  if ( (byte_4C31AA6 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5789/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C32C20(&StringLiteral_17668/*"buttontxt_synthesis"*/);
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    sub_1C32C20(&StringLiteral_12188/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_17665/*"buttontxt_notsynthesis"*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C31AA6 = 1;
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
                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                                                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                                                (System_String_o *)StringLiteral_5789/*"EXE_SUMMON_COMBINE_TXT"*/,
                                                                0);
  if ( !setLvUpData )
    goto LABEL_8;
  if ( setLvUpData->fields.currentLv < setLvUpData->fields.maxLv )
  {
    v9 = itemInfoList;
    itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
    if ( itemInfoList )
    {
      UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17668/*"buttontxt_synthesis"*/, 0);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
      if ( itemInfoList )
      {
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))itemInfoList->klass->vtable._33_get_Item.methodPtr)(
          itemInfoList,
          itemInfoList->klass->vtable._33_get_Item.method);
        qpLb = this->fields.qpLb;
        this->fields.spendQpVal = setLvUpData->fields.spendQp;
        itemInfoList = (System_Collections_Generic_List_object__o *)System_Int32__ToString_65028652(
                                                                      (int)this + 320,
                                                                      (System_String_o *)StringLiteral_9231/*"N0"*/,
                                                                      0);
        if ( qpLb )
        {
          v23 = (System_String_o *)v9;
          UILabel__set_text(qpLb, (System_String_o *)itemInfoList, 0);
          combineItemIds = setLvUpData->fields.combineItemIds;
          if ( combineItemIds )
          {
            combineItemNums = setLvUpData->fields.combineItemNums;
            v13 = 0;
            m_Items = combineItemIds->m_Items;
            v15 = combineItemNums->m_Items;
            v16 = LODWORD(combineItemIds->max_length) - 1;
            v17 = 1;
            do
            {
              if ( (__int64)v13 <= v16 )
              {
                itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              itemInfoList,
                                                                              v13,
                                                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
                if ( v13 >= LODWORD(combineItemIds->max_length) )
                  goto LABEL_47;
                if ( !combineItemNums )
                  goto LABEL_8;
                if ( v13 >= LODWORD(combineItemNums->max_length) )
                  goto LABEL_47;
                v18 = itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                LimitCntUpItemComponent__setLimitUpItemInfo(
                  (LimitCntUpItemComponent_o *)itemInfoList,
                  this->fields.userId,
                  m_Items[v13],
                  v15[v13],
                  0);
                if ( v13 >= LODWORD(combineItemIds->max_length) || v13 >= LODWORD(combineItemNums->max_length) )
LABEL_47:
                  sub_1C32E84(itemInfoList);
                CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, m_Items[v13], v15[v13], 0);
                v17 &= LOBYTE(v18[2].fields._syncRoot) != 0;
              }
              ++v13;
            }
            while ( v13 != 5 );
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
                                                                              (System_String_o *)StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/,
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
              if ( (v17 & 1) == 0 )
              {
                v28.fields.r = 1.0;
                v28.fields.g = 1.0;
                v28.fields.b = 1.0;
                v28.fields.a = 1.0;
                UIWidget__set_color(v7, v28, 0);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12188/*"SHORT_ITEM_INFO_MSG"*/, 0);
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
    sub_1C32E7C(itemInfoList);
  }
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v8);
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
  UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17665/*"buttontxt_notsynthesis"*/, 0);
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
  System_String_o *titleText; // x1
  struct UILabel_o *condTitleLabel; // x20
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C31AA2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
    byte_4C31AA2 = 1;
  }
  transformInfo = 0;
  switchIdxType = this->fields.switchIdxType;
  if ( switchIdxType == 2 )
  {
    switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
    if ( switchSkillIdsList )
    {
      condTitleLabel = this->fields.condTitleLabel;
      switchSkillIdsList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                                                                     switchSkillIdsList,
                                                                     this->fields.switchIdx,
                                                                     (const MethodInfo_374782C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__).fields.Item1;
      if ( condTitleLabel )
      {
        titleText = (System_String_o *)switchSkillIdsList;
        switchSkillIdsList = (System_Collections_Generic_List_T__o *)condTitleLabel;
        goto LABEL_12;
      }
    }
LABEL_14:
    sub_1C32E7C(switchSkillIdsList);
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
  titleText = transformInfo->fields.titleText;
LABEL_12:
  UILabel__set_text((UILabel_o *)switchSkillIdsList, titleText, 0);
}


bool SkillCombineControl__TrySetSwitchSkillIdsList(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v2; // x21
  System_Collections_ICollection_o **p_switchSkillIdsList; // x20
  UserServantEntity_o *baseUserServantEntity; // x0
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SkillCombineControl_o *v7; // x19
  SvtUseSkillData_o *v8; // x11
  struct System_Int32_array *svtUseSkillIdList; // x8
  unsigned __int64 v10; // x29
  unsigned __int64 max_length_low; // x9
  struct UserServantEntity_o *v12; // x10
  int32_t svtId; // w23
  int32_t v14; // w22
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w2
  int *currentCryptoKey; // x8
  ServantSkillAddEntity_o *v19; // x22
  unsigned __int64 v20; // x19
  Il2CppObject *v21; // x24
  struct System_String_array *titles; // x8
  Il2CppClass *v23; // x1
  System_Collections_ICollection_o *v24; // x25
  System_Predicate_T__o *v25; // x26
  System_ValueTuple_object__object__o v26; // kr00_16
  Il2CppObject *klass; // x23
  BalanceConfig_c *v28; // x0
  Il2CppObject *v29; // x2
  const MethodInfo_3AF85D0 *v30; // x4
  System_ValueTuple_object__object__o v31; // x1 OVERLAPPED
  System_Collections_ICollection_c *v32; // x8
  _QWORD *v33; // x9
  __int64 hiddenValue_low; // x10
  System_ValueTuple_object__object__o *v35; // x8
  struct System_Int32_array *skillIds; // x9
  UIWidget_o *condTitleLabel; // x23
  UIWidget_o *condTitleSprite; // x23
  SvtUseSkillData_o *v40; // [xsp+0h] [xbp-A0h]
  ServantSkillAddMaster_o *v41; // [xsp+8h] [xbp-98h]
  System_ValueTuple_object__object__o v43; // [xsp+18h] [xbp-88h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+28h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  System_ValueTuple_object__object__o v46; // 0:x0.16
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C31AA3 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&System_Predicate_ValueTuple_string__int_____TypeInfo);
    sub_1C32C20(&Method_SkillCombineControl___c__DisplayClass50_0__TrySetSwitchSkillIdsList_b__0__);
    sub_1C32C20(&SkillCombineControl___c__DisplayClass50_0_TypeInfo);
    sub_1C32C20(&Method_System_ValueTuple_string__int_____ctor__);
    byte_4C31AA3 = 1;
  }
  v43.fields.Item2 = 0;
  transformInfo = 0;
  v43.fields.Item1 = 0;
  v2 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v2,
    (const MethodInfo_37472C8 *)Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
  p_switchSkillIdsList = (System_Collections_ICollection_o **)&this->fields.switchSkillIdsList;
  this->fields.switchSkillIdsList = (struct System_Collections_Generic_List_ValueTuple_string__int_____o *)v2;
  sub_1C32BC4(&this->fields.switchSkillIdsList, v2);
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
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  skillDataList = this->fields.skillDataList;
  v41 = (ServantSkillAddMaster_o *)baseUserServantEntity;
  if ( !skillDataList )
    goto LABEL_48;
  displayTransformIndex = this->fields.displayTransformIndex;
  v7 = this;
  if ( (unsigned int)displayTransformIndex >= LODWORD(skillDataList->max_length) )
LABEL_50:
    sub_1C32E84(baseUserServantEntity);
  v8 = skillDataList->m_Items[displayTransformIndex];
  if ( !v8 || (svtUseSkillIdList = v8->fields.svtUseSkillIdList) == 0 )
LABEL_48:
    sub_1C32E7C(baseUserServantEntity);
  v10 = 0;
  v40 = v8;
  while ( 1 )
  {
    max_length_low = LODWORD(svtUseSkillIdList->max_length);
    if ( (__int64)v10 >= (int)max_length_low )
      return !BasicHelper__IsNullOrEmpty(*p_switchSkillIdsList, 0);
    if ( v10 >= max_length_low )
      goto LABEL_50;
    if ( !transformInfo )
      goto LABEL_48;
    v12 = v7->fields.baseUserServantEntity;
    if ( !v12 )
      goto LABEL_48;
    svtId = transformInfo->fields.svtId;
    v14 = svtUseSkillIdList->m_Items[v10];
    v16 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
    v15 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = v16;
    *(_QWORD *)&v45.fields.fakeValue = v15;
    baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                     v45,
                                                     0);
    if ( !transformInfo )
      goto LABEL_48;
    v17 = (int)baseUserServantEntity;
    baseUserServantEntity = (UserServantEntity_o *)v41;
    if ( !v41 )
      goto LABEL_48;
    baseUserServantEntity = (UserServantEntity_o *)ServantSkillAddMaster__GetEnableEntity(
                                                     v41,
                                                     svtId,
                                                     v17,
                                                     v14,
                                                     0,
                                                     transformInfo->fields.dispLimitCount,
                                                     1,
                                                     0);
    if ( baseUserServantEntity )
    {
      currentCryptoKey = (int *)baseUserServantEntity->fields.userId.fields.currentCryptoKey;
      v19 = (ServantSkillAddEntity_o *)baseUserServantEntity;
      if ( !currentCryptoKey )
        goto LABEL_48;
      v20 = 0;
      while ( (__int64)v20 < currentCryptoKey[6] )
      {
        v21 = (Il2CppObject *)sub_1C32E6C(SkillCombineControl___c__DisplayClass50_0_TypeInfo);
        System_Object___ctor(v21, 0);
        titles = v19->fields.titles;
        if ( !titles )
          goto LABEL_48;
        if ( v20 >= LODWORD(titles->max_length) )
          goto LABEL_50;
        if ( !v21 )
          goto LABEL_48;
        v23 = (Il2CppClass *)titles->m_Items[v20];
        v21[1].klass = v23;
        sub_1C32BC4(&v21[1], v23);
        v24 = *p_switchSkillIdsList;
        v25 = (System_Predicate_T__o *)sub_1C32E6C(System_Predicate_ValueTuple_string__int_____TypeInfo);
        System_Predicate_ValueTuple_object__object_____ctor(
          v25,
          v21,
          Method_SkillCombineControl___c__DisplayClass50_0__TrySetSwitchSkillIdsList_b__0__,
          0);
        if ( !v24 )
          goto LABEL_48;
        v26 = System_Collections_Generic_List_ValueTuple_object__object____Find(
                (System_Collections_Generic_List_T__o *)v24,
                v25,
                (const MethodInfo_37481D4 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
        v43 = v26;
        baseUserServantEntity = (UserServantEntity_o *)System_String__op_Equality(
                                                         (System_String_o *)v26.fields.Item1,
                                                         0,
                                                         0);
        if ( !v26.fields.Item2 && ((unsigned __int8)baseUserServantEntity & 1) != 0 )
        {
          klass = (Il2CppObject *)v21[1].klass;
          v28 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v28 = BalanceConfig_TypeInfo;
          }
          v29 = (Il2CppObject *)sub_1C32CC8(int___TypeInfo, (unsigned int)v28->static_fields->SvtSkillListMax);
          v46.fields.Item1 = (Il2CppObject *)&v43;
          v46.fields.Item2 = klass;
          System_ValueTuple_object__object____ctor(
            v46,
            v29,
            (Il2CppObject *)Method_System_ValueTuple_string__int_____ctor__,
            v30);
          baseUserServantEntity = (UserServantEntity_o *)*p_switchSkillIdsList;
          if ( !*p_switchSkillIdsList )
            goto LABEL_48;
          v31 = v43;
          v32 = (System_Collections_ICollection_c *)baseUserServantEntity->fields.id.fields.currentCryptoKey;
          v33 = Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__;
          ++HIDWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( !v32 )
            goto LABEL_48;
          hiddenValue_low = SLODWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v32->_1.namespaze) )
          {
            System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
              (System_Collections_Generic_List_T__o *)baseUserServantEntity,
              v31,
              *(const MethodInfo_3747B48 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = (System_ValueTuple_object__object__o *)((char *)v32 + 16 * hiddenValue_low);
            LODWORD(baseUserServantEntity->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
            v35[2] = v31;
            baseUserServantEntity = (UserServantEntity_o *)sub_1C32BC4(&v35[2], 0);
          }
        }
        skillIds = v19->fields.skillIds;
        if ( skillIds )
        {
          if ( v20 >= LODWORD(skillIds->max_length) )
            goto LABEL_50;
          LODWORD(skillIds) = v19->fields.skillIds->m_Items[v20];
        }
        if ( v43.fields.Item2 )
        {
          if ( v10 >= LODWORD(v43.fields.Item2[1].monitor) )
            goto LABEL_50;
          *((_DWORD *)&v43.fields.Item2[2].klass + v10) = (_DWORD)skillIds;
          currentCryptoKey = (int *)v19->fields.titles;
          ++v20;
          if ( currentCryptoKey )
            continue;
        }
        goto LABEL_48;
      }
      v7 = this;
      v47.fields.r = 1.0;
      v47.fields.g = 1.0;
      v47.fields.b = 1.0;
      condTitleLabel = (UIWidget_o *)this->fields.condTitleLabel;
      v47.fields.a = 1.0;
      CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v19, v47, 0);
      if ( !condTitleLabel )
        goto LABEL_48;
      UIWidget__set_color(condTitleLabel, CondLabelColor, 0);
      condTitleSprite = (UIWidget_o *)this->fields.condTitleSprite;
      v49.fields.r = 0.0;
      v49.fields.a = 1.0;
      v49.fields.g = 0.33333;
      v49.fields.b = 0.8;
      CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v19, v49, 0);
      if ( !condTitleSprite )
        goto LABEL_48;
      UIWidget__set_color(condTitleSprite, CondSpriteColor, 0);
    }
    else
    {
      v7 = this;
    }
    ++v10;
    svtUseSkillIdList = v40->fields.svtUseSkillIdList;
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
    sub_1C32E7C(this);
  idx = this->fields.idx;
  if ( (unsigned int)idx >= LODWORD(x.fields.Item2->max_length) )
    sub_1C32E84(this);
  return x.fields.Item2->m_Items[idx] > 0;
}