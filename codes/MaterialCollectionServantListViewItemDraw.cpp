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
    sub_B5D69C(0LL, method);
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

  if ( (byte_42E8A32 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, isInput, method);
    byte_42E8A32 = 1;
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
      sub_B5D69C(v8, v7);
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserServantCollectionEntity_o *IsDataLostStateServant; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x1
  struct UserServantCollectionEntity_o *v37; // x8
  __int64 v38; // x21
  __int64 v39; // x22
  int32_t v40; // w21
  BalanceConfig_c *v41; // x8
  UserServantMaster_o *v42; // x21
  struct ServantFaceIconComponent_o *servantFaceIcon; // x23
  struct UserServantCollectionEntity_o *v44; // x22
  struct IconLabelInfo_o *iconLabelInfo; // x21
  __int64 v46; // x24
  __int64 v47; // x25
  int32_t v48; // w4
  UserServantCollectionEntity_o *v49; // x1
  IconLabelInfo_o *v50; // x2
  ServantEntity_o *servantEntity; // x0
  UserServantCollectionEntity_o *v52; // x0
  UserServantCollectionEntity_o *v53; // x0
  UserServantCollectionEntity_o *v54; // x0
  _DWORD *v55; // x8
  int v56; // w21
  ServantEntity_o *v57; // x0
  struct UILabel_o *maskLabel; // x20
  __int64 *v59; // x21
  System_String_o *v60; // x21
  System_String_o *v61; // x0
  System_String_o *v62; // x1
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_42E8A31 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_8746/*"MATERIAL_FIND_COMMAND_CODE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_8749/*"MATERIAL_FIND_SERVANT_EQUIP"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_8748/*"MATERIAL_FIND_SERVANT"*/, v31, v32, v33);
    byte_42E8A31 = 1;
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
        goto LABEL_86;
      IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantCollectionEntity__IsLinkLostStateServant(
                                                                  IsDataLostStateServant,
                                                                  0LL);
      if ( ((unsigned __int8)IsDataLostStateServant & 1) == 0 )
      {
        IsDataLostStateServant = item->fields.userSvtCollectionEntity;
        if ( !IsDataLostStateServant )
          goto LABEL_86;
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
        goto LABEL_86;
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
      v37 = item->fields.userSvtCollectionEntity;
      if ( !v37 )
        goto LABEL_86;
      v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = v39;
      *(_QWORD *)&v64.fields.fakeValue = v38;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v64, 0LL);
      v41 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v41 = BalanceConfig_TypeInfo;
      }
      if ( v40 == v41->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsDataLostStateServant = (UserServantCollectionEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
        v42 = (UserServantMaster_o *)IsDataLostStateServant;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v42 )
          goto LABEL_86;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantMaster__getHeroineData(
                                                                    v42,
                                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                                                    0LL);
        if ( !IsDataLostStateServant )
          goto LABEL_86;
        servantFaceIcon = this->fields.servantFaceIcon;
        v44 = item->fields.userSvtCollectionEntity;
        iconLabelInfo = item->fields.iconLabelInfo;
        v47 = *(_QWORD *)&IsDataLostStateServant->fields.friendship.fields.inited;
        v46 = *(_QWORD *)&IsDataLostStateServant->fields.friendshipRank.fields.hiddenValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v65.fields.currentCryptoKey = v47;
        *(_QWORD *)&v65.fields.fakeValue = v46;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                    v65,
                                                                    0LL);
        if ( !servantFaceIcon )
LABEL_86:
          sub_B5D69C(IsDataLostStateServant, userCommandCodeCollectionEntity);
        v48 = (int)IsDataLostStateServant;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)servantFaceIcon;
        v49 = v44;
        v50 = iconLabelInfo;
      }
      else
      {
        IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
        if ( !IsDataLostStateServant )
          goto LABEL_86;
        v50 = item->fields.iconLabelInfo;
        v49 = item->fields.userSvtCollectionEntity;
        v48 = 0;
      }
      ServantFaceIconComponent__Set_30851756(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        v49,
        v50,
        0LL,
        v48,
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
        goto LABEL_86;
      ServantFaceIconComponent__Set_30857296(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        userCommandCodeCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
  }
  servantEntity = item->fields.servantEntity;
  if ( servantEntity && ServantEntity__get_IsEnemyCollectionDetail(servantEntity, 0LL) )
    goto LABEL_50;
  v52 = item->fields.userSvtCollectionEntity;
  if ( v52 )
  {
    if ( UserServantCollectionEntity__IsDataLostStateServant(v52, 0LL) )
      goto LABEL_50;
    v53 = item->fields.userSvtCollectionEntity;
    if ( v53 )
    {
      if ( !UserServantCollectionEntity__IsLinkLostStateServant(v53, 0LL) )
      {
        v54 = item->fields.userSvtCollectionEntity;
        if ( v54 )
        {
          if ( UserServantCollectionEntity__IsLinkBadStateServant(v54, 0LL) )
            goto LABEL_50;
          v55 = item->fields.userSvtCollectionEntity;
          if ( v55 )
            goto LABEL_55;
        }
        goto LABEL_54;
      }
LABEL_50:
      IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
      if ( !IsDataLostStateServant )
        goto LABEL_86;
      IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)IsDataLostStateServant,
                                                                  0LL);
      if ( !IsDataLostStateServant )
        goto LABEL_86;
      goto LABEL_68;
    }
  }
LABEL_54:
  v55 = item->fields.userCommandCodeCollectionEntity;
  if ( !v55 )
  {
    v56 = 0;
    goto LABEL_57;
  }
LABEL_55:
  v56 = v55[10];
LABEL_57:
  IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
  if ( !IsDataLostStateServant )
    goto LABEL_86;
  IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)IsDataLostStateServant,
                                                              0LL);
  if ( !IsDataLostStateServant )
    goto LABEL_86;
  if ( v56 != 1 )
  {
LABEL_68:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 0, 0LL);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskLabel;
    if ( !IsDataLostStateServant )
      goto LABEL_86;
    v62 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_70;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 1, 0LL);
  if ( item->fields.userSvtCollectionEntity )
  {
    v57 = item->fields.servantEntity;
    maskLabel = this->fields.maskLabel;
    v59 = &StringLiteral_8748/*"MATERIAL_FIND_SERVANT"*/;
    if ( v57 && ServantEntity__get_IsKeepServantEquip(v57, 0LL) )
      v59 = (__int64 *)&StringLiteral_8749/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    v60 = (System_String_o *)*v59;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = v60;
  }
  else
  {
    if ( !item->fields.userCommandCodeCollectionEntity )
      goto LABEL_71;
    maskLabel = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = (System_String_o *)StringLiteral_8746/*"MATERIAL_FIND_COMMAND_CODE"*/;
  }
  IsDataLostStateServant = (UserServantCollectionEntity_o *)LocalizationManager__Get(v61, 0LL);
  if ( !maskLabel )
    goto LABEL_86;
  v62 = (System_String_o *)IsDataLostStateServant;
  IsDataLostStateServant = (UserServantCollectionEntity_o *)maskLabel;
LABEL_70:
  UILabel__set_text((UILabel_o *)IsDataLostStateServant, v62, 0LL);
LABEL_71:
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
      goto LABEL_86;
    ((void (__fastcall *)(UserServantCollectionEntity_o *, __int64, void *))IsDataLostStateServant->klass->vtable._5_CreatePrimaryKey.method)(
      IsDataLostStateServant,
      1LL,
      IsDataLostStateServant->klass[1]._1.image);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.baseButton;
    if ( !IsDataLostStateServant )
      goto LABEL_86;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Component_o *mLastTimeIcon; // x0
  int v16; // w2
  __int64 v17; // x3
  struct MaterialEventLogListViewItem_Info_o *info; // x9
  struct MaterialEventLogListViewItem_Info_o *v19; // x8
  struct MaterialEventLogListViewItem_Info_o *v20; // x8
  int32_t war_id; // w8
  MyRoomParamsManager_c *v22; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v24; // x0
  int v25; // w2
  __int64 v26; // x3
  struct MaterialEventLogListViewItem_Info_o *v27; // x8
  struct MaterialEventLogListViewItem_Info_o *v28; // x8
  struct MaterialEventLogListViewItem_Info_o *v29; // x8
  int32_t v30; // w8
  struct MaterialEventLogListViewItem_Info_o *v31; // x8
  struct MaterialEventLogListViewItem_Info_o *v32; // x8
  System_String_o *str; // x20
  System_String_o *v34; // x0

  if ( (byte_42E8A33 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_6412/*"FES_WAR_ID"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_8754/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v12, v13, v14);
    byte_42E8A33 = 1;
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
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6412/*"FES_WAR_ID"*/, 0LL);
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
      if ( !byte_42E85E6 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, (_DWORD)item, v16, v17);
        byte_42E85E6 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v19 = item->fields.info;
      if ( !v19 )
        goto LABEL_93;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == v19->fields.quest_id )
      {
        if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_42E5F9F )
        {
          sub_B5D5C4(&MyRoomParamsManager_TypeInfo, (_DWORD)item, v16, v17);
          byte_42E5F9F = 1;
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
        war_id = v20->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == war_id && war_id != -1 )
        {
          if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
            j_il2cpp_runtime_class_init_0(mLastTimeIcon);
          if ( !byte_42E85E8 )
          {
            sub_B5D5C4(&MyRoomParamsManager_TypeInfo, (_DWORD)item, v16, v17);
            byte_42E85E8 = 1;
          }
          v22 = MyRoomParamsManager_TypeInfo;
          if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            v22 = MyRoomParamsManager_TypeInfo;
          }
          LastPlayTitle_k__BackingField = v22->static_fields->_LastPlayTitle_k__BackingField;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8754/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v24, 0LL);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            }
            if ( !byte_42E85E8 )
            {
              sub_B5D5C4(&MyRoomParamsManager_TypeInfo, (_DWORD)item, v25, v26);
              byte_42E85E8 = 1;
            }
            mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
              mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            }
            v27 = item->fields.info;
            if ( !v27 )
              goto LABEL_93;
            if ( !System_String__op_Equality(
                    *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                    v27->fields.str,
                    0LL) )
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
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8754/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          if ( System_String__op_Inequality(str, v34, 0LL) )
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
            sub_B5D69C(mLastTimeIcon, item);
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
      if ( !byte_42E85E6 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, (_DWORD)item, v16, v17);
        byte_42E85E6 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v28 = item->fields.info;
      if ( !v28 )
        goto LABEL_93;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == v28->fields.quest_id )
      {
        if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_42E5F9F )
        {
          sub_B5D5C4(&MyRoomParamsManager_TypeInfo, (_DWORD)item, v16, v17);
          byte_42E5F9F = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v29 = item->fields.info;
        if ( !v29 )
          goto LABEL_93;
        v30 = v29->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v30 && v30 != -1 )
          goto LABEL_84;
      }
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_42E85E9 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, (_DWORD)item, v16, v17);
        byte_42E85E9 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v31 = item->fields.info;
      if ( !v31 )
        goto LABEL_93;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL) == v31->fields.quest_id )
        goto LABEL_84;
    }
  }
}