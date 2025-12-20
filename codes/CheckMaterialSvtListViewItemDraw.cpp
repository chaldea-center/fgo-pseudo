void CheckMaterialSvtListViewItemDraw___ctor(CheckMaterialSvtListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t CheckMaterialSvtListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_D31248[initMode - 1];
}


System_String_o *CheckMaterialSvtListViewItemDraw__GetStatusText(
        CheckMaterialSvtListViewItemDraw_o *this,
        CheckMaterialSvtListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  __int64 *v8; // x8

  if ( (byte_4D265C2 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11586/*"SELECT_LOCK"*/);
    sub_1C94098(&StringLiteral_11575/*"SELECT_FAVORITE"*/);
    sub_1C94098(&StringLiteral_12567/*"SUPPORT_MEMBER"*/);
    sub_1C94098(&StringLiteral_11568/*"SELECT_CANNOT"*/);
    sub_1C94098(&StringLiteral_11569/*"SELECT_CHOICE"*/);
    sub_1C94098(&StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C94098(&StringLiteral_11596/*"SELECT_PARTY"*/);
    sub_1C94098(&StringLiteral_9338/*"NOT_SELECT_EQUIPED"*/);
    this = (CheckMaterialSvtListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D265C2 = 1;
  }
  if ( !isServant )
  {
    if ( item )
      goto LABEL_12;
LABEL_10:
    sub_1C942F0(this, item);
  }
  if ( !item )
    goto LABEL_10;
  if ( CheckMaterialSvtListViewItem__get_IsEventJoin(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0);
  }
  if ( !CheckMaterialSvtListViewItem__get_IsSellEnableServant(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0);
  }
LABEL_12:
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11569/*"SELECT_CHOICE"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0);
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11586/*"SELECT_LOCK"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0);
  }
  if ( isServant )
  {
    if ( item->fields._IsFavorite_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11575/*"SELECT_FAVORITE"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    }
    if ( item->fields._IsParty_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_11596/*"SELECT_PARTY"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    }
    if ( item->fields._IsUseSupportServant_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_12567/*"SUPPORT_MEMBER"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    }
  }
  if ( isCommandCode && item->fields._IsCommandCodeEquipped_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_9338/*"NOT_SELECT_EQUIPED"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0);
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
  UISprite_o *lockSprite; // x22
  CheckMaterialSvtListViewItemDraw_o *v10; // x0
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x3
  UISprite_o *maskSprite; // x1
  bool v15; // w2
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x3
  UISprite_o *choiceSprite; // x22
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x3
  UISprite_o *v21; // x22

  if ( !item )
    goto LABEL_11;
  v5 = this;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  lockSprite = v5->fields.lockSprite;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
    CheckMaterialSvtListViewItemDraw__SetSpriteActive(
      (CheckMaterialSvtListViewItemDraw_o *)IsSelect,
      v5->fields.lockSprite,
      0,
      v8);
    CheckMaterialSvtListViewItemDraw__SetSpriteActive(v10, v5->fields.choiceSprite, 0, v11);
    maskSprite = v5->fields.maskSprite;
    v15 = 0;
  }
  else
  {
    v16 = CheckMaterialSvtListViewItem__get_IsDispLock(item, 0);
    CheckMaterialSvtListViewItemDraw__SetSpriteActive((CheckMaterialSvtListViewItemDraw_o *)v16, lockSprite, v16, v17);
    choiceSprite = v5->fields.choiceSprite;
    v19 = CheckMaterialSvtListViewItem__get_IsDispChoice(item, 0);
    CheckMaterialSvtListViewItemDraw__SetSpriteActive((CheckMaterialSvtListViewItemDraw_o *)v19, choiceSprite, v19, v20);
    v21 = v5->fields.maskSprite;
    v12 = CheckMaterialSvtListViewItem__get_IsCanNotSelect(item, 0);
    if ( !v12 && !isSelectEnable )
      v12 = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
    v15 = v12;
    maskSprite = v21;
  }
  CheckMaterialSvtListViewItemDraw__SetSpriteActive((CheckMaterialSvtListViewItemDraw_o *)v12, maskSprite, v15, v13);
  this = (CheckMaterialSvtListViewItemDraw_o *)v5->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0),
        (this = (CheckMaterialSvtListViewItemDraw_o *)v5->fields.dragSelect) == 0) )
  {
LABEL_11:
    sub_1C942F0(this, item);
  }
  DragSelectComponent__Set(
    (DragSelectComponent_o *)this,
    item->fields.selectNum,
    item->fields._DragSelectNum_k__BackingField,
    0);
}


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

  if ( (byte_4D265C3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D265C3 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C942F0(v10, v8);
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


void CheckMaterialSvtListViewItemDraw__SetLabelText(
        CheckMaterialSvtListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D265C0 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D265C0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C942F0(v6, v7);
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
        ServantFaceIconComponent__Set_41844968(
          (ServantFaceIconComponent_o *)this,
          item->fields._UserServantEntity_k__BackingField,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C942F0(this, item);
  }
  if ( isCommandCode )
  {
    if ( !item )
      goto LABEL_10;
    this = (CheckMaterialSvtListViewItemDraw_o *)this->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_10;
    ServantFaceIconComponent__Set_41852436(
      (ServantFaceIconComponent_o *)this,
      item->fields._UserCommandCodeEntity_k__BackingField,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
  }
}


void CheckMaterialSvtListViewItemDraw__SetSpriteActive(
        CheckMaterialSvtListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4D265BF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D265BF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_1C942F0(gameObject, v7);
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
  UILabel_o *v11; // x1
  CheckMaterialSvtListViewItemDraw_o *v12; // x2
  UILabel_o *warningLabel; // x19

  v10 = this;
  if ( (byte_4D265C1 & 1) == 0 )
  {
    sub_1C94098(&TutorialFlag_TypeInfo);
    this = (CheckMaterialSvtListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D265C1 = 1;
  }
  if ( !item )
    goto LABEL_16;
  if ( !item->fields._IsCommandCode_k__BackingField )
  {
    if ( (unsigned int)(modeKind - 1) > 1 )
      goto LABEL_11;
    if ( CheckMaterialSvtListViewItem__get_IsHeroine(item, 0) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      this = (CheckMaterialSvtListViewItemDraw_o *)TutorialFlag__Get_41176064(126, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_11:
        warningLabel = v10->fields.warningLabel;
        this = (CheckMaterialSvtListViewItemDraw_o *)CheckMaterialSvtListViewItemDraw__GetStatusText(
                                                       this,
                                                       item,
                                                       isServant,
                                                       isCommandCode,
                                                       (const MethodInfo *)isCommandCode);
        v11 = warningLabel;
        v12 = this;
        goto LABEL_12;
      }
    }
    this = (CheckMaterialSvtListViewItemDraw_o *)v10->fields.maskSprite;
    if ( this )
    {
      this = (CheckMaterialSvtListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        goto LABEL_5;
      }
    }
LABEL_16:
    sub_1C942F0(this, item);
  }
LABEL_5:
  v11 = v10->fields.warningLabel;
  v12 = (CheckMaterialSvtListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_12:
  CheckMaterialSvtListViewItemDraw__SetLabelText(this, v11, (System_String_o *)v12, (const MethodInfo *)isServant);
}