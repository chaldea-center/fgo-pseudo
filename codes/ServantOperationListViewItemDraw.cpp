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
    return dword_C303A0[initMode - 1];
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
  __int64 v18; // x1
  System_String_o *v19; // x0
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  __int64 *v21; // x8
  UserServantEntity_o *v23; // x0
  bool IsServantMaterialTd; // w19

  if ( (byte_4BB0A0A & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, item);
    sub_1C13D24(&StringLiteral_9434/*"NONE"*/, v6);
    sub_1C13D24(&StringLiteral_11703/*"SELECT_BONUS_SKILL_INVALID"*/, v7);
    sub_1C13D24(&StringLiteral_11699/*"SELECT"*/, v8);
    sub_1C13D24(&StringLiteral_12631/*"SUPPORT_INFO_HELP"*/, v9);
    sub_1C13D24(&StringLiteral_11716/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v10);
    sub_1C13D24(&StringLiteral_11693/*"SDK_INT"*/, v11);
    sub_1C13D24(&StringLiteral_11694/*"SE"*/, v12);
    sub_1C13D24(&StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/, v13);
    sub_1C13D24(&StringLiteral_11713/*"SELECT_ITEM"*/, v14);
    sub_1C13D24(&StringLiteral_9468/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/, v15);
    sub_1C13D24(&StringLiteral_11208/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/, v16);
    sub_1C13D24(&StringLiteral_1/*""*/, v17);
    this = (ServantOperationListViewItemDraw_o *)sub_1C13D24(&StringLiteral_11715/*"SELECT_NO_SORTIE"*/, v18);
    byte_4BB0A0A = 1;
  }
  if ( !item )
    goto LABEL_59;
  if ( item->fields._IsPush_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = (System_String_o *)StringLiteral_11716/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
    return LocalizationManager__Get(v19, 0LL);
  }
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/;
    goto LABEL_49;
  }
  if ( item->fields.attribute )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_16;
  }
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11694/*"SE"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsNotSelection_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_9434/*"NONE"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11703/*"SELECT_BONUS_SKILL_INVALID"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsFavorite_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11699/*"SELECT"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsParty_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11713/*"SELECT_ITEM"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsUseRecommendSupportServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11208/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsUseSupportServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_12631/*"SUPPORT_INFO_HELP"*/;
    goto LABEL_49;
  }
  if ( item->fields._IsCommandCodeEquiped_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_9468/*"NOT_HAVING_SHOP_ITEM_RECEIVABLE"*/;
    goto LABEL_49;
  }
  v23 = item->fields._UserServantEntity_k__BackingField;
  if ( v23 && UserServantEntity__IsProtectedEventServant(v23, 0LL) )
  {
    this = (ServantOperationListViewItemDraw_o *)item->fields.servantEntity;
    if ( this )
    {
      IsServantMaterialTd = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !IsServantMaterialTd )
      {
        v21 = &StringLiteral_11715/*"SELECT_NO_SORTIE"*/;
        goto LABEL_49;
      }
LABEL_16:
      v21 = &StringLiteral_11693/*"SDK_INT"*/;
LABEL_49:
      v19 = (System_String_o *)*v21;
      return LocalizationManager__Get(v19, 0LL);
    }
LABEL_59:
    sub_1C13F80(this, item);
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
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x3
  UISprite_o *v24; // x21
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4BB0A0C & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, item);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    this = (ServantOperationListViewItemDraw_o *)sub_1C13D24(&StringLiteral_23315/*"return"*/, v8);
    byte_4BB0A0C = 1;
  }
  if ( !item )
    goto LABEL_20;
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
  this = (ServantOperationListViewItemDraw_o *)v6->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_20;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)this, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)v6->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL);
  if ( v22 )
  {
    ServantOperationListViewItemDraw__SetSpriteActive(
      (ServantOperationListViewItemDraw_o *)v22,
      v6->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v23);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v24 = v6->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v24, (System_String_o *)StringLiteral_23315/*"return"*/, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        this = (ServantOperationListViewItemDraw_o *)v6->fields.servantFaceIcon;
        if ( !this )
          goto LABEL_20;
        v25.fields.x = 0.65;
        v25.fields.y = 1.0;
        v25.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)this, v25, 0LL);
      }
    }
  }
  this = (ServantOperationListViewItemDraw_o *)v6->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0LL),
        (this = (ServantOperationListViewItemDraw_o *)v6->fields.dragSelect) == 0LL) )
  {
LABEL_20:
    sub_1C13F80(this, item);
  }
  DragSelectComponent__Set(
    (DragSelectComponent_o *)this,
    item->fields.selectNum,
    item->fields._DragSelectNum_k__BackingField,
    0LL);
}


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

  if ( (byte_4BB0A0B & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, item);
    byte_4BB0A0B = 1;
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
      sub_1C13F80(v10, v8);
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
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x25
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x24
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x3
  FlashingIconComponent_o *fortificationRootObj; // x0
  _BOOL8 IsParty_k__BackingField; // x1
  UnityEngine_Object_o *baseButton; // x23
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x5

  if ( (byte_4BB0A06 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, item);
    sub_1C13D24(&StringLiteral_1/*""*/, v11);
    byte_4BB0A06 = 1;
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v15 = UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
        if ( v15 )
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
          FlashingIconComponent__Set_39267888(fortificationRootObj, IsParty_k__BackingField, 0LL);
        }
        ServantOperationListViewItemDraw__SetSpriteActive(
          (ServantOperationListViewItemDraw_o *)v15,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v16);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                  if ( !byte_4BAEDA6 )
                  {
                    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v20);
                    byte_4BAEDA6 = 1;
                  }
                  GameObjectExtensions__SetLocalScale(
                    gameObject,
                    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                    0LL);
                  ServantOperationListViewItemDraw__SetDisp(this, item, isSelectEnable, v22);
                  ServantOperationListViewItemDraw__SetWarningText(
                    this,
                    item,
                    modeKind,
                    UserServantEntity_k__BackingField != 0LL,
                    UserCommandCodeEntity_k__BackingField != 0LL,
                    v23);
                  return;
                }
              }
            }
          }
        }
LABEL_31:
        sub_1C13F80(fortificationRootObj, IsParty_k__BackingField);
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

  if ( (byte_4BB0A07 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, label);
    byte_4BB0A07 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1C13F80(v6, v7);
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
        ServantFaceIconComponent__Set_39363980(
          (ServantFaceIconComponent_o *)this,
          item->fields._UserServantEntity_k__BackingField,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0LL);
        return;
      }
    }
LABEL_10:
    sub_1C13F80(this, item);
  }
  if ( isCommandCode )
  {
    if ( !item )
      goto LABEL_10;
    this = (ServantOperationListViewItemDraw_o *)this->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_10;
    ServantFaceIconComponent__Set_39370868(
      (ServantFaceIconComponent_o *)this,
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
  __int64 v7; // x1

  if ( (byte_4BB0A08 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, sprite);
    byte_4BB0A08 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1C13F80(gameObject, v7);
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
  UILabel_o *warningLabel; // x19
  __int64 *v15; // x8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v17; // x21
  ServantOperationListViewItemDraw_o *StatusText; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  UILabel_o *fortificationAppointmentLabel; // x20
  ServantOperationListViewItemDraw_o *v22; // x0
  const MethodInfo *v23; // x3
  UILabel_o *v24; // x1
  System_String_o *v25; // x2

  v8 = this;
  if ( (byte_4BB0A09 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, item);
    sub_1C13D24(&TutorialFlag_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_6600/*"FOLLOW_REMOVE_DECIDE"*/, v10);
    sub_1C13D24(&StringLiteral_11693/*"SDK_INT"*/, v11);
    sub_1C13D24(&StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/, v12);
    this = (ServantOperationListViewItemDraw_o *)sub_1C13D24(&StringLiteral_1/*""*/, v13);
    byte_4BB0A09 = 1;
  }
  if ( (unsigned int)(modeKind - 1) < 2 )
  {
    if ( !item )
      goto LABEL_53;
    UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL) )
      goto LABEL_48;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    this = (ServantOperationListViewItemDraw_o *)TutorialFlag__Get_38831432(126, 0LL);
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v15 = &StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/;
LABEL_47:
          v22 = (ServantOperationListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
          v24 = warningLabel;
          v25 = (System_String_o *)v22;
LABEL_51:
          ServantOperationListViewItemDraw__SetLabelText(v22, v24, v25, v23);
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v15 = &StringLiteral_11693/*"SDK_INT"*/;
          goto LABEL_47;
        }
      }
LABEL_53:
      sub_1C13F80(this, item);
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
        v24 = v8->fields.warningLabel;
        v25 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_51;
      }
    }
    goto LABEL_53;
  }
  v17 = v8->fields.warningLabel;
  StatusText = (ServantOperationListViewItemDraw_o *)ServantOperationListViewItemDraw__GetStatusText(
                                                       this,
                                                       item,
                                                       0,
                                                       0,
                                                       (const MethodInfo *)isCommandCode);
  ServantOperationListViewItemDraw__SetLabelText(StatusText, v17, (System_String_o *)StatusText, v19);
  if ( !item )
    goto LABEL_53;
  if ( item->fields._IsUseRecommendSupportServant_k__BackingField )
  {
    this = (ServantOperationListViewItemDraw_o *)v8->fields.warningLabel;
    if ( !this )
      goto LABEL_53;
    UILabel__SetCondensedScale((UILabel_o *)this, 106, 0, 0LL);
  }
  if ( item->fields.isFortification )
  {
    ServantOperationListViewItemDraw__SetLabelText(
      this,
      v8->fields.warningLabel,
      (System_String_o *)StringLiteral_1/*""*/,
      v20);
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (ServantOperationListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6600/*"FOLLOW_REMOVE_DECIDE"*/,
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