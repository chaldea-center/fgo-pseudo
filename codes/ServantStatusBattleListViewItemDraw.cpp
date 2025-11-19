void ServantStatusBattleListViewItemDraw___ctor(ServantStatusBattleListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusBattleListViewItemDraw__SetInput(
        ServantStatusBattleListViewItemDraw_o *this,
        ServantStatusBattleListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  _BOOL4 v5; // w19
  _BOOL4 isEnabled; // w21
  _BOOL8 IsSelect; // x0
  __int64 v8; // x1
  UICommonButton_o *baseButton; // x8

  if ( item )
  {
    v5 = isInput;
    isEnabled = item->fields.isEnabled;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
    baseButton = this->fields.baseButton;
    if ( !baseButton )
      sub_1C6BC60(IsSelect, v8);
    if ( IsSelect & isEnabled & (unsigned int)v5 )
      UICommonButton__SetColliderEnable(baseButton, 0, 1, 0);
    else
      UICommonButton__SetButtonEnable(baseButton, isEnabled && v5 && !IsSelect, 1, 0);
  }
}


void ServantStatusBattleListViewItemDraw__SetItem(
        ServantStatusBattleListViewItemDraw_o *this,
        ServantStatusBattleListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  _BOOL4 isEnabled; // w26
  _BOOL4 isCanSelect; // w25
  _BOOL4 v9; // w23
  _BOOL4 IsSelect; // w0
  __int64 v11; // x1
  bool v12; // w21
  int v13; // w27
  LocalizationManager_c *v14; // x0
  struct LocalizationManager_StaticFields *static_fields; // x11
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  LocalizationManager_c *v20; // x0
  struct LocalizationManager_StaticFields *v21; // x11
  UIRangeLabel_o *nameRangeLabel; // x0
  struct UIRangeLabel_o *v23; // x22
  System_String_o *v24; // x0
  System_String_o *v25; // x23
  System_String_o *v26; // x0
  System_String_o *name; // x1
  __int64 *v28; // x8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v30; // x1
  UnityEngine_Object_o *v31; // x20
  UnityEngine_Object_o *v32; // x20
  struct UILabel_o *v33; // x19
  System_String_o *v34; // x1
  UnityEngine_Object_o *limitSealObject; // x20
  UnityEngine_Object_o *limitSealLabel; // x20
  int32_t DispLimitCount; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB1581 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_8272/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1C6BA08(&StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C6BA08(&StringLiteral_17462/*"btn_bg_20"*/);
    sub_1C6BA08(&StringLiteral_11940/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_17463/*"btn_bg_21"*/);
    byte_4CB1581 = 1;
  }
  if ( !item || !mode )
    return;
  DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(item, (const MethodInfo *)item);
  isEnabled = item->fields.isEnabled;
  isCanSelect = item->fields.isCanSelect;
  v9 = item->fields.isEnabled;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  v12 = IsSelect;
  v13 = v9 && IsSelect;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( (v13 & 1) != 0 )
    {
LABEL_7:
      if ( !byte_4CB0A47 )
      {
        sub_1C6BA08(&LocalizationManager_TypeInfo);
        byte_4CB0A47 = 1;
      }
      v14 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = LocalizationManager_TypeInfo;
      }
      static_fields = v14->static_fields;
      p_r = &static_fields->selectEffectColor.fields.r;
      p_g = &static_fields->selectEffectColor.fields.g;
      p_b = &static_fields->selectEffectColor.fields.b;
      p_a = &static_fields->selectEffectColor.fields.a;
      goto LABEL_18;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( (v13 & 1) != 0 )
      goto LABEL_7;
  }
  if ( !byte_4CB0A46 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB0A46 = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager_TypeInfo;
  }
  v21 = v20->static_fields;
  p_r = &v21->normalEffectColor.fields.r;
  p_g = &v21->normalEffectColor.fields.g;
  p_b = &v21->normalEffectColor.fields.b;
  p_a = &v21->normalEffectColor.fields.a;
LABEL_18:
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( !nameRangeLabel )
    goto LABEL_67;
  v38.fields.a = *p_a;
  v38.fields.b = *p_b;
  v38.fields.g = *p_g;
  v38.fields.r = *p_r;
  UIRangeLabel__set_effectColor(nameRangeLabel, v38, 0);
  if ( DispLimitCount >= 11 )
  {
    nameRangeLabel = this->fields.nameRangeLabel;
    if ( !nameRangeLabel )
      goto LABEL_67;
    name = item->fields.name;
  }
  else
  {
    if ( isCanSelect || !item->fields.isMine )
    {
      v23 = this->fields.nameRangeLabel;
      v24 = System_Int32__ToString((int32_t)&DispLimitCount, 0);
      v25 = System_String__Concat_63966792((System_String_o *)StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v24, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get(v25, 0);
    }
    else
    {
      v23 = this->fields.nameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = (System_String_o *)StringLiteral_11940/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get(v26, 0);
    if ( !v23 )
      goto LABEL_67;
    name = (System_String_o *)nameRangeLabel;
    nameRangeLabel = v23;
  }
  UIRangeLabel__Set(nameRangeLabel, name, 0, 1, 0, 0, 0);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseSpite;
  if ( !nameRangeLabel )
    goto LABEL_67;
  v28 = &StringLiteral_17463/*"btn_bg_21"*/;
  if ( !v12 )
    v28 = &StringLiteral_17462/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)nameRangeLabel, (System_String_o *)*v28, 0);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseButton;
  if ( !nameRangeLabel )
    goto LABEL_67;
  if ( v13 )
  {
    UICommonButton__SetColliderEnable((UICommonButton_o *)nameRangeLabel, 0, 1, 0);
    if ( !isCanSelect )
      goto LABEL_55;
  }
  else
  {
    UICommonButton__SetButtonEnable((UICommonButton_o *)nameRangeLabel, isEnabled && !v12, 1, 0);
    if ( !isCanSelect )
      goto LABEL_55;
  }
  nameRangeLabel = (UIRangeLabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !nameRangeLabel )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameRangeLabel,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  nameRangeLabel = (UIRangeLabel_o *)ServantStatusBattleListViewItem__get_SvtId(item, v30);
  if ( !MasterData_object )
    goto LABEL_67;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
          (ServantLimitImageMaster_o *)MasterData_object,
          (int32_t)nameRangeLabel,
          DispLimitCount + 1,
          0) )
  {
LABEL_55:
    limitSealObject = (UnityEngine_Object_o *)this->fields.limitSealObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(limitSealObject, 0, 0) )
    {
      nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
      if ( !nameRangeLabel )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRangeLabel, 0, 0);
    }
    limitSealLabel = (UnityEngine_Object_o *)this->fields.limitSealLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(limitSealLabel, 0, 0) )
    {
      nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealLabel;
      if ( nameRangeLabel )
      {
        v34 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_65;
      }
      goto LABEL_67;
    }
    return;
  }
  v31 = (UnityEngine_Object_o *)this->fields.limitSealObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
    nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
    if ( !nameRangeLabel )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRangeLabel, 1, 0);
  }
  v32 = (UnityEngine_Object_o *)this->fields.limitSealLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
  {
    v33 = this->fields.limitSealLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8272/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
    if ( v33 )
    {
      v34 = (System_String_o *)nameRangeLabel;
      nameRangeLabel = (UIRangeLabel_o *)v33;
LABEL_65:
      UILabel__set_text((UILabel_o *)nameRangeLabel, v34, 0);
      return;
    }
LABEL_67:
    sub_1C6BC60(nameRangeLabel, v11);
  }
}