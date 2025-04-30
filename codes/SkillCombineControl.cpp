void __fastcall SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5244F & 1) == 0 )
  {
    sub_1B863B8(&CombineMenuControl_TypeInfo, method);
    byte_4A5244F = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SkillCombineControl__CheckIsMaxLvSkills(
        SkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_Int32_array *SkillIdList; // x19
  __int64 v7; // x8
  bool v8; // w22
  SkillCombineControl_o *v9; // x20
  unsigned __int64 v10; // x23
  struct CombineRootComponent_o **p_combineRootComponent; // x27
  int32_t v12; // w21
  int32_t v13; // w29

  if ( (byte_4A5244A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillMaster___, resData);
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    this = (SkillCombineControl_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A5244A = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, -1, 0LL),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                          resData,
                                          resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_17:
    sub_1B86614(this, resData);
  }
  v7 = *(_QWORD *)&SkillIdList->max_length;
  v8 = (int)v7 > 0;
  if ( (int)v7 >= 1 )
  {
    v9 = this;
    v10 = 0LL;
    p_combineRootComponent = &this->fields.combineRootComponent;
    do
    {
      if ( v10 >= (unsigned int)v7 )
        goto LABEL_18;
      if ( !v9 )
        goto LABEL_17;
      if ( v10 >= LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_18:
        sub_1B8661C(this, resData);
      v12 = SkillIdList->m_Items[v10 + 1];
      if ( v12 >= 1 )
      {
        v13 = *((_DWORD *)p_combineRootComponent + v10);
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          goto LABEL_17;
        this = (SkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v12,
                                          (const MethodInfo_3214280 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_17;
        if ( v13 < this->fields.type )
          return !v8;
      }
      LODWORD(v7) = SkillIdList->max_length;
      v8 = (__int64)++v10 < (int)v7;
    }
    while ( (__int64)v10 < (int)v7 );
  }
  return !v8;
}


// local variable allocation has failed, the output may be wrong!
SetLevelUpData_o *__fastcall SkillCombineControl__CreateLeveUpData(
        SkillCombineControl_o *this,
        int32_t idx,
        int32_t skillId,
        int32_t skillLv,
        System_String_o *titleText,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  SkillEntity_o *Entity; // x26
  const MethodInfo *v25; // x2
  CombineSkillEntity_o *CombineSkillEntity; // x22
  __int64 v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  System_String_o *Name; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  int32_t qp; // w1
  float v36; // s0
  float v37; // x24^4
  int v38; // w25
  const MethodInfo *v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  float CombineCampaignQpRate; // s0
  double v43; // d0
  int v44; // w8
  __int64 itemIds; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 itemNums; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v52; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_int__o v53; // 0:x0.8
  System_Nullable_float__o v54; // 0:x0.8
  System_Nullable_float__o v55; // 0:x0.8

  if ( (byte_4A5244C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx);
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11);
    sub_1B863B8(&int___TypeInfo, v12);
    sub_1B863B8(&Method_System_Nullable_float__GetValueOrDefault__, v13);
    sub_1B863B8(&Method_System_Nullable_int__GetValueOrDefault__, v14);
    sub_1B863B8(&Method_System_Nullable_int___ctor__, v15);
    sub_1B863B8(&Method_System_Nullable_float___ctor__, v16);
    sub_1B863B8(&Method_System_Nullable_float__get_HasValue__, v17);
    sub_1B863B8(&Method_System_Nullable_int__get_HasValue__, v18);
    sub_1B863B8(&SetLevelUpData_TypeInfo, v19);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B863B8(&StringLiteral_1/*""*/, v21);
    byte_4A5244C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_23;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              skillId,
                              (const MethodInfo_3214280 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  CombineSkillEntity = SkillCombineControl__GetCombineSkillEntity(this, skillLv, v25);
  v27 = sub_1B86604(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v27, 0LL);
  if ( !v27
    || (*(_DWORD *)(v27 + 16) = skillId,
        *(_DWORD *)(v27 + 20) = idx + 1,
        *(_DWORD *)(v27 + 24) = idx,
        v30 = (int)StringLiteral_1/*""*/,
        *(_QWORD *)(v27 + 32) = StringLiteral_1/*""*/,
        sub_1B8635C((CGThumbnailListItem_o *)(v27 + 32), v30, v28, v29),
        !Entity) )
  {
LABEL_23:
    sub_1B86614(Instance, v23);
  }
  Name = SkillEntity__getName(Entity, 0LL);
  *(_QWORD *)(v27 + 40) = Name;
  sub_1B8635C((CGThumbnailListItem_o *)(v27 + 40), (int32_t)Name, v32, v33);
  *(_DWORD *)(v27 + 64) = skillLv;
  *(_DWORD *)(v27 + 68) = skillLv + 1;
  *(_DWORD *)(v27 + 72) = Entity->fields.maxLv;
  if ( CombineSkillEntity
    && (qp = CombineSkillEntity->fields.qp,
        v53 = (System_Nullable_int__o)&v52,
        v52 = 0LL,
        System_Nullable_int____ctor(v53, qp, (const MethodInfo_371C418 *)Method_System_Nullable_int___ctor__),
        (_BYTE)v52) )
  {
    v36 = (float)SHIDWORD(v52);
    v54 = (System_Nullable_float__o)&v52;
    v52 = 0LL;
    System_Nullable_float____ctor(v54, v36, (const MethodInfo_371E63C *)Method_System_Nullable_float___ctor__);
    v37 = *((float *)&v52 + 1);
    v38 = (unsigned __int8)v52;
    CombineCampaignQpRate = SkillCombineControl__GetCombineCampaignQpRate(this, v39);
    if ( v38 )
    {
      v55 = (System_Nullable_float__o)&v52;
      v52 = 0LL;
      System_Nullable_float____ctor(
        v55,
        CombineCampaignQpRate * v37,
        (const MethodInfo_371E63C *)Method_System_Nullable_float___ctor__);
      v43 = *((float *)&v52 + 1);
      goto LABEL_13;
    }
  }
  else
  {
    SkillCombineControl__GetCombineCampaignQpRate(this, v34);
  }
  v43 = 0.0;
LABEL_13:
  if ( v43 == INFINITY )
    v44 = 0x80000000;
  else
    v44 = (int)v43;
  *(_DWORD *)(v27 + 76) = v44;
  *(_DWORD *)(v27 + 80) = this->fields.userQP;
  if ( !CombineSkillEntity || (itemIds = (__int64)CombineSkillEntity->fields.itemIds) == 0 )
    itemIds = sub_1B86460(int___TypeInfo, 0LL);
  *(_QWORD *)(v27 + 96) = itemIds;
  sub_1B8635C((CGThumbnailListItem_o *)(v27 + 96), itemIds, v40, v41);
  if ( !CombineSkillEntity || (itemNums = (__int64)CombineSkillEntity->fields.itemNums) == 0 )
    itemNums = sub_1B86460(int___TypeInfo, 0LL);
  *(_QWORD *)(v27 + 104) = itemNums;
  sub_1B8635C((CGThumbnailListItem_o *)(v27 + 104), itemNums, v46, v47);
  *(_QWORD *)(v27 + 56) = titleText;
  sub_1B8635C((CGThumbnailListItem_o *)(v27 + 56), (int32_t)titleText, v49, v50);
  return (SetLevelUpData_o *)v27;
}


float __fastcall SkillCombineControl__GetCombineCampaignQpRate(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *combineEventList; // x0
  float v8; // s8
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5244E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    byte_4A5244E = 1;
  }
  memset(&v12, 0, sizeof(v12));
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  v8 = 1.0;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      combineEventList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v9 )
        break;
      if ( !v12.fields._current )
        sub_1B86614(v9, v10);
      if ( HIDWORD(v12.fields._current[1].klass) == 8 )
      {
        v8 = *(float *)&v12.fields._current[3].monitor;
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *__fastcall SkillCombineControl__GetCombineSkillEntity(
        SkillCombineControl_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  Il2CppObject *v15; // x20
  CombineSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A5244D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_CombineSkillMaster___, *(_QWORD *)&skillLv);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4A5244D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_12;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v18, 0LL);
  if ( !v12
    || (v15 = DataMasterBase_object__object__int___GetEntity(
                v12,
                (int32_t)Master_object,
                (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CombineSkillMaster___),
        !v15)
    || !Master_object )
  {
LABEL_12:
    sub_1B86614(Master_object, v10);
  }
  CombineSkillMaster__TryGetEntity((CombineSkillMaster_o *)Master_object, &entity, (int32_t)v15[7].klass, skillLv, 0LL);
  return entity;
}


// local variable allocation has failed, the output may be wrong!
SvtUseSkillData_o *__fastcall SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        int32_t transformIndex,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A52441 & 1) == 0 )
  {
    sub_1B863B8(&SvtUseSkillData_TypeInfo, *(_QWORD *)&transformIndex);
    byte_4A52441 = 1;
  }
  v5 = sub_1B86604(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor((SvtUseSkillData_o *)v5, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity
    || (baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedSkillIdList(
                                                         baseUserServantEntity,
                                                         transformIndex,
                                                         -1,
                                                         -1,
                                                         1,
                                                         -1,
                                                         0LL),
        !v5)
    || (*(_QWORD *)(v5 + 16) = baseUserServantEntity,
        sub_1B8635C((CGThumbnailListItem_o *)(v5 + 16), (int32_t)baseUserServantEntity, v8, v9),
        (baseUserServantEntity = this->fields.baseUserServantEntity) == 0LL) )
  {
    sub_1B86614(baseUserServantEntity, v6);
  }
  v10 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))baseUserServantEntity->klass->vtable._6_getSkillLevelList.method)(
          baseUserServantEntity,
          baseUserServantEntity->klass[1]._1.image);
  *(_QWORD *)(v5 + 24) = v10;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 24), v10, v11, v12);
  return (SvtUseSkillData_o *)v5;
}


SetLevelUpData_o *__fastcall SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  struct SetLevelUpData_array *lvUpDataList; // x8

  lvUpDataList = this->fields.lvUpDataList;
  if ( !lvUpDataList )
    sub_1B86614(this, method);
  if ( !lvUpDataList->max_length )
    sub_1B8661C(this, method);
  return lvUpDataList->m_Items[0];
}


int32_t __fastcall SkillCombineControl__GetTutorialOpenType(SkillCombineControl_o *this, const MethodInfo *method)
{
  return 37;
}


void __fastcall SkillCombineControl__InitDispCombineInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *preSelectBaseLb; // x20
  void *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  struct UILabel_array *selectSkillHelpLabels; // x22
  int max_length; // w8
  unsigned int v14; // w23
  UILabel_o *v15; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v18; // x1
  int v19; // w21
  int32_t v20; // w20
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5243D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_8652/*"MSG_PRESELECT_BASE_SVT"*/, v5);
    sub_1B863B8(&StringLiteral_8655/*"MSG_SKILL_SELECT"*/, v6);
    sub_1B863B8(&StringLiteral_9090/*"NEED_QP_INFO"*/, v7);
    byte_4A5243D = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8652/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_29;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)gameObject, 0LL);
  gameObject = this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.selectSkillInfo;
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  SkillCombineControl__SetHaveQpInfo(this, v11);
  selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
  if ( !selectSkillHelpLabels )
    goto LABEL_29;
  max_length = selectSkillHelpLabels->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1B8661C(gameObject, v10);
      v15 = selectSkillHelpLabels->m_Items[v14];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8655/*"MSG_SKILL_SELECT"*/, 0LL);
      if ( !v15 )
        break;
      UILabel__set_text(v15, (System_String_o *)gameObject, 0LL);
      max_length = selectSkillHelpLabels->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_18;
    }
LABEL_29:
    sub_1B86614(gameObject, v10);
  }
LABEL_18:
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9090/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_29;
  UILabel__set_text(needQpLb, (System_String_o *)gameObject, 0LL);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  gameObject = System_Int32__ToString((int)this + 316, 0LL);
  if ( !qpLb )
    goto LABEL_29;
  UILabel__set_text(qpLb, (System_String_o *)gameObject, 0LL);
  gameObject = this->fields.qpLb;
  if ( !gameObject )
    goto LABEL_29;
  v21.fields.r = 1.0;
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v21.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v21, 0LL);
  SkillCombineControl__ResetDispSkillInfo(this, v18);
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_29;
  v19 = *((_DWORD *)gameObject + 6);
  if ( v19 >= 1 )
  {
    v20 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v20,
                     (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( v19 == ++v20 )
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = this->fields.condTitleLabel;
  if ( !gameObject )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall SkillCombineControl__InitSvtSkillCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *helpBtn; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v21; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  MenuListControl_o *v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5243C & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_17443/*"buttontxt_synthesis"*/, v8);
    byte_4A5243C = 1;
  }
  memset(&v25, 0, sizeof(v25));
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v11);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v12);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_28;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17443/*"buttontxt_synthesis"*/, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_28;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_28;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  this->fields.userQP = *((_DWORD *)helpBtn + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    helpBtn = this->fields.charaGraph;
    if ( !helpBtn )
      goto LABEL_28;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.charaGraph, 0, v15, v16);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_28:
    sub_1B86614(helpBtn, v9);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v17, v18);
  v21 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v21 && v21->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      v21,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v22 )
        break;
      if ( !v25.fields._current )
        sub_1B86614(v22, v23);
      if ( HIDWORD(v25.fields._current[1].klass) == 8 )
      {
        v24 = this->fields.menuListCtr;
        if ( !v24 )
          sub_1B86614(0LL, v23);
        MenuListControl__setBannerIcon(
          v24,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v25.fields._current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4A52448 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_3756/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v3);
    byte_4A52448 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1B86614(v4, v5);
  SetRarityDialogControl__SetSkillNpCombineInfo(exeCombineDlg, this->fields.lvUpDataList, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__OnClickInfo(
        SkillCombineControl_o *this,
        bool isdecide,
        int32_t idx,
        const MethodInfo *method)
{
  this->fields.currentIdx = idx;
  SkillCombineControl__SetNeedItemInfo(this, idx, *(const MethodInfo **)&idx);
}


void __fastcall SkillCombineControl__OnClickSwitchSkill(SkillCombineControl_o *this, const MethodInfo *method)
{
  SkillCombineControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t switchIdxType; // w8
  int32_t *p_switchIdx; // x8
  int32_t *p_size; // x9
  struct System_Collections_Generic_List_ValueTuple_string__int_____o *switchSkillIdsList; // x9
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w0
  UnityEngine_GameObject_o *v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v2 = this;
  if ( (byte_4A5244B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__, method);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (SkillCombineControl_o *)sub_1B863B8(&Method_SkillCombineControl_OnClickSwitchSkill__, v4);
    byte_4A5244B = 1;
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
    sub_1B86614(this, method);
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v18, 0LL);
  SkillCombineControl__SetCombineSkillList(v2, v13, v12, v14);
  if ( v2->fields.switchIdxType )
    SkillCombineControl__SetTitleText(v2, v15);
  v16 = Method_SkillCombineControl_OnClickSwitchSkill__;
  if ( (*((_BYTE *)Method_SkillCombineControl_OnClickSwitchSkill__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1B863D0(Method_SkillCombineControl_OnClickSwitchSkill__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B8639C(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
}


void __fastcall SkillCombineControl__ResetDispSkillInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *skillInfoList; // x0
  int size; // w8
  int v6; // w22
  int32_t v7; // w20
  UnityEngine_Component_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5243E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v3);
    byte_4A5243E = 1;
  }
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_13;
  size = skillInfoList->fields._size;
  v6 = size - 1;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      skillInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     skillInfoList,
                                                                     v7,
                                                                     (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !skillInfoList )
        break;
      v8 = (UnityEngine_Component_o *)skillInfoList;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)skillInfoList, 0LL);
      gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)v7 * 230.0, 0LL);
      v10 = UnityEngine_Component__get_gameObject(v8, 0LL);
      GameObjectExtensions__SetLocalPositionY(v10, 0.0, 0LL);
      v11 = UnityEngine_Component__get_gameObject(v8, 0LL);
      GameObjectExtensions__SetLocalScale_34384400(v11, 1.0, 0LL);
      if ( v6 == v7 )
        goto LABEL_10;
      skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
      ++v7;
    }
    while ( skillInfoList );
LABEL_13:
    sub_1B86614(skillInfoList, method);
  }
LABEL_10:
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.condTitleLabel;
  if ( !skillInfoList )
    goto LABEL_13;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skillInfoList, v12, 0LL);
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.condTitleSprite;
  if ( !skillInfoList )
    goto LABEL_13;
  v13.fields.g = 0.33333;
  v13.fields.b = 0.8;
  v13.fields.r = 0.0;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skillInfoList, v13, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtCardImg(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(SkillCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass[1]._1.image);
  this->fields.charaGraph = v5;
  sub_1B8635C((CGThumbnailListItem_o *)p_charaGraph, (int32_t)v5, v6, v7);
}


void __fastcall SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int128 v9; // q1
  int64_t v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  int32_t TransformCount; // w0
  int32_t *p_switchIdxType; // x23
  struct SvtUseSkillData_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  unsigned __int64 v21; // x21
  __int64 v22; // x24
  struct SvtUseSkillData_array *skillDataList; // x25
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppClass *v26; // x22
  signed __int64 transformTotal; // x8
  int v28; // w8
  const MethodInfo *v29; // x1
  __int64 v30; // x20
  __int64 v31; // x21
  int32_t v32; // w0
  UnityEngine_GameObject_o *v33; // x1
  const MethodInfo *v34; // x3
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A52440 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtEn);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B863B8(&SvtUseSkillData___TypeInfo, v8);
    byte_4A52440 = 1;
  }
  if ( usrSvtEn )
  {
    v9 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v36 = v37;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v36, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v10;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)usrSvtEn, v11, v12);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb )
      goto LABEL_31;
    preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL);
    if ( !preSelectBaseLb )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb;
    if ( !preSelectBaseLb )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    this->fields.displayTransformIndex = 0;
    TransformCount = UserServantEntity__GetTransformCount(usrSvtEn, 1, 0LL);
    CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0LL);
    this->fields.switchIdx = 0;
    this->fields.switchIdxType = 0;
    p_switchIdxType = &this->fields.switchIdxType;
    v17 = (struct SvtUseSkillData_array *)sub_1B86460(
                                            SvtUseSkillData___TypeInfo,
                                            (unsigned int)this->fields.transformTotal);
    this->fields.skillDataList = v17;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.skillDataList, (int32_t)v17, v18, v19);
    if ( this->fields.transformTotal < 1 )
      goto LABEL_17;
    v21 = 0LL;
    v22 = 32LL;
    do
    {
      skillDataList = this->fields.skillDataList;
      preSelectBaseLb = (UnityEngine_Component_o *)SkillCombineControl__GetSvtSkillData(this, v21, v20);
      if ( !skillDataList )
        goto LABEL_31;
      v26 = (Il2CppClass *)preSelectBaseLb;
      if ( preSelectBaseLb )
      {
        preSelectBaseLb = (UnityEngine_Component_o *)sub_1B864F4(
                                                       preSelectBaseLb,
                                                       skillDataList->obj.klass->_1.element_class);
        if ( !preSelectBaseLb )
        {
          v35 = sub_1B86638(0LL);
          sub_1B864E0(v35, 0LL);
        }
      }
      if ( v21 >= skillDataList->max_length )
        sub_1B8661C(preSelectBaseLb, v13);
      *(Il2CppClass **)((char *)&skillDataList->obj.klass + v22) = v26;
      sub_1B8635C((CGThumbnailListItem_o *)((char *)skillDataList + v22), (int32_t)v26, v24, v25);
      transformTotal = this->fields.transformTotal;
      ++v21;
      v22 += 8LL;
    }
    while ( (__int64)v21 < transformTotal );
    if ( (int)transformTotal > 1 )
    {
      v28 = 1;
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
            0LL);
          preSelectBaseLb = (UnityEngine_Component_o *)this->fields.condTitleLabel;
          if ( preSelectBaseLb )
          {
            preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL);
            if ( preSelectBaseLb )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, *p_switchIdxType != 0, 0LL);
              if ( *p_switchIdxType )
                SkillCombineControl__SetTitleText(this, v29);
              else
                SkillCombineControl__ResetDispSkillInfo(this, v29);
              v31 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
              v30 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v38.fields.currentCryptoKey = v31;
              *(_QWORD *)&v38.fields.fakeValue = v30;
              v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v38, 0LL);
              SkillCombineControl__SetCombineSkillList(this, v33, v32, v34);
              return;
            }
          }
        }
LABEL_31:
        sub_1B86614(preSelectBaseLb, v13);
      }
      v28 = 2;
    }
    *p_switchIdxType = v28;
    goto LABEL_21;
  }
}


void __fastcall SkillCombineControl__SetCombineSkillList(
        SkillCombineControl_o *this,
        UnityEngine_GameObject_o *targetGo,
        int32_t svtId,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SvtUseSkillData_o *v19; // x8
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v22; // x21
  System_Collections_Generic_List_object__o *v23; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  unsigned __int64 v27; // x24
  UnityEngine_Component_o *v28; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  struct System_Int32_array *v32; // x8
  int32_t v33; // w25
  System_ValueTuple_object__object__o Item; // kr00_16
  System_ValueTuple_object__object__o v35; // kr10_16
  struct SvtUseSkillData_array *v36; // x8
  __int64 v37; // x9
  SvtUseSkillData_o *v38; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  int32_t v40; // w26
  Il2CppObject *Entity; // x0
  SkillEntity_o *v42; // x19
  int32_t IconId; // w28
  System_String_o *Name; // x0
  int maxLv; // w21
  System_String_o *v46; // x19
  unsigned __int64 v47; // x27
  SkillCombineControl_o *v48; // x21
  int32_t skillRecord; // w29
  int32_t v50; // w22
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v52; // w19
  __int64 v53; // x21
  __int64 v54; // x28
  int32_t baseSvtId; // w21
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x28
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v63; // x8
  SkillCombineControl_o **p_targetList; // [xsp+20h] [xbp-90h]
  __int64 v66; // [xsp+30h] [xbp-80h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+38h] [xbp-78h]
  int32_t skillMaxLv; // [xsp+44h] [xbp-6Ch]
  System_String_o *skillName; // [xsp+48h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  v4 = this;
  if ( (byte_4A52444 & 1) == 0 )
  {
    sub_1B863B8(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, targetGo);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__, v11);
    sub_1B863B8(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v12);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B863B8(&Method_SkillCombineControl_OnClickInfo__, v15);
    this = (SkillCombineControl_o *)sub_1B863B8(&StringLiteral_868/*"-"*/, v16);
    byte_4A52444 = 1;
  }
  skillDataList = v4->fields.skillDataList;
  if ( !skillDataList )
    goto LABEL_52;
  displayTransformIndex = v4->fields.displayTransformIndex;
  if ( (unsigned int)displayTransformIndex >= skillDataList->max_length )
LABEL_53:
    sub_1B8661C(this, targetGo);
  v19 = skillDataList->m_Items[displayTransformIndex];
  if ( !v19 )
    goto LABEL_52;
  svtUseSkillIdList = v19->fields.svtUseSkillIdList;
  p_useSkillIdList = &v4->fields.useSkillIdList;
  v4->fields.useSkillIdList = svtUseSkillIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.useSkillIdList, (int32_t)svtUseSkillIdList, svtId, method);
  useSkillIdList = v4->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_52;
  v22 = *(_QWORD *)&useSkillIdList->max_length;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v4->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v23;
  p_targetList = (SkillCombineControl_o **)&v4->fields.targetList;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.targetList, (int32_t)v23, v24, v25);
  if ( (int)v22 >= 1 )
  {
    v27 = 0LL;
    v66 = (unsigned int)v22;
    while ( 1 )
    {
      this = (SkillCombineControl_o *)v4->fields.skillInfoList;
      if ( !this )
        break;
      this = (SkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v27,
                                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      v28 = (UnityEngine_Component_o *)this;
      if ( v4->fields.switchIdxType )
      {
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(gameObject, (float)(int)v27 * 234.0, 0LL);
        v30 = UnityEngine_Component__get_gameObject(v28, 0LL);
        GameObjectExtensions__SetLocalPositionY(v30, -16.0, 0LL);
        v31 = UnityEngine_Component__get_gameObject(v28, 0LL);
        GameObjectExtensions__SetLocalScale_34384400(v31, v4->fields.scaleOffset, 0LL);
      }
      v32 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v27 >= v32->max_length )
        goto LABEL_53;
      v33 = v32->m_Items[v27 + 1];
      if ( v4->fields.switchIdxType == 2 )
      {
        this = (SkillCombineControl_o *)v4->fields.switchSkillIdsList;
        if ( !this )
          break;
        Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                 (System_Collections_Generic_List_T__o *)this,
                 v4->fields.switchIdx,
                 (const MethodInfo_35AE72C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
        targetGo = (UnityEngine_GameObject_o *)Item.fields.Item2;
        this = (SkillCombineControl_o *)Item.fields.Item1;
        if ( !Item.fields.Item2 )
          break;
        if ( v27 >= LODWORD(Item.fields.Item2[1].monitor) )
          goto LABEL_53;
        if ( *((int *)&Item.fields.Item2[2].klass + v27) >= 1 )
        {
          this = (SkillCombineControl_o *)v4->fields.switchSkillIdsList;
          if ( !this )
            break;
          v35 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                  (System_Collections_Generic_List_T__o *)this,
                  v4->fields.switchIdx,
                  (const MethodInfo_35AE72C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
          targetGo = (UnityEngine_GameObject_o *)v35.fields.Item2;
          this = (SkillCombineControl_o *)v35.fields.Item1;
          if ( !v35.fields.Item2 )
            break;
          if ( v27 >= LODWORD(v35.fields.Item2[1].monitor) )
            goto LABEL_53;
          v33 = *((_DWORD *)&v35.fields.Item2[2].klass + v27);
        }
      }
      if ( v33 <= 0 )
      {
        v47 = v27 + 1;
      }
      else
      {
        v36 = v4->fields.skillDataList;
        if ( !v36 )
          break;
        v37 = v4->fields.displayTransformIndex;
        if ( (unsigned int)v37 >= v36->max_length )
          goto LABEL_53;
        v38 = v36->m_Items[v37];
        if ( !v38 )
          break;
        svtSkillLvList = v38->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v27 >= svtSkillLvList->max_length )
          goto LABEL_53;
        v40 = svtSkillLvList->m_Items[v27 + 1];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   v33,
                   (const MethodInfo_3214280 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v42 = (SkillEntity_o *)Entity;
          IconId = SkillEntity__GetIconId((SkillEntity_o *)Entity, 0LL);
          Name = SkillEntity__getName(v42, 0LL);
          maxLv = v42->fields.maxLv;
          v46 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v46 = (System_String_o *)StringLiteral_868/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        v47 = v27 + 1;
        skillMaxLv = maxLv;
        this = (SkillCombineControl_o *)ServantSkillMaster__getEntityFromSkillId(
                                          (ServantSkillMaster_o *)this,
                                          svtId,
                                          (int)v27 + 1,
                                          v33,
                                          0LL);
        skillName = v46;
        if ( this )
        {
          v48 = this;
          this = (SkillCombineControl_o *)ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)this, 0LL);
          skillRecord = HIDWORD(v48->fields.charaGraphBase);
          v50 = (int)this;
        }
        else
        {
          v50 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v4->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v52 = IconId;
        v54 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v53 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v70.fields.currentCryptoKey = v54;
        *(_QWORD *)&v70.fields.fakeValue = v53;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v70, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1B86604(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          callback,
          (Il2CppObject *)v4,
          Method_SkillCombineControl_OnClickInfo__,
          v57);
        if ( !v28 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          (ServantSkillInfoIconComponent_o *)v28,
          v27,
          v33,
          v40,
          skillMaxLv,
          skillName,
          v52,
          v50,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v60 = *(_QWORD *)&this->fields.m_CachedPtr;
        v61 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v60 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v60 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v28,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = v60 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v63 + 32) = v28;
          sub_1B8635C((CGThumbnailListItem_o *)(v63 + 32), (int32_t)v28, v58, v59);
        }
      }
      v27 = v47;
      if ( v47 == v66 )
        goto LABEL_51;
    }
LABEL_52:
    sub_1B86614(this, targetGo);
  }
LABEL_51:
  SkillCombineControl__SetNeedItemInfo(v4, v4->fields.currentIdx, v26);
}


void __fastcall SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v8; // x19
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A52447 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4A52447 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v9, 0LL);
      if ( v5 )
      {
        v10.fields.r = 1.0;
        v10.fields.g = 1.0;
        v10.fields.b = 1.0;
        v10.fields.a = 1.0;
        UIWidget__set_color(v5, v10, 0LL);
        if ( v8 )
        {
          UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v8, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1B86614(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v11, 0LL);
  if ( !v5 )
    goto LABEL_14;
  v12.fields.r = 0.5;
  v12.fields.g = 0.5;
  v12.fields.b = 0.5;
  v12.fields.a = 1.0;
  UIWidget__set_color(v5, v12, 0LL);
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
}


void __fastcall SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4A5243F & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_9084/*"N0"*/, method);
    byte_4A5243F = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63159428((int)this + 312, (System_String_o *)StringLiteral_9084/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B86614(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetNeedItemInfo(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 selectSkillInfo; // x0
  Il2CppObject *Item2; // x1
  struct UILabel_array *selectSkillHelpLabels; // x8
  struct UILabel_array *v17; // x8
  int32_t v18; // w21
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v20; // x9
  int32_t v21; // w25
  ServantSkillInfoIconComponent_o *v22; // x22
  System_ValueTuple_object__object__o Item; // kr00_16
  __int64 v24; // x8
  System_ValueTuple_object__object__o v25; // kr10_16
  __int64 v26; // x8
  int32_t displayTransformIndex; // w25
  struct SetLevelUpData_array *v28; // x0
  struct SetLevelUpData_array **p_lvUpDataList; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  unsigned int v33; // w22
  __int64 v34; // x26
  const MethodInfo *v35; // x5
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 v37; // x9
  __int64 v38; // x8
  __int64 v39; // x9
  struct SetLevelUpData_array *v40; // x28
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x23
  System_Collections_Generic_List_T__o *switchSkillIdsList; // x22
  System_Predicate_T__o *v45; // x23
  System_Collections_Generic_List_T__o *All; // x22
  __int64 v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  unsigned __int64 v50; // x23
  __int64 v51; // x28
  System_ValueTuple_object__object__o v52; // kr20_16
  __int64 v53; // x24
  struct SvtUseSkillData_array *v54; // x8
  __int64 v55; // x9
  SvtUseSkillData_o *v56; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  struct SetLevelUpData_array *lvUpDataList; // x29
  int32_t v59; // w25
  int32_t v60; // w26
  Il2CppObject *Item1; // x0
  const MethodInfo *v62; // x5
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  Il2CppClass *v65; // x24
  struct SetLevelUpData_array *v66; // x8
  __int64 v67; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A52445 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__, *(_QWORD *)&idx);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Count__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__, v8);
    sub_1B863B8(&System_Predicate_ValueTuple_string__int_____TypeInfo, v9);
    sub_1B863B8(&SetLevelUpData___TypeInfo, v10);
    sub_1B863B8(&Method_SkillCombineControl___c__DisplayClass51_0__SetNeedItemInfo_b__0__, v11);
    sub_1B863B8(&SkillCombineControl___c__DisplayClass51_0_TypeInfo, v12);
    byte_4A52445 = 1;
  }
  transformInfo = 0LL;
  v13 = sub_1B86604(SkillCombineControl___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_31;
  *(_DWORD *)(v13 + 16) = idx;
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  if ( this->fields.baseUserServantEntity )
  {
    if ( !this->fields.targetList )
      goto LABEL_31;
    selectSkillInfo = (__int64)this->fields.selectSkillInfo;
    if ( !selectSkillInfo )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, 1, 0LL);
    selectSkillHelpLabels = this->fields.selectSkillHelpLabels;
    if ( !selectSkillHelpLabels )
      goto LABEL_31;
    if ( !selectSkillHelpLabels->max_length )
      goto LABEL_71;
    selectSkillInfo = (__int64)selectSkillHelpLabels->m_Items[0];
    if ( !selectSkillInfo )
      goto LABEL_31;
    selectSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectSkillInfo, 0LL);
    if ( !selectSkillInfo )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, this->fields.switchIdxType == 0, 0LL);
    v17 = this->fields.selectSkillHelpLabels;
    if ( !v17 )
      goto LABEL_31;
    if ( v17->max_length <= 1 )
      goto LABEL_71;
    selectSkillInfo = (__int64)v17->m_Items[1];
    if ( !selectSkillInfo )
      goto LABEL_31;
    selectSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectSkillInfo, 0LL);
    if ( !selectSkillInfo )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSkillInfo, this->fields.switchIdxType != 0, 0LL);
    selectSkillInfo = (__int64)this->fields.targetList;
    if ( !selectSkillInfo )
      goto LABEL_31;
    v18 = 0;
    while ( v18 < *(_DWORD *)(selectSkillInfo + 24) )
    {
      selectSkillInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)selectSkillInfo,
                                   v18,
                                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = this->fields.useSkillIdList;
      if ( !useSkillIdList )
        goto LABEL_31;
      v20 = *(int *)(v13 + 16);
      if ( (unsigned int)v20 >= useSkillIdList->max_length )
        goto LABEL_71;
      v21 = useSkillIdList->m_Items[v20 + 1];
      v22 = (ServantSkillInfoIconComponent_o *)selectSkillInfo;
      if ( this->fields.switchIdxType == 2 )
      {
        selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
        if ( !selectSkillInfo )
          goto LABEL_31;
        Item = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                 (System_Collections_Generic_List_T__o *)selectSkillInfo,
                 this->fields.switchIdx,
                 (const MethodInfo_35AE72C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
        Item2 = Item.fields.Item2;
        selectSkillInfo = (__int64)Item.fields.Item1;
        if ( !Item.fields.Item2 )
          goto LABEL_31;
        v24 = *(int *)(v13 + 16);
        if ( (unsigned int)v24 >= LODWORD(Item.fields.Item2[1].monitor) )
          goto LABEL_71;
        if ( *((int *)&Item.fields.Item2[2].klass + v24) >= 1 )
        {
          selectSkillInfo = (__int64)this->fields.switchSkillIdsList;
          if ( !selectSkillInfo )
            goto LABEL_31;
          v25 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                  (System_Collections_Generic_List_T__o *)selectSkillInfo,
                  this->fields.switchIdx,
                  (const MethodInfo_35AE72C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
          Item2 = v25.fields.Item2;
          selectSkillInfo = (__int64)v25.fields.Item1;
          if ( !v25.fields.Item2 )
            goto LABEL_31;
          v26 = *(int *)(v13 + 16);
          if ( (unsigned int)v26 >= LODWORD(v25.fields.Item2[1].monitor) )
            goto LABEL_71;
          v21 = *((_DWORD *)&v25.fields.Item2[2].klass + v26);
        }
      }
      if ( v22 )
      {
        ServantSkillInfoIconComponent__SetDispSelectMskImg(v22, v21 == v22->fields.currentSkillId, 0LL);
        selectSkillInfo = (__int64)this->fields.targetList;
        ++v18;
        if ( selectSkillInfo )
          continue;
      }
      goto LABEL_31;
    }
    displayTransformIndex = this->fields.displayTransformIndex;
    v28 = (struct SetLevelUpData_array *)sub_1B86460(
                                           SetLevelUpData___TypeInfo,
                                           (unsigned int)this->fields.transformTotal);
    p_lvUpDataList = &this->fields.lvUpDataList;
    this->fields.lvUpDataList = v28;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.lvUpDataList, (int32_t)v28, v30, v31);
    if ( this->fields.transformTotal >= 1 )
    {
      v33 = 0;
      v34 = 32LL;
      while ( 1 )
      {
        selectSkillInfo = (__int64)this->fields.baseUserServantEntity;
        if ( !selectSkillInfo )
          break;
        selectSkillInfo = UserServantEntity__GetTransformedServantInfo(
                            (UserServantEntity_o *)selectSkillInfo,
                            &transformInfo,
                            v33,
                            0LL);
        skillDataList = this->fields.skillDataList;
        if ( !skillDataList )
          break;
        if ( v33 >= skillDataList->max_length )
          goto LABEL_71;
        v37 = *(__int64 *)((char *)&skillDataList->obj.klass + v34);
        if ( !v37 )
          break;
        v38 = *(_QWORD *)(v37 + 16);
        if ( !v38 )
          break;
        Item2 = (Il2CppObject *)*(int *)(v13 + 16);
        if ( (unsigned int)Item2 >= *(_DWORD *)(v38 + 24) )
          goto LABEL_71;
        v39 = *(_QWORD *)(v37 + 24);
        if ( !v39 )
          break;
        if ( (unsigned int)Item2 >= *(_DWORD *)(v39 + 24) )
          goto LABEL_71;
        if ( !transformInfo )
          break;
        v40 = *p_lvUpDataList;
        selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                     this,
                                     (int32_t)Item2,
                                     *(_DWORD *)(v38 + 4LL * (_QWORD)Item2 + 32),
                                     *(_DWORD *)(v39 + 4LL * (_QWORD)Item2 + 32),
                                     transformInfo->fields.titleText,
                                     v35);
        if ( !v40 )
          break;
        v43 = selectSkillInfo;
        if ( selectSkillInfo )
        {
          selectSkillInfo = sub_1B864F4(selectSkillInfo, v40->obj.klass->_1.element_class);
          if ( !selectSkillInfo )
          {
LABEL_72:
            v67 = sub_1B86638(selectSkillInfo);
            sub_1B864E0(v67, 0LL);
          }
        }
        if ( v33 >= v40->max_length )
          goto LABEL_71;
        *(Il2CppClass **)((char *)&v40->obj.klass + v34) = (Il2CppClass *)v43;
        sub_1B8635C((CGThumbnailListItem_o *)((char *)v40 + v34), v43, v41, v42);
        ++v33;
        v34 += 8LL;
        if ( (signed int)v33 >= this->fields.transformTotal )
          goto LABEL_48;
      }
LABEL_31:
      sub_1B86614(selectSkillInfo, Item2);
    }
LABEL_48:
    if ( this->fields.switchIdxType == 2 )
    {
      switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.switchSkillIdsList;
      v45 = (System_Predicate_T__o *)sub_1B86604(System_Predicate_ValueTuple_string__int_____TypeInfo);
      System_Predicate_ValueTuple_object__object_____ctor(
        v45,
        (Il2CppObject *)v13,
        Method_SkillCombineControl___c__DisplayClass51_0__SetNeedItemInfo_b__0__,
        0LL);
      if ( !switchSkillIdsList )
        goto LABEL_31;
      All = System_Collections_Generic_List_ValueTuple_object__object____FindAll(
              switchSkillIdsList,
              v45,
              (const MethodInfo_35AF190 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____FindAll__);
      selectSkillInfo = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)All, 0LL);
      if ( (selectSkillInfo & 1) == 0 )
      {
        if ( !All )
          goto LABEL_31;
        v47 = sub_1B86460(SetLevelUpData___TypeInfo, (unsigned int)All->fields._size);
        *p_lvUpDataList = (struct SetLevelUpData_array *)v47;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.lvUpDataList, v47, v48, v49);
        if ( All->fields._size >= 1 )
        {
          v50 = 0LL;
          v51 = 32LL;
          do
          {
            v52 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                    All,
                    v50,
                    (const MethodInfo_35AE72C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
            Item2 = v52.fields.Item2;
            selectSkillInfo = (__int64)v52.fields.Item1;
            if ( !v52.fields.Item2 )
              goto LABEL_31;
            v53 = *(int *)(v13 + 16);
            if ( (unsigned int)v53 >= LODWORD(v52.fields.Item2[1].monitor) )
              goto LABEL_71;
            v54 = this->fields.skillDataList;
            if ( !v54 )
              goto LABEL_31;
            v55 = this->fields.displayTransformIndex;
            if ( (unsigned int)v55 >= v54->max_length )
              goto LABEL_71;
            v56 = v54->m_Items[v55];
            if ( !v56 )
              goto LABEL_31;
            svtSkillLvList = v56->fields.svtSkillLvList;
            if ( !svtSkillLvList )
              goto LABEL_31;
            if ( (unsigned int)v53 >= svtSkillLvList->max_length )
              goto LABEL_71;
            lvUpDataList = this->fields.lvUpDataList;
            v59 = *((_DWORD *)&v52.fields.Item2[2].klass + v53);
            v60 = svtSkillLvList->m_Items[v53 + 1];
            Item1 = System_Collections_Generic_List_ValueTuple_object__object____get_Item(
                      All,
                      v50,
                      (const MethodInfo_35AE72C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__).fields.Item1;
            selectSkillInfo = (__int64)SkillCombineControl__CreateLeveUpData(
                                         this,
                                         v53,
                                         v59,
                                         v60,
                                         (System_String_o *)Item1,
                                         v62);
            if ( !lvUpDataList )
              goto LABEL_31;
            v65 = (Il2CppClass *)selectSkillInfo;
            if ( selectSkillInfo )
            {
              selectSkillInfo = sub_1B864F4(selectSkillInfo, lvUpDataList->obj.klass->_1.element_class);
              if ( !selectSkillInfo )
                goto LABEL_72;
            }
            if ( v50 >= lvUpDataList->max_length )
              goto LABEL_71;
            *(Il2CppClass **)((char *)&lvUpDataList->obj.klass + v51) = v65;
            sub_1B8635C((CGThumbnailListItem_o *)((char *)lvUpDataList + v51), (int32_t)v65, v63, v64);
            ++v50;
            v51 += 8LL;
          }
          while ( (__int64)v50 < All->fields._size );
        }
      }
      displayTransformIndex = 0;
    }
    v66 = *p_lvUpDataList;
    if ( !*p_lvUpDataList )
      goto LABEL_31;
    if ( displayTransformIndex >= v66->max_length )
LABEL_71:
      sub_1B8661C(selectSkillInfo, Item2);
    SkillCombineControl__SetSvtSkillCombineData(this, v66->m_Items[displayTransformIndex], v32);
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetStateInfoMsg(
        SkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4A52449 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1B863B8(&LocalizationManager_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_7310/*"INFO_MSG_SKILLUP"*/, v6);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A52449 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_12;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_12;
  v9.fields.r = 0.0;
  v9.fields.a = 1.0;
  v9.fields.g = 0.87891;
  v9.fields.b = 0.98828;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v9, 0LL);
  if ( v3 )
  {
    *(_QWORD *)&state = StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7310/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_12:
    sub_1B86614(detailInfoLb, *(_QWORD *)&state);
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        SetLevelUpData_o *setLvUpData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *itemInfoList; // x0
  int32_t v16; // w20
  UIWidget_o *v17; // x20
  System_Collections_Generic_List_object__o *v18; // x21
  UILabel_o *qpLb; // x23
  struct System_Int32_array *combineItemIds; // x27
  struct System_Int32_array *combineItemNums; // x28
  unsigned __int64 v22; // x23
  int32_t *v23; // x29
  int32_t *v24; // x24
  signed __int64 v25; // x21
  char v26; // w26
  System_Collections_Generic_List_object__o *v27; // x22
  const MethodInfo *v28; // x1
  int32_t haveQpVal; // w8
  int32_t spendQpVal; // w9
  System_String_o *v31; // x22
  System_String_o *v32; // [xsp+8h] [xbp-68h]
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A52446 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIWidget___, setLvUpData);
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v6);
    sub_1B863B8(&LocalizationManager_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_5727/*"EXE_SUMMON_COMBINE_TXT"*/, v8);
    sub_1B863B8(&StringLiteral_17443/*"buttontxt_synthesis"*/, v9);
    sub_1B863B8(&StringLiteral_9084/*"N0"*/, v10);
    sub_1B863B8(&StringLiteral_11979/*"SHORT_ITEM_INFO_MSG"*/, v11);
    sub_1B863B8(&StringLiteral_11980/*"SHORT_QP_INFO_MSG"*/, v12);
    sub_1B863B8(&StringLiteral_17440/*"buttontxt_notsynthesis"*/, v13);
    sub_1B863B8(&StringLiteral_1139/*"0"*/, v14);
    byte_4A52446 = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_8;
  v16 = 0;
  while ( v16 < itemInfoList->fields._size )
  {
    itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemInfoList,
                                                                  v16,
                                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( itemInfoList )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)itemInfoList, 0LL);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
      ++v16;
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
                                                                (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !itemInfoList )
    goto LABEL_8;
  v33.fields.r = 0.0;
  v33.fields.a = 1.0;
  v33.fields.g = 0.87891;
  v33.fields.b = 0.98828;
  v17 = (UIWidget_o *)itemInfoList;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v33, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5727/*"EXE_SUMMON_COMBINE_TXT"*/,
                                                                0LL);
  if ( !setLvUpData )
    goto LABEL_8;
  if ( setLvUpData->fields.currentLv < setLvUpData->fields.maxLv )
  {
    v18 = itemInfoList;
    itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
    if ( itemInfoList )
    {
      UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17443/*"buttontxt_synthesis"*/, 0LL);
      itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
      if ( itemInfoList )
      {
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))itemInfoList->klass->vtable._33_get_Item.method)(
          itemInfoList,
          itemInfoList->klass->vtable._34_get_Count.methodPtr);
        qpLb = this->fields.qpLb;
        this->fields.spendQpVal = setLvUpData->fields.spendQp;
        itemInfoList = (System_Collections_Generic_List_object__o *)System_Int32__ToString_63159428(
                                                                      (int)this + 316,
                                                                      (System_String_o *)StringLiteral_9084/*"N0"*/,
                                                                      0LL);
        if ( qpLb )
        {
          v32 = (System_String_o *)v18;
          UILabel__set_text(qpLb, (System_String_o *)itemInfoList, 0LL);
          combineItemIds = setLvUpData->fields.combineItemIds;
          if ( combineItemIds )
          {
            combineItemNums = setLvUpData->fields.combineItemNums;
            v22 = 0LL;
            v23 = &combineItemIds->m_Items[1];
            v24 = &combineItemNums->m_Items[1];
            v25 = combineItemIds->max_length - 1;
            v26 = 1;
            do
            {
              if ( (__int64)v22 <= v25 )
              {
                itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                itemInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              itemInfoList,
                                                                              v22,
                                                                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
                if ( v22 >= combineItemIds->max_length )
                  goto LABEL_47;
                if ( !combineItemNums )
                  goto LABEL_8;
                if ( v22 >= combineItemNums->max_length )
                  goto LABEL_47;
                v27 = itemInfoList;
                if ( !itemInfoList )
                  goto LABEL_8;
                LimitCntUpItemComponent__setLimitUpItemInfo(
                  (LimitCntUpItemComponent_o *)itemInfoList,
                  this->fields.userId,
                  v23[v22],
                  v24[v22],
                  0LL);
                if ( v22 >= combineItemIds->max_length || v22 >= combineItemNums->max_length )
LABEL_47:
                  sub_1B8661C(itemInfoList, setLvUpData);
                CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, v23[v22], v24[v22], 0LL);
                v26 &= LOBYTE(v27[2].fields._syncRoot) != 0;
              }
              ++v22;
            }
            while ( v22 != 5 );
            itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
            if ( itemInfoList )
            {
              v34.fields.r = 1.0;
              v34.fields.g = 1.0;
              v34.fields.b = 1.0;
              v34.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)itemInfoList, v34, 0LL);
              haveQpVal = this->fields.haveQpVal;
              spendQpVal = this->fields.spendQpVal;
              this->fields._IsExeCombine_k__BackingField = 1;
              v31 = v32;
              if ( haveQpVal < spendQpVal )
              {
                v35.fields.r = 1.0;
                v35.fields.g = 1.0;
                v35.fields.b = 1.0;
                v35.fields.a = 1.0;
                UIWidget__set_color(v17, v35, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                itemInfoList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_11980/*"SHORT_QP_INFO_MSG"*/,
                                                                              0LL);
                if ( !this->fields.qpLb )
                  goto LABEL_8;
                v31 = (System_String_o *)itemInfoList;
                v36.fields.r = 1.0;
                v36.fields.g = 0.0;
                v36.fields.b = 0.0;
                v36.fields.a = 1.0;
                UIWidget__set_color((UIWidget_o *)this->fields.qpLb, v36, 0LL);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              if ( (v26 & 1) == 0 )
              {
                v37.fields.r = 1.0;
                v37.fields.g = 1.0;
                v37.fields.b = 1.0;
                v37.fields.a = 1.0;
                UIWidget__set_color(v17, v37, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11979/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
                this->fields._IsExeCombine_k__BackingField = 0;
              }
              SkillCombineControl__SetExeBtnState(this, v28);
              itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.detailInfoLb;
              if ( itemInfoList )
              {
                UILabel__set_text((UILabel_o *)itemInfoList, v31, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_8:
    sub_1B86614(itemInfoList, setLvUpData);
  }
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, (const MethodInfo *)setLvUpData);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  UILabel__set_text((UILabel_o *)itemInfoList, (System_String_o *)StringLiteral_1139/*"0"*/, 0LL);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.qpLb;
  if ( !itemInfoList )
    goto LABEL_8;
  v38.fields.r = 1.0;
  v38.fields.g = 1.0;
  v38.fields.b = 1.0;
  v38.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)itemInfoList, v38, 0LL);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  UISprite__set_spriteName((UISprite_o *)itemInfoList, (System_String_o *)StringLiteral_17440/*"buttontxt_notsynthesis"*/, 0LL);
  itemInfoList = (System_Collections_Generic_List_object__o *)this->fields.combineTxtImg;
  if ( !itemInfoList )
    goto LABEL_8;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))itemInfoList->klass->vtable._33_get_Item.method)(
    itemInfoList,
    itemInfoList->klass->vtable._34_get_Count.methodPtr);
}


void __fastcall SkillCombineControl__SetTitleText(SkillCombineControl_o *this, const MethodInfo *method)
{
  int32_t switchIdxType; // w8
  System_Collections_Generic_List_T__o *switchSkillIdsList; // x0
  System_String_o *Item1; // x1
  struct UILabel_o *condTitleLabel; // x20
  System_ValueTuple_object__object__o Item; // kr00_16
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A52442 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__, method);
    byte_4A52442 = 1;
  }
  transformInfo = 0LL;
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
               (const MethodInfo_35AE72C *)Method_System_Collections_Generic_List_ValueTuple_string__int_____get_Item__);
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
    sub_1B86614(switchSkillIdsList, method);
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
                                                                 0LL);
  if ( !transformInfo )
    goto LABEL_14;
  switchSkillIdsList = (System_Collections_Generic_List_T__o *)this->fields.condTitleLabel;
  if ( !switchSkillIdsList )
    goto LABEL_14;
  Item1 = transformInfo->fields.titleText;
LABEL_12:
  UILabel__set_text((UILabel_o *)switchSkillIdsList, Item1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillCombineControl__TrySetSwitchSkillIdsList(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_T__o *v14; // x21
  System_Collections_ICollection_o **p_switchSkillIdsList; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UserServantEntity_o *baseUserServantEntity; // x0
  struct SvtUseSkillData_array *skillDataList; // x8
  __int64 displayTransformIndex; // x9
  SkillCombineControl_o *v21; // x19
  SvtUseSkillData_o *v22; // x11
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *v24; // x28
  unsigned __int64 v25; // x29
  unsigned __int64 max_length; // x9
  struct UserServantEntity_o *v27; // x10
  int32_t svtId; // w23
  int32_t v29; // w22
  __int64 v30; // x24
  __int64 v31; // x25
  int32_t v32; // w2
  int *currentCryptoKey; // x8
  ServantSkillAddEntity_o *v34; // x22
  unsigned __int64 v35; // x19
  __int64 v36; // x24
  const MethodInfo *v37; // x3
  struct System_String_array *titles; // x8
  System_Collections_ICollection_o *v39; // x25
  System_Predicate_T__o *v40; // x26
  System_ValueTuple_object__object__o v41; // kr00_16
  Il2CppObject *v42; // x23
  BalanceConfig_c *v43; // x0
  Il2CppObject *v44; // x2
  const MethodInfo_394893C *v45; // x4
  const MethodInfo *v46; // x3
  System_Collections_ICollection_c *v47; // x8
  _QWORD *v48; // x9
  __int64 hiddenValue_low; // x10
  char *v50; // x8
  struct System_Int32_array *skillIds; // x9
  UIWidget_o *condTitleLabel; // x23
  int v53; // s0
  UIWidget_o *condTitleSprite; // x23
  int v58; // s0
  SvtUseSkillData_o *v63; // [xsp+0h] [xbp-A0h]
  ServantSkillAddMaster_o *v64; // [xsp+8h] [xbp-98h]
  System_ValueTuple_object__object__o v66; // [xsp+18h] [xbp-88h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+28h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  System_ValueTuple_object__object__o v69; // 0:x0.16
  System_ValueTuple_object__object__o v70; // 0:x1.16
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A52443 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantSkillAddMaster___, v2);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&int___TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B863B8(&System_Predicate_ValueTuple_string__int_____TypeInfo, v10);
    sub_1B863B8(&Method_SkillCombineControl___c__DisplayClass48_0__TrySetSwitchSkillIdsList_b__0__, v11);
    sub_1B863B8(&SkillCombineControl___c__DisplayClass48_0_TypeInfo, v12);
    sub_1B863B8(&Method_System_ValueTuple_string__int_____ctor__, v13);
    byte_4A52443 = 1;
  }
  v66.fields.Item2 = 0LL;
  transformInfo = 0LL;
  v66.fields.Item1 = 0LL;
  v14 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ValueTuple_string__int_____TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v14,
    (const MethodInfo_35AE1C8 *)Method_System_Collections_Generic_List_ValueTuple_string__int______ctor__);
  p_switchSkillIdsList = (System_Collections_ICollection_o **)&this->fields.switchSkillIdsList;
  this->fields.switchSkillIdsList = (struct System_Collections_Generic_List_ValueTuple_string__int_____o *)v14;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.switchSkillIdsList, (int32_t)v14, v16, v17);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_51;
  UserServantEntity__GetTransformedServantInfo(
    baseUserServantEntity,
    &transformInfo,
    this->fields.displayTransformIndex,
    0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  skillDataList = this->fields.skillDataList;
  v64 = (ServantSkillAddMaster_o *)baseUserServantEntity;
  if ( !skillDataList )
    goto LABEL_51;
  displayTransformIndex = this->fields.displayTransformIndex;
  v21 = this;
  if ( (unsigned int)displayTransformIndex >= skillDataList->max_length )
LABEL_53:
    sub_1B8661C(baseUserServantEntity, v70.fields.Item1);
  v22 = skillDataList->m_Items[displayTransformIndex];
  if ( !v22 || (svtUseSkillIdList = v22->fields.svtUseSkillIdList) == 0LL )
LABEL_51:
    sub_1B86614(baseUserServantEntity, v70.fields.Item1);
  v24 = 0LL;
  v25 = 0LL;
  v63 = v22;
  while ( 1 )
  {
    max_length = svtUseSkillIdList->max_length;
    if ( (__int64)v25 >= (int)max_length )
      return !BasicHelper__IsNullOrEmpty(*p_switchSkillIdsList, 0LL);
    if ( v25 >= max_length )
      goto LABEL_53;
    if ( !transformInfo )
      goto LABEL_51;
    v27 = v21->fields.baseUserServantEntity;
    if ( !v27 )
      goto LABEL_51;
    svtId = transformInfo->fields.svtId;
    v29 = svtUseSkillIdList->m_Items[v25 + 1];
    v31 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
    v30 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v68.fields.currentCryptoKey = v31;
    *(_QWORD *)&v68.fields.fakeValue = v30;
    baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                     v68,
                                                     0LL);
    if ( !transformInfo )
      goto LABEL_51;
    v32 = (int)baseUserServantEntity;
    baseUserServantEntity = (UserServantEntity_o *)v64;
    if ( !v64 )
      goto LABEL_51;
    baseUserServantEntity = (UserServantEntity_o *)ServantSkillAddMaster__GetEnableEntity(
                                                     v64,
                                                     svtId,
                                                     v32,
                                                     v29,
                                                     0,
                                                     transformInfo->fields.dispLimitCount,
                                                     1,
                                                     0LL);
    if ( baseUserServantEntity )
    {
      currentCryptoKey = (int *)baseUserServantEntity->fields.userId.fields.currentCryptoKey;
      v34 = (ServantSkillAddEntity_o *)baseUserServantEntity;
      if ( !currentCryptoKey )
        goto LABEL_51;
      v35 = 0LL;
      while ( (__int64)v35 < currentCryptoKey[6] )
      {
        v36 = sub_1B86604(SkillCombineControl___c__DisplayClass48_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v36, 0LL);
        titles = v34->fields.titles;
        if ( !titles )
          goto LABEL_51;
        if ( v35 >= titles->max_length )
          goto LABEL_53;
        if ( !v36 )
          goto LABEL_51;
        v70.fields.Item1 = (Il2CppObject *)titles->m_Items[v35];
        *(_QWORD *)(v36 + 16) = v70.fields.Item1;
        sub_1B8635C((CGThumbnailListItem_o *)(v36 + 16), (int32_t)v70.fields.Item1, (int32_t)v70.fields.Item2, v37);
        v39 = *p_switchSkillIdsList;
        v40 = (System_Predicate_T__o *)sub_1B86604(System_Predicate_ValueTuple_string__int_____TypeInfo);
        System_Predicate_ValueTuple_object__object_____ctor(
          v40,
          (Il2CppObject *)v36,
          Method_SkillCombineControl___c__DisplayClass48_0__TrySetSwitchSkillIdsList_b__0__,
          0LL);
        if ( !v39 )
          goto LABEL_51;
        v41 = System_Collections_Generic_List_ValueTuple_object__object____Find(
                (System_Collections_Generic_List_T__o *)v39,
                v40,
                (const MethodInfo_35AF0D4 *)Method_System_Collections_Generic_List_ValueTuple_string__int_____Find__);
        v66 = v41;
        baseUserServantEntity = (UserServantEntity_o *)System_String__op_Equality(
                                                         (System_String_o *)v41.fields.Item1,
                                                         0LL,
                                                         0LL);
        if ( !v41.fields.Item2 && ((unsigned __int8)baseUserServantEntity & 1) != 0 )
        {
          v42 = *(Il2CppObject **)(v36 + 16);
          v43 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v43 = BalanceConfig_TypeInfo;
          }
          v44 = (Il2CppObject *)sub_1B86460(int___TypeInfo, (unsigned int)v43->static_fields->SvtSkillListMax);
          v69.fields.Item1 = (Il2CppObject *)&v66;
          v69.fields.Item2 = v42;
          System_ValueTuple_object__object____ctor(
            v69,
            v44,
            (Il2CppObject *)Method_System_ValueTuple_string__int_____ctor__,
            v45);
          baseUserServantEntity = (UserServantEntity_o *)*p_switchSkillIdsList;
          if ( !*p_switchSkillIdsList )
            goto LABEL_51;
          v70 = v66;
          v47 = (System_Collections_ICollection_c *)baseUserServantEntity->fields.id.fields.currentCryptoKey;
          v48 = Method_System_Collections_Generic_List_ValueTuple_string__int_____Add__;
          ++HIDWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( !v47 )
            goto LABEL_51;
          hiddenValue_low = SLODWORD(baseUserServantEntity->fields.id.fields.hiddenValue);
          if ( (unsigned int)hiddenValue_low >= LODWORD(v47->_1.namespaze) )
          {
            System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
              (System_Collections_Generic_List_T__o *)baseUserServantEntity,
              v70,
              *(const MethodInfo_35AEA48 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = (char *)v47 + 16 * hiddenValue_low;
            LODWORD(baseUserServantEntity->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
            *((System_ValueTuple_object__object__o *)v50 + 2) = v70;
            sub_1B8635C((CGThumbnailListItem_o *)(v50 + 32), 0, (int32_t)v70.fields.Item2, v46);
          }
        }
        skillIds = v34->fields.skillIds;
        if ( skillIds )
          v24 = v34->fields.skillIds;
        if ( skillIds )
        {
          if ( !v24 )
            goto LABEL_51;
          if ( v35 >= v24->max_length )
            goto LABEL_53;
          LODWORD(skillIds) = v24->m_Items[v35 + 1];
        }
        if ( !v66.fields.Item2 )
          goto LABEL_51;
        if ( v25 >= LODWORD(v66.fields.Item2[1].monitor) )
          goto LABEL_53;
        *((_DWORD *)&v66.fields.Item2[2].klass + v25) = (_DWORD)skillIds;
        currentCryptoKey = (int *)v34->fields.titles;
        ++v35;
        if ( !currentCryptoKey )
          goto LABEL_51;
      }
      v21 = this;
      v71.fields.r = 1.0;
      v71.fields.g = 1.0;
      v71.fields.b = 1.0;
      condTitleLabel = (UIWidget_o *)this->fields.condTitleLabel;
      v71.fields.a = 1.0;
      *(UnityEngine_Color_o *)&v53 = ServantSkillAddEntity__GetCondLabelColor(v34, v71, 0LL);
      if ( !condTitleLabel )
        goto LABEL_51;
      UIWidget__set_color(condTitleLabel, *(UnityEngine_Color_o *)&v53, 0LL);
      condTitleSprite = (UIWidget_o *)this->fields.condTitleSprite;
      v72.fields.r = 0.0;
      v72.fields.a = 1.0;
      v72.fields.g = 0.33333;
      v72.fields.b = 0.8;
      *(UnityEngine_Color_o *)&v58 = ServantSkillAddEntity__GetCondSpriteColor(v34, v72, 0LL);
      if ( !condTitleSprite )
        goto LABEL_51;
      UIWidget__set_color(condTitleSprite, *(UnityEngine_Color_o *)&v58, 0LL);
    }
    else
    {
      v21 = this;
    }
    ++v25;
    svtUseSkillIdList = v63->fields.svtUseSkillIdList;
    if ( !svtUseSkillIdList )
      goto LABEL_51;
  }
}


UnityEngine_Color_o __fastcall SkillCombineControl__get_DefaultCondTitleLabelColor(const MethodInfo *method)
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


UnityEngine_Color_o __fastcall SkillCombineControl__get_DefaultCondTitleSpriteColor(const MethodInfo *method)
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


bool __fastcall SkillCombineControl__get_IsSkillSwitchable(SkillCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.switchIdxType != 0;
}


void __fastcall SkillCombineControl___c__DisplayClass48_0___ctor(
        SkillCombineControl___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SkillCombineControl___c__DisplayClass48_0___TrySetSwitchSkillIdsList_b__0(
        SkillCombineControl___c__DisplayClass48_0_o *this,
        System_ValueTuple_string__int____o x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x.fields.Item1, this->fields.title, 0LL);
}


void __fastcall SkillCombineControl___c__DisplayClass51_0___ctor(
        SkillCombineControl___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SkillCombineControl___c__DisplayClass51_0___SetNeedItemInfo_b__0(
        SkillCombineControl___c__DisplayClass51_0_o *this,
        System_ValueTuple_string__int____o x,
        const MethodInfo *method)
{
  __int64 idx; // x8

  if ( !x.fields.Item2 )
    sub_1B86614(this, x.fields.Item1);
  idx = this->fields.idx;
  if ( (unsigned int)idx >= x.fields.Item2->max_length )
    sub_1B8661C(this, x.fields.Item1);
  return x.fields.Item2->m_Items[idx + 1] > 0;
}