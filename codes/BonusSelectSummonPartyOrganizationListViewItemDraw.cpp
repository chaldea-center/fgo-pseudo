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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        System_String_o *classIconId,
        bool isUpper,
        bool isUpperOn,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v15; // x22
  System_String_o **v16; // x8
  Il2CppObject *v17; // x1
  System_String_o *v18; // x0

  if ( (byte_4B12863 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, classIconId, isUpper);
    sub_1BCA7E0(&StringLiteral_16731/*"_on{0}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20332/*"icon_class{0}"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16729/*"_off{0}"*/, v12, v13);
    byte_4B12863 = 1;
  }
  if ( System_String__IsNullOrEmpty(classIconId, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  v15 = StringLiteral_20332/*"icon_class{0}"*/;
  if ( isUpper )
  {
    v16 = (System_String_o **)&StringLiteral_16731/*"_on{0}"*/;
    if ( !isUpperOn )
      v16 = (System_String_o **)&StringLiteral_16729/*"_off{0}"*/;
    v17 = (Il2CppObject *)System_String__Format(*v16, (Il2CppObject *)classIconId, 0LL);
    v18 = (System_String_o *)v15;
  }
  else
  {
    v18 = (System_String_o *)StringLiteral_20332/*"icon_class{0}"*/;
    v17 = (Il2CppObject *)classIconId;
  }
  return System_String__Format(v18, v17, 0LL);
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
      sub_1BCAA3C(gameObject, v8);
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
  __int64 v9; // x1
  UISprite_o *v10; // x21
  System_String_o *v11; // x20

  if ( (byte_4B12862 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    byte_4B12862 = 1;
  }
  restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
  if ( !restrictionClassSprite )
    goto LABEL_16;
  restrictionClassSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(restrictionClassSprite, 0LL);
  if ( !restrictionClassSprite )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionClassSprite, 1, 0LL);
  if ( !item )
    goto LABEL_16;
  restrictionClassSprite = (UnityEngine_Component_o *)item->fields.gachaBonusSelectEntity;
  if ( !restrictionClassSprite )
    goto LABEL_16;
  restrictionClassSprite = (UnityEngine_Component_o *)GachaBonusSelectEntity__GetClassIconId(
                                                        (GachaBonusSelectEntity_o *)restrictionClassSprite,
                                                        0LL);
  if ( !restrictionClassSprite )
    goto LABEL_16;
  v6 = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))restrictionClassSprite->klass->vtable._3_ToString.method)(
                                                                 restrictionClassSprite,
                                                                 restrictionClassSprite->klass[1]._1.image);
  ClassIconSpriteName = BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
                          v6,
                          (System_String_o *)v6,
                          0,
                          0,
                          v7);
  v10 = this->fields.restrictionClassSprite;
  v11 = ClassIconSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
  if ( !AtlasManager__SetPartyOrganizationImage(v10, v11, 0LL) )
  {
    restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
    if ( restrictionClassSprite )
    {
      UISprite__set_atlas((UISprite_o *)restrictionClassSprite, this->fields.partyOrganizationAtlas, 0LL);
      restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
      if ( restrictionClassSprite )
      {
        UISprite__set_spriteName((UISprite_o *)restrictionClassSprite, v11, 0LL);
        goto LABEL_14;
      }
    }
LABEL_16:
    sub_1BCAA3C(restrictionClassSprite, item);
  }
LABEL_14:
  restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
  if ( !restrictionClassSprite )
    goto LABEL_16;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))restrictionClassSprite->klass[2]._1.typeMetadataHandle)(
    restrictionClassSprite,
    restrictionClassSprite->klass[2]._1.interopData);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x1
  UISprite_o *upperClassSprite; // x21
  System_String_o *v12; // x20

  v6 = this;
  if ( (byte_4B12861 & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)sub_1BCA7E0(&AtlasManager_TypeInfo, item, isUpperOn);
    byte_4B12861 = 1;
  }
  if ( !item )
    goto LABEL_12;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)item->fields.gachaBonusSelectEntity;
  if ( !this )
    goto LABEL_12;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)GachaBonusSelectEntity__GetClassIconId(
                                                                   (GachaBonusSelectEntity_o *)this,
                                                                   0LL);
  if ( !this )
    goto LABEL_12;
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
  v12 = ClassIconSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
  if ( !AtlasManager__SetPartyOrganizationImage(upperClassSprite, v12, 0LL) )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v6->fields.upperClassSprite;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v6->fields.partyOrganizationAtlas, 0LL);
      this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v6->fields.upperClassSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v12, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(this, item);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SvtDisp(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UINarrowFigureTexture_o *servantNarrowTexture; // x21
  struct ServantEntity_o *servantEntity; // x8
  ServantClassIconComponent_o *servantClassIcon; // x21
  int32_t classId; // w22
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  int32_t RarityId; // w21
  System_String_o *Icon; // x0
  __int64 v22; // x1
  UISprite_o *raritySprite; // x22
  System_String_o *v24; // x21
  const MethodInfo *v25; // x1
  UserServantEntity_o *userServantEntity; // x0
  __int64 v27; // x1
  UIIconLabel_o *treasureDeviceIconLabel; // x21
  int32_t tdLevel; // w22
  const MethodInfo *v30; // x1
  UISprite_o *treasureDeviceIconBg; // x21
  UISprite_o *baseSprite; // x21
  const MethodInfo *v33; // x1
  int32_t FrameType; // w0
  UISprite_o *base2Sprite; // x20
  const MethodInfo *v36; // x1
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  int32_t v39; // [xsp+1Ch] [xbp-44h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B1285F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Rarity_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_17345/*"bg_white"*/, v9, v10);
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_17533/*"bonus_select_frame_{0}"*/, v11, v12);
    byte_4B1285F = 1;
  }
  tdInfo = 0LL;
  if ( !item )
    goto LABEL_26;
  servantNarrowTexture = v4->fields.servantNarrowTexture;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)BonusSelectSummonPartyOrganizationListViewItem__get_SvtId(
                                                                   item,
                                                                   (const MethodInfo *)item);
  if ( !servantNarrowTexture )
    goto LABEL_26;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)this, 0, 0LL, 0LL);
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_26;
  servantClassIcon = v4->fields.servantClassIcon;
  classId = servantEntity->fields.classId;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(
                                                                   item,
                                                                   (const MethodInfo *)item);
  if ( !servantClassIcon )
    goto LABEL_26;
  ServantClassIconComponent__SetImage(servantClassIcon, classId, (int32_t)this, 0LL);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.restrictionClassSprite;
  if ( !this )
    goto LABEL_26;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
  if ( !this )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(v4, item, 1, v17);
  RarityId = BonusSelectSummonPartyOrganizationListViewItem__get_RarityId(item, v18);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v19);
  Icon = Rarity__getIcon(RarityId, 0LL);
  raritySprite = v4->fields.raritySprite;
  v24 = Icon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
  AtlasManager__SetCommon(raritySprite, 0LL);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.raritySprite;
  if ( !this )
    goto LABEL_26;
  UISprite__set_spriteName((UISprite_o *)this, v24, 0LL);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.raritySprite;
  if ( !this )
    goto LABEL_26;
  ((void (__fastcall *)(BonusSelectSummonPartyOrganizationListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)UserServantEntity__getTreasureDeviceInfo(
                                                                     userServantEntity,
                                                                     &tdInfo,
                                                                     -1,
                                                                     -1,
                                                                     0,
                                                                     0LL);
    if ( tdInfo )
    {
      this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.treasureDeviceIconLabel;
      if ( this )
      {
        UIIconLabel__Set_38947284(
          (UIIconLabel_o *)this,
          33,
          tdInfo->fields.lv,
          tdInfo->fields.maxLv,
          0,
          0LL,
          0,
          0,
          0,
          0LL);
        this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.restrictionClassSprite;
        if ( this )
        {
          this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(this, item);
  }
  treasureDeviceIconLabel = v4->fields.treasureDeviceIconLabel;
  tdLevel = BonusSelectSummonPartyOrganizationListViewItem__get_tdLevel(item, v25);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(
                                                                   item,
                                                                   v30);
  if ( !treasureDeviceIconLabel )
    goto LABEL_26;
  UIIconLabel__Set_38947284(treasureDeviceIconLabel, 33, tdLevel, (int32_t)this, 0, 0LL, 0, 0, 0, 0LL);
LABEL_23:
  treasureDeviceIconBg = v4->fields.treasureDeviceIconBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27);
  AtlasManager__SetPartyOrganizationImage(treasureDeviceIconBg, (System_String_o *)StringLiteral_17345/*"bg_white"*/, 0LL);
  baseSprite = v4->fields.baseSprite;
  FrameType = BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(item, v33);
  AtlasManager__SetFormationBase(baseSprite, FrameType, v4->fields.partyOrganizationAtlas, 0, 0LL);
  base2Sprite = v4->fields.base2Sprite;
  v39 = BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(item, v36);
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v38 = System_String__Format((System_String_o *)StringLiteral_17533/*"bonus_select_frame_{0}"*/, v37, 0LL);
  AtlasManager__SetEventSprite(base2Sprite, v38, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SvtNotDisp(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  UISprite_o *baseSprite; // x20
  UIAtlas_o *partyOrganizationAtlas; // x21

  if ( (byte_4B12860 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&string_TypeInfo, v5, v6);
    byte_4B12860 = 1;
  }
  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.servantClassIcon;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  ServantClassIconComponent__Clear((ServantClassIconComponent_o *)servantNarrowTexture, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.raritySprite;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  UISprite__set_spriteName((UISprite_o *)servantNarrowTexture, 0LL, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.treasureDeviceIconLabel;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  UIIconLabel__Clear((UIIconLabel_o *)servantNarrowTexture, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.treasureDeviceIconBg;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  UISprite__set_spriteName((UISprite_o *)servantNarrowTexture, 0LL, 0LL);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v8);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(this, item, 0, v9);
  baseSprite = this->fields.baseSprite;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
  AtlasManager__SetFormationBase(baseSprite, 9, partyOrganizationAtlas, 0, 0LL);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.base2Sprite;
  if ( !servantNarrowTexture )
LABEL_12:
    sub_1BCAA3C(servantNarrowTexture, item);
  UISprite__set_spriteName((UISprite_o *)servantNarrowTexture, string_TypeInfo->static_fields->Empty, 0LL);
}