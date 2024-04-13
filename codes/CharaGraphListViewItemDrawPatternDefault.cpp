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

  if ( (byte_42E968C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)obj, value, method);
    byte_42E968C = 1;
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
      sub_B5D69C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewItemDrawPatternDefault__SetInput(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        bool isInput,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault_o *v8; // x21
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *baseButton; // x23

  v8 = this;
  if ( (byte_42E968B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)itemDraw, (_DWORD)item, isInput);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E968B = 1;
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
                                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_B5D69C(this, itemDraw);
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
    sub_B5D69C(servantFaceIcon, v12);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CharaGraphListViewItemBase_c *klass; // x8
  unsigned int v10; // w9
  __int64 v11; // x11
  __int64 v12; // x11
  CharaGraphCommandCodeListViewItem_c *v13; // x8
  bool v14; // zf
  CharaGraphListViewItemBase_o *v15; // x8

  if ( (byte_42E968D & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphCommandCodeListViewItem_TypeInfo, (_DWORD)itemDraw, (_DWORD)item, method);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B5D5C4(&CharaGraphServantListViewItem_TypeInfo, v6, v7, v8);
    byte_42E968D = 1;
  }
  if ( item )
  {
    klass = item->klass;
    v10 = *(&item->klass->_2.bitflags2 + 1);
    v11 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( v10 >= (unsigned int)v11
      && (CharaGraphServantListViewItem_c *)klass->_2.typeHierarchy[v11 - 1] == CharaGraphServantListViewItem_TypeInfo )
    {
      if ( itemDraw )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          ServantFaceIconComponent__Set_30775392(
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
      v12 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( v10 < (unsigned int)v12 )
        return;
      v13 = (CharaGraphCommandCodeListViewItem_c *)klass->_2.typeHierarchy[v12 - 1];
      v14 = v13 == CharaGraphCommandCodeListViewItem_TypeInfo;
      v15 = v13 == CharaGraphCommandCodeListViewItem_TypeInfo ? item : 0LL;
      if ( !v14 )
        return;
      if ( itemDraw )
      {
        if ( v15 )
        {
          this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
          if ( this )
          {
            ServantFaceIconComponent__Set_30855448(
              (ServantFaceIconComponent_o *)this,
              (UserCommandCodeEntity_o *)v15[1].klass,
              item->fields._IconInfo1_k__BackingField,
              item->fields._IconInfo2_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(this, itemDraw);
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupMaterialTd(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *materialTdSprite; // x21
  const MethodInfo *v13; // x3
  UISprite_o *v14; // x21
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9691 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)itemDraw, (_DWORD)item, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v9, v10, v11);
    byte_42E9691 = 1;
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
      v13);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v14 = itemDraw->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields._IsNeedAdjustIconLabelScale_k__BackingField )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          v15.fields.x = 0.65;
          v15.fields.y = 1.0;
          v15.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)this, v15, 0LL);
          return;
        }
LABEL_17:
        sub_B5D69C(this, itemDraw);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *partyIcon; // x21
  __int64 v10; // x10

  v5 = itemDraw;
  if ( (byte_42E968E & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphPartyServantListViewItem_TypeInfo, (_DWORD)itemDraw, (_DWORD)item, method);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E968E = 1;
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
      && (v10 = *(&CharaGraphPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v10)
      && (CharaGraphPartyServantListViewItem_c *)item->klass->_2.typeHierarchy[v10 - 1] == CharaGraphPartyServantListViewItem_TypeInfo )
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
        FlashingIconComponent__Set_21625204((FlashingIconComponent_o *)this, (bool)itemDraw, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(this, itemDraw);
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupStatusLabel(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !itemDraw )
    sub_B5D69C(this, 0LL);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *useSprite; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x11
  __int64 *v18; // x8

  if ( (byte_42E968F & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphCommandCodeListViewItem_TypeInfo, (_DWORD)itemDraw, (_DWORD)item, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_19574/*"icon_equip"*/, v9, v10, v11);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B5D5C4(&StringLiteral_19575/*"icon_equip_cc"*/, v12, v13, v14);
    byte_42E968F = 1;
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
      v16);
    if ( item->fields._IsUse_k__BackingField )
    {
      v17 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      v18 = &StringLiteral_19574/*"icon_equip"*/;
      if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v17 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
      {
        v18 = &StringLiteral_19575/*"icon_equip_cc"*/;
      }
      this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.useSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v18, 0LL);
        return;
      }
LABEL_16:
      sub_B5D69C(this, itemDraw);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  const MethodInfo *v16; // x3
  char v17; // w2
  UILabel_o *warningLabel; // x19
  __int64 *v19; // x8
  System_String_o *v20; // x20

  v5 = itemDraw;
  v6 = this;
  if ( (byte_42E9690 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)itemDraw, (_DWORD)item, method);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v10, v11, v12);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42E9690 = 1;
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
    v17 = 1;
    if ( !v6 )
      goto LABEL_19;
  }
  else
  {
    v17 = !item->fields._IsEnabled_k__BackingField;
    if ( !v6 )
      goto LABEL_19;
  }
  CharaGraphListViewItemDrawPatternDefault__SetActive(this, (UnityEngine_Component_o *)itemDraw, v17, v16);
  if ( !item->fields._IsEnabled_k__BackingField )
  {
    warningLabel = v5->fields.warningLabel;
    if ( item->fields._IsEventJoin_k__BackingField )
      v19 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
    else
      v19 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
    v20 = (System_String_o *)*v19;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (CharaGraphListViewItemDrawPatternDefault_o *)LocalizationManager__Get(v20, 0LL);
    if ( warningLabel )
    {
      UILabel__set_text(warningLabel, (System_String_o *)this, 0LL);
      return;
    }
LABEL_19:
    sub_B5D69C(this, itemDraw);
  }
}