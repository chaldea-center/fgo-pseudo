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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskAtlas,
    (int32_t)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  unsigned int SummonCategoryId; // w0

  if ( (byte_5934868 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24938/*"story"*/);
    sub_21FFC50(&StringLiteral_21499/*"img_ribbon_{0}"*/);
    sub_21FFC50(&StringLiteral_18998/*"constant"*/);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_21FFC50(&StringLiteral_22269/*"limited"*/);
    byte_5934868 = 1;
  }
  if ( !lineupEntity )
    sub_21FFECC(this, lineupEntity);
  SummonCategoryId = GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0);
  if ( SummonCategoryId >= 3 )
    return **(System_String_o ***)(qword_594C0B8 + 184);
  else
    return System_String__Format(
             (System_String_o *)StringLiteral_21499/*"img_ribbon_{0}"*/,
             *(Il2CppObject **)*(&off_52964B0 + SummonCategoryId),
             0);
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
  if ( (byte_5934865 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_5934865 = 1;
  }
  if ( v5 )
  {
    baseButton = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !baseButton )
      goto LABEL_14;
    baseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              baseButton,
                                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_21FFECC(baseButton, item);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseButton, (bool)item, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BonusSelectSummonPartyServantListViewItemDraw__SetItem(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *v5; // x19
  BonusSelectSummonPartyServantListViewItemDraw_o *v6; // x20
  struct ServantEntity_o *servantEntity; // x8
  __int64 v8; // x22
  __int64 v9; // x23
  ServantFaceIconComponent_o *servantFaceIcon; // x21
  UISprite_o *summonCategorySprite; // x21
  BonusSelectSummonPartyServantListViewItemDraw_o *v12; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *SummonCategorySpriteName; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x2
  Il2CppObject *Master_object; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v21; // x8
  UIIconLabel_c *klass; // x22
  __int64 v23; // x2
  __int64 *v24; // x8
  UISprite_o *summonInfoSprite; // x21
  System_String_o *v26; // x22
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *selectObject; // x21
  struct ServantEntity_o *v31; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  UserServantCollectionEntity_o *entity; // [xsp+68h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v5 = item;
  v6 = this;
  if ( (byte_5934866 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_21359/*"img_icon_summoned"*/);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_21FFC50(&StringLiteral_21358/*"img_icon_not_summoned"*/);
    byte_5934866 = 1;
  }
  entity = 0;
  if ( v5 && mode )
  {
    servantEntity = v5->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_40;
    v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    servantFaceIcon = v6->fields.servantFaceIcon;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, *(_QWORD *)&mode);
    *(_QWORD *)&v34.fields.currentCryptoKey = v8;
    *(_QWORD *)&v34.fields.fakeValue = v9;
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                v34,
                                                                0);
    if ( !servantFaceIcon )
      goto LABEL_40;
    ServantFaceIconComponent__Set_48021296(
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
      1,
      0);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_40;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, 1, 0);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_40;
    ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
      (ServantFaceIconComponent_o *)this,
      v6->fields.maskSprite,
      v6->fields.defaultMaskName,
      v6->fields.defaultMaskAtlas,
      0);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.treasureDeviceIconLabel;
    if ( !this )
      goto LABEL_40;
    UIIconLabel__Set((UIIconLabel_o *)this, v5->fields.iconLabelInfo, 0);
    summonCategorySprite = v6->fields.summonCategorySprite;
    SummonCategorySpriteName = BonusSelectSummonPartyServantListViewItemDraw__GetSummonCategorySpriteName(
                                 v12,
                                 v5->fields.lineupEntity,
                                 v13);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v15);
    AtlasManager__SetEventSprite(summonCategorySprite, SummonCategorySpriteName, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v19);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v19);
      this = (BonusSelectSummonPartyServantListViewItemDraw_o *)NetworkManager_TypeInfo;
    }
    v21 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.servantEntity;
    if ( !v21 )
      goto LABEL_40;
    klass = this[1].fields.treasureDeviceIconLabel[1].klass;
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                v21[1],
                                                                0);
    if ( !Master_object )
      goto LABEL_40;
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UserServantCollectionMaster__TryGetEntity(
                                                                (UserServantCollectionMaster_o *)Master_object,
                                                                &entity,
                                                                (int64_t)klass,
                                                                (int32_t)this,
                                                                0);
    v24 = &StringLiteral_21358/*"img_icon_not_summoned"*/;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_40;
      if ( entity->fields.status == 2 )
        v24 = &StringLiteral_21359/*"img_icon_summoned"*/;
    }
    summonInfoSprite = v6->fields.summonInfoSprite;
    v26 = (System_String_o *)*v24;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v23);
    AtlasManager__SetEventSprite(summonInfoSprite, v26, 0);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(v6, v5, v27);
    selectObject = (UnityEngine_Object_o *)v6->fields.selectObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      v31 = v5->fields.servantEntity;
      this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.selectObject;
      if ( v31 && (baseItem = v5->fields.baseItem) != 0 )
        item = (BonusSelectSummonPartyServantListViewItem_o *)(v31 == baseItem->fields.servantEntity);
      else
        item = 0;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0);
        return;
      }
LABEL_40:
      sub_21FFECC(this, item);
    }
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
  if ( (byte_5934867 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_21FFC50(&StringLiteral_12925/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/);
    byte_5934867 = 1;
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_12925/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/,
                                                                0);
    item = (BonusSelectSummonPartyServantListViewItem_o *)this;
    v6 = 1;
    if ( maskMessageLabel )
      goto LABEL_16;
LABEL_19:
    sub_21FFECC(this, item);
  }
  maskMessageLabel = v4->fields.maskMessageLabel;
  if ( servantEntity != baseItem->fields.servantEntity )
    goto LABEL_13;
LABEL_6:
  v6 = 0;
  item = **(BonusSelectSummonPartyServantListViewItem_o ***)(qword_594C0B8 + 184);
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