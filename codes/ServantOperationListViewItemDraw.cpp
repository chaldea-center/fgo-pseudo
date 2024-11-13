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
    return dword_C0C0A0[initMode - 1];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantOperationListViewItemDraw__GetStatusText(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x0
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  __int64 *v34; // x8
  UserServantEntity_o *v36; // x0
  __int64 v37; // x1
  bool IsServantMaterialTd; // w19

  if ( (byte_4B12596 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, isServant);
    sub_1BCA7E0(&StringLiteral_9388/*"NONSELECT_MATERIAL"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11644/*"SELECT_LOCK"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11640/*"SELECT_FAVORITE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12565/*"SUPPORT_MEMBER"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11657/*"SELECT_PUSH"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11635/*"SELECT_CHOICE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_11654/*"SELECT_PARTY"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_9422/*"NOT_SELECT_EQUIPED"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11152/*"RECOMMEND_SUPPORT_MEMBER"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v28, v29);
    this = (ServantOperationListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_11656/*"SELECT_PROTECTED_EVENT_SVT"*/, v30, v31);
    byte_4B12596 = 1;
  }
  if ( !item )
    goto LABEL_59;
  if ( item->fields._IsPush_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v32 = (System_String_o *)StringLiteral_11657/*"SELECT_PUSH"*/;
    return LocalizationManager__Get(v32, 0LL);
  }
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v34 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
    goto LABEL_49;
  }
  if ( item->fields.attribute )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    goto LABEL_16;
  }
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v34 = &StringLiteral_11635/*"SELECT_CHOICE"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsNotSelection_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v34 = &StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v34 = &StringLiteral_11644/*"SELECT_LOCK"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsFavorite_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v34 = &StringLiteral_11640/*"SELECT_FAVORITE"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsParty_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v34 = &StringLiteral_11654/*"SELECT_PARTY"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsUseRecommendSupportServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v34 = &StringLiteral_11152/*"RECOMMEND_SUPPORT_MEMBER"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsUseSupportServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v34 = &StringLiteral_12565/*"SUPPORT_MEMBER"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsCommandCodeEquiped_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v34 = &StringLiteral_9422/*"NOT_SELECT_EQUIPED"*/;
    goto LABEL_49;
  }
  v36 = item->fields._UserServantEntity_k__BackingField;
  if ( v36 && UserServantEntity__IsProtectedEventServant(v36, 0LL) )
  {
    this = (ServantOperationListViewItemDraw_o *)item->fields.servantEntity;
    if ( this )
    {
      IsServantMaterialTd = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
      if ( !IsServantMaterialTd )
      {
        v34 = &StringLiteral_11656/*"SELECT_PROTECTED_EVENT_SVT"*/;
        goto LABEL_49;
      }
LABEL_16:
      v34 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
LABEL_49:
      v32 = (System_String_o *)*v34;
      return LocalizationManager__Get(v32, 0LL);
    }
LABEL_59:
    sub_1BCAA3C(this, item);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewItemDraw__SetDisp(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  ServantOperationListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantOperationListViewItemDraw_o *v11; // x0
  const MethodInfo *v12; // x3
  ServantOperationListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  ServantOperationListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  ServantOperationListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  UISprite_o *maskSprite; // x22
  const MethodInfo *v20; // x1
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x3
  UISprite_o *v27; // x21
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B12598 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, isSelectEnable);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (ServantOperationListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v9, v10);
    byte_4B12598 = 1;
  }
  if ( !item )
    goto LABEL_20;
  ServantOperationListViewItemDraw__SetSpriteActive(
    this,
    v6->fields.lockSprite,
    item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
    method);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v11,
    v6->fields.choiceSprite,
    item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
    v12);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v13,
    v6->fields.pushSprite,
    item->fields._IsPush_k__BackingField,
    v14);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v15,
    v6->fields.friendShipSprite,
    item->fields._IsFriendShipSvtEq_k__BackingField,
    v16);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v17,
    v6->fields.chocolateSprite,
    item->fields._IsChocolateSvtEquip_k__BackingField,
    v18);
  maskSprite = v6->fields.maskSprite;
  CanNotSelect = ServantOperationListViewItem__get_IsCanNotSelect(item, v20);
  if ( !CanNotSelect && !isSelectEnable )
    CanNotSelect = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  ServantOperationListViewItemDraw__SetSpriteActive(
    (ServantOperationListViewItemDraw_o *)CanNotSelect,
    maskSprite,
    CanNotSelect,
    v22);
  this = (ServantOperationListViewItemDraw_o *)v6->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_20;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)this, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)v6->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  v25 = UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL);
  if ( v25 )
  {
    ServantOperationListViewItemDraw__SetSpriteActive(
      (ServantOperationListViewItemDraw_o *)v25,
      v6->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v26);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v27 = v6->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
      AtlasManager__SetEventSprite(v27, (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        this = (ServantOperationListViewItemDraw_o *)v6->fields.servantFaceIcon;
        if ( !this )
          goto LABEL_20;
        v28.fields.x = 0.65;
        v28.fields.y = 1.0;
        v28.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)this, v28, 0LL);
      }
    }
  }
  this = (ServantOperationListViewItemDraw_o *)v6->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0LL),
        (this = (ServantOperationListViewItemDraw_o *)v6->fields.dragSelect) == 0LL) )
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
void __fastcall ServantOperationListViewItemDraw__SetInput(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct UICommonButton_o *v10; // x0

  if ( (byte_4B12597 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, isSelectEnable);
    byte_4B12597 = 1;
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
    ServantOperationListViewItemDraw__SetDisp(this, item, isSelectEnable, v9);
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
  __int64 v12; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x25
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x24
  __int64 v15; // x1
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x3
  FlashingIconComponent_o *fortificationRootObj; // x0
  _BOOL8 IsParty_k__BackingField; // x1
  __int64 v21; // x1
  UnityEngine_Object_o *baseButton; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x5

  if ( (byte_4B12592 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B12592 = 1;
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        v17 = UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
        if ( v17 )
        {
          fortificationRootObj = this->fields.partyIcon;
          if ( UserServantEntity_k__BackingField && !item->fields._IsUse_k__BackingField )
          {
            IsParty_k__BackingField = item->fields._IsParty_k__BackingField;
            if ( !fortificationRootObj )
              goto LABEL_31;
          }
          else
          {
            IsParty_k__BackingField = 0LL;
            if ( !fortificationRootObj )
              goto LABEL_31;
          }
          FlashingIconComponent__Set_38836528(fortificationRootObj, IsParty_k__BackingField, 0LL);
        }
        ServantOperationListViewItemDraw__SetSpriteActive(
          (ServantOperationListViewItemDraw_o *)v17,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v18);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          fortificationRootObj = (FlashingIconComponent_o *)this->fields.baseButton;
          if ( !fortificationRootObj )
            goto LABEL_31;
          ((void (__fastcall *)(FlashingIconComponent_o *, __int64, void *))fortificationRootObj->klass[1]._1.namespaze)(
            fortificationRootObj,
            1LL,
            fortificationRootObj->klass[1]._1.byval_arg.data);
          fortificationRootObj = (FlashingIconComponent_o *)this->fields.baseButton;
          if ( !fortificationRootObj )
            goto LABEL_31;
          ((void (__fastcall *)(FlashingIconComponent_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))fortificationRootObj->klass[1]._1.implementedInterfaces)(
            fortificationRootObj,
            0LL,
            1LL,
            fortificationRootObj->klass[1]._1.interfaceOffsets);
        }
        fortificationRootObj = (FlashingIconComponent_o *)this->fields.fortificationRootObj;
        if ( fortificationRootObj )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fortificationRootObj, 0, 0LL);
          fortificationRootObj = (FlashingIconComponent_o *)this->fields.fortificationNameLabel;
          if ( fortificationRootObj )
          {
            UILabel__set_text((UILabel_o *)fortificationRootObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            fortificationRootObj = (FlashingIconComponent_o *)this->fields.fortificationDetailNameLabel;
            if ( fortificationRootObj )
            {
              UILabel__set_text((UILabel_o *)fortificationRootObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              fortificationRootObj = (FlashingIconComponent_o *)this->fields.fortificationAppointmentLabel;
              if ( fortificationRootObj )
              {
                UILabel__set_text((UILabel_o *)fortificationRootObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                fortificationRootObj = (FlashingIconComponent_o *)this->fields.warningLabel;
                if ( fortificationRootObj )
                {
                  gameObject = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)fortificationRootObj,
                                 0LL);
                  if ( !byte_4B109C6 )
                  {
                    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v24);
                    byte_4B109C6 = 1;
                  }
                  GameObjectExtensions__SetLocalScale(
                    gameObject,
                    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                    0LL);
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
        }
LABEL_31:
        sub_1BCAA3C(fortificationRootObj, IsParty_k__BackingField);
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
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B12593 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, text);
    byte_4B12593 = 1;
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


void __fastcall ServantOperationListViewItemDraw__SetServantFaceIcon(
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
    this = (ServantOperationListViewItemDraw_o *)this->fields.servantFaceIcon;
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
void __fastcall ServantOperationListViewItemDraw__SetSpriteActive(
        ServantOperationListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B12594 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, isActive);
    byte_4B12594 = 1;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  UILabel_o *warningLabel; // x19
  __int64 *v21; // x8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v23; // x21
  ServantOperationListViewItemDraw_o *StatusText; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  UILabel_o *fortificationAppointmentLabel; // x20
  __int64 v29; // x1
  ServantOperationListViewItemDraw_o *v30; // x0
  const MethodInfo *v31; // x3
  UILabel_o *v32; // x1
  System_String_o *v33; // x2

  v8 = this;
  if ( (byte_4B12595 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&modeKind);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_6565/*"FORTIFICATION_APPOINTMENT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v15, v16);
    this = (ServantOperationListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B12595 = 1;
  }
  if ( (unsigned int)(modeKind - 1) < 2 )
  {
    if ( !item )
      goto LABEL_53;
    UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL) )
      goto LABEL_48;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, item);
    this = (ServantOperationListViewItemDraw_o *)TutorialFlag__Get_38402052(126, 0LL);
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
    if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL) )
    {
      this = (ServantOperationListViewItemDraw_o *)v8->fields.maskSprite;
      if ( this )
      {
        this = (ServantOperationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          warningLabel = v8->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
          v21 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_47:
          v30 = (ServantOperationListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v21, 0LL);
          v32 = warningLabel;
          v33 = (System_String_o *)v30;
LABEL_51:
          ServantOperationListViewItemDraw__SetLabelText(v30, v32, v33, v31);
          return;
        }
      }
      goto LABEL_53;
    }
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_53;
    if ( UserServantEntity__IsLeave((UserServantEntity_o *)this, 0LL) )
      goto LABEL_42;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_53;
    if ( UserServantEntity__IsCombineMaterial((UserServantEntity_o *)this, 0LL) )
      goto LABEL_42;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_53;
    if ( UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL) )
      goto LABEL_42;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_53;
    if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0LL) )
    {
LABEL_42:
      this = (ServantOperationListViewItemDraw_o *)v8->fields.maskSprite;
      if ( this )
      {
        this = (ServantOperationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          warningLabel = v8->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
          v21 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
          goto LABEL_47;
        }
      }
LABEL_53:
      sub_1BCAA3C(this, item);
    }
LABEL_48:
    this = (ServantOperationListViewItemDraw_o *)v8->fields.maskSprite;
    if ( this )
    {
      this = (ServantOperationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v32 = v8->fields.warningLabel;
        v33 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_51;
      }
    }
    goto LABEL_53;
  }
  v23 = v8->fields.warningLabel;
  StatusText = (ServantOperationListViewItemDraw_o *)ServantOperationListViewItemDraw__GetStatusText(
                                                       this,
                                                       item,
                                                       0,
                                                       0,
                                                       (const MethodInfo *)isCommandCode);
  ServantOperationListViewItemDraw__SetLabelText(StatusText, v23, (System_String_o *)StatusText, v25);
  if ( !item )
    goto LABEL_53;
  if ( item->fields._IsUseRecommendSupportServant_k__BackingField )
  {
    this = (ServantOperationListViewItemDraw_o *)v8->fields.warningLabel;
    if ( !this )
      goto LABEL_53;
    UILabel__SetCondensedScale((UILabel_o *)this, 106, 0LL);
  }
  if ( item->fields.isFortification )
  {
    ServantOperationListViewItemDraw__SetLabelText(
      this,
      v8->fields.warningLabel,
      (System_String_o *)StringLiteral_1/*""*/,
      v26);
    this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationRootObj;
    if ( this )
    {
      this = (ServantOperationListViewItemDraw_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationNameLabel;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, item->fields.fortificationName, 0LL);
          this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationDetailNameLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, item->fields.fortificationDetailName, 0LL);
            fortificationAppointmentLabel = v8->fields.fortificationAppointmentLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
            this = (ServantOperationListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6565/*"FORTIFICATION_APPOINTMENT"*/,
                                                           0LL);
            if ( fortificationAppointmentLabel )
            {
              UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)this, 0LL);
              this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationNameLabel;
              if ( this )
              {
                UILabel__UpdateCondensedScaleComponent((UILabel_o *)this, 0LL);
                this = (ServantOperationListViewItemDraw_o *)v8->fields.fortificationDetailNameLabel;
                if ( this )
                {
                  UILabel__UpdateCondensedScaleComponent((UILabel_o *)this, 0LL);
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