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
  __int64 v16; // x1
  UIRangeLabel_o *v17; // x21
  _BOOL4 isSelected; // w22
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

  if ( (byte_49F7CC2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCostumeMaster___, item);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_11830/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v7);
    sub_1B640C8(&StringLiteral_17409/*"btn_bg_20"*/, v8);
    sub_1B640C8(&StringLiteral_17410/*"btn_bg_21"*/, v9);
    byte_49F7CC2 = 1;
  }
  entity = 0LL;
  limitCount = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
    v15 = System_String__Concat_61375396((System_String_o *)StringLiteral_11830/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v14, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager__Get(v15, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_43;
    goto LABEL_23;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F7D6A )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    byte_49F7D6A = 1;
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
  v17 = this->fields.limitCountRangeLabel;
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
    if ( !byte_49F779B )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, v16);
      byte_49F779B = 1;
    }
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    lookup = (float *)Master_object[2].fields._lookup;
    v20 = lookup + 20;
    v21 = lookup + 21;
    v22 = lookup + 22;
    v23 = lookup + 23;
    if ( v17 )
      goto LABEL_38;
LABEL_43:
    sub_1B64324(Master_object);
  }
LABEL_26:
  if ( !byte_49F779C )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    byte_49F779C = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v19 = (float *)Master_object[2].fields._lookup;
  v20 = v19 + 24;
  v21 = v19 + 25;
  v22 = v19 + 26;
  v23 = v19 + 27;
  if ( !v17 )
    goto LABEL_43;
LABEL_38:
  v28.fields.a = *v23;
  v28.fields.b = *v22;
  v28.fields.g = *v21;
  v28.fields.r = *v20;
  UIRangeLabel__set_effectColor(v17, v28, 0LL);
  Master_object = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_object )
    goto LABEL_43;
  if ( item->fields.isSelected )
    v25 = &StringLiteral_17410/*"btn_bg_21"*/;
  else
    v25 = &StringLiteral_17409/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v25, 0LL);
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
  UnityEngine_Component_o *Component_object; // x0
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v14; // x2

  if ( (byte_49F7CC1 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49F7CC1 = 1;
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
                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_1B64324(Component_object);
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

  if ( (byte_49F7CC0 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    byte_49F7CC0 = 1;
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