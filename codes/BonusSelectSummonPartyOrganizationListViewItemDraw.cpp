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

  if ( (byte_40FB109 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, classIconId);
    sub_B16FFC(&StringLiteral_16100/*"_on{0}"*/, v8);
    sub_B16FFC(&StringLiteral_19240/*"icon_class{0}"*/, v9);
    sub_B16FFC(&StringLiteral_16098/*"_off{0}"*/, v10);
    byte_40FB109 = 1;
  }
  if ( System_String__IsNullOrEmpty(classIconId, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  v12 = StringLiteral_19240/*"icon_class{0}"*/;
  if ( isUpper )
  {
    v13 = (System_String_o **)&StringLiteral_16100/*"_on{0}"*/;
    if ( !isUpperOn )
      v13 = (System_String_o **)&StringLiteral_16098/*"_off{0}"*/;
    v14 = (Il2CppObject *)System_String__Format(*v13, (Il2CppObject *)classIconId, 0LL);
    v15 = (System_String_o *)v12;
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_19240/*"icon_class{0}"*/;
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
  const MethodInfo *v8; // x2
  struct UICommonButton_o *baseButton; // x0

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
      BonusSelectSummonPartyOrganizationListViewItemDraw__SvtDisp(this, item, v8);
    else
      BonusSelectSummonPartyOrganizationListViewItemDraw__SvtNotDisp(this, item, v8);
    baseButton = this->fields.baseButton;
    if ( !baseButton )
LABEL_11:
      sub_B170D4();
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))baseButton->klass->vtable._14_SetState.method)(
      baseButton,
      0LL,
      1LL,
      baseButton->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *restrictionClassSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x0
  System_String_o *ClassIconId; // x0
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *v9; // x0
  const MethodInfo *v10; // x4
  System_String_o *ClassIconSpriteName; // x0
  UISprite_o *v12; // x21
  System_String_o *v13; // x20
  UISprite_o *v14; // x0
  UISprite_o *v15; // x0
  struct UISprite_o *v16; // x0

  if ( (byte_40FB108 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    byte_40FB108 = 1;
  }
  restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
  if ( !restrictionClassSprite )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(restrictionClassSprite, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !item )
    goto LABEL_17;
  gachaBonusSelectEntity = item->fields.gachaBonusSelectEntity;
  if ( !gachaBonusSelectEntity )
    goto LABEL_17;
  ClassIconId = GachaBonusSelectEntity__GetClassIconId(gachaBonusSelectEntity, 0LL);
  if ( !ClassIconId )
    goto LABEL_17;
  v9 = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))ClassIconId->klass->vtable._3_ToString.method)(
                                                                 ClassIconId,
                                                                 ClassIconId->klass->vtable._4_CompareTo.methodPtr);
  ClassIconSpriteName = BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
                          v9,
                          (System_String_o *)v9,
                          0,
                          0,
                          v10);
  v12 = this->fields.restrictionClassSprite;
  v13 = ClassIconSpriteName;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetPartyOrganizationImage(v12, v13, 0LL) )
  {
    v14 = this->fields.restrictionClassSprite;
    if ( v14 )
    {
      UISprite__set_atlas(v14, this->fields.partyOrganizationAtlas, 0LL);
      v15 = this->fields.restrictionClassSprite;
      if ( v15 )
      {
        UISprite__set_spriteName(v15, v13, 0LL);
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_15:
  v16 = this->fields.restrictionClassSprite;
  if ( !v16 )
    goto LABEL_17;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
    v16,
    v16->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        bool isUpperOn,
        const MethodInfo *method)
{
  GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x0
  System_String_o *ClassIconId; // x0
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *v9; // x0
  const MethodInfo *v10; // x4
  System_String_o *ClassIconSpriteName; // x0
  UISprite_o *upperClassSprite; // x21
  System_String_o *v13; // x20
  UISprite_o *v14; // x0
  UISprite_o *v15; // x0

  if ( (byte_40FB107 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    byte_40FB107 = 1;
  }
  if ( !item )
    goto LABEL_13;
  gachaBonusSelectEntity = item->fields.gachaBonusSelectEntity;
  if ( !gachaBonusSelectEntity )
    goto LABEL_13;
  ClassIconId = GachaBonusSelectEntity__GetClassIconId(gachaBonusSelectEntity, 0LL);
  if ( !ClassIconId )
    goto LABEL_13;
  v9 = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))ClassIconId->klass->vtable._3_ToString.method)(
                                                                 ClassIconId,
                                                                 ClassIconId->klass->vtable._4_CompareTo.methodPtr);
  ClassIconSpriteName = BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
                          v9,
                          (System_String_o *)v9,
                          1,
                          isUpperOn,
                          v10);
  upperClassSprite = this->fields.upperClassSprite;
  v13 = ClassIconSpriteName;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetPartyOrganizationImage(upperClassSprite, v13, 0LL) )
  {
    v14 = this->fields.upperClassSprite;
    if ( v14 )
    {
      UISprite__set_atlas(v14, this->fields.partyOrganizationAtlas, 0LL);
      v15 = this->fields.upperClassSprite;
      if ( v15 )
      {
        UISprite__set_spriteName(v15, v13, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SvtDisp(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UINarrowFigureTexture_o *servantNarrowTexture; // x21
  int32_t SvtId; // w0
  const MethodInfo *v11; // x1
  struct ServantEntity_o *servantEntity; // x8
  ServantClassIconComponent_o *servantClassIcon; // x21
  int32_t classId; // w22
  int32_t FrameType; // w0
  UnityEngine_Component_o *restrictionClassSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t RarityId; // w21
  System_String_o *Icon; // x0
  UISprite_o *raritySprite; // x22
  System_String_o *v23; // x21
  UISprite_o *v24; // x0
  struct UISprite_o *v25; // x0
  const MethodInfo *v26; // x1
  UserServantEntity_o *userServantEntity; // x0
  UIIconLabel_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x21
  int32_t tdLevel; // w22
  const MethodInfo *v33; // x1
  int32_t tdMaxLevel; // w0
  UISprite_o *treasureDeviceIconBg; // x21
  UISprite_o *baseSprite; // x21
  const MethodInfo *v37; // x1
  int32_t v38; // w0
  UISprite_o *base2Sprite; // x20
  const MethodInfo *v40; // x1
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  int32_t v43; // [xsp+1Ch] [xbp-34h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_40FB105 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Rarity_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16639/*"bg_white"*/, v7);
    sub_B16FFC(&StringLiteral_16816/*"bonus_select_frame_{0}"*/, v8);
    byte_40FB105 = 1;
  }
  tdInfo = 0LL;
  if ( !item )
    goto LABEL_29;
  servantNarrowTexture = this->fields.servantNarrowTexture;
  SvtId = BonusSelectSummonPartyOrganizationListViewItem__get_SvtId(item, (const MethodInfo *)item);
  if ( !servantNarrowTexture )
    goto LABEL_29;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, SvtId, 0, 0LL, 0LL);
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_29;
  servantClassIcon = this->fields.servantClassIcon;
  classId = servantEntity->fields.classId;
  FrameType = BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(item, v11);
  if ( !servantClassIcon )
    goto LABEL_29;
  ServantClassIconComponent__SetImage(servantClassIcon, classId, FrameType, 0LL);
  restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
  if ( !restrictionClassSprite )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject(restrictionClassSprite, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(this, item, 1, v18);
  RarityId = BonusSelectSummonPartyOrganizationListViewItem__get_RarityId(item, v19);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon = Rarity__getIcon(RarityId, 0LL);
  raritySprite = this->fields.raritySprite;
  v23 = Icon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(raritySprite, 0LL);
  v24 = this->fields.raritySprite;
  if ( !v24 )
    goto LABEL_29;
  UISprite__set_spriteName(v24, v23, 0LL);
  v25 = this->fields.raritySprite;
  if ( !v25 )
    goto LABEL_29;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v25->klass->vtable._33_MakePixelPerfect.method)(
    v25,
    v25->klass->vtable._34_get_minWidth.methodPtr);
  userServantEntity = item->fields.userServantEntity;
  if ( !userServantEntity )
  {
    treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
    tdLevel = BonusSelectSummonPartyOrganizationListViewItem__get_tdLevel(item, v26);
    tdMaxLevel = BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(item, v33);
    if ( treasureDeviceIconLabel )
    {
      UIIconLabel__Set_40377052(treasureDeviceIconLabel, 33, tdLevel, tdMaxLevel, 0, 0LL, 0, 0, 0, 0LL);
      goto LABEL_25;
    }
LABEL_29:
    sub_B170D4();
  }
  UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, -1, 0, 0LL);
  if ( !tdInfo )
    goto LABEL_29;
  v28 = this->fields.treasureDeviceIconLabel;
  if ( !v28 )
    goto LABEL_29;
  UIIconLabel__Set_40377052(v28, 33, tdInfo->fields.lv, tdInfo->fields.maxLv, 0, 0LL, 0, 0, 0, 0LL);
  v29 = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
  if ( !v29 )
    goto LABEL_29;
  v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
  if ( !v30 )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(v30, 0, 0LL);
LABEL_25:
  treasureDeviceIconBg = this->fields.treasureDeviceIconBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(treasureDeviceIconBg, (System_String_o *)StringLiteral_16639/*"bg_white"*/, 0LL);
  baseSprite = this->fields.baseSprite;
  v38 = BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(item, v37);
  AtlasManager__SetFormationBase(baseSprite, v38, this->fields.partyOrganizationAtlas, 0, 0LL);
  base2Sprite = this->fields.base2Sprite;
  v43 = BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(item, v40);
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v42 = System_String__Format((System_String_o *)StringLiteral_16816/*"bonus_select_frame_{0}"*/, v41, 0LL);
  AtlasManager__SetEventSprite(base2Sprite, v42, 0LL);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewItemDraw__SvtNotDisp(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  ServantClassIconComponent_o *servantClassIcon; // x0
  UISprite_o *raritySprite; // x0
  UIIconLabel_o *treasureDeviceIconLabel; // x0
  UISprite_o *treasureDeviceIconBg; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  UISprite_o *baseSprite; // x20
  UIAtlas_o *partyOrganizationAtlas; // x21
  UISprite_o *base2Sprite; // x0

  if ( (byte_40FB106 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&string_TypeInfo, v5);
    byte_40FB106 = 1;
  }
  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    goto LABEL_13;
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0LL);
  servantClassIcon = this->fields.servantClassIcon;
  if ( !servantClassIcon )
    goto LABEL_13;
  ServantClassIconComponent__Clear(servantClassIcon, 0LL);
  raritySprite = this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_13;
  UISprite__set_spriteName(raritySprite, 0LL, 0LL);
  treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel;
  if ( !treasureDeviceIconLabel )
    goto LABEL_13;
  UIIconLabel__Clear(treasureDeviceIconLabel, 0LL);
  treasureDeviceIconBg = this->fields.treasureDeviceIconBg;
  if ( !treasureDeviceIconBg )
    goto LABEL_13;
  UISprite__set_spriteName(treasureDeviceIconBg, 0LL, 0LL);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v11);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(this, item, 0, v12);
  baseSprite = this->fields.baseSprite;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFormationBase(baseSprite, 9, partyOrganizationAtlas, 0, 0LL);
  base2Sprite = this->fields.base2Sprite;
  if ( !base2Sprite )
LABEL_13:
    sub_B170D4();
  UISprite__set_spriteName(base2Sprite, string_TypeInfo->static_fields->Empty, 0LL);
}