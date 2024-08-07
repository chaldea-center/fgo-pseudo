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

  if ( (byte_49FB322 & 1) == 0 )
  {
    sub_1B64A00(&string_TypeInfo, lineupEntity);
    sub_1B64A00(&StringLiteral_23472/*"story"*/, v4);
    sub_1B64A00(&StringLiteral_20360/*"img_ribbon_{0}"*/, v5);
    sub_1B64A00(&StringLiteral_18146/*"constant"*/, v6);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_1B64A00(&StringLiteral_21028/*"limited"*/, v7);
    byte_49FB322 = 1;
  }
  if ( !lineupEntity )
    sub_1B64C5C(this, lineupEntity);
  SummonCategoryId = GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0LL);
  switch ( SummonCategoryId )
  {
    case 2:
      v9 = &StringLiteral_23472/*"story"*/;
      return System_String__Format((System_String_o *)StringLiteral_20360/*"img_ribbon_{0}"*/, (Il2CppObject *)*v9, 0LL);
    case 1:
      v9 = &StringLiteral_21028/*"limited"*/;
      return System_String__Format((System_String_o *)StringLiteral_20360/*"img_ribbon_{0}"*/, (Il2CppObject *)*v9, 0LL);
    case 0:
      v9 = &StringLiteral_18146/*"constant"*/;
      return System_String__Format((System_String_o *)StringLiteral_20360/*"img_ribbon_{0}"*/, (Il2CppObject *)*v9, 0LL);
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
  if ( (byte_49FB31F & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    byte_49FB31F = 1;
  }
  if ( v5 )
  {
    baseButton = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !baseButton )
      goto LABEL_14;
    baseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              baseButton,
                                              (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !baseButton )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, isInput, 0LL);
    baseButton = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !baseButton )
      goto LABEL_14;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))baseButton->klass[1]._1.implementedInterfaces)(
      baseButton,
      0LL,
      1LL,
      baseButton->klass[1]._1.interfaceOffsets);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(this, v5, v8);
    servantEntity = v5->fields.servantEntity;
    baseButton = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( servantEntity && (baseItem = v5->fields.baseItem) != 0LL )
      item = (BonusSelectSummonPartyServantListViewItem_o *)(servantEntity == baseItem->fields.servantEntity);
    else
      item = 0LL;
    if ( !baseButton )
LABEL_14:
      sub_1B64C5C(baseButton, item);
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
  Il2CppObject *Master_object; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v23; // x8
  BonusSelectSummonPartyServantListViewItemDraw_o *v24; // x22
  UISprite_o *summonInfoSprite; // x21
  __int64 *v26; // x8
  System_String_o *v27; // x22
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *selectObject; // x21
  struct ServantEntity_o *v30; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  v5 = item;
  v6 = this;
  if ( (byte_49FB320 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, item);
    sub_1B64A00(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1B64A00(&DataManager_TypeInfo, v8);
    sub_1B64A00(&NetworkManager_TypeInfo, v9);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_20248/*"img_icon_summoned"*/, v12);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_1B64A00(&StringLiteral_20247/*"img_icon_not_summoned"*/, v13);
    byte_49FB320 = 1;
  }
  entity = 0LL;
  if ( !v5 || !mode )
    return;
  servantEntity = v5->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_37;
  servantFaceIcon = v6->fields.servantFaceIcon;
  v17 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v16 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v17;
  *(_QWORD *)&v33.fields.fakeValue = v16;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                              v33,
                                                              0LL);
  if ( !servantFaceIcon )
    goto LABEL_37;
  ServantFaceIconComponent__Set_37906796(
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
    goto LABEL_37;
  ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, 1, 0LL);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.treasureDeviceIconLabel;
  if ( !this )
    goto LABEL_37;
  UIIconLabel__Set((UIIconLabel_o *)this, v5->fields.iconLabelInfo, 0LL);
  summonCategorySprite = v6->fields.summonCategorySprite;
  SummonCategorySpriteName = BonusSelectSummonPartyServantListViewItemDraw__GetSummonCategorySpriteName(
                               v19,
                               v5->fields.lineupEntity,
                               v20);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(summonCategorySprite, SummonCategorySpriteName, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
  v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.servantEntity;
  if ( !v23 )
    goto LABEL_37;
  v24 = this;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                              v23[1],
                                                              0LL);
  if ( !Master_object )
    goto LABEL_37;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UserServantCollectionMaster__TryGetEntity(
                                                              (UserServantCollectionMaster_o *)Master_object,
                                                              &entity,
                                                              (int64_t)v24,
                                                              (int32_t)this,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_37;
    summonInfoSprite = v6->fields.summonInfoSprite;
    if ( entity->fields.status == 2 )
    {
      v26 = &StringLiteral_20248/*"img_icon_summoned"*/;
      goto LABEL_25;
    }
  }
  else
  {
    summonInfoSprite = v6->fields.summonInfoSprite;
  }
  v26 = &StringLiteral_20247/*"img_icon_not_summoned"*/;
LABEL_25:
  v27 = (System_String_o *)*v26;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(summonInfoSprite, v27, 0LL);
  BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(v6, v5, v28);
  selectObject = (UnityEngine_Object_o *)v6->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    v30 = v5->fields.servantEntity;
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.selectObject;
    if ( v30 && (baseItem = v5->fields.baseItem) != 0LL )
      item = (BonusSelectSummonPartyServantListViewItem_o *)(v30 == baseItem->fields.servantEntity);
    else
      item = 0LL;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
      return;
    }
LABEL_37:
    sub_1B64C5C(this, item);
  }
}


void __fastcall BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(
        BonusSelectSummonPartyServantListViewItemDraw_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantListViewItem_o *v3; // x20
  BonusSelectSummonPartyServantListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *maskMessageLabel; // x20
  bool v8; // w21
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9

  v3 = item;
  v4 = this;
  if ( (byte_49FB321 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, item);
    sub_1B64A00(&string_TypeInfo, v5);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_1B64A00(&StringLiteral_12278/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/, v6);
    byte_49FB321 = 1;
  }
  if ( !v3 )
    goto LABEL_19;
  if ( v3->fields.isPossibleSelect )
  {
    maskMessageLabel = v4->fields.maskMessageLabel;
    goto LABEL_6;
  }
  servantEntity = v3->fields.servantEntity;
  if ( !servantEntity || (baseItem = v3->fields.baseItem) == 0LL )
  {
    maskMessageLabel = v4->fields.maskMessageLabel;
LABEL_13:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_12278/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/,
                                                                0LL);
    item = (BonusSelectSummonPartyServantListViewItem_o *)this;
    v8 = 1;
    if ( maskMessageLabel )
      goto LABEL_16;
LABEL_19:
    sub_1B64C5C(this, item);
  }
  maskMessageLabel = v4->fields.maskMessageLabel;
  if ( servantEntity != baseItem->fields.servantEntity )
    goto LABEL_13;
LABEL_6:
  v8 = 0;
  item = (BonusSelectSummonPartyServantListViewItem_o *)string_TypeInfo->static_fields->Empty;
  if ( !maskMessageLabel )
    goto LABEL_19;
LABEL_16:
  UILabel__set_text(maskMessageLabel, (System_String_o *)item, 0LL);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_19;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0LL);
}