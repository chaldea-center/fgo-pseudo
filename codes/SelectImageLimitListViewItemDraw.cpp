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
  UIRangeLabel_o *v17; // x21
  float *v18; // x11
  float *v19; // x8
  float *v20; // x9
  float *v21; // x10
  float *v22; // x11
  float *lookup; // x11
  __int64 *v24; // x8
  int32_t limitCount; // [xsp+4h] [xbp-3Ch] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418D106 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCostumeMaster___, item);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v7);
    sub_B2C35C(&StringLiteral_16965/*"btn_bg_20"*/, v8);
    sub_B2C35C(&StringLiteral_16966/*"btn_bg_21"*/, v9);
    byte_418D106 = 1;
  }
  entity = 0LL;
  limitCount = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
    v16 = System_String__Concat_44305532((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v15, 0LL);
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
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    byte_4185BC0 = 1;
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
  v17 = *p_limitCountRangeLabel;
  if ( !item->fields.isSelected )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4184963 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, v11);
      byte_4184963 = 1;
    }
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    lookup = (float *)Master_WarQuestSelectionMaster[2].fields._lookup;
    v19 = lookup + 20;
    v20 = lookup + 21;
    v21 = lookup + 22;
    v22 = lookup + 23;
    if ( v17 )
      goto LABEL_48;
LABEL_53:
    sub_B2C434(Master_WarQuestSelectionMaster, v11);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4184964 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    byte_4184964 = 1;
  }
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v18 = (float *)Master_WarQuestSelectionMaster[2].fields._lookup;
  v19 = v18 + 24;
  v20 = v18 + 25;
  v21 = v18 + 26;
  v22 = v18 + 27;
  if ( !v17 )
    goto LABEL_53;
LABEL_48:
  v27.fields.b = *v21;
  v27.fields.g = *v20;
  v27.fields.r = *v19;
  v27.fields.a = *v22;
  UIRangeLabel__set_effectColor(v17, v27, 0LL);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_53;
  if ( item->fields.isSelected )
    v24 = &StringLiteral_16966/*"btn_bg_21"*/;
  else
    v24 = &StringLiteral_16965/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)Master_WarQuestSelectionMaster, (System_String_o *)*v24, 0LL);
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
  __int64 v10; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v15; // x2

  if ( (byte_418D105 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418D105 = 1;
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
                                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
            (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_B2C434(Component_WebViewObject, v10);
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
    SelectImageLimitListViewItemDraw__SetButton(this, item, v15);
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

  if ( (byte_418D104 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    byte_418D104 = 1;
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