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
    return dword_C0C0A0[initMode - 1];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSellConfirmListViewItemDraw__GetStatusText(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  __int64 *v27; // x8

  if ( (byte_4B12613 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, isServant);
    sub_1BCA7E0(&StringLiteral_11644/*"SELECT_LOCK"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11640/*"SELECT_FAVORITE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12565/*"SUPPORT_MEMBER"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11635/*"SELECT_CHOICE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_11654/*"SELECT_PARTY"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_9422/*"NOT_SELECT_EQUIPED"*/, v22, v23);
    this = (ServantSellConfirmListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B12613 = 1;
  }
  if ( !isServant )
  {
    if ( item )
      goto LABEL_16;
LABEL_11:
    sub_1BCAA3C(this, item);
  }
  if ( !item )
    goto LABEL_11;
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v27 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
    return LocalizationManager__Get((System_String_o *)*v27, 0LL);
  }
  if ( item->fields.attribute )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v27 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
    return LocalizationManager__Get((System_String_o *)*v27, 0LL);
  }
LABEL_16:
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v27 = &StringLiteral_11635/*"SELECT_CHOICE"*/;
    return LocalizationManager__Get((System_String_o *)*v27, 0LL);
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v27 = &StringLiteral_11644/*"SELECT_LOCK"*/;
    return LocalizationManager__Get((System_String_o *)*v27, 0LL);
  }
  if ( isServant )
  {
    if ( item->fields._IsFavorite_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v27 = &StringLiteral_11640/*"SELECT_FAVORITE"*/;
      return LocalizationManager__Get((System_String_o *)*v27, 0LL);
    }
    if ( item->fields._IsParty_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v27 = &StringLiteral_11654/*"SELECT_PARTY"*/;
      return LocalizationManager__Get((System_String_o *)*v27, 0LL);
    }
    if ( item->fields._IsUseSupportServant_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v27 = &StringLiteral_12565/*"SUPPORT_MEMBER"*/;
      return LocalizationManager__Get((System_String_o *)*v27, 0LL);
    }
  }
  if ( isCommandCode && item->fields._IsCommandCodeEquipped_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v27 = &StringLiteral_9422/*"NOT_SELECT_EQUIPED"*/;
    return LocalizationManager__Get((System_String_o *)*v27, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewItemDraw__SetDisp(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  ServantSellConfirmListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _BOOL8 IsSelect; // x0
  const MethodInfo *v12; // x3
  UISprite_o *lockSprite; // x1
  ServantSellConfirmListViewItemDraw_o *v14; // x0
  const MethodInfo *v15; // x3
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v17; // x3
  UISprite_o *maskSprite; // x1
  bool v19; // w2
  ServantSellConfirmListViewItemDraw_o *v20; // x0
  const MethodInfo *v21; // x3
  UISprite_o *v22; // x22
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x3
  UISprite_o *v28; // x21

  v6 = this;
  if ( (byte_4B12615 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, isSelectEnable);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (ServantSellConfirmListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v9, v10);
    byte_4B12615 = 1;
  }
  if ( !item )
    goto LABEL_20;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  lockSprite = v6->fields.lockSprite;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)IsSelect,
      lockSprite,
      0,
      v12);
    ServantSellConfirmListViewItemDraw__SetSpriteActive(v14, v6->fields.choiceSprite, 0, v15);
    maskSprite = v6->fields.maskSprite;
    v19 = 0;
  }
  else
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)IsSelect,
      lockSprite,
      item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
      v12);
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      v20,
      v6->fields.choiceSprite,
      item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
      v21);
    v22 = v6->fields.maskSprite;
    CanNotSelect = ServantSellConfirmListViewItem__get_IsCanNotSelect(item, v23);
    if ( !CanNotSelect && !isSelectEnable )
      CanNotSelect = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    v19 = CanNotSelect;
    maskSprite = v22;
  }
  ServantSellConfirmListViewItemDraw__SetSpriteActive(
    (ServantSellConfirmListViewItemDraw_o *)CanNotSelect,
    maskSprite,
    v19,
    v17);
  materialTdSprite = (UnityEngine_Object_o *)v6->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  v26 = UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL);
  if ( v26 )
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)v26,
      v6->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v27);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v28 = v6->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
      AtlasManager__SetEventSprite(v28, (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, 0LL);
    }
  }
  this = (ServantSellConfirmListViewItemDraw_o *)v6->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0LL),
        (this = (ServantSellConfirmListViewItemDraw_o *)v6->fields.dragSelect) == 0LL) )
  {
LABEL_20:
    sub_1BCAA3C(this, item);
  }
  DragSelectComponent__Set(
    (DragSelectComponent_o *)this,
    item->fields.selectNum,
    item->fields._DragSelectNum_k__BackingField,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewItemDraw__SetInput(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct UICommonButton_o *v10; // x0

  if ( (byte_4B12614 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, isSelectEnable);
    byte_4B12614 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v10 = this->fields.baseButton;
    if ( !v10
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._5_set_isEnabled.method)(
            v10,
            1LL,
            v10->klass->vtable._6_OnInit.methodPtr),
          (v10 = this->fields.baseButton) == 0LL) )
    {
      sub_1BCAA3C(v10, v8);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v10->klass->vtable._14_SetState.method)(
      v10,
      0LL,
      1LL,
      v10->klass->vtable._15_OnPress.methodPtr);
  }
  if ( item )
    ServantSellConfirmListViewItemDraw__SetDisp(this, item, isSelectEnable, v9);
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
  __int64 v13; // x1
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x3
  FlashingIconComponent_o *v17; // x0
  _BOOL8 IsParty_k__BackingField; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *baseButton; // x23
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x5

  if ( (byte_4B1260F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&dispMode);
    byte_4B1260F = 1;
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        v15 = UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
        if ( v15 )
        {
          v17 = this->fields.partyIcon;
          if ( UserServantEntity_k__BackingField && !item->fields._IsUse_k__BackingField )
          {
            IsParty_k__BackingField = item->fields._IsParty_k__BackingField;
            if ( !v17 )
              goto LABEL_24;
          }
          else
          {
            IsParty_k__BackingField = 0LL;
            if ( !v17 )
              goto LABEL_24;
          }
          FlashingIconComponent__Set_38836528(v17, IsParty_k__BackingField, 0LL);
        }
        ServantSellConfirmListViewItemDraw__SetSpriteActive(
          (ServantSellConfirmListViewItemDraw_o *)v15,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v16);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          v17 = (FlashingIconComponent_o *)this->fields.baseButton;
          if ( !v17
            || (((void (__fastcall *)(FlashingIconComponent_o *, __int64, void *))v17->klass[1]._1.namespaze)(
                  v17,
                  1LL,
                  v17->klass[1]._1.byval_arg.data),
                (v17 = (FlashingIconComponent_o *)this->fields.baseButton) == 0LL) )
          {
LABEL_24:
            sub_1BCAA3C(v17, IsParty_k__BackingField);
          }
          ((void (__fastcall *)(FlashingIconComponent_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))v17->klass[1]._1.implementedInterfaces)(
            v17,
            0LL,
            1LL,
            v17->klass[1]._1.interfaceOffsets);
        }
        ServantSellConfirmListViewItemDraw__SetDisp(this, item, isSelectEnable, v21);
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
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B12611 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, text);
    byte_4B12611 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BCAA3C(v6, v7);
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
  if ( isServant )
  {
    if ( item )
    {
      this = (ServantSellConfirmListViewItemDraw_o *)this->fields.servantFaceIcon;
      if ( this )
      {
        ServantFaceIconComponent__Set_38931252(
          (ServantFaceIconComponent_o *)this,
          item->fields._UserServantEntity_k__BackingField,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0LL);
        return;
      }
    }
LABEL_10:
    sub_1BCAA3C(this, item);
  }
  if ( isCommandCode )
  {
    if ( !item )
      goto LABEL_10;
    this = (ServantSellConfirmListViewItemDraw_o *)this->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_10;
    ServantFaceIconComponent__Set_38937964(
      (ServantFaceIconComponent_o *)this,
      item->fields._UserCommandCodeEntity_k__BackingField,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmListViewItemDraw__SetSpriteActive(
        ServantSellConfirmListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B12610 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, isActive);
    byte_4B12610 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
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
  __int64 v12; // x2
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v14; // x19
  UILabel_o *warningLabel; // x1
  ServantSellConfirmListViewItemDraw_o *v16; // x2

  v10 = this;
  if ( (byte_4B12612 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, item, *(_QWORD *)&modeKind);
    this = (ServantSellConfirmListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B12612 = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
LABEL_15:
    warningLabel = v10->fields.warningLabel;
    v16 = (ServantSellConfirmListViewItemDraw_o *)StringLiteral_1/*""*/;
    goto LABEL_16;
  }
  if ( (unsigned int)(modeKind - 1) <= 1 )
  {
    UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL) )
      goto LABEL_12;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, item);
    this = (ServantSellConfirmListViewItemDraw_o *)TutorialFlag__Get_38402052(126, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_12:
      this = (ServantSellConfirmListViewItemDraw_o *)v10->fields.maskSprite;
      if ( this )
      {
        this = (ServantSellConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          goto LABEL_15;
        }
      }
LABEL_17:
      sub_1BCAA3C(this, item);
    }
  }
  v14 = v10->fields.warningLabel;
  this = (ServantSellConfirmListViewItemDraw_o *)ServantSellConfirmListViewItemDraw__GetStatusText(
                                                   this,
                                                   item,
                                                   isServant,
                                                   isCommandCode,
                                                   (const MethodInfo *)isCommandCode);
  warningLabel = v14;
  v16 = this;
LABEL_16:
  ServantSellConfirmListViewItemDraw__SetLabelText(
    this,
    warningLabel,
    (System_String_o *)v16,
    (const MethodInfo *)isServant);
}