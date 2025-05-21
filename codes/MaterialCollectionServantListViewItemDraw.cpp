void __fastcall MaterialCollectionServantListViewItemDraw___ctor(
        MaterialCollectionServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewItemDraw__ClearNewIcon(
        MaterialCollectionServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0

  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    sub_1BDBAD4(0LL, method);
  ServantFaceIconComponent__ClearShiningIcon(servantFaceIcon, 0LL);
}


void __fastcall MaterialCollectionServantListViewItemDraw__SetInput(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialCollectionServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x20
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_4B3FCD0 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, item);
    byte_4B3FCD0 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
            v7,
            1LL,
            v7->klass->vtable._6_OnInit.methodPtr),
          (v7 = this->fields.baseButton) == 0LL) )
    {
      sub_1BDBAD4(v7, v6);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
      v7,
      0LL,
      1LL,
      v7->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall MaterialCollectionServantListViewItemDraw__SetItem(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialCollectionServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserServantCollectionEntity_o *IsDataLostStateServant; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x1
  struct UserServantCollectionEntity_o *v21; // x8
  __int64 v22; // x21
  __int64 v23; // x22
  int32_t v24; // w21
  BalanceConfig_c *v25; // x8
  UserServantMaster_o *v26; // x21
  UserServantEntity_o *HeroineData; // x21
  ServantLimitMaster_o *v28; // x22
  __int64 v29; // x24
  __int64 v30; // x25
  int32_t ServantIdMashu1; // w23
  int32_t actualRarity; // w25
  BalanceConfig_c *v33; // x0
  __int64 v34; // x21
  __int64 v35; // x23
  int32_t v36; // w22
  int32_t v37; // w24
  int32_t SpecialLimitCountPLD; // w21
  ServantOverwriteStatus_o *v39; // x23
  int32_t Rarity_k__BackingField; // w21
  struct UserServantCollectionEntity_o *v41; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x22
  __int64 v43; // x23
  __int64 v44; // x24
  ServantEntity_o *servantEntity; // x0
  UserServantCollectionEntity_o *v46; // x0
  UserServantCollectionEntity_o *v47; // x0
  UserServantCollectionEntity_o *v48; // x0
  UserServantCollectionEntity_o *v49; // x0
  _DWORD *v50; // x8
  _BOOL4 v51; // w21
  ServantEntity_o *v52; // x0
  struct UILabel_o *maskLabel; // x20
  __int64 *v54; // x21
  System_String_o *v55; // x21
  System_String_o *v56; // x0
  System_String_o *v57; // x1
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4B3FCCF & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, item);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BDB878(&ServantOverwriteStatus_TypeInfo, v13);
    sub_1BDB878(&StringLiteral_8569/*"MATERIAL_FIND_COMMAND_CODE"*/, v14);
    sub_1BDB878(&StringLiteral_8572/*"MATERIAL_FIND_SERVANT_EQUIP"*/, v15);
    sub_1BDB878(&StringLiteral_1/*""*/, v16);
    sub_1BDB878(&StringLiteral_8571/*"MATERIAL_FIND_SERVANT"*/, v17);
    byte_4B3FCCF = 1;
  }
  if ( !item || !mode )
    return;
  userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantCollectionEntity__IsDataLostStateServant(
                                                                userSvtCollectionEntity,
                                                                0LL);
    if ( ((unsigned __int8)IsDataLostStateServant & 1) == 0 )
    {
      IsDataLostStateServant = item->fields.userSvtCollectionEntity;
      if ( !IsDataLostStateServant )
        goto LABEL_95;
      IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantCollectionEntity__IsLinkLostStateServant(
                                                                  IsDataLostStateServant,
                                                                  0LL);
      if ( ((unsigned __int8)IsDataLostStateServant & 1) == 0 )
      {
        IsDataLostStateServant = item->fields.userSvtCollectionEntity;
        if ( !IsDataLostStateServant )
          goto LABEL_95;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantCollectionEntity__IsLinkBadStateServant(
                                                                    IsDataLostStateServant,
                                                                    0LL);
        if ( ((unsigned __int8)IsDataLostStateServant & 1) == 0 )
        {
          IsDataLostStateServant = item->fields.userSvtCollectionEntity;
          if ( !IsDataLostStateServant )
            goto LABEL_95;
          IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantCollectionEntity__IsLinkCloseStateServant(
                                                                      IsDataLostStateServant,
                                                                      0LL);
          if ( ((unsigned __int8)IsDataLostStateServant & 1) == 0 )
            goto LABEL_14;
        }
      }
    }
    if ( !item->fields.isValentineList )
    {
      IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_95;
      ServantFaceIconComponent__SetLost(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        item->fields.userSvtCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
    else
    {
LABEL_14:
      v21 = item->fields.userSvtCollectionEntity;
      if ( !v21 )
        goto LABEL_95;
      v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v59.fields.currentCryptoKey = v23;
      *(_QWORD *)&v59.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v59, 0LL);
      v25 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v25 = BalanceConfig_TypeInfo;
      }
      if ( v24 == v25->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsDataLostStateServant = (UserServantCollectionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
        v26 = (UserServantMaster_o *)IsDataLostStateServant;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( v26 )
        {
          HeroineData = UserServantMaster__getHeroineData(
                          v26,
                          BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                          0LL);
          IsDataLostStateServant = (UserServantCollectionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitMaster___);
          if ( HeroineData )
          {
            v28 = (ServantLimitMaster_o *)IsDataLostStateServant;
            v30 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
            v29 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
            ServantIdMashu1 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu1;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v60.fields.currentCryptoKey = v30;
            *(_QWORD *)&v60.fields.fakeValue = v29;
            IsDataLostStateServant = (UserServantCollectionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                        v60,
                                                                        0LL);
            if ( v28 )
            {
              IsDataLostStateServant = (UserServantCollectionEntity_o *)ServantLimitMaster__GetEntity(
                                                                          v28,
                                                                          ServantIdMashu1,
                                                                          (int32_t)IsDataLostStateServant,
                                                                          0LL);
              if ( IsDataLostStateServant )
              {
                if ( item->fields.userSvtCollectionEntity )
                {
                  actualRarity = IsDataLostStateServant->fields.svtId.fields.currentCryptoKey;
                  IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantCollectionEntity__IsCostumeGet(
                                                                              item->fields.userSvtCollectionEntity,
                                                                              BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD,
                                                                              0LL);
                  if ( ((unsigned __int8)IsDataLostStateServant & 1) != 0 )
                  {
                    v33 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v33 = BalanceConfig_TypeInfo;
                    }
                    v35 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
                    v34 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
                    v36 = v33->static_fields->ServantIdMashu1;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v61.fields.currentCryptoKey = v35;
                    *(_QWORD *)&v61.fields.fakeValue = v34;
                    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v61, 0LL);
                    SpecialLimitCountPLD = BalanceConfig_TypeInfo->static_fields->SpecialLimitCountPLD;
                    v39 = (ServantOverwriteStatus_o *)sub_1BDBAC4(ServantOverwriteStatus_TypeInfo);
                    ServantOverwriteStatus___ctor_33054568(v39, v36, v37, SpecialLimitCountPLD, 0LL);
                    if ( !v39 )
                      goto LABEL_95;
                    Rarity_k__BackingField = v39->fields._Rarity_k__BackingField;
                    actualRarity = v39->fields._ActualRarity_k__BackingField;
                  }
                  else
                  {
                    Rarity_k__BackingField = actualRarity;
                  }
                  v41 = item->fields.userSvtCollectionEntity;
                  if ( v41 )
                  {
                    servantFaceIcon = this->fields.servantFaceIcon;
                    v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
                    v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v62.fields.currentCryptoKey = v44;
                    *(_QWORD *)&v62.fields.fakeValue = v43;
                    IsDataLostStateServant = (UserServantCollectionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                                v62,
                                                                                0LL);
                    if ( servantFaceIcon )
                    {
                      ServantFaceIconComponent__SetIcon(
                        servantFaceIcon,
                        (int32_t)IsDataLostStateServant,
                        Rarity_k__BackingField,
                        0,
                        -1,
                        0,
                        item->fields.iconLabelInfo,
                        0LL,
                        2,
                        0,
                        0,
                        0LL,
                        0,
                        0,
                        0,
                        0LL,
                        actualRarity,
                        0,
                        0LL);
                      goto LABEL_52;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_95:
        sub_1BDBAD4(IsDataLostStateServant, userCommandCodeCollectionEntity);
      }
      IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_95;
      ServantFaceIconComponent__Set_40019848(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        item->fields.userSvtCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0,
        0LL);
    }
  }
  else
  {
    userCommandCodeCollectionEntity = item->fields.userCommandCodeCollectionEntity;
    if ( userCommandCodeCollectionEntity )
    {
      IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_95;
      ServantFaceIconComponent__Set_40027456(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        userCommandCodeCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
  }
LABEL_52:
  servantEntity = item->fields.servantEntity;
  if ( servantEntity && ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0LL) )
    goto LABEL_62;
  v46 = item->fields.userSvtCollectionEntity;
  if ( v46 )
  {
    if ( UserServantCollectionEntity__IsDataLostStateServant(v46, 0LL) )
      goto LABEL_62;
    v47 = item->fields.userSvtCollectionEntity;
    if ( v47 )
    {
      if ( UserServantCollectionEntity__IsLinkLostStateServant(v47, 0LL) )
        goto LABEL_62;
      v48 = item->fields.userSvtCollectionEntity;
      if ( v48 )
      {
        if ( !UserServantCollectionEntity__IsLinkBadStateServant(v48, 0LL) )
        {
          v49 = item->fields.userSvtCollectionEntity;
          if ( v49 )
          {
            if ( UserServantCollectionEntity__IsLinkCloseStateServant(v49, 0LL) )
              goto LABEL_62;
            v50 = item->fields.userSvtCollectionEntity;
            if ( v50 )
              goto LABEL_67;
          }
          goto LABEL_66;
        }
LABEL_62:
        IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
        if ( !IsDataLostStateServant )
          goto LABEL_95;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)IsDataLostStateServant,
                                                                    0LL);
        if ( !IsDataLostStateServant )
          goto LABEL_95;
        goto LABEL_79;
      }
    }
  }
LABEL_66:
  v50 = item->fields.userCommandCodeCollectionEntity;
  if ( !v50 )
  {
    v51 = 0;
    goto LABEL_69;
  }
LABEL_67:
  v51 = v50[10] == 1;
LABEL_69:
  IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
  if ( !IsDataLostStateServant )
    goto LABEL_95;
  IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)IsDataLostStateServant,
                                                              0LL);
  if ( !IsDataLostStateServant )
    goto LABEL_95;
  if ( !v51 )
  {
LABEL_79:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 0, 0LL);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskLabel;
    if ( !IsDataLostStateServant )
      goto LABEL_95;
    v57 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_81:
    UILabel__set_text((UILabel_o *)IsDataLostStateServant, v57, 0LL);
    goto LABEL_82;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 1, 0LL);
  if ( item->fields.userSvtCollectionEntity )
  {
    v52 = item->fields.servantEntity;
    maskLabel = this->fields.maskLabel;
    v54 = &StringLiteral_8571/*"MATERIAL_FIND_SERVANT"*/;
    if ( v52 && ServantEntity__get_IsKeepServantEquip(v52, 0LL) )
      v54 = (__int64 *)&StringLiteral_8572/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    v55 = (System_String_o *)*v54;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v56 = v55;
LABEL_93:
    IsDataLostStateServant = (UserServantCollectionEntity_o *)LocalizationManager__Get(v56, 0LL);
    if ( !maskLabel )
      goto LABEL_95;
    v57 = (System_String_o *)IsDataLostStateServant;
    IsDataLostStateServant = (UserServantCollectionEntity_o *)maskLabel;
    goto LABEL_81;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    maskLabel = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v56 = (System_String_o *)StringLiteral_8569/*"MATERIAL_FIND_COMMAND_CODE"*/;
    goto LABEL_93;
  }
LABEL_82:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.baseButton;
    if ( !IsDataLostStateServant )
      goto LABEL_95;
    ((void (__fastcall *)(UserServantCollectionEntity_o *, __int64, void *))IsDataLostStateServant->klass->vtable._5_CreatePrimaryKey.method)(
      IsDataLostStateServant,
      1LL,
      IsDataLostStateServant->klass[1]._1.image);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.baseButton;
    if ( !IsDataLostStateServant )
      goto LABEL_95;
    ((void (__fastcall *)(UserServantCollectionEntity_o *, _QWORD, __int64, void *))IsDataLostStateServant->klass[1]._1.events)(
      IsDataLostStateServant,
      0LL,
      1LL,
      IsDataLostStateServant->klass[1]._1.properties);
  }
}


void __fastcall MaterialCollectionServantListViewItemDraw__SetLastTimeIcon(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialEventLogServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *mLastTimeIcon; // x0
  struct MaterialEventLogListViewItem_Info_o *info; // x8
  int v10; // w21
  int32_t war_id; // w23
  struct MaterialEventLogListViewItem_Info_o *v12; // x9
  int32_t quest_id; // w9
  int v14; // w8
  struct MaterialEventLogListViewItem_Info_o *v15; // x8
  int32_t v16; // w8
  MyRoomParamsManager_c *v17; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v19; // x0
  struct MaterialEventLogListViewItem_Info_o *v20; // x8
  struct MaterialEventLogListViewItem_Info_o *v21; // x8
  int32_t v22; // w8
  struct MaterialEventLogListViewItem_Info_o *v23; // x8
  struct MaterialEventLogListViewItem_Info_o *v24; // x8
  System_String_o *str; // x20
  System_String_o *v26; // x0

  if ( (byte_4B3FCD1 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, item);
    sub_1BDB878(&MyRoomParamsManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_6412/*"FES_WAR_ID"*/, v6);
    sub_1BDB878(&StringLiteral_8577/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v7);
    byte_4B3FCD1 = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_70;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  if ( item && item->fields.info )
  {
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6412/*"FES_WAR_ID"*/, 0LL);
    info = item->fields.info;
    if ( !info )
      goto LABEL_70;
    v10 = (int)mLastTimeIcon;
    war_id = info->fields.war_id;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4B3FD3C )
    {
      sub_1BDB878(&MyRoomParamsManager_TypeInfo, item);
      byte_4B3FD3C = 1;
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
    quest_id = v12->fields.quest_id;
    v14 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL);
    if ( v10 == war_id )
    {
      if ( v14 == quest_id )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4B3FD3D )
        {
          sub_1BDB878(&MyRoomParamsManager_TypeInfo, item);
          byte_4B3FD3D = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v15 = item->fields.info;
        if ( !v15 )
          goto LABEL_70;
        v16 = v15->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v16 && v16 != -1 )
        {
          if ( !LODWORD(mLastTimeIcon[9].monitor) )
            j_il2cpp_runtime_class_init_0(mLastTimeIcon);
          if ( !byte_4B3FD3E )
          {
            sub_1BDB878(&MyRoomParamsManager_TypeInfo, item);
            byte_4B3FD3E = 1;
          }
          v17 = MyRoomParamsManager_TypeInfo;
          if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            v17 = MyRoomParamsManager_TypeInfo;
          }
          LastPlayTitle_k__BackingField = v17->static_fields->_LastPlayTitle_k__BackingField;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8577/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v19, 0LL);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            if ( !byte_4B3FD3E )
            {
              sub_1BDB878(&MyRoomParamsManager_TypeInfo, item);
              byte_4B3FD3E = 1;
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
            if ( !System_String__op_Equality(
                    *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                    v20->fields.str,
                    0LL) )
              return;
            goto LABEL_62;
          }
          v24 = item->fields.info;
          if ( !v24 )
            goto LABEL_70;
          str = v24->fields.str;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8577/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          if ( System_String__op_Inequality(str, v26, 0LL) )
          {
LABEL_62:
            mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
            if ( mLastTimeIcon )
            {
              mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
              if ( mLastTimeIcon )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
                return;
              }
            }
LABEL_70:
            sub_1BDBAD4(mLastTimeIcon, item);
          }
        }
      }
    }
    else
    {
      if ( v14 == quest_id )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4B3FD3D )
        {
          sub_1BDB878(&MyRoomParamsManager_TypeInfo, item);
          byte_4B3FD3D = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v21 = item->fields.info;
        if ( !v21 )
          goto LABEL_70;
        v22 = v21->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v22 && v22 != -1 )
          goto LABEL_62;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4B3FD3F )
      {
        sub_1BDB878(&MyRoomParamsManager_TypeInfo, item);
        byte_4B3FD3F = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v23 = item->fields.info;
      if ( !v23 )
        goto LABEL_70;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL) == v23->fields.quest_id )
        goto LABEL_62;
    }
  }
}