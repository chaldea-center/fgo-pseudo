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
  __int64 v8; // x1
  UICommonButton_o *baseButton; // x8

  if ( item )
  {
    v5 = isInput;
    isEnabled = item->fields.isEnabled;
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
    baseButton = this->fields.baseButton;
    if ( !baseButton )
      sub_1BCAA3C(IsSelect, v8);
    if ( IsSelect & isEnabled & (unsigned int)v5 )
      UICommonButton__SetColliderEnable(baseButton, 0, 1, 0LL);
    else
      UICommonButton__SetButtonEnable(baseButton, isEnabled && v5 && !IsSelect, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewItemDraw__SetItem(
        ServantStatusBattleListViewItemDraw_o *this,
        ServantStatusBattleListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  _BOOL4 isEnabled; // w26
  _BOOL4 isCanSelect; // w25
  _BOOL4 v27; // w23
  _BOOL4 IsSelect; // w0
  __int64 v29; // x1
  __int64 v30; // x2
  bool v31; // w21
  int v32; // w27
  LocalizationManager_c *v33; // x0
  struct LocalizationManager_StaticFields *static_fields; // x11
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  LocalizationManager_c *v39; // x0
  struct LocalizationManager_StaticFields *v40; // x11
  UIRangeLabel_o *nameRangeLabel; // x0
  struct UIRangeLabel_o *v42; // x22
  System_String_o *v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x23
  System_String_o *v46; // x0
  System_String_o *name; // x1
  __int64 *v48; // x8
  __int64 v49; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v51; // x1
  UnityEngine_Object_o *v52; // x20
  UnityEngine_Object_o *v53; // x20
  __int64 v54; // x1
  struct UILabel_o *v55; // x19
  System_String_o *v56; // x1
  UnityEngine_Object_o *limitSealObject; // x20
  UnityEngine_Object_o *limitSealLabel; // x20
  int32_t DispLimitCount; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1217B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_8374/*"LIMIT_COUNT_SELECT_SEALED"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12024/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v23, v24);
    byte_4B1217B = 1;
  }
  if ( !item || !mode )
    return;
  DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(item, (const MethodInfo *)item);
  isEnabled = item->fields.isEnabled;
  isCanSelect = item->fields.isCanSelect;
  v27 = item->fields.isEnabled;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  v31 = IsSelect;
  v32 = v27 && IsSelect;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( (v32 & 1) != 0 )
    {
LABEL_7:
      if ( !byte_4B11134 )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
        byte_4B11134 = 1;
      }
      v33 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
        v33 = LocalizationManager_TypeInfo;
      }
      static_fields = v33->static_fields;
      p_r = &static_fields->selectEffectColor.fields.r;
      p_g = &static_fields->selectEffectColor.fields.g;
      p_b = &static_fields->selectEffectColor.fields.b;
      p_a = &static_fields->selectEffectColor.fields.a;
      goto LABEL_18;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    if ( (v32 & 1) != 0 )
      goto LABEL_7;
  }
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    byte_4B11133 = 1;
  }
  v39 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    v39 = LocalizationManager_TypeInfo;
  }
  v40 = v39->static_fields;
  p_r = &v40->normalEffectColor.fields.r;
  p_g = &v40->normalEffectColor.fields.g;
  p_b = &v40->normalEffectColor.fields.b;
  p_a = &v40->normalEffectColor.fields.a;
LABEL_18:
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( !nameRangeLabel )
    goto LABEL_67;
  v60.fields.a = *p_a;
  v60.fields.b = *p_b;
  v60.fields.g = *p_g;
  v60.fields.r = *p_r;
  UIRangeLabel__set_effectColor(nameRangeLabel, v60, 0LL);
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
      v42 = this->fields.nameRangeLabel;
      v43 = System_Int32__ToString((int32_t)&DispLimitCount, 0LL);
      v45 = System_String__Concat_62401220((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v43, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
      v46 = LocalizationManager__Get(v45, 0LL);
    }
    else
    {
      v42 = this->fields.nameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
      v46 = (System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get(v46, 0LL);
    if ( !v42 )
      goto LABEL_67;
    name = (System_String_o *)nameRangeLabel;
    nameRangeLabel = v42;
  }
  UIRangeLabel__Set(nameRangeLabel, name, 0LL, 1, 0, 0LL);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseSpite;
  if ( !nameRangeLabel )
    goto LABEL_67;
  v48 = &StringLiteral_17653/*"btn_bg_21"*/;
  if ( !v31 )
    v48 = &StringLiteral_17652/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)nameRangeLabel, (System_String_o *)*v48, 0LL);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseButton;
  if ( !nameRangeLabel )
    goto LABEL_67;
  if ( v32 )
  {
    UICommonButton__SetColliderEnable((UICommonButton_o *)nameRangeLabel, 0, 1, 0LL);
    if ( !isCanSelect )
      goto LABEL_55;
  }
  else
  {
    UICommonButton__SetButtonEnable((UICommonButton_o *)nameRangeLabel, isEnabled && !v31, 1, 0LL);
    if ( !isCanSelect )
      goto LABEL_55;
  }
  nameRangeLabel = (UIRangeLabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !nameRangeLabel )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)nameRangeLabel,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  nameRangeLabel = (UIRangeLabel_o *)ServantStatusBattleListViewItem__get_SvtId(item, v51);
  if ( !MasterData_object )
    goto LABEL_67;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
          (ServantLimitImageMaster_o *)MasterData_object,
          (int32_t)nameRangeLabel,
          DispLimitCount + 1,
          0LL) )
  {
LABEL_55:
    limitSealObject = (UnityEngine_Object_o *)this->fields.limitSealObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
    if ( UnityEngine_Object__op_Inequality(limitSealObject, 0LL, 0LL) )
    {
      nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
      if ( !nameRangeLabel )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRangeLabel, 0, 0LL);
    }
    limitSealLabel = (UnityEngine_Object_o *)this->fields.limitSealLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( UnityEngine_Object__op_Inequality(limitSealLabel, 0LL, 0LL) )
    {
      nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealLabel;
      if ( nameRangeLabel )
      {
        v56 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_65;
      }
      goto LABEL_67;
    }
    return;
  }
  v52 = (UnityEngine_Object_o *)this->fields.limitSealObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
  {
    nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
    if ( !nameRangeLabel )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRangeLabel, 1, 0LL);
  }
  v53 = (UnityEngine_Object_o *)this->fields.limitSealLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
  {
    v55 = this->fields.limitSealLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8374/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
    if ( v55 )
    {
      v56 = (System_String_o *)nameRangeLabel;
      nameRangeLabel = (UIRangeLabel_o *)v55;
LABEL_65:
      UILabel__set_text((UILabel_o *)nameRangeLabel, v56, 0LL);
      return;
    }
LABEL_67:
    sub_1BCAA3C(nameRangeLabel, v29);
  }
}