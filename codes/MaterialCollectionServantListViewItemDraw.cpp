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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B0044 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0044 = 1;
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
      sub_B52A5C(v8, v7);
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
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserServantCollectionEntity_o *IsDataLostStateServant; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x1
  struct UserServantCollectionEntity_o *v10; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  BalanceConfig_c *v14; // x8
  UserServantMaster_o *v15; // x21
  struct ServantFaceIconComponent_o *servantFaceIcon; // x23
  struct UserServantCollectionEntity_o *v17; // x22
  struct IconLabelInfo_o *iconLabelInfo; // x21
  __int64 v19; // x24
  __int64 v20; // x25
  int32_t v21; // w4
  UserServantCollectionEntity_o *v22; // x1
  IconLabelInfo_o *v23; // x2
  ServantEntity_o *servantEntity; // x0
  UserServantCollectionEntity_o *v25; // x0
  UserServantCollectionEntity_o *v26; // x0
  _DWORD *v27; // x8
  int v28; // w21
  ServantEntity_o *v29; // x0
  struct UILabel_o *maskLabel; // x20
  __int64 *v31; // x21
  System_String_o *v32; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x1
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42B0043 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_8709/*"MATERIAL_FIND_COMMAND_CODE"*/);
    sub_B52984(&StringLiteral_8712/*"MATERIAL_FIND_SERVANT_EQUIP"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_8711/*"MATERIAL_FIND_SERVANT"*/);
    byte_42B0043 = 1;
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
        goto LABEL_82;
      IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantCollectionEntity__IsLinkLostStateServant(
                                                                  IsDataLostStateServant,
                                                                  0LL);
      if ( ((unsigned __int8)IsDataLostStateServant & 1) == 0 )
        goto LABEL_10;
    }
    if ( !item->fields.isValentineList )
    {
      IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_82;
      ServantFaceIconComponent__SetLost(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        item->fields.userSvtCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
    else
    {
LABEL_10:
      v10 = item->fields.userSvtCollectionEntity;
      if ( !v10 )
        goto LABEL_82;
      v12 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v36.fields.currentCryptoKey = v12;
      *(_QWORD *)&v36.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v36, 0LL);
      v14 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      if ( v13 == v14->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsDataLostStateServant = (UserServantCollectionEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
        v15 = (UserServantMaster_o *)IsDataLostStateServant;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v15 )
          goto LABEL_82;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantMaster__getHeroineData(
                                                                    v15,
                                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                                                    0LL);
        if ( !IsDataLostStateServant )
          goto LABEL_82;
        servantFaceIcon = this->fields.servantFaceIcon;
        v17 = item->fields.userSvtCollectionEntity;
        iconLabelInfo = item->fields.iconLabelInfo;
        v20 = *(_QWORD *)&IsDataLostStateServant->fields.friendship.fields.inited;
        v19 = *(_QWORD *)&IsDataLostStateServant->fields.friendshipRank.fields.hiddenValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v37.fields.currentCryptoKey = v20;
        *(_QWORD *)&v37.fields.fakeValue = v19;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                    v37,
                                                                    0LL);
        if ( !servantFaceIcon )
LABEL_82:
          sub_B52A5C(IsDataLostStateServant, userCommandCodeCollectionEntity);
        v21 = (int)IsDataLostStateServant;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)servantFaceIcon;
        v22 = v17;
        v23 = iconLabelInfo;
      }
      else
      {
        IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
        if ( !IsDataLostStateServant )
          goto LABEL_82;
        v23 = item->fields.iconLabelInfo;
        v22 = item->fields.userSvtCollectionEntity;
        v21 = 0;
      }
      ServantFaceIconComponent__Set_30472424(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        v22,
        v23,
        0LL,
        v21,
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
        goto LABEL_82;
      ServantFaceIconComponent__Set_30477936(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        userCommandCodeCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
  }
  servantEntity = item->fields.servantEntity;
  if ( servantEntity && ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0LL) )
    goto LABEL_46;
  v25 = item->fields.userSvtCollectionEntity;
  if ( v25 )
  {
    if ( !UserServantCollectionEntity__IsDataLostStateServant(v25, 0LL) )
    {
      v26 = item->fields.userSvtCollectionEntity;
      if ( v26 )
      {
        if ( UserServantCollectionEntity__IsLinkLostStateServant(v26, 0LL) )
          goto LABEL_46;
        v27 = item->fields.userSvtCollectionEntity;
        if ( v27 )
          goto LABEL_51;
      }
      goto LABEL_50;
    }
LABEL_46:
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
    if ( !IsDataLostStateServant )
      goto LABEL_82;
    IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)IsDataLostStateServant,
                                                                0LL);
    if ( !IsDataLostStateServant )
      goto LABEL_82;
    goto LABEL_64;
  }
LABEL_50:
  v27 = item->fields.userCommandCodeCollectionEntity;
  if ( !v27 )
  {
    v28 = 0;
    goto LABEL_53;
  }
LABEL_51:
  v28 = v27[10];
LABEL_53:
  IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
  if ( !IsDataLostStateServant )
    goto LABEL_82;
  IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)IsDataLostStateServant,
                                                              0LL);
  if ( !IsDataLostStateServant )
    goto LABEL_82;
  if ( v28 != 1 )
  {
LABEL_64:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 0, 0LL);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskLabel;
    if ( !IsDataLostStateServant )
      goto LABEL_82;
    v34 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_66;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 1, 0LL);
  if ( item->fields.userSvtCollectionEntity )
  {
    v29 = item->fields.servantEntity;
    maskLabel = this->fields.maskLabel;
    v31 = &StringLiteral_8711/*"MATERIAL_FIND_SERVANT"*/;
    if ( v29 && ServantEntity__get_IsKeepServantEquip(v29, 0LL) )
      v31 = (__int64 *)&StringLiteral_8712/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    v32 = (System_String_o *)*v31;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = v32;
  }
  else
  {
    if ( !item->fields.userCommandCodeCollectionEntity )
      goto LABEL_67;
    maskLabel = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = (System_String_o *)StringLiteral_8709/*"MATERIAL_FIND_COMMAND_CODE"*/;
  }
  IsDataLostStateServant = (UserServantCollectionEntity_o *)LocalizationManager__Get(v33, 0LL);
  if ( !maskLabel )
    goto LABEL_82;
  v34 = (System_String_o *)IsDataLostStateServant;
  IsDataLostStateServant = (UserServantCollectionEntity_o *)maskLabel;
LABEL_66:
  UILabel__set_text((UILabel_o *)IsDataLostStateServant, v34, 0LL);
LABEL_67:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.baseButton;
    if ( !IsDataLostStateServant )
      goto LABEL_82;
    ((void (__fastcall *)(UserServantCollectionEntity_o *, __int64, void *))IsDataLostStateServant->klass->vtable._5_CreatePrimaryKey.method)(
      IsDataLostStateServant,
      1LL,
      IsDataLostStateServant->klass[1]._1.image);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.baseButton;
    if ( !IsDataLostStateServant )
      goto LABEL_82;
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
  UnityEngine_Component_o *mLastTimeIcon; // x0
  struct MaterialEventLogListViewItem_Info_o *info; // x9
  struct MaterialEventLogListViewItem_Info_o *v7; // x8
  struct MaterialEventLogListViewItem_Info_o *v8; // x8
  int32_t war_id; // w8
  MyRoomParamsManager_c *v10; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v12; // x0
  struct MaterialEventLogListViewItem_Info_o *v13; // x8
  struct MaterialEventLogListViewItem_Info_o *v14; // x8
  struct MaterialEventLogListViewItem_Info_o *v15; // x8
  int32_t v16; // w8
  struct MaterialEventLogListViewItem_Info_o *v17; // x8
  struct MaterialEventLogListViewItem_Info_o *v18; // x8
  System_String_o *str; // x20
  System_String_o *v20; // x0

  if ( (byte_42B0045 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&MyRoomParamsManager_TypeInfo);
    sub_B52984(&StringLiteral_6376/*"FES_WAR_ID"*/);
    sub_B52984(&StringLiteral_8717/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_42B0045 = 1;
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
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6376/*"FES_WAR_ID"*/, 0LL);
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
      if ( !byte_42AFB45 )
      {
        sub_B52984(&MyRoomParamsManager_TypeInfo);
        byte_42AFB45 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v7 = item->fields.info;
      if ( !v7 )
        goto LABEL_93;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == v7->fields.quest_id )
      {
        if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_42ADD1D )
        {
          sub_B52984(&MyRoomParamsManager_TypeInfo);
          byte_42ADD1D = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v8 = item->fields.info;
        if ( !v8 )
          goto LABEL_93;
        war_id = v8->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == war_id && war_id != -1 )
        {
          if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
            j_il2cpp_runtime_class_init_0(mLastTimeIcon);
          if ( !byte_42AFB47 )
          {
            sub_B52984(&MyRoomParamsManager_TypeInfo);
            byte_42AFB47 = 1;
          }
          v10 = MyRoomParamsManager_TypeInfo;
          if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            v10 = MyRoomParamsManager_TypeInfo;
          }
          LastPlayTitle_k__BackingField = v10->static_fields->_LastPlayTitle_k__BackingField;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8717/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v12, 0LL);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            }
            if ( !byte_42AFB47 )
            {
              sub_B52984(&MyRoomParamsManager_TypeInfo);
              byte_42AFB47 = 1;
            }
            mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
              mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            }
            v13 = item->fields.info;
            if ( !v13 )
              goto LABEL_93;
            if ( !System_String__op_Equality(
                    *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                    v13->fields.str,
                    0LL) )
              return;
            goto LABEL_84;
          }
          v18 = item->fields.info;
          if ( !v18 )
            goto LABEL_93;
          str = v18->fields.str;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8717/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          if ( System_String__op_Inequality(str, v20, 0LL) )
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
            sub_B52A5C(mLastTimeIcon, item);
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
      if ( !byte_42AFB45 )
      {
        sub_B52984(&MyRoomParamsManager_TypeInfo);
        byte_42AFB45 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v14 = item->fields.info;
      if ( !v14 )
        goto LABEL_93;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == v14->fields.quest_id )
      {
        if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_42ADD1D )
        {
          sub_B52984(&MyRoomParamsManager_TypeInfo);
          byte_42ADD1D = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v15 = item->fields.info;
        if ( !v15 )
          goto LABEL_93;
        v16 = v15->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v16 && v16 != -1 )
          goto LABEL_84;
      }
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_42AFB48 )
      {
        sub_B52984(&MyRoomParamsManager_TypeInfo);
        byte_42AFB48 = 1;
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
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL) == v17->fields.quest_id )
        goto LABEL_84;
    }
  }
}