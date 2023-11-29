void __fastcall ServantSellConfirmListViewItemDraw___ctor(
        ServantSellConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantSellConfirmListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_3137830[initMode - 1];
}


System_String_o *__fastcall ServantSellConfirmListViewItemDraw__GetStatusText(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  __int64 *v18; // x8

  if ( (byte_40FBBDB & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_11593, v8);
    sub_B16FFC(&StringLiteral_11589, v9);
    sub_B16FFC(&StringLiteral_12446, v10);
    sub_B16FFC(&StringLiteral_11584, v11);
    sub_B16FFC(&StringLiteral_11585, v12);
    sub_B16FFC(&StringLiteral_11607, v13);
    sub_B16FFC(&StringLiteral_11603, v14);
    sub_B16FFC(&StringLiteral_9316, v15);
    sub_B16FFC(&StringLiteral_1, v16);
    byte_40FBBDB = 1;
  }
  if ( !isServant )
  {
    if ( item )
      goto LABEL_18;
LABEL_12:
    sub_B170D4();
  }
  if ( !item )
    goto LABEL_12;
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11607;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields.attribute )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11584;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
LABEL_18:
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11585;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11593;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( isServant )
  {
    if ( item->fields._IsFavorite_k__BackingField )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_11589;
      return LocalizationManager__Get((System_String_o *)*v18, 0LL);
    }
    if ( item->fields._IsParty_k__BackingField )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_11603;
      return LocalizationManager__Get((System_String_o *)*v18, 0LL);
    }
    if ( item->fields._IsUseSupportServant_k__BackingField )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_12446;
      return LocalizationManager__Get((System_String_o *)*v18, 0LL);
    }
  }
  if ( isCommandCode && item->fields._IsCommandCodeEquipped_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_9316;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  return (System_String_o *)StringLiteral_1;
}


void __fastcall ServantSellConfirmListViewItemDraw__SetDisp(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL8 IsSelect; // x0
  const MethodInfo *v10; // x3
  UISprite_o *lockSprite; // x1
  ServantSellConfirmListViewItemDraw_o *v12; // x0
  const MethodInfo *v13; // x3
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v15; // x3
  UISprite_o *maskSprite; // x1
  bool v17; // w2
  ServantSellConfirmListViewItemDraw_o *v18; // x0
  const MethodInfo *v19; // x3
  struct UISprite_o *v20; // x22
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x3
  UISprite_o *v25; // x21
  DragSelectComponent_o *dragSelect; // x0
  DragSelectComponent_o *v27; // x0

  if ( (byte_40FBBDD & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_21736, v8);
    byte_40FBBDD = 1;
  }
  if ( !item )
    goto LABEL_22;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  lockSprite = this->fields.lockSprite;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)IsSelect,
      lockSprite,
      0,
      v10);
    ServantSellConfirmListViewItemDraw__SetSpriteActive(v12, this->fields.choiceSprite, 0, v13);
    maskSprite = this->fields.maskSprite;
    v17 = 0;
  }
  else
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)IsSelect,
      lockSprite,
      item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
      v10);
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      v18,
      this->fields.choiceSprite,
      item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
      v19);
    v20 = this->fields.maskSprite;
    CanNotSelect = ServantSellConfirmListViewItem__get_IsCanNotSelect(item, v21);
    if ( !CanNotSelect && !isSelectEnable )
      CanNotSelect = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    v17 = CanNotSelect;
    maskSprite = v20;
  }
  ServantSellConfirmListViewItemDraw__SetSpriteActive(
    (ServantSellConfirmListViewItemDraw_o *)CanNotSelect,
    maskSprite,
    v17,
    v15);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL);
  if ( v23 )
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)v23,
      this->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v24);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v25 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v25, (System_String_o *)StringLiteral_21736, 0LL);
    }
  }
  dragSelect = this->fields.dragSelect;
  if ( !dragSelect
    || (DragSelectComponent__setOverHundredNumCondensedScale(dragSelect, -1, 0LL), (v27 = this->fields.dragSelect) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  DragSelectComponent__Set(v27, item->fields.selectNum, item->fields._DragSelectNum_k__BackingField, 0LL);
}


void __fastcall ServantSellConfirmListViewItemDraw__SetInput(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v8; // x3
  struct UICommonButton_o *v9; // x0
  struct UICommonButton_o *v10; // x0

  if ( (byte_40FBBDC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FBBDC = 1;
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
    ServantSellConfirmListViewItemDraw__SetDisp(this, item, isSelectEnable, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewItemDraw__SetItem(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        int32_t dispMode,
        bool isSelectEnable,
        int32_t modeKind,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x24
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x25
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  FlashingIconComponent_o *v16; // x0
  bool IsParty_k__BackingField; // w1
  UnityEngine_Object_o *baseButton; // x23
  const MethodInfo *v19; // x3
  struct UICommonButton_o *v20; // x0
  struct UICommonButton_o *v21; // x0
  const MethodInfo *v22; // x5

  if ( (byte_40FBBD7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FBBD7 = 1;
  }
  if ( item )
  {
    if ( dispMode )
    {
      UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
      UserCommandCodeEntity_k__BackingField = item->fields._UserCommandCodeEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField || UserCommandCodeEntity_k__BackingField )
      {
        ServantSellConfirmListViewItemDraw__SetServantFaceIcon(
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
        v14 = UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
        if ( v14 )
        {
          v16 = this->fields.partyIcon;
          if ( UserServantEntity_k__BackingField && !item->fields._IsUse_k__BackingField )
          {
            IsParty_k__BackingField = item->fields._IsParty_k__BackingField;
            if ( !v16 )
              goto LABEL_26;
          }
          else
          {
            IsParty_k__BackingField = 0;
            if ( !v16 )
              goto LABEL_26;
          }
          FlashingIconComponent__Set_23222596(v16, IsParty_k__BackingField, 0LL);
        }
        ServantSellConfirmListViewItemDraw__SetSpriteActive(
          (ServantSellConfirmListViewItemDraw_o *)v14,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v15);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          v20 = this->fields.baseButton;
          if ( !v20
            || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v20->klass->vtable._5_set_isEnabled.method)(
                  v20,
                  1LL,
                  v20->klass->vtable._6_OnInit.methodPtr),
                (v21 = this->fields.baseButton) == 0LL) )
          {
LABEL_26:
            sub_B170D4();
          }
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v21->klass->vtable._14_SetState.method)(
            v21,
            0LL,
            1LL,
            v21->klass->vtable._15_OnPress.methodPtr);
        }
        ServantSellConfirmListViewItemDraw__SetDisp(this, item, isSelectEnable, v19);
        ServantSellConfirmListViewItemDraw__SetWarningText(
          this,
          item,
          modeKind,
          UserServantEntity_k__BackingField != 0LL,
          UserCommandCodeEntity_k__BackingField != 0LL,
          v22);
      }
    }
  }
}


void __fastcall ServantSellConfirmListViewItemDraw__SetLabelText(
        ServantSellConfirmListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  if ( (byte_40FBBD9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FBBD9 = 1;
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


void __fastcall ServantSellConfirmListViewItemDraw__SetServantFaceIcon(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
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


void __fastcall ServantSellConfirmListViewItemDraw__SetSpriteActive(
        ServantSellConfirmListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FBBD8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FBBD8 = 1;
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
void __fastcall ServantSellConfirmListViewItemDraw__SetWarningText(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        int32_t modeKind,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  ServantSellConfirmListViewItemDraw_o *v10; // x19
  __int64 v11; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v13; // x19
  UILabel_o *warningLabel; // x1
  System_String_o *v15; // x2
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  v10 = this;
  if ( (byte_40FBBDA & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, item);
    this = (ServantSellConfirmListViewItemDraw_o *)sub_B16FFC(&StringLiteral_1, v11);
    byte_40FBBDA = 1;
  }
  if ( !item )
    goto LABEL_18;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
LABEL_16:
    warningLabel = v10->fields.warningLabel;
    v15 = (System_String_o *)StringLiteral_1;
    goto LABEL_17;
  }
  if ( (unsigned int)(modeKind - 1) <= 1 )
  {
    UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL) )
      goto LABEL_13;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    this = (ServantSellConfirmListViewItemDraw_o *)TutorialFlag__Get_28023340(126, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_13:
      maskSprite = (UnityEngine_Component_o *)v10->fields.maskSprite;
      if ( maskSprite )
      {
        gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          goto LABEL_16;
        }
      }
LABEL_18:
      sub_B170D4();
    }
  }
  v13 = v10->fields.warningLabel;
  this = (ServantSellConfirmListViewItemDraw_o *)ServantSellConfirmListViewItemDraw__GetStatusText(
                                                   this,
                                                   item,
                                                   isServant,
                                                   isCommandCode,
                                                   (const MethodInfo *)isCommandCode);
  warningLabel = v13;
  v15 = (System_String_o *)this;
LABEL_17:
  ServantSellConfirmListViewItemDraw__SetLabelText(this, warningLabel, v15, (const MethodInfo *)isServant);
}