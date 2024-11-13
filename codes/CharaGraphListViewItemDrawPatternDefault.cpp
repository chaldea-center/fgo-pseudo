void __fastcall CharaGraphListViewItemDrawPatternDefault___ctor(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewItemDrawPatternDefault__SetActive(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        UnityEngine_Component_o *obj,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B15581 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, value);
    byte_4B15581 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !obj || (gameObject = UnityEngine_Component__get_gameObject(obj, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetInput(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        bool isInput,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *baseButton; // x23

  v8 = this;
  if ( (byte_4B15580 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, itemDraw, item);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B15580 = 1;
  }
  if ( !itemDraw )
    goto LABEL_12;
  baseButton = (UnityEngine_Object_o *)itemDraw->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemDraw);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.baseButton;
    if ( this )
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)this,
                                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( this )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, isInput, 0LL);
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.baseButton;
        if ( this )
        {
          ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, _QWORD, __int64, Il2CppClass *))this->klass[1]._1.castClass)(
            this,
            0LL,
            1LL,
            this->klass[1]._1.declaringType);
          goto LABEL_11;
        }
      }
    }
LABEL_12:
    sub_1BCAA3C(this, itemDraw);
  }
LABEL_11:
  ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))v8->klass->vtable._6_SetupAccessories.method)(
    v8,
    itemDraw,
    item,
    v8->klass->vtable._7_SetupStatusLabel.methodPtr);
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetItem(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._6_SetupAccessories.method)(
    this,
    itemDraw,
    item,
    this->klass->vtable._7_SetupStatusLabel.methodPtr);
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupAccessories(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault_o *v7; // x0
  const MethodInfo *v8; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v9; // x0
  const MethodInfo *v10; // x3
  CharaGraphListViewItemDrawPatternDefault_o *servantFaceIcon; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v14; // x0
  const MethodInfo *v15; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v16; // x0
  const MethodInfo *v17; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v18; // x0
  const MethodInfo *v19; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v20; // x0
  const MethodInfo *v21; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v22; // x0
  const MethodInfo *v23; // x3

  ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._8_SetupFaceIcon.method)(
    this,
    itemDraw,
    item,
    this->klass->vtable._9_SetupWarningAndMask.methodPtr);
  v7 = (CharaGraphListViewItemDrawPatternDefault_o *)((__int64 (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._7_SetupStatusLabel.method)(
                                                       this,
                                                       itemDraw,
                                                       item,
                                                       this->klass->vtable._8_SetupFaceIcon.methodPtr);
  CharaGraphListViewItemDrawPatternDefault__SetupPartyIcon(v7, itemDraw, item, v8);
  CharaGraphListViewItemDrawPatternDefault__SetupUseSprite(v9, itemDraw, item, v10);
  if ( !itemDraw
    || !item
    || (CharaGraphListViewItemDrawPatternDefault__SetActive(
          servantFaceIcon,
          (UnityEngine_Component_o *)itemDraw->fields.lockSprite,
          item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
          v13),
        CharaGraphListViewItemDrawPatternDefault__SetActive(
          v14,
          (UnityEngine_Component_o *)itemDraw->fields.choiceSprite,
          item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
          v15),
        CharaGraphListViewItemDrawPatternDefault__SetActive(
          v16,
          (UnityEngine_Component_o *)itemDraw->fields.friendShipSprite,
          item->fields._IsFriendShipSvtEq_k__BackingField,
          v17),
        CharaGraphListViewItemDrawPatternDefault__SetActive(
          v18,
          (UnityEngine_Component_o *)itemDraw->fields.chocolateSprite,
          item->fields._IsChocolateSvtEquip_k__BackingField,
          v19),
        CharaGraphListViewItemDrawPatternDefault__SetActive(
          v20,
          (UnityEngine_Component_o *)itemDraw->fields.pushSprite,
          item->fields._IsPush_k__BackingField,
          v21),
        (servantFaceIcon = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon) == 0LL) )
  {
    sub_1BCAA3C(servantFaceIcon, v12);
  }
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)servantFaceIcon, 0LL);
  CharaGraphListViewItemDrawPatternDefault__SetupMaterialTd(v22, itemDraw, item, v23);
  ((void (__fastcall *)(CharaGraphListViewItemDrawPatternDefault_o *, CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, void *))this->klass->vtable._9_SetupWarningAndMask.method)(
    this,
    itemDraw,
    item,
    this->klass[1]._1.image);
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupFaceIcon(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  CharaGraphListViewItemBase_c *klass; // x8
  unsigned int methodPtr_low; // w9
  __int64 v12; // x11
  __int64 v13; // x11
  __int64 v14; // x11

  if ( (byte_4B15582 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphCommandCodeListViewItem_TypeInfo, itemDraw, item);
    sub_1BCA7E0(&CharaGraphServantCollectionListViewItem_TypeInfo, v6, v7);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1BCA7E0(&CharaGraphServantListViewItem_TypeInfo, v8, v9);
    byte_4B15582 = 1;
  }
  if ( item )
  {
    klass = item->klass;
    methodPtr_low = LOBYTE(item->klass->vtable._0_Equals.methodPtr);
    v12 = LOBYTE(CharaGraphServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( methodPtr_low >= (unsigned int)v12
      && (CharaGraphServantListViewItem_c *)klass->_2.typeHierarchy[v12 - 1] == CharaGraphServantListViewItem_TypeInfo )
    {
      if ( itemDraw )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          ServantFaceIconComponent__Set_38931252(
            (ServantFaceIconComponent_o *)this,
            (UserServantEntity_o *)item[1].monitor,
            item->fields._IconInfo1_k__BackingField,
            item->fields._IconInfo2_k__BackingField,
            0LL);
          return;
        }
      }
    }
    else
    {
      v13 = LOBYTE(CharaGraphCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( methodPtr_low >= (unsigned int)v13
        && (CharaGraphCommandCodeListViewItem_c *)klass->_2.typeHierarchy[v13 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
      {
        if ( itemDraw )
        {
          this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
          if ( this )
          {
            ServantFaceIconComponent__Set_38937964(
              (ServantFaceIconComponent_o *)this,
              (UserCommandCodeEntity_o *)item[1].klass,
              item->fields._IconInfo1_k__BackingField,
              item->fields._IconInfo2_k__BackingField,
              0LL);
            return;
          }
        }
      }
      else
      {
        v14 = LOBYTE(CharaGraphServantCollectionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( methodPtr_low < (unsigned int)v14
          || (CharaGraphServantCollectionListViewItem_c *)klass->_2.typeHierarchy[v14 - 1] != CharaGraphServantCollectionListViewItem_TypeInfo )
        {
          return;
        }
        if ( itemDraw )
        {
          this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
          if ( this )
          {
            ServantFaceIconComponent__Set_38933812(
              (ServantFaceIconComponent_o *)this,
              (UserServantCollectionEntity_o *)item[1].klass,
              item->fields._IconInfo1_k__BackingField,
              item->fields._IconInfo2_k__BackingField,
              0,
              0LL);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(this, itemDraw);
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupMaterialTd(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *materialTdSprite; // x21
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  UISprite_o *v13; // x21
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B15586 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, itemDraw, item);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v8, v9);
    byte_4B15586 = 1;
  }
  if ( !itemDraw )
    goto LABEL_15;
  materialTdSprite = (UnityEngine_Object_o *)itemDraw->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemDraw);
  this = (CharaGraphListViewItemDrawPatternDefault_o *)UnityEngine_Object__op_Equality(materialTdSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !item )
      goto LABEL_15;
    CharaGraphListViewItemDrawPatternDefault__SetActive(
      this,
      (UnityEngine_Component_o *)itemDraw->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v11);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v13 = itemDraw->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
      AtlasManager__SetEventSprite(v13, (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields._IsNeedAdjustIconLabelScale_k__BackingField )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          v14.fields.x = 0.65;
          v14.fields.y = 1.0;
          v14.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)this, v14, 0LL);
          return;
        }
LABEL_15:
        sub_1BCAA3C(this, itemDraw);
      }
    }
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupPartyIcon(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListViewItemDraw_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *partyIcon; // x21
  __int64 methodPtr_low; // x10

  v5 = itemDraw;
  if ( (byte_4B15583 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphPartyServantListViewItem_TypeInfo, itemDraw, item);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B15583 = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  partyIcon = (UnityEngine_Object_o *)v5->fields.partyIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemDraw);
  if ( !UnityEngine_Object__op_Equality(partyIcon, 0LL, 0LL) )
  {
    if ( item
      && (methodPtr_low = LOBYTE(CharaGraphPartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
      && (CharaGraphPartyServantListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphPartyServantListViewItem_TypeInfo )
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)v5->fields.partyIcon;
      if ( item->fields._IsUse_k__BackingField )
      {
        itemDraw = 0LL;
        if ( this )
          goto LABEL_12;
      }
      else
      {
        itemDraw = (CharaGraphListViewItemDraw_o *)(SLODWORD(item[1].fields.sortValue2) >= 0);
        if ( this )
          goto LABEL_12;
      }
    }
    else
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)v5->fields.partyIcon;
      if ( this )
      {
        LOBYTE(itemDraw) = 0;
LABEL_12:
        FlashingIconComponent__Set_38836528((FlashingIconComponent_o *)this, (bool)itemDraw, 0LL);
        return;
      }
    }
LABEL_17:
    sub_1BCAA3C(this, itemDraw);
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupStatusLabel(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !itemDraw )
    sub_1BCAA3C(this, 0LL);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    this,
    (UnityEngine_Component_o *)itemDraw->fields.statusLb,
    0,
    method);
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupUseSprite(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *useSprite; // x21
  const MethodInfo *v13; // x3
  __int64 methodPtr_low; // x11
  __int64 *v15; // x8

  if ( (byte_4B15584 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphCommandCodeListViewItem_TypeInfo, itemDraw, item);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_20353/*"icon_equip"*/, v8, v9);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1BCA7E0(&StringLiteral_20354/*"icon_equip_cc"*/, v10, v11);
    byte_4B15584 = 1;
  }
  if ( !itemDraw )
    goto LABEL_15;
  useSprite = (UnityEngine_Object_o *)itemDraw->fields.useSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemDraw);
  this = (CharaGraphListViewItemDrawPatternDefault_o *)UnityEngine_Object__op_Equality(useSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !item )
      goto LABEL_15;
    CharaGraphListViewItemDrawPatternDefault__SetActive(
      this,
      (UnityEngine_Component_o *)itemDraw->fields.useSprite,
      item->fields._IsUse_k__BackingField,
      v13);
    if ( item->fields._IsUse_k__BackingField )
    {
      methodPtr_low = LOBYTE(CharaGraphCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      v15 = &StringLiteral_20353/*"icon_equip"*/;
      if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
      {
        v15 = &StringLiteral_20354/*"icon_equip_cc"*/;
      }
      this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.useSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v15, 0LL);
        return;
      }
LABEL_15:
      sub_1BCAA3C(this, itemDraw);
    }
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupWarningAndMask(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  char v14; // w2
  __int64 v15; // x1
  UILabel_o *warningLabel; // x19
  __int64 *v17; // x8
  System_String_o *v18; // x20

  v6 = this;
  if ( (byte_4B15585 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, itemDraw, item);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v9, v10);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B15585 = 1;
  }
  if ( !itemDraw )
    goto LABEL_18;
  this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.warningLabel;
  if ( !this )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !item )
    goto LABEL_18;
  if ( item->fields._IsLeave_k__BackingField )
  {
    v14 = 1;
    if ( !v6 )
      goto LABEL_18;
  }
  else
  {
    v14 = !item->fields._IsEnabled_k__BackingField;
    if ( !v6 )
      goto LABEL_18;
  }
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    this,
    (UnityEngine_Component_o *)itemDraw->fields.maskSprite,
    v14,
    v13);
  if ( !item->fields._IsEnabled_k__BackingField )
  {
    warningLabel = itemDraw->fields.warningLabel;
    if ( item->fields._IsEventJoin_k__BackingField )
      v17 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
    else
      v17 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
    v18 = (System_String_o *)*v17;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)LocalizationManager__Get(v18, 0LL);
    if ( warningLabel )
    {
      UILabel__set_text(warningLabel, (System_String_o *)this, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(this, itemDraw);
  }
}