void CheckMaterialSvtListViewItemDraw___ctor(CheckMaterialSvtListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t CheckMaterialSvtListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_ED8B08[initMode - 1];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CheckMaterialSvtListViewItemDraw__GetStatusText(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  __int64 *v9; // x8

  if ( (byte_596A1E8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12047/*"SELECT_LOCK"*/);
    sub_2213A60(&StringLiteral_12036/*"SELECT_FAVORITE"*/);
    sub_2213A60(&StringLiteral_13039/*"SUPPORT_MEMBER"*/);
    sub_2213A60(&StringLiteral_12029/*"SELECT_CANNOT"*/);
    sub_2213A60(&StringLiteral_12030/*"SELECT_CHOICE"*/);
    sub_2213A60(&StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_2213A60(&StringLiteral_12057/*"SELECT_PARTY"*/);
    sub_2213A60(&StringLiteral_9703/*"NOT_SELECT_EQUIPED"*/);
    this = (CheckMaterialSvtListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1E8 = 1;
  }
  if ( !isServant )
  {
    if ( item )
      goto LABEL_16;
LABEL_11:
    sub_2213CDC(this, item);
  }
  if ( !item )
    goto LABEL_11;
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isServant);
    v9 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
  if ( item->fields.attribute )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isServant);
    v9 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
LABEL_16:
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isServant);
    v9 = &StringLiteral_12030/*"SELECT_CHOICE"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isServant);
    v9 = &StringLiteral_12047/*"SELECT_LOCK"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
  if ( isServant )
  {
    if ( item->fields._IsFavorite_k__BackingField )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isServant);
      v9 = &StringLiteral_12036/*"SELECT_FAVORITE"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
    if ( item->fields._IsParty_k__BackingField )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isServant);
      v9 = &StringLiteral_12057/*"SELECT_PARTY"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
    if ( item->fields._IsUseSupportServant_k__BackingField )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isServant);
      v9 = &StringLiteral_13039/*"SUPPORT_MEMBER"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
  }
  if ( isCommandCode && item->fields._IsCommandCodeEquipped_k__BackingField )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isServant);
    v9 = &StringLiteral_9703/*"NOT_SELECT_EQUIPED"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void CheckMaterialSvtListViewItemDraw__SetDisp(
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
  bool v16; // w2
  CheckMaterialSvtListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  bool v19; // w2
  UISprite_o *v20; // x22
  const MethodInfo *v21; // x1

  if ( !item )
    goto LABEL_17;
  v5 = this;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
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
    v16 = item->fields._IsSwapLock_k__BackingField
        ? !item->fields._IsLock_k__BackingField
        : item->fields._IsLock_k__BackingField;
    CheckMaterialSvtListViewItemDraw__SetSpriteActive(
      (CheckMaterialSvtListViewItemDraw_o *)IsSelect,
      lockSprite,
      v16,
      v8);
    v19 = item->fields._IsSwapChoice_k__BackingField
        ? !item->fields._IsChoice_k__BackingField
        : item->fields._IsChoice_k__BackingField;
    CheckMaterialSvtListViewItemDraw__SetSpriteActive(v17, v5->fields.choiceSprite, v19, v18);
    v20 = v5->fields.maskSprite;
    v12 = CheckMaterialSvtListViewItem__get_IsCanNotSelect(item, v21);
    if ( !v12 && !isSelectEnable )
      v12 = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
    v15 = v12;
    maskSprite = v20;
  }
  CheckMaterialSvtListViewItemDraw__SetSpriteActive((CheckMaterialSvtListViewItemDraw_o *)v12, maskSprite, v15, v13);
  this = (CheckMaterialSvtListViewItemDraw_o *)v5->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0),
        (this = (CheckMaterialSvtListViewItemDraw_o *)v5->fields.dragSelect) == 0) )
  {
LABEL_17:
    sub_2213CDC(this, item);
  }
  DragSelectComponent__Set(
    (DragSelectComponent_o *)this,
    item->fields.selectNum,
    item->fields._DragSelectNum_k__BackingField,
    0);
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtListViewItemDraw__SetInput(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct UICommonButton_o *v10; // x0

  if ( (byte_596A1E9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A1E9 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isSelectEnable);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    v10 = this->fields.baseButton;
    if ( !v10
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, const MethodInfo *))v10->klass->vtable._5_set_isEnabled.methodPtr)(
            v10,
            1,
            v10->klass->vtable._5_set_isEnabled.method),
          (v10 = this->fields.baseButton) == 0) )
    {
      sub_2213CDC(v10, v8);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v10->klass->vtable._14_SetState.methodPtr)(
      v10,
      0,
      1,
      v10->klass->vtable._14_SetState.method);
  }
  if ( item )
    CheckMaterialSvtListViewItemDraw__SetDisp(this, item, isSelectEnable, v9);
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtListViewItemDraw__SetItem(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
        int32_t dispMode,
        bool isSelectEnable,
        int32_t modeKind,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x24
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x25
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x3
  FlashingIconComponent_o *v18; // x0
  _BOOL8 IsParty_k__BackingField; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *baseButton; // x23
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x5

  if ( (byte_596A1E4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A1E4 = 1;
  }
  if ( item )
  {
    if ( dispMode )
    {
      UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
      UserCommandCodeEntity_k__BackingField = item->fields._UserCommandCodeEntity_k__BackingField;
      if ( (unsigned __int64)UserServantEntity_k__BackingField | (unsigned __int64)UserCommandCodeEntity_k__BackingField )
      {
        CheckMaterialSvtListViewItemDraw__SetServantFaceIcon(
          this,
          item,
          UserServantEntity_k__BackingField != 0,
          UserCommandCodeEntity_k__BackingField != 0,
          *(const MethodInfo **)&modeKind);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
        v16 = UnityEngine_Object__op_Inequality(partyIcon, 0, 0);
        if ( v16 )
        {
          v18 = this->fields.partyIcon;
          if ( UserServantEntity_k__BackingField && !item->fields._IsUse_k__BackingField )
          {
            IsParty_k__BackingField = item->fields._IsParty_k__BackingField;
            if ( !v18 )
              goto LABEL_23;
          }
          else
          {
            IsParty_k__BackingField = 0;
            if ( !v18 )
              goto LABEL_23;
          }
          FlashingIconComponent__Set_47864696(v18, IsParty_k__BackingField, 0);
        }
        CheckMaterialSvtListViewItemDraw__SetSpriteActive(
          (CheckMaterialSvtListViewItemDraw_o *)v16,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v17);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        {
          v18 = (FlashingIconComponent_o *)this->fields.baseButton;
          if ( !v18
            || (((void (__fastcall *)(FlashingIconComponent_o *, __int64, const char *))v18->klass[1]._1.name)(
                  v18,
                  1,
                  v18->klass[1]._1.namespaze),
                (v18 = (FlashingIconComponent_o *)this->fields.baseButton) == 0) )
          {
LABEL_23:
            sub_2213CDC(v18, IsParty_k__BackingField);
          }
          ((void (__fastcall *)(FlashingIconComponent_o *, _QWORD, __int64, Il2CppClass **))v18->klass[1]._1.nestedTypes)(
            v18,
            0,
            1,
            v18->klass[1]._1.implementedInterfaces);
        }
        CheckMaterialSvtListViewItemDraw__SetDisp(this, item, isSelectEnable, v23);
        CheckMaterialSvtListViewItemDraw__SetWarningText(
          this,
          item,
          modeKind,
          UserServantEntity_k__BackingField != 0,
          UserCommandCodeEntity_k__BackingField != 0,
          v24);
      }
    }
  }
}


void CheckMaterialSvtListViewItemDraw__SetLabelText(
        CheckMaterialSvtListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_596A1E6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A1E6 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, text);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_2213CDC(v6, v7);
    UILabel__set_text(label, text, 0);
  }
}


void CheckMaterialSvtListViewItemDraw__SetServantFaceIcon(
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
        ServantFaceIconComponent__Set_48049524(
          (ServantFaceIconComponent_o *)this,
          item->fields._UserServantEntity_k__BackingField,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          1,
          0);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(this, item);
  }
  if ( isCommandCode )
  {
    if ( !item )
      goto LABEL_10;
    this = (CheckMaterialSvtListViewItemDraw_o *)this->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_10;
    ServantFaceIconComponent__Set_48056984(
      (ServantFaceIconComponent_o *)this,
      item->fields._UserCommandCodeEntity_k__BackingField,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtListViewItemDraw__SetSpriteActive(
        CheckMaterialSvtListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596A1E5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A1E5 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtListViewItemDraw__SetWarningText(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
        int32_t modeKind,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewItemDraw_o *v10; // x19
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  __int64 v12; // x2
  UILabel_o *v13; // x19
  UILabel_o *warningLabel; // x1
  CheckMaterialSvtListViewItemDraw_o *v15; // x2

  v10 = this;
  if ( (byte_596A1E7 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    this = (CheckMaterialSvtListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1E7 = 1;
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
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0) )
      goto LABEL_12;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, item, v12);
    this = (CheckMaterialSvtListViewItemDraw_o *)TutorialFlag__Get_47388504(126, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_12:
      this = (CheckMaterialSvtListViewItemDraw_o *)v10->fields.maskSprite;
      if ( this )
      {
        this = (CheckMaterialSvtListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          goto LABEL_15;
        }
      }
LABEL_17:
      sub_2213CDC(this, item);
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