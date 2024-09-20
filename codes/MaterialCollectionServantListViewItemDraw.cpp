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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A56813 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56813 = 1;
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
      sub_1B8880C(v7, v6);
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
  UserServantCollectionEntity_o *v27; // x0
  _DWORD *v28; // x8
  _BOOL4 v29; // w21
  ServantEntity_o *v30; // x0
  struct UILabel_o *maskLabel; // x20
  __int64 *v32; // x21
  System_String_o *v33; // x21
  System_String_o *v34; // x0
  System_String_o *v35; // x1
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A56812 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_8549/*"MATERIAL_FIND_COMMAND_CODE"*/);
    sub_1B885B0(&StringLiteral_8552/*"MATERIAL_FIND_SERVANT_EQUIP"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_8551/*"MATERIAL_FIND_SERVANT"*/);
    byte_4A56812 = 1;
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
        goto LABEL_78;
      IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantCollectionEntity__IsLinkLostStateServant(
                                                                  IsDataLostStateServant,
                                                                  0LL);
      if ( ((unsigned __int8)IsDataLostStateServant & 1) == 0 )
      {
        IsDataLostStateServant = item->fields.userSvtCollectionEntity;
        if ( !IsDataLostStateServant )
          goto LABEL_78;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantCollectionEntity__IsLinkBadStateServant(
                                                                    IsDataLostStateServant,
                                                                    0LL);
        if ( ((unsigned __int8)IsDataLostStateServant & 1) == 0 )
          goto LABEL_12;
      }
    }
    if ( !item->fields.isValentineList )
    {
      IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_78;
      ServantFaceIconComponent__SetLost(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        item->fields.userSvtCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
    else
    {
LABEL_12:
      v10 = item->fields.userSvtCollectionEntity;
      if ( !v10 )
        goto LABEL_78;
      v12 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v12;
      *(_QWORD *)&v37.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
      v14 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      if ( v13 == v14->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsDataLostStateServant = (UserServantCollectionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
        v15 = (UserServantMaster_o *)IsDataLostStateServant;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v15 )
          goto LABEL_78;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantMaster__getHeroineData(
                                                                    v15,
                                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                                                    0LL);
        if ( !IsDataLostStateServant )
          goto LABEL_78;
        servantFaceIcon = this->fields.servantFaceIcon;
        v17 = item->fields.userSvtCollectionEntity;
        iconLabelInfo = item->fields.iconLabelInfo;
        v20 = *(_QWORD *)&IsDataLostStateServant->fields.friendship.fields.inited;
        v19 = *(_QWORD *)&IsDataLostStateServant->fields.friendshipRank.fields.hiddenValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v20;
        *(_QWORD *)&v38.fields.fakeValue = v19;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                    v38,
                                                                    0LL);
        if ( !servantFaceIcon )
LABEL_78:
          sub_1B8880C(IsDataLostStateServant, userCommandCodeCollectionEntity);
        v21 = (int)IsDataLostStateServant;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)servantFaceIcon;
        v22 = v17;
        v23 = iconLabelInfo;
      }
      else
      {
        IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
        if ( !IsDataLostStateServant )
          goto LABEL_78;
        v23 = item->fields.iconLabelInfo;
        v22 = item->fields.userSvtCollectionEntity;
        v21 = 0;
      }
      ServantFaceIconComponent__Set_38222820(
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
        goto LABEL_78;
      ServantFaceIconComponent__Set_38227964(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        userCommandCodeCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
  }
  servantEntity = item->fields.servantEntity;
  if ( servantEntity && ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0LL) )
    goto LABEL_45;
  v25 = item->fields.userSvtCollectionEntity;
  if ( v25 )
  {
    if ( UserServantCollectionEntity__IsDataLostStateServant(v25, 0LL) )
      goto LABEL_45;
    v26 = item->fields.userSvtCollectionEntity;
    if ( v26 )
    {
      if ( !UserServantCollectionEntity__IsLinkLostStateServant(v26, 0LL) )
      {
        v27 = item->fields.userSvtCollectionEntity;
        if ( v27 )
        {
          if ( UserServantCollectionEntity__IsLinkBadStateServant(v27, 0LL) )
            goto LABEL_45;
          v28 = item->fields.userSvtCollectionEntity;
          if ( v28 )
            goto LABEL_50;
        }
        goto LABEL_49;
      }
LABEL_45:
      IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
      if ( !IsDataLostStateServant )
        goto LABEL_78;
      IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)IsDataLostStateServant,
                                                                  0LL);
      if ( !IsDataLostStateServant )
        goto LABEL_78;
      goto LABEL_62;
    }
  }
LABEL_49:
  v28 = item->fields.userCommandCodeCollectionEntity;
  if ( !v28 )
  {
    v29 = 0;
    goto LABEL_52;
  }
LABEL_50:
  v29 = v28[10] == 1;
LABEL_52:
  IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
  if ( !IsDataLostStateServant )
    goto LABEL_78;
  IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)IsDataLostStateServant,
                                                              0LL);
  if ( !IsDataLostStateServant )
    goto LABEL_78;
  if ( !v29 )
  {
LABEL_62:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 0, 0LL);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskLabel;
    if ( !IsDataLostStateServant )
      goto LABEL_78;
    v35 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_64:
    UILabel__set_text((UILabel_o *)IsDataLostStateServant, v35, 0LL);
    goto LABEL_65;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 1, 0LL);
  if ( item->fields.userSvtCollectionEntity )
  {
    v30 = item->fields.servantEntity;
    maskLabel = this->fields.maskLabel;
    v32 = &StringLiteral_8551/*"MATERIAL_FIND_SERVANT"*/;
    if ( v30 && ServantEntity__get_IsKeepServantEquip(v30, 0LL) )
      v32 = (__int64 *)&StringLiteral_8552/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    v33 = (System_String_o *)*v32;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = v33;
LABEL_76:
    IsDataLostStateServant = (UserServantCollectionEntity_o *)LocalizationManager__Get(v34, 0LL);
    if ( !maskLabel )
      goto LABEL_78;
    v35 = (System_String_o *)IsDataLostStateServant;
    IsDataLostStateServant = (UserServantCollectionEntity_o *)maskLabel;
    goto LABEL_64;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    maskLabel = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = (System_String_o *)StringLiteral_8549/*"MATERIAL_FIND_COMMAND_CODE"*/;
    goto LABEL_76;
  }
LABEL_65:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.baseButton;
    if ( !IsDataLostStateServant )
      goto LABEL_78;
    ((void (__fastcall *)(UserServantCollectionEntity_o *, __int64, void *))IsDataLostStateServant->klass->vtable._5_CreatePrimaryKey.method)(
      IsDataLostStateServant,
      1LL,
      IsDataLostStateServant->klass[1]._1.image);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.baseButton;
    if ( !IsDataLostStateServant )
      goto LABEL_78;
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

  if ( (byte_4A56814 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MyRoomParamsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6364/*"FES_WAR_ID"*/);
    sub_1B885B0(&StringLiteral_8557/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_4A56814 = 1;
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
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6364/*"FES_WAR_ID"*/, 0LL);
    info = item->fields.info;
    if ( !info )
      goto LABEL_70;
    v7 = (int)mLastTimeIcon;
    war_id = info->fields.war_id;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4A568C9 )
    {
      sub_1B885B0(&MyRoomParamsManager_TypeInfo);
      byte_4A568C9 = 1;
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
    v11 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL);
    if ( v7 == war_id )
    {
      if ( v11 == quest_id )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4A568CA )
        {
          sub_1B885B0(&MyRoomParamsManager_TypeInfo);
          byte_4A568CA = 1;
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
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v13 && v13 != -1 )
        {
          if ( !LODWORD(mLastTimeIcon[9].monitor) )
            j_il2cpp_runtime_class_init_0(mLastTimeIcon);
          if ( !byte_4A568CB )
          {
            sub_1B885B0(&MyRoomParamsManager_TypeInfo);
            byte_4A568CB = 1;
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
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8557/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v16, 0LL);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            if ( !byte_4A568CB )
            {
              sub_1B885B0(&MyRoomParamsManager_TypeInfo);
              byte_4A568CB = 1;
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
                    *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                    v17->fields.str,
                    0LL) )
              return;
            goto LABEL_62;
          }
          v21 = item->fields.info;
          if ( !v21 )
            goto LABEL_70;
          str = v21->fields.str;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8557/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          if ( System_String__op_Inequality(str, v23, 0LL) )
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
            sub_1B8880C(mLastTimeIcon, item);
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
        if ( !byte_4A568CA )
        {
          sub_1B885B0(&MyRoomParamsManager_TypeInfo);
          byte_4A568CA = 1;
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
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v19 && v19 != -1 )
          goto LABEL_62;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4A568CC )
      {
        sub_1B885B0(&MyRoomParamsManager_TypeInfo);
        byte_4A568CC = 1;
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
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL) == v20->fields.quest_id )
        goto LABEL_62;
    }
  }
}