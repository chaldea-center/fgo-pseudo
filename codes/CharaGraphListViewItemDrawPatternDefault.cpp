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

  if ( (byte_42141D6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, obj);
    byte_42141D6 = 1;
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
      sub_B0D97C(gameObject);
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
  UnityEngine_Object_o *baseButton; // x23

  v8 = this;
  if ( (byte_42141D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, itemDraw);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_42141D5 = 1;
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
                                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_B0D97C(this);
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
  const MethodInfo *v12; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v13; // x0
  const MethodInfo *v14; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v15; // x0
  const MethodInfo *v16; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v17; // x0
  const MethodInfo *v18; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v19; // x0
  const MethodInfo *v20; // x3
  CharaGraphListViewItemDrawPatternDefault_o *v21; // x0
  const MethodInfo *v22; // x3

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
          v12),
        CharaGraphListViewItemDrawPatternDefault__SetActive(
          v13,
          (UnityEngine_Component_o *)itemDraw->fields.choiceSprite,
          item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
          v14),
        CharaGraphListViewItemDrawPatternDefault__SetActive(
          v15,
          (UnityEngine_Component_o *)itemDraw->fields.friendShipSprite,
          item->fields._IsFriendShipSvtEq_k__BackingField,
          v16),
        CharaGraphListViewItemDrawPatternDefault__SetActive(
          v17,
          (UnityEngine_Component_o *)itemDraw->fields.chocolateSprite,
          item->fields._IsChocolateSvtEquip_k__BackingField,
          v18),
        CharaGraphListViewItemDrawPatternDefault__SetActive(
          v19,
          (UnityEngine_Component_o *)itemDraw->fields.pushSprite,
          item->fields._IsPush_k__BackingField,
          v20),
        (servantFaceIcon = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon) == 0LL) )
  {
    sub_B0D97C(servantFaceIcon);
  }
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)servantFaceIcon, 0LL);
  CharaGraphListViewItemDrawPatternDefault__SetupMaterialTd(v21, itemDraw, item, v22);
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
  CharaGraphListViewItemBase_c *klass; // x8
  unsigned int v8; // w9
  __int64 v9; // x11
  __int64 v10; // x11
  CharaGraphCommandCodeListViewItem_c *v11; // x8
  bool v12; // zf
  CharaGraphListViewItemBase_o *v13; // x8

  if ( (byte_42141D7 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphCommandCodeListViewItem_TypeInfo, itemDraw);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B0D8A4(&CharaGraphServantListViewItem_TypeInfo, v6);
    byte_42141D7 = 1;
  }
  if ( item )
  {
    klass = item->klass;
    v8 = *(&item->klass->_2.bitflags2 + 1);
    v9 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( v8 >= (unsigned int)v9
      && (CharaGraphServantListViewItem_c *)klass->_2.typeHierarchy[v9 - 1] == CharaGraphServantListViewItem_TypeInfo )
    {
      if ( itemDraw )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          ServantFaceIconComponent__Set_29552540(
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
      v10 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( v8 < (unsigned int)v10 )
        return;
      v11 = (CharaGraphCommandCodeListViewItem_c *)klass->_2.typeHierarchy[v10 - 1];
      v12 = v11 == CharaGraphCommandCodeListViewItem_TypeInfo;
      v13 = v11 == CharaGraphCommandCodeListViewItem_TypeInfo ? item : 0LL;
      if ( !v12 )
        return;
      if ( itemDraw )
      {
        if ( v13 )
        {
          this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
          if ( this )
          {
            ServantFaceIconComponent__Set_29632480(
              (ServantFaceIconComponent_o *)this,
              (UserCommandCodeEntity_o *)v13[1].klass,
              item->fields._IconInfo1_k__BackingField,
              item->fields._IconInfo2_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
    sub_B0D97C(this);
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupMaterialTd(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  const MethodInfo *v9; // x3
  UISprite_o *v10; // x21
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42141DB & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, itemDraw);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B0D8A4(&StringLiteral_21899/*"ribbon_noblephantasmup_01"*/, v7);
    byte_42141DB = 1;
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
      v9);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v10 = itemDraw->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v10, (System_String_o *)StringLiteral_21899/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields._IsNeedAdjustIconLabelScale_k__BackingField )
      {
        this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.servantFaceIcon;
        if ( this )
        {
          v11.fields.x = 0.65;
          v11.fields.y = 1.0;
          v11.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)this, v11, 0LL);
          return;
        }
LABEL_17:
        sub_B0D97C(this);
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
  __int64 v6; // x1
  UnityEngine_Object_o *partyIcon; // x21
  __int64 v8; // x10
  bool v9; // w1

  if ( (byte_42141D8 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphPartyServantListViewItem_TypeInfo, itemDraw);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_42141D8 = 1;
  }
  if ( !itemDraw )
    goto LABEL_18;
  partyIcon = (UnityEngine_Object_o *)itemDraw->fields.partyIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(partyIcon, 0LL, 0LL) )
  {
    if ( item
      && (v8 = *(&CharaGraphPartyServantListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v8)
      && (CharaGraphPartyServantListViewItem_c *)item->klass->_2.typeHierarchy[v8 - 1] == CharaGraphPartyServantListViewItem_TypeInfo )
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.partyIcon;
      if ( item->fields._IsUse_k__BackingField )
      {
        v9 = 0;
        if ( this )
          goto LABEL_13;
      }
      else
      {
        v9 = SLODWORD(item[1].fields.sortValue2) >= 0;
        if ( this )
          goto LABEL_13;
      }
    }
    else
    {
      this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.partyIcon;
      if ( this )
      {
        v9 = 0;
LABEL_13:
        FlashingIconComponent__Set_21845332((FlashingIconComponent_o *)this, v9, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B0D97C(this);
  }
}


void __fastcall CharaGraphListViewItemDrawPatternDefault__SetupStatusLabel(
        CharaGraphListViewItemDrawPatternDefault_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !itemDraw )
    sub_B0D97C(this);
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
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *useSprite; // x21
  const MethodInfo *v10; // x3
  __int64 v11; // x11
  __int64 *v12; // x8

  if ( (byte_42141D9 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphCommandCodeListViewItem_TypeInfo, itemDraw);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_19391/*"icon_equip"*/, v7);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B0D8A4(&StringLiteral_19392/*"icon_equip_cc"*/, v8);
    byte_42141D9 = 1;
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
      v10);
    if ( item->fields._IsUse_k__BackingField )
    {
      v11 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      v12 = &StringLiteral_19391/*"icon_equip"*/;
      if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v11 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
      {
        v12 = &StringLiteral_19392/*"icon_equip_cc"*/;
      }
      this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.useSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v12, 0LL);
        return;
      }
LABEL_16:
      sub_B0D97C(this);
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
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  char v11; // w2
  UILabel_o *warningLabel; // x19
  __int64 *v13; // x8
  System_String_o *v14; // x20

  v6 = this;
  if ( (byte_42141DA & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, itemDraw);
    sub_B0D8A4(&StringLiteral_11647/*"SELECT_CANNOT"*/, v7);
    sub_B0D8A4(&StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/, v8);
    this = (CharaGraphListViewItemDrawPatternDefault_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_42141DA = 1;
  }
  if ( !itemDraw )
    goto LABEL_19;
  this = (CharaGraphListViewItemDrawPatternDefault_o *)itemDraw->fields.warningLabel;
  if ( !this )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !item )
    goto LABEL_19;
  if ( item->fields._IsLeave_k__BackingField )
  {
    v11 = 1;
    if ( !v6 )
      goto LABEL_19;
  }
  else
  {
    v11 = !item->fields._IsEnabled_k__BackingField;
    if ( !v6 )
      goto LABEL_19;
  }
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    this,
    (UnityEngine_Component_o *)itemDraw->fields.maskSprite,
    v11,
    v10);
  if ( !item->fields._IsEnabled_k__BackingField )
  {
    warningLabel = itemDraw->fields.warningLabel;
    if ( item->fields._IsEventJoin_k__BackingField )
      v13 = &StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/;
    else
      v13 = &StringLiteral_11647/*"SELECT_CANNOT"*/;
    v14 = (System_String_o *)*v13;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (CharaGraphListViewItemDrawPatternDefault_o *)LocalizationManager__Get(v14, 0LL);
    if ( warningLabel )
    {
      UILabel__set_text(warningLabel, (System_String_o *)this, 0LL);
      return;
    }
LABEL_19:
    sub_B0D97C(this);
  }
}