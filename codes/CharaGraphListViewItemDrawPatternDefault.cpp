void __fastcall CharaGraphListViewItemDrawPatternDefault___ctor(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetActive(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        UnityEngine_Component_o *obj,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42AFD7F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFD7F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !obj || (gameObject = UnityEngine_Component__get_gameObject(obj, 0LL)) == 0LL )
      sub_B52A5C(gameObject, v7);
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
  UnityEngine_Object_o *baseButton; // x23

  v8 = this;
  if ( (byte_42AFD7E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFD7E = 1;
  }
  if ( !itemDraw )
    goto LABEL_13;
  baseButton = (UnityEngine_Object_o *)itemDraw->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.baseButton;
    if ( this )
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)this,
                                                             (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_B52A5C(this, itemDraw);
  }
LABEL_12:
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
    sub_B52A5C(servantFaceIcon, v12);
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
  CharaGraphListViewItemBase_c *klass; // x8
  unsigned int v7; // w9
  __int64 v8; // x11
  __int64 v9; // x11
  CharaGraphCommandCodeListViewItem_c *v10; // x8
  bool v11; // zf
  CharaGraphListViewItemBase_o *v12; // x8

  if ( (byte_42AFD80 & 1) == 0 )
  {
    sub_B52984(&CharaGraphCommandCodeListViewItem_TypeInfo);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B52984(&CharaGraphServantListViewItem_TypeInfo);
    byte_42AFD80 = 1;
  }
  if ( item )
  {
    klass = item->klass;
    v7 = *(&item->klass->_2.bitflags2 + 1);
    v8 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( v7 >= (unsigned int)v8
      && (CharaGraphServantListViewItem_c *)klass->_2.typeHierarchy[v8 - 1] == CharaGraphServantListViewItem_TypeInfo )
    {
      if ( itemDraw )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          ServantFaceIconComponent__Set_30396076(
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
      v9 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( v7 < (unsigned int)v9 )
        return;
      v10 = (CharaGraphCommandCodeListViewItem_c *)klass->_2.typeHierarchy[v9 - 1];
      v11 = v10 == CharaGraphCommandCodeListViewItem_TypeInfo;
      v12 = v10 == CharaGraphCommandCodeListViewItem_TypeInfo ? item : 0LL;
      if ( !v11 )
        return;
      if ( itemDraw )
      {
        if ( v12 )
        {
          this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
          if ( this )
          {
            ServantFaceIconComponent__Set_30476088(
              (ServantFaceIconComponent_o *)this,
              (UserCommandCodeEntity_o *)v12[1].klass,
              item->fields._IconInfo1_k__BackingField,
              item->fields._IconInfo2_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
    sub_B52A5C(this, itemDraw);
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupMaterialTd(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *materialTdSprite; // x21
  const MethodInfo *v7; // x3
  UISprite_o *v8; // x21
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AFD84 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B52984(&StringLiteral_22010/*"ribbon_noblephantasmup_01"*/);
    byte_42AFD84 = 1;
  }
  if ( !itemDraw )
    goto LABEL_17;
  materialTdSprite = (UnityEngine_Object_o *)itemDraw->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CharaGraphListViewItemDrawPatternDefault_o *)UnityEngine_Object__op_Equality(materialTdSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !item )
      goto LABEL_17;
    CharaGraphListViewItemDrawPatternDefault__SetActive(
      this,
      (UnityEngine_Component_o *)itemDraw->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v7);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v8 = itemDraw->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v8, (System_String_o *)StringLiteral_22010/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields._IsNeedAdjustIconLabelScale_k__BackingField )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          v9.fields.x = 0.65;
          v9.fields.y = 1.0;
          v9.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)this, v9, 0LL);
          return;
        }
LABEL_17:
        sub_B52A5C(this, itemDraw);
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
  UnityEngine_Object_o *partyIcon; // x21
  __int64 v7; // x10

  v5 = itemDraw;
  if ( (byte_42AFD81 & 1) == 0 )
  {
    sub_B52984(&CharaGraphPartyServantListViewItem_TypeInfo);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFD81 = 1;
  }
  if ( !v5 )
    goto LABEL_18;
  partyIcon = (UnityEngine_Object_o *)v5->fields.partyIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(partyIcon, 0LL, 0LL) )
  {
    if ( item
      && (v7 = *(&CharaGraphPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v7)
      && (CharaGraphPartyServantListViewItem_c *)item->klass->_2.typeHierarchy[v7 - 1] == CharaGraphPartyServantListViewItem_TypeInfo )
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)v5->fields.partyIcon;
      if ( item->fields._IsUse_k__BackingField )
      {
        itemDraw = 0LL;
        if ( this )
          goto LABEL_13;
      }
      else
      {
        itemDraw = (CharaGraphListViewItemDraw_o *)(SLODWORD(item[1].fields.sortValue2) >= 0);
        if ( this )
          goto LABEL_13;
      }
    }
    else
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)v5->fields.partyIcon;
      if ( this )
      {
        LOBYTE(itemDraw) = 0;
LABEL_13:
        FlashingIconComponent__Set_22571356((FlashingIconComponent_o *)this, (bool)itemDraw, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B52A5C(this, itemDraw);
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupStatusLabel(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !itemDraw )
    sub_B52A5C(this, 0LL);
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
  UnityEngine_Object_o *useSprite; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x11
  __int64 *v9; // x8

  if ( (byte_42AFD82 & 1) == 0 )
  {
    sub_B52984(&CharaGraphCommandCodeListViewItem_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_19476/*"icon_equip"*/);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B52984(&StringLiteral_19477/*"icon_equip_cc"*/);
    byte_42AFD82 = 1;
  }
  if ( !itemDraw )
    goto LABEL_16;
  useSprite = (UnityEngine_Object_o *)itemDraw->fields.useSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CharaGraphListViewItemDrawPatternDefault_o *)UnityEngine_Object__op_Equality(useSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !item )
      goto LABEL_16;
    CharaGraphListViewItemDrawPatternDefault__SetActive(
      this,
      (UnityEngine_Component_o *)itemDraw->fields.useSprite,
      item->fields._IsUse_k__BackingField,
      v7);
    if ( item->fields._IsUse_k__BackingField )
    {
      v8 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      v9 = &StringLiteral_19476/*"icon_equip"*/;
      if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v8
        && (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v8 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
      {
        v9 = &StringLiteral_19477/*"icon_equip_cc"*/;
      }
      this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.useSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v9, 0LL);
        return;
      }
LABEL_16:
      sub_B52A5C(this, itemDraw);
    }
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupWarningAndMask(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListViewItemDraw_o *v5; // x19
  CharaGraphListViewItemDrawPatternDefault_o *v6; // x21
  const MethodInfo *v7; // x3
  char v8; // w2
  UILabel_o *warningLabel; // x19
  __int64 *v10; // x8
  System_String_o *v11; // x20

  v5 = itemDraw;
  v6 = this;
  if ( (byte_42AFD83 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11707/*"SELECT_CANNOT"*/);
    sub_B52984(&StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFD83 = 1;
  }
  if ( !v5 )
    goto LABEL_19;
  this = (CharaGraphListViewItemDrawPatternDefault_o *)v5->fields.warningLabel;
  if ( !this )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !item )
    goto LABEL_19;
  itemDraw = (CharaGraphListViewItemDraw_o *)v5->fields.maskSprite;
  if ( item->fields._IsLeave_k__BackingField )
  {
    v8 = 1;
    if ( !v6 )
      goto LABEL_19;
  }
  else
  {
    v8 = !item->fields._IsEnabled_k__BackingField;
    if ( !v6 )
      goto LABEL_19;
  }
  CharaGraphListViewItemDrawPatternDefault__SetActive(this, (UnityEngine_Component_o *)itemDraw, v8, v7);
  if ( !item->fields._IsEnabled_k__BackingField )
  {
    warningLabel = v5->fields.warningLabel;
    if ( item->fields._IsEventJoin_k__BackingField )
      v10 = &StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/;
    else
      v10 = &StringLiteral_11707/*"SELECT_CANNOT"*/;
    v11 = (System_String_o *)*v10;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (CharaGraphListViewItemDrawPatternDefault_o *)LocalizationManager__Get(v11, 0LL);
    if ( warningLabel )
    {
      UILabel__set_text(warningLabel, (System_String_o *)this, 0LL);
      return;
    }
LABEL_19:
    sub_B52A5C(this, itemDraw);
  }
}