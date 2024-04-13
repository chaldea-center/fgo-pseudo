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
    return dword_32B5374[initMode - 1];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantOperationListViewItemDraw__GetStatusText(
        ServantOperationListViewItemDraw_o *this,
        ServantOperationListViewItem_o *item,
        bool isServant,
        bool isCommandCode,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  __int64 *v42; // x8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  LocalizationManager_c *v44; // x0
  UserServantEntity_o *v46; // x0

  if ( (byte_42EC711 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, isServant, isCommandCode);
    sub_B5D5C4(&StringLiteral_9411/*"NONSELECT_MATERIAL"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11762/*"SELECT_LOCK"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11758/*"SELECT_FAVORITE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12650/*"SUPPORT_MEMBER"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11775/*"SELECT_PUSH"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11754/*"SELECT_CHOICE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_11772/*"SELECT_PARTY"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_9442/*"NOT_SELECT_EQUIPED"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_1/*""*/, v36, v37, v38);
    this = (ServantOperationListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_11774/*"SELECT_PROTECTED_EVENT_SVT"*/, v39, v40, v41);
    byte_42EC711 = 1;
  }
  if ( !item )
    goto LABEL_68;
  if ( item->fields._IsPush_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_11775/*"SELECT_PUSH"*/;
    return LocalizationManager__Get((System_String_o *)*v42, 0LL);
  }
  UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
  if ( UserServantEntity_k__BackingField && UserServantEntity__IsEventJoin(UserServantEntity_k__BackingField, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
    return LocalizationManager__Get((System_String_o *)*v42, 0LL);
  }
  if ( item->fields.attribute )
  {
    v44 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( item->fields._IsChoice_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_11754/*"SELECT_CHOICE"*/;
    return LocalizationManager__Get((System_String_o *)*v42, 0LL);
  }
  if ( item->fields._IsNotSelection_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
    return LocalizationManager__Get((System_String_o *)*v42, 0LL);
  }
  if ( item->fields._IsLock_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_11762/*"SELECT_LOCK"*/;
    return LocalizationManager__Get((System_String_o *)*v42, 0LL);
  }
  if ( item->fields._IsFavorite_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_11758/*"SELECT_FAVORITE"*/;
    return LocalizationManager__Get((System_String_o *)*v42, 0LL);
  }
  if ( item->fields._IsParty_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_11772/*"SELECT_PARTY"*/;
    return LocalizationManager__Get((System_String_o *)*v42, 0LL);
  }
  if ( item->fields._IsUseSupportServant_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_12650/*"SUPPORT_MEMBER"*/;
    return LocalizationManager__Get((System_String_o *)*v42, 0LL);
  }
  if ( item->fields._IsCommandCodeEquiped_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_9442/*"NOT_SELECT_EQUIPED"*/;
    return LocalizationManager__Get((System_String_o *)*v42, 0LL);
  }
  v46 = item->fields._UserServantEntity_k__BackingField;
  if ( v46 && UserServantEntity__IsProtectedEventServant(v46, 0LL) )
  {
    this = (ServantOperationListViewItemDraw_o *)item->fields.servantEntity;
    if ( this )
    {
      if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL) )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v42 = &StringLiteral_11774/*"SELECT_PROTECTED_EVENT_SVT"*/;
        return LocalizationManager__Get((System_String_o *)*v42, 0LL);
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
        || LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_19;
      }
      v44 = LocalizationManager_TypeInfo;
LABEL_18:
      j_il2cpp_runtime_class_init_0(v44);
LABEL_19:
      v42 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v42, 0LL);
    }
LABEL_68:
    sub_B5D69C(this, item);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  ServantOperationListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  ServantOperationListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  ServantOperationListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  ServantOperationListViewItemDraw_o *v19; // x0
  const MethodInfo *v20; // x3
  UISprite_o *maskSprite; // x22
  const MethodInfo *v22; // x1
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *materialTdSprite; // x21
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x3
  UISprite_o *v28; // x21
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42EC713 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, isSelectEnable, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    this = (ServantOperationListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v10, v11, v12);
    byte_42EC713 = 1;
  }
  if ( !item )
    goto LABEL_22;
  ServantOperationListViewItemDraw__SetSpriteActive(
    this,
    v6->fields.lockSprite,
    item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
    method);
  ServantOperationListViewItemDraw__SetSpriteActive(
    v13,
    v6->fields.choiceSprite,
    item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
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
  CanNotSelect = ServantOperationListViewItem__get_IsCanNotSelect(item, v22);
  if ( !CanNotSelect && !isSelectEnable )
    CanNotSelect = !ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  ServantOperationListViewItemDraw__SetSpriteActive(
    (ServantOperationListViewItemDraw_o *)CanNotSelect,
    maskSprite,
    CanNotSelect,
    v24);
  this = (ServantOperationListViewItemDraw_o *)v6->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_22;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)this, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)v6->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v26 = UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL);
  if ( v26 )
  {
    ServantOperationListViewItemDraw__SetSpriteActive(
      (ServantOperationListViewItemDraw_o *)v26,
      v6->fields.materialTdSprite,
      item->fields._IsMaterialTdSvt_k__BackingField,
      v27);
    if ( item->fields._IsMaterialTdSvt_k__BackingField )
    {
      v28 = v6->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v28, (System_String_o *)StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        this = (ServantOperationListViewItemDraw_o *)v6->fields.servantFaceIcon;
        if ( !this )
          goto LABEL_22;
        v29.fields.x = 0.65;
        v29.fields.y = 1.0;
        v29.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)this, v29, 0LL);
      }
    }
  }
  this = (ServantOperationListViewItemDraw_o *)v6->fields.dragSelect;
  if ( !this
    || (DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)this, -1, 0LL),
        (this = (ServantOperationListViewItemDraw_o *)v6->fields.dragSelect) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(this, item);
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

  if ( (byte_42EC712 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, isSelectEnable, method);
    byte_42EC712 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
      sub_B5D69C(v10, v8);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x24
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x25
  UnityEngine_Object_o *partyIcon; // x23
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x3
  FlashingIconComponent_o *fortificationRootObj; // x0
  _BOOL8 IsParty_k__BackingField; // x1
  UnityEngine_Object_o *baseButton; // x23
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x5

  if ( (byte_42EC70D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, mode, isSelectEnable);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42EC70D = 1;
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
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v17 = UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
        if ( v17 )
        {
          fortificationRootObj = this->fields.partyIcon;
          if ( UserServantEntity_k__BackingField && !item->fields._IsUse_k__BackingField )
          {
            IsParty_k__BackingField = item->fields._IsParty_k__BackingField;
            if ( !fortificationRootObj )
              goto LABEL_30;
          }
          else
          {
            IsParty_k__BackingField = 0LL;
            if ( !fortificationRootObj )
              goto LABEL_30;
          }
          FlashingIconComponent__Set_21625204(fortificationRootObj, IsParty_k__BackingField, 0LL);
        }
        ServantOperationListViewItemDraw__SetSpriteActive(
          (ServantOperationListViewItemDraw_o *)v17,
          this->fields.useSprite,
          item->fields._IsUse_k__BackingField,
          v18);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          fortificationRootObj = (FlashingIconComponent_o *)this->fields.baseButton;
          if ( !fortificationRootObj )
            goto LABEL_30;
          ((void (__fastcall *)(FlashingIconComponent_o *, __int64, void *))fortificationRootObj->klass[1]._1.namespaze)(
            fortificationRootObj,
            1LL,
            fortificationRootObj->klass[1]._1.byval_arg.data);
          fortificationRootObj = (FlashingIconComponent_o *)this->fields.baseButton;
          if ( !fortificationRootObj )
            goto LABEL_30;
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
LABEL_30:
        sub_B5D69C(fortificationRootObj, IsParty_k__BackingField);
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

  if ( (byte_42EC70E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)text, method);
    byte_42EC70E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_B5D69C(v6, v7);
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
        ServantFaceIconComponent__Set_30775392(
          (ServantFaceIconComponent_o *)this,
          item->fields._UserServantEntity_k__BackingField,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0LL);
        return;
      }
    }
LABEL_10:
    sub_B5D69C(this, item);
  }
  if ( isCommandCode )
  {
    if ( !item )
      goto LABEL_10;
    this = (ServantOperationListViewItemDraw_o *)this->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_10;
    ServantFaceIconComponent__Set_30855448(
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

  if ( (byte_42EC70F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, isActive, method);
    byte_42EC70F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B5D69C(gameObject, v7);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UILabel_o *warningLabel; // x19
  __int64 *v25; // x8
  UserServantEntity_o *UserServantEntity_k__BackingField; // x0
  UILabel_o *v27; // x21
  System_String_o *StatusText; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  UILabel_o *fortificationAppointmentLabel; // x20
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  UILabel_o *v34; // x1
  System_String_o *v35; // x2

  v8 = this;
  if ( (byte_42EC710 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, modeKind, isServant);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_6492/*"FORTIFICATION_APPOINTMENT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v18, v19, v20);
    this = (ServantOperationListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42EC710 = 1;
  }
  if ( (unsigned int)(modeKind - 1) < 2 )
  {
    if ( !item )
      goto LABEL_54;
    UserServantEntity_k__BackingField = item->fields._UserServantEntity_k__BackingField;
    if ( !UserServantEntity_k__BackingField || !UserServantEntity__IsHeroine(UserServantEntity_k__BackingField, 0LL) )
      goto LABEL_49;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    this = (ServantOperationListViewItemDraw_o *)TutorialFlag__Get_29295864(126, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_49;
  }
  else if ( modeKind == 3 )
  {
    if ( !item )
      goto LABEL_54;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_54;
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
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v25 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_48:
          v32 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
          v34 = warningLabel;
          v35 = v32;
LABEL_52:
          ServantOperationListViewItemDraw__SetLabelText((ServantOperationListViewItemDraw_o *)v32, v34, v35, v33);
          return;
        }
      }
      goto LABEL_54;
    }
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_54;
    if ( UserServantEntity__IsLeave((UserServantEntity_o *)this, 0LL) )
      goto LABEL_42;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_54;
    if ( UserServantEntity__IsCombineMaterial((UserServantEntity_o *)this, 0LL) )
      goto LABEL_42;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_54;
    if ( UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL) )
      goto LABEL_42;
    this = (ServantOperationListViewItemDraw_o *)item->fields._UserServantEntity_k__BackingField;
    if ( !this )
      goto LABEL_54;
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
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v25 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
          goto LABEL_48;
        }
      }
LABEL_54:
      sub_B5D69C(this, item);
    }
LABEL_49:
    this = (ServantOperationListViewItemDraw_o *)v8->fields.maskSprite;
    if ( this )
    {
      this = (ServantOperationListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v34 = v8->fields.warningLabel;
        v35 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_52;
      }
    }
    goto LABEL_54;
  }
  v27 = v8->fields.warningLabel;
  StatusText = ServantOperationListViewItemDraw__GetStatusText(this, item, 0, 0, (const MethodInfo *)isCommandCode);
  ServantOperationListViewItemDraw__SetLabelText((ServantOperationListViewItemDraw_o *)StatusText, v27, StatusText, v29);
  if ( !item )
    goto LABEL_54;
  if ( item->fields.isFortification )
  {
    ServantOperationListViewItemDraw__SetLabelText(
      this,
      v8->fields.warningLabel,
      (System_String_o *)StringLiteral_1/*""*/,
      v30);
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
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            this = (ServantOperationListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6492/*"FORTIFICATION_APPOINTMENT"*/,
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
    goto LABEL_54;
  }
}