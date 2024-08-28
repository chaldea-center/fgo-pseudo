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
    sub_1B71828(0LL, method);
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

  if ( (byte_4A1B1A7 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, item);
    byte_4A1B1A7 = 1;
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
      sub_1B71828(v7, v6);
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
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserServantCollectionEntity_o *IsDataLostStateServant; // x0
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
  __int64 v28; // x24
  __int64 v29; // x25
  int32_t v30; // w4
  UserServantCollectionEntity_o *v31; // x1
  IconLabelInfo_o *v32; // x2
  ServantEntity_o *servantEntity; // x0
  UserServantCollectionEntity_o *v34; // x0
  UserServantCollectionEntity_o *v35; // x0
  UserServantCollectionEntity_o *v36; // x0
  _DWORD *v37; // x8
  _BOOL4 v38; // w21
  ServantEntity_o *v39; // x0
  struct UILabel_o *maskLabel; // x20
  __int64 *v41; // x21
  System_String_o *v42; // x21
  System_String_o *v43; // x0
  System_String_o *v44; // x1
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4A1B1A6 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, item);
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1B715CC(&DataManager_TypeInfo, v8);
    sub_1B715CC(&LocalizationManager_TypeInfo, v9);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v10);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B715CC(&StringLiteral_8519/*"MATERIAL_FIND_COMMAND_CODE"*/, v12);
    sub_1B715CC(&StringLiteral_8522/*"MATERIAL_FIND_SERVANT_EQUIP"*/, v13);
    sub_1B715CC(&StringLiteral_1/*""*/, v14);
    sub_1B715CC(&StringLiteral_8521/*"MATERIAL_FIND_SERVANT"*/, v15);
    byte_4A1B1A6 = 1;
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
      v19 = item->fields.userSvtCollectionEntity;
      if ( !v19 )
        goto LABEL_78;
      v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v46.fields.currentCryptoKey = v21;
      *(_QWORD *)&v46.fields.fakeValue = v20;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v46, 0LL);
      v23 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v23 = BalanceConfig_TypeInfo;
      }
      if ( v22 == v23->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsDataLostStateServant = (UserServantCollectionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantMaster___);
        v24 = (UserServantMaster_o *)IsDataLostStateServant;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v24 )
          goto LABEL_78;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantMaster__getHeroineData(
                                                                    v24,
                                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                                                    0LL);
        if ( !IsDataLostStateServant )
          goto LABEL_78;
        servantFaceIcon = this->fields.servantFaceIcon;
        v26 = item->fields.userSvtCollectionEntity;
        iconLabelInfo = item->fields.iconLabelInfo;
        v29 = *(_QWORD *)&IsDataLostStateServant->fields.friendship.fields.inited;
        v28 = *(_QWORD *)&IsDataLostStateServant->fields.friendshipRank.fields.hiddenValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v47.fields.currentCryptoKey = v29;
        *(_QWORD *)&v47.fields.fakeValue = v28;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(
                                                                    v47,
                                                                    0LL);
        if ( !servantFaceIcon )
LABEL_78:
          sub_1B71828(IsDataLostStateServant, userCommandCodeCollectionEntity);
        v30 = (int)IsDataLostStateServant;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)servantFaceIcon;
        v31 = v26;
        v32 = iconLabelInfo;
      }
      else
      {
        IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
        if ( !IsDataLostStateServant )
          goto LABEL_78;
        v32 = item->fields.iconLabelInfo;
        v31 = item->fields.userSvtCollectionEntity;
        v30 = 0;
      }
      ServantFaceIconComponent__Set_38017328(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        v31,
        v32,
        0LL,
        v30,
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
      ServantFaceIconComponent__Set_38023168(
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
  v34 = item->fields.userSvtCollectionEntity;
  if ( v34 )
  {
    if ( UserServantCollectionEntity__IsDataLostStateServant(v34, 0LL) )
      goto LABEL_45;
    v35 = item->fields.userSvtCollectionEntity;
    if ( v35 )
    {
      if ( !UserServantCollectionEntity__IsLinkLostStateServant(v35, 0LL) )
      {
        v36 = item->fields.userSvtCollectionEntity;
        if ( v36 )
        {
          if ( UserServantCollectionEntity__IsLinkBadStateServant(v36, 0LL) )
            goto LABEL_45;
          v37 = item->fields.userSvtCollectionEntity;
          if ( v37 )
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
  v37 = item->fields.userCommandCodeCollectionEntity;
  if ( !v37 )
  {
    v38 = 0;
    goto LABEL_52;
  }
LABEL_50:
  v38 = v37[10] == 1;
LABEL_52:
  IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
  if ( !IsDataLostStateServant )
    goto LABEL_78;
  IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)IsDataLostStateServant,
                                                              0LL);
  if ( !IsDataLostStateServant )
    goto LABEL_78;
  if ( !v38 )
  {
LABEL_62:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 0, 0LL);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskLabel;
    if ( !IsDataLostStateServant )
      goto LABEL_78;
    v44 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_64:
    UILabel__set_text((UILabel_o *)IsDataLostStateServant, v44, 0LL);
    goto LABEL_65;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 1, 0LL);
  if ( item->fields.userSvtCollectionEntity )
  {
    v39 = item->fields.servantEntity;
    maskLabel = this->fields.maskLabel;
    v41 = &StringLiteral_8521/*"MATERIAL_FIND_SERVANT"*/;
    if ( v39 && ServantEntity__get_IsKeepServantEquip(v39, 0LL) )
      v41 = (__int64 *)&StringLiteral_8522/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    v42 = (System_String_o *)*v41;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = v42;
LABEL_76:
    IsDataLostStateServant = (UserServantCollectionEntity_o *)LocalizationManager__Get(v43, 0LL);
    if ( !maskLabel )
      goto LABEL_78;
    v44 = (System_String_o *)IsDataLostStateServant;
    IsDataLostStateServant = (UserServantCollectionEntity_o *)maskLabel;
    goto LABEL_64;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    maskLabel = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = (System_String_o *)StringLiteral_8519/*"MATERIAL_FIND_COMMAND_CODE"*/;
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

  if ( (byte_4A1B1A8 & 1) == 0 )
  {
    sub_1B715CC(&LocalizationManager_TypeInfo, item);
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_6343/*"FES_WAR_ID"*/, v6);
    sub_1B715CC(&StringLiteral_8527/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v7);
    byte_4A1B1A8 = 1;
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
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6343/*"FES_WAR_ID"*/, 0LL);
    info = item->fields.info;
    if ( !info )
      goto LABEL_70;
    v10 = (int)mLastTimeIcon;
    war_id = info->fields.war_id;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4A1B25D )
    {
      sub_1B715CC(&MyRoomParamsManager_TypeInfo, item);
      byte_4A1B25D = 1;
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
        if ( !byte_4A1B25E )
        {
          sub_1B715CC(&MyRoomParamsManager_TypeInfo, item);
          byte_4A1B25E = 1;
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
          if ( !byte_4A1B25F )
          {
            sub_1B715CC(&MyRoomParamsManager_TypeInfo, item);
            byte_4A1B25F = 1;
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
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8527/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v19, 0LL);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            if ( !byte_4A1B25F )
            {
              sub_1B715CC(&MyRoomParamsManager_TypeInfo, item);
              byte_4A1B25F = 1;
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
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8527/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
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
            sub_1B71828(mLastTimeIcon, item);
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
        if ( !byte_4A1B25E )
        {
          sub_1B715CC(&MyRoomParamsManager_TypeInfo, item);
          byte_4A1B25E = 1;
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
      if ( !byte_4A1B260 )
      {
        sub_1B715CC(&MyRoomParamsManager_TypeInfo, item);
        byte_4A1B260 = 1;
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