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
    return dword_C17168[initMode - 1];
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
  __int64 v19; // x1
  System_String_o *v20; // x0
  __int64 *v21; // x8
  bool IsServantMaterialTd; // w19

  if ( (byte_4AFE191 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, item);
    sub_1BC3008(&StringLiteral_9200/*"NONSELECT_MATERIAL"*/, v6);
    sub_1BC3008(&StringLiteral_11423/*"SELECT_LOCK"*/, v7);
    sub_1BC3008(&StringLiteral_11414/*"SELECT_FAVORITE"*/, v8);
    sub_1BC3008(&StringLiteral_12393/*"SUPPORT_MEMBER"*/, v9);
    sub_1BC3008(&StringLiteral_11436/*"SELECT_PUSH"*/, v10);
    sub_1BC3008(&StringLiteral_11406/*"SELECT_CANNOT"*/, v11);
    sub_1BC3008(&StringLiteral_11407/*"SELECT_CHOICE"*/, v12);
    sub_1BC3008(&StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/, v13);
    sub_1BC3008(&StringLiteral_11433/*"SELECT_PARTY"*/, v14);
    sub_1BC3008(&StringLiteral_9234/*"NOT_SELECT_EQUIPED"*/, v15);
    sub_1BC3008(&StringLiteral_10931/*"RECOMMEND_SUPPORT_MEMBER"*/, v16);
    sub_1BC3008(&StringLiteral_1/*""*/, v17);
    sub_1BC3008(&StringLiteral_11435/*"SELECT_PROTECTED_EVENT_SVT"*/, v18);
    this = (ServantOperationListViewItemDraw_o *)sub_1BC3008(&StringLiteral_6938/*"GRAND_MEMBER"*/, v19);
    byte_4AFE191 = 1;
  }
  if ( !item )
    goto LABEL_61;
  if ( item->fields._IsGrandServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = (System_String_o *)StringLiteral_6938/*"GRAND_MEMBER"*/;
    return LocalizationManager__Get(v20, 0LL);
  }
  if ( item->fields._IsPush_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11436/*"SELECT_PUSH"*/;
    goto LABEL_24;
  }
  if ( ServantOperationListViewItem__get_IsEventJoin(item, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/;
    goto LABEL_24;
  }
  if ( !ServantOperationListViewItem__get_IsSellEnableServant(item, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_23;
  }
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11407/*"SELECT_CHOICE"*/;
    goto LABEL_24;
  }
  if ( item->fields._IsNotSelection_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_9200/*"NONSELECT_MATERIAL"*/;
    goto LABEL_24;
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11423/*"SELECT_LOCK"*/;
    goto LABEL_24;
  }
  if ( item->fields._IsFavorite_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11414/*"SELECT_FAVORITE"*/;
    goto LABEL_24;
  }
  if ( item->fields._IsParty_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11433/*"SELECT_PARTY"*/;
    goto LABEL_24;
  }
  if ( item->fields._IsUseRecommendSupportServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_10931/*"RECOMMEND_SUPPORT_MEMBER"*/;
    goto LABEL_24;
  }
  if ( item->fields._IsUseSupportServant_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_12393/*"SUPPORT_MEMBER"*/;
    goto LABEL_24;
  }
  if ( item->fields._IsCommandCodeEquiped_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_9234/*"NOT_SELECT_EQUIPED"*/;
    goto LABEL_24;
  }
  if ( ServantOperationListViewItem__get_IsProtected(item, 0LL) )
  {
    this = (ServantOperationListViewItemDraw_o *)item->fields.servantEntity;
    if ( this )
    {
      IsServantMaterialTd = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !IsServantMaterialTd )
      {
        v21 = &StringLiteral_11435/*"SELECT_PROTECTED_EVENT_SVT"*/;
        goto LABEL_24;
      }
LABEL_23:
      v21 = &StringLiteral_11406/*"SELECT_CANNOT"*/;
LABEL_24:
      v20 = (System_String_o *)*v21;
      return LocalizationManager__Get(v20, 0LL);
    }
LABEL_61:
    sub_1BC3264(this, item);
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
  UISprite_o *lockSprite; // x22
  _BOOL8 IsDispLock; // x0
  const MethodInfo *v11; // x3
  UISprite_o *choiceSprite; // x22
  _BOOL8 IsDispChoice; // x0
  const MethodInfo *v14; // x3
  ServantOperationListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  ServantOperationListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  ServantOperationListViewItemDraw_o *v19; // x0
  const MethodInfo *v20; // x3
  UISprite_o *maskSprite; // x22
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x3
  UISprite_o *v27; // x21
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4AFE193 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    this = (ServantOperationListViewItemDraw_o *)sub_1BC3008(&StringLiteral_22883/*"ribbon_noblephantasmup_01"*/, v8);
    byte_4AFE193 = 1;
  }
  if ( !item )
    goto LABEL_20;
  lockSprite = v6->fields.lockSprite;
  IsDispLock = ServantOperationListViewItem__get_IsDispLock(item, 0LL);
  ServantOperationListViewItemDraw__SetSpriteActive(
    (ServantOperationListViewItemDraw_o *)IsDispLock,
    lockSprite,
    IsDispLock,
    v11);
  choiceSprite = v6->fields.choiceSprite;
  IsDispChoice = ServantOperationListViewItem__get_IsDispChoice(item, 0LL);
  ServantOperationListViewItemDraw__SetSpriteActive(
    (ServantOperationListViewItemDraw_o *)IsDispChoice,
    choiceSprite,
    IsDispChoice,
    v14);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v15,
    v6->fields.pushSprite,
    item->fields._IsPush_k__BackingField,
    v16);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v17,
    v6->fields.friendShipSprite,
    item->fields._IsFriendShipSvtEq_k__BackingField,
    v18);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v19,
    v6->fields.chocolateSprite,
    item->fields._IsChocolateSvtEquip_k__BackingField,
    v20);
  maskSprite = v6->fields.maskSprite;
  CanNotSelect = ServantOperationListViewItem__get_IsCanNotSelect(item, 0LL);
  if ( !CanNotSelect && !isSelectEnable )
    CanNotSelect = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  ServantOperationListViewItemDraw__SetSpriteActive(
    (ServantOperationListViewItemDraw_o *)CanNotSelect,
    maskSprite,
    CanNotSelect,
    v23);
  this = (ServantOperationListViewItemDraw_o *)v6->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_20;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)this, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)v6->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v27, (System_String_o *)StringLiteral_22883/*"ribbon_noblephantasmup_01"*/, 0LL);
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
    sub_1BC3264(this, item);
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

  if ( (byte_4AFE192 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, item);
    byte_4AFE192 = 1;
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
      sub_1BC3264(v10, v8);
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

  if ( (byte_4AFE18D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, item);
    sub_1BC3008(&StringLiteral_1/*""*/, v11);
    byte_4AFE18D = 1;
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
          FlashingIconComponent__Set_39931536(fortificationRootObj, IsParty_k__BackingField, 0LL);
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
                  if ( !byte_4AFBDB6 )
                  {
                    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v20);
                    byte_4AFBDB6 = 1;
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
        sub_1BC3264(fortificationRootObj, IsParty_k__BackingField);
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

  if ( (byte_4AFE18E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, label);
    byte_4AFE18E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BC3264(v6, v7);
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
        ServantFaceIconComponent__Set_40035864(
          (ServantFaceIconComponent_o *)this,
          item->fields._UserServantEntity_k__BackingField,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0LL);
        return;
      }
    }
LABEL_10:
    sub_1BC3264(this, item);
  }
  if ( isCommandCode )
  {
    if ( !item )
      goto LABEL_10;
    this = (ServantOperationListViewItemDraw_o *)this->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_10;
    ServantFaceIconComponent__Set_40043344(
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

  if ( (byte_4AFE18F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, sprite);
    byte_4AFE18F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1BC3264(gameObject, v7);
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
  UILabel_o *v16; // x21
  ServantOperationListViewItemDraw_o *StatusText; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  UILabel_o *fortificationAppointmentLabel; // x20
  ServantOperationListViewItemDraw_o *v21; // x0
  const MethodInfo *v22; // x3
  UILabel_o *v23; // x1
  System_String_o *v24; // x2

  v8 = this;
  if ( (byte_4AFE190 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, item);
    sub_1BC3008(&TutorialFlag_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_6424/*"FORTIFICATION_APPOINTMENT"*/, v10);
    sub_1BC3008(&StringLiteral_11406/*"SELECT_CANNOT"*/, v11);
    sub_1BC3008(&StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/, v12);
    this = (ServantOperationListViewItemDraw_o *)sub_1BC3008(&StringLiteral_1/*""*/, v13);
    byte_4AFE190 = 1;
  }
  if ( (unsigned int)(modeKind - 1) < 2 )
  {
    if ( !item )
      goto LABEL_51;
    if ( !ServantOperationListViewItem__get_IsHeroine(item, 0LL) )
      goto LABEL_47;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    this = (ServantOperationListViewItemDraw_o *)TutorialFlag__Get_39466584(126, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_47;
  }
  else if ( modeKind == 3 )
  {
    if ( !item )
      goto LABEL_51;
    if ( ServantOperationListViewItem__get_IsEventJoin(item, 0LL) )
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
          v15 = &StringLiteral_11437/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_46:
          v21 = (ServantOperationListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
          v23 = warningLabel;
          v24 = (System_String_o *)v21;
LABEL_50:
          ServantOperationListViewItemDraw__SetLabelText(v21, v23, v24, v22);
          return;
        }
      }
      goto LABEL_51;
    }
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_51;
    if ( UserServantEntity__IsLeave((UserServantEntity_o *)this, 0LL) )
      goto LABEL_41;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_51;
    if ( UserServantEntity__IsCombineMaterial((UserServantEntity_o *)this, 0LL) )
      goto LABEL_41;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_51;
    if ( UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL) )
      goto LABEL_41;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_51;
    if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0LL) )
    {
LABEL_41:
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
          v15 = &StringLiteral_11406/*"SELECT_CANNOT"*/;
          goto LABEL_46;
        }
      }
LABEL_51:
      sub_1BC3264(this, item);
    }
LABEL_47:
    this = (ServantOperationListViewItemDraw_o *)v8->fields.maskSprite;
    if ( this )
    {
      this = (ServantOperationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v23 = v8->fields.warningLabel;
        v24 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_50;
      }
    }
    goto LABEL_51;
  }
  v16 = v8->fields.warningLabel;
  StatusText = (ServantOperationListViewItemDraw_o *)ServantOperationListViewItemDraw__GetStatusText(
                                                       this,
                                                       item,
                                                       0,
                                                       0,
                                                       (const MethodInfo *)isCommandCode);
  ServantOperationListViewItemDraw__SetLabelText(StatusText, v16, (System_String_o *)StatusText, v18);
  if ( !item )
    goto LABEL_51;
  if ( item->fields._IsUseRecommendSupportServant_k__BackingField )
  {
    this = (ServantOperationListViewItemDraw_o *)v8->fields.warningLabel;
    if ( !this )
      goto LABEL_51;
    UILabel__SetCondensedScale((UILabel_o *)this, 106, 0, 0LL);
  }
  if ( item->fields.isFortification )
  {
    ServantOperationListViewItemDraw__SetLabelText(
      this,
      v8->fields.warningLabel,
      (System_String_o *)StringLiteral_1/*""*/,
      v19);
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
                                                           (System_String_o *)StringLiteral_6424/*"FORTIFICATION_APPOINTMENT"*/,
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
    goto LABEL_51;
  }
}