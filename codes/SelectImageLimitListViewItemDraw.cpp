void SelectImageLimitListViewItemDraw___ctor(SelectImageLimitListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SelectImageLimitListViewItemDraw__SetButton(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *Master_object; // x0
  UIRangeLabel_o *limitCountRangeLabel; // x21
  System_String_o *v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x22
  UIRangeLabel_o *v10; // x21
  _BOOL4 isSelected; // w22
  float *v12; // x11
  float *v13; // x8
  float *v14; // x9
  float *v15; // x10
  float *v16; // x11
  float *list; // x11
  __int64 *v18; // x8
  int32_t limitCount; // [xsp+4h] [xbp-3Ch] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C32C8D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C32C20(&StringLiteral_17445/*"btn_bg_20"*/);
    sub_1C32C20(&StringLiteral_17446/*"btn_bg_21"*/);
    byte_4C32C8D = 1;
  }
  entity = 0;
  limitCount = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !item || !Master_object )
    goto LABEL_43;
  if ( ServantCostumeMaster__TryGetEntity(Master_object, &entity, item->fields.svtId, item->fields.limitCount, 0) )
  {
    Master_object = (ServantCostumeMaster_o *)entity;
    if ( !entity )
      goto LABEL_43;
    limitCountRangeLabel = this->fields.limitCountRangeLabel;
    Master_object = (ServantCostumeMaster_o *)ServantCostumeEntity__getShortName(entity, 0);
    if ( !limitCountRangeLabel )
      goto LABEL_43;
LABEL_23:
    v7 = (System_String_o *)Master_object;
    goto LABEL_24;
  }
  limitCountRangeLabel = this->fields.limitCountRangeLabel;
  if ( item->fields.limitCount <= 3 )
  {
    limitCount = item->fields.limitCount;
    v8 = System_Int32__ToString((int32_t)&limitCount, 0);
    v9 = System_String__Concat_63518544((System_String_o *)StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v8, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager__Get(v9, 0);
    if ( !limitCountRangeLabel )
      goto LABEL_43;
    goto LABEL_23;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C32D4C )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32D4C = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  if ( !limitCountRangeLabel )
    goto LABEL_43;
  v7 = *(System_String_o **)&Master_object[2].fields.list->fields._blockReentrancyCount;
LABEL_24:
  UIRangeLabel__Set(limitCountRangeLabel, v7, 0, 1, 0, 0, 0);
  v10 = this->fields.limitCountRangeLabel;
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
    if ( !byte_4C32194 )
    {
      sub_1C32C20(&LocalizationManager_TypeInfo);
      byte_4C32194 = 1;
    }
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    list = (float *)Master_object[2].fields.list;
    v13 = list + 20;
    v14 = list + 21;
    v15 = list + 22;
    v16 = list + 23;
    if ( v10 )
      goto LABEL_38;
LABEL_43:
    sub_1C32E7C(Master_object);
  }
LABEL_26:
  if ( !byte_4C32195 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32195 = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v12 = (float *)Master_object[2].fields.list;
  v13 = v12 + 24;
  v14 = v12 + 25;
  v15 = v12 + 26;
  v16 = v12 + 27;
  if ( !v10 )
    goto LABEL_43;
LABEL_38:
  v21.fields.a = *v16;
  v21.fields.b = *v15;
  v21.fields.g = *v14;
  v21.fields.r = *v13;
  UIRangeLabel__set_effectColor(v10, v21, 0);
  Master_object = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_object )
    goto LABEL_43;
  if ( item->fields.isSelected )
    v18 = &StringLiteral_17446/*"btn_bg_21"*/;
  else
    v18 = &StringLiteral_17445/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v18, 0);
}


void SelectImageLimitListViewItemDraw__SetInput(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *Component_object; // x0
  UISprite_o *servantFaceIconSprite; // x21
  int32_t limitCount; // w22
  int32_t svtId; // w23
  const MethodInfo *v12; // x2

  if ( (byte_4C32C8C & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32C8C = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
      {
        sub_1C32E7C(Component_object);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    servantFaceIconSprite = this->fields.servantFaceIconSprite;
    svtId = item->fields.svtId;
    limitCount = item->fields.limitCount;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceImage(servantFaceIconSprite, svtId, limitCount, 1, 0, 0);
    SelectImageLimitListViewItemDraw__SetButton(this, item, v12);
  }
}


void SelectImageLimitListViewItemDraw__SetItem(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *servantFaceIconSprite; // x21
  int32_t limitCount; // w22
  int32_t svtId; // w23
  const MethodInfo *v10; // x2

  if ( (byte_4C32C8B & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C32C8B = 1;
  }
  if ( item && mode )
  {
    servantFaceIconSprite = this->fields.servantFaceIconSprite;
    svtId = item->fields.svtId;
    limitCount = item->fields.limitCount;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceImage(servantFaceIconSprite, svtId, limitCount, 1, 0, 0);
    SelectImageLimitListViewItemDraw__SetButton(this, item, v10);
  }
}