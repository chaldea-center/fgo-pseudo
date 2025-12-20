void ServantOperationListViewItemDraw___ctor(ServantOperationListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantOperationListViewItemDraw__Awake(ServantOperationListViewItemDraw_o *this, const MethodInfo *method)
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


int32_t ServantOperationListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 2 )
    return 0;
  else
    return dword_D31248[initMode - 1];
}


System_String_o *ServantOperationListViewItemDraw__GetStatusText(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  __int64 *v7; // x8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0

  if ( (byte_4D28788 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_9303/*"NONSELECT_MATERIAL"*/);
    sub_1C94098(&StringLiteral_11586/*"SELECT_LOCK"*/);
    sub_1C94098(&StringLiteral_11575/*"SELECT_FAVORITE"*/);
    sub_1C94098(&StringLiteral_12567/*"SUPPORT_MEMBER"*/);
    sub_1C94098(&StringLiteral_11599/*"SELECT_PUSH"*/);
    sub_1C94098(&StringLiteral_11568/*"SELECT_CANNOT"*/);
    sub_1C94098(&StringLiteral_11569/*"SELECT_CHOICE"*/);
    sub_1C94098(&StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C94098(&StringLiteral_11596/*"SELECT_PARTY"*/);
    sub_1C94098(&StringLiteral_9338/*"NOT_SELECT_EQUIPED"*/);
    sub_1C94098(&StringLiteral_11080/*"RECOMMEND_SUPPORT_MEMBER"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_11598/*"SELECT_PROTECTED_EVENT_SVT"*/);
    this = (ServantOperationListViewItemDraw_o *)sub_1C94098(&StringLiteral_7013/*"GRAND_MEMBER"*/);
    byte_4D28788 = 1;
  }
  if ( !item )
    goto LABEL_64;
  if ( item->fields._IsGrandServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = (System_String_o *)StringLiteral_7013/*"GRAND_MEMBER"*/;
    return LocalizationManager__Get(v6, 0);
  }
  if ( item->fields._IsPush_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11599/*"SELECT_PUSH"*/;
LABEL_53:
    v6 = (System_String_o *)*v7;
    return LocalizationManager__Get(v6, 0);
  }
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
    goto LABEL_53;
  }
  if ( item->fields.attribute )
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
    goto LABEL_53;
  }
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11569/*"SELECT_CHOICE"*/;
    goto LABEL_53;
  }
  if ( item->fields._IsNotSelection_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_9303/*"NONSELECT_MATERIAL"*/;
    goto LABEL_53;
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11586/*"SELECT_LOCK"*/;
    goto LABEL_53;
  }
  if ( item->fields._IsFavorite_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11575/*"SELECT_FAVORITE"*/;
    goto LABEL_53;
  }
  if ( item->fields._IsParty_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11596/*"SELECT_PARTY"*/;
    goto LABEL_53;
  }
  if ( item->fields._IsUseRecommendSupportServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11080/*"RECOMMEND_SUPPORT_MEMBER"*/;
    goto LABEL_53;
  }
  if ( item->fields._IsUseSupportServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_12567/*"SUPPORT_MEMBER"*/;
    goto LABEL_53;
  }
  if ( item->fields._IsCommandCodeEquiped_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_9338/*"NOT_SELECT_EQUIPED"*/;
    goto LABEL_53;
  }
  if ( ServantOperationListViewItem__get_IsProtected(item, (const MethodInfo *)item) )
  {
    this = (ServantOperationListViewItemDraw_o *)item->fields.servantEntity;
    if ( this )
    {
      if ( ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0) )
        goto LABEL_18;
      this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
      if ( this )
      {
        if ( !UserServantEntity__IsNotSaleServant((UserServantEntity_o *)this, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v7 = &StringLiteral_11598/*"SELECT_PROTECTED_EVENT_SVT"*/;
          goto LABEL_53;
        }
        goto LABEL_18;
      }
    }
LABEL_64:
    sub_1C942F0(this, item);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void ServantOperationListViewItemDraw__SetDisp(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  ServantOperationListViewItemDraw_o *v6; // x20
  ServantOperationListViewItemDraw_o *v7; // x0
  const MethodInfo *v8; // x3
  ServantOperationListViewItemDraw_o *v9; // x0
  const MethodInfo *v10; // x3
  ServantOperationListViewItemDraw_o *v11; // x0
  const MethodInfo *v12; // x3
  ServantOperationListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  UISprite_o *maskSprite; // x22
  const MethodInfo *v16; // x1
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x3
  UISprite_o *v22; // x21
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4D2878A & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (ServantOperationListViewItemDraw_o *)sub_1C94098(&StringLiteral_23341/*"ribbon_noblephantasmup_01"*/);
    byte_4D2878A = 1;
  }
  if ( !item )
    goto LABEL_20;
  ServantOperationListViewItemDraw__SetSpriteActive(
    this,
    v6->fields.lockSprite,
    item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
    method);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v7,
    v6->fields.choiceSprite,
    item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
    v8);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v9,
    v6->fields.pushSprite,
    item->fields._IsPush_k__BackingField,
    v10);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v11,
    v6->fields.friendShipSprite,
    item->fields._IsFriendShipSvtEq_k__BackingField,
    v12);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v13,
    v6->fields.chocolateSprite,
    item->fields._IsChocolateSvtEquip_k__BackingField,
    v14);
  maskSprite = v6->fields.maskSprite;
  CanNotSelect = ServantOperationListViewItem__get_IsCanNotSelect(item, v16);
  if ( !CanNotSelect && !isSelectEnable )
    CanNotSelect = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  ServantOperationListViewItemDraw__SetSpriteActive(
    (ServantOperationListViewItemDraw_o *)CanNotSelect,
    maskSprite,
    CanNotSelect,
    v18);
  this = (ServantOperationListViewItemDraw_o *)v6->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_20;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)this, 0);
  materialTdSprite = (UnityEngine_Object_o *)v6->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0);
  if ( v20 )
  {
    ServantOperationListViewItemDraw__SetSpriteActive(
      (ServantOperationListViewItemDraw_o *)v20,
      v6->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v21);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v22 = v6->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v22, (System_String_o *)StringLiteral_23341/*"ribbon_noblephantasmup_01"*/, 0);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        this = (ServantOperationListViewItemDraw_o *)v6->fields.servantFaceIcon;
        if ( !this )
          goto LABEL_20;
        v23.fields.x = 0.65;
        v23.fields.y = 1.0;
        v23.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)this, v23, 0);
      }
    }
  }
  this = (ServantOperationListViewItemDraw_o *)v6->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0),
        (this = (ServantOperationListViewItemDraw_o *)v6->fields.dragSelect) == 0) )
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


void ServantOperationListViewItemDraw__SetInput(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct UICommonButton_o *v10; // x0

  if ( (byte_4D28789 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28789 = 1;
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
    ServantOperationListViewItemDraw__SetDisp(this, item, isSelectEnable, v9);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationListViewItemDraw__SetItem(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        int32_t modeKind,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x25
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x24
  _BOOL8 IsParty_k__BackingField; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *baseButton; // x23
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x5

  if ( (byte_4D28784 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28784 = 1;
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
          UserServantEntity_k__BackingField != 0,
          UserCommandCodeEntity_k__BackingField != 0,
          *(const MethodInfo **)&modeKind);
        servantFaceIcon = this->fields.servantFaceIcon;
        if ( !servantFaceIcon )
          goto LABEL_32;
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
              goto LABEL_32;
          }
          else
          {
            IsParty_k__BackingField = 0;
            if ( !servantFaceIcon )
              goto LABEL_32;
          }
          FlashingIconComponent__Set_41653568((FlashingIconComponent_o *)servantFaceIcon, IsParty_k__BackingField, 0);
        }
        ServantOperationListViewItemDraw__SetSpriteActive(
          (ServantOperationListViewItemDraw_o *)v16,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v17);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton;
          if ( !servantFaceIcon )
            goto LABEL_32;
          ((void (__fastcall *)(ServantFaceIconComponent_o *, __int64, const MethodInfo *))servantFaceIcon->klass->vtable._5_UpdateAlpha.methodPtr)(
            servantFaceIcon,
            1,
            servantFaceIcon->klass->vtable._5_UpdateAlpha.method);
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton;
          if ( !servantFaceIcon )
            goto LABEL_32;
          ((void (__fastcall *)(ServantFaceIconComponent_o *, _QWORD, __int64, void *))servantFaceIcon->klass[1]._1.fields)(
            servantFaceIcon,
            0,
            1,
            servantFaceIcon->klass[1]._1.events);
        }
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationRootObj;
        if ( servantFaceIcon )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationNameLabel;
          if ( servantFaceIcon )
          {
            UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
            servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationDetailNameLabel;
            if ( servantFaceIcon )
            {
              UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationAppointmentLabel;
              if ( servantFaceIcon )
              {
                UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
                if ( servantFaceIcon )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
                  if ( !byte_4D25F1E )
                  {
                    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
                    byte_4D25F1E = 1;
                  }
                  GameObjectExtensions__SetLocalScale(
                    gameObject,
                    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                    0);
                  ServantOperationListViewItemDraw__SetDisp(this, item, isSelectEnable, v20);
                  ServantOperationListViewItemDraw__SetWarningText(
                    this,
                    item,
                    modeKind,
                    UserServantEntity_k__BackingField != 0,
                    UserCommandCodeEntity_k__BackingField != 0,
                    v21);
                  return;
                }
              }
            }
          }
        }
LABEL_32:
        sub_1C942F0(servantFaceIcon, IsParty_k__BackingField);
      }
    }
  }
}


void ServantOperationListViewItemDraw__SetLabelText(
        ServantOperationListViewItemDraw_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D28785 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28785 = 1;
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


void ServantOperationListViewItemDraw__SetServantFaceIcon(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  if ( isServant )
  {
    if ( item )
    {
      this = (ServantOperationListViewItemDraw_o *)this->fields.servantFaceIcon;
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
    this = (ServantOperationListViewItemDraw_o *)this->fields.servantFaceIcon;
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


void ServantOperationListViewItemDraw__SetSpriteActive(
        ServantOperationListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4D28786 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28786 = 1;
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
void ServantOperationListViewItemDraw__SetWarningText(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        int32_t modeKind,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  ServantOperationListViewItemDraw_o *v8; // x19
  UILabel_o *warningLabel; // x19
  __int64 *v10; // x8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v12; // x21
  ServantOperationListViewItemDraw_o *StatusText; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  UILabel_o *fortificationAppointmentLabel; // x20
  ServantOperationListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  UILabel_o *v19; // x1
  System_String_o *v20; // x2

  v8 = this;
  if ( (byte_4D28787 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&TutorialFlag_TypeInfo);
    sub_1C94098(&StringLiteral_6485/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C94098(&StringLiteral_11568/*"SELECT_CANNOT"*/);
    sub_1C94098(&StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/);
    this = (ServantOperationListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28787 = 1;
  }
  if ( (unsigned int)(modeKind - 1) < 2 )
  {
    if ( !item )
      goto LABEL_53;
    UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0) )
      goto LABEL_48;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    this = (ServantOperationListViewItemDraw_o *)TutorialFlag__Get_41176064(126, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_48;
  }
  else if ( modeKind == 3 )
  {
    if ( !item )
      goto LABEL_53;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_53;
    if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0) )
    {
      this = (ServantOperationListViewItemDraw_o *)v8->fields.maskSprite;
      if ( this )
      {
        this = (ServantOperationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          warningLabel = v8->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v10 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_47:
          v17 = (ServantOperationListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v10, 0);
          v19 = warningLabel;
          v20 = (System_String_o *)v17;
LABEL_51:
          ServantOperationListViewItemDraw__SetLabelText(v17, v19, v20, v18);
          return;
        }
      }
      goto LABEL_53;
    }
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_53;
    if ( UserServantEntity__IsLeave((UserServantEntity_o *)this, 0) )
      goto LABEL_42;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_53;
    if ( UserServantEntity__IsCombineMaterial((UserServantEntity_o *)this, 0) )
      goto LABEL_42;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_53;
    if ( UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0) )
      goto LABEL_42;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_53;
    if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0) )
    {
LABEL_42:
      this = (ServantOperationListViewItemDraw_o *)v8->fields.maskSprite;
      if ( this )
      {
        this = (ServantOperationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          warningLabel = v8->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v10 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
          goto LABEL_47;
        }
      }
LABEL_53:
      sub_1C942F0(this, item);
    }
LABEL_48:
    this = (ServantOperationListViewItemDraw_o *)v8->fields.maskSprite;
    if ( this )
    {
      this = (ServantOperationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v19 = v8->fields.warningLabel;
        v20 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_51;
      }
    }
    goto LABEL_53;
  }
  v12 = v8->fields.warningLabel;
  StatusText = (ServantOperationListViewItemDraw_o *)ServantOperationListViewItemDraw__GetStatusText(
                                                       this,
                                                       item,
                                                       0,
                                                       0,
                                                       (const MethodInfo *)isCommandCode);
  ServantOperationListViewItemDraw__SetLabelText(StatusText, v12, (System_String_o *)StatusText, v14);
  if ( !item )
    goto LABEL_53;
  if ( item->fields._IsUseRecommendSupportServant_k__BackingField )
  {
    this = (ServantOperationListViewItemDraw_o *)v8->fields.warningLabel;
    if ( !this )
      goto LABEL_53;
    UILabel__SetCondensedScale((UILabel_o *)this, 106, 0, 0);
  }
  if ( item->fields.isFortification )
  {
    ServantOperationListViewItemDraw__SetLabelText(
      this,
      v8->fields.warningLabel,
      (System_String_o *)StringLiteral_1/*""*/,
      v15);
    this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationRootObj;
    if ( this )
    {
      this = (ServantOperationListViewItemDraw_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationNameLabel;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, item->fields.fortificationName, 0);
          this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationDetailNameLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, item->fields.fortificationDetailName, 0);
            fortificationAppointmentLabel = v8->fields.fortificationAppointmentLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (ServantOperationListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6485/*"FORTIFICATION_APPOINTMENT"*/,
                                                           0);
            if ( fortificationAppointmentLabel )
            {
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)this, 0);
              this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationNameLabel;
              if ( this )
              {
                UILabel__UpdateCondensedScaleComponent((UILabel_o *)this, 0);
                this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationDetailNameLabel;
                if ( this )
                {
                  UILabel__UpdateCondensedScaleComponent((UILabel_o *)this, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_53;
  }
}