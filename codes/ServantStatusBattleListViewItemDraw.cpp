void __fastcall ServantStatusBattleListViewItemDraw___ctor(
        ServantStatusBattleListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusBattleListViewItemDraw__SetInput(
        ServantStatusBattleListViewItemDraw_o *this,
        ServantStatusBattleListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  _BOOL4 v5; // w19
  _BOOL4 isEnabled; // w21
  _BOOL8 IsSelect; // x0
  UICommonButton_o *baseButton; // x8

  if ( item )
  {
    v5 = isInput;
    isEnabled = item->fields.isEnabled;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    baseButton = this->fields.baseButton;
    if ( !baseButton )
      sub_B0D97C(IsSelect);
    if ( IsSelect & isEnabled & (unsigned int)v5 )
      UICommonButton__SetColliderEnable(baseButton, 0, 1, 0LL);
    else
      UICommonButton__SetButtonEnable(baseButton, isEnabled && v5 && !IsSelect, 1, 0LL);
  }
}


void __fastcall ServantStatusBattleListViewItemDraw__SetItem(
        ServantStatusBattleListViewItemDraw_o *this,
        ServantStatusBattleListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  _BOOL4 isEnabled; // w26
  _BOOL4 isCanSelect; // w25
  _BOOL4 v18; // w23
  _BOOL4 IsSelect; // w0
  __int64 v20; // x1
  bool v21; // w21
  int v22; // w27
  LocalizationManager_c *v23; // x0
  struct LocalizationManager_StaticFields *static_fields; // x11
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  LocalizationManager_c *v29; // x0
  struct LocalizationManager_StaticFields *v30; // x11
  UIRangeLabel_o *nameRangeLabel; // x0
  struct UIRangeLabel_o *v32; // x22
  System_String_o *v33; // x0
  System_String_o *v34; // x23
  System_String_o *v35; // x0
  System_String_o *name; // x1
  __int64 *v37; // x8
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v39; // x1
  UnityEngine_Object_o *v40; // x20
  UnityEngine_Object_o *v41; // x20
  struct UILabel_o *v42; // x19
  System_String_o *v43; // x1
  UnityEngine_Object_o *limitSealObject; // x20
  UnityEngine_Object_o *limitSealLabel; // x20
  int32_t DispLimitCount; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4212D8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, item);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_8410/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_B0D8A4(&StringLiteral_12025/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_B0D8A4(&StringLiteral_17016/*"btn_bg_20"*/, v12);
    sub_B0D8A4(&StringLiteral_12026/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    sub_B0D8A4(&StringLiteral_17017/*"btn_bg_21"*/, v15);
    byte_4212D8F = 1;
  }
  DispLimitCount = 0;
  if ( !item || !mode )
    return;
  DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(item, (const MethodInfo *)item);
  isEnabled = item->fields.isEnabled;
  isCanSelect = item->fields.isCanSelect;
  v18 = item->fields.isEnabled;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  v21 = IsSelect;
  v22 = v18 && IsSelect;
  if ( v18 && IsSelect )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4211436 )
    {
      sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
      byte_4211436 = 1;
    }
    v23 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager_TypeInfo;
    }
    static_fields = v23->static_fields;
    p_r = &static_fields->selectEffectColor.fields.r;
    p_g = &static_fields->selectEffectColor.fields.g;
    p_b = &static_fields->selectEffectColor.fields.b;
    p_a = &static_fields->selectEffectColor.fields.a;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4211435 )
    {
      sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
      byte_4211435 = 1;
    }
    v29 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = LocalizationManager_TypeInfo;
    }
    v30 = v29->static_fields;
    p_r = &v30->normalEffectColor.fields.r;
    p_g = &v30->normalEffectColor.fields.g;
    p_b = &v30->normalEffectColor.fields.b;
    p_a = &v30->normalEffectColor.fields.a;
  }
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( !nameRangeLabel )
    goto LABEL_80;
  v47.fields.b = *p_b;
  v47.fields.g = *p_g;
  v47.fields.r = *p_r;
  v47.fields.a = *p_a;
  UIRangeLabel__set_effectColor(nameRangeLabel, v47, 0LL);
  if ( DispLimitCount >= 11 )
  {
    nameRangeLabel = this->fields.nameRangeLabel;
    if ( !nameRangeLabel )
      goto LABEL_80;
    name = item->fields.name;
  }
  else
  {
    if ( isCanSelect || !item->fields.isMine )
    {
      v32 = this->fields.nameRangeLabel;
      v33 = System_Int32__ToString((int32_t)&DispLimitCount, 0LL);
      v34 = System_String__Concat_43849904((System_String_o *)StringLiteral_12025/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v33, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = LocalizationManager__Get(v34, 0LL);
    }
    else
    {
      v32 = this->fields.nameRangeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = (System_String_o *)StringLiteral_12026/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get(v35, 0LL);
    if ( !v32 )
      goto LABEL_80;
    name = (System_String_o *)nameRangeLabel;
    nameRangeLabel = v32;
  }
  UIRangeLabel__Set(nameRangeLabel, name, 0LL, 1, 0, 0LL);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseSpite;
  if ( !nameRangeLabel )
    goto LABEL_80;
  v37 = &StringLiteral_17017/*"btn_bg_21"*/;
  if ( !v21 )
    v37 = &StringLiteral_17016/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)nameRangeLabel, (System_String_o *)*v37, 0LL);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseButton;
  if ( !nameRangeLabel )
    goto LABEL_80;
  if ( v22 )
  {
    UICommonButton__SetColliderEnable((UICommonButton_o *)nameRangeLabel, 0, 1, 0LL);
    if ( !isCanSelect )
      goto LABEL_66;
  }
  else
  {
    UICommonButton__SetButtonEnable((UICommonButton_o *)nameRangeLabel, isEnabled && !v21, 1, 0LL);
    if ( !isCanSelect )
      goto LABEL_66;
  }
  nameRangeLabel = (UIRangeLabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !nameRangeLabel )
    goto LABEL_80;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)nameRangeLabel,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  nameRangeLabel = (UIRangeLabel_o *)ServantStatusBattleListViewItem__get_SvtId(item, v39);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_80;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
          MasterData_WarQuestSelectionMaster,
          (int32_t)nameRangeLabel,
          DispLimitCount + 1,
          0LL) )
  {
LABEL_66:
    limitSealObject = (UnityEngine_Object_o *)this->fields.limitSealObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(limitSealObject, 0LL, 0LL) )
    {
      nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
      if ( !nameRangeLabel )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRangeLabel, 0, 0LL);
    }
    limitSealLabel = (UnityEngine_Object_o *)this->fields.limitSealLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(limitSealLabel, 0LL, 0LL) )
    {
      nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealLabel;
      if ( nameRangeLabel )
      {
        v43 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_78;
      }
      goto LABEL_80;
    }
    return;
  }
  v40 = (UnityEngine_Object_o *)this->fields.limitSealObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
    if ( !nameRangeLabel )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRangeLabel, 1, 0LL);
  }
  v41 = (UnityEngine_Object_o *)this->fields.limitSealLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    v42 = this->fields.limitSealLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8410/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
    if ( v42 )
    {
      v43 = (System_String_o *)nameRangeLabel;
      nameRangeLabel = (UIRangeLabel_o *)v42;
LABEL_78:
      UILabel__set_text((UILabel_o *)nameRangeLabel, v43, 0LL);
      return;
    }
LABEL_80:
    sub_B0D97C(nameRangeLabel);
  }
}