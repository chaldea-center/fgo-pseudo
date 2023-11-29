void __fastcall SelectImageLimitListViewItemDraw___ctor(
        SelectImageLimitListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SelectImageLimitListViewItemDraw__SetButton(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantCostumeMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  UIRangeLabel_o *limitCountRangeLabel; // x21
  struct UIRangeLabel_o **p_limitCountRangeLabel; // x23
  System_String_o *ShortName; // x0
  LocalizationManager_c *v15; // x0
  System_String_o *unknownNameText; // x1
  System_String_o *v17; // x0
  System_String_o *v18; // x22
  __int64 v19; // x1
  UIRangeLabel_o *v20; // x21
  LocalizationManager_c *v21; // x0
  struct LocalizationManager_StaticFields *v22; // x11
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  LocalizationManager_c *v27; // x0
  struct LocalizationManager_StaticFields *static_fields; // x11
  UISprite_o *limitCountButtonSprite; // x0
  __int64 *v30; // x8
  int32_t limitCount; // [xsp+4h] [xbp-3Ch] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FE1D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCostumeMaster___, item);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11938, v7);
    sub_B16FFC(&StringLiteral_16899, v8);
    sub_B16FFC(&StringLiteral_16900, v9);
    byte_40FE1D2 = 1;
  }
  entity = 0LL;
  limitCount = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !item || !Master_WarQuestSelectionMaster )
    goto LABEL_53;
  if ( ServantCostumeMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         item->fields.svtId,
         item->fields.limitCount,
         0LL) )
  {
    p_limitCountRangeLabel = &this->fields.limitCountRangeLabel;
    limitCountRangeLabel = this->fields.limitCountRangeLabel;
    if ( !entity )
      goto LABEL_53;
    ShortName = ServantCostumeEntity__getShortName(entity, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_53;
LABEL_27:
    unknownNameText = ShortName;
    goto LABEL_28;
  }
  p_limitCountRangeLabel = &this->fields.limitCountRangeLabel;
  limitCountRangeLabel = this->fields.limitCountRangeLabel;
  if ( item->fields.limitCount <= 3 )
  {
    limitCount = item->fields.limitCount;
    v17 = System_Int32__ToString((int32_t)&limitCount, 0LL);
    v18 = System_String__Concat_43743732((System_String_o *)StringLiteral_11938, v17, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ShortName = LocalizationManager__Get(v18, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_53;
    goto LABEL_27;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    byte_40F87E5 = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
  }
  if ( !limitCountRangeLabel )
    goto LABEL_53;
  unknownNameText = v15->static_fields->unknownNameText;
LABEL_28:
  UIRangeLabel__Set(limitCountRangeLabel, unknownNameText, 0LL, 1, 0, 0LL);
  v20 = *p_limitCountRangeLabel;
  if ( !item->fields.isSelected )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_40F6254 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, v19);
      byte_40F6254 = 1;
    }
    v27 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager_TypeInfo;
    }
    static_fields = v27->static_fields;
    p_r = &static_fields->normalEffectColor.fields.r;
    p_g = &static_fields->normalEffectColor.fields.g;
    p_b = &static_fields->normalEffectColor.fields.b;
    p_a = &static_fields->normalEffectColor.fields.a;
    if ( v20 )
      goto LABEL_48;
LABEL_53:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6255 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    byte_40F6255 = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager_TypeInfo;
  }
  v22 = v21->static_fields;
  p_r = &v22->selectEffectColor.fields.r;
  p_g = &v22->selectEffectColor.fields.g;
  p_b = &v22->selectEffectColor.fields.b;
  p_a = &v22->selectEffectColor.fields.a;
  if ( !v20 )
    goto LABEL_53;
LABEL_48:
  v33.fields.b = *p_b;
  v33.fields.g = *p_g;
  v33.fields.r = *p_r;
  v33.fields.a = *p_a;
  UIRangeLabel__set_effectColor(v20, v33, 0LL);
  limitCountButtonSprite = this->fields.limitCountButtonSprite;
  if ( !limitCountButtonSprite )
    goto LABEL_53;
  if ( item->fields.isSelected )
    v30 = &StringLiteral_16900;
  else
    v30 = &StringLiteral_16899;
  UISprite__set_spriteName(limitCountButtonSprite, (System_String_o *)*v30, 0LL);
}


void __fastcall SelectImageLimitListViewItemDraw__SetInput(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v12; // x0
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v16; // x2

  if ( (byte_40FE1D1 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FE1D1 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v10 = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !v10
        || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  v10,
                                                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL),
            (v12 = this->fields.baseButton) == 0LL) )
      {
        sub_B170D4();
      }
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v12->klass->vtable._14_SetState.method)(
        v12,
        0LL,
        1LL,
        v12->klass->vtable._15_OnPress.methodPtr);
    }
    servantFaceIconSprite = this->fields.servantFaceIconSprite;
    svtId = item->fields.svtId;
    limitCount = item->fields.limitCount;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceImage(servantFaceIconSprite, svtId, limitCount, 0LL);
    SelectImageLimitListViewItemDraw__SetButton(this, item, v16);
  }
}


void __fastcall SelectImageLimitListViewItemDraw__SetItem(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v10; // x2

  if ( (byte_40FE1D0 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    byte_40FE1D0 = 1;
  }
  if ( item && mode )
  {
    servantFaceIconSprite = this->fields.servantFaceIconSprite;
    svtId = item->fields.svtId;
    limitCount = item->fields.limitCount;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceImage(servantFaceIconSprite, svtId, limitCount, 0LL);
    SelectImageLimitListViewItemDraw__SetButton(this, item, v10);
  }
}