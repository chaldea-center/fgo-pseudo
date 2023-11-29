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
    sub_B170D4();
  ServantFaceIconComponent__ClearShiningIcon(servantFaceIcon, 0LL);
}


void __fastcall MaterialCollectionServantListViewItemDraw__SetInput(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialCollectionServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x20
  struct UICommonButton_o *v7; // x0
  struct UICommonButton_o *v8; // x0

  if ( (byte_40FCB69 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FCB69 = 1;
  }
  if ( item )
    MaterialCollectionServantListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
            v7,
            1LL,
            v7->klass->vtable._6_OnInit.methodPtr),
          (v8 = this->fields.baseButton) == 0LL) )
    {
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
      v8,
      0LL,
      1LL,
      v8->klass->vtable._15_OnPress.methodPtr);
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
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  struct UserServantCollectionEntity_o *v17; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w21
  BalanceConfig_c *v21; // x8
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x21
  UserServantEntity_o *HeroineData; // x0
  struct ServantFaceIconComponent_o *v24; // x23
  struct UserServantCollectionEntity_o *v25; // x22
  struct IconLabelInfo_o *iconLabelInfo; // x21
  __int64 v27; // x24
  __int64 v28; // x25
  int32_t v29; // w0
  int32_t v30; // w4
  ServantFaceIconComponent_o *v31; // x0
  UserServantCollectionEntity_o *v32; // x1
  IconLabelInfo_o *v33; // x2
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x1
  ServantFaceIconComponent_o *v35; // x0
  ServantEntity_o *servantEntity; // x0
  UserServantCollectionEntity_o *v37; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  _DWORD *v40; // x8
  int v41; // w21
  UnityEngine_Component_o *v42; // x0
  ServantEntity_o *v43; // x0
  struct UILabel_o *v44; // x20
  __int64 *v45; // x21
  System_String_o *v46; // x21
  System_String_o *v47; // x0
  UILabel_o *maskLabel; // x0
  System_String_o *v49; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  System_String_o *v51; // x0
  UnityEngine_Object_o *baseButton; // x20
  struct UICommonButton_o *v53; // x0
  struct UICommonButton_o *v54; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_40FCB68 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_8627, v12);
    sub_B16FFC(&StringLiteral_8630, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    sub_B16FFC(&StringLiteral_8629, v15);
    byte_40FCB68 = 1;
  }
  if ( !item || !mode )
    return;
  userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    if ( UserServantCollectionEntity__IsDataLostStateServant(userSvtCollectionEntity, 0LL)
      && !item->fields.isValentineList )
    {
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( !servantFaceIcon )
        goto LABEL_78;
      ServantFaceIconComponent__SetDataLost(
        servantFaceIcon,
        item->fields.userSvtCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
    else
    {
      v17 = item->fields.userSvtCollectionEntity;
      if ( !v17 )
        goto LABEL_78;
      v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v55.fields.currentCryptoKey = v19;
      *(_QWORD *)&v55.fields.fakeValue = v18;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v55, 0LL);
      v21 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v21 = BalanceConfig_TypeInfo;
      }
      if ( v20 == v21->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_78;
        HeroineData = UserServantMaster__getHeroineData(
                        Master_WarQuestSelectionMaster,
                        BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                        0LL);
        if ( !HeroineData )
          goto LABEL_78;
        v24 = this->fields.servantFaceIcon;
        v25 = item->fields.userSvtCollectionEntity;
        iconLabelInfo = item->fields.iconLabelInfo;
        v28 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
        v27 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v56.fields.currentCryptoKey = v28;
        *(_QWORD *)&v56.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL);
        if ( !v24 )
          goto LABEL_78;
        v30 = v29;
        v31 = v24;
        v32 = v25;
        v33 = iconLabelInfo;
      }
      else
      {
        v31 = this->fields.servantFaceIcon;
        if ( !v31 )
          goto LABEL_78;
        v33 = item->fields.iconLabelInfo;
        v32 = item->fields.userSvtCollectionEntity;
        v30 = 0;
      }
      ServantFaceIconComponent__Set_30707876(v31, v32, v33, 0LL, v30, 0LL);
    }
  }
  else
  {
    userCommandCodeCollectionEntity = item->fields.userCommandCodeCollectionEntity;
    if ( userCommandCodeCollectionEntity )
    {
      v35 = this->fields.servantFaceIcon;
      if ( !v35 )
        goto LABEL_78;
      ServantFaceIconComponent__Set_30713364(v35, userCommandCodeCollectionEntity, item->fields.iconLabelInfo, 0LL, 0LL);
    }
  }
  servantEntity = item->fields.servantEntity;
  if ( servantEntity && ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0LL) )
  {
LABEL_40:
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_78;
    gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    goto LABEL_58;
  }
  v37 = item->fields.userSvtCollectionEntity;
  if ( v37 )
  {
    if ( UserServantCollectionEntity__IsDataLostStateServant(v37, 0LL) )
      goto LABEL_40;
    v40 = item->fields.userSvtCollectionEntity;
    if ( v40 )
      goto LABEL_45;
  }
  v40 = item->fields.userCommandCodeCollectionEntity;
  if ( v40 )
LABEL_45:
    v41 = v40[10];
  else
    v41 = 0;
  v42 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v42 || (gameObject = UnityEngine_Component__get_gameObject(v42, 0LL)) == 0LL )
LABEL_78:
    sub_B170D4();
  if ( v41 != 1 )
  {
LABEL_58:
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    maskLabel = this->fields.maskLabel;
    if ( !maskLabel )
      goto LABEL_78;
    v49 = (System_String_o *)StringLiteral_1;
LABEL_69:
    UILabel__set_text(maskLabel, v49, 0LL);
    goto LABEL_70;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( item->fields.userSvtCollectionEntity )
  {
    v43 = item->fields.servantEntity;
    v44 = this->fields.maskLabel;
    v45 = &StringLiteral_8629;
    if ( v43 && ServantEntity__get_IsKeepServantEquip(v43, 0LL) )
      v45 = (__int64 *)&StringLiteral_8630;
    v46 = (System_String_o *)*v45;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = v46;
LABEL_67:
    v51 = LocalizationManager__Get(v47, 0LL);
    if ( !v44 )
      goto LABEL_78;
    v49 = v51;
    maskLabel = v44;
    goto LABEL_69;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    v44 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = (System_String_o *)StringLiteral_8627;
    goto LABEL_67;
  }
LABEL_70:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v53 = this->fields.baseButton;
    if ( !v53 )
      goto LABEL_78;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v53->klass->vtable._5_set_isEnabled.method)(
      v53,
      1LL,
      v53->klass->vtable._6_OnInit.methodPtr);
    v54 = this->fields.baseButton;
    if ( !v54 )
      goto LABEL_78;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v54->klass->vtable._14_SetState.method)(
      v54,
      0LL,
      1LL,
      v54->klass->vtable._15_OnPress.methodPtr);
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t Value; // w0
  __int64 v11; // x1
  struct MaterialEventLogListViewItem_Info_o *info; // x9
  MyRoomParamsManager_c *v13; // x0
  struct MaterialEventLogListViewItem_Info_o *v14; // x8
  MyRoomParamsManager_c *v15; // x0
  struct MaterialEventLogListViewItem_Info_o *v16; // x8
  int32_t war_id; // w8
  MyRoomParamsManager_c *v18; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v20; // x0
  __int64 v21; // x1
  MyRoomParamsManager_c *v22; // x0
  struct MaterialEventLogListViewItem_Info_o *v23; // x8
  MyRoomParamsManager_c *v24; // x0
  struct MaterialEventLogListViewItem_Info_o *v25; // x8
  struct MaterialEventLogListViewItem_Info_o *v26; // x8
  int32_t v27; // w8
  MyRoomParamsManager_c *v28; // x0
  struct MaterialEventLogListViewItem_Info_o *v29; // x8
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  struct MaterialEventLogListViewItem_Info_o *v32; // x8
  System_String_o *str; // x20
  System_String_o *v34; // x0

  if ( (byte_40FCB6A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6315, v6);
    sub_B16FFC(&StringLiteral_8635, v7);
    byte_40FCB6A = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_93;
  gameObject = UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !gameObject )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( item && item->fields.info )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6315, 0LL);
    info = item->fields.info;
    if ( !info )
      goto LABEL_93;
    if ( Value == info->fields.war_id )
    {
      if ( (WORD1(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_40F9B97 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v11);
        byte_40F9B97 = 1;
      }
      v13 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v13 = MyRoomParamsManager_TypeInfo;
      }
      v14 = item->fields.info;
      if ( !v14 )
        goto LABEL_93;
      if ( v13->static_fields->_LastPlayQuestId_k__BackingField == v14->fields.quest_id )
      {
        if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v13);
        if ( !byte_40F6977 )
        {
          sub_B16FFC(&MyRoomParamsManager_TypeInfo, v11);
          byte_40F6977 = 1;
        }
        v15 = MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          v15 = MyRoomParamsManager_TypeInfo;
        }
        v16 = item->fields.info;
        if ( !v16 )
          goto LABEL_93;
        war_id = v16->fields.war_id;
        if ( v15->static_fields->_LastPlayWarId_k__BackingField == war_id && war_id != -1 )
        {
          if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v15);
          if ( !byte_40F9B99 )
          {
            sub_B16FFC(&MyRoomParamsManager_TypeInfo, v11);
            byte_40F9B99 = 1;
          }
          v18 = MyRoomParamsManager_TypeInfo;
          if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            v18 = MyRoomParamsManager_TypeInfo;
          }
          LastPlayTitle_k__BackingField = v18->static_fields->_LastPlayTitle_k__BackingField;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8635, 0LL);
          if ( System_String__op_Equality(LastPlayTitle_k__BackingField, v20, 0LL) )
          {
            if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            }
            if ( !byte_40F9B99 )
            {
              sub_B16FFC(&MyRoomParamsManager_TypeInfo, v21);
              byte_40F9B99 = 1;
            }
            v22 = MyRoomParamsManager_TypeInfo;
            if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
              v22 = MyRoomParamsManager_TypeInfo;
            }
            v23 = item->fields.info;
            if ( !v23 )
              goto LABEL_93;
            if ( !System_String__op_Equality(v22->static_fields->_LastPlayTitle_k__BackingField, v23->fields.str, 0LL) )
              return;
            goto LABEL_84;
          }
          v32 = item->fields.info;
          if ( !v32 )
            goto LABEL_93;
          str = v32->fields.str;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8635, 0LL);
          if ( System_String__op_Inequality(str, v34, 0LL) )
          {
LABEL_84:
            v30 = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
            if ( v30 )
            {
              v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
              if ( v31 )
              {
                UnityEngine_GameObject__SetActive(v31, 1, 0LL);
                return;
              }
            }
LABEL_93:
            sub_B170D4();
          }
        }
      }
    }
    else
    {
      if ( (WORD1(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_40F9B97 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v11);
        byte_40F9B97 = 1;
      }
      v24 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v24 = MyRoomParamsManager_TypeInfo;
      }
      v25 = item->fields.info;
      if ( !v25 )
        goto LABEL_93;
      if ( v24->static_fields->_LastPlayQuestId_k__BackingField == v25->fields.quest_id )
      {
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v24);
        if ( !byte_40F6977 )
        {
          sub_B16FFC(&MyRoomParamsManager_TypeInfo, v11);
          byte_40F6977 = 1;
        }
        v24 = MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          v24 = MyRoomParamsManager_TypeInfo;
        }
        v26 = item->fields.info;
        if ( !v26 )
          goto LABEL_93;
        v27 = v26->fields.war_id;
        if ( v24->static_fields->_LastPlayWarId_k__BackingField == v27 && v27 != -1 )
          goto LABEL_84;
      }
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v24);
      if ( !byte_40F9B9A )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v11);
        byte_40F9B9A = 1;
      }
      v28 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v28 = MyRoomParamsManager_TypeInfo;
      }
      v29 = item->fields.info;
      if ( !v29 )
        goto LABEL_93;
      if ( v28->static_fields->_LastSelectSubFolderId_k__BackingField == v29->fields.quest_id )
        goto LABEL_84;
    }
  }
}