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
  ServantCostumeMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  UIRangeLabel_o *limitCountRangeLabel; // x21
  struct UIRangeLabel_o **p_limitCountRangeLabel; // x23
  System_String_o *v9; // x1
  System_String_o *v10; // x0
  System_String_o *v11; // x22
  UIRangeLabel_o *v12; // x21
  float *v13; // x11
  float *v14; // x8
  float *v15; // x9
  float *v16; // x10
  float *v17; // x11
  float *lookup; // x11
  __int64 *v19; // x8
  int32_t limitCount; // [xsp+4h] [xbp-3Ch] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4357797 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_12158/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_B70694(&StringLiteral_17221/*"btn_bg_20"*/);
    sub_B70694(&StringLiteral_17222/*"btn_bg_21"*/);
    byte_4357797 = 1;
  }
  entity = 0LL;
  limitCount = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
    v9 = (System_String_o *)Master_WarQuestSelectionMaster;
    goto LABEL_28;
  }
  p_limitCountRangeLabel = &this->fields.limitCountRangeLabel;
  limitCountRangeLabel = this->fields.limitCountRangeLabel;
  if ( item->fields.limitCount <= 3 )
  {
    limitCount = item->fields.limitCount;
    v10 = System_Int32__ToString((int32_t)&limitCount, 0LL);
    v11 = System_String__Concat_44758168((System_String_o *)StringLiteral_12158/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v10, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager__Get(v11, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_53;
    goto LABEL_27;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434F6FF )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434F6FF = 1;
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
  v9 = *(System_String_o **)&Master_WarQuestSelectionMaster[2].fields._lookup->fields.count;
LABEL_28:
  UIRangeLabel__Set(limitCountRangeLabel, v9, 0LL, 1, 0, 0LL);
  v12 = *p_limitCountRangeLabel;
  if ( !item->fields.isSelected )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_434E9FD )
    {
      sub_B70694(&LocalizationManager_TypeInfo);
      byte_434E9FD = 1;
    }
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    lookup = (float *)Master_WarQuestSelectionMaster[2].fields._lookup;
    v14 = lookup + 20;
    v15 = lookup + 21;
    v16 = lookup + 22;
    v17 = lookup + 23;
    if ( v12 )
      goto LABEL_48;
LABEL_53:
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434E9FE )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434E9FE = 1;
  }
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v13 = (float *)Master_WarQuestSelectionMaster[2].fields._lookup;
  v14 = v13 + 24;
  v15 = v13 + 25;
  v16 = v13 + 26;
  v17 = v13 + 27;
  if ( !v12 )
    goto LABEL_53;
LABEL_48:
  v22.fields.b = *v16;
  v22.fields.g = *v15;
  v22.fields.r = *v14;
  v22.fields.a = *v17;
  UIRangeLabel__set_effectColor(v12, v22, 0LL);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_53;
  if ( item->fields.isSelected )
    v19 = &StringLiteral_17222/*"btn_bg_21"*/;
  else
    v19 = &StringLiteral_17221/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)Master_WarQuestSelectionMaster, (System_String_o *)*v19, 0LL);
}


void __fastcall SelectImageLimitListViewItemDraw__SetInput(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v13; // x2

  if ( (byte_4357796 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357796 = 1;
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
                                                                   (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
            (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_B7076C(Component_WebViewObject, v8);
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
    SelectImageLimitListViewItemDraw__SetButton(this, item, v13);
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

  if ( (byte_4357795 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    byte_4357795 = 1;
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