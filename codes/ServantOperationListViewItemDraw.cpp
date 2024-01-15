void __fastcall ServantOperationListViewItemDraw___ctor(
        ServantOperationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantOperationListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_3148048[initMode - 1];
}


System_String_o *__fastcall ServantOperationListViewItemDraw__GetStatusText(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  __int64 v6; // x1
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
  __int64 *v18; // x8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  LocalizationManager_c *v20; // x0
  UserServantEntity_o *v22; // x0
  ServantEntity_o *servantEntity; // x0

  if ( (byte_40FD700 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_9286/*"NONSELECT_MATERIAL"*/, v6);
    sub_B16FFC(&StringLiteral_11593/*"SELECT_LOCK"*/, v7);
    sub_B16FFC(&StringLiteral_11589/*"SELECT_FAVORITE"*/, v8);
    sub_B16FFC(&StringLiteral_12446/*"SUPPORT_MEMBER"*/, v9);
    sub_B16FFC(&StringLiteral_11606/*"SELECT_PUSH"*/, v10);
    sub_B16FFC(&StringLiteral_11584/*"SELECT_CANNOT"*/, v11);
    sub_B16FFC(&StringLiteral_11585/*"SELECT_CHOICE"*/, v12);
    sub_B16FFC(&StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, v13);
    sub_B16FFC(&StringLiteral_11603/*"SELECT_PARTY"*/, v14);
    sub_B16FFC(&StringLiteral_9316/*"NOT_SELECT_EQUIPED"*/, v15);
    sub_B16FFC(&StringLiteral_1/*""*/, v16);
    sub_B16FFC(&StringLiteral_11605/*"SELECT_PROTECTED_EVENT_SVT"*/, v17);
    byte_40FD700 = 1;
  }
  if ( !item )
    goto LABEL_68;
  if ( item->fields._IsPush_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11606/*"SELECT_PUSH"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields.attribute )
  {
    v20 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11585/*"SELECT_CHOICE"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields._IsNotSelection_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_9286/*"NONSELECT_MATERIAL"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11593/*"SELECT_LOCK"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields._IsFavorite_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11589/*"SELECT_FAVORITE"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields._IsParty_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11603/*"SELECT_PARTY"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields._IsUseSupportServant_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_12446/*"SUPPORT_MEMBER"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields._IsCommandCodeEquiped_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_9316/*"NOT_SELECT_EQUIPED"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  v22 = item->fields._UserServantEntity_k__BackingField;
  if ( v22 && UserServantEntity__IsProtectedEventServant(v22, 0LL) )
  {
    servantEntity = item->fields.servantEntity;
    if ( servantEntity )
    {
      if ( !ServantEntity__get_IsServantMaterialTd(servantEntity, 0LL) )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v18 = &StringLiteral_11605/*"SELECT_PROTECTED_EVENT_SVT"*/;
        return LocalizationManager__Get((System_String_o *)*v18, 0LL);
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
        || LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_19;
      }
      v20 = LocalizationManager_TypeInfo;
LABEL_18:
      j_il2cpp_runtime_class_init_0(v20);
LABEL_19:
      v18 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v18, 0LL);
    }
LABEL_68:
    sub_B170D4();
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ServantOperationListViewItemDraw__SetDisp(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  ServantOperationListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  ServantOperationListViewItemDraw_o *v9; // x0
  const MethodInfo *v10; // x3
  ServantOperationListViewItemDraw_o *v11; // x0
  const MethodInfo *v12; // x3
  ServantOperationListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  ServantOperationListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  UISprite_o *maskSprite; // x22
  const MethodInfo *v18; // x1
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v20; // x3
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x3
  UISprite_o *v25; // x21
  ServantFaceIconComponent_o *v26; // x0
  DragSelectComponent_o *dragSelect; // x0
  DragSelectComponent_o *v28; // x0
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_40FD702 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    this = (ServantOperationListViewItemDraw_o *)sub_B16FFC(&StringLiteral_21736/*"ribbon_noblephantasmup_01"*/, v8);
    byte_40FD702 = 1;
  }
  if ( !item )
    goto LABEL_22;
  ServantOperationListViewItemDraw__SetSpriteActive(
    this,
    v6->fields.lockSprite,
    item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
    method);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v9,
    v6->fields.choiceSprite,
    item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
    v10);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v11,
    v6->fields.pushSprite,
    item->fields._IsPush_k__BackingField,
    v12);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v13,
    v6->fields.friendShipSprite,
    item->fields._IsFriendShipSvtEq_k__BackingField,
    v14);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v15,
    v6->fields.chocolateSprite,
    item->fields._IsChocolateSvtEquip_k__BackingField,
    v16);
  maskSprite = v6->fields.maskSprite;
  CanNotSelect = ServantOperationListViewItem__get_IsCanNotSelect(item, v18);
  if ( !CanNotSelect && !isSelectEnable )
    CanNotSelect = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  ServantOperationListViewItemDraw__SetSpriteActive(
    (ServantOperationListViewItemDraw_o *)CanNotSelect,
    maskSprite,
    CanNotSelect,
    v20);
  servantFaceIcon = v6->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_22;
  ServantFaceIconComponent__ResetIconLabelScale(servantFaceIcon, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)v6->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL);
  if ( v23 )
  {
    ServantOperationListViewItemDraw__SetSpriteActive(
      (ServantOperationListViewItemDraw_o *)v23,
      v6->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v24);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v25 = v6->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v25, (System_String_o *)StringLiteral_21736/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        v26 = v6->fields.servantFaceIcon;
        if ( !v26 )
          goto LABEL_22;
        v29.fields.x = 0.65;
        v29.fields.y = 1.0;
        v29.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale(v26, v29, 0LL);
      }
    }
  }
  dragSelect = v6->fields.dragSelect;
  if ( !dragSelect
    || (DragSelectComponent__setOverHundredNumCondensedScale(dragSelect, -1, 0LL), (v28 = v6->fields.dragSelect) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  DragSelectComponent__Set(v28, item->fields.selectNum, item->fields._DragSelectNum_k__BackingField, 0LL);
}


void __fastcall ServantOperationListViewItemDraw__SetInput(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v8; // x3
  struct UICommonButton_o *v9; // x0
  struct UICommonButton_o *v10; // x0

  if ( (byte_40FD701 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FD701 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v9 = this->fields.baseButton;
    if ( !v9
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._5_set_isEnabled.method)(
            v9,
            1LL,
            v9->klass->vtable._6_OnInit.methodPtr),
          (v10 = this->fields.baseButton) == 0LL) )
    {
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v10->klass->vtable._14_SetState.method)(
      v10,
      0LL,
      1LL,
      v10->klass->vtable._15_OnPress.methodPtr);
  }
  if ( item )
    ServantOperationListViewItemDraw__SetDisp(this, item, isSelectEnable, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItemDraw__SetItem(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x24
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x25
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x3
  FlashingIconComponent_o *v17; // x0
  bool IsParty_k__BackingField; // w1
  UnityEngine_Object_o *baseButton; // x23
  struct UICommonButton_o *v20; // x0
  struct UICommonButton_o *v21; // x0
  UnityEngine_GameObject_o *fortificationRootObj; // x0
  UILabel_o *fortificationNameLabel; // x0
  UILabel_o *fortificationDetailNameLabel; // x0
  UILabel_o *fortificationAppointmentLabel; // x0
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x5

  if ( (byte_40FD6FC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FD6FC = 1;
  }
  if ( item )
  {
    if ( mode )
    {
      UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
      UserCommandCodeEntity_k__BackingField = item->fields._UserCommandCodeEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField || UserCommandCodeEntity_k__BackingField )
      {
        ServantOperationListViewItemDraw__SetServantFaceIcon(
          this,
          item,
          UserServantEntity_k__BackingField != 0LL,
          UserCommandCodeEntity_k__BackingField != 0LL,
          *(const MethodInfo **)&modeKind);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v15 = UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
        if ( v15 )
        {
          v17 = this->fields.partyIcon;
          if ( UserServantEntity_k__BackingField && !item->fields._IsUse_k__BackingField )
          {
            IsParty_k__BackingField = item->fields._IsParty_k__BackingField;
            if ( !v17 )
              goto LABEL_30;
          }
          else
          {
            IsParty_k__BackingField = 0;
            if ( !v17 )
              goto LABEL_30;
          }
          FlashingIconComponent__Set_23222596(v17, IsParty_k__BackingField, 0LL);
        }
        ServantOperationListViewItemDraw__SetSpriteActive(
          (ServantOperationListViewItemDraw_o *)v15,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v16);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          v20 = this->fields.baseButton;
          if ( !v20 )
            goto LABEL_30;
          ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v20->klass->vtable._5_set_isEnabled.method)(
            v20,
            1LL,
            v20->klass->vtable._6_OnInit.methodPtr);
          v21 = this->fields.baseButton;
          if ( !v21 )
            goto LABEL_30;
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v21->klass->vtable._14_SetState.method)(
            v21,
            0LL,
            1LL,
            v21->klass->vtable._15_OnPress.methodPtr);
        }
        fortificationRootObj = this->fields.fortificationRootObj;
        if ( fortificationRootObj )
        {
          UnityEngine_GameObject__SetActive(fortificationRootObj, 0, 0LL);
          fortificationNameLabel = this->fields.fortificationNameLabel;
          if ( fortificationNameLabel )
          {
            UILabel__set_text(fortificationNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            fortificationDetailNameLabel = this->fields.fortificationDetailNameLabel;
            if ( fortificationDetailNameLabel )
            {
              UILabel__set_text(fortificationDetailNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
              if ( fortificationAppointmentLabel )
              {
                UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                ServantOperationListViewItemDraw__SetDisp(this, item, isSelectEnable, v26);
                ServantOperationListViewItemDraw__SetWarningText(
                  this,
                  item,
                  modeKind,
                  UserServantEntity_k__BackingField != 0LL,
                  UserCommandCodeEntity_k__BackingField != 0LL,
                  v27);
                return;
              }
            }
          }
        }
LABEL_30:
        sub_B170D4();
      }
    }
  }
}


void __fastcall ServantOperationListViewItemDraw__SetLabelText(
        ServantOperationListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  if ( (byte_40FD6FD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FD6FD = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label )
      sub_B170D4();
    UILabel__set_text(label, text, 0LL);
  }
}


void __fastcall ServantOperationListViewItemDraw__SetServantFaceIcon(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  ServantFaceIconComponent_o *v6; // x0

  if ( isServant )
  {
    if ( item )
    {
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( servantFaceIcon )
      {
        ServantFaceIconComponent__Set_30631556(
          servantFaceIcon,
          item->fields._UserServantEntity_k__BackingField,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0LL);
        return;
      }
    }
LABEL_10:
    sub_B170D4();
  }
  if ( isCommandCode )
  {
    if ( !item )
      goto LABEL_10;
    v6 = this->fields.servantFaceIcon;
    if ( !v6 )
      goto LABEL_10;
    ServantFaceIconComponent__Set_30711528(
      v6,
      item->fields._UserCommandCodeEntity_k__BackingField,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
  }
}


void __fastcall ServantOperationListViewItemDraw__SetSpriteActive(
        ServantOperationListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD6FE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FD6FE = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItemDraw__SetWarningText(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        int32_t modeKind,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  ServantOperationListViewItemDraw_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UserServantEntity_o *v14; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *warningLabel; // x19
  __int64 *v18; // x8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v20; // x21
  System_String_o *StatusText; // x0
  const MethodInfo *v22; // x3
  ServantOperationListViewItemDraw_o *v23; // x0
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *fortificationRootObj; // x0
  UnityEngine_GameObject_o *v26; // x0
  UILabel_o *fortificationNameLabel; // x0
  UILabel_o *fortificationDetailNameLabel; // x0
  UILabel_o *fortificationAppointmentLabel; // x20
  System_String_o *v30; // x0
  UILabel_o *v31; // x0
  UILabel_o *v32; // x0
  UserServantEntity_o *v33; // x0
  UserServantEntity_o *v34; // x0
  UserServantEntity_o *v35; // x0
  UserServantEntity_o *v36; // x0
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  System_String_o *v39; // x0
  const MethodInfo *v40; // x3
  UILabel_o *v41; // x1
  System_String_o *v42; // x2
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0

  v8 = this;
  if ( (byte_40FD6FF & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&TutorialFlag_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6395/*"FORTIFICATION_APPOINTMENT"*/, v10);
    sub_B16FFC(&StringLiteral_11584/*"SELECT_CANNOT"*/, v11);
    sub_B16FFC(&StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, v12);
    this = (ServantOperationListViewItemDraw_o *)sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40FD6FF = 1;
  }
  if ( (unsigned int)(modeKind - 1) < 2 )
  {
    if ( !item )
      goto LABEL_54;
    UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL) )
      goto LABEL_49;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    this = (ServantOperationListViewItemDraw_o *)TutorialFlag__Get_28023340(126, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_49;
  }
  else if ( modeKind == 3 )
  {
    if ( !item )
      goto LABEL_54;
    v14 = item->fields._UserServantEntity_k__BackingField;
    if ( !v14 )
      goto LABEL_54;
    if ( UserServantEntity__IsEventJoin(v14, 0LL) )
    {
      maskSprite = (UnityEngine_Component_o *)v8->fields.maskSprite;
      if ( maskSprite )
      {
        gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          warningLabel = v8->fields.warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v18 = &StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_48:
          v39 = LocalizationManager__Get((System_String_o *)*v18, 0LL);
          v41 = warningLabel;
          v42 = v39;
LABEL_52:
          ServantOperationListViewItemDraw__SetLabelText((ServantOperationListViewItemDraw_o *)v39, v41, v42, v40);
          return;
        }
      }
      goto LABEL_54;
    }
    v33 = item->fields._UserServantEntity_k__BackingField;
    if ( !v33 )
      goto LABEL_54;
    if ( UserServantEntity__IsLeave(v33, 0LL) )
      goto LABEL_42;
    v34 = item->fields._UserServantEntity_k__BackingField;
    if ( !v34 )
      goto LABEL_54;
    if ( UserServantEntity__IsCombineMaterial(v34, 0LL) )
      goto LABEL_42;
    v35 = item->fields._UserServantEntity_k__BackingField;
    if ( !v35 )
      goto LABEL_54;
    if ( UserServantEntity__IsStatusUp(v35, 0LL) )
      goto LABEL_42;
    v36 = item->fields._UserServantEntity_k__BackingField;
    if ( !v36 )
      goto LABEL_54;
    if ( UserServantEntity__IsMaterialTd(v36, 0LL) )
    {
LABEL_42:
      v37 = (UnityEngine_Component_o *)v8->fields.maskSprite;
      if ( v37 )
      {
        v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
        if ( v38 )
        {
          UnityEngine_GameObject__SetActive(v38, 1, 0LL);
          warningLabel = v8->fields.warningLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v18 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
          goto LABEL_48;
        }
      }
LABEL_54:
      sub_B170D4();
    }
LABEL_49:
    v43 = (UnityEngine_Component_o *)v8->fields.maskSprite;
    if ( v43 )
    {
      v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
      if ( v44 )
      {
        UnityEngine_GameObject__SetActive(v44, 0, 0LL);
        v41 = v8->fields.warningLabel;
        v42 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_52;
      }
    }
    goto LABEL_54;
  }
  v20 = v8->fields.warningLabel;
  StatusText = ServantOperationListViewItemDraw__GetStatusText(this, item, 0, 0, (const MethodInfo *)isCommandCode);
  ServantOperationListViewItemDraw__SetLabelText((ServantOperationListViewItemDraw_o *)StatusText, v20, StatusText, v22);
  if ( !item )
    goto LABEL_54;
  if ( item->fields.isFortification )
  {
    ServantOperationListViewItemDraw__SetLabelText(
      v23,
      v8->fields.warningLabel,
      (System_String_o *)StringLiteral_1/*""*/,
      v24);
    fortificationRootObj = v8->fields.fortificationRootObj;
    if ( fortificationRootObj )
    {
      v26 = UnityEngine_GameObject__get_gameObject(fortificationRootObj, 0LL);
      if ( v26 )
      {
        UnityEngine_GameObject__SetActive(v26, 1, 0LL);
        fortificationNameLabel = v8->fields.fortificationNameLabel;
        if ( fortificationNameLabel )
        {
          UILabel__set_text(fortificationNameLabel, item->fields.fortificationName, 0LL);
          fortificationDetailNameLabel = v8->fields.fortificationDetailNameLabel;
          if ( fortificationDetailNameLabel )
          {
            UILabel__set_text(fortificationDetailNameLabel, item->fields.fortificationDetailName, 0LL);
            fortificationAppointmentLabel = v8->fields.fortificationAppointmentLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v30 = LocalizationManager__Get((System_String_o *)StringLiteral_6395/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
            if ( fortificationAppointmentLabel )
            {
              UILabel__set_text(fortificationAppointmentLabel, v30, 0LL);
              v31 = v8->fields.fortificationNameLabel;
              if ( v31 )
              {
                UILabel__UpdateCondensedScaleComponent(v31, 0LL);
                v32 = v8->fields.fortificationDetailNameLabel;
                if ( v32 )
                {
                  UILabel__UpdateCondensedScaleComponent(v32, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_54;
  }
}