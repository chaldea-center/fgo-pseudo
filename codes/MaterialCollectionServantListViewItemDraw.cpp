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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskName,
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
    sub_1C93D2C(0, method);
  ServantFaceIconComponent__ClearShiningIcon(servantFaceIcon, 0);
}


void MaterialCollectionServantListViewItemDraw__SetInput(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialCollectionServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x20
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_4D2BA4C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BA4C = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C93D2C(v7, v6);
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
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w21
  BalanceConfig_c *v13; // x8
  UserServantMaster_o *v14; // x21
  UserServantEntity_o *HeroineData; // x21
  ServantLimitMaster_o *v16; // x22
  __int64 v17; // x24
  __int64 v18; // x25
  int32_t ServantIdMashu1; // w23
  int32_t actualRarity; // w25
  BalanceConfig_c *v21; // x0
  __int64 v22; // x21
  __int64 v23; // x23
  int32_t v24; // w22
  int32_t v25; // w24
  int32_t SpecialLimitCountPLD; // w21
  ServantOverwriteStatus_o *v27; // x23
  int32_t Rarity_k__BackingField; // w21
  struct UserServantCollectionEntity_o *v29; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  __int64 v31; // x23
  __int64 v32; // x24
  ServantEntity_o *servantEntity; // x0
  _DWORD *v34; // x8
  _BOOL4 v35; // w21
  ServantEntity_o *v36; // x0
  struct UILabel_o *maskLabel; // x20
  __int64 *v38; // x21
  System_String_o *v39; // x21
  System_String_o *v40; // x0
  System_String_o *v41; // x1
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4D2BA4B & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantOverwriteStatus_TypeInfo);
    sub_1C93AD4(&StringLiteral_8626/*"MATERIAL_FIND_COMMAND_CODE"*/);
    sub_1C93AD4(&StringLiteral_8629/*"MATERIAL_FIND_SERVANT_EQUIP"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_8628/*"MATERIAL_FIND_SERVANT"*/);
    byte_4D2BA4B = 1;
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
        goto LABEL_83;
      ServantFaceIconComponent__SetLost(
        (ServantFaceIconComponent_o *)IsAnyLostStateServant,
        item->fields.userSvtCollectionEntity,
        item->fields.iconLabelInfo,
        0,
        0);
    }
    else
    {
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_83;
      v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v43.fields.currentCryptoKey = v11;
      *(_QWORD *)&v43.fields.fakeValue = v10;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v43, 0);
      v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      if ( v12 == v13->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsAnyLostStateServant = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
        v14 = (UserServantMaster_o *)IsAnyLostStateServant;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v14 )
          goto LABEL_83;
        HeroineData = UserServantMaster__getHeroineData(v14, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0);
        IsAnyLostStateServant = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !HeroineData )
          goto LABEL_83;
        v16 = (ServantLimitMaster_o *)IsAnyLostStateServant;
        v18 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
        v17 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
        ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v44.fields.currentCryptoKey = v18;
        *(_QWORD *)&v44.fields.fakeValue = v17;
        IsAnyLostStateServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v44, 0);
        if ( !v16 )
          goto LABEL_83;
        IsAnyLostStateServant = ServantLimitMaster__GetEntity(v16, ServantIdMashu1, (int32_t)IsAnyLostStateServant, 0);
        if ( !IsAnyLostStateServant || !item->fields.userSvtCollectionEntity )
          goto LABEL_83;
        actualRarity = *((_DWORD *)IsAnyLostStateServant + 6);
        IsAnyLostStateServant = (void *)UserServantCollectionEntity__IsCostumeGet(
                                          item->fields.userSvtCollectionEntity,
                                          BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD,
                                          0);
        if ( ((unsigned __int8)IsAnyLostStateServant & 1) != 0 )
        {
          v21 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v21 = BalanceConfig_TypeInfo;
          }
          v23 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
          v22 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
          v24 = v21->static_fields->ServantIdMashu1;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v45.fields.currentCryptoKey = v23;
          *(_QWORD *)&v45.fields.fakeValue = v22;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v45, 0);
          SpecialLimitCountPLD = BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD;
          v27 = (ServantOverwriteStatus_o *)sub_1C93D20(ServantOverwriteStatus_TypeInfo);
          ServantOverwriteStatus___ctor_34689044(v27, v24, v25, SpecialLimitCountPLD, 0);
          if ( !v27 )
            goto LABEL_83;
          Rarity_k__BackingField = v27->fields._Rarity_k__BackingField;
          actualRarity = v27->fields._ActualRarity_k__BackingField;
        }
        else
        {
          Rarity_k__BackingField = actualRarity;
        }
        v29 = item->fields.userSvtCollectionEntity;
        if ( !v29 )
          goto LABEL_83;
        servantFaceIcon = this->fields.servantFaceIcon;
        v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v32;
        *(_QWORD *)&v46.fields.fakeValue = v31;
        IsAnyLostStateServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v46, 0);
        if ( !servantFaceIcon )
          goto LABEL_83;
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
          0);
      }
      else
      {
        IsAnyLostStateServant = this->fields.servantFaceIcon;
        if ( !IsAnyLostStateServant )
          goto LABEL_83;
        ServantFaceIconComponent__Set_41813472(
          (ServantFaceIconComponent_o *)IsAnyLostStateServant,
          item->fields.userSvtCollectionEntity,
          item->fields.iconLabelInfo,
          0,
          0,
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
        goto LABEL_83;
      ServantFaceIconComponent__Set_41821128(
        (ServantFaceIconComponent_o *)IsAnyLostStateServant,
        userCommandCodeCollectionEntity,
        item->fields.iconLabelInfo,
        0,
        0);
    }
  }
  IsAnyLostStateServant = this->fields.servantFaceIcon;
  if ( !IsAnyLostStateServant )
    goto LABEL_83;
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
         (const MethodInfo *)userCommandCodeCollectionEntity) )
  {
    IsAnyLostStateServant = this->fields.maskSprite;
    if ( !IsAnyLostStateServant )
      goto LABEL_83;
    IsAnyLostStateServant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsAnyLostStateServant, 0);
    if ( !IsAnyLostStateServant )
      goto LABEL_83;
    goto LABEL_66;
  }
  v34 = item->fields.userSvtCollectionEntity;
  v35 = (v34 || (v34 = item->fields.userCommandCodeCollectionEntity) != 0) && v34[10] == 1;
  IsAnyLostStateServant = this->fields.maskSprite;
  if ( !IsAnyLostStateServant
    || (IsAnyLostStateServant = UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)IsAnyLostStateServant,
                                  0)) == 0 )
  {
LABEL_83:
    sub_1C93D2C(IsAnyLostStateServant, userCommandCodeCollectionEntity);
  }
  if ( !v35 )
  {
LABEL_66:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsAnyLostStateServant, 0, 0);
    IsAnyLostStateServant = this->fields.maskLabel;
    if ( !IsAnyLostStateServant )
      goto LABEL_83;
    v41 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_68:
    UILabel__set_text((UILabel_o *)IsAnyLostStateServant, v41, 0);
    goto LABEL_69;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsAnyLostStateServant, 1, 0);
  if ( item->fields.userSvtCollectionEntity )
  {
    v36 = item->fields.servantEntity;
    maskLabel = this->fields.maskLabel;
    v38 = &StringLiteral_8628/*"MATERIAL_FIND_SERVANT"*/;
    if ( v36 && ServantEntity__get_IsKeepServantEquip(v36, 0) )
      v38 = (__int64 *)&StringLiteral_8629/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    v39 = (System_String_o *)*v38;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v40 = v39;
LABEL_80:
    IsAnyLostStateServant = LocalizationManager__Get(v40, 0);
    if ( !maskLabel )
      goto LABEL_83;
    v41 = (System_String_o *)IsAnyLostStateServant;
    IsAnyLostStateServant = maskLabel;
    goto LABEL_68;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    maskLabel = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v40 = (System_String_o *)StringLiteral_8626/*"MATERIAL_FIND_COMMAND_CODE"*/;
    goto LABEL_80;
  }
LABEL_69:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    IsAnyLostStateServant = this->fields.baseButton;
    if ( !IsAnyLostStateServant )
      goto LABEL_83;
    (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)IsAnyLostStateServant + 392LL))(
      IsAnyLostStateServant,
      1,
      *(_QWORD *)(*(_QWORD *)IsAnyLostStateServant + 400LL));
    IsAnyLostStateServant = this->fields.baseButton;
    if ( !IsAnyLostStateServant )
      goto LABEL_83;
    (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)IsAnyLostStateServant + 536LL))(
      IsAnyLostStateServant,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)IsAnyLostStateServant + 544LL));
  }
}


void MaterialCollectionServantListViewItemDraw__SetLastTimeIcon(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialEventLogServantListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mLastTimeIcon; // x0
  struct MaterialEventLogListViewItem_Info_o *info; // x8
  int v7; // w21
  int32_t war_id; // w23
  struct MaterialEventLogListViewItem_Info_o *v9; // x9
  int32_t quest_id; // w9
  int v11; // w8
  struct MaterialEventLogListViewItem_Info_o *v12; // x8
  int32_t v13; // w8
  MyRoomParamsManager_c *v14; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v16; // x0
  struct MaterialEventLogListViewItem_Info_o *v17; // x8
  struct MaterialEventLogListViewItem_Info_o *v18; // x8
  int32_t v19; // w8
  struct MaterialEventLogListViewItem_Info_o *v20; // x8
  struct MaterialEventLogListViewItem_Info_o *v21; // x8
  System_String_o *str; // x20
  System_String_o *v23; // x0

  if ( (byte_4D2BA4D & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&MyRoomParamsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6431/*"FES_WAR_ID"*/);
    sub_1C93AD4(&StringLiteral_8634/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_4D2BA4D = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_70;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0);
  if ( !mLastTimeIcon )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0);
  if ( item && item->fields.info )
  {
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6431/*"FES_WAR_ID"*/, 0);
    info = item->fields.info;
    if ( !info )
      goto LABEL_70;
    v7 = (int)mLastTimeIcon;
    war_id = info->fields.war_id;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4D2BA90 )
    {
      sub_1C93AD4(&MyRoomParamsManager_TypeInfo);
      byte_4D2BA90 = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v9 = item->fields.info;
    if ( !v9 )
      goto LABEL_70;
    quest_id = v9->fields.quest_id;
    v11 = *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 12);
    if ( v7 == war_id )
    {
      if ( v11 == quest_id )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4D2BA91 )
        {
          sub_1C93AD4(&MyRoomParamsManager_TypeInfo);
          byte_4D2BA91 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v12 = item->fields.info;
        if ( !v12 )
          goto LABEL_70;
        v13 = v12->fields.war_id;
        if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16) == v13 && v13 != -1 )
        {
          if ( !LODWORD(mLastTimeIcon[9].monitor) )
            j_il2cpp_runtime_class_init_0(mLastTimeIcon);
          if ( !byte_4D2BA92 )
          {
            sub_1C93AD4(&MyRoomParamsManager_TypeInfo);
            byte_4D2BA92 = 1;
          }
          v14 = MyRoomParamsManager_TypeInfo;
          if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            v14 = MyRoomParamsManager_TypeInfo;
          }
          LastPlayTitle_k__BackingField = v14->static_fields->_LastPlayTitle_k__BackingField;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8634/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v16, 0);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            if ( !byte_4D2BA92 )
            {
              sub_1C93AD4(&MyRoomParamsManager_TypeInfo);
              byte_4D2BA92 = 1;
            }
            mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
              mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            }
            v17 = item->fields.info;
            if ( !v17 )
              goto LABEL_70;
            if ( !System_String__op_Equality(
                    *(System_String_o **)(mLastTimeIcon[7].fields.m_CachedPtr + 24),
                    v17->fields.str,
                    0) )
              return;
            goto LABEL_62;
          }
          v21 = item->fields.info;
          if ( !v21 )
            goto LABEL_70;
          str = v21->fields.str;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8634/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
          if ( System_String__op_Inequality(str, v23, 0) )
          {
LABEL_62:
            mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
            if ( mLastTimeIcon )
            {
              mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0);
              if ( mLastTimeIcon )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
                return;
              }
            }
LABEL_70:
            sub_1C93D2C(mLastTimeIcon, item);
          }
        }
      }
    }
    else
    {
      if ( v11 == quest_id )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4D2BA91 )
        {
          sub_1C93AD4(&MyRoomParamsManager_TypeInfo);
          byte_4D2BA91 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v18 = item->fields.info;
        if ( !v18 )
          goto LABEL_70;
        v19 = v18->fields.war_id;
        if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16) == v19 && v19 != -1 )
          goto LABEL_62;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4D2BA93 )
      {
        sub_1C93AD4(&MyRoomParamsManager_TypeInfo);
        byte_4D2BA93 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v20 = item->fields.info;
      if ( !v20 )
        goto LABEL_70;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 32) == v20->fields.quest_id )
        goto LABEL_62;
    }
  }
}