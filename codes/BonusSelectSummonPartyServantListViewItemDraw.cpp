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

  if ( (byte_4214C02 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, lineupEntity);
    sub_B0D8A4(&StringLiteral_22421/*"story"*/, v4);
    sub_B0D8A4(&StringLiteral_19664/*"img_ribbon_{0}"*/, v5);
    sub_B0D8A4(&StringLiteral_17715/*"constant"*/, v6);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_20289/*"limited"*/, v7);
    byte_4214C02 = 1;
  }
  if ( !lineupEntity )
    sub_B0D97C(this);
  SummonCategoryId = GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0LL);
  switch ( SummonCategoryId )
  {
    case 2:
      v9 = &StringLiteral_22421/*"story"*/;
      return System_String__Format((System_String_o *)StringLiteral_19664/*"img_ribbon_{0}"*/, (Il2CppObject *)*v9, 0LL);
    case 1:
      v9 = &StringLiteral_20289/*"limited"*/;
      return System_String__Format((System_String_o *)StringLiteral_19664/*"img_ribbon_{0}"*/, (Il2CppObject *)*v9, 0LL);
    case 0:
      v9 = &StringLiteral_17715/*"constant"*/;
      return System_String__Format((System_String_o *)StringLiteral_19664/*"img_ribbon_{0}"*/, (Il2CppObject *)*v9, 0LL);
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
  const MethodInfo *v8; // x2
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  bool v11; // w1

  if ( (byte_4214BFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    byte_4214BFF = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !baseButton
      || (baseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    baseButton,
                                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, isInput, 0LL),
          (baseButton = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_14:
      sub_B0D97C(baseButton);
    }
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))baseButton->klass[1]._1.implementedInterfaces)(
      baseButton,
      0LL,
      1LL,
      baseButton->klass[1]._1.interfaceOffsets);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(this, item, v8);
    servantEntity = item->fields.servantEntity;
    baseButton = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( servantEntity && (baseItem = item->fields.baseItem) != 0LL )
    {
      v11 = servantEntity == baseItem->fields.servantEntity;
      if ( !baseButton )
        goto LABEL_14;
    }
    else
    {
      v11 = 0;
      if ( !baseButton )
        goto LABEL_14;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseButton, v11, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__SetItem(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItemDraw_o *v6; // x20
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
  UISprite_o *summonCategorySprite; // x21
  BonusSelectSummonPartyServantListViewItemDraw_o *v19; // x0
  const MethodInfo *v20; // x2
  System_String_o *SummonCategorySpriteName; // x22
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  struct ServantEntity_o *v23; // x8
  BonusSelectSummonPartyServantListViewItemDraw_o *v24; // x22
  System_String_o **v25; // x8
  UISprite_o *summonInfoSprite; // x21
  System_String_o *v27; // x22
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *selectObject; // x21
  struct ServantEntity_o *v30; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  bool v32; // w1
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v6 = this;
  if ( (byte_4214C00 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_19562/*"img_icon_summoned"*/, v12);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_19561/*"img_icon_not_summoned"*/, v13);
    byte_4214C00 = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    servantEntity = item->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_41;
    servantFaceIcon = v6->fields.servantFaceIcon;
    v17 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v16 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v17;
    *(_QWORD *)&v34.fields.fakeValue = v16;
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                v34,
                                                                0LL);
    if ( !servantFaceIcon )
      goto LABEL_41;
    ServantFaceIconComponent__Set_29623744(
      servantFaceIcon,
      (int32_t)this,
      0,
      -1,
      0,
      0LL,
      0LL,
      2,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_41;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.treasureDeviceIconLabel;
    if ( !this )
      goto LABEL_41;
    UIIconLabel__Set((UIIconLabel_o *)this, item->fields.iconLabelInfo, 0LL);
    summonCategorySprite = v6->fields.summonCategorySprite;
    SummonCategorySpriteName = BonusSelectSummonPartyServantListViewItemDraw__GetSummonCategorySpriteName(
                                 v19,
                                 item->fields.lineupEntity,
                                 v20);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(summonCategorySprite, SummonCategorySpriteName, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
    v23 = item->fields.servantEntity;
    if ( !v23
      || (v24 = this,
          this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                      v23->fields.id,
                                                                      0LL),
          !Master_WarQuestSelectionMaster) )
    {
LABEL_41:
      sub_B0D97C(this);
    }
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UserServantCollectionMaster__TryGetEntity(
                                                                Master_WarQuestSelectionMaster,
                                                                &entity,
                                                                (int64_t)v24,
                                                                (int32_t)this,
                                                                0LL);
    v25 = (System_String_o **)&StringLiteral_19561/*"img_icon_not_summoned"*/;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_41;
      if ( entity->fields.status == 2 )
        v25 = (System_String_o **)&StringLiteral_19562/*"img_icon_summoned"*/;
    }
    summonInfoSprite = v6->fields.summonInfoSprite;
    v27 = *v25;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(summonInfoSprite, v27, 0LL);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(v6, item, v28);
    selectObject = (UnityEngine_Object_o *)v6->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      v30 = item->fields.servantEntity;
      this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.selectObject;
      if ( v30 && (baseItem = item->fields.baseItem) != 0LL )
      {
        v32 = v30 == baseItem->fields.servantEntity;
        if ( !this )
          goto LABEL_41;
      }
      else
      {
        v32 = 0;
        if ( !this )
          goto LABEL_41;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v32, 0LL);
    }
  }
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *maskMessageLabel; // x20
  bool v8; // w21
  System_String_o *Empty; // x1
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9

  v4 = this;
  if ( (byte_4214C01 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&string_TypeInfo, v5);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_12461/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/, v6);
    byte_4214C01 = 1;
  }
  if ( !item )
    goto LABEL_20;
  if ( item->fields.isPossibleSelect )
  {
    maskMessageLabel = v4->fields.maskMessageLabel;
    goto LABEL_6;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity || (baseItem = item->fields.baseItem) == 0LL )
  {
    maskMessageLabel = v4->fields.maskMessageLabel;
    goto LABEL_13;
  }
  maskMessageLabel = v4->fields.maskMessageLabel;
  if ( servantEntity != baseItem->fields.servantEntity )
  {
LABEL_13:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_12461/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/,
                                                                0LL);
    Empty = (System_String_o *)this;
    v8 = 1;
    if ( maskMessageLabel )
      goto LABEL_17;
LABEL_20:
    sub_B0D97C(this);
  }
LABEL_6:
  v8 = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !maskMessageLabel )
    goto LABEL_20;
LABEL_17:
  UILabel__set_text(maskMessageLabel, Empty, 0LL);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_20;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0LL);
}