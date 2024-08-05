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
  ServantCostumeMaster_o *Master_object; // x0
  __int64 v11; // x1
  UIRangeLabel_o *limitCountRangeLabel; // x21
  System_String_o *v13; // x1
  System_String_o *v14; // x0
  System_String_o *v15; // x22
  UIRangeLabel_o *v16; // x21
  _BOOL4 isSelected; // w22
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

  if ( (byte_49F9DB2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_ServantCostumeMaster___, item);
    sub_1B64870(&DataManager_TypeInfo, v5);
    sub_1B64870(&LocalizationManager_TypeInfo, v6);
    sub_1B64870(&StringLiteral_11833/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v7);
    sub_1B64870(&StringLiteral_17411/*"btn_bg_20"*/, v8);
    sub_1B64870(&StringLiteral_17412/*"btn_bg_21"*/, v9);
    byte_49F9DB2 = 1;
  }
  entity = 0LL;
  limitCount = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !item || !Master_object )
    goto LABEL_43;
  if ( ServantCostumeMaster__TryGetEntity(Master_object, &entity, item->fields.svtId, item->fields.limitCount, 0LL) )
  {
    Master_object = (ServantCostumeMaster_o *)entity;
    if ( !entity )
      goto LABEL_43;
    limitCountRangeLabel = this->fields.limitCountRangeLabel;
    Master_object = (ServantCostumeMaster_o *)ServantCostumeEntity__getShortName(entity, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_43;
LABEL_23:
    v13 = (System_String_o *)Master_object;
    goto LABEL_24;
  }
  limitCountRangeLabel = this->fields.limitCountRangeLabel;
  if ( item->fields.limitCount <= 3 )
  {
    limitCount = item->fields.limitCount;
    v14 = System_Int32__ToString((int32_t)&limitCount, 0LL);
    v15 = System_String__Concat_61383576((System_String_o *)StringLiteral_11833/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v14, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager__Get(v15, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_43;
    goto LABEL_23;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F9E5A )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, v11);
    byte_49F9E5A = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  if ( !limitCountRangeLabel )
    goto LABEL_43;
  v13 = *(System_String_o **)&Master_object[2].fields._lookup->fields._count;
LABEL_24:
  UIRangeLabel__Set(limitCountRangeLabel, v13, 0LL, 1, 0, 0LL);
  v16 = this->fields.limitCountRangeLabel;
  isSelected = item->fields.isSelected;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( item->fields.isSelected )
      goto LABEL_26;
    goto LABEL_33;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !isSelected )
  {
LABEL_33:
    if ( !byte_49F988B )
    {
      sub_1B64870(&LocalizationManager_TypeInfo, v11);
      byte_49F988B = 1;
    }
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    lookup = (float *)Master_object[2].fields._lookup;
    v19 = lookup + 20;
    v20 = lookup + 21;
    v21 = lookup + 22;
    v22 = lookup + 23;
    if ( v16 )
      goto LABEL_38;
LABEL_43:
    sub_1B64ACC(Master_object, v11);
  }
LABEL_26:
  if ( !byte_49F988C )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, v11);
    byte_49F988C = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v18 = (float *)Master_object[2].fields._lookup;
  v19 = v18 + 24;
  v20 = v18 + 25;
  v21 = v18 + 26;
  v22 = v18 + 27;
  if ( !v16 )
    goto LABEL_43;
LABEL_38:
  v27.fields.a = *v22;
  v27.fields.b = *v21;
  v27.fields.g = *v20;
  v27.fields.r = *v19;
  UIRangeLabel__set_effectColor(v16, v27, 0LL);
  Master_object = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_object )
    goto LABEL_43;
  if ( item->fields.isSelected )
    v24 = &StringLiteral_17412/*"btn_bg_21"*/;
  else
    v24 = &StringLiteral_17411/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v24, 0LL);
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
  UnityEngine_Component_o *Component_object; // x0
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v15; // x2

  if ( (byte_49F9DB1 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, item);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    byte_49F9DB1 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_1B64ACC(Component_object, v10);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
    servantFaceIconSprite = this->fields.servantFaceIconSprite;
    svtId = item->fields.svtId;
    limitCount = item->fields.limitCount;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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

  if ( (byte_49F9DB0 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, item);
    byte_49F9DB0 = 1;
  }
  if ( item && mode )
  {
    servantFaceIconSprite = this->fields.servantFaceIconSprite;
    svtId = item->fields.svtId;
    limitCount = item->fields.limitCount;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceImage(servantFaceIconSprite, svtId, limitCount, 0LL);
    SelectImageLimitListViewItemDraw__SetButton(this, item, v10);
  }
}