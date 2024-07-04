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
    sub_1B00F28(0LL, method);
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

  if ( (byte_48DE287 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, item);
    byte_48DE287 = 1;
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
      sub_1B00F28(v7, v6);
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
  ServantFaceIconComponent_o *IsDataLostStateServant; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x1
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w21
  BalanceConfig_c *v22; // x8
  UserServantMaster_o *v23; // x21
  struct ServantFaceIconComponent_o *servantFaceIcon; // x23
  struct UserServantCollectionEntity_o *v25; // x22
  struct IconLabelInfo_o *iconLabelInfo; // x21
  struct UISprite_o *rarity2Sprite; // x24
  struct UISprite_o *raritySprite; // x25
  int32_t v29; // w4
  UserServantCollectionEntity_o *v30; // x1
  IconLabelInfo_o *v31; // x2
  System_String_o *v32; // x1
  UnityEngine_Object_o *baseButton; // x20
  int v34; // w21
  struct UILabel_o *maskLabel; // x21
  System_String_o **v36; // x8
  System_String_o *v37; // x20
  struct UILabel_o *v38; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_48DE286 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, item);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1B00CCC(&DataManager_TypeInfo, v8);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v9);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v10);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B00CCC(&StringLiteral_8455/*"MATERIAL_FIND_COMMAND_CODE"*/, v12);
    sub_1B00CCC(&StringLiteral_8458/*"MATERIAL_FIND_SERVANT_EQUIP"*/, v13);
    sub_1B00CCC(&StringLiteral_1/*""*/, v14);
    sub_1B00CCC(&StringLiteral_8457/*"MATERIAL_FIND_SERVANT"*/, v15);
    byte_48DE286 = 1;
  }
  if ( !item || !mode )
    return;
  if ( item->fields.userSvtCollectionEntity )
  {
    IsDataLostStateServant = (ServantFaceIconComponent_o *)MaterialCollectionServantListViewItem__get_IsDataLostStateServant(
                                                             item,
                                                             0LL);
    if ( (((unsigned __int8)IsDataLostStateServant & 1) != 0
       || (IsDataLostStateServant = (ServantFaceIconComponent_o *)MaterialCollectionServantListViewItem__get_IsLinkLostStateServant(
                                                                    item,
                                                                    0LL),
           ((unsigned __int8)IsDataLostStateServant & 1) != 0)
       || (IsDataLostStateServant = (ServantFaceIconComponent_o *)MaterialCollectionServantListViewItem__get_IsLinkBadStateServant(
                                                                    item,
                                                                    0LL),
           ((unsigned __int8)IsDataLostStateServant & 1) != 0))
      && !item->fields.isValentineList )
    {
      IsDataLostStateServant = this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_67;
      ServantFaceIconComponent__SetLost(
        IsDataLostStateServant,
        item->fields.userSvtCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
    else
    {
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_67;
      v20 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v39.fields.currentCryptoKey = v20;
      *(_QWORD *)&v39.fields.fakeValue = v19;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v39, 0LL);
      v22 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      if ( v21 == v22->static_fields->ServantIdMashu1 && item->fields.isValentineList )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsDataLostStateServant = (ServantFaceIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserServantMaster___);
        v23 = (UserServantMaster_o *)IsDataLostStateServant;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v23 )
          goto LABEL_67;
        IsDataLostStateServant = (ServantFaceIconComponent_o *)UserServantMaster__getHeroineData(
                                                                 v23,
                                                                 BalanceConfig_TypeInfo->static_fields->ServantIdMashu1,
                                                                 0LL);
        if ( !IsDataLostStateServant )
          goto LABEL_67;
        servantFaceIcon = this->fields.servantFaceIcon;
        v25 = item->fields.userSvtCollectionEntity;
        iconLabelInfo = item->fields.iconLabelInfo;
        raritySprite = IsDataLostStateServant->fields.raritySprite;
        rarity2Sprite = IsDataLostStateServant->fields.rarity2Sprite;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v40.fields.currentCryptoKey = raritySprite;
        *(_QWORD *)&v40.fields.fakeValue = rarity2Sprite;
        IsDataLostStateServant = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                                 v40,
                                                                 0LL);
        if ( !servantFaceIcon )
          goto LABEL_67;
        v29 = (int)IsDataLostStateServant;
        IsDataLostStateServant = servantFaceIcon;
        v30 = v25;
        v31 = iconLabelInfo;
      }
      else
      {
        IsDataLostStateServant = this->fields.servantFaceIcon;
        if ( !IsDataLostStateServant )
          goto LABEL_67;
        v31 = item->fields.iconLabelInfo;
        v30 = item->fields.userSvtCollectionEntity;
        v29 = 0;
      }
      ServantFaceIconComponent__Set_37010300(IsDataLostStateServant, v30, v31, 0LL, v29, 0LL);
    }
  }
  else
  {
    userCommandCodeCollectionEntity = item->fields.userCommandCodeCollectionEntity;
    if ( userCommandCodeCollectionEntity )
    {
      IsDataLostStateServant = this->fields.servantFaceIcon;
      if ( !IsDataLostStateServant )
        goto LABEL_67;
      ServantFaceIconComponent__Set_37016140(
        IsDataLostStateServant,
        userCommandCodeCollectionEntity,
        item->fields.iconLabelInfo,
        0LL,
        0LL);
    }
  }
  if ( MaterialCollectionServantListViewItem__get_IsEnemyCollectionDetail(item, 0LL)
    || MaterialCollectionServantListViewItem__get_IsDataLostStateServant(item, 0LL)
    || MaterialCollectionServantListViewItem__get_IsLinkLostStateServant(item, 0LL)
    || MaterialCollectionServantListViewItem__get_IsLinkBadStateServant(item, 0LL) )
  {
    IsDataLostStateServant = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !IsDataLostStateServant )
      goto LABEL_67;
    IsDataLostStateServant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)IsDataLostStateServant,
                                                             0LL);
    if ( !IsDataLostStateServant )
      goto LABEL_67;
LABEL_41:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 0, 0LL);
    IsDataLostStateServant = (ServantFaceIconComponent_o *)this->fields.maskLabel;
    if ( !IsDataLostStateServant )
      goto LABEL_67;
    v32 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_43:
    UILabel__set_text((UILabel_o *)IsDataLostStateServant, v32, 0LL);
    goto LABEL_44;
  }
  IsDataLostStateServant = (ServantFaceIconComponent_o *)MaterialCollectionServantListViewItem__get_CollectionKind(
                                                           item,
                                                           0LL);
  if ( !this->fields.maskSprite )
    goto LABEL_67;
  v34 = (int)IsDataLostStateServant;
  IsDataLostStateServant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this->fields.maskSprite,
                                                           0LL);
  if ( !IsDataLostStateServant )
    goto LABEL_67;
  if ( v34 != 1 )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsDataLostStateServant, 1, 0LL);
  if ( item->fields.userSvtCollectionEntity )
  {
    maskLabel = this->fields.maskLabel;
    if ( MaterialCollectionServantListViewItem__get_IsServantEquip(item, 0LL) )
      v36 = (System_String_o **)&StringLiteral_8458/*"MATERIAL_FIND_SERVANT_EQUIP"*/;
    else
      v36 = (System_String_o **)&StringLiteral_8457/*"MATERIAL_FIND_SERVANT"*/;
    v37 = *v36;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsDataLostStateServant = (ServantFaceIconComponent_o *)LocalizationManager__Get(v37, 0LL);
    if ( !maskLabel )
      goto LABEL_67;
    v32 = (System_String_o *)IsDataLostStateServant;
    IsDataLostStateServant = (ServantFaceIconComponent_o *)maskLabel;
    goto LABEL_43;
  }
  if ( item->fields.userCommandCodeCollectionEntity )
  {
    v38 = this->fields.maskLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsDataLostStateServant = (ServantFaceIconComponent_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_8455/*"MATERIAL_FIND_COMMAND_CODE"*/,
                                                             0LL);
    if ( !v38 )
      goto LABEL_67;
    v32 = (System_String_o *)IsDataLostStateServant;
    IsDataLostStateServant = (ServantFaceIconComponent_o *)v38;
    goto LABEL_43;
  }
LABEL_44:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    IsDataLostStateServant = (ServantFaceIconComponent_o *)this->fields.baseButton;
    if ( IsDataLostStateServant )
    {
      ((void (__fastcall *)(ServantFaceIconComponent_o *, __int64, void *))IsDataLostStateServant->klass->vtable._5_UpdateAlpha.method)(
        IsDataLostStateServant,
        1LL,
        IsDataLostStateServant->klass[1]._1.image);
      IsDataLostStateServant = (ServantFaceIconComponent_o *)this->fields.baseButton;
      if ( IsDataLostStateServant )
      {
        ((void (__fastcall *)(ServantFaceIconComponent_o *, _QWORD, __int64, void *))IsDataLostStateServant->klass[1]._1.events)(
          IsDataLostStateServant,
          0LL,
          1LL,
          IsDataLostStateServant->klass[1]._1.properties);
        return;
      }
    }
LABEL_67:
    sub_1B00F28(IsDataLostStateServant, userCommandCodeCollectionEntity);
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

  if ( (byte_48DE288 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, item);
    sub_1B00CCC(&MyRoomParamsManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_6299/*"FES_WAR_ID"*/, v6);
    sub_1B00CCC(&StringLiteral_8463/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v7);
    byte_48DE288 = 1;
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
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6299/*"FES_WAR_ID"*/, 0LL);
    info = item->fields.info;
    if ( !info )
      goto LABEL_70;
    v10 = (int)mLastTimeIcon;
    war_id = info->fields.war_id;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_48DE387 )
    {
      sub_1B00CCC(&MyRoomParamsManager_TypeInfo, item);
      byte_48DE387 = 1;
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
        if ( !byte_48DE388 )
        {
          sub_1B00CCC(&MyRoomParamsManager_TypeInfo, item);
          byte_48DE388 = 1;
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
          if ( !byte_48DE389 )
          {
            sub_1B00CCC(&MyRoomParamsManager_TypeInfo, item);
            byte_48DE389 = 1;
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
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8463/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
          mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v19, 0LL);
          if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
          {
            if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            if ( !byte_48DE389 )
            {
              sub_1B00CCC(&MyRoomParamsManager_TypeInfo, item);
              byte_48DE389 = 1;
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
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8463/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
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
            sub_1B00F28(mLastTimeIcon, item);
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
        if ( !byte_48DE388 )
        {
          sub_1B00CCC(&MyRoomParamsManager_TypeInfo, item);
          byte_48DE388 = 1;
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
      if ( !byte_48DE38A )
      {
        sub_1B00CCC(&MyRoomParamsManager_TypeInfo, item);
        byte_48DE38A = 1;
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