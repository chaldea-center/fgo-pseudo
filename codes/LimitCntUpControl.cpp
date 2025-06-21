void __fastcall LimitCntUpControl___ctor(LimitCntUpControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B20301 & 1) == 0 )
  {
    sub_1BCAFF8(&CombineMenuControl_TypeInfo, method);
    byte_4B20301 = 1;
  }
  *(_OWORD *)&this->fields.unSealedQuestTransitionBtnPosCenter.fields.x = xmmword_BE18E0;
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LimitCntUpControl__CheckConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UILabel_o *conductionInfoLabel; // x20
  UILabel_o *conductionButtonLabel; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *sealCombineLimitText; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x21
  struct UserServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  struct UserServantEntity_o *v24; // x8
  int32_t v25; // w21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-40h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B202F4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_1BCAFF8(&StringLiteral_3679/*"CONDUCTION_COMBINE"*/, v7);
    sub_1BCAFF8(&StringLiteral_11410/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v8);
    sub_1BCAFF8(&StringLiteral_3680/*"CONDUCTION_COMBINE_MSG"*/, v9);
    byte_4B202F4 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  if ( !this->fields.baseData )
    return;
  if ( !this->fields._IsExeCombine_k__BackingField && !this->fields.isMaxLv )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_35;
    CombineInfoComponent__HideResStatusInfo((CombineInfoComponent_o *)conductionWireInfo, method);
    conductionInfoLabel = this->fields.conductionInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3680/*"CONDUCTION_COMBINE_MSG"*/,
                                                       0LL);
    if ( !conductionInfoLabel )
      goto LABEL_35;
    UILabel__set_text(conductionInfoLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionButtonLabel = this->fields.conductionButtonLabel;
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3679/*"CONDUCTION_COMBINE"*/,
                                                       0LL);
    if ( !conductionButtonLabel )
      goto LABEL_35;
    UILabel__set_text(conductionButtonLabel, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
  }
  if ( this->fields.isSealCombineLimit )
  {
    conductionWireInfo = this->fields.sealCombineLimitTextObj;
    if ( !conductionWireInfo )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_35;
    sealCombineLimitText = this->fields.sealCombineLimitText;
    svtId = baseData->fields.svtId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(
                            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                            &svtId,
                            v13,
                            v14,
                            v15);
    v19 = System_String__Format((System_String_o *)StringLiteral_11410/*"SEAL_COMBINE_LIMIT_TEXT_{0}"*/, v18, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v19, 0LL);
    if ( !sealCombineLimitText )
      goto LABEL_35;
    UILabel__set_text(sealCombineLimitText, (System_String_o *)conductionWireInfo, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v20 = this->fields.baseData;
  if ( !v20 )
    goto LABEL_35;
  v21 = (ServantLimitImageMaster_o *)conductionWireInfo;
  v23 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v23;
  *(_QWORD *)&v27.fields.fakeValue = v22;
  conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                     v27,
                                                     0LL);
  v24 = this->fields.baseData;
  if ( !v24 )
    goto LABEL_35;
  v25 = (int)conductionWireInfo;
  conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                     v24->fields.limitCount,
                                                     0LL);
  if ( !v21 )
    goto LABEL_35;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(v21, v25, (int32_t)conductionWireInfo, 0LL) )
    return;
  conductionWireInfo = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !conductionWireInfo )
LABEL_35:
    sub_1BCB254(conductionWireInfo, method);
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)conductionWireInfo, 0LL) )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( conductionWireInfo )
    {
      if ( !BYTE5(conductionWireInfo[7].klass) )
        return;
      goto LABEL_33;
    }
    goto LABEL_35;
  }
LABEL_33:
  LimitCntUpControl__SetUnSealedQuestTransitionBtnState(this, method);
}


void __fastcall LimitCntUpControl__CheckIsSelectBaseSvt(
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
  __int64 v12; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+40h] [xbp-40h]

  if ( (byte_4B202F3 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4B202F3 = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v7;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v15 = v16;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v15, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v14.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v14, 0LL) )
        LimitCntUpControl__InitItemInfo(this, v10);
    }
    v11 = 1;
  }
  else
  {
    LimitCntUpControl__InitItemInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_1BCB254(0LL, v12);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    v11 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, (int32_t)method, v3);
}


bool __fastcall LimitCntUpControl__CheckItemHaveNum(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *itemInfoList_k__BackingField; // x0
  int32_t v5; // w20
  int32_t size; // w22

  if ( (byte_4B202F6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    byte_4B202F6 = 1;
  }
  itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_9:
    sub_1BCB254(itemInfoList_k__BackingField, method);
  v5 = 0;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( v5 >= size )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  itemInfoList_k__BackingField,
                                                                                  v5,
                                                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
    if ( !LOBYTE(itemInfoList_k__BackingField[2].fields._syncRoot) )
      break;
    itemInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._itemInfoList_k__BackingField;
    ++v5;
    if ( !itemInfoList_k__BackingField )
      goto LABEL_9;
  }
  return v5 >= size;
}


int32_t __fastcall LimitCntUpControl__GetTutorialOpenType(LimitCntUpControl_o *this, const MethodInfo *method)
{
  return 36;
}


// local variable allocation has failed, the output may be wrong!
System_Action_o *__fastcall LimitCntUpControl__GetUnSealedQuestTransitionAction(
        LimitCntUpControl_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  ServantLimitImageMaster_o *Master_object; // x0
  struct System_String_o *MasterName_k__BackingField; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_o *v18; // x19

  if ( (byte_4B202FE & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_1BCAFF8(&Method_LimitCntUpControl___c__DisplayClass66_0__GetUnSealedQuestTransitionAction_b__0__, v11);
    sub_1BCAFF8(&LimitCntUpControl___c__DisplayClass66_0_TypeInfo, v12);
    byte_4B202FE = 1;
  }
  v13 = sub_1BCB244(LimitCntUpControl___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = (ServantLimitImageMaster_o *)ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(
                                                 Master_object,
                                                 svtId,
                                                 limitCount,
                                                 0LL);
  if ( !v13 )
    goto LABEL_16;
  *(_DWORD *)(v13 + 16) = (_DWORD)Master_object;
  Master_object = (ServantLimitImageMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = (ServantLimitImageMaster_o *)QuestTree__GetQuestInfo(
                                                 (QuestTree_o *)Master_object,
                                                 *(_DWORD *)(v13 + 16),
                                                 0LL);
  MasterName_k__BackingField = 0LL;
  if ( Master_object )
  {
    Master_object = (ServantLimitImageMaster_o *)MapControl_QuestInfo__GetMine(
                                                   (MapControl_QuestInfo_o *)Master_object,
                                                   0LL);
    if ( !Master_object )
      goto LABEL_16;
    MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  }
  if ( !this
    || (this->fields.questName = MasterName_k__BackingField,
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.questName, (int32_t)MasterName_k__BackingField, v16, v17),
        (Master_object = (ServantLimitImageMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_1BCB254(Master_object, MasterName_k__BackingField);
  }
  this->fields.isQuestOpen = clsQuestCheck__CheckQuestPlayableNow(
                               (clsQuestCheck_o *)Master_object,
                               *(_DWORD *)(v13 + 16),
                               0LL);
  if ( !*(_DWORD *)(v13 + 16) )
    return 0LL;
  v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v13,
    Method_LimitCntUpControl___c__DisplayClass66_0__GetUnSealedQuestTransitionAction_b__0__,
    0LL);
  return v18;
}


void __fastcall LimitCntUpControl__InitItemInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *qpLb; // x20
  void *transform; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int v13; // w21
  int32_t v14; // w20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B202F1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B202F1 = 1;
  }
  LimitCntUpControl__SetHaveQpIno(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  transform = System_Int32__ToString((int)this + 416, 0LL);
  if ( !qpLb )
    goto LABEL_27;
  UILabel__set_text(qpLb, (System_String_o *)transform, 0LL);
  transform = this->fields.qpLb;
  if ( !transform )
    goto LABEL_27;
  v17.fields.r = 1.0;
  v17.fields.g = 1.0;
  v17.fields.b = 1.0;
  v17.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)transform, v17, 0LL);
  transform = this->fields.qpLb;
  if ( !transform )
    goto LABEL_27;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_27;
  transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_27;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = this->fields.sealCombineLimitTextObj;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !transform )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  this->fields.isSealCombineLimit = 0;
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v8);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    transform = this->fields.charaGraph;
    if ( !transform )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.charaGraph, 0, v11, v12);
  }
  transform = this->fields.limitCntUpItemList;
  if ( !transform )
LABEL_27:
    sub_1BCB254(transform, v7);
  v13 = *((_DWORD *)transform + 6);
  if ( v13 >= 1 )
  {
    v14 = 0;
    do
    {
      transform = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)transform,
                    v14,
                    (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !transform )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)transform, v7);
      if ( v13 == ++v14 )
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  LimitCntUpControl__InitUnSealedConditionText(this, v15);
  transform = this->fields.combineInfoComp;
  if ( !transform )
    goto LABEL_27;
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)transform, 1, v16);
}


void __fastcall LimitCntUpControl__InitLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *sealCombineLimitTextObj; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UILabel_o *preSelectBaseLb; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B202F0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_8733/*"MSG_PRESELECT_BASE_LIMIT"*/, v8);
    byte_4B202F0 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  EventTutorialMaster__CheckTutorial(0, 36, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isSelectBase = 0;
  LimitCntUpControl__InitItemInfo(this, v9);
  sealCombineLimitTextObj = this->fields.sealCombineLimitTextObj;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  sealCombineLimitTextObj = this->fields.unSealedQuestTransitionBtnObj;
  this->fields.isSealCombineLimit = 0;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  LimitCntUpControl__SetExeBtnState(this, v12);
  LimitCntUpControl__InitUnSealedConditionText(this, v13);
  sealCombineLimitTextObj = (UnityEngine_GameObject_o *)this->fields.eventNoticeImg;
  *(_WORD *)&this->fields.isMaxLv = 257;
  this->fields.isItemNum = 1;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  sealCombineLimitTextObj = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)sealCombineLimitTextObj,
                              0LL);
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  sealCombineLimitTextObj = this->fields.conductionWireInfo;
  if ( !sealCombineLimitTextObj )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sealCombineLimitTextObj = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_8733/*"MSG_PRESELECT_BASE_LIMIT"*/,
                                                          0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)sealCombineLimitTextObj, 0LL),
        (sealCombineLimitTextObj = (UnityEngine_GameObject_o *)this->fields.preSelectBaseLb) == 0LL)
    || (sealCombineLimitTextObj = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)sealCombineLimitTextObj,
                                    0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 1, 0LL),
        (sealCombineLimitTextObj = this->fields.baseSelectInfoLb) == 0LL)
    || (UnityEngine_GameObject__SetActive(sealCombineLimitTextObj, 1, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_26:
    sub_1BCB254(sealCombineLimitTextObj, v10);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v15, v16);
  v19 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v19 && v19->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      v19,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v20 )
        break;
      if ( !v23.fields._current )
        sub_1BCB254(v20, v21);
      if ( HIDWORD(v23.fields._current[1].klass) == 6 )
      {
        if ( !this->fields.menuListCtr )
          sub_1BCB254(v20, v21);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v20,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v23.fields._current[5].klass,
          v22);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall LimitCntUpControl__InitUnSealedConditionText(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *shortUnSealedConditionTextObj; // x0

  if ( (byte_4B202FF & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B202FF = 1;
  }
  shortUnSealedConditionTextObj = this->fields.shortUnSealedConditionTextObj;
  if ( !shortUnSealedConditionTextObj
    || (UnityEngine_GameObject__SetActive(shortUnSealedConditionTextObj, 0, 0LL),
        (shortUnSealedConditionTextObj = (UnityEngine_GameObject_o *)this->fields.shortUnSealedConditionText) == 0LL)
    || (UILabel__set_text((UILabel_o *)shortUnSealedConditionTextObj, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (shortUnSealedConditionTextObj = this->fields.longUnSealedConditionTextObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(shortUnSealedConditionTextObj, 0, 0LL),
        (shortUnSealedConditionTextObj = (UnityEngine_GameObject_o *)this->fields.longUnSealedConditionText) == 0LL) )
  {
    sub_1BCB254(shortUnSealedConditionTextObj, method);
  }
  UILabel__set_text((UILabel_o *)shortUnSealedConditionTextObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


bool __fastcall LimitCntUpControl__IsUnSealedQuestTransitionBtnActive(
        LimitCntUpControl_o *this,
        const MethodInfo *method)
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
  if ( (byte_4B202F9 & 1) == 0 )
  {
    this = (LimitCntUpControl_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B202F9 = 1;
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
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v14, 0LL);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v6 )
LABEL_8:
    sub_1BCB254(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v6[6], 0LL);
  UnSealedQuestTransitionAction = LimitCntUpControl__GetUnSealedQuestTransitionAction(v2, v7, v8, v9);
  v2->fields.unSealedQuestTransitionAction = UnSealedQuestTransitionAction;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&v2->fields.unSealedQuestTransitionAction,
    (int32_t)UnSealedQuestTransitionAction,
    v11,
    v12);
  return v2->fields.unSealedQuestTransitionAction != 0LL;
}


void __fastcall LimitCntUpControl__OnClickExeLimitUp(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B202F8 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_3733/*"CONFIRM_TITLE_LIMITUP"*/, v3);
    byte_4B202F8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"CONFIRM_TITLE_LIMITUP"*/, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1BCB254(v4, v5);
  SetRarityDialogControl__SetLimitUpInfo(
    exeCombineDlg,
    this->fields.baseData,
    this->fields.combineLimitUpWarningDialog,
    v4,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0LL);
}


void __fastcall LimitCntUpControl__OnClickLimitUpConductionWire(LimitCntUpControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B202FD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_LimitCntUpControl_OnClickLimitUpConductionWire__, method);
    byte_4B202FD = 1;
  }
  v3 = Method_LimitCntUpControl_OnClickLimitUpConductionWire__;
  if ( (*((_BYTE *)Method_LimitCntUpControl_OnClickLimitUpConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_LimitCntUpControl_OnClickLimitUpConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCB254(0LL, v5);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0LL);
}


void __fastcall LimitCntUpControl__OnClickUnSealedQuestTransitionAction(
        LimitCntUpControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UICommonButton_o *unSealedQuestTransitionBtn; // x0
  char v12; // w0
  _QWORD *v13; // x8
  char v14; // w20
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  System_String_o *v21; // x24
  CommonConfirmDialog_ClickDelegate_o *v22; // x25

  if ( (byte_4B202FA & 1) == 0 )
  {
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_LimitCntUpControl_OnClickUnSealedQuestTransitionAction__, v3);
    sub_1BCAFF8(&Method_LimitCntUpControl_OnConfirm__, v4);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&StringLiteral_11877/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v7);
    sub_1BCAFF8(&StringLiteral_11873/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v8);
    sub_1BCAFF8(&StringLiteral_11878/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v9);
    sub_1BCAFF8(&StringLiteral_11874/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v10);
    byte_4B202FA = 1;
  }
  unSealedQuestTransitionBtn = this->fields.unSealedQuestTransitionBtn;
  if ( !unSealedQuestTransitionBtn )
    goto LABEL_12;
  v12 = ((__int64 (__fastcall *)(struct UICommonButton_o *, Il2CppMethodPointer))unSealedQuestTransitionBtn->klass->vtable._4_get_isEnabled.method)(
          unSealedQuestTransitionBtn,
          unSealedQuestTransitionBtn->klass->vtable._5_set_isEnabled.methodPtr);
  v13 = Method_LimitCntUpControl_OnClickUnSealedQuestTransitionAction__;
  v14 = v12;
  if ( (*((_BYTE *)Method_LimitCntUpControl_OnClickUnSealedQuestTransitionAction__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCB010(Method_LimitCntUpControl_OnClickUnSealedQuestTransitionAction__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v13, v13[4]);
  if ( (v14 & 1) != 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11878/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11877/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, 0LL);
    v19 = System_String__Format(v18, (Il2CppObject *)this->fields.questName, 0LL);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11874/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11873/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
    v22 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v22, (Il2CppObject *)this, Method_LimitCntUpControl_OnConfirm__, 0LL);
    if ( Instance )
    {
      CommonUI__OpenConfirmDialog_30763412((CommonUI_o *)Instance, v17, v19, v20, v21, v22, 26, 0, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1BCB254(unSealedQuestTransitionBtn, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__OnConfirm(LimitCntUpControl_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20
  AvalonSceneManager_c *v11; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4B202FB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_LimitCntUpControl__OnConfirm_b__63_0__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B202FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    v11 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_LimitCntUpControl__OnConfirm_b__63_0__, 0LL);
    if ( v10 )
    {
      CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v13, 0LL);
      return;
    }
LABEL_10:
    sub_1BCB254(Instance, v9);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall LimitCntUpControl__SetBaseSvtCardImg(
        LimitCntUpControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UICharaGraphTexture_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.baseData = usrSvtData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseData, (int32_t)usrSvtData, (int32_t)method, v3);
  v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(LimitCntUpControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass[1]._1.image);
  this->fields.charaGraph = v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)v6, v7, v8);
}


void __fastcall LimitCntUpControl__SetExeBtnState(LimitCntUpControl_o *this, const MethodInfo *method)
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

  if ( (byte_4B202F7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4B202F7 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1BCB254(combineBtnBg, method);
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


void __fastcall LimitCntUpControl__SetHaveQpIno(LimitCntUpControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B202F2 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9161/*"N0"*/, method);
    byte_4B202F2 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_63964312(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9161/*"N0"*/,
                         0LL),
        !haveQpLb) )
  {
    sub_1BCB254(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall LimitCntUpControl__SetLimitUpInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  LimitCntUpControl_o *v2; // x19
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct UserServantEntity_o *baseData; // x8
  __int64 v25; // x20
  __int64 v26; // x21
  struct UserServantEntity_o *v27; // x8
  int32_t lv; // w29
  int32_t v29; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  int32_t v31; // w27
  int32_t v32; // w23
  int32_t v33; // w26
  const MethodInfo *v34; // x2
  int32_t lvMax; // w20
  __int64 v36; // x24
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct UserServantEntity_o *v39; // x1
  const MethodInfo *v40; // x2
  struct UserServantEntity_o *v41; // x8
  int32_t infoBack_high; // w21
  int32_t m_CancellationTokenSource; // w9
  LimitCntUpControl_o *v44; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int *p_spendQpVal; // x23
  __int64 v47; // x27
  struct CombineRootComponent_o *combineRootComponent; // x28
  _BOOL8 v49; // x0
  __int64 v50; // x1
  float v51; // s0
  int v52; // w8
  UILabel_o *qpLb; // x24
  int32_t v54; // w20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *limitCntUpItemList; // x8
  __int64 size; // x29
  __int64 v57; // x20
  System_Collections_Generic_List_object__o *v58; // x24
  LimitCntUpControl_o **p_itemInfoList_k__BackingField; // x23
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  unsigned __int64 v62; // x24
  __int64 v63; // x26
  struct PlayMakerFSM_o **p_myFSM; // x21
  signed __int64 v65; // x20
  __int64 v66; // x2
  LimitCntUpControl_o *v67; // x25
  struct UserServantEntity_o *v68; // x8
  __int128 v69; // q0
  const MethodInfo *v70; // x4
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v76; // x8
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  const MethodInfo *v80; // x1
  int32_t v81; // [xsp+0h] [xbp-F0h]
  int32_t v82; // [xsp+4h] [xbp-ECh]
  int32_t v83; // [xsp+8h] [xbp-E8h]
  int32_t v84; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+50h] [xbp-A0h] BYREF
  CombineLimitReleaseEntity_o *v88; // [xsp+70h] [xbp-80h] BYREF
  float barExp; // [xsp+7Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+80h] [xbp-70h] BYREF
  ServantLimitEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4B202F5 & 1) == 0 )
  {
    sub_1BCAFF8(&CombineSvtData_TypeInfo, method);
    sub_1BCAFF8(&CondType_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CombineLimitMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v18);
    sub_1BCAFF8(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v19);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    this = (LimitCntUpControl_o *)sub_1BCAFF8(&StringLiteral_9161/*"N0"*/, v23);
    byte_4B202F5 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  entity = 0LL;
  barExp = 0.0;
  v88 = 0LL;
  memset(&v87, 0, sizeof(v87));
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_85;
  v26 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v92.fields.currentCryptoKey = v26;
  *(_QWORD *)&v92.fields.fakeValue = v25;
  this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v92, 0LL);
  v27 = v2->fields.baseData;
  if ( !v27 )
    goto LABEL_85;
  lv = v27->fields.lv;
  v29 = (int)this;
  this = (LimitCntUpControl_o *)UserServantEntity__getLevelMax(v2->fields.baseData, 0LL);
  v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v30 )
    goto LABEL_85;
  v31 = (int)this;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v30[6], 0LL);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !this )
    goto LABEL_85;
  v33 = v32 + 1;
  this = (LimitCntUpControl_o *)ServantLimitMaster__TryGetEntity(
                                  (ServantLimitMaster_o *)this,
                                  &entity,
                                  v29,
                                  v32 + 1,
                                  0LL);
  lvMax = v31;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_85;
    lvMax = entity->fields.lvMax;
  }
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_85;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, v34);
  v36 = sub_1BCB244(CombineSvtData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_85;
  v39 = v2->fields.baseData;
  *(_QWORD *)(v36 + 16) = v39;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 16), (int32_t)v39, v37, v38);
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_85;
  *(_DWORD *)(v36 + 24) = this->fields.sealCombineLimitTextObj;
  *(_DWORD *)(v36 + 28) = v33;
  *(_DWORD *)(v36 + 32) = lvMax;
  UserServantEntity__getExpInfo((UserServantEntity_o *)this, &lateExp[1], lateExp, &barExp, 0LL);
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)this, 0LL, 0LL);
  *(float *)(v36 + 36) = barExp;
  *(_DWORD *)(v36 + 40) = lateExp[0];
  if ( !this )
    goto LABEL_85;
  *(_DWORD *)(v36 + 44) = this->fields.m_CachedPtr;
  v41 = v2->fields.baseData;
  if ( !v41 )
    goto LABEL_85;
  *(_DWORD *)(v36 + 48) = v41->fields.adjustHp;
  *(_DWORD *)(v36 + 52) = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
  *(_DWORD *)(v36 + 56) = v41->fields.adjustAtk;
  this = (LimitCntUpControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_85;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v36, v40);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v29,
                                  (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_85;
  infoBack_high = HIDWORD(this->fields.infoBack);
  this = (LimitCntUpControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  if ( !this )
    goto LABEL_85;
  v84 = v31;
  this = (LimitCntUpControl_o *)CombineLimitMaster__GetEntity((CombineLimitMaster_o *)this, infoBack_high, v32, 0LL);
  if ( !this )
    goto LABEL_85;
  m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
  v44 = this;
  combineEventList = (System_Collections_Generic_List_object__o *)v2->fields.combineEventList;
  p_spendQpVal = &v2->fields.spendQpVal;
  v2->fields.spendQpVal = m_CancellationTokenSource;
  combineRootComponent = v44->fields.combineRootComponent;
  v47 = *(_QWORD *)&v44->fields.type;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v86,
      combineEventList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    *(_OWORD *)&v87.fields._list = *(_OWORD *)&v86.fields.currentCryptoKey;
    v87.fields._current = (Il2CppObject *)v86.fields.fakeValue;
    while ( 1 )
    {
      v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v87,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v49 )
        break;
      if ( !v87.fields._current )
        sub_1BCB254(v49, v50);
      if ( HIDWORD(v87.fields._current[1].klass) == 6 )
      {
        v51 = *(float *)&v87.fields._current[3].monitor * (float)*p_spendQpVal;
        v52 = (int)v51;
        if ( v51 == INFINITY )
          v52 = 0x80000000;
        *p_spendQpVal = v52;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v87,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  this = (LimitCntUpControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0LL);
  qpLb = v2->fields.qpLb;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !qpLb )
      goto LABEL_85;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2->fields.qpLb, 0LL);
    v54 = v84;
    if ( !this )
      goto LABEL_85;
    this = (LimitCntUpControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    if ( !this )
      goto LABEL_85;
    this = (LimitCntUpControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    this = (LimitCntUpControl_o *)System_Int32__ToString_63959136(
                                    (int)v2 + 416,
                                    (System_String_o *)StringLiteral_9161/*"N0"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_85;
    UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
    limitCntUpItemList = v2->fields.limitCntUpItemList;
    if ( !limitCntUpItemList )
      goto LABEL_85;
    v81 = infoBack_high;
    v82 = lv;
    v83 = v33;
    if ( !v47 )
      goto LABEL_85;
    size = (unsigned int)limitCntUpItemList->fields._size;
    v57 = *(_QWORD *)(v47 + 24);
    v58 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v58,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    p_itemInfoList_k__BackingField = (LimitCntUpControl_o **)&v2->fields._itemInfoList_k__BackingField;
    v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v58;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields._itemInfoList_k__BackingField, (int32_t)v58, v60, v61);
    if ( (int)size >= 1 )
    {
      v62 = 0LL;
      v63 = v47 + 32;
      p_myFSM = &combineRootComponent->fields.myFSM;
      v65 = (int)v57 - 1;
      do
      {
        this = (LimitCntUpControl_o *)v2->fields.limitCntUpItemList;
        if ( !this )
          goto LABEL_85;
        this = (LimitCntUpControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v62,
                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( (__int64)v62 <= v65 )
        {
          if ( v62 >= *(unsigned int *)(v47 + 24) )
            goto LABEL_86;
          if ( !combineRootComponent )
            goto LABEL_85;
          if ( v62 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
            goto LABEL_86;
          v67 = this;
          CombineMenuControl__AddCombineItemInfo(
            (CombineMenuControl_o *)v2,
            *(_DWORD *)(v63 + 4 * v62),
            *((_DWORD *)p_myFSM + v62),
            0LL);
          v68 = v2->fields.baseData;
          if ( !v68 )
            goto LABEL_85;
          v69 = *(_OWORD *)&v68->fields.userId.fields.fakeValue;
          *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v68->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v86.fields.fakeValue = v69;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v85 = v86;
          this = (LimitCntUpControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v85, 0LL);
          if ( v62 >= *(unsigned int *)(v47 + 24)
            || v62 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
          {
LABEL_86:
            sub_1BCB25C(this, method, v66);
          }
          if ( !v67 )
            goto LABEL_85;
          LimitCntUpItemComponent__setLimitUpItemInfo(
            (LimitCntUpItemComponent_o *)v67,
            (int64_t)this,
            *(_DWORD *)(v63 + 4 * v62),
            *((_DWORD *)p_myFSM + v62),
            v70);
          this = *p_itemInfoList_k__BackingField;
          if ( !*p_itemInfoList_k__BackingField )
            goto LABEL_85;
          v73 = *(_QWORD *)&this->fields.m_CachedPtr;
          v74 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v73 )
            goto LABEL_85;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v73 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v67,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = v73 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v76 + 32) = v67;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v76 + 32), (int32_t)v67, v71, v72);
          }
        }
      }
      while ( size != ++v62 );
    }
    this = (LimitCntUpControl_o *)v2->fields.qpLb;
    if ( !this )
      goto LABEL_85;
    v93.fields.r = 1.0;
    v93.fields.g = 1.0;
    v93.fields.b = 1.0;
    v93.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v93, 0LL);
    lv = v82;
    v33 = v83;
    v54 = v84;
    infoBack_high = v81;
    v2->fields._IsExeCombine_k__BackingField = 1;
  }
  if ( lv < v54 )
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
    v94.fields.r = 1.0;
    v94.fields.g = 0.0;
    v94.fields.b = 0.0;
    v94.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v94, 0LL);
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v2->fields._itemInfoList_k__BackingField && !LimitCntUpControl__CheckItemHaveNum(v2, method) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (LimitCntUpControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  if ( !this )
    goto LABEL_85;
  this = (LimitCntUpControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                  (CombineLimitReleaseMaster_o *)this,
                                  &v88,
                                  infoBack_high,
                                  v33,
                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_84;
  if ( !v88 )
LABEL_85:
    sub_1BCB254(this, method);
  condType = v88->fields.condType;
  condTargetId = v88->fields.condTargetId;
  condNum = v88->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL) )
  {
    v2->fields.isSealCombineLimit = 1;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
LABEL_84:
  LimitCntUpControl__SetExeBtnState(v2, method);
  LimitCntUpControl__CheckConductionWire(v2, v80);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__SetStateInfoMsg(LimitCntUpControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v14; // x20
  __int64 *v15; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4B202FC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_5744/*"EXE_SUMMON_COMBINE_TXT"*/, v6);
    sub_1BCAFF8(&StringLiteral_7381/*"INFO_MSG_LIMITUP"*/, v7);
    sub_1BCAFF8(&StringLiteral_8730/*"MSG_MAXLV_LIMITUP_BASE"*/, v8);
    sub_1BCAFF8(&StringLiteral_12087/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_1BCAFF8(&StringLiteral_8729/*"MSG_LIMITUP_MAX"*/, v10);
    sub_1BCAFF8(&StringLiteral_12088/*"SHORT_QP_INFO_MSG"*/, v11);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v12);
    byte_4B202FC = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              detailInfoLb,
                                              (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !detailInfoLb )
    goto LABEL_36;
  v16.fields.r = 0.0;
  v16.fields.a = 1.0;
  v16.fields.g = 0.87891;
  v16.fields.b = 0.98828;
  v14 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v16, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
LABEL_11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = &StringLiteral_5744/*"EXE_SUMMON_COMBINE_TXT"*/;
      goto LABEL_14;
    }
    detailInfoLb = (UnityEngine_Component_o *)this->fields.baseData;
    if ( detailInfoLb )
    {
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)detailInfoLb, 0LL) )
      {
        v17.fields.r = 1.0;
        v17.fields.g = 1.0;
        v17.fields.b = 1.0;
        v17.fields.a = 1.0;
        UIWidget__set_color(v14, v17, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_8729/*"MSG_LIMITUP_MAX"*/;
        goto LABEL_14;
      }
      if ( !this->fields._IsExeCombine_k__BackingField )
      {
        if ( !this->fields.isMaxLv )
        {
          v19.fields.r = 1.0;
          v19.fields.g = 1.0;
          v19.fields.b = 1.0;
          v19.fields.a = 1.0;
          UIWidget__set_color(v14, v19, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v15 = &StringLiteral_8730/*"MSG_MAXLV_LIMITUP_BASE"*/;
          goto LABEL_14;
        }
        if ( !this->fields.isItemNum )
        {
          v20.fields.r = 1.0;
          v20.fields.g = 1.0;
          v20.fields.b = 1.0;
          v20.fields.a = 1.0;
          UIWidget__set_color(v14, v20, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v15 = &StringLiteral_12087/*"SHORT_ITEM_INFO_MSG"*/;
          goto LABEL_14;
        }
        if ( !this->fields.isQpNum )
        {
          v18.fields.r = 1.0;
          v18.fields.g = 1.0;
          v18.fields.b = 1.0;
          v18.fields.a = 1.0;
          UIWidget__set_color(v14, v18, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v15 = &StringLiteral_12088/*"SHORT_QP_INFO_MSG"*/;
          goto LABEL_14;
        }
      }
      goto LABEL_11;
    }
LABEL_36:
    sub_1BCB254(detailInfoLb, *(_QWORD *)&state);
  }
  if ( !v3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = &StringLiteral_7381/*"INFO_MSG_LIMITUP"*/;
LABEL_14:
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v15, 0LL);
    goto LABEL_16;
  }
  *(_QWORD *)&state = StringLiteral_1/*""*/;
LABEL_16:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall LimitCntUpControl__SetUnSealedQuestTransitionBtnState(
        LimitCntUpControl_o *this,
        const MethodInfo *method)
{
  bool IsUnSealedQuestTransitionBtnActive; // w0
  bool v4; // w21
  bool v5; // w20
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  UnityEngine_GameObject_o *unSealedQuestTransitionBtnObj; // x0
  UnityEngine_GameObject_c *klass; // x8

  IsUnSealedQuestTransitionBtnActive = LimitCntUpControl__IsUnSealedQuestTransitionBtnActive(this, method);
  v4 = IsUnSealedQuestTransitionBtnActive;
  v5 = IsUnSealedQuestTransitionBtnActive;
  LimitCntUpControl__UnSealedConditionTextSet(this, IsUnSealedQuestTransitionBtnActive, v6);
  unSealedQuestTransitionBtnObj = this->fields.unSealedQuestTransitionBtnObj;
  if ( !unSealedQuestTransitionBtnObj )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(unSealedQuestTransitionBtnObj, v4, 0LL);
  if ( v5 && !this->fields.isQuestOpen )
  {
    unSealedQuestTransitionBtnObj = (UnityEngine_GameObject_o *)this->fields.unSealedQuestTransitionBtn;
    if ( unSealedQuestTransitionBtnObj )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)unSealedQuestTransitionBtnObj, 0, 0LL);
      unSealedQuestTransitionBtnObj = (UnityEngine_GameObject_o *)this->fields.unSealedQuestTransitionBtn;
      if ( unSealedQuestTransitionBtnObj )
      {
        klass = unSealedQuestTransitionBtnObj->klass;
        goto LABEL_7;
      }
    }
LABEL_11:
    sub_1BCB254(unSealedQuestTransitionBtnObj, v7);
  }
  unSealedQuestTransitionBtnObj = (UnityEngine_GameObject_o *)this->fields.unSealedQuestTransitionBtn;
  if ( !unSealedQuestTransitionBtnObj )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)unSealedQuestTransitionBtnObj, 1, 0LL);
  unSealedQuestTransitionBtnObj = (UnityEngine_GameObject_o *)this->fields.unSealedQuestTransitionBtn;
  if ( !unSealedQuestTransitionBtnObj )
    goto LABEL_11;
  klass = unSealedQuestTransitionBtnObj->klass;
LABEL_7:
  ((void (*)(void))klass[1]._1.implementedInterfaces)();
}


void __fastcall LimitCntUpControl__ShowItemListInfo(LimitCntUpControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0
  const MethodInfo *v4; // x1

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
  {
    sub_1BCB254(preSelectBaseLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  if ( this->fields.isSelectBase )
    LimitCntUpControl__SetLimitUpInfo(this, v4);
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpControl__UnSealedConditionTextSet(
        LimitCntUpControl_o *this,
        bool isButtonActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantLimitImageMaster_o *Master_object; // x0
  __int64 v10; // x1
  ServantLimitImageMaster_o *v11; // x21
  struct UserServantEntity_o *v12; // x8
  UILabel_o *longUnSealedConditionText; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  float v16; // s0
  struct UserServantEntity_o *baseData; // x8
  UILabel_o *shortUnSealedConditionText; // x22
  __int64 v19; // x23
  __int64 v20; // x24
  float v21; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B20300 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, isButtonActive);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_3567/*"COMBINE_LIMIT_COUNT_SEALED_SHORT_DIALOG_MESSAGE"*/, v7);
    sub_1BCAFF8(&StringLiteral_3566/*"COMBINE_LIMIT_COUNT_SEALED_LONG_DIALOG_MESSAGE"*/, v8);
    byte_4B20300 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this->fields.baseData )
    goto LABEL_25;
  v11 = Master_object;
  Master_object = (ServantLimitImageMaster_o *)UserServantEntity__isLimitCountMax(this->fields.baseData, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    baseData = this->fields.baseData;
    if ( baseData )
    {
      shortUnSealedConditionText = this->fields.shortUnSealedConditionText;
      v20 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v20;
      *(_QWORD *)&v23.fields.fakeValue = v19;
      Master_object = (ServantLimitImageMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                     v23,
                                                     0LL);
      if ( v11 )
      {
        Master_object = (ServantLimitImageMaster_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                       v11,
                                                       (System_String_o *)StringLiteral_3567/*"COMBINE_LIMIT_COUNT_SEALED_SHORT_DIALOG_MESSAGE"*/,
                                                       (int32_t)Master_object,
                                                       0LL);
        if ( shortUnSealedConditionText )
        {
          UILabel__set_text(shortUnSealedConditionText, (System_String_o *)Master_object, 0LL);
          v21 = 0.0;
          if ( isButtonActive )
            v21 = 20.0;
          ComponentHelper__SetLocalPositionY(
            (UnityEngine_Component_o *)this->fields.shortUnSealedConditionText,
            v21,
            0LL);
          GameObjectExtensions__SetLocalPosition_35356744(
            this->fields.unSealedQuestTransitionBtnObj,
            this->fields.unSealedQuestTransitionBtnPosRight,
            0LL);
          Master_object = (ServantLimitImageMaster_o *)this->fields.shortUnSealedConditionTextObj;
          if ( Master_object )
            goto LABEL_24;
        }
      }
    }
LABEL_25:
    sub_1BCB254(Master_object, v10);
  }
  v12 = this->fields.baseData;
  if ( !v12 )
    goto LABEL_25;
  longUnSealedConditionText = this->fields.longUnSealedConditionText;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Master_object = (ServantLimitImageMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                 v22,
                                                 0LL);
  if ( !v11 )
    goto LABEL_25;
  Master_object = (ServantLimitImageMaster_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                 v11,
                                                 (System_String_o *)StringLiteral_3566/*"COMBINE_LIMIT_COUNT_SEALED_LONG_DIALOG_MESSAGE"*/,
                                                 (int32_t)Master_object,
                                                 0LL);
  if ( !longUnSealedConditionText )
    goto LABEL_25;
  UILabel__set_text(longUnSealedConditionText, (System_String_o *)Master_object, 0LL);
  v16 = -15.0;
  if ( isButtonActive )
    v16 = 7.0;
  ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.longUnSealedConditionText, v16, 0LL);
  GameObjectExtensions__SetLocalPosition_35356744(
    this->fields.unSealedQuestTransitionBtnObj,
    this->fields.unSealedQuestTransitionBtnPosCenter,
    0LL);
  Master_object = (ServantLimitImageMaster_o *)this->fields.longUnSealedConditionTextObj;
  if ( !Master_object )
    goto LABEL_25;
LABEL_24:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
}


void __fastcall LimitCntUpControl___OnConfirm_b__63_0(LimitCntUpControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B20302 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4B20302 = 1;
  }
  ActionExtensions__Call(this->fields.unSealedQuestTransitionAction, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(Instance, v5);
  }
  BYTE6(Instance[10].monitor) = 0;
}


System_Collections_Generic_List_LimitCntUpItemComponent__o *__fastcall LimitCntUpControl__get_itemInfoList(
        LimitCntUpControl_o *this,
        const MethodInfo *method)
{
  return this->fields._itemInfoList_k__BackingField;
}


void __fastcall LimitCntUpControl__set_itemInfoList(
        LimitCntUpControl_o *this,
        System_Collections_Generic_List_LimitCntUpItemComponent__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._itemInfoList_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._itemInfoList_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall LimitCntUpControl___c__DisplayClass66_0___ctor(
        LimitCntUpControl___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LimitCntUpControl___c__DisplayClass66_0___GetUnSealedQuestTransitionAction_b__0(
        LimitCntUpControl___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t questId; // w19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B20303 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v3);
    byte_4B20303 = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v6);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}