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
    sub_B2C434(0LL, method);
  ServantFaceIconComponent__ClearShiningIcon(servantFaceIcon, 0LL);
}


void __fastcall MaterialCollectionServantListViewItemDraw__SetInput(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialCollectionServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x20
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0

  if ( (byte_4189D04 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_4189D04 = 1;
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
    v8 = this->fields.baseButton;
    if ( !v8
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._5_set_isEnabled.method)(
            v8,
            1LL,
            v8->klass->vtable._6_OnInit.methodPtr),
          (v8 = this->fields.baseButton) == 0LL) )
    {
      sub_B2C434(v8, v7);
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
  ServantFaceIconComponent_o *IsDataLostStateServant; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x1
  struct UserServantCollectionEntity_o *v19; // x8
  __int64 v20; // x21
  __int64 v21; // x22
  int32_t v22; // w21
  BalanceConfig_c *v23; // x8
  UserServantMaster_o *v24; // x21
  struct ServantFaceIconComponent_o *servantFaceIcon; // x23
  struct UserServantCollectionEntity_o *v26; // x22
  struct IconLabelInfo_o *iconLabelInfo; // x21
  struct UIIconLabel_o *iconLabel; // x24
  struct UISprite_o *rarity2Sprite; // x25
  int32_t v30; // w4
  UserServantCollectionEntity_o *v31; // x1
  IconLabelInfo_o *v32; // x2
  ServantEntity_o *servantEntity; // x0
  UserServantCollectionEntity_o *v34; // x0
  _DWORD *v35; // x8
  int v36; // w21
  ServantEntity_o *v37; // x0
  struct UILabel_o *maskLabel; // x20
  __int64 *v39; // x21
  System_String_o *v40; // x21
  System_String_o *v41; // x0
  System_String_o *v42; // x1
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4189D03 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_8656/*"MATERIAL_FIND_COMMAND_CODE"*/, v12);
    sub_B2C35C(&StringLiteral_8659/*"MATERIAL_FIND_SERVANT_EQUIP"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_8658/*"MATERIAL_FIND_SERVANT"*/, v15);
    byte_4189D03 = 1;
  }
  if ( !item || !mode )
    return;
  userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    IsDataLostStateServant = (ServantFaceIconComponent_o *)UserServantCollectionEntity__IsDataLostStateServant(
                                                             userSvtCollectionEntity,
                                                             0LL);
    if ( ((unsigned __int8)IsDataLostStateServant & 1) != 0 && !item->fields.isValentineList )
    {
      IsDataLostStateServant = this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_78;
      ServantFaceIconComponent__SetDataLost(
        IsDataLostStateServant,
        item->fields.userSvtCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
    else
    {
      v19 = item->fields.userSvtCollectionEntity;
      if ( !v19 )
        goto LABEL_78;
      v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v44.fields.currentCryptoKey = v21;
      *(_QWORD *)&v44.fields.fakeValue = v20;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v44, 0LL);
      v23 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v23 = BalanceConfig_TypeInfo;
      }
      if ( v22 == v23->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsDataLostStateServant = (ServantFaceIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
        v24 = (UserServantMaster_o *)IsDataLostStateServant;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v24 )
          goto LABEL_78;
        IsDataLostStateServant = (ServantFaceIconComponent_o *)UserServantMaster__getHeroineData(
                                                                 v24,
                                                                 BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                                                 0LL);
        if ( !IsDataLostStateServant )
          goto LABEL_78;
        servantFaceIcon = this->fields.servantFaceIcon;
        v26 = item->fields.userSvtCollectionEntity;
        iconLabelInfo = item->fields.iconLabelInfo;
        rarity2Sprite = IsDataLostStateServant->fields.rarity2Sprite;
        iconLabel = IsDataLostStateServant->fields.iconLabel;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v45.fields.currentCryptoKey = rarity2Sprite;
        *(_QWORD *)&v45.fields.fakeValue = iconLabel;
        IsDataLostStateServant = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                 v45,
                                                                 0LL);
        if ( !servantFaceIcon )
          goto LABEL_78;
        v30 = (int)IsDataLostStateServant;
        IsDataLostStateServant = servantFaceIcon;
        v31 = v26;
        v32 = iconLabelInfo;
      }
      else
      {
        IsDataLostStateServant = this->fields.servantFaceIcon;
        if ( !IsDataLostStateServant )
          goto LABEL_78;
        v32 = item->fields.iconLabelInfo;
        v31 = item->fields.userSvtCollectionEntity;
        v30 = 0;
      }
      ServantFaceIconComponent__Set_30795548(IsDataLostStateServant, v31, v32, 0LL, v30, 0LL);
    }
  }
  else
  {
    userCommandCodeCollectionEntity = item->fields.userCommandCodeCollectionEntity;
    if ( userCommandCodeCollectionEntity )
    {
      IsDataLostStateServant = this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_78;
      ServantFaceIconComponent__Set_30801036(
        IsDataLostStateServant,
        userCommandCodeCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
  }
  servantEntity = item->fields.servantEntity;
  if ( servantEntity && ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0LL) )
  {
LABEL_40:
    IsDataLostStateServant = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !IsDataLostStateServant )
      goto LABEL_78;
    IsDataLostStateServant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)IsDataLostStateServant,
                                                             0LL);
    if ( !IsDataLostStateServant )
      goto LABEL_78;
    goto LABEL_58;
  }
  v34 = item->fields.userSvtCollectionEntity;
  if ( v34 )
  {
    if ( UserServantCollectionEntity__IsDataLostStateServant(v34, 0LL) )
      goto LABEL_40;
    v35 = item->fields.userSvtCollectionEntity;
    if ( v35 )
      goto LABEL_45;
  }
  v35 = item->fields.userCommandCodeCollectionEntity;
  if ( v35 )
LABEL_45:
    v36 = v35[10];
  else
    v36 = 0;
  IsDataLostStateServant = (ServantFaceIconComponent_o *)this->fields.maskSprite;
  if ( !IsDataLostStateServant
    || (IsDataLostStateServant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)IsDataLostStateServant,
                                                                 0LL)) == 0LL )
  {
LABEL_78:
    sub_B2C434(IsDataLostStateServant, userCommandCodeCollectionEntity);
  }
  if ( v36 != 1 )
  {
LABEL_58:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 0, 0LL);
    IsDataLostStateServant = (ServantFaceIconComponent_o *)this->fields.maskLabel;
    if ( !IsDataLostStateServant )
      goto LABEL_78;
    v42 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_69:
    UILabel__set_text((UILabel_o *)IsDataLostStateServant, v42, 0LL);
    goto LABEL_70;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 1, 0LL);
  if ( item->fields.userSvtCollectionEntity )
  {
    v37 = item->fields.servantEntity;
    maskLabel = this->fields.maskLabel;
    v39 = &StringLiteral_8658/*"MATERIAL_FIND_SERVANT"*/;
    if ( v37 && ServantEntity__get_IsKeepServantEquip(v37, 0LL) )
      v39 = (__int64 *)&StringLiteral_8659/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    v40 = (System_String_o *)*v39;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = v40;
LABEL_67:
    IsDataLostStateServant = (ServantFaceIconComponent_o *)LocalizationManager__Get(v41, 0LL);
    if ( !maskLabel )
      goto LABEL_78;
    v42 = (System_String_o *)IsDataLostStateServant;
    IsDataLostStateServant = (ServantFaceIconComponent_o *)maskLabel;
    goto LABEL_69;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    maskLabel = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = (System_String_o *)StringLiteral_8656/*"MATERIAL_FIND_COMMAND_CODE"*/;
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
    IsDataLostStateServant = (ServantFaceIconComponent_o *)this->fields.baseButton;
    if ( !IsDataLostStateServant )
      goto LABEL_78;
    ((void (__fastcall *)(ServantFaceIconComponent_o *, __int64, void *))IsDataLostStateServant->klass->vtable._5_UpdateAlpha.method)(
      IsDataLostStateServant,
      1LL,
      IsDataLostStateServant->klass[1]._1.image);
    IsDataLostStateServant = (ServantFaceIconComponent_o *)this->fields.baseButton;
    if ( !IsDataLostStateServant )
      goto LABEL_78;
    ((void (__fastcall *)(ServantFaceIconComponent_o *, _QWORD, __int64, void *))IsDataLostStateServant->klass[1]._1.events)(
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
  struct MaterialEventLogListViewItem_Info_o *info; // x9
  struct MaterialEventLogListViewItem_Info_o *v10; // x8
  struct MaterialEventLogListViewItem_Info_o *v11; // x8
  int32_t war_id; // w8
  MyRoomParamsManager_c *v13; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v15; // x0
  struct MaterialEventLogListViewItem_Info_o *v16; // x8
  struct MaterialEventLogListViewItem_Info_o *v17; // x8
  struct MaterialEventLogListViewItem_Info_o *v18; // x8
  int32_t v19; // w8
  struct MaterialEventLogListViewItem_Info_o *v20; // x8
  struct MaterialEventLogListViewItem_Info_o *v21; // x8
  System_String_o *str; // x20
  System_String_o *v23; // x0

  if ( (byte_4189D05 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_6333/*"FES_WAR_ID"*/, v6);
    sub_B2C35C(&StringLiteral_8664/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v7);
    byte_4189D05 = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_93;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  if ( item && item->fields.info )
  {
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6333/*"FES_WAR_ID"*/, 0LL);
    info = item->fields.info;
    if ( !info )
      goto LABEL_93;
    if ( (_DWORD)mLastTimeIcon == info->fields.war_id )
    {
      if ( (WORD1(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4187533 )
      {
        sub_B2C35C(&MyRoomParamsManager_TypeInfo, item);
        byte_4187533 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v10 = item->fields.info;
      if ( !v10 )
        goto LABEL_93;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == v10->fields.quest_id )
      {
        if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4185D96 )
        {
          sub_B2C35C(&MyRoomParamsManager_TypeInfo, item);
          byte_4185D96 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v11 = item->fields.info;
        if ( !v11 )
          goto LABEL_93;
        war_id = v11->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == war_id && war_id != -1 )
        {
          if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
            j_il2cpp_runtime_class_init_0(mLastTimeIcon);
          if ( !byte_4187535 )
          {
            sub_B2C35C(&MyRoomParamsManager_TypeInfo, item);
            byte_4187535 = 1;
          }
          v13 = MyRoomParamsManager_TypeInfo;
          if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            v13 = MyRoomParamsManager_TypeInfo;
          }
          LastPlayTitle_k__BackingField = v13->static_fields->_LastPlayTitle_k__BackingField;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8664/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v15, 0LL);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            }
            if ( !byte_4187535 )
            {
              sub_B2C35C(&MyRoomParamsManager_TypeInfo, item);
              byte_4187535 = 1;
            }
            mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
              mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            }
            v16 = item->fields.info;
            if ( !v16 )
              goto LABEL_93;
            if ( !System_String__op_Equality(
                    *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                    v16->fields.str,
                    0LL) )
              return;
            goto LABEL_84;
          }
          v21 = item->fields.info;
          if ( !v21 )
            goto LABEL_93;
          str = v21->fields.str;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8664/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          if ( System_String__op_Inequality(str, v23, 0LL) )
          {
LABEL_84:
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
LABEL_93:
            sub_B2C434(mLastTimeIcon, item);
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
      if ( !byte_4187533 )
      {
        sub_B2C35C(&MyRoomParamsManager_TypeInfo, item);
        byte_4187533 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v17 = item->fields.info;
      if ( !v17 )
        goto LABEL_93;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == v17->fields.quest_id )
      {
        if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4185D96 )
        {
          sub_B2C35C(&MyRoomParamsManager_TypeInfo, item);
          byte_4185D96 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v18 = item->fields.info;
        if ( !v18 )
          goto LABEL_93;
        v19 = v18->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v19 && v19 != -1 )
          goto LABEL_84;
      }
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4187536 )
      {
        sub_B2C35C(&MyRoomParamsManager_TypeInfo, item);
        byte_4187536 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v20 = item->fields.info;
      if ( !v20 )
        goto LABEL_93;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL) == v20->fields.quest_id )
        goto LABEL_84;
    }
  }
}