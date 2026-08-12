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
  _BOOL4 v5; // w20
  __int64 v6; // x1
  bool IsSelect; // w8
  UICommonButton_o *baseButton; // x0

  if ( item )
  {
    v5 = item->fields.isEnabled && isInput;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
    baseButton = this->fields.baseButton;
    if ( IsSelect && v5 )
    {
      if ( baseButton )
      {
        UICommonButton__SetColliderEnable(baseButton, 0, 1, 0);
        return;
      }
LABEL_9:
      sub_2213CDC(baseButton, v6);
    }
    if ( !baseButton )
      goto LABEL_9;
    UICommonButton__SetButtonEnable(baseButton, v5 && !IsSelect, 1, 0);
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
  int32_t v9; // w22
  _BOOL4 isCanSelect; // w25
  _BOOL4 v11; // w23
  __int64 v12; // x1
  __int64 v13; // x2
  _BOOL4 IsSelect; // w21
  int v15; // w27
  int v16; // w8
  LocalizationManager_c *v17; // x0
  struct LocalizationManager_StaticFields *static_fields; // x11
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  LocalizationManager_c *v23; // x0
  struct LocalizationManager_StaticFields *v24; // x11
  UIRangeLabel_o *nameRangeLabel; // x0
  __int64 v26; // x2
  System_String_o *name; // x1
  int v28; // w8
  struct UIRangeLabel_o *v29; // x22
  System_String_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x23
  System_String_o *v34; // x0
  __int64 *v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Object_o *v38; // x20
  __int64 v39; // x2
  UnityEngine_Object_o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  struct UILabel_o *v43; // x19
  System_String_o *v44; // x1
  UnityEngine_Object_o *limitSealObject; // x20
  __int64 v46; // x2
  UnityEngine_Object_o *limitSealLabel; // x20
  int v48; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596BB33 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_8623/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_2213A60(&StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_596BB33 = 1;
  }
  v48 = 0;
  if ( !item || !mode )
    return;
  LimitCountStage = ServantStatusBattleListViewItem__get_LimitCountStage(item, (const MethodInfo *)item);
  isEnabled = item->fields.isEnabled;
  v9 = LimitCountStage;
  isCanSelect = item->fields.isCanSelect;
  v11 = item->fields.isEnabled;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0);
  v15 = v11 && IsSelect;
  v16 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v11 && IsSelect )
  {
    if ( !v16 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    if ( !byte_596ABD6 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596ABD6 = 1;
    }
    v17 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
      v17 = LocalizationManager_TypeInfo;
    }
    static_fields = v17->static_fields;
    p_r = &static_fields->selectEffectColor.fields.r;
    p_g = &static_fields->selectEffectColor.fields.g;
    p_b = &static_fields->selectEffectColor.fields.b;
    p_a = &static_fields->selectEffectColor.fields.a;
  }
  else
  {
    if ( !v16 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    if ( !byte_596ABD5 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596ABD5 = 1;
    }
    v23 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
      v23 = LocalizationManager_TypeInfo;
    }
    v24 = v23->static_fields;
    p_r = &v24->normalEffectColor.fields.r;
    p_g = &v24->normalEffectColor.fields.g;
    p_b = &v24->normalEffectColor.fields.b;
    p_a = &v24->normalEffectColor.fields.a;
  }
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( !nameRangeLabel )
    goto LABEL_68;
  v49.fields.a = *p_a;
  v49.fields.b = *p_b;
  v49.fields.g = *p_g;
  v49.fields.r = *p_r;
  UIRangeLabel__set_effectColor(nameRangeLabel, v49, 0);
  if ( LimitCountUtility__IsCostume(v9, 0) )
  {
    nameRangeLabel = this->fields.nameRangeLabel;
    if ( !nameRangeLabel )
      goto LABEL_68;
    name = item->fields.name;
  }
  else
  {
    if ( isCanSelect || !item->fields.isMine )
    {
      v28 = v9 - 1;
      v29 = this->fields.nameRangeLabel;
      v48 = v28;
      v30 = System_Int32__ToString((int32_t)&v48, 0);
      v33 = System_String__Concat_75651716((System_String_o *)StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v30, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
      v34 = LocalizationManager__Get(v33, 0);
    }
    else
    {
      v29 = this->fields.nameRangeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v26);
      v34 = (System_String_o *)StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get(v34, 0);
    if ( !v29 )
      goto LABEL_68;
    name = (System_String_o *)nameRangeLabel;
    nameRangeLabel = v29;
  }
  UIRangeLabel__Set(nameRangeLabel, name, 0, 1, 0, 0, 0);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseSpite;
  if ( !nameRangeLabel )
    goto LABEL_68;
  v35 = &StringLiteral_18211/*"btn_bg_21"*/;
  if ( !IsSelect )
    v35 = &StringLiteral_18209/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)nameRangeLabel, (System_String_o *)*v35, 0);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseButton;
  if ( v15 )
  {
    if ( !nameRangeLabel )
      goto LABEL_68;
    UICommonButton__SetColliderEnable((UICommonButton_o *)nameRangeLabel, 0, 1, 0);
    if ( !isCanSelect )
      goto LABEL_56;
  }
  else
  {
    if ( !nameRangeLabel )
      goto LABEL_68;
    UICommonButton__SetButtonEnable((UICommonButton_o *)nameRangeLabel, isEnabled && !IsSelect, 1, 0);
    if ( !isCanSelect )
    {
LABEL_56:
      limitSealObject = (UnityEngine_Object_o *)this->fields.limitSealObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
      if ( UnityEngine_Object__op_Inequality(limitSealObject, 0, 0) )
      {
        nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
        if ( !nameRangeLabel )
          goto LABEL_68;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRangeLabel, 0, 0);
      }
      limitSealLabel = (UnityEngine_Object_o *)this->fields.limitSealLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v46);
      if ( UnityEngine_Object__op_Inequality(limitSealLabel, 0, 0) )
      {
        nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealLabel;
        if ( nameRangeLabel )
        {
          v44 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_66;
        }
        goto LABEL_68;
      }
      return;
    }
  }
  if ( !item->fields.isSealed )
    goto LABEL_56;
  v38 = (UnityEngine_Object_o *)this->fields.limitSealObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
  if ( UnityEngine_Object__op_Inequality(v38, 0, 0) )
  {
    nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
    if ( !nameRangeLabel )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRangeLabel, 1, 0);
  }
  v40 = (UnityEngine_Object_o *)this->fields.limitSealLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v39);
  if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
  {
    v43 = this->fields.limitSealLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8623/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
    if ( v43 )
    {
      v44 = (System_String_o *)nameRangeLabel;
      nameRangeLabel = (UIRangeLabel_o *)v43;
LABEL_66:
      UILabel__set_text((UILabel_o *)nameRangeLabel, v44, 0);
      return;
    }
LABEL_68:
    sub_2213CDC(nameRangeLabel, v12);
  }
}