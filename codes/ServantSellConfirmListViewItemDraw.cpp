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
    return dword_32A51D0[initMode - 1];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSellConfirmListViewItemDraw__GetStatusText(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  __int64 *v36; // x8

  if ( (byte_42EAA94 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, isServant, isCommandCode);
    sub_B5D5C4(&StringLiteral_11762/*"SELECT_LOCK"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11758/*"SELECT_FAVORITE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12650/*"SUPPORT_MEMBER"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11754/*"SELECT_CHOICE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_11772/*"SELECT_PARTY"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9442/*"NOT_SELECT_EQUIPED"*/, v29, v30, v31);
    this = (ServantSellConfirmListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v32, v33, v34);
    byte_42EAA94 = 1;
  }
  if ( !isServant )
  {
    if ( item )
      goto LABEL_18;
LABEL_12:
    sub_B5D69C(this, item);
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
    v36 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
    return LocalizationManager__Get((System_String_o *)*v36, 0LL);
  }
  if ( item->fields.attribute )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
    return LocalizationManager__Get((System_String_o *)*v36, 0LL);
  }
LABEL_18:
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = &StringLiteral_11754/*"SELECT_CHOICE"*/;
    return LocalizationManager__Get((System_String_o *)*v36, 0LL);
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = &StringLiteral_11762/*"SELECT_LOCK"*/;
    return LocalizationManager__Get((System_String_o *)*v36, 0LL);
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
      v36 = &StringLiteral_11758/*"SELECT_FAVORITE"*/;
      return LocalizationManager__Get((System_String_o *)*v36, 0LL);
    }
    if ( item->fields._IsParty_k__BackingField )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = &StringLiteral_11772/*"SELECT_PARTY"*/;
      return LocalizationManager__Get((System_String_o *)*v36, 0LL);
    }
    if ( item->fields._IsUseSupportServant_k__BackingField )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = &StringLiteral_12650/*"SUPPORT_MEMBER"*/;
      return LocalizationManager__Get((System_String_o *)*v36, 0LL);
    }
  }
  if ( isCommandCode && item->fields._IsCommandCodeEquipped_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = &StringLiteral_9442/*"NOT_SELECT_EQUIPED"*/;
    return LocalizationManager__Get((System_String_o *)*v36, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ServantSellConfirmListViewItemDraw__SetDisp(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  ServantSellConfirmListViewItemDraw_o *v6; // x20
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  _BOOL8 IsSelect; // x0
  const MethodInfo *v14; // x3
  UISprite_o *lockSprite; // x1
  ServantSellConfirmListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x3
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v19; // x3
  UISprite_o *maskSprite; // x1
  bool v21; // w2
  ServantSellConfirmListViewItemDraw_o *v22; // x0
  const MethodInfo *v23; // x3
  UISprite_o *v24; // x22
  const MethodInfo *v25; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x3
  UISprite_o *v29; // x21

  v6 = this;
  if ( (byte_42EAA96 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, isSelectEnable, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    this = (ServantSellConfirmListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v10, v11, v12);
    byte_42EAA96 = 1;
  }
  if ( !item )
    goto LABEL_22;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  lockSprite = v6->fields.lockSprite;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)IsSelect,
      lockSprite,
      0,
      v14);
    ServantSellConfirmListViewItemDraw__SetSpriteActive(v16, v6->fields.choiceSprite, 0, v17);
    maskSprite = v6->fields.maskSprite;
    v21 = 0;
  }
  else
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)IsSelect,
      lockSprite,
      item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
      v14);
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      v22,
      v6->fields.choiceSprite,
      item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
      v23);
    v24 = v6->fields.maskSprite;
    CanNotSelect = ServantSellConfirmListViewItem__get_IsCanNotSelect(item, v25);
    if ( !CanNotSelect && !isSelectEnable )
      CanNotSelect = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    v21 = CanNotSelect;
    maskSprite = v24;
  }
  ServantSellConfirmListViewItemDraw__SetSpriteActive(
    (ServantSellConfirmListViewItemDraw_o *)CanNotSelect,
    maskSprite,
    v21,
    v19);
  materialTdSprite = (UnityEngine_Object_o *)v6->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v27 = UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL);
  if ( v27 )
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)v27,
      v6->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v28);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v29 = v6->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v29, (System_String_o *)StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, 0LL);
    }
  }
  this = (ServantSellConfirmListViewItemDraw_o *)v6->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0LL),
        (this = (ServantSellConfirmListViewItemDraw_o *)v6->fields.dragSelect) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(this, item);
  }
  DragSelectComponent__Set(
    (DragSelectComponent_o *)this,
    item->fields.selectNum,
    item->fields._DragSelectNum_k__BackingField,
    0LL);
}


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

  if ( (byte_42EAA95 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, isSelectEnable, method);
    byte_42EAA95 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
      sub_B5D69C(v10, v8);
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
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  FlashingIconComponent_o *v16; // x0
  _BOOL8 IsParty_k__BackingField; // x1
  UnityEngine_Object_o *baseButton; // x23
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x5

  if ( (byte_42EAA90 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, dispMode, isSelectEnable);
    byte_42EAA90 = 1;
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
            IsParty_k__BackingField = 0LL;
            if ( !v16 )
              goto LABEL_26;
          }
          FlashingIconComponent__Set_21625204(v16, IsParty_k__BackingField, 0LL);
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
          v16 = (FlashingIconComponent_o *)this->fields.baseButton;
          if ( !v16
            || (((void (__fastcall *)(FlashingIconComponent_o *, __int64, void *))v16->klass[1]._1.namespaze)(
                  v16,
                  1LL,
                  v16->klass[1]._1.byval_arg.data),
                (v16 = (FlashingIconComponent_o *)this->fields.baseButton) == 0LL) )
          {
LABEL_26:
            sub_B5D69C(v16, IsParty_k__BackingField);
          }
          ((void (__fastcall *)(FlashingIconComponent_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))v16->klass[1]._1.implementedInterfaces)(
            v16,
            0LL,
            1LL,
            v16->klass[1]._1.interfaceOffsets);
        }
        ServantSellConfirmListViewItemDraw__SetDisp(this, item, isSelectEnable, v19);
        ServantSellConfirmListViewItemDraw__SetWarningText(
          this,
          item,
          modeKind,
          UserServantEntity_k__BackingField != 0LL,
          UserCommandCodeEntity_k__BackingField != 0LL,
          v20);
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

  if ( (byte_42EAA92 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)text, method);
    byte_42EAA92 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_B5D69C(v6, v7);
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
        ServantFaceIconComponent__Set_30775392(
          (ServantFaceIconComponent_o *)this,
          item->fields._UserServantEntity_k__BackingField,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0LL);
        return;
      }
    }
LABEL_10:
    sub_B5D69C(this, item);
  }
  if ( isCommandCode )
  {
    if ( !item )
      goto LABEL_10;
    this = (ServantSellConfirmListViewItemDraw_o *)this->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_10;
    ServantFaceIconComponent__Set_30855448(
      (ServantFaceIconComponent_o *)this,
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
  __int64 v7; // x1

  if ( (byte_42EAA91 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, isActive, method);
    byte_42EAA91 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B5D69C(gameObject, v7);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v15; // x19
  UILabel_o *warningLabel; // x1
  System_String_o *v17; // x2

  v10 = this;
  if ( (byte_42EAA93 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)item, modeKind, isServant);
    this = (ServantSellConfirmListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42EAA93 = 1;
  }
  if ( !item )
    goto LABEL_18;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
LABEL_16:
    warningLabel = v10->fields.warningLabel;
    v17 = (System_String_o *)StringLiteral_1/*""*/;
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
    this = (ServantSellConfirmListViewItemDraw_o *)TutorialFlag__Get_29295864(126, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_13:
      this = (ServantSellConfirmListViewItemDraw_o *)v10->fields.maskSprite;
      if ( this )
      {
        this = (ServantSellConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          goto LABEL_16;
        }
      }
LABEL_18:
      sub_B5D69C(this, item);
    }
  }
  v15 = v10->fields.warningLabel;
  this = (ServantSellConfirmListViewItemDraw_o *)ServantSellConfirmListViewItemDraw__GetStatusText(
                                                   this,
                                                   item,
                                                   isServant,
                                                   isCommandCode,
                                                   (const MethodInfo *)isCommandCode);
  warningLabel = v15;
  v17 = (System_String_o *)this;
LABEL_17:
  ServantSellConfirmListViewItemDraw__SetLabelText(this, warningLabel, v17, (const MethodInfo *)isServant);
}