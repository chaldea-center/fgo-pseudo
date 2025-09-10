void BonusSelectSummonPartyServantListViewItemDraw___ctor(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BonusSelectSummonPartyServantListViewItemDraw__Awake(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISprite_o *v9; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3);
  v9 = this->fields.maskSprite;
  if ( v9 )
    mSpriteName = v9->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskName, (int32_t)mSpriteName, v7, v8);
}


void BonusSelectSummonPartyServantListViewItemDraw__CheckAssert(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *BonusSelectSummonPartyServantListViewItemDraw__GetSummonCategorySpriteName(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        GachaBonusSelectLineupEntity_o *lineupEntity,
        const MethodInfo *method)
{
  int32_t SummonCategoryId; // w0
  __int64 *v5; // x8

  if ( (byte_4C236BD & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_23704/*"story"*/);
    sub_1C2D490(&StringLiteral_20531/*"img_ribbon_{0}"*/);
    sub_1C2D490(&StringLiteral_18217/*"constant"*/);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_1C2D490(&StringLiteral_21224/*"limited"*/);
    byte_4C236BD = 1;
  }
  if ( !lineupEntity )
    sub_1C2D6EC(this, lineupEntity);
  SummonCategoryId = GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0);
  switch ( SummonCategoryId )
  {
    case 2:
      v5 = &StringLiteral_23704/*"story"*/;
      return System_String__Format((System_String_o *)StringLiteral_20531/*"img_ribbon_{0}"*/, (Il2CppObject *)*v5, 0);
    case 1:
      v5 = &StringLiteral_21224/*"limited"*/;
      return System_String__Format((System_String_o *)StringLiteral_20531/*"img_ribbon_{0}"*/, (Il2CppObject *)*v5, 0);
    case 0:
      v5 = &StringLiteral_18217/*"constant"*/;
      return System_String__Format((System_String_o *)StringLiteral_20531/*"img_ribbon_{0}"*/, (Il2CppObject *)*v5, 0);
  }
  return string_TypeInfo->static_fields->Empty;
}


void BonusSelectSummonPartyServantListViewItemDraw__SetInput(
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
  if ( (byte_4C236BA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C236BA = 1;
  }
  if ( v5 )
  {
    baseButton = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !baseButton )
      goto LABEL_14;
    baseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              baseButton,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !baseButton )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, isInput, 0);
    baseButton = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !baseButton )
      goto LABEL_14;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))baseButton->klass[1]._1.nestedTypes)(
      baseButton,
      0,
      1,
      baseButton->klass[1]._1.implementedInterfaces);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(this, v5, v8);
    servantEntity = v5->fields.servantEntity;
    baseButton = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( servantEntity && (baseItem = v5->fields.baseItem) != 0 )
      item = (BonusSelectSummonPartyServantListViewItem_o *)(servantEntity == baseItem->fields.servantEntity);
    else
      item = 0;
    if ( !baseButton )
LABEL_14:
      sub_1C2D6EC(baseButton, item);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseButton, (bool)item, 0);
  }
}


void BonusSelectSummonPartyServantListViewItemDraw__SetItem(
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
  Il2CppObject *Master_object; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v16; // x8
  UIIconLabel_c *klass; // x22
  UISprite_o *summonInfoSprite; // x21
  __int64 *v19; // x8
  System_String_o *v20; // x22
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *selectObject; // x21
  struct ServantEntity_o *v23; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  UserServantCollectionEntity_o *entity; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v5 = item;
  v6 = this;
  if ( (byte_4C236BB & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_20403/*"img_icon_summoned"*/);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_1C2D490(&StringLiteral_20402/*"img_icon_not_summoned"*/);
    byte_4C236BB = 1;
  }
  entity = 0;
  if ( !v5 || !mode )
    return;
  servantEntity = v5->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_42;
  servantFaceIcon = v6->fields.servantFaceIcon;
  v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v10;
  *(_QWORD *)&v26.fields.fakeValue = v9;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                              v26,
                                                              0);
  if ( !servantFaceIcon )
    goto LABEL_42;
  ServantFaceIconComponent__Set_40785040(
    servantFaceIcon,
    (int32_t)this,
    0,
    -1,
    0,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_42;
  ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, 1, 0);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_42;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)this,
    v6->fields.maskSprite,
    v6->fields.defaultMaskName,
    v6->fields.defaultMaskAtlas,
    0);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.treasureDeviceIconLabel;
  if ( !this )
    goto LABEL_42;
  UIIconLabel__Set((UIIconLabel_o *)this, v5->fields.iconLabelInfo, 0);
  summonCategorySprite = v6->fields.summonCategorySprite;
  SummonCategorySpriteName = BonusSelectSummonPartyServantListViewItemDraw__GetSummonCategorySpriteName(
                               v12,
                               v5->fields.lineupEntity,
                               v13);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(summonCategorySprite, SummonCategorySpriteName, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)NetworkManager_TypeInfo;
  }
  v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.servantEntity;
  if ( !v16 )
    goto LABEL_42;
  klass = this[1].fields.treasureDeviceIconLabel[1].klass;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                              v16[1],
                                                              0);
  if ( !Master_object )
    goto LABEL_42;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UserServantCollectionMaster__TryGetEntity(
                                                              (UserServantCollectionMaster_o *)Master_object,
                                                              &entity,
                                                              (int64_t)klass,
                                                              (int32_t)this,
                                                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_42;
    summonInfoSprite = v6->fields.summonInfoSprite;
    if ( entity->fields.status == 2 )
    {
      v19 = &StringLiteral_20403/*"img_icon_summoned"*/;
      goto LABEL_30;
    }
  }
  else
  {
    summonInfoSprite = v6->fields.summonInfoSprite;
  }
  v19 = &StringLiteral_20402/*"img_icon_not_summoned"*/;
LABEL_30:
  v20 = (System_String_o *)*v19;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(summonInfoSprite, v20, 0);
  BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(v6, v5, v21);
  selectObject = (UnityEngine_Object_o *)v6->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    v23 = v5->fields.servantEntity;
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.selectObject;
    if ( v23 && (baseItem = v5->fields.baseItem) != 0 )
      item = (BonusSelectSummonPartyServantListViewItem_o *)(v23 == baseItem->fields.servantEntity);
    else
      item = 0;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0);
      return;
    }
LABEL_42:
    sub_1C2D6EC(this, item);
  }
}


void BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(
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
  if ( (byte_4C236BC & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_1C2D490(&StringLiteral_12421/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/);
    byte_4C236BC = 1;
  }
  if ( !v3 )
    goto LABEL_19;
  if ( v3->fields.isPossibleSelect )
  {
    maskMessageLabel = v4->fields.maskMessageLabel;
    goto LABEL_6;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity || (baseItem = v3->fields.baseItem) == 0 )
  {
    maskMessageLabel = v4->fields.maskMessageLabel;
LABEL_13:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_12421/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/,
                                                                0);
    item = (BonusSelectSummonPartyServantListViewItem_o *)this;
    v6 = 1;
    if ( maskMessageLabel )
      goto LABEL_16;
LABEL_19:
    sub_1C2D6EC(this, item);
  }
  maskMessageLabel = v4->fields.maskMessageLabel;
  if ( servantEntity != baseItem->fields.servantEntity )
    goto LABEL_13;
LABEL_6:
  v6 = 0;
  item = (BonusSelectSummonPartyServantListViewItem_o *)string_TypeInfo->static_fields->Empty;
  if ( !maskMessageLabel )
    goto LABEL_19;
LABEL_16:
  UILabel__set_text(maskMessageLabel, (System_String_o *)item, 0);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_19;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6, 0);
}