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


void MaterialCollectionServantListViewItemDraw__ClearNewIcon(
        MaterialCollectionServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0

  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C22451 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22451 = 1;
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
      sub_1C2D6EC(v7, v6);
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
  void *IsDataLostStateServant; // x0
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
  System_String_o *v33; // x1
  UnityEngine_Object_o *baseButton; // x20
  int v35; // w21
  struct UILabel_o *maskLabel; // x21
  System_String_o **v37; // x8
  System_String_o *v38; // x20
  struct UILabel_o *v39; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4C22450 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantOverwriteStatus_TypeInfo);
    sub_1C2D490(&StringLiteral_8570/*"MATERIAL_FIND_COMMAND_CODE"*/);
    sub_1C2D490(&StringLiteral_8573/*"MATERIAL_FIND_SERVANT_EQUIP"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_8572/*"MATERIAL_FIND_SERVANT"*/);
    byte_4C22450 = 1;
  }
  if ( !item || !mode )
    return;
  if ( item->fields.userSvtCollectionEntity )
  {
    IsDataLostStateServant = (void *)MaterialCollectionServantListViewItem__get_IsDataLostStateServant(item, 0);
    if ( (((unsigned __int8)IsDataLostStateServant & 1) != 0
       || (IsDataLostStateServant = (void *)MaterialCollectionServantListViewItem__get_IsLinkLostStateServant(item, 0),
           ((unsigned __int8)IsDataLostStateServant & 1) != 0)
       || (IsDataLostStateServant = (void *)MaterialCollectionServantListViewItem__get_IsLinkBadStateServant(item, 0),
           ((unsigned __int8)IsDataLostStateServant & 1) != 0)
       || (IsDataLostStateServant = (void *)MaterialCollectionServantListViewItem__get_IsLinkCloseStateServant(item, 0),
           ((unsigned __int8)IsDataLostStateServant & 1) != 0))
      && !item->fields.isValentineList )
    {
      IsDataLostStateServant = this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_83;
      ServantFaceIconComponent__SetLost(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
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
      *(_QWORD *)&v40.fields.currentCryptoKey = v11;
      *(_QWORD *)&v40.fields.fakeValue = v10;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v40, 0);
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
        IsDataLostStateServant = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
        v14 = (UserServantMaster_o *)IsDataLostStateServant;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v14 )
          goto LABEL_83;
        HeroineData = UserServantMaster__getHeroineData(v14, BalanceConfig_TypeInfo->static_fields->ServantIdMashu1, 0);
        IsDataLostStateServant = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !HeroineData )
          goto LABEL_83;
        v16 = (ServantLimitMaster_o *)IsDataLostStateServant;
        v18 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
        v17 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
        ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v41.fields.currentCryptoKey = v18;
        *(_QWORD *)&v41.fields.fakeValue = v17;
        IsDataLostStateServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v41, 0);
        if ( !v16 )
          goto LABEL_83;
        IsDataLostStateServant = ServantLimitMaster__GetEntity(v16, ServantIdMashu1, (int32_t)IsDataLostStateServant, 0);
        if ( !IsDataLostStateServant || !item->fields.userSvtCollectionEntity )
          goto LABEL_83;
        actualRarity = *((_DWORD *)IsDataLostStateServant + 6);
        IsDataLostStateServant = (void *)UserServantCollectionEntity__IsCostumeGet(
                                           item->fields.userSvtCollectionEntity,
                                           BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD,
                                           0);
        if ( ((unsigned __int8)IsDataLostStateServant & 1) != 0 )
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
          *(_QWORD *)&v42.fields.currentCryptoKey = v23;
          *(_QWORD *)&v42.fields.fakeValue = v22;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v42, 0);
          SpecialLimitCountPLD = BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD;
          v27 = (ServantOverwriteStatus_o *)sub_1C2D6DC(ServantOverwriteStatus_TypeInfo);
          ServantOverwriteStatus___ctor_33445788(v27, v24, v25, SpecialLimitCountPLD, 0);
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
        *(_QWORD *)&v43.fields.currentCryptoKey = v32;
        *(_QWORD *)&v43.fields.fakeValue = v31;
        IsDataLostStateServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v43, 0);
        if ( !servantFaceIcon )
          goto LABEL_83;
        ServantFaceIconComponent__SetIcon(
          servantFaceIcon,
          (int32_t)IsDataLostStateServant,
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
        IsDataLostStateServant = this->fields.servantFaceIcon;
        if ( !IsDataLostStateServant )
          goto LABEL_83;
        ServantFaceIconComponent__Set_40785360(
          (ServantFaceIconComponent_o *)IsDataLostStateServant,
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
      IsDataLostStateServant = this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_83;
      ServantFaceIconComponent__Set_40792932(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        userCommandCodeCollectionEntity,
        item->fields.iconLabelInfo,
        0,
        0);
    }
  }
  IsDataLostStateServant = this->fields.servantFaceIcon;
  if ( !IsDataLostStateServant )
    goto LABEL_83;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)IsDataLostStateServant,
    this->fields.maskSprite,
    this->fields.defaultMaskName,
    this->fields.defaultMaskAtlas,
    0);
  if ( MaterialCollectionServantListViewItem__get_IsEnemyCollectionDetail(item, 0)
    || MaterialCollectionServantListViewItem__get_IsDataLostStateServant(item, 0)
    || MaterialCollectionServantListViewItem__get_IsLinkLostStateServant(item, 0)
    || MaterialCollectionServantListViewItem__get_IsLinkBadStateServant(item, 0)
    || MaterialCollectionServantListViewItem__get_IsLinkCloseStateServant(item, 0) )
  {
    IsDataLostStateServant = this->fields.maskSprite;
    if ( !IsDataLostStateServant )
      goto LABEL_83;
    IsDataLostStateServant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsDataLostStateServant, 0);
    if ( !IsDataLostStateServant )
      goto LABEL_83;
LABEL_57:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 0, 0);
    IsDataLostStateServant = this->fields.maskLabel;
    if ( !IsDataLostStateServant )
      goto LABEL_83;
    v33 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_59:
    UILabel__set_text((UILabel_o *)IsDataLostStateServant, v33, 0);
    goto LABEL_60;
  }
  IsDataLostStateServant = (void *)MaterialCollectionServantListViewItem__get_CollectionKind(item, 0);
  if ( !this->fields.maskSprite )
    goto LABEL_83;
  v35 = (int)IsDataLostStateServant;
  IsDataLostStateServant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.maskSprite, 0);
  if ( !IsDataLostStateServant )
    goto LABEL_83;
  if ( v35 != 1 )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 1, 0);
  if ( item->fields.userSvtCollectionEntity )
  {
    maskLabel = this->fields.maskLabel;
    if ( MaterialCollectionServantListViewItem__get_IsServantEquip(item, 0) )
      v37 = (System_String_o **)&StringLiteral_8573/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    else
      v37 = (System_String_o **)&StringLiteral_8572/*"MATERIAL_FIND_SERVANT"*/;
    v38 = *v37;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsDataLostStateServant = LocalizationManager__Get(v38, 0);
    if ( !maskLabel )
      goto LABEL_83;
    v33 = (System_String_o *)IsDataLostStateServant;
    IsDataLostStateServant = maskLabel;
    goto LABEL_59;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    v39 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsDataLostStateServant = LocalizationManager__Get((System_String_o *)StringLiteral_8570/*"MATERIAL_FIND_COMMAND_CODE"*/, 0);
    if ( !v39 )
      goto LABEL_83;
    v33 = (System_String_o *)IsDataLostStateServant;
    IsDataLostStateServant = v39;
    goto LABEL_59;
  }
LABEL_60:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    IsDataLostStateServant = this->fields.baseButton;
    if ( IsDataLostStateServant )
    {
      (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)IsDataLostStateServant + 392LL))(
        IsDataLostStateServant,
        1,
        *(_QWORD *)(*(_QWORD *)IsDataLostStateServant + 400LL));
      IsDataLostStateServant = this->fields.baseButton;
      if ( IsDataLostStateServant )
      {
        (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)IsDataLostStateServant + 536LL))(
          IsDataLostStateServant,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)IsDataLostStateServant + 544LL));
        return;
      }
    }
LABEL_83:
    sub_1C2D6EC(IsDataLostStateServant, userCommandCodeCollectionEntity);
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

  if ( (byte_4C22452 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&MyRoomParamsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6392/*"FES_WAR_ID"*/);
    sub_1C2D490(&StringLiteral_8578/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_4C22452 = 1;
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
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6392/*"FES_WAR_ID"*/, 0);
    info = item->fields.info;
    if ( !info )
      goto LABEL_70;
    v7 = (int)mLastTimeIcon;
    war_id = info->fields.war_id;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4C2253B )
    {
      sub_1C2D490(&MyRoomParamsManager_TypeInfo);
      byte_4C2253B = 1;
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
        if ( !byte_4C2253C )
        {
          sub_1C2D490(&MyRoomParamsManager_TypeInfo);
          byte_4C2253C = 1;
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
          if ( !byte_4C2253D )
          {
            sub_1C2D490(&MyRoomParamsManager_TypeInfo);
            byte_4C2253D = 1;
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
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8578/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v16, 0);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            if ( !byte_4C2253D )
            {
              sub_1C2D490(&MyRoomParamsManager_TypeInfo);
              byte_4C2253D = 1;
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
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8578/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
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
            sub_1C2D6EC(mLastTimeIcon, item);
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
        if ( !byte_4C2253C )
        {
          sub_1C2D490(&MyRoomParamsManager_TypeInfo);
          byte_4C2253C = 1;
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
      if ( !byte_4C2253E )
      {
        sub_1C2D490(&MyRoomParamsManager_TypeInfo);
        byte_4C2253E = 1;
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