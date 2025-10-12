void LimitCntUpControl___ctor(LimitCntUpControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B92E & 1) == 0 )
  {
    sub_1C32C20(&CombineMenuControl_TypeInfo);
    byte_4C3B92E = 1;
  }
  *(_OWORD *)&this->fields.unSealedQuestTransitionBtnPosCenter.fields.x = xmmword_C0C2A0;
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


void LimitCntUpControl__CheckConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  const MethodInfo *v4; // x1
  UILabel_o *conductionInfoLabel; // x20
  UILabel_o *conductionButtonLabel; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *sealCombineLimitText; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x21
  struct UserServantEntity_o *v17; // x8
  ServantLimitImageMaster_o *v18; // x20
  __int64 v19; // x21
  __int64 v20; // x22
  struct UserServantEntity_o *v21; // x8
  int32_t v22; // w21
  const MethodInfo *v23; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-40h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C3B921 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&StringLiteral_3714/*"CONDUCTION_COMBINE"*/);
    sub_1C32C20(&StringLiteral_11513/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/);
    sub_1C32C20(&StringLiteral_3715/*"CONDUCTION_COMBINE_MSG"*/);
    byte_4C3B921 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0);
  if ( !this->fields.baseData )
    return;
  if ( !this->fields._IsExeCombine_k__BackingField && !this->fields.isMaxLv )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_35;
    CombineInfoComponent__HideResStatusInfo((CombineInfoComponent_o *)conductionWireInfo, v4);
    conductionInfoLabel = this->fields.conductionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"CONDUCTION_COMBINE_MSG"*/, 0);
    if ( !conductionInfoLabel )
      goto LABEL_35;
    UILabel__set_text(conductionInfoLabel, (System_String_o *)conductionWireInfo, 0);
    conductionButtonLabel = this->fields.conductionButtonLabel;
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3714/*"CONDUCTION_COMBINE"*/, 0);
    if ( !conductionButtonLabel )
      goto LABEL_35;
    UILabel__set_text(conductionButtonLabel, (System_String_o *)conductionWireInfo, 0);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0);
  }
  if ( this->fields.isSealCombineLimit )
  {
    conductionWireInfo = this->fields.sealCombineLimitTextObj;
    if ( !conductionWireInfo )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_35;
    sealCombineLimitText = this->fields.sealCombineLimitText;
    svtId = baseData->fields.svtId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(
                            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                            &svtId,
                            v7,
                            v8,
                            v9,
                            v10,
                            v11,
                            v12);
    v16 = System_String__Format((System_String_o *)StringLiteral_11513/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v15, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v16, 0);
    if ( !sealCombineLimitText )
      goto LABEL_35;
    UILabel__set_text(sealCombineLimitText, (System_String_o *)conductionWireInfo, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v17 = this->fields.baseData;
  if ( !v17 )
    goto LABEL_35;
  v18 = (ServantLimitImageMaster_o *)conductionWireInfo;
  v20 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v20;
  *(_QWORD *)&v25.fields.fakeValue = v19;
  conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                     v25,
                                                     0);
  v21 = this->fields.baseData;
  if ( !v21 )
    goto LABEL_35;
  v22 = (int)conductionWireInfo;
  conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                     v21->fields.limitCount,
                                                     0);
  if ( !v18 )
    goto LABEL_35;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(v18, v22, (int32_t)conductionWireInfo, 0) )
    return;
  conductionWireInfo = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !conductionWireInfo )
LABEL_35:
    sub_1C32E7C(conductionWireInfo);
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)conductionWireInfo, 0) )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( conductionWireInfo )
    {
      if ( !BYTE5(conductionWireInfo[7].monitor) )
        return;
      goto LABEL_33;
    }
    goto LABEL_35;
  }
LABEL_33:
  LimitCntUpControl__SetUnSealedQuestTransitionBtnState(this, v23);
}


void LimitCntUpControl__CheckIsSelectBaseSvt(
        LimitCntUpControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  bool v11; // w8
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+40h] [xbp-40h]

  if ( (byte_4C3B920 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3B920 = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v15.fields.fakeValue = v7;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v14 = v15;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v14, 0);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v13, 0) )
        LimitCntUpControl__InitItemInfo(this, v10);
    }
    v11 = 1;
  }
  else
  {
    LimitCntUpControl__InitItemInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0);
    v11 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, (int32_t)method, v3);
}


bool LimitCntUpControl__CheckItemHaveNum(LimitCntUpControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemInfoList_k__BackingField; // x0
  int32_t v4; // w20
  int32_t size; // w22

  if ( (byte_4C3B923 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_4C3B923 = 1;
  }
  itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_9:
    sub_1C32E7C(itemInfoList_k__BackingField);
  v4 = 0;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( v4 >= size )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  itemInfoList_k__BackingField,
                                                                                  v4,
                                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
    if ( !LOBYTE(itemInfoList_k__BackingField[2].fields._syncRoot) )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
    ++v4;
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
  }
  return v4 >= size;
}


int32_t LimitCntUpControl__GetTutorialOpenType(LimitCntUpControl_o *this, const MethodInfo *method)
{
  return 36;
}


System_Action_o *LimitCntUpControl__GetUnSealedQuestTransitionAction(
        LimitCntUpControl_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ServantLimitImageMaster_o *Master_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_String_o *MasterName_k__BackingField; // x1
  System_Action_o *v12; // x19

  if ( (byte_4C3B92B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&Method_LimitCntUpControl___c__DisplayClass66_0__GetUnSealedQuestTransitionAction_b__0__);
    sub_1C32C20(&LimitCntUpControl___c__DisplayClass66_0_TypeInfo);
    byte_4C3B92B = 1;
  }
  v7 = sub_1C32E6C(LimitCntUpControl___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = (ServantLimitImageMaster_o *)ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(
                                                 Master_object,
                                                 svtId,
                                                 limitCount,
                                                 0);
  if ( !v7 )
    goto LABEL_16;
  *(_DWORD *)(v7 + 16) = (_DWORD)Master_object;
  Master_object = (ServantLimitImageMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = (ServantLimitImageMaster_o *)QuestTree__GetQuestInfo(
                                                 (QuestTree_o *)Master_object,
                                                 *(_DWORD *)(v7 + 16),
                                                 0);
  MasterName_k__BackingField = 0;
  if ( Master_object )
  {
    Master_object = (ServantLimitImageMaster_o *)MapControl_QuestInfo__GetMine(
                                                   (MapControl_QuestInfo_o *)Master_object,
                                                   0);
    if ( !Master_object )
      goto LABEL_16;
    MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  }
  if ( !this
    || (this->fields.questName = MasterName_k__BackingField,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questName, (int32_t)MasterName_k__BackingField, v9, v10),
        (Master_object = (ServantLimitImageMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__)) == 0) )
  {
LABEL_16:
    sub_1C32E7C(Master_object);
  }
  this->fields.isQuestOpen = clsQuestCheck__CheckQuestPlayableNow(
                               (clsQuestCheck_o *)Master_object,
                               *(_DWORD *)(v7 + 16),
                               0,
                               0);
  if ( !*(_DWORD *)(v7 + 16) )
    return 0;
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_LimitCntUpControl___c__DisplayClass66_0__GetUnSealedQuestTransitionAction_b__0__,
    0);
  return v12;
}


void LimitCntUpControl__InitItemInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UILabel_o *qpLb; // x20
  void *transform; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int v10; // w21
  int32_t v11; // w20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B91E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B91E = 1;
  }
  LimitCntUpControl__SetHaveQpIno(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  transform = System_Int32__ToString((int)this + 416, 0);
  if ( !qpLb )
    goto LABEL_27;
  UILabel__set_text(qpLb, (System_String_o *)transform, 0);
  transform = this->fields.qpLb;
  if ( !transform )
    goto LABEL_27;
  v15.fields.r = 1.0;
  v15.fields.g = 1.0;
  v15.fields.b = 1.0;
  v15.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)transform, v15, 0);
  transform = this->fields.qpLb;
  if ( !transform )
    goto LABEL_27;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_27;
  transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
  if ( !transform )
    goto LABEL_27;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  transform = this->fields.sealCombineLimitTextObj;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !transform )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v5);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    transform = this->fields.charaGraph;
    if ( !transform )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.charaGraph, 0, v8, v9);
  }
  transform = this->fields.limitCntUpItemList;
  if ( !transform )
LABEL_27:
    sub_1C32E7C(transform);
  v10 = *((_DWORD *)transform + 6);
  if ( v10 >= 1 )
  {
    v11 = 0;
    do
    {
      transform = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)transform,
                    v11,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !transform )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)transform, v12);
      if ( v10 == ++v11 )
        goto LABEL_24;
      transform = this->fields.limitCntUpItemList;
    }
    while ( transform );
    goto LABEL_27;
  }
LABEL_24:
  transform = this->fields.unSealedQuestTransitionBtnObj;
  if ( !transform )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  LimitCntUpControl__InitUnSealedConditionText(this, v13);
  transform = this->fields.combineInfoComp;
  if ( !transform )
    goto LABEL_27;
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)transform, 1, v14);
}


void LimitCntUpControl__InitLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UILabel_o *preSelectBaseLb; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v12; // x0
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3B91D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8803/*"MSG_PRESELECT_BASE_LIMIT"*/);
    byte_4C3B91D = 1;
  }
  memset(&v15, 0, sizeof(v15));
  EventTutorialMaster__CheckTutorial(0, 36, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  this->fields.isSelectBase = 0;
  LimitCntUpControl__InitItemInfo(this, v3);
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0);
  sealCombineLimitTextObj = this->fields.unSealedQuestTransitionBtnObj;
  this->fields.isSealCombineLimit = 0;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v5);
  LimitCntUpControl__InitUnSealedConditionText(this, v6);
  sealCombineLimitTextObj = (UnityEngine_GameObject_o *)this->fields.eventNoticeImg;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  sealCombineLimitTextObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sealCombineLimitTextObj, 0);
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0);
  sealCombineLimitTextObj = this->fields.conductionWireInfo;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sealCombineLimitTextObj = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_8803/*"MSG_PRESELECT_BASE_LIMIT"*/,
                                                          0);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)sealCombineLimitTextObj, 0),
        (sealCombineLimitTextObj = (UnityEngine_GameObject_o *)this->fields.preSelectBaseLb) == 0)
    || (sealCombineLimitTextObj = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)sealCombineLimitTextObj,
                                    0)) == 0
    || (UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 1, 0),
        (sealCombineLimitTextObj = this->fields.baseSelectInfoLb) == 0)
    || (UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 1, 0), (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_26:
    sub_1C32E7C(sealCombineLimitTextObj);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v8, v9);
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
      if ( *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&dword_14) == 6 )
      {
        if ( !this->fields.menuListCtr )
          sub_1C32E7C(v13);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v13,
          this->fields.eventNoticeImg,
          *(EventEntity_o **)((char *)&v15.fields._current->klass + (unsigned __int64)off_50),
          v14);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void LimitCntUpControl__InitUnSealedConditionText(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *shortUnSealedConditionTextObj; // x0

  if ( (byte_4C3B92C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B92C = 1;
  }
  shortUnSealedConditionTextObj = this->fields.shortUnSealedConditionTextObj;
  if ( !shortUnSealedConditionTextObj
    || (UnityEngine_GameObject__SetActive(shortUnSealedConditionTextObj, 0, 0),
        (shortUnSealedConditionTextObj = (UnityEngine_GameObject_o *)this->fields.shortUnSealedConditionText) == 0)
    || (UILabel__set_text((UILabel_o *)shortUnSealedConditionTextObj, (System_String_o *)StringLiteral_1/*""*/, 0),
        (shortUnSealedConditionTextObj = this->fields.longUnSealedConditionTextObj) == 0)
    || (UnityEngine_GameObject__SetActive(shortUnSealedConditionTextObj, 0, 0),
        (shortUnSealedConditionTextObj = (UnityEngine_GameObject_o *)this->fields.longUnSealedConditionText) == 0) )
  {
    sub_1C32E7C(shortUnSealedConditionTextObj);
  }
  UILabel__set_text((UILabel_o *)shortUnSealedConditionTextObj, (System_String_o *)StringLiteral_1/*""*/, 0);
}


bool LimitCntUpControl__IsUnSealedQuestTransitionBtnActive(LimitCntUpControl_o *this, const MethodInfo *method)
{
  LimitCntUpControl_o *v2; // x19
  struct UserServantEntity_o *baseData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v6; // x8
  int32_t v7; // w20
  int32_t v8; // w0
  const MethodInfo *v9; // x3
  System_Action_o *UnSealedQuestTransitionAction; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v2 = this;
  if ( (byte_4C3B926 & 1) == 0 )
  {
    this = (LimitCntUpControl_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3B926 = 1;
  }
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_8;
  v5 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v5;
  *(_QWORD *)&v14.fields.fakeValue = v4;
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v14, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v6 )
LABEL_8:
    sub_1C32E7C(this);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v6[6], 0);
  UnSealedQuestTransitionAction = LimitCntUpControl__GetUnSealedQuestTransitionAction(v2, v7, v8, v9);
  v2->fields.unSealedQuestTransitionAction = UnSealedQuestTransitionAction;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&v2->fields.unSealedQuestTransitionAction,
    (int32_t)UnSealedQuestTransitionAction,
    v11,
    v12);
  return v2->fields.unSealedQuestTransitionAction != 0;
}


void LimitCntUpControl__OnClickExeLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4C3B925 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3770/*"CONFIRM_TITLE_LIMITUP"*/);
    byte_4C3B925 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3770/*"CONFIRM_TITLE_LIMITUP"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C32E7C(v3);
  SetRarityDialogControl__SetLimitUpInfo(
    exeCombineDlg,
    this->fields.baseData,
    this->fields.combineLimitUpWarningDialog,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0);
}


void LimitCntUpControl__OnClickLimitUpConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4C3B92A & 1) == 0 )
  {
    sub_1C32C20(&Method_LimitCntUpControl_OnClickLimitUpConductionWire__);
    byte_4C3B92A = 1;
  }
  v3 = Method_LimitCntUpControl_OnClickLimitUpConductionWire__;
  if ( (*((_BYTE *)Method_LimitCntUpControl_OnClickLimitUpConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_LimitCntUpControl_OnClickLimitUpConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0);
}


void LimitCntUpControl__OnClickUnSealedQuestTransitionAction(LimitCntUpControl_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *unSealedQuestTransitionBtn; // x0
  char v4; // w0
  _QWORD *v5; // x8
  char v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  System_String_o *v13; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_4C3B927 & 1) == 0 )
  {
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_LimitCntUpControl_OnClickUnSealedQuestTransitionAction__);
    sub_1C32C20(&Method_LimitCntUpControl_OnConfirm__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_11981/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_11977/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_11982/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_11978/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/);
    byte_4C3B927 = 1;
  }
  unSealedQuestTransitionBtn = this->fields.unSealedQuestTransitionBtn;
  if ( !unSealedQuestTransitionBtn )
    goto LABEL_12;
  v4 = ((__int64 (__fastcall *)(struct UICommonButton_o *, const MethodInfo *))unSealedQuestTransitionBtn->klass->vtable._4_get_isEnabled.methodPtr)(
         unSealedQuestTransitionBtn,
         unSealedQuestTransitionBtn->klass->vtable._4_get_isEnabled.method);
  v5 = Method_LimitCntUpControl_OnClickUnSealedQuestTransitionAction__;
  v6 = v4;
  if ( (*((_BYTE *)Method_LimitCntUpControl_OnClickUnSealedQuestTransitionAction__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_LimitCntUpControl_OnClickUnSealedQuestTransitionAction__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  if ( (v6 & 1) != 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11982/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11981/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, 0);
    v11 = System_String__Format(v10, (Il2CppObject *)this->fields.questName, 0);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0);
    v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_LimitCntUpControl_OnConfirm__, 0);
    if ( Instance )
    {
      CommonUI__OpenConfirmDialog_31190412((CommonUI_o *)Instance, v9, v11, v12, v13, v14, 26, 0, 0, 0);
      return;
    }
LABEL_12:
    sub_1C32E7C(unSealedQuestTransitionBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
}


void LimitCntUpControl__OnConfirm(LimitCntUpControl_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v6; // x20
  AvalonSceneManager_c *v7; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21

  if ( (byte_4C3B928 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_LimitCntUpControl__OnConfirm_b__63_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3B928 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    v7 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v7 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
    v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_LimitCntUpControl__OnConfirm_b__63_0__, 0);
    if ( v6 )
    {
      CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v9, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(Instance);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void LimitCntUpControl__SetBaseSvtCardImg(
        LimitCntUpControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UICharaGraphTexture_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.baseData = usrSvtData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseData, (int32_t)usrSvtData, (int32_t)method, v3);
  v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(LimitCntUpControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)v6, v7, v8);
}


void LimitCntUpControl__SetExeBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
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

  if ( (byte_4C3B924 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C3B924 = 1;
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


void LimitCntUpControl__SetHaveQpIno(LimitCntUpControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  UILabel_o *haveQpLb; // x20

  if ( (byte_4C3B91F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C3B91F = 1;
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


void LimitCntUpControl__SetLimitUpInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  LimitCntUpControl_o *v2; // x19
  struct UserServantEntity_o *baseData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  struct UserServantEntity_o *v6; // x8
  int32_t lv; // w29
  int32_t v8; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v9; // x8
  int32_t v10; // w27
  int32_t v11; // w23
  int32_t v12; // w26
  const MethodInfo *v13; // x2
  int32_t lvMax; // w20
  __int64 v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UserServantEntity_o *v18; // x1
  const MethodInfo *v19; // x2
  struct UserServantEntity_o *v20; // x8
  int32_t infoBack_high; // w21
  int32_t m_CancellationTokenSource; // w9
  LimitCntUpControl_o *v23; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int *p_spendQpVal; // x23
  __int64 v26; // x27
  struct CombineRootComponent_o *combineRootComponent; // x28
  _BOOL8 v28; // x0
  float v29; // s0
  int v30; // w8
  UILabel_o *qpLb; // x24
  int32_t v32; // w20
  const MethodInfo *v33; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x8
  __int64 size; // x29
  __int64 v36; // x20
  System_Collections_Generic_List_object__o *v37; // x24
  LimitCntUpControl_o **p_itemInfoList_k__BackingField; // x23
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  unsigned __int64 v41; // x24
  __int64 v42; // x26
  struct PlayMakerFSM_o **p_myFSM; // x21
  signed __int64 v44; // x20
  LimitCntUpControl_o *v45; // x25
  struct UserServantEntity_o *v46; // x8
  __int128 v47; // q0
  const MethodInfo *v48; // x4
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v52; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v54; // x8
  const MethodInfo *v55; // x1
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  const MethodInfo *v59; // x1
  int32_t v60; // [xsp+0h] [xbp-F0h]
  int32_t v61; // [xsp+4h] [xbp-ECh]
  int32_t v62; // [xsp+8h] [xbp-E8h]
  int32_t v63; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+50h] [xbp-A0h] BYREF
  CombineLimitReleaseEntity_o *v67; // [xsp+70h] [xbp-80h] BYREF
  float barExp; // [xsp+7Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+80h] [xbp-70h] BYREF
  ServantLimitEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C3B922 & 1) == 0 )
  {
    sub_1C32C20(&CombineSvtData_TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (LimitCntUpControl_o *)sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C3B922 = 1;
  }
  *(_QWORD *)lateExp = 0;
  entity = 0;
  barExp = 0.0;
  v67 = 0;
  memset(&v66, 0, sizeof(v66));
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_85;
  v5 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v71.fields.currentCryptoKey = v5;
  *(_QWORD *)&v71.fields.fakeValue = v4;
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v71, 0);
  v6 = v2->fields.baseData;
  if ( !v6 )
    goto LABEL_85;
  lv = v6->fields.lv;
  v8 = (int)this;
  this = (LimitCntUpControl_o *)UserServantEntity__getLevelMax(v2->fields.baseData, 0);
  v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v9 )
    goto LABEL_85;
  v10 = (int)this;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v9[6], 0);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_85;
  v12 = v11 + 1;
  this = (LimitCntUpControl_o *)ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)this, &entity, v8, v11 + 1, 0);
  lvMax = v10;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_85;
    lvMax = entity->fields.lvMax;
  }
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_85;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, v13);
  v15 = sub_1C32E6C(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_85;
  v18 = v2->fields.baseData;
  *(_QWORD *)(v15 + 16) = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 16), (int32_t)v18, v16, v17);
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_85;
  *(_DWORD *)(v15 + 24) = this->fields.sealCombineLimitTextObj;
  *(_DWORD *)(v15 + 28) = v12;
  *(_DWORD *)(v15 + 32) = lvMax;
  UserServantEntity__getExpInfo((UserServantEntity_o *)this, &lateExp[1], lateExp, &barExp, 0);
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)this, 0, 0);
  *(float *)(v15 + 36) = barExp;
  *(_DWORD *)(v15 + 40) = lateExp[0];
  if ( !this )
    goto LABEL_85;
  *(_DWORD *)(v15 + 44) = this->fields.m_CachedPtr;
  v20 = v2->fields.baseData;
  if ( !v20 )
    goto LABEL_85;
  *(_DWORD *)(v15 + 48) = v20->fields.adjustHp;
  *(_DWORD *)(v15 + 52) = HIDWORD(this->fields.m_CachedPtr);
  *(_DWORD *)(v15 + 56) = v20->fields.adjustAtk;
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_85;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v15, v19);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v8,
                                  (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_85;
  infoBack_high = HIDWORD(this->fields.infoBack);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !this )
    goto LABEL_85;
  v63 = v10;
  this = (LimitCntUpControl_o *)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)this, infoBack_high, v11, 0);
  if ( !this )
    goto LABEL_85;
  m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
  v23 = this;
  combineEventList = (System_Collections_Generic_List_object__o *)v2->fields.combineEventList;
  p_spendQpVal = &v2->fields.spendQpVal;
  v2->fields.spendQpVal = m_CancellationTokenSource;
  combineRootComponent = v23->fields.combineRootComponent;
  v26 = *(_QWORD *)&v23->fields.type;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      combineEventList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    *(_OWORD *)&v66.fields._list = *(_OWORD *)&v65.fields.currentCryptoKey;
    v66.fields._current = (Il2CppObject *)v65.fields.fakeValue;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v66,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v28 )
        break;
      if ( !v66.fields._current )
        sub_1C32E7C(v28);
      if ( HIDWORD(v66.fields._current[1].klass) == 6 )
      {
        v29 = *(float *)&v66.fields._current[3].monitor * (float)*p_spendQpVal;
        v30 = (int)v29;
        if ( v29 == INFINITY )
          v30 = 0x80000000;
        *p_spendQpVal = v30;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v66,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0);
  qpLb = v2->fields.qpLb;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !qpLb )
      goto LABEL_85;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2->fields.qpLb, 0);
    v32 = v63;
    if ( !this )
      goto LABEL_85;
    this = (LimitCntUpControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    if ( !this )
      goto LABEL_85;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  else
  {
    this = (LimitCntUpControl_o *)System_Int32__ToString_65028652(
                                    (int)v2 + 416,
                                    (System_String_o *)StringLiteral_9231/*"N0"*/,
                                    0);
    if ( !qpLb )
      goto LABEL_85;
    UILabel__set_text(qpLb, (System_String_o *)this, 0);
    limitCntUpItemList = v2->fields.limitCntUpItemList;
    if ( !limitCntUpItemList )
      goto LABEL_85;
    v60 = infoBack_high;
    v61 = lv;
    v62 = v12;
    if ( !v26 )
      goto LABEL_85;
    size = (unsigned int)limitCntUpItemList->fields._size;
    v36 = *(_QWORD *)(v26 + 24);
    v37 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    p_itemInfoList_k__BackingField = (LimitCntUpControl_o **)&v2->fields._itemInfoList_k__BackingField;
    v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v37;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._itemInfoList_k__BackingField, (int32_t)v37, v39, v40);
    if ( (int)size >= 1 )
    {
      v41 = 0;
      v42 = v26 + 32;
      p_myFSM = &combineRootComponent->fields.myFSM;
      v44 = (int)v36 - 1;
      do
      {
        this = (LimitCntUpControl_o *)v2->fields.limitCntUpItemList;
        if ( !this )
          goto LABEL_85;
        this = (LimitCntUpControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v41,
                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( (__int64)v41 <= v44 )
        {
          if ( v41 >= *(unsigned int *)(v26 + 24) )
            goto LABEL_86;
          if ( !combineRootComponent )
            goto LABEL_85;
          if ( v41 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
            goto LABEL_86;
          v45 = this;
          CombineMenuControl__AddCombineItemInfo(
            (CombineMenuControl_o *)v2,
            *(_DWORD *)(v42 + 4 * v41),
            *((_DWORD *)p_myFSM + v41),
            0);
          v46 = v2->fields.baseData;
          if ( !v46 )
            goto LABEL_85;
          v47 = *(_OWORD *)&v46->fields.userId.fields.fakeValue;
          *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&v46->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v65.fields.fakeValue = v47;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v64 = v65;
          this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v64, 0);
          if ( v41 >= *(unsigned int *)(v26 + 24)
            || v41 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
          {
LABEL_86:
            sub_1C32E84(this);
          }
          if ( !v45 )
            goto LABEL_85;
          LimitCntUpItemComponent__setLimitUpItemInfo(
            (LimitCntUpItemComponent_o *)v45,
            (int64_t)this,
            *(_DWORD *)(v42 + 4 * v41),
            *((_DWORD *)p_myFSM + v41),
            v48);
          this = *p_itemInfoList_k__BackingField;
          if ( !*p_itemInfoList_k__BackingField )
            goto LABEL_85;
          m_CachedPtr = this->fields.m_CachedPtr;
          v52 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_85;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v45,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v54 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v54 + 32) = v45;
            sub_1C32BC4((CGThumbnailListItem_o *)(v54 + 32), (int32_t)v45, v49, v50);
          }
        }
      }
      while ( size != ++v41 );
    }
    this = (LimitCntUpControl_o *)v2->fields.qpLb;
    if ( !this )
      goto LABEL_85;
    v72.fields.r = 1.0;
    v72.fields.g = 1.0;
    v72.fields.b = 1.0;
    v72.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v72, 0);
    lv = v61;
    v12 = v62;
    v32 = v63;
    infoBack_high = v60;
    v2->fields._IsExeCombine_k__BackingField = 1;
  }
  if ( lv < v32 )
  {
    v2->fields.isMaxLv = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v2->fields.haveQpVal < v2->fields.spendQpVal )
  {
    this = (LimitCntUpControl_o *)v2->fields.qpLb;
    v2->fields.isQpNum = 0;
    if ( !this )
      goto LABEL_85;
    v73.fields.r = 1.0;
    v73.fields.g = 0.0;
    v73.fields.b = 0.0;
    v73.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v73, 0);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v2->fields._itemInfoList_k__BackingField && !LimitCntUpControl__CheckItemHaveNum(v2, v33) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (LimitCntUpControl_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                  (CombineLimitReleaseMaster_o *)this,
                                  &v67,
                                  infoBack_high,
                                  v12,
                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_84;
  if ( !v67 )
LABEL_85:
    sub_1C32E7C(this);
  condType = v67->fields.condType;
  condTargetId = v67->fields.condTargetId;
  condNum = v67->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0) )
  {
    v2->fields.isSealCombineLimit = 1;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
LABEL_84:
  LimitCntUpControl__SetExeBtnState(v2, v55);
  LimitCntUpControl__CheckConductionWire(v2, v59);
}


void LimitCntUpControl__SetStateInfoMsg(LimitCntUpControl_o *this, int32_t state, const MethodInfo *method)
{
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x20
  __int64 *v7; // x8
  System_String_o *v8; // x1
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B929 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5789/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C32C20(&StringLiteral_7447/*"INFO_MSG_LIMITUP"*/);
    sub_1C32C20(&StringLiteral_8800/*"MSG_MAXLV_LIMITUP_BASE"*/);
    sub_1C32C20(&StringLiteral_12188/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_8799/*"MSG_LIMITUP_MAX"*/);
    sub_1C32C20(&StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B929 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_36;
  v9.fields.r = 0.0;
  v9.fields.a = 1.0;
  v9.fields.g = 0.87891;
  v9.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v9, 0);
  if ( state == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
LABEL_11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5789/*"EXE_SUMMON_COMBINE_TXT"*/;
      goto LABEL_14;
    }
    detailInfoLb = (UnityEngine_Component_o *)this->fields.baseData;
    if ( detailInfoLb )
    {
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)detailInfoLb, 0) )
      {
        v10.fields.r = 1.0;
        v10.fields.g = 1.0;
        v10.fields.b = 1.0;
        v10.fields.a = 1.0;
        UIWidget__set_color(v6, v10, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_8799/*"MSG_LIMITUP_MAX"*/;
        goto LABEL_14;
      }
      if ( !this->fields._IsExeCombine_k__BackingField )
      {
        if ( !this->fields.isMaxLv )
        {
          v12.fields.r = 1.0;
          v12.fields.g = 1.0;
          v12.fields.b = 1.0;
          v12.fields.a = 1.0;
          UIWidget__set_color(v6, v12, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v7 = &StringLiteral_8800/*"MSG_MAXLV_LIMITUP_BASE"*/;
          goto LABEL_14;
        }
        if ( !this->fields.isItemNum )
        {
          v13.fields.r = 1.0;
          v13.fields.g = 1.0;
          v13.fields.b = 1.0;
          v13.fields.a = 1.0;
          UIWidget__set_color(v6, v13, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v7 = &StringLiteral_12188/*"SHORT_ITEM_INFO_MSG"*/;
          goto LABEL_14;
        }
        if ( !this->fields.isQpNum )
        {
          v11.fields.r = 1.0;
          v11.fields.g = 1.0;
          v11.fields.b = 1.0;
          v11.fields.a = 1.0;
          UIWidget__set_color(v6, v11, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v7 = &StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/;
          goto LABEL_14;
        }
      }
      goto LABEL_11;
    }
LABEL_36:
    sub_1C32E7C(detailInfoLb);
  }
  if ( !state )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7447/*"INFO_MSG_LIMITUP"*/;
LABEL_14:
    v8 = LocalizationManager__Get((System_String_o *)*v7, 0);
    goto LABEL_16;
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_16:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)detailInfoLb, v8, 0);
}


void LimitCntUpControl__SetUnSealedQuestTransitionBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
{
  bool IsUnSealedQuestTransitionBtnActive; // w0
  bool v4; // w21
  bool v5; // w20
  const MethodInfo *v6; // x2
  UnityEngine_GameObject_o *unSealedQuestTransitionBtnObj; // x0
  UnityEngine_GameObject_c *klass; // x8

  IsUnSealedQuestTransitionBtnActive = LimitCntUpControl__IsUnSealedQuestTransitionBtnActive(this, method);
  v4 = IsUnSealedQuestTransitionBtnActive;
  v5 = IsUnSealedQuestTransitionBtnActive;
  LimitCntUpControl__UnSealedConditionTextSet(this, IsUnSealedQuestTransitionBtnActive, v6);
  unSealedQuestTransitionBtnObj = this->fields.unSealedQuestTransitionBtnObj;
  if ( !unSealedQuestTransitionBtnObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(unSealedQuestTransitionBtnObj, v4, 0);
  if ( v5 && !this->fields.isQuestOpen )
  {
    unSealedQuestTransitionBtnObj = (UnityEngine_GameObject_o *)this->fields.unSealedQuestTransitionBtn;
    if ( unSealedQuestTransitionBtnObj )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)unSealedQuestTransitionBtnObj, 0, 0);
      unSealedQuestTransitionBtnObj = (UnityEngine_GameObject_o *)this->fields.unSealedQuestTransitionBtn;
      if ( unSealedQuestTransitionBtnObj )
      {
        klass = unSealedQuestTransitionBtnObj->klass;
        goto LABEL_7;
      }
    }
LABEL_11:
    sub_1C32E7C(unSealedQuestTransitionBtnObj);
  }
  unSealedQuestTransitionBtnObj = (UnityEngine_GameObject_o *)this->fields.unSealedQuestTransitionBtn;
  if ( !unSealedQuestTransitionBtnObj )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)unSealedQuestTransitionBtnObj, 1, 0);
  unSealedQuestTransitionBtnObj = (UnityEngine_GameObject_o *)this->fields.unSealedQuestTransitionBtn;
  if ( !unSealedQuestTransitionBtnObj )
    goto LABEL_11;
  klass = unSealedQuestTransitionBtnObj->klass;
LABEL_7:
  ((void (*)(void))klass[1]._1.nestedTypes)();
}


void LimitCntUpControl__ShowItemListInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0
  const MethodInfo *v4; // x1

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0) )
  {
    sub_1C32E7C(preSelectBaseLb);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  if ( this->fields.isSelectBase )
    LimitCntUpControl__SetLimitUpInfo(this, v4);
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
}


void LimitCntUpControl__UnSealedConditionTextSet(
        LimitCntUpControl_o *this,
        bool isButtonActive,
        const MethodInfo *method)
{
  ServantLimitImageMaster_o *Master_object; // x0
  ServantLimitImageMaster_o *v6; // x21
  struct UserServantEntity_o *v7; // x8
  UILabel_o *longUnSealedConditionText; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  float v11; // s0
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *shortUnSealedConditionText; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  float v16; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C3B92D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&StringLiteral_3602/*"COMBINE_LIMIT_COUNT_SEALED_SHORT_DIALOG_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_3601/*"COMBINE_LIMIT_COUNT_SEALED_LONG_DIALOG_MESSAGE"*/);
    byte_4C3B92D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this->fields.baseData )
    goto LABEL_25;
  v6 = Master_object;
  Master_object = (ServantLimitImageMaster_o *)UserServantEntity__isLimitCountMax(this->fields.baseData, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    baseData = this->fields.baseData;
    if ( baseData )
    {
      shortUnSealedConditionText = this->fields.shortUnSealedConditionText;
      v15 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v15;
      *(_QWORD *)&v18.fields.fakeValue = v14;
      Master_object = (ServantLimitImageMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                     v18,
                                                     0);
      if ( v6 )
      {
        Master_object = (ServantLimitImageMaster_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                       v6,
                                                       (System_String_o *)StringLiteral_3602/*"COMBINE_LIMIT_COUNT_SEALED_SHORT_DIALOG_MESSAGE"*/,
                                                       (int32_t)Master_object,
                                                       0);
        if ( shortUnSealedConditionText )
        {
          UILabel__set_text(shortUnSealedConditionText, (System_String_o *)Master_object, 0);
          v16 = 0.0;
          if ( isButtonActive )
            v16 = 20.0;
          ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.shortUnSealedConditionText, v16, 0);
          GameObjectExtensions__SetLocalPosition_36036656(
            this->fields.unSealedQuestTransitionBtnObj,
            this->fields.unSealedQuestTransitionBtnPosRight,
            0);
          Master_object = (ServantLimitImageMaster_o *)this->fields.shortUnSealedConditionTextObj;
          if ( Master_object )
            goto LABEL_24;
        }
      }
    }
LABEL_25:
    sub_1C32E7C(Master_object);
  }
  v7 = this->fields.baseData;
  if ( !v7 )
    goto LABEL_25;
  longUnSealedConditionText = this->fields.longUnSealedConditionText;
  v10 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  Master_object = (ServantLimitImageMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                 v17,
                                                 0);
  if ( !v6 )
    goto LABEL_25;
  Master_object = (ServantLimitImageMaster_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                 v6,
                                                 (System_String_o *)StringLiteral_3601/*"COMBINE_LIMIT_COUNT_SEALED_LONG_DIALOG_MESSAGE"*/,
                                                 (int32_t)Master_object,
                                                 0);
  if ( !longUnSealedConditionText )
    goto LABEL_25;
  UILabel__set_text(longUnSealedConditionText, (System_String_o *)Master_object, 0);
  v11 = -15.0;
  if ( isButtonActive )
    v11 = 7.0;
  ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.longUnSealedConditionText, v11, 0);
  GameObjectExtensions__SetLocalPosition_36036656(
    this->fields.unSealedQuestTransitionBtnObj,
    this->fields.unSealedQuestTransitionBtnPosCenter,
    0);
  Master_object = (ServantLimitImageMaster_o *)this->fields.longUnSealedConditionTextObj;
  if ( !Master_object )
    goto LABEL_25;
LABEL_24:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
}


void LimitCntUpControl___OnConfirm_b__63_0(LimitCntUpControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B92F & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3B92F = 1;
  }
  ActionExtensions__Call(this->fields.unSealedQuestTransitionAction, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  BYTE6(Instance[11].klass) = 0;
}


System_Collections_Generic_List_LimitCntUpItemComponent__o *LimitCntUpControl__get_itemInfoList(
        LimitCntUpControl_o *this,
        const MethodInfo *method)
{
  return this->fields._itemInfoList_k__BackingField;
}


void LimitCntUpControl__set_itemInfoList(
        LimitCntUpControl_o *this,
        System_Collections_Generic_List_LimitCntUpItemComponent__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._itemInfoList_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._itemInfoList_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void LimitCntUpControl___c__DisplayClass66_0___ctor(
        LimitCntUpControl___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LimitCntUpControl___c__DisplayClass66_0___GetUnSealedQuestTransitionAction_b__0(
        LimitCntUpControl___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  int32_t questId; // w19
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B930 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B930 = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}