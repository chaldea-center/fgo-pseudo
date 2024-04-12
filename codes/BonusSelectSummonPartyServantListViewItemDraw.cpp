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
  int32_t SummonCategoryId; // w0
  __int64 *v5; // x8

  if ( (byte_42AFEF9 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_22533/*"story"*/);
    sub_B52984(&StringLiteral_19749/*"img_ribbon_{0}"*/);
    sub_B52984(&StringLiteral_17784/*"constant"*/);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_B52984(&StringLiteral_20379/*"limited"*/);
    byte_42AFEF9 = 1;
  }
  if ( !lineupEntity )
    sub_B52A5C(this, lineupEntity);
  SummonCategoryId = GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0LL);
  switch ( SummonCategoryId )
  {
    case 2:
      v5 = &StringLiteral_22533/*"story"*/;
      return System_String__Format((System_String_o *)StringLiteral_19749/*"img_ribbon_{0}"*/, (Il2CppObject *)*v5, 0LL);
    case 1:
      v5 = &StringLiteral_20379/*"limited"*/;
      return System_String__Format((System_String_o *)StringLiteral_19749/*"img_ribbon_{0}"*/, (Il2CppObject *)*v5, 0LL);
    case 0:
      v5 = &StringLiteral_17784/*"constant"*/;
      return System_String__Format((System_String_o *)StringLiteral_19749/*"img_ribbon_{0}"*/, (Il2CppObject *)*v5, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__SetInput(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *v5; // x19
  UnityEngine_Component_o *baseButton; // x0
  const MethodInfo *v8; // x2
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9

  v5 = item;
  if ( (byte_42AFEF6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_42AFEF6 = 1;
  }
  if ( v5 )
  {
    baseButton = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !baseButton
      || (baseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    baseButton,
                                                    (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, isInput, 0LL),
          (baseButton = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_14:
      sub_B52A5C(baseButton, item);
    }
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))baseButton->klass[1]._1.implementedInterfaces)(
      baseButton,
      0LL,
      1LL,
      baseButton->klass[1]._1.interfaceOffsets);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(this, v5, v8);
    servantEntity = v5->fields.servantEntity;
    baseButton = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( servantEntity && (baseItem = v5->fields.baseItem) != 0LL )
    {
      item = (BonusSelectSummonPartyServantListViewItem_o *)(servantEntity == baseItem->fields.servantEntity);
      if ( !baseButton )
        goto LABEL_14;
    }
    else
    {
      item = 0LL;
      if ( !baseButton )
        goto LABEL_14;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseButton, (bool)item, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__SetItem(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *v5; // x19
  BonusSelectSummonPartyServantListViewItemDraw_o *v6; // x20
  struct ServantEntity_o *servantEntity; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  UISprite_o *summonCategorySprite; // x21
  BonusSelectSummonPartyServantListViewItemDraw_o *v12; // x0
  const MethodInfo *v13; // x2
  System_String_o *SummonCategorySpriteName; // x22
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v16; // x8
  BonusSelectSummonPartyServantListViewItemDraw_o *v17; // x22
  System_String_o **v18; // x8
  UISprite_o *summonInfoSprite; // x21
  System_String_o *v20; // x22
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *selectObject; // x21
  struct ServantEntity_o *v23; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v5 = item;
  v6 = this;
  if ( (byte_42AFEF7 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_19647/*"img_icon_summoned"*/);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_B52984(&StringLiteral_19646/*"img_icon_not_summoned"*/);
    byte_42AFEF7 = 1;
  }
  entity = 0LL;
  if ( v5 && mode )
  {
    servantEntity = v5->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_41;
    servantFaceIcon = v6->fields.servantFaceIcon;
    v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v26.fields.currentCryptoKey = v10;
    *(_QWORD *)&v26.fields.fakeValue = v9;
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                v26,
                                                                0LL);
    if ( !servantFaceIcon )
      goto LABEL_41;
    ServantFaceIconComponent__Set_30467316(
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
    UIIconLabel__Set((UIIconLabel_o *)this, v5->fields.iconLabelInfo, 0LL);
    summonCategorySprite = v6->fields.summonCategorySprite;
    SummonCategorySpriteName = BonusSelectSummonPartyServantListViewItemDraw__GetSummonCategorySpriteName(
                                 v12,
                                 v5->fields.lineupEntity,
                                 v13);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(summonCategorySprite, SummonCategorySpriteName, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
    v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.servantEntity;
    if ( !v16
      || (v17 = this,
          this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                      v16[1],
                                                                      0LL),
          !Master_WarQuestSelectionMaster) )
    {
LABEL_41:
      sub_B52A5C(this, item);
    }
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UserServantCollectionMaster__TryGetEntity(
                                                                Master_WarQuestSelectionMaster,
                                                                &entity,
                                                                (int64_t)v17,
                                                                (int32_t)this,
                                                                0LL);
    v18 = (System_String_o **)&StringLiteral_19646/*"img_icon_not_summoned"*/;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_41;
      if ( entity->fields.status == 2 )
        v18 = (System_String_o **)&StringLiteral_19647/*"img_icon_summoned"*/;
    }
    summonInfoSprite = v6->fields.summonInfoSprite;
    v20 = *v18;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(summonInfoSprite, v20, 0LL);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(v6, v5, v21);
    selectObject = (UnityEngine_Object_o *)v6->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      v23 = v5->fields.servantEntity;
      this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.selectObject;
      if ( v23 && (baseItem = v5->fields.baseItem) != 0LL )
      {
        item = (BonusSelectSummonPartyServantListViewItem_o *)(v23 == baseItem->fields.servantEntity);
        if ( !this )
          goto LABEL_41;
      }
      else
      {
        item = 0LL;
        if ( !this )
          goto LABEL_41;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
    }
  }
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *v3; // x20
  BonusSelectSummonPartyServantListViewItemDraw_o *v4; // x19
  UILabel_o *maskMessageLabel; // x20
  bool v6; // w21
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9

  v3 = item;
  v4 = this;
  if ( (byte_42AFEF8 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_B52984(&StringLiteral_12512/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/);
    byte_42AFEF8 = 1;
  }
  if ( !v3 )
    goto LABEL_20;
  if ( v3->fields.isPossibleSelect )
  {
    maskMessageLabel = v4->fields.maskMessageLabel;
    goto LABEL_6;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity || (baseItem = v3->fields.baseItem) == 0LL )
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
                                                                (System_String_o *)StringLiteral_12512/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/,
                                                                0LL);
    item = (BonusSelectSummonPartyServantListViewItem_o *)this;
    v6 = 1;
    if ( maskMessageLabel )
      goto LABEL_17;
LABEL_20:
    sub_B52A5C(this, item);
  }
LABEL_6:
  v6 = 0;
  item = (BonusSelectSummonPartyServantListViewItem_o *)string_TypeInfo->static_fields->Empty;
  if ( !maskMessageLabel )
    goto LABEL_20;
LABEL_17:
  UILabel__set_text(maskMessageLabel, (System_String_o *)item, 0LL);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_20;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6, 0LL);
}