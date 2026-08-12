void MaterialCollectionServantListViewItemDraw___ctor(
        MaterialCollectionServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialCollectionServantListViewItemDraw__Awake(
        MaterialCollectionServantListViewItemDraw_o *this,
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
  sub_2213A04(
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void MaterialCollectionServantListViewItemDraw__ClearNewIcon(
        MaterialCollectionServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0

  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    sub_2213CDC(0, method);
  ServantFaceIconComponent__ClearShiningIcon(servantFaceIcon, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionServantListViewItemDraw__SetInput(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialCollectionServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x20
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_596B69A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B69A = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    v7 = this->fields.baseButton;
    if ( !v7
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, const MethodInfo *))v7->klass->vtable._5_set_isEnabled.methodPtr)(
            v7,
            1,
            v7->klass->vtable._5_set_isEnabled.method),
          (v7 = this->fields.baseButton) == 0) )
    {
      sub_2213CDC(v7, v6);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v7->klass->vtable._14_SetState.methodPtr)(
      v7,
      0,
      1,
      v7->klass->vtable._14_SetState.method);
  }
}


void MaterialCollectionServantListViewItemDraw__SetItem(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialCollectionServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  void *IsAnyLostStateServant; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x1
  __int64 v9; // x2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  __int64 v13; // x2
  int32_t v14; // w21
  BalanceConfig_c *v15; // x8
  __int64 v16; // x2
  UserServantMaster_o *v17; // x21
  UserServantEntity_o *HeroineData; // x21
  __int64 v19; // x2
  ServantLimitMaster_o *v20; // x22
  __int64 v21; // x24
  __int64 v22; // x25
  int32_t ServantIdMashu1; // w23
  int32_t actualRarity; // w25
  __int64 v25; // x2
  BalanceConfig_c *v26; // x0
  __int64 v27; // x21
  __int64 v28; // x23
  int32_t v29; // w22
  int32_t v30; // w24
  int32_t SpecialLimitCountPLD; // w21
  ServantOverwriteStatus_o *v32; // x23
  int32_t Rarity_k__BackingField; // w21
  struct UserServantCollectionEntity_o *v34; // x8
  __int64 v35; // x23
  __int64 v36; // x24
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  ServantEntity_o *servantEntity; // x0
  _DWORD *v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  ServantEntity_o *v42; // x0
  struct UILabel_o *maskLabel; // x20
  __int64 *v44; // x21
  System_String_o *v45; // x21
  System_String_o *v46; // x0
  System_String_o *v47; // x1
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_596B699 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantOverwriteStatus_TypeInfo);
    sub_2213A60(&StringLiteral_8940/*"MATERIAL_FIND_COMMAND_CODE"*/);
    sub_2213A60(&StringLiteral_8943/*"MATERIAL_FIND_SERVANT_EQUIP"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_8942/*"MATERIAL_FIND_SERVANT"*/);
    byte_596B699 = 1;
  }
  if ( !item || !mode )
    return;
  if ( item->fields.userSvtCollectionEntity )
  {
    IsAnyLostStateServant = (void *)MaterialCollectionServantListViewItem__get_IsAnyLostStateServant(
                                      item,
                                      (const MethodInfo *)item);
    if ( ((unsigned __int8)IsAnyLostStateServant & 1) != 0 && !item->fields.isValentineList )
    {
      IsAnyLostStateServant = this->fields.servantFaceIcon;
      if ( !IsAnyLostStateServant )
        goto LABEL_80;
      ServantFaceIconComponent__SetLost(
        (ServantFaceIconComponent_o *)IsAnyLostStateServant,
        item->fields.userSvtCollectionEntity,
        item->fields.iconLabelInfo,
        0,
        1,
        0);
    }
    else
    {
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_80;
      v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          userCommandCodeCollectionEntity,
          v9);
      *(_QWORD *)&v49.fields.currentCryptoKey = v11;
      *(_QWORD *)&v49.fields.fakeValue = v12;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v49, 0);
      v15 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userCommandCodeCollectionEntity, v13);
        v15 = BalanceConfig_TypeInfo;
      }
      if ( v14 == v15->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userCommandCodeCollectionEntity, v13);
        IsAnyLostStateServant = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
        v17 = (UserServantMaster_o *)IsAnyLostStateServant;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userCommandCodeCollectionEntity, v16);
        if ( !v17 )
          goto LABEL_80;
        HeroineData = UserServantMaster__getHeroineData(v17, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0);
        IsAnyLostStateServant = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !HeroineData )
          goto LABEL_80;
        v20 = (ServantLimitMaster_o *)IsAnyLostStateServant;
        v21 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
        v22 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
        ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            userCommandCodeCollectionEntity,
            v19);
        *(_QWORD *)&v50.fields.currentCryptoKey = v21;
        *(_QWORD *)&v50.fields.fakeValue = v22;
        IsAnyLostStateServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v50, 0);
        if ( !v20 )
          goto LABEL_80;
        IsAnyLostStateServant = ServantLimitMaster__GetEntity(v20, ServantIdMashu1, (int32_t)IsAnyLostStateServant, 0);
        if ( !IsAnyLostStateServant || !item->fields.userSvtCollectionEntity )
          goto LABEL_80;
        actualRarity = *((_DWORD *)IsAnyLostStateServant + 6);
        IsAnyLostStateServant = (void *)UserServantCollectionEntity__IsCostumeGet(
                                          item->fields.userSvtCollectionEntity,
                                          BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD,
                                          0);
        if ( ((unsigned __int8)IsAnyLostStateServant & 1) != 0 )
        {
          v26 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userCommandCodeCollectionEntity, v25);
            v26 = BalanceConfig_TypeInfo;
          }
          v28 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
          v27 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
          v29 = v26->static_fields->ServantIdMashu1;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
              userCommandCodeCollectionEntity,
              v25);
          *(_QWORD *)&v51.fields.currentCryptoKey = v28;
          *(_QWORD *)&v51.fields.fakeValue = v27;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v51, 0);
          SpecialLimitCountPLD = BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD;
          v32 = (ServantOverwriteStatus_o *)sub_2213CCC(ServantOverwriteStatus_TypeInfo);
          ServantOverwriteStatus___ctor_40472656(v32, v29, v30, SpecialLimitCountPLD, 0);
          if ( !v32 )
            goto LABEL_80;
          Rarity_k__BackingField = v32->fields._Rarity_k__BackingField;
          actualRarity = v32->fields._ActualRarity_k__BackingField;
        }
        else
        {
          Rarity_k__BackingField = actualRarity;
        }
        v34 = item->fields.userSvtCollectionEntity;
        if ( !v34 )
          goto LABEL_80;
        v35 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
        servantFaceIcon = this->fields.servantFaceIcon;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            userCommandCodeCollectionEntity,
            v25);
        *(_QWORD *)&v52.fields.currentCryptoKey = v35;
        *(_QWORD *)&v52.fields.fakeValue = v36;
        IsAnyLostStateServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v52, 0);
        if ( !servantFaceIcon )
          goto LABEL_80;
        ServantFaceIconComponent__SetIcon(
          servantFaceIcon,
          (int32_t)IsAnyLostStateServant,
          Rarity_k__BackingField,
          0,
          -1,
          0,
          item->fields.iconLabelInfo,
          0,
          2,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          actualRarity,
          0,
          0,
          0);
      }
      else
      {
        IsAnyLostStateServant = this->fields.servantFaceIcon;
        if ( !IsAnyLostStateServant )
          goto LABEL_80;
        ServantFaceIconComponent__Set_48050620(
          (ServantFaceIconComponent_o *)IsAnyLostStateServant,
          item->fields.userSvtCollectionEntity,
          item->fields.iconLabelInfo,
          0,
          0,
          1,
          0);
      }
    }
  }
  else
  {
    userCommandCodeCollectionEntity = item->fields.userCommandCodeCollectionEntity;
    if ( userCommandCodeCollectionEntity )
    {
      IsAnyLostStateServant = this->fields.servantFaceIcon;
      if ( !IsAnyLostStateServant )
        goto LABEL_80;
      ServantFaceIconComponent__Set_48058756(
        (ServantFaceIconComponent_o *)IsAnyLostStateServant,
        userCommandCodeCollectionEntity,
        item->fields.iconLabelInfo,
        0,
        0);
    }
  }
  IsAnyLostStateServant = this->fields.servantFaceIcon;
  if ( !IsAnyLostStateServant )
    goto LABEL_80;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)IsAnyLostStateServant,
    this->fields.maskSprite,
    this->fields.defaultMaskName,
    this->fields.defaultMaskAtlas,
    0);
  servantEntity = item->fields.servantEntity;
  if ( servantEntity && ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0)
    || MaterialCollectionServantListViewItem__get_IsAnyLostStateServant(
         item,
         (const MethodInfo *)userCommandCodeCollectionEntity)
    || (v39 = item->fields.userSvtCollectionEntity) == 0 && (v39 = item->fields.userCommandCodeCollectionEntity) == 0
    || v39[10] != 1 )
  {
    IsAnyLostStateServant = this->fields.maskSprite;
    if ( !IsAnyLostStateServant )
      goto LABEL_80;
    IsAnyLostStateServant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsAnyLostStateServant, 0);
    if ( !IsAnyLostStateServant )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsAnyLostStateServant, 0, 0);
    IsAnyLostStateServant = this->fields.maskLabel;
    if ( !IsAnyLostStateServant )
      goto LABEL_80;
    v47 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_66;
  }
  IsAnyLostStateServant = this->fields.maskSprite;
  if ( !IsAnyLostStateServant )
    goto LABEL_80;
  IsAnyLostStateServant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsAnyLostStateServant, 0);
  if ( !IsAnyLostStateServant )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsAnyLostStateServant, 1, 0);
  if ( item->fields.userSvtCollectionEntity )
  {
    v42 = item->fields.servantEntity;
    maskLabel = this->fields.maskLabel;
    v44 = &StringLiteral_8942/*"MATERIAL_FIND_SERVANT"*/;
    if ( v42 && ServantEntity__get_IsKeepServantEquip(v42, 0) )
      v44 = (__int64 *)&StringLiteral_8943/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    v45 = (System_String_o *)*v44;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
    v46 = v45;
LABEL_78:
    IsAnyLostStateServant = LocalizationManager__Get(v46, 0);
    if ( !maskLabel )
      goto LABEL_80;
    v47 = (System_String_o *)IsAnyLostStateServant;
    IsAnyLostStateServant = maskLabel;
LABEL_66:
    UILabel__set_text((UILabel_o *)IsAnyLostStateServant, v47, 0);
    goto LABEL_67;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    maskLabel = this->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
    v46 = (System_String_o *)StringLiteral_8940/*"MATERIAL_FIND_COMMAND_CODE"*/;
    goto LABEL_78;
  }
LABEL_67:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    IsAnyLostStateServant = this->fields.baseButton;
    if ( IsAnyLostStateServant )
    {
      (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)IsAnyLostStateServant + 392LL))(
        IsAnyLostStateServant,
        1,
        *(_QWORD *)(*(_QWORD *)IsAnyLostStateServant + 400LL));
      IsAnyLostStateServant = this->fields.baseButton;
      if ( IsAnyLostStateServant )
      {
        (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)IsAnyLostStateServant + 536LL))(
          IsAnyLostStateServant,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)IsAnyLostStateServant + 544LL));
        return;
      }
    }
LABEL_80:
    sub_2213CDC(IsAnyLostStateServant, userCommandCodeCollectionEntity);
  }
}


void MaterialCollectionServantListViewItemDraw__SetLastTimeIcon(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialEventLogServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 mLastTimeIcon; // x0
  __int64 v6; // x2
  struct MaterialEventLogListViewItem_Info_o *info; // x9
  int32_t war_id; // w10
  int v9; // w9
  struct MaterialEventLogListViewItem_Info_o *v10; // x8
  struct MaterialEventLogListViewItem_Info_o *v11; // x8
  int32_t v12; // w8
  MyRoomParamsManager_c *v13; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v15; // x0
  __int64 v16; // x2
  long double v17; // q0
  struct MaterialEventLogListViewItem_Info_o *v18; // x8
  struct MaterialEventLogListViewItem_Info_o *v19; // x8
  struct MaterialEventLogListViewItem_Info_o *v20; // x8
  int32_t v21; // w8
  struct MaterialEventLogListViewItem_Info_o *v22; // x8
  struct MaterialEventLogListViewItem_Info_o *v23; // x8
  System_String_o *str; // x20
  System_String_o *v25; // x0

  if ( (byte_596B69B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    sub_2213A60(&StringLiteral_6672/*"FES_WAR_ID"*/);
    sub_2213A60(&StringLiteral_8948/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_596B69B = 1;
  }
  mLastTimeIcon = (__int64)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_73;
  mLastTimeIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLastTimeIcon, 0);
  if ( !mLastTimeIcon )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0);
  if ( item && item->fields.info )
  {
    mLastTimeIcon = ConstantMaster__getValue((System_String_o *)StringLiteral_6672/*"FES_WAR_ID"*/, 0);
    info = item->fields.info;
    if ( !info )
      goto LABEL_73;
    war_id = info->fields.war_id;
    v9 = *(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1);
    if ( (_DWORD)mLastTimeIcon == war_id )
    {
      if ( !v9 )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item, v6);
      if ( !byte_596B6DE )
      {
        sub_2213A60(&MyRoomParamsManager_TypeInfo);
        byte_596B6DE = 1;
      }
      mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item, v6);
        mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
      }
      v10 = item->fields.info;
      if ( !v10 )
        goto LABEL_73;
      if ( *(_DWORD *)(*(_QWORD *)(mLastTimeIcon + 184) + 12LL) == v10->fields.quest_id )
      {
        if ( !*(_DWORD *)(mLastTimeIcon + 228) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon, item, v6);
        if ( !byte_596B6DF )
        {
          sub_2213A60(&MyRoomParamsManager_TypeInfo);
          byte_596B6DF = 1;
        }
        mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
        if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item, v6);
          mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
        }
        v11 = item->fields.info;
        if ( !v11 )
          goto LABEL_73;
        v12 = v11->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)(mLastTimeIcon + 184) + 16LL) == v12 && v12 != -1 )
        {
          if ( !*(_DWORD *)(mLastTimeIcon + 228) )
            j_il2cpp_runtime_class_init_0(mLastTimeIcon, item, v6);
          if ( !byte_596B6E0 )
          {
            sub_2213A60(&MyRoomParamsManager_TypeInfo);
            byte_596B6E0 = 1;
          }
          v13 = MyRoomParamsManager_TypeInfo;
          if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item, v6);
            v13 = MyRoomParamsManager_TypeInfo;
          }
          LastPlayTitle_k__BackingField = v13->static_fields->_LastPlayTitle_k__BackingField;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
          v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8948/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
          mLastTimeIcon = System_String__op_Equality(LastPlayTitle_k__BackingField, v15, 0);
          if ( (mLastTimeIcon & 1) != 0 )
          {
            if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v17 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item, v16);
            mLastTimeIcon = sub_2622068(0, v17);
            v18 = item->fields.info;
            if ( !v18 )
              goto LABEL_73;
            if ( !System_String__op_Equality((System_String_o *)mLastTimeIcon, v18->fields.str, 0) )
              return;
            goto LABEL_65;
          }
          v23 = item->fields.info;
          if ( !v23 )
            goto LABEL_73;
          str = v23->fields.str;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v16);
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8948/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
          if ( System_String__op_Inequality(str, v25, 0) )
          {
LABEL_65:
            mLastTimeIcon = (__int64)this->fields.mLastTimeIcon;
            if ( mLastTimeIcon )
            {
              mLastTimeIcon = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)mLastTimeIcon,
                                         0);
              if ( mLastTimeIcon )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
                return;
              }
            }
LABEL_73:
            sub_2213CDC(mLastTimeIcon, item);
          }
        }
      }
    }
    else
    {
      if ( !v9 )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item, v6);
      if ( !byte_596B6DE )
      {
        sub_2213A60(&MyRoomParamsManager_TypeInfo);
        byte_596B6DE = 1;
      }
      mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item, v6);
        mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
      }
      v19 = item->fields.info;
      if ( !v19 )
        goto LABEL_73;
      if ( *(_DWORD *)(*(_QWORD *)(mLastTimeIcon + 184) + 12LL) == v19->fields.quest_id )
      {
        if ( !*(_DWORD *)(mLastTimeIcon + 228) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon, item, v6);
        if ( !byte_596B6DF )
        {
          sub_2213A60(&MyRoomParamsManager_TypeInfo);
          byte_596B6DF = 1;
        }
        mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
        if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item, v6);
          mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
        }
        v20 = item->fields.info;
        if ( !v20 )
          goto LABEL_73;
        v21 = v20->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)(mLastTimeIcon + 184) + 16LL) == v21 && v21 != -1 )
          goto LABEL_65;
      }
      if ( !*(_DWORD *)(mLastTimeIcon + 228) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon, item, v6);
      if ( !byte_596B6E1 )
      {
        sub_2213A60(&MyRoomParamsManager_TypeInfo);
        byte_596B6E1 = 1;
      }
      mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item, v6);
        mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
      }
      v22 = item->fields.info;
      if ( !v22 )
        goto LABEL_73;
      if ( *(_DWORD *)(*(_QWORD *)(mLastTimeIcon + 184) + 32LL) == v22->fields.quest_id )
        goto LABEL_65;
    }
  }
}