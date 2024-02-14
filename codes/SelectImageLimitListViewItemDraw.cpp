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
  System_String_o *v14; // x1
  System_String_o *v15; // x0
  System_String_o *v16; // x22
  __int64 v17; // x1
  UIRangeLabel_o *v18; // x21
  float *v19; // x11
  float *v20; // x8
  float *v21; // x9
  float *v22; // x10
  float *v23; // x11
  float *lookup; // x11
  __int64 *v25; // x8
  int32_t limitCount; // [xsp+4h] [xbp-3Ch] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4219E5D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCostumeMaster___, item);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_12025/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v7);
    sub_B0D8A4(&StringLiteral_17016/*"btn_bg_20"*/, v8);
    sub_B0D8A4(&StringLiteral_17017/*"btn_bg_21"*/, v9);
    byte_4219E5D = 1;
  }
  entity = 0LL;
  limitCount = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)entity;
    if ( !entity )
      goto LABEL_53;
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)ServantCostumeEntity__getShortName(entity, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_53;
LABEL_27:
    v14 = (System_String_o *)Master_WarQuestSelectionMaster;
    goto LABEL_28;
  }
  p_limitCountRangeLabel = &this->fields.limitCountRangeLabel;
  limitCountRangeLabel = this->fields.limitCountRangeLabel;
  if ( item->fields.limitCount <= 3 )
  {
    limitCount = item->fields.limitCount;
    v15 = System_Int32__ToString((int32_t)&limitCount, 0LL);
    v16 = System_String__Concat_43849904((System_String_o *)StringLiteral_12025/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v15, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager__Get(v16, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_53;
    goto LABEL_27;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    byte_4212885 = 1;
  }
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  if ( !limitCountRangeLabel )
    goto LABEL_53;
  v14 = *(System_String_o **)&Master_WarQuestSelectionMaster[2].fields._lookup->fields.count;
LABEL_28:
  UIRangeLabel__Set(limitCountRangeLabel, v14, 0LL, 1, 0, 0LL);
  v18 = *p_limitCountRangeLabel;
  if ( !item->fields.isSelected )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4211435 )
    {
      sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
      byte_4211435 = 1;
    }
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    lookup = (float *)Master_WarQuestSelectionMaster[2].fields._lookup;
    v20 = lookup + 20;
    v21 = lookup + 21;
    v22 = lookup + 22;
    v23 = lookup + 23;
    if ( v18 )
      goto LABEL_48;
LABEL_53:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4211436 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    byte_4211436 = 1;
  }
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v19 = (float *)Master_WarQuestSelectionMaster[2].fields._lookup;
  v20 = v19 + 24;
  v21 = v19 + 25;
  v22 = v19 + 26;
  v23 = v19 + 27;
  if ( !v18 )
    goto LABEL_53;
LABEL_48:
  v28.fields.b = *v22;
  v28.fields.g = *v21;
  v28.fields.r = *v20;
  v28.fields.a = *v23;
  UIRangeLabel__set_effectColor(v18, v28, 0LL);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_53;
  if ( item->fields.isSelected )
    v25 = &StringLiteral_17017/*"btn_bg_21"*/;
  else
    v25 = &StringLiteral_17016/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)Master_WarQuestSelectionMaster, (System_String_o *)*v25, 0LL);
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
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v14; // x2

  if ( (byte_4219E5C & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4219E5C = 1;
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
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_WebViewObject
        || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   Component_WebViewObject,
                                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
            (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_B0D97C(Component_WebViewObject);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
        Component_WebViewObject,
        0LL,
        1LL,
        Component_WebViewObject->klass[1]._1.interfaceOffsets);
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
    SelectImageLimitListViewItemDraw__SetButton(this, item, v14);
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

  if ( (byte_4219E5B & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    byte_4219E5B = 1;
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