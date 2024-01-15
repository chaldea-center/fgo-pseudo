void __fastcall BonusSelectSummonPartyServantListViewItemDraw___ctor(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__Awake(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__CheckAssert(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall BonusSelectSummonPartyServantListViewItemDraw__GetSummonCategorySpriteName(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t SummonCategoryId; // w0
  __int64 *v9; // x8

  if ( (byte_40FB113 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, lineupEntity);
    sub_B16FFC(&StringLiteral_22253/*"story"*/, v4);
    sub_B16FFC(&StringLiteral_19528/*"img_ribbon_{0}"*/, v5);
    sub_B16FFC(&StringLiteral_17592/*"constant"*/, v6);
    sub_B16FFC(&StringLiteral_20143/*"limited"*/, v7);
    byte_40FB113 = 1;
  }
  if ( !lineupEntity )
    sub_B170D4();
  SummonCategoryId = GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0LL);
  switch ( SummonCategoryId )
  {
    case 2:
      v9 = &StringLiteral_22253/*"story"*/;
      return System_String__Format((System_String_o *)StringLiteral_19528/*"img_ribbon_{0}"*/, (Il2CppObject *)*v9, 0LL);
    case 1:
      v9 = &StringLiteral_20143/*"limited"*/;
      return System_String__Format((System_String_o *)StringLiteral_19528/*"img_ribbon_{0}"*/, (Il2CppObject *)*v9, 0LL);
    case 0:
      v9 = &StringLiteral_17592/*"constant"*/;
      return System_String__Format((System_String_o *)StringLiteral_19528/*"img_ribbon_{0}"*/, (Il2CppObject *)*v9, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__SetInput(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseButton; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v9; // x0
  const MethodInfo *v10; // x2
  struct ServantEntity_o *servantEntity; // x8
  UnityEngine_GameObject_o *selectObject; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  bool v14; // w1

  if ( (byte_40FB110 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    byte_40FB110 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !baseButton
      || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                baseButton,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL), (v9 = this->fields.baseButton) == 0LL) )
    {
LABEL_14:
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v9->klass->vtable._14_SetState.method)(
      v9,
      0LL,
      1LL,
      v9->klass->vtable._15_OnPress.methodPtr);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(this, item, v10);
    servantEntity = item->fields.servantEntity;
    selectObject = this->fields.selectObject;
    if ( servantEntity && (baseItem = item->fields.baseItem) != 0LL )
    {
      v14 = servantEntity == baseItem->fields.servantEntity;
      if ( !selectObject )
        goto LABEL_14;
    }
    else
    {
      v14 = 0;
      if ( !selectObject )
        goto LABEL_14;
    }
    UnityEngine_GameObject__SetActive(selectObject, v14, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__SetItem(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ServantEntity_o *servantEntity; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  int32_t v18; // w0
  ServantFaceIconComponent_o *v19; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x0
  UISprite_o *summonCategorySprite; // x21
  BonusSelectSummonPartyServantListViewItemDraw_o *v22; // x0
  const MethodInfo *v23; // x2
  System_String_o *SummonCategorySpriteName; // x22
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  struct ServantEntity_o *v27; // x8
  int64_t v28; // x22
  int32_t v29; // w0
  bool v30; // w0
  System_String_o **v31; // x8
  UISprite_o *summonInfoSprite; // x21
  System_String_o *v33; // x22
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *selectObject; // x21
  struct ServantEntity_o *v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  bool v39; // w1
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_40FB111 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_19426/*"img_icon_summoned"*/, v12);
    sub_B16FFC(&StringLiteral_19425/*"img_icon_not_summoned"*/, v13);
    byte_40FB111 = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    servantEntity = item->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_41;
    servantFaceIcon = this->fields.servantFaceIcon;
    v17 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v16 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v17;
    *(_QWORD *)&v41.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_41;
    ServantFaceIconComponent__Set_30702780(servantFaceIcon, v18, 0, -1, 0, 0LL, 0LL, 2, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
    v19 = this->fields.servantFaceIcon;
    if ( !v19 )
      goto LABEL_41;
    ServantFaceIconComponent__SetDispClassSprite(v19, 1, 0LL);
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    if ( !treasureDeviceIconLabel )
      goto LABEL_41;
    UIIconLabel__Set(treasureDeviceIconLabel, item->fields.iconLabelInfo, 0LL);
    summonCategorySprite = this->fields.summonCategorySprite;
    SummonCategorySpriteName = BonusSelectSummonPartyServantListViewItemDraw__GetSummonCategorySpriteName(
                                 v22,
                                 item->fields.lineupEntity,
                                 v23);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(summonCategorySprite, SummonCategorySpriteName, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v27 = item->fields.servantEntity;
    if ( !v27
      || (v28 = UserId,
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27->fields.id, 0LL),
          !Master_WarQuestSelectionMaster) )
    {
LABEL_41:
      sub_B170D4();
    }
    v30 = UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v28, v29, 0LL);
    v31 = (System_String_o **)&StringLiteral_19425/*"img_icon_not_summoned"*/;
    if ( v30 )
    {
      if ( !entity )
        goto LABEL_41;
      if ( entity->fields.status == 2 )
        v31 = (System_String_o **)&StringLiteral_19426/*"img_icon_summoned"*/;
    }
    summonInfoSprite = this->fields.summonInfoSprite;
    v33 = *v31;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(summonInfoSprite, v33, 0LL);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(this, item, v34);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      v36 = item->fields.servantEntity;
      v37 = this->fields.selectObject;
      if ( v36 && (baseItem = item->fields.baseItem) != 0LL )
      {
        v39 = v36 == baseItem->fields.servantEntity;
        if ( !v37 )
          goto LABEL_41;
      }
      else
      {
        v39 = 0;
        if ( !v37 )
          goto LABEL_41;
      }
      UnityEngine_GameObject__SetActive(v37, v39, 0LL);
    }
  }
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *maskMessageLabel; // x20
  bool v8; // w21
  System_String_o *Empty; // x1
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FB112 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12368/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/, v6);
    byte_40FB112 = 1;
  }
  if ( !item )
    goto LABEL_20;
  if ( item->fields.isPossibleSelect )
  {
    maskMessageLabel = this->fields.maskMessageLabel;
    goto LABEL_6;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity || (baseItem = item->fields.baseItem) == 0LL )
  {
    maskMessageLabel = this->fields.maskMessageLabel;
    goto LABEL_13;
  }
  maskMessageLabel = this->fields.maskMessageLabel;
  if ( servantEntity != baseItem->fields.servantEntity )
  {
LABEL_13:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12368/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/, 0LL);
    v8 = 1;
    if ( maskMessageLabel )
      goto LABEL_17;
LABEL_20:
    sub_B170D4();
  }
LABEL_6:
  v8 = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !maskMessageLabel )
    goto LABEL_20;
LABEL_17:
  UILabel__set_text(maskMessageLabel, Empty, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, v8, 0LL);
}