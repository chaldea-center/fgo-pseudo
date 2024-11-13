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
    sub_1BCAA3C(0LL, method);
  ServantFaceIconComponent__ClearShiningIcon(servantFaceIcon, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItemDraw__SetInput(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialCollectionServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x20
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_4B1172C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, isInput);
    byte_4B1172C = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
      sub_1BCAA3C(v7, v6);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
      v7,
      0LL,
      1LL,
      v7->klass->vtable._15_OnPress.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewItemDraw__SetItem(
        MaterialCollectionServantListViewItemDraw_o *this,
        MaterialCollectionServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserServantCollectionEntity_o *IsDataLostStateServant; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x1
  struct UserServantCollectionEntity_o *v28; // x8
  __int64 v29; // x21
  __int64 v30; // x22
  int32_t v31; // w21
  BalanceConfig_c *v32; // x8
  UserServantMaster_o *v33; // x21
  struct ServantFaceIconComponent_o *servantFaceIcon; // x23
  struct UserServantCollectionEntity_o *v35; // x22
  struct IconLabelInfo_o *iconLabelInfo; // x21
  __int64 v37; // x24
  __int64 v38; // x25
  int32_t v39; // w4
  UserServantCollectionEntity_o *v40; // x1
  IconLabelInfo_o *v41; // x2
  ServantEntity_o *servantEntity; // x0
  UserServantCollectionEntity_o *v43; // x0
  UserServantCollectionEntity_o *v44; // x0
  UserServantCollectionEntity_o *v45; // x0
  _DWORD *v46; // x8
  _BOOL4 v47; // w21
  __int64 v48; // x1
  ServantEntity_o *v49; // x0
  struct UILabel_o *maskLabel; // x20
  __int64 *v51; // x21
  System_String_o *v52; // x21
  System_String_o *v53; // x0
  System_String_o *v54; // x1
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4B1172B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_8675/*"MATERIAL_FIND_COMMAND_CODE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_8678/*"MATERIAL_FIND_SERVANT_EQUIP"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_8677/*"MATERIAL_FIND_SERVANT"*/, v23, v24);
    byte_4B1172B = 1;
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
      v28 = item->fields.userSvtCollectionEntity;
      if ( !v28 )
        goto LABEL_78;
      v30 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          userCommandCodeCollectionEntity);
      *(_QWORD *)&v56.fields.currentCryptoKey = v30;
      *(_QWORD *)&v56.fields.fakeValue = v29;
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v56, 0LL);
      v32 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userCommandCodeCollectionEntity);
        v32 = BalanceConfig_TypeInfo;
      }
      if ( v31 == v32->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userCommandCodeCollectionEntity);
        IsDataLostStateServant = (UserServantCollectionEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
        v33 = (UserServantMaster_o *)IsDataLostStateServant;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userCommandCodeCollectionEntity);
        if ( !v33 )
          goto LABEL_78;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)UserServantMaster__getHeroineData(
                                                                    v33,
                                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                                                    0LL);
        if ( !IsDataLostStateServant )
          goto LABEL_78;
        servantFaceIcon = this->fields.servantFaceIcon;
        v35 = item->fields.userSvtCollectionEntity;
        iconLabelInfo = item->fields.iconLabelInfo;
        v38 = *(_QWORD *)&IsDataLostStateServant->fields.friendship.fields.inited;
        v37 = *(_QWORD *)&IsDataLostStateServant->fields.friendshipRank.fields.hiddenValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            userCommandCodeCollectionEntity);
        *(_QWORD *)&v57.fields.currentCryptoKey = v38;
        *(_QWORD *)&v57.fields.fakeValue = v37;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                    v57,
                                                                    0LL);
        if ( !servantFaceIcon )
LABEL_78:
          sub_1BCAA3C(IsDataLostStateServant, userCommandCodeCollectionEntity);
        v39 = (int)IsDataLostStateServant;
        IsDataLostStateServant = (UserServantCollectionEntity_o *)servantFaceIcon;
        v40 = v35;
        v41 = iconLabelInfo;
      }
      else
      {
        IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.servantFaceIcon;
        if ( !IsDataLostStateServant )
          goto LABEL_78;
        v41 = item->fields.iconLabelInfo;
        v40 = item->fields.userSvtCollectionEntity;
        v39 = 0;
      }
      ServantFaceIconComponent__Set_38933812(
        (ServantFaceIconComponent_o *)IsDataLostStateServant,
        v40,
        v41,
        0LL,
        v39,
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
      ServantFaceIconComponent__Set_38939644(
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
  v43 = item->fields.userSvtCollectionEntity;
  if ( v43 )
  {
    if ( UserServantCollectionEntity__IsDataLostStateServant(v43, 0LL) )
      goto LABEL_45;
    v44 = item->fields.userSvtCollectionEntity;
    if ( v44 )
    {
      if ( !UserServantCollectionEntity__IsLinkLostStateServant(v44, 0LL) )
      {
        v45 = item->fields.userSvtCollectionEntity;
        if ( v45 )
        {
          if ( UserServantCollectionEntity__IsLinkBadStateServant(v45, 0LL) )
            goto LABEL_45;
          v46 = item->fields.userSvtCollectionEntity;
          if ( v46 )
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
  v46 = item->fields.userCommandCodeCollectionEntity;
  if ( !v46 )
  {
    v47 = 0;
    goto LABEL_52;
  }
LABEL_50:
  v47 = v46[10] == 1;
LABEL_52:
  IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskSprite;
  if ( !IsDataLostStateServant )
    goto LABEL_78;
  IsDataLostStateServant = (UserServantCollectionEntity_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)IsDataLostStateServant,
                                                              0LL);
  if ( !IsDataLostStateServant )
    goto LABEL_78;
  if ( !v47 )
  {
LABEL_62:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 0, 0LL);
    IsDataLostStateServant = (UserServantCollectionEntity_o *)this->fields.maskLabel;
    if ( !IsDataLostStateServant )
      goto LABEL_78;
    v54 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_64:
    UILabel__set_text((UILabel_o *)IsDataLostStateServant, v54, 0LL);
    goto LABEL_65;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 1, 0LL);
  if ( item->fields.userSvtCollectionEntity )
  {
    v49 = item->fields.servantEntity;
    maskLabel = this->fields.maskLabel;
    v51 = &StringLiteral_8677/*"MATERIAL_FIND_SERVANT"*/;
    if ( v49 && ServantEntity__get_IsKeepServantEquip(v49, 0LL) )
      v51 = (__int64 *)&StringLiteral_8678/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    v52 = (System_String_o *)*v51;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
    v53 = v52;
LABEL_76:
    IsDataLostStateServant = (UserServantCollectionEntity_o *)LocalizationManager__Get(v53, 0LL);
    if ( !maskLabel )
      goto LABEL_78;
    v54 = (System_String_o *)IsDataLostStateServant;
    IsDataLostStateServant = (UserServantCollectionEntity_o *)maskLabel;
    goto LABEL_64;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    maskLabel = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
    v53 = (System_String_o *)StringLiteral_8675/*"MATERIAL_FIND_COMMAND_CODE"*/;
    goto LABEL_76;
  }
LABEL_65:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *mLastTimeIcon; // x0
  __int64 v12; // x2
  struct MaterialEventLogListViewItem_Info_o *info; // x8
  int v14; // w21
  int32_t war_id; // w23
  struct MaterialEventLogListViewItem_Info_o *v16; // x9
  int32_t quest_id; // w9
  int v18; // w8
  struct MaterialEventLogListViewItem_Info_o *v19; // x8
  int32_t v20; // w8
  MyRoomParamsManager_c *v21; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v23; // x0
  __int64 v24; // x2
  struct MaterialEventLogListViewItem_Info_o *v25; // x8
  struct MaterialEventLogListViewItem_Info_o *v26; // x8
  int32_t v27; // w8
  struct MaterialEventLogListViewItem_Info_o *v28; // x8
  struct MaterialEventLogListViewItem_Info_o *v29; // x8
  System_String_o *str; // x20
  System_String_o *v31; // x0

  if ( (byte_4B1172D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_6487/*"FES_WAR_ID"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_8683/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v9, v10);
    byte_4B1172D = 1;
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
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6487/*"FES_WAR_ID"*/, 0LL);
    info = item->fields.info;
    if ( !info )
      goto LABEL_70;
    v14 = (int)mLastTimeIcon;
    war_id = info->fields.war_id;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item);
    if ( !byte_4B1175E )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, item, v12);
      byte_4B1175E = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v16 = item->fields.info;
    if ( !v16 )
      goto LABEL_70;
    quest_id = v16->fields.quest_id;
    v18 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL);
    if ( v14 == war_id )
    {
      if ( v18 == quest_id )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon, item);
        if ( !byte_4B1175F )
        {
          sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, item, v12);
          byte_4B1175F = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v19 = item->fields.info;
        if ( !v19 )
          goto LABEL_70;
        v20 = v19->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v20 && v20 != -1 )
        {
          if ( !LODWORD(mLastTimeIcon[9].monitor) )
            j_il2cpp_runtime_class_init_0(mLastTimeIcon, item);
          if ( !byte_4B11760 )
          {
            sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, item, v12);
            byte_4B11760 = 1;
          }
          v21 = MyRoomParamsManager_TypeInfo;
          if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item);
            v21 = MyRoomParamsManager_TypeInfo;
          }
          LastPlayTitle_k__BackingField = v21->static_fields->_LastPlayTitle_k__BackingField;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8683/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v23, 0LL);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item);
            if ( !byte_4B11760 )
            {
              sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, item, v24);
              byte_4B11760 = 1;
            }
            mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item);
              mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
            }
            v25 = item->fields.info;
            if ( !v25 )
              goto LABEL_70;
            if ( !System_String__op_Equality(
                    *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                    v25->fields.str,
                    0LL) )
              return;
            goto LABEL_62;
          }
          v29 = item->fields.info;
          if ( !v29 )
            goto LABEL_70;
          str = v29->fields.str;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8683/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          if ( System_String__op_Inequality(str, v31, 0LL) )
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
            sub_1BCAA3C(mLastTimeIcon, item);
          }
        }
      }
    }
    else
    {
      if ( v18 == quest_id )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon, item);
        if ( !byte_4B1175F )
        {
          sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, item, v12);
          byte_4B1175F = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        v26 = item->fields.info;
        if ( !v26 )
          goto LABEL_70;
        v27 = v26->fields.war_id;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v27 && v27 != -1 )
          goto LABEL_62;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon, item);
      if ( !byte_4B11761 )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, item, v12);
        byte_4B11761 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, item);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v28 = item->fields.info;
      if ( !v28 )
        goto LABEL_70;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL) == v28->fields.quest_id )
        goto LABEL_62;
    }
  }
}