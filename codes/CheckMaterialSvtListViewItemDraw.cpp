void __fastcall CheckMaterialSvtListViewItemDraw___ctor(
        CheckMaterialSvtListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall CheckMaterialSvtListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_BFC960[initMode - 1];
}


System_String_o *__fastcall CheckMaterialSvtListViewItemDraw__GetStatusText(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
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

  if ( (byte_4AB970B & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, item);
    sub_1BAB41C(&StringLiteral_11515/*"SELECT_LOCK"*/, v8);
    sub_1BAB41C(&StringLiteral_11511/*"SELECT_FAVORITE"*/, v9);
    sub_1BAB41C(&StringLiteral_12436/*"SUPPORT_MEMBER"*/, v10);
    sub_1BAB41C(&StringLiteral_11505/*"SELECT_CANNOT"*/, v11);
    sub_1BAB41C(&StringLiteral_11506/*"SELECT_CHOICE"*/, v12);
    sub_1BAB41C(&StringLiteral_11529/*"SELECT_SERVANT_EVENT_JOIN"*/, v13);
    sub_1BAB41C(&StringLiteral_11525/*"SELECT_PARTY"*/, v14);
    sub_1BAB41C(&StringLiteral_9295/*"NOT_SELECT_EQUIPED"*/, v15);
    this = (CheckMaterialSvtListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_1/*""*/, v16);
    byte_4AB970B = 1;
  }
  if ( !isServant )
  {
    if ( item )
      goto LABEL_16;
LABEL_11:
    sub_1BAB678(this, item);
  }
  if ( !item )
    goto LABEL_11;
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = &StringLiteral_11529/*"SELECT_SERVANT_EVENT_JOIN"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields.attribute )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = &StringLiteral_11505/*"SELECT_CANNOT"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
LABEL_16:
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = &StringLiteral_11506/*"SELECT_CHOICE"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = &StringLiteral_11515/*"SELECT_LOCK"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  if ( isServant )
  {
    if ( item->fields._IsFavorite_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11511/*"SELECT_FAVORITE"*/;
      return LocalizationManager__Get((System_String_o *)*v18, 0LL);
    }
    if ( item->fields._IsParty_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11525/*"SELECT_PARTY"*/;
      return LocalizationManager__Get((System_String_o *)*v18, 0LL);
    }
    if ( item->fields._IsUseSupportServant_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_12436/*"SUPPORT_MEMBER"*/;
      return LocalizationManager__Get((System_String_o *)*v18, 0LL);
    }
  }
  if ( isCommandCode && item->fields._IsCommandCodeEquipped_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = &StringLiteral_9295/*"NOT_SELECT_EQUIPED"*/;
    return LocalizationManager__Get((System_String_o *)*v18, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall CheckMaterialSvtListViewItemDraw__SetDisp(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewItemDraw_o *v5; // x20
  _BOOL8 IsSelect; // x0
  const MethodInfo *v8; // x3
  UISprite_o *lockSprite; // x1
  CheckMaterialSvtListViewItemDraw_o *v10; // x0
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x3
  UISprite_o *maskSprite; // x1
  bool v15; // w2
  CheckMaterialSvtListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x3
  UISprite_o *v18; // x22
  const MethodInfo *v19; // x1

  if ( !item )
    goto LABEL_11;
  v5 = this;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  lockSprite = v5->fields.lockSprite;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
    CheckMaterialSvtListViewItemDraw__SetSpriteActive((CheckMaterialSvtListViewItemDraw_o *)IsSelect, lockSprite, 0, v8);
    CheckMaterialSvtListViewItemDraw__SetSpriteActive(v10, v5->fields.choiceSprite, 0, v11);
    maskSprite = v5->fields.maskSprite;
    v15 = 0;
  }
  else
  {
    CheckMaterialSvtListViewItemDraw__SetSpriteActive(
      (CheckMaterialSvtListViewItemDraw_o *)IsSelect,
      lockSprite,
      item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
      v8);
    CheckMaterialSvtListViewItemDraw__SetSpriteActive(
      v16,
      v5->fields.choiceSprite,
      item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
      v17);
    v18 = v5->fields.maskSprite;
    v12 = CheckMaterialSvtListViewItem__get_IsCanNotSelect(item, v19);
    if ( !v12 && !isSelectEnable )
      v12 = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    v15 = v12;
    maskSprite = v18;
  }
  CheckMaterialSvtListViewItemDraw__SetSpriteActive((CheckMaterialSvtListViewItemDraw_o *)v12, maskSprite, v15, v13);
  this = (CheckMaterialSvtListViewItemDraw_o *)v5->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0LL),
        (this = (CheckMaterialSvtListViewItemDraw_o *)v5->fields.dragSelect) == 0LL) )
  {
LABEL_11:
    sub_1BAB678(this, item);
  }
  DragSelectComponent__Set(
    (DragSelectComponent_o *)this,
    item->fields.selectNum,
    item->fields._DragSelectNum_k__BackingField,
    0LL);
}


void __fastcall CheckMaterialSvtListViewItemDraw__SetInput(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct UICommonButton_o *v10; // x0

  if ( (byte_4AB970C & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, item);
    byte_4AB970C = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1BAB678(v10, v8);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v10->klass->vtable._14_SetState.method)(
      v10,
      0LL,
      1LL,
      v10->klass->vtable._15_OnPress.methodPtr);
  }
  if ( item )
    CheckMaterialSvtListViewItemDraw__SetDisp(this, item, isSelectEnable, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewItemDraw__SetItem(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
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

  if ( (byte_4AB9707 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, item);
    byte_4AB9707 = 1;
  }
  if ( item )
  {
    if ( dispMode )
    {
      UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
      UserCommandCodeEntity_k__BackingField = item->fields._UserCommandCodeEntity_k__BackingField;
      if ( UserServantEntity_k__BackingField || UserCommandCodeEntity_k__BackingField )
      {
        CheckMaterialSvtListViewItemDraw__SetServantFaceIcon(
          this,
          item,
          UserServantEntity_k__BackingField != 0LL,
          UserCommandCodeEntity_k__BackingField != 0LL,
          *(const MethodInfo **)&modeKind);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v14 = UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
        if ( v14 )
        {
          v16 = this->fields.partyIcon;
          if ( UserServantEntity_k__BackingField && !item->fields._IsUse_k__BackingField )
          {
            IsParty_k__BackingField = item->fields._IsParty_k__BackingField;
            if ( !v16 )
              goto LABEL_24;
          }
          else
          {
            IsParty_k__BackingField = 0LL;
            if ( !v16 )
              goto LABEL_24;
          }
          FlashingIconComponent__Set_38506036(v16, IsParty_k__BackingField, 0LL);
        }
        CheckMaterialSvtListViewItemDraw__SetSpriteActive(
          (CheckMaterialSvtListViewItemDraw_o *)v14,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v15);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_24:
            sub_1BAB678(v16, IsParty_k__BackingField);
          }
          ((void (__fastcall *)(FlashingIconComponent_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))v16->klass[1]._1.implementedInterfaces)(
            v16,
            0LL,
            1LL,
            v16->klass[1]._1.interfaceOffsets);
        }
        CheckMaterialSvtListViewItemDraw__SetDisp(this, item, isSelectEnable, v19);
        CheckMaterialSvtListViewItemDraw__SetWarningText(
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


void __fastcall CheckMaterialSvtListViewItemDraw__SetLabelText(
        CheckMaterialSvtListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4AB9709 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, label);
    byte_4AB9709 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BAB678(v6, v7);
    UILabel__set_text(label, text, 0LL);
  }
}


void __fastcall CheckMaterialSvtListViewItemDraw__SetServantFaceIcon(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  if ( isServant )
  {
    if ( item )
    {
      this = (CheckMaterialSvtListViewItemDraw_o *)this->fields.servantFaceIcon;
      if ( this )
      {
        ServantFaceIconComponent__Set_38600628(
          (ServantFaceIconComponent_o *)this,
          item->fields._UserServantEntity_k__BackingField,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0LL);
        return;
      }
    }
LABEL_10:
    sub_1BAB678(this, item);
  }
  if ( isCommandCode )
  {
    if ( !item )
      goto LABEL_10;
    this = (CheckMaterialSvtListViewItemDraw_o *)this->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_10;
    ServantFaceIconComponent__Set_38607340(
      (ServantFaceIconComponent_o *)this,
      item->fields._UserCommandCodeEntity_k__BackingField,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
  }
}


void __fastcall CheckMaterialSvtListViewItemDraw__SetSpriteActive(
        CheckMaterialSvtListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4AB9708 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, sprite);
    byte_4AB9708 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1BAB678(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewItemDraw__SetWarningText(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
        int32_t modeKind,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewItemDraw_o *v10; // x19
  __int64 v11; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v13; // x19
  UILabel_o *warningLabel; // x1
  CheckMaterialSvtListViewItemDraw_o *v15; // x2

  v10 = this;
  if ( (byte_4AB970A & 1) == 0 )
  {
    sub_1BAB41C(&TutorialFlag_TypeInfo, item);
    this = (CheckMaterialSvtListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_1/*""*/, v11);
    byte_4AB970A = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
LABEL_15:
    warningLabel = v10->fields.warningLabel;
    v15 = (CheckMaterialSvtListViewItemDraw_o *)StringLiteral_1/*""*/;
    goto LABEL_16;
  }
  if ( (unsigned int)(modeKind - 1) <= 1 )
  {
    UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL) )
      goto LABEL_12;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    this = (CheckMaterialSvtListViewItemDraw_o *)TutorialFlag__Get_38072332(126, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_12:
      this = (CheckMaterialSvtListViewItemDraw_o *)v10->fields.maskSprite;
      if ( this )
      {
        this = (CheckMaterialSvtListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          goto LABEL_15;
        }
      }
LABEL_17:
      sub_1BAB678(this, item);
    }
  }
  v13 = v10->fields.warningLabel;
  this = (CheckMaterialSvtListViewItemDraw_o *)CheckMaterialSvtListViewItemDraw__GetStatusText(
                                                 this,
                                                 item,
                                                 isServant,
                                                 isCommandCode,
                                                 (const MethodInfo *)isCommandCode);
  warningLabel = v13;
  v15 = this;
LABEL_16:
  CheckMaterialSvtListViewItemDraw__SetLabelText(
    this,
    warningLabel,
    (System_String_o *)v15,
    (const MethodInfo *)isServant);
}