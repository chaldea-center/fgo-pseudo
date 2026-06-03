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
      sub_1D0F30C(IsSelect, v8);
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
  int32_t LimitCountStage; // w0
  _BOOL4 isEnabled; // w26
  _BOOL4 isCanSelect; // w25
  int32_t v10; // w22
  _BOOL4 v11; // w23
  _BOOL4 IsSelect; // w0
  __int64 v13; // x1
  bool v14; // w21
  int v15; // w27
  LocalizationManager_c *v16; // x0
  struct LocalizationManager_StaticFields *static_fields; // x11
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  LocalizationManager_c *v22; // x0
  struct LocalizationManager_StaticFields *v23; // x11
  UIRangeLabel_o *nameRangeLabel; // x0
  System_String_o *name; // x1
  struct UIRangeLabel_o *v26; // x22
  System_String_o *v27; // x0
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  __int64 *v30; // x8
  UnityEngine_Object_o *v31; // x20
  UnityEngine_Object_o *v32; // x20
  struct UILabel_o *v33; // x19
  System_String_o *v34; // x1
  UnityEngine_Object_o *limitSealObject; // x20
  UnityEngine_Object_o *limitSealLabel; // x20
  int v37; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E72DD6 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8375/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1D0F0B4(&StringLiteral_12111/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1D0F0B4(&StringLiteral_17707/*"btn_bg_20"*/);
    sub_1D0F0B4(&StringLiteral_12112/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_17709/*"btn_bg_21"*/);
    byte_4E72DD6 = 1;
  }
  v37 = 0;
  if ( !item || !mode )
    return;
  LimitCountStage = ServantStatusBattleListViewItem__get_LimitCountStage(item, (const MethodInfo *)item);
  isEnabled = item->fields.isEnabled;
  isCanSelect = item->fields.isCanSelect;
  v10 = LimitCountStage;
  v11 = item->fields.isEnabled;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  v14 = IsSelect;
  v15 = v11 && IsSelect;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( (v15 & 1) != 0 )
    {
LABEL_7:
      if ( !byte_4E71D16 )
      {
        sub_1D0F0B4(&LocalizationManager_TypeInfo);
        byte_4E71D16 = 1;
      }
      v16 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = LocalizationManager_TypeInfo;
      }
      static_fields = v16->static_fields;
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
    if ( (v15 & 1) != 0 )
      goto LABEL_7;
  }
  if ( !byte_4E71D15 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E71D15 = 1;
  }
  v22 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager_TypeInfo;
  }
  v23 = v22->static_fields;
  p_r = &v23->normalEffectColor.fields.r;
  p_g = &v23->normalEffectColor.fields.g;
  p_b = &v23->normalEffectColor.fields.b;
  p_a = &v23->normalEffectColor.fields.a;
LABEL_18:
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( !nameRangeLabel )
    goto LABEL_65;
  v38.fields.a = *p_a;
  v38.fields.b = *p_b;
  v38.fields.g = *p_g;
  v38.fields.r = *p_r;
  UIRangeLabel__set_effectColor(nameRangeLabel, v38, 0);
  if ( LimitCountUtility__IsCostume(v10, 0) )
  {
    nameRangeLabel = this->fields.nameRangeLabel;
    if ( !nameRangeLabel )
      goto LABEL_65;
    name = item->fields.name;
  }
  else
  {
    if ( isCanSelect || !item->fields.isMine )
    {
      v37 = v10 - 1;
      v26 = this->fields.nameRangeLabel;
      v27 = System_Int32__ToString((int32_t)&v37, 0);
      v28 = System_String__Concat_65562772((System_String_o *)StringLiteral_12111/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v27, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = LocalizationManager__Get(v28, 0);
    }
    else
    {
      v26 = this->fields.nameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = (System_String_o *)StringLiteral_12112/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get(v29, 0);
    if ( !v26 )
      goto LABEL_65;
    name = (System_String_o *)nameRangeLabel;
    nameRangeLabel = v26;
  }
  UIRangeLabel__Set(nameRangeLabel, name, 0, 1, 0, 0, 0);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseSpite;
  if ( !nameRangeLabel )
    goto LABEL_65;
  v30 = &StringLiteral_17709/*"btn_bg_21"*/;
  if ( !v14 )
    v30 = &StringLiteral_17707/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)nameRangeLabel, (System_String_o *)*v30, 0);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseButton;
  if ( !nameRangeLabel )
    goto LABEL_65;
  if ( v15 )
  {
    UICommonButton__SetColliderEnable((UICommonButton_o *)nameRangeLabel, 0, 1, 0);
    if ( !isCanSelect )
    {
LABEL_53:
      limitSealObject = (UnityEngine_Object_o *)this->fields.limitSealObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(limitSealObject, 0, 0) )
      {
        nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
        if ( !nameRangeLabel )
          goto LABEL_65;
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
          goto LABEL_63;
        }
        goto LABEL_65;
      }
      return;
    }
  }
  else
  {
    UICommonButton__SetButtonEnable((UICommonButton_o *)nameRangeLabel, isEnabled && !v14, 1, 0);
    if ( !isCanSelect )
      goto LABEL_53;
  }
  if ( !item->fields.isSealed )
    goto LABEL_53;
  v31 = (UnityEngine_Object_o *)this->fields.limitSealObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
    nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
    if ( !nameRangeLabel )
      goto LABEL_65;
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
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8375/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
    if ( v33 )
    {
      v34 = (System_String_o *)nameRangeLabel;
      nameRangeLabel = (UIRangeLabel_o *)v33;
LABEL_63:
      UILabel__set_text((UILabel_o *)nameRangeLabel, v34, 0);
      return;
    }
LABEL_65:
    sub_1D0F30C(nameRangeLabel, v13);
  }
}