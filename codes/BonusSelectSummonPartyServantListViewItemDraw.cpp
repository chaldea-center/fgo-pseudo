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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t SummonCategoryId; // w0
  __int64 *v18; // x8

  if ( (byte_42E867E & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)lineupEntity, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22648/*"story"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19851/*"img_ribbon_{0}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17878/*"constant"*/, v11, v12, v13);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_20482/*"limited"*/, v14, v15, v16);
    byte_42E867E = 1;
  }
  if ( !lineupEntity )
    sub_B5D69C(this, lineupEntity);
  SummonCategoryId = GachaBonusSelectLineupEntity__GetSummonCategoryId(lineupEntity, -1, 0LL);
  switch ( SummonCategoryId )
  {
    case 2:
      v18 = &StringLiteral_22648/*"story"*/;
      return System_String__Format((System_String_o *)StringLiteral_19851/*"img_ribbon_{0}"*/, (Il2CppObject *)*v18, 0LL);
    case 1:
      v18 = &StringLiteral_20482/*"limited"*/;
      return System_String__Format((System_String_o *)StringLiteral_19851/*"img_ribbon_{0}"*/, (Il2CppObject *)*v18, 0LL);
    case 0:
      v18 = &StringLiteral_17878/*"constant"*/;
      return System_String__Format((System_String_o *)StringLiteral_19851/*"img_ribbon_{0}"*/, (Il2CppObject *)*v18, 0LL);
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
  if ( (byte_42E867B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)item, isInput, method);
    byte_42E867B = 1;
  }
  if ( v5 )
  {
    baseButton = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !baseButton
      || (baseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    baseButton,
                                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, isInput, 0LL),
          (baseButton = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_14:
      sub_B5D69C(baseButton, item);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  struct ServantEntity_o *servantEntity; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x21
  __int64 v30; // x22
  __int64 v31; // x23
  UISprite_o *summonCategorySprite; // x21
  BonusSelectSummonPartyServantListViewItemDraw_o *v33; // x0
  const MethodInfo *v34; // x2
  System_String_o *SummonCategorySpriteName; // x22
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  BonusSelectSummonPartyServantListViewItemDraw_o *v38; // x22
  System_String_o **v39; // x8
  UISprite_o *summonInfoSprite; // x21
  System_String_o *v41; // x22
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *selectObject; // x21
  struct ServantEntity_o *v44; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v5 = item;
  v6 = this;
  if ( (byte_42E867C & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_19747/*"img_icon_summoned"*/, v22, v23, v24);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_19746/*"img_icon_not_summoned"*/, v25, v26, v27);
    byte_42E867C = 1;
  }
  entity = 0LL;
  if ( v5 && mode )
  {
    servantEntity = v5->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_41;
    servantFaceIcon = v6->fields.servantFaceIcon;
    v31 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v30 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v47.fields.currentCryptoKey = v31;
    *(_QWORD *)&v47.fields.fakeValue = v30;
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                v47,
                                                                0LL);
    if ( !servantFaceIcon )
      goto LABEL_41;
    ServantFaceIconComponent__Set_30846632(
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
                                 v33,
                                 v5->fields.lineupEntity,
                                 v34);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(summonCategorySprite, SummonCategorySpriteName, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
    v37 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.servantEntity;
    if ( !v37
      || (v38 = this,
          this = (BonusSelectSummonPartyServantListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                      v37[1],
                                                                      0LL),
          !Master_WarQuestSelectionMaster) )
    {
LABEL_41:
      sub_B5D69C(this, item);
    }
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UserServantCollectionMaster__TryGetEntity(
                                                                Master_WarQuestSelectionMaster,
                                                                &entity,
                                                                (int64_t)v38,
                                                                (int32_t)this,
                                                                0LL);
    v39 = (System_String_o **)&StringLiteral_19746/*"img_icon_not_summoned"*/;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_41;
      if ( entity->fields.status == 2 )
        v39 = (System_String_o **)&StringLiteral_19747/*"img_icon_summoned"*/;
    }
    summonInfoSprite = v6->fields.summonInfoSprite;
    v41 = *v39;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(summonInfoSprite, v41, 0LL);
    BonusSelectSummonPartyServantListViewItemDraw__SetMessageLabel(v6, v5, v42);
    selectObject = (UnityEngine_Object_o *)v6->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      v44 = v5->fields.servantEntity;
      this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v6->fields.selectObject;
      if ( v44 && (baseItem = v5->fields.baseItem) != 0LL )
      {
        item = (BonusSelectSummonPartyServantListViewItem_o *)(v44 == baseItem->fields.servantEntity);
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
  __int64 v3; // x3
  BonusSelectSummonPartyServantListViewItem_o *v4; // x20
  BonusSelectSummonPartyServantListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UILabel_o *maskMessageLabel; // x20
  bool v13; // w21
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9

  v4 = item;
  v5 = this;
  if ( (byte_42E867D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_12571/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/, v9, v10, v11);
    byte_42E867D = 1;
  }
  if ( !v4 )
    goto LABEL_20;
  if ( v4->fields.isPossibleSelect )
  {
    maskMessageLabel = v5->fields.maskMessageLabel;
    goto LABEL_6;
  }
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity || (baseItem = v4->fields.baseItem) == 0LL )
  {
    maskMessageLabel = v5->fields.maskMessageLabel;
    goto LABEL_13;
  }
  maskMessageLabel = v5->fields.maskMessageLabel;
  if ( servantEntity != baseItem->fields.servantEntity )
  {
LABEL_13:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BonusSelectSummonPartyServantListViewItemDraw_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_12571/*"SUMMON_BONUS_SELECT_MENU_MASK_MESSAGE"*/,
                                                                0LL);
    item = (BonusSelectSummonPartyServantListViewItem_o *)this;
    v13 = 1;
    if ( maskMessageLabel )
      goto LABEL_17;
LABEL_20:
    sub_B5D69C(this, item);
  }
LABEL_6:
  v13 = 0;
  item = (BonusSelectSummonPartyServantListViewItem_o *)string_TypeInfo->static_fields->Empty;
  if ( !maskMessageLabel )
    goto LABEL_20;
LABEL_17:
  UILabel__set_text(maskMessageLabel, (System_String_o *)item, 0LL);
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_20;
  this = (BonusSelectSummonPartyServantListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v13, 0LL);
}