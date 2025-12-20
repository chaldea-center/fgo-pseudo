void ServantSellConfirmListViewItemDraw___ctor(ServantSellConfirmListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantSellConfirmListViewItemDraw__Awake(ServantSellConfirmListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


int32_t ServantSellConfirmListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_D31248[initMode - 1];
}


System_String_o *ServantSellConfirmListViewItemDraw__GetStatusText(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  __int64 *v9; // x8

  if ( (byte_4D28805 & 1) == 0 )
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
    this = (ServantSellConfirmListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28805 = 1;
  }
  if ( !isServant )
  {
    if ( item )
      goto LABEL_16;
LABEL_11:
    sub_1C942F0(this, item);
  }
  if ( !item )
    goto LABEL_11;
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
  if ( item->fields.attribute )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
LABEL_16:
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11569/*"SELECT_CHOICE"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11586/*"SELECT_LOCK"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
  if ( isServant )
  {
    if ( item->fields._IsFavorite_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_11575/*"SELECT_FAVORITE"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
    if ( item->fields._IsParty_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_11596/*"SELECT_PARTY"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
    if ( item->fields._IsUseSupportServant_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_12567/*"SUPPORT_MEMBER"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
  }
  if ( isCommandCode && item->fields._IsCommandCodeEquipped_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_9338/*"NOT_SELECT_EQUIPED"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void ServantSellConfirmListViewItemDraw__SetDisp(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  ServantSellConfirmListViewItemDraw_o *v6; // x20
  _BOOL8 IsSelect; // x0
  const MethodInfo *v8; // x3
  UISprite_o *lockSprite; // x1
  ServantSellConfirmListViewItemDraw_o *v10; // x0
  const MethodInfo *v11; // x3
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v13; // x3
  UISprite_o *maskSprite; // x1
  bool v15; // w2
  ServantSellConfirmListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x3
  UISprite_o *v18; // x22
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x3
  UISprite_o *v23; // x21

  v6 = this;
  if ( (byte_4D28807 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (ServantSellConfirmListViewItemDraw_o *)sub_1C94098(&StringLiteral_23341/*"ribbon_noblephantasmup_01"*/);
    byte_4D28807 = 1;
  }
  if ( !item )
    goto LABEL_20;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  lockSprite = v6->fields.lockSprite;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)IsSelect,
      lockSprite,
      0,
      v8);
    ServantSellConfirmListViewItemDraw__SetSpriteActive(v10, v6->fields.choiceSprite, 0, v11);
    maskSprite = v6->fields.maskSprite;
    v15 = 0;
  }
  else
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)IsSelect,
      lockSprite,
      item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
      v8);
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      v16,
      v6->fields.choiceSprite,
      item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
      v17);
    v18 = v6->fields.maskSprite;
    CanNotSelect = ServantSellConfirmListViewItem__get_IsCanNotSelect(item, v19);
    if ( !CanNotSelect && !isSelectEnable )
      CanNotSelect = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
    v15 = CanNotSelect;
    maskSprite = v18;
  }
  ServantSellConfirmListViewItemDraw__SetSpriteActive(
    (ServantSellConfirmListViewItemDraw_o *)CanNotSelect,
    maskSprite,
    v15,
    v13);
  materialTdSprite = (UnityEngine_Object_o *)v6->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0);
  if ( v21 )
  {
    ServantSellConfirmListViewItemDraw__SetSpriteActive(
      (ServantSellConfirmListViewItemDraw_o *)v21,
      v6->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v22);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v23 = v6->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_23341/*"ribbon_noblephantasmup_01"*/, 0);
    }
  }
  this = (ServantSellConfirmListViewItemDraw_o *)v6->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0),
        (this = (ServantSellConfirmListViewItemDraw_o *)v6->fields.dragSelect) == 0) )
  {
LABEL_20:
    sub_1C942F0(this, item);
  }
  DragSelectComponent__Set(
    (DragSelectComponent_o *)this,
    item->fields.selectNum,
    item->fields._DragSelectNum_k__BackingField,
    0);
}


void ServantSellConfirmListViewItemDraw__SetInput(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct UICommonButton_o *v10; // x0

  if ( (byte_4D28806 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28806 = 1;
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
    ServantSellConfirmListViewItemDraw__SetDisp(this, item, isSelectEnable, v9);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellConfirmListViewItemDraw__SetItem(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        int32_t dispMode,
        bool isSelectEnable,
        int32_t modeKind,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x24
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x25
  _BOOL8 IsParty_k__BackingField; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *baseButton; // x23
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x5

  if ( (byte_4D28801 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28801 = 1;
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
          UserServantEntity_k__BackingField != 0,
          UserCommandCodeEntity_k__BackingField != 0,
          *(const MethodInfo **)&modeKind);
        servantFaceIcon = this->fields.servantFaceIcon;
        if ( !servantFaceIcon )
          goto LABEL_25;
        ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
          servantFaceIcon,
          this->fields.maskSprite,
          this->fields.defaultMaskName,
          this->fields.defaultMaskAtlas,
          0);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v16 = UnityEngine_Object__op_Inequality(partyIcon, 0, 0);
        if ( v16 )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
          if ( UserServantEntity_k__BackingField && !item->fields._IsUse_k__BackingField )
          {
            IsParty_k__BackingField = item->fields._IsParty_k__BackingField;
            if ( !servantFaceIcon )
              goto LABEL_25;
          }
          else
          {
            IsParty_k__BackingField = 0;
            if ( !servantFaceIcon )
              goto LABEL_25;
          }
          FlashingIconComponent__Set_41653568((FlashingIconComponent_o *)servantFaceIcon, IsParty_k__BackingField, 0);
        }
        ServantSellConfirmListViewItemDraw__SetSpriteActive(
          (ServantSellConfirmListViewItemDraw_o *)v16,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v17);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton;
          if ( !servantFaceIcon
            || (((void (__fastcall *)(ServantFaceIconComponent_o *, __int64, const MethodInfo *))servantFaceIcon->klass->vtable._5_UpdateAlpha.methodPtr)(
                  servantFaceIcon,
                  1,
                  servantFaceIcon->klass->vtable._5_UpdateAlpha.method),
                (servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton) == 0) )
          {
LABEL_25:
            sub_1C942F0(servantFaceIcon, IsParty_k__BackingField);
          }
          ((void (__fastcall *)(ServantFaceIconComponent_o *, _QWORD, __int64, void *))servantFaceIcon->klass[1]._1.fields)(
            servantFaceIcon,
            0,
            1,
            servantFaceIcon->klass[1]._1.events);
        }
        ServantSellConfirmListViewItemDraw__SetDisp(this, item, isSelectEnable, v19);
        ServantSellConfirmListViewItemDraw__SetWarningText(
          this,
          item,
          modeKind,
          UserServantEntity_k__BackingField != 0,
          UserCommandCodeEntity_k__BackingField != 0,
          v20);
      }
    }
  }
}


void ServantSellConfirmListViewItemDraw__SetLabelText(
        ServantSellConfirmListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D28803 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28803 = 1;
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


void ServantSellConfirmListViewItemDraw__SetServantFaceIcon(
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
    this = (ServantSellConfirmListViewItemDraw_o *)this->fields.servantFaceIcon;
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


void ServantSellConfirmListViewItemDraw__SetSpriteActive(
        ServantSellConfirmListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4D28802 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28802 = 1;
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
void ServantSellConfirmListViewItemDraw__SetWarningText(
        ServantSellConfirmListViewItemDraw_o *this,
        ServantSellConfirmListViewItem_o *item,
        int32_t modeKind,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  ServantSellConfirmListViewItemDraw_o *v10; // x19
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v12; // x19
  UILabel_o *warningLabel; // x1
  ServantSellConfirmListViewItemDraw_o *v14; // x2

  v10 = this;
  if ( (byte_4D28804 & 1) == 0 )
  {
    sub_1C94098(&TutorialFlag_TypeInfo);
    this = (ServantSellConfirmListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28804 = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( item->fields._IsCommandCode_k__BackingField )
  {
LABEL_15:
    warningLabel = v10->fields.warningLabel;
    v14 = (ServantSellConfirmListViewItemDraw_o *)StringLiteral_1/*""*/;
    goto LABEL_16;
  }
  if ( (unsigned int)(modeKind - 1) <= 1 )
  {
    UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0) )
      goto LABEL_12;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    this = (ServantSellConfirmListViewItemDraw_o *)TutorialFlag__Get_41176064(126, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_12:
      this = (ServantSellConfirmListViewItemDraw_o *)v10->fields.maskSprite;
      if ( this )
      {
        this = (ServantSellConfirmListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          goto LABEL_15;
        }
      }
LABEL_17:
      sub_1C942F0(this, item);
    }
  }
  v12 = v10->fields.warningLabel;
  this = (ServantSellConfirmListViewItemDraw_o *)ServantSellConfirmListViewItemDraw__GetStatusText(
                                                   this,
                                                   item,
                                                   isServant,
                                                   isCommandCode,
                                                   (const MethodInfo *)isCommandCode);
  warningLabel = v12;
  v14 = this;
LABEL_16:
  ServantSellConfirmListViewItemDraw__SetLabelText(
    this,
    warningLabel,
    (System_String_o *)v14,
    (const MethodInfo *)isServant);
}