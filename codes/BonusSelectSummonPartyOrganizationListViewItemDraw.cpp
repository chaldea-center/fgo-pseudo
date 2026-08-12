void BonusSelectSummonPartyOrganizationListViewItemDraw___ctor(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BonusSelectSummonPartyOrganizationListViewItemDraw__Awake(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void BonusSelectSummonPartyOrganizationListViewItemDraw__CheckAssert(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        System_String_o *classIconId,
        bool isUpper,
        bool isUpperOn,
        const MethodInfo *method)
{
  __int64 v9; // x22
  System_String_o **v10; // x8
  Il2CppObject *v11; // x1
  System_String_o *v12; // x0

  if ( (byte_596C98C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17244/*"_on{0}"*/);
    sub_2213A60(&StringLiteral_21139/*"icon_class{0}"*/);
    sub_2213A60(&StringLiteral_17242/*"_off{0}"*/);
    byte_596C98C = 1;
  }
  if ( System_String__IsNullOrEmpty(classIconId, 0) )
    return **(System_String_o ***)(qword_5984390 + 184);
  v9 = StringLiteral_21139/*"icon_class{0}"*/;
  if ( isUpper )
  {
    v10 = (System_String_o **)&StringLiteral_17244/*"_on{0}"*/;
    if ( !isUpperOn )
      v10 = (System_String_o **)&StringLiteral_17242/*"_off{0}"*/;
    v11 = (Il2CppObject *)System_String__Format(*v10, (Il2CppObject *)classIconId, 0);
    v12 = (System_String_o *)v9;
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_21139/*"icon_class{0}"*/;
    v11 = (Il2CppObject *)classIconId;
  }
  return System_String__Format(v12, v11, 0);
}


void BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(
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
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( mode )
    {
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        if ( item->fields.servantEntity )
          BonusSelectSummonPartyOrganizationListViewItemDraw__SvtDisp(this, item, v9);
        else
          BonusSelectSummonPartyOrganizationListViewItemDraw__SvtNotDisp(this, item, v9);
        gameObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
            gameObject,
            0,
            1,
            gameObject->klass[1]._1.implementedInterfaces);
          return;
        }
      }
    }
    else if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      return;
    }
    sub_2213CDC(gameObject, v8);
  }
}


void BonusSelectSummonPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *restrictionClassSprite; // x0
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *v6; // x0
  const MethodInfo *v7; // x4
  System_String_o *ClassIconSpriteName; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UISprite_o *v11; // x21
  System_String_o *v12; // x20

  if ( (byte_596C98B & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596C98B = 1;
  }
  restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
  if ( !restrictionClassSprite )
    goto LABEL_16;
  restrictionClassSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(restrictionClassSprite, 0);
  if ( !restrictionClassSprite )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)restrictionClassSprite, 1, 0);
  if ( !item )
    goto LABEL_16;
  restrictionClassSprite = (UnityEngine_Component_o *)item->fields.gachaBonusSelectEntity;
  if ( !restrictionClassSprite )
    goto LABEL_16;
  restrictionClassSprite = (UnityEngine_Component_o *)GachaBonusSelectEntity__GetClassIconId(
                                                        (GachaBonusSelectEntity_o *)restrictionClassSprite,
                                                        0);
  if ( !restrictionClassSprite )
    goto LABEL_16;
  v6 = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, const MethodInfo *))restrictionClassSprite->klass->vtable._3_ToString.methodPtr)(
                                                                 restrictionClassSprite,
                                                                 restrictionClassSprite->klass->vtable._3_ToString.method);
  ClassIconSpriteName = BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
                          v6,
                          (System_String_o *)v6,
                          0,
                          0,
                          v7);
  v11 = this->fields.restrictionClassSprite;
  v12 = ClassIconSpriteName;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  if ( !AtlasManager__SetPartyOrganizationImage(v11, v12, 0) )
  {
    restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
    if ( restrictionClassSprite )
    {
      UISprite__set_atlas((UISprite_o *)restrictionClassSprite, this->fields.partyOrganizationAtlas, 0);
      restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
      if ( restrictionClassSprite )
      {
        UISprite__set_spriteName((UISprite_o *)restrictionClassSprite, v12, 0);
        goto LABEL_14;
      }
    }
LABEL_16:
    sub_2213CDC(restrictionClassSprite, item);
  }
LABEL_14:
  restrictionClassSprite = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
  if ( !restrictionClassSprite )
    goto LABEL_16;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))restrictionClassSprite->klass[2]._1.parent)(
    restrictionClassSprite,
    restrictionClassSprite->klass[2]._1.generic_class);
}


void BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(
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
  __int64 v11; // x2
  UISprite_o *upperClassSprite; // x21
  System_String_o *v13; // x20

  v6 = this;
  if ( (byte_596C98A & 1) == 0 )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)sub_2213A60(&AtlasManager_TypeInfo);
    byte_596C98A = 1;
  }
  if ( !item )
    goto LABEL_12;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)item->fields.gachaBonusSelectEntity;
  if ( !this )
    goto LABEL_12;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)GachaBonusSelectEntity__GetClassIconId(
                                                                   (GachaBonusSelectEntity_o *)this,
                                                                   0);
  if ( !this )
    goto LABEL_12;
  v7 = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)((__int64 (__fastcall *)(BonusSelectSummonPartyOrganizationListViewItemDraw_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._3_ToString.method);
  ClassIconSpriteName = BonusSelectSummonPartyOrganizationListViewItemDraw__GetClassIconSpriteName(
                          v7,
                          (System_String_o *)v7,
                          1,
                          isUpperOn,
                          v8);
  upperClassSprite = v6->fields.upperClassSprite;
  v13 = ClassIconSpriteName;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
  if ( !AtlasManager__SetPartyOrganizationImage(upperClassSprite, v13, 0) )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v6->fields.upperClassSprite;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v6->fields.partyOrganizationAtlas, 0);
      this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v6->fields.upperClassSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v13, 0);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(this, item);
  }
}


void BonusSelectSummonPartyOrganizationListViewItemDraw__SvtDisp(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *v4; // x20
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  const MethodInfo *v6; // x1
  bool v7; // w21
  UINarrowFigureTexture_o *servantNarrowTexture; // x22
  struct ServantEntity_o *servantEntity; // x8
  ServantClassIconComponent_o *servantClassIcon; // x21
  int32_t classId; // w22
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t RarityId; // w21
  System_String_o *Icon; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UISprite_o *raritySprite; // x22
  System_String_o *v21; // x21
  const MethodInfo *v22; // x1
  UserServantEntity_o *userServantEntity; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UIIconLabel_o *treasureDeviceIconLabel; // x21
  int32_t tdLevel; // w22
  const MethodInfo *v28; // x1
  UISprite_o *treasureDeviceIconBg; // x21
  UISprite_o *baseSprite; // x21
  const MethodInfo *v31; // x1
  int32_t FrameType; // w0
  UISprite_o *base2Sprite; // x20
  const MethodInfo *v34; // x1
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  int32_t v37; // [xsp+24h] [xbp-3Ch] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_596C988 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&StringLiteral_17880/*"bg_white"*/);
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)sub_2213A60(&StringLiteral_18072/*"bonus_select_frame_{0}"*/);
    byte_596C988 = 1;
  }
  tdInfo = 0;
  if ( !item )
    goto LABEL_30;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)item->fields.servantEntity;
  if ( !this )
    goto LABEL_30;
  TransformInfo = ServantEntity__GetTransformInfo((ServantEntity_o *)this, 0);
  v7 = TransformInfo && TransformInfo->fields.saveTransform > 0;
  servantNarrowTexture = v4->fields.servantNarrowTexture;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)BonusSelectSummonPartyOrganizationListViewItem__get_SvtId(
                                                                   item,
                                                                   v6);
  if ( !servantNarrowTexture )
    goto LABEL_30;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)this, 1, v7, 0);
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_30;
  servantClassIcon = v4->fields.servantClassIcon;
  classId = servantEntity->fields.classId;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(
                                                                   item,
                                                                   (const MethodInfo *)item);
  if ( !servantClassIcon )
    goto LABEL_30;
  ServantClassIconComponent__SetImage(servantClassIcon, classId, (int32_t)this, 0, 0, 0, 0);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.restrictionClassSprite;
  if ( !this )
    goto LABEL_30;
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0);
  if ( !this )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(v4, item, 1, v12);
  RarityId = BonusSelectSummonPartyOrganizationListViewItem__get_RarityId(item, v13);
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v14, v15);
  Icon = Rarity__getIcon(RarityId, 0);
  raritySprite = v4->fields.raritySprite;
  v21 = Icon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18, v19);
  AtlasManager__SetCommon(raritySprite, 0);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.raritySprite;
  if ( !this )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)this, v21, 0);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.raritySprite;
  if ( !this )
    goto LABEL_30;
  ((void (__fastcall *)(BonusSelectSummonPartyOrganizationListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)UserServantEntity__getTreasureDeviceInfo(
                                                                     userServantEntity,
                                                                     &tdInfo,
                                                                     -1,
                                                                     -1,
                                                                     0,
                                                                     0);
    if ( tdInfo )
    {
      this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.treasureDeviceIconLabel;
      if ( this )
      {
        UIIconLabel__Set_48071660(
          (UIIconLabel_o *)this,
          33,
          tdInfo->fields.lv,
          tdInfo->fields.maxLv,
          0,
          0,
          0,
          0,
          0,
          0,
          0);
        this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)v4->fields.restrictionClassSprite;
        if ( this )
        {
          this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_30:
    sub_2213CDC(this, item);
  }
  treasureDeviceIconLabel = v4->fields.treasureDeviceIconLabel;
  tdLevel = BonusSelectSummonPartyOrganizationListViewItem__get_tdLevel(item, v22);
  this = (BonusSelectSummonPartyOrganizationListViewItemDraw_o *)BonusSelectSummonPartyOrganizationListViewItem__get_tdMaxLevel(
                                                                   item,
                                                                   v28);
  if ( !treasureDeviceIconLabel )
    goto LABEL_30;
  UIIconLabel__Set_48071660(treasureDeviceIconLabel, 33, tdLevel, (int32_t)this, 0, 0, 0, 0, 0, 0, 0);
LABEL_27:
  treasureDeviceIconBg = v4->fields.treasureDeviceIconBg;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24, v25);
  AtlasManager__SetPartyOrganizationImage(treasureDeviceIconBg, (System_String_o *)StringLiteral_17880/*"bg_white"*/, 0);
  baseSprite = v4->fields.baseSprite;
  FrameType = BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(item, v31);
  AtlasManager__SetFormationBase(baseSprite, FrameType, v4->fields.partyOrganizationAtlas, 0, 0, 0, 0);
  base2Sprite = v4->fields.base2Sprite;
  v37 = BonusSelectSummonPartyOrganizationListViewItem__get_FrameType(item, v34);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37);
  v36 = System_String__Format((System_String_o *)StringLiteral_18072/*"bonus_select_frame_{0}"*/, v35, 0);
  AtlasManager__SetEventSprite(base2Sprite, v36, 0);
}


void BonusSelectSummonPartyOrganizationListViewItemDraw__SvtNotDisp(
        BonusSelectSummonPartyOrganizationListViewItemDraw_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  UISprite_o *baseSprite; // x21
  UIAtlas_o *partyOrganizationAtlas; // x20

  if ( (byte_596C989 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596C989 = 1;
  }
  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.servantClassIcon;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  ServantClassIconComponent__Clear((ServantClassIconComponent_o *)servantNarrowTexture, 0);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.raritySprite;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  UISprite__set_spriteName((UISprite_o *)servantNarrowTexture, 0, 0);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.treasureDeviceIconLabel;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  UIIconLabel__Clear((UIIconLabel_o *)servantNarrowTexture, 0);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.treasureDeviceIconBg;
  if ( !servantNarrowTexture )
    goto LABEL_12;
  UISprite__set_spriteName((UISprite_o *)servantNarrowTexture, 0, 0);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v6);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetUpperClassSprite(this, item, 0, v7);
  baseSprite = this->fields.baseSprite;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v9);
  AtlasManager__SetFormationBase(baseSprite, 9, partyOrganizationAtlas, 0, 0, 0, 0);
  servantNarrowTexture = (UINarrowFigureTexture_o *)this->fields.base2Sprite;
  if ( !servantNarrowTexture )
LABEL_12:
    sub_2213CDC(servantNarrowTexture, item);
  UISprite__set_spriteName((UISprite_o *)servantNarrowTexture, **(System_String_o ***)(qword_5984390 + 184), 0);
}