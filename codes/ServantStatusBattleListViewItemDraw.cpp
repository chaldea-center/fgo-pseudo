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
      sub_B5D69C(IsSelect, v8);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  _BOOL4 isEnabled; // w26
  _BOOL4 isCanSelect; // w25
  _BOOL4 v36; // w23
  _BOOL4 IsSelect; // w0
  __int64 v38; // x1
  int v39; // w2
  __int64 v40; // x3
  bool v41; // w21
  int v42; // w27
  LocalizationManager_c *v43; // x0
  struct LocalizationManager_StaticFields *static_fields; // x11
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  LocalizationManager_c *v49; // x0
  struct LocalizationManager_StaticFields *v50; // x11
  UIRangeLabel_o *nameRangeLabel; // x0
  struct UIRangeLabel_o *v52; // x22
  System_String_o *v53; // x0
  System_String_o *v54; // x23
  System_String_o *v55; // x0
  System_String_o *name; // x1
  __int64 *v57; // x8
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v59; // x1
  UnityEngine_Object_o *v60; // x20
  UnityEngine_Object_o *v61; // x20
  struct UILabel_o *v62; // x19
  System_String_o *v63; // x1
  UnityEngine_Object_o *limitSealObject; // x20
  UnityEngine_Object_o *limitSealLabel; // x20
  int32_t DispLimitCount; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E6DEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)item, mode, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_8473/*"LIMIT_COUNT_SELECT_SEALED"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12138/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v31, v32, v33);
    byte_42E6DEC = 1;
  }
  DispLimitCount = 0;
  if ( !item || !mode )
    return;
  DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(item, (const MethodInfo *)item);
  isEnabled = item->fields.isEnabled;
  isCanSelect = item->fields.isCanSelect;
  v36 = item->fields.isEnabled;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  v41 = IsSelect;
  v42 = v36 && IsSelect;
  if ( v36 && IsSelect )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E563D )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v38, v39, v40);
      byte_42E563D = 1;
    }
    v43 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v43 = LocalizationManager_TypeInfo;
    }
    static_fields = v43->static_fields;
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
    if ( !byte_42E563C )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v38, v39, v40);
      byte_42E563C = 1;
    }
    v49 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = LocalizationManager_TypeInfo;
    }
    v50 = v49->static_fields;
    p_r = &v50->normalEffectColor.fields.r;
    p_g = &v50->normalEffectColor.fields.g;
    p_b = &v50->normalEffectColor.fields.b;
    p_a = &v50->normalEffectColor.fields.a;
  }
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( !nameRangeLabel )
    goto LABEL_80;
  v67.fields.b = *p_b;
  v67.fields.g = *p_g;
  v67.fields.r = *p_r;
  v67.fields.a = *p_a;
  UIRangeLabel__set_effectColor(nameRangeLabel, v67, 0LL);
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
      v52 = this->fields.nameRangeLabel;
      v53 = System_Int32__ToString((int32_t)&DispLimitCount, 0LL);
      v54 = System_String__Concat_44577788((System_String_o *)StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v53, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v55 = LocalizationManager__Get(v54, 0LL);
    }
    else
    {
      v52 = this->fields.nameRangeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v55 = (System_String_o *)StringLiteral_12138/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get(v55, 0LL);
    if ( !v52 )
      goto LABEL_80;
    name = (System_String_o *)nameRangeLabel;
    nameRangeLabel = v52;
  }
  UIRangeLabel__Set(nameRangeLabel, name, 0LL, 1, 0, 0LL);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseSpite;
  if ( !nameRangeLabel )
    goto LABEL_80;
  v57 = &StringLiteral_17175/*"btn_bg_21"*/;
  if ( !v41 )
    v57 = &StringLiteral_17174/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)nameRangeLabel, (System_String_o *)*v57, 0LL);
  nameRangeLabel = (UIRangeLabel_o *)this->fields.baseButton;
  if ( !nameRangeLabel )
    goto LABEL_80;
  if ( v42 )
  {
    UICommonButton__SetColliderEnable((UICommonButton_o *)nameRangeLabel, 0, 1, 0LL);
    if ( !isCanSelect )
      goto LABEL_66;
  }
  else
  {
    UICommonButton__SetButtonEnable((UICommonButton_o *)nameRangeLabel, isEnabled && !v41, 1, 0LL);
    if ( !isCanSelect )
      goto LABEL_66;
  }
  nameRangeLabel = (UIRangeLabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !nameRangeLabel )
    goto LABEL_80;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)nameRangeLabel,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  nameRangeLabel = (UIRangeLabel_o *)ServantStatusBattleListViewItem__get_SvtId(item, v59);
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
        v63 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_78;
      }
      goto LABEL_80;
    }
    return;
  }
  v60 = (UnityEngine_Object_o *)this->fields.limitSealObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
  {
    nameRangeLabel = (UIRangeLabel_o *)this->fields.limitSealObject;
    if ( !nameRangeLabel )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRangeLabel, 1, 0LL);
  }
  v61 = (UnityEngine_Object_o *)this->fields.limitSealLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
  {
    v62 = this->fields.limitSealLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    nameRangeLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8473/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
    if ( v62 )
    {
      v63 = (System_String_o *)nameRangeLabel;
      nameRangeLabel = (UIRangeLabel_o *)v62;
LABEL_78:
      UILabel__set_text((UILabel_o *)nameRangeLabel, v63, 0LL);
      return;
    }
LABEL_80:
    sub_B5D69C(nameRangeLabel, v38);
  }
}