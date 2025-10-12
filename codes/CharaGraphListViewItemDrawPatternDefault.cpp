void CharaGraphListViewItemDrawPatternDefault___ctor(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphListViewItemDrawPatternDefault__SetActive(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        UnityEngine_Component_o *obj,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C36CB0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36CB0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !obj || (gameObject = UnityEngine_Component__get_gameObject(obj, 0)) == 0 )
      sub_1C32E7C(gameObject);
    UnityEngine_GameObject__SetActive(gameObject, value, 0);
  }
}


void CharaGraphListViewItemDrawPatternDefault__SetInput(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        bool isInput,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault_o *v8; // x21
  UnityEngine_Object_o *baseButton; // x23

  v8 = this;
  if ( (byte_4C36CAF & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36CAF = 1;
  }
  if ( !itemDraw )
    goto LABEL_12;
  baseButton = (UnityEngine_Object_o *)itemDraw->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.baseButton;
    if ( this )
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)this,
                                                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0);
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.baseButton;
        if ( this )
        {
          ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, _QWORD, __int64, _QWORD))this->klass[1]._1.byval_arg.data)(
            this,
            0,
            1,
            *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
          goto LABEL_11;
        }
      }
    }
LABEL_12:
    sub_1C32E7C(this);
  }
LABEL_11:
  ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))v8->klass->vtable._6_SetupAccessories.methodPtr)(
    v8,
    itemDraw,
    item,
    v8->klass->vtable._6_SetupAccessories.method);
}


void CharaGraphListViewItemDrawPatternDefault__SetItem(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))this->klass->vtable._6_SetupAccessories.methodPtr)(
    this,
    itemDraw,
    item,
    this->klass->vtable._6_SetupAccessories.method);
}


void CharaGraphListViewItemDrawPatternDefault__SetupAccessories(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault_o *v7; // x0
  const MethodInfo *v8; // x3
  CharaGraphListViewItemDrawPatternDefault_o *selectObject; // x0
  const MethodInfo *v10; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v11; // x0
  const MethodInfo *v12; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v13; // x0
  const MethodInfo *v14; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v15; // x0
  const MethodInfo *v16; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v17; // x0
  const MethodInfo *v18; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v19; // x0
  const MethodInfo *v20; // x3

  ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))this->klass->vtable._8_SetupFaceIcon.methodPtr)(
    this,
    itemDraw,
    item,
    this->klass->vtable._8_SetupFaceIcon.method);
  ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))this->klass->vtable._9_SetupFaceMask.methodPtr)(
    this,
    itemDraw,
    item,
    this->klass->vtable._9_SetupFaceMask.method);
  v7 = (CharaGraphListViewItemDrawPatternDefault_o *)((__int64 (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))this->klass->vtable._7_SetupStatusLabel.methodPtr)(
                                                       this,
                                                       itemDraw,
                                                       item,
                                                       this->klass->vtable._7_SetupStatusLabel.method);
  CharaGraphListViewItemDrawPatternDefault__SetupPartyIcon(v7, itemDraw, item, v8);
  selectObject = (CharaGraphListViewItemDrawPatternDefault_o *)((__int64 (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))this->klass->vtable._10_SetupUseSprite.methodPtr)(
                                                                 this,
                                                                 itemDraw,
                                                                 item,
                                                                 this->klass->vtable._10_SetupUseSprite.method);
  if ( !itemDraw )
    goto LABEL_6;
  if ( !item )
    goto LABEL_6;
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    selectObject,
    (UnityEngine_Component_o *)itemDraw->fields.lockSprite,
    item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
    v10);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    v11,
    (UnityEngine_Component_o *)itemDraw->fields.choiceSprite,
    item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
    v12);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    v13,
    (UnityEngine_Component_o *)itemDraw->fields.friendShipSprite,
    item->fields._IsFriendShipSvtEq_k__BackingField,
    v14);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    v15,
    (UnityEngine_Component_o *)itemDraw->fields.chocolateSprite,
    item->fields._IsChocolateSvtEquip_k__BackingField,
    v16);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    v17,
    (UnityEngine_Component_o *)itemDraw->fields.pushSprite,
    item->fields._IsPush_k__BackingField,
    v18);
  selectObject = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.selectObject;
  if ( !selectObject
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)selectObject,
          item->fields._IsBase_k__BackingField,
          0),
        (selectObject = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon) == 0) )
  {
LABEL_6:
    sub_1C32E7C(selectObject);
  }
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)selectObject, 0);
  CharaGraphListViewItemDrawPatternDefault__SetupMaterialTd(v19, itemDraw, item, v20);
  ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))this->klass->vtable._11_SetupWarningAndMask.methodPtr)(
    this,
    itemDraw,
    item,
    this->klass->vtable._11_SetupWarningAndMask.method);
}


void CharaGraphListViewItemDrawPatternDefault__SetupFaceIcon(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListViewItemBase_c *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v8; // x11
  __int64 v9; // x11
  __int64 v10; // x11

  if ( (byte_4C36CB1 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphCommandCodeListViewItem_TypeInfo);
    sub_1C32C20(&CharaGraphServantCollectionListViewItem_TypeInfo);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1C32C20(&CharaGraphServantListViewItemBase_TypeInfo);
    byte_4C36CB1 = 1;
  }
  if ( item )
  {
    klass = item->klass;
    naturalAligment = item->klass->_2.naturalAligment;
    v8 = CharaGraphServantListViewItemBase_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v8
      && (CharaGraphServantListViewItemBase_c *)klass->_2.typeHierarchy[v8 - 1] == CharaGraphServantListViewItemBase_TypeInfo )
    {
      if ( itemDraw )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          ServantFaceIconComponent__Set_40905852(
            (ServantFaceIconComponent_o *)this,
            (UserServantEntity_o *)item[1].monitor,
            item->fields._IconInfo1_k__BackingField,
            item->fields._IconInfo2_k__BackingField,
            0);
          return;
        }
      }
    }
    else
    {
      v9 = CharaGraphCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      if ( naturalAligment >= (unsigned int)v9
        && (CharaGraphCommandCodeListViewItem_c *)klass->_2.typeHierarchy[v9 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
      {
        if ( itemDraw )
        {
          this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
          if ( this )
          {
            ServantFaceIconComponent__Set_40913296(
              (ServantFaceIconComponent_o *)this,
              (UserCommandCodeEntity_o *)item[1].klass,
              item->fields._IconInfo1_k__BackingField,
              item->fields._IconInfo2_k__BackingField,
              0);
            return;
          }
        }
      }
      else
      {
        v10 = CharaGraphServantCollectionListViewItem_TypeInfo->_2.naturalAligment;
        if ( naturalAligment < (unsigned int)v10
          || (CharaGraphServantCollectionListViewItem_c *)klass->_2.typeHierarchy[v10 - 1] != CharaGraphServantCollectionListViewItem_TypeInfo )
        {
          return;
        }
        if ( itemDraw )
        {
          this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
          if ( this )
          {
            ServantFaceIconComponent__Set_40907464(
              (ServantFaceIconComponent_o *)this,
              (UserServantCollectionEntity_o *)item[1].klass,
              item->fields._IconInfo1_k__BackingField,
              item->fields._IconInfo2_k__BackingField,
              0,
              0);
            return;
          }
        }
      }
    }
    sub_1C32E7C(this);
  }
}


void CharaGraphListViewItemDrawPatternDefault__SetupFaceMask(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !itemDraw || (this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon) == 0 )
    sub_1C32E7C(this);
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)this,
    itemDraw->fields.maskSprite,
    itemDraw->fields._DefaultMaskName_k__BackingField,
    itemDraw->fields._DefaultMaskAtlas_k__BackingField,
    0);
}


void CharaGraphListViewItemDrawPatternDefault__SetupMaterialTd(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *materialTdSprite; // x21
  const MethodInfo *v7; // x3
  UISprite_o *v8; // x21
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C36CB5 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1C32C20(&StringLiteral_23108/*"ribbon_noblephantasmup_01"*/);
    byte_4C36CB5 = 1;
  }
  if ( !itemDraw )
    goto LABEL_15;
  materialTdSprite = (UnityEngine_Object_o *)itemDraw->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CharaGraphListViewItemDrawPatternDefault_o *)UnityEngine_Object__op_Equality(materialTdSprite, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !item )
      goto LABEL_15;
    CharaGraphListViewItemDrawPatternDefault__SetActive(
      this,
      (UnityEngine_Component_o *)itemDraw->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v7);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v8 = itemDraw->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v8, (System_String_o *)StringLiteral_23108/*"ribbon_noblephantasmup_01"*/, 0);
      if ( item->fields._IsNeedAdjustIconLabelScale_k__BackingField )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          v9.fields.x = 0.65;
          v9.fields.y = 1.0;
          v9.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)this, v9, 0);
          return;
        }
LABEL_15:
        sub_1C32E7C(this);
      }
    }
  }
}


void CharaGraphListViewItemDrawPatternDefault__SetupPartyIcon(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partyIcon; // x21
  __int64 naturalAligment; // x10
  bool v8; // w1

  if ( (byte_4C36CB2 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphPartyServantListViewItem_TypeInfo);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36CB2 = 1;
  }
  if ( !itemDraw )
    goto LABEL_17;
  partyIcon = (UnityEngine_Object_o *)itemDraw->fields.partyIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(partyIcon, 0, 0) )
  {
    if ( item
      && (naturalAligment = CharaGraphPartyServantListViewItem_TypeInfo->_2.naturalAligment,
          item->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
      && (CharaGraphPartyServantListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphPartyServantListViewItem_TypeInfo )
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.partyIcon;
      if ( item->fields._IsUse_k__BackingField )
      {
        v8 = 0;
        if ( this )
          goto LABEL_12;
      }
      else
      {
        v8 = SLODWORD(item[1].fields.sortValue2B) >= 0;
        if ( this )
          goto LABEL_12;
      }
    }
    else
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.partyIcon;
      if ( this )
      {
        v8 = 0;
LABEL_12:
        FlashingIconComponent__Set_40801560((FlashingIconComponent_o *)this, v8, 0);
        return;
      }
    }
LABEL_17:
    sub_1C32E7C(this);
  }
}


void CharaGraphListViewItemDrawPatternDefault__SetupStatusLabel(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !itemDraw )
    sub_1C32E7C(this);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    this,
    (UnityEngine_Component_o *)itemDraw->fields.statusLb,
    0,
    method);
}


void CharaGraphListViewItemDrawPatternDefault__SetupUseSprite(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *useSprite; // x21
  const MethodInfo *v7; // x3
  __int64 naturalAligment; // x11
  __int64 *v9; // x8

  if ( (byte_4C36CB3 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphCommandCodeListViewItem_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_20186/*"icon_equip"*/);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1C32C20(&StringLiteral_20187/*"icon_equip_cc"*/);
    byte_4C36CB3 = 1;
  }
  if ( !itemDraw )
    goto LABEL_15;
  useSprite = (UnityEngine_Object_o *)itemDraw->fields.useSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CharaGraphListViewItemDrawPatternDefault_o *)UnityEngine_Object__op_Equality(useSprite, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !item )
      goto LABEL_15;
    CharaGraphListViewItemDrawPatternDefault__SetActive(
      this,
      (UnityEngine_Component_o *)itemDraw->fields.useSprite,
      item->fields._IsUse_k__BackingField,
      v7);
    if ( item->fields._IsUse_k__BackingField )
    {
      naturalAligment = CharaGraphCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
      v9 = &StringLiteral_20186/*"icon_equip"*/;
      if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
      {
        v9 = &StringLiteral_20187/*"icon_equip_cc"*/;
      }
      this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.useSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v9, 0);
        return;
      }
LABEL_15:
      sub_1C32E7C(this);
    }
  }
}


void CharaGraphListViewItemDrawPatternDefault__SetupWarningAndMask(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault_o *v6; // x21
  const MethodInfo *v7; // x3
  char v8; // w2
  UILabel_o *warningLabel; // x19
  __int64 *v10; // x8
  System_String_o *v11; // x20

  v6 = this;
  if ( (byte_4C36CB4 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11520/*"SELECT_CANNOT"*/);
    sub_1C32C20(&StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C36CB4 = 1;
  }
  if ( !itemDraw )
    goto LABEL_18;
  this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.warningLabel;
  if ( !this )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !item )
    goto LABEL_18;
  if ( item->fields._IsLeave_k__BackingField )
  {
    v8 = 1;
    if ( !v6 )
      goto LABEL_18;
  }
  else
  {
    v8 = !item->fields._IsEnabled_k__BackingField;
    if ( !v6 )
      goto LABEL_18;
  }
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    this,
    (UnityEngine_Component_o *)itemDraw->fields.maskSprite,
    v8,
    v7);
  if ( !item->fields._IsEnabled_k__BackingField )
  {
    warningLabel = itemDraw->fields.warningLabel;
    if ( item->fields._IsEventJoin_k__BackingField )
      v10 = &StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/;
    else
      v10 = &StringLiteral_11520/*"SELECT_CANNOT"*/;
    v11 = (System_String_o *)*v10;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)LocalizationManager__Get(v11, 0);
    if ( warningLabel )
    {
      UILabel__set_text(warningLabel, (System_String_o *)this, 0);
      return;
    }
LABEL_18:
    sub_1C32E7C(this);
  }
}