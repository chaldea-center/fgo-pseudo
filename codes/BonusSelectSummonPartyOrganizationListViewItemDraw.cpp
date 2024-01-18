void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw___ctor(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__Awake(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__CheckAssert(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        System_String_o *classIconId,
        bool isUpper,
        bool isUpperOn,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v12; // x22
  System_String_o **v13; // x8
  Il2CppObject *v14; // x1
  System_String_o *v15; // x0

  if ( (byte_4187DDA & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, classIconId);
    sub_B2C35C(&StringLiteral_16164/*"_on{0}"*/, v8);
    sub_B2C35C(&StringLiteral_19314/*"icon_class{0}"*/, v9);
    sub_B2C35C(&StringLiteral_16162/*"_off{0}"*/, v10);
    byte_4187DDA = 1;
  }
  if ( System_String__IsNullOrEmpty(classIconId, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  v12 = StringLiteral_19314/*"icon_class{0}"*/;
  if ( isUpper )
  {
    v13 = (System_String_o **)&StringLiteral_16164/*"_on{0}"*/;
    if ( !isUpperOn )
      v13 = (System_String_o **)&StringLiteral_16162/*"_off{0}"*/;
    v14 = (Il2CppObject *)System_String__Format(*v13, (Il2CppObject *)classIconId, 0LL);
    v15 = (System_String_o *)v12;
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_19314/*"icon_class{0}"*/;
    v14 = (Il2CppObject *)classIconId;
  }
  return System_String__Format(v15, v14, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( item )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    if ( !mode )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( item->fields.servantEntity )
      BonusSelectSummonPartyOrganizationListViewItemDraw__SvtDisp(this, item, v9);
    else
      BonusSelectSummonPartyOrganizationListViewItemDraw__SvtNotDisp(this, item, v9);
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !gameObject )
LABEL_11:
      sub_B2C434(gameObject, v8);
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *restrictionClassSprite; // x0
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *v6; // x0
  const MethodInfo *v7; // x4
  System_String_o *ClassIconSpriteName; // x0
  UISprite_o *v9; // x21
  System_String_o *v10; // x20

  if ( (byte_4187DD9 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    byte_4187DD9 = 1;
  }
  restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
  if ( !restrictionClassSprite )
    goto LABEL_17;
  restrictionClassSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(restrictionClassSprite, 0LL);
  if ( !restrictionClassSprite )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionClassSprite, 1, 0LL);
  if ( !item )
    goto LABEL_17;
  restrictionClassSprite = (UnityEngine_Component_o *)item->fields.gachaBonusSelectEntity;
  if ( !restrictionClassSprite )
    goto LABEL_17;
  restrictionClassSprite = (UnityEngine_Component_o *)GachaBonusSelectEntity__GetClassIconId(
                                                        (GachaBonusSelectEntity_o *)restrictionClassSprite,
                                                        0LL);
  if ( !restrictionClassSprite )
    goto LABEL_17;
  v6 = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))restrictionClassSprite->klass->vtable._3_ToString.method)(
                                                                 restrictionClassSprite,
                                                                 restrictionClassSprite->klass[1]._1.image);
  ClassIconSpriteName = BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
                          v6,
                          (System_String_o *)v6,
                          0,
                          0,
                          v7);
  v9 = this->fields.restrictionClassSprite;
  v10 = ClassIconSpriteName;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetPartyOrganizationImage(v9, v10, 0LL) )
  {
    restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
    if ( restrictionClassSprite )
    {
      UISprite__set_atlas((UISprite_o *)restrictionClassSprite, this->fields.partyOrganizationAtlas, 0LL);
      restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
      if ( restrictionClassSprite )
      {
        UISprite__set_spriteName((UISprite_o *)restrictionClassSprite, v10, 0LL);
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_B2C434(restrictionClassSprite, item);
  }
LABEL_15:
  restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
  if ( !restrictionClassSprite )
    goto LABEL_17;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))restrictionClassSprite->klass[2]._1.typeMetadataHandle)(
    restrictionClassSprite,
    restrictionClassSprite->klass[2]._1.interopData);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        bool isUpperOn,
        const MethodInfo *method)
{
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *v6; // x19
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *v7; // x0
  const MethodInfo *v8; // x4
  System_String_o *ClassIconSpriteName; // x0
  UISprite_o *upperClassSprite; // x21
  System_String_o *v11; // x20

  v6 = this;
  if ( (byte_4187DD8 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)sub_B2C35C(&AtlasManager_TypeInfo, item);
    byte_4187DD8 = 1;
  }
  if ( !item )
    goto LABEL_13;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)item->fields.gachaBonusSelectEntity;
  if ( !this )
    goto LABEL_13;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)GachaBonusSelectEntity__GetClassIconId(
                                                                   (GachaBonusSelectEntity_o *)this,
                                                                   0LL);
  if ( !this )
    goto LABEL_13;
  v7 = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)((__int64 (__fastcall *)(BonusSelectSummonPartyOrganizationListViewItemDraw_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                 this,
                                                                 this->klass[1]._1.image);
  ClassIconSpriteName = BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
                          v7,
                          (System_String_o *)v7,
                          1,
                          isUpperOn,
                          v8);
  upperClassSprite = v6->fields.upperClassSprite;
  v11 = ClassIconSpriteName;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetPartyOrganizationImage(upperClassSprite, v11, 0LL) )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v6->fields.upperClassSprite;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v6->fields.partyOrganizationAtlas, 0LL);
      this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v6->fields.upperClassSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v11, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B2C434(this, item);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SvtDisp(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UINarrowFigureTexture_o *servantNarrowTexture; // x21
  struct ServantEntity_o *servantEntity; // x8
  ServantClassIconComponent_o *servantClassIcon; // x21
  int32_t classId; // w22
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  int32_t RarityId; // w21
  System_String_o *Icon; // x0
  UISprite_o *raritySprite; // x22
  System_String_o *v18; // x21
  const MethodInfo *v19; // x1
  UserServantEntity_o *userServantEntity; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x21
  int32_t tdLevel; // w22
  const MethodInfo *v23; // x1
  UISprite_o *treasureDeviceIconBg; // x21
  UISprite_o *baseSprite; // x21
  const MethodInfo *v26; // x1
  int32_t FrameType; // w0
  UISprite_o *base2Sprite; // x20
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  int32_t v32; // [xsp+1Ch] [xbp-34h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4187DD6 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Rarity_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_16703/*"bg_white"*/, v7);
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)sub_B2C35C(&StringLiteral_16882/*"bonus_select_frame_{0}"*/, v8);
    byte_4187DD6 = 1;
  }
  tdInfo = 0LL;
  if ( !item )
    goto LABEL_29;
  servantNarrowTexture = v4->fields.servantNarrowTexture;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)BonusSelectSummonPartyOrganizationListViewItem__get_SvtId(
                                                                   item,
                                                                   (const MethodInfo *)item);
  if ( !servantNarrowTexture )
    goto LABEL_29;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)this, 0, 0LL, 0LL);
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_29;
  servantClassIcon = v4->fields.servantClassIcon;
  classId = servantEntity->fields.classId;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(
                                                                   item,
                                                                   (const MethodInfo *)item);
  if ( !servantClassIcon )
    goto LABEL_29;
  ServantClassIconComponent__SetImage(servantClassIcon, classId, (int32_t)this, 0LL);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.restrictionClassSprite;
  if ( !this )
    goto LABEL_29;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(v4, item, 1, v13);
  RarityId = BonusSelectSummonPartyOrganizationListViewItem__get_RarityId(item, v14);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon = Rarity__getIcon(RarityId, 0LL);
  raritySprite = v4->fields.raritySprite;
  v18 = Icon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(raritySprite, 0LL);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.raritySprite;
  if ( !this )
    goto LABEL_29;
  UISprite__set_spriteName((UISprite_o *)this, v18, 0LL);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.raritySprite;
  if ( !this )
    goto LABEL_29;
  ((void (__fastcall *)(BonusSelectSummonPartyOrganizationListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  userServantEntity = item->fields.userServantEntity;
  if ( !userServantEntity )
  {
    treasureDeviceIconLabel = v4->fields.treasureDeviceIconLabel;
    tdLevel = BonusSelectSummonPartyOrganizationListViewItem__get_tdLevel(item, v19);
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(
                                                                     item,
                                                                     v23);
    if ( treasureDeviceIconLabel )
    {
      UIIconLabel__Set_41609428(treasureDeviceIconLabel, 33, tdLevel, (int32_t)this, 0, 0LL, 0, 0, 0, 0LL);
      goto LABEL_25;
    }
LABEL_29:
    sub_B2C434(this, item);
  }
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)UserServantEntity__getTreasureDeviceInfo(
                                                                   userServantEntity,
                                                                   &tdInfo,
                                                                   -1,
                                                                   -1,
                                                                   0,
                                                                   0LL);
  if ( !tdInfo )
    goto LABEL_29;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.treasureDeviceIconLabel;
  if ( !this )
    goto LABEL_29;
  UIIconLabel__Set_41609428((UIIconLabel_o *)this, 33, tdInfo->fields.lv, tdInfo->fields.maxLv, 0, 0LL, 0, 0, 0, 0LL);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.restrictionClassSprite;
  if ( !this )
    goto LABEL_29;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_25:
  treasureDeviceIconBg = v4->fields.treasureDeviceIconBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(treasureDeviceIconBg, (System_String_o *)StringLiteral_16703/*"bg_white"*/, 0LL);
  baseSprite = v4->fields.baseSprite;
  FrameType = BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(item, v26);
  AtlasManager__SetFormationBase(baseSprite, FrameType, v4->fields.partyOrganizationAtlas, 0, 0LL);
  base2Sprite = v4->fields.base2Sprite;
  v32 = BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(item, v29);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v31 = System_String__Format((System_String_o *)StringLiteral_16882/*"bonus_select_frame_{0}"*/, v30, 0LL);
  AtlasManager__SetEventSprite(base2Sprite, v31, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SvtNotDisp(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  UISprite_o *baseSprite; // x20
  UIAtlas_o *partyOrganizationAtlas; // x21

  if ( (byte_4187DD7 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&string_TypeInfo, v5);
    byte_4187DD7 = 1;
  }
  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    goto LABEL_13;
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.servantClassIcon;
  if ( !servantNarrowTexture )
    goto LABEL_13;
  ServantClassIconComponent__Clear((ServantClassIconComponent_o *)servantNarrowTexture, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.raritySprite;
  if ( !servantNarrowTexture )
    goto LABEL_13;
  UISprite__set_spriteName((UISprite_o *)servantNarrowTexture, 0LL, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.treasureDeviceIconLabel;
  if ( !servantNarrowTexture )
    goto LABEL_13;
  UIIconLabel__Clear((UIIconLabel_o *)servantNarrowTexture, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.treasureDeviceIconBg;
  if ( !servantNarrowTexture )
    goto LABEL_13;
  UISprite__set_spriteName((UISprite_o *)servantNarrowTexture, 0LL, 0LL);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v7);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(this, item, 0, v8);
  baseSprite = this->fields.baseSprite;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFormationBase(baseSprite, 9, partyOrganizationAtlas, 0, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.base2Sprite;
  if ( !servantNarrowTexture )
LABEL_13:
    sub_B2C434(servantNarrowTexture, item);
  UISprite__set_spriteName((UISprite_o *)servantNarrowTexture, string_TypeInfo->static_fields->Empty, 0LL);
}