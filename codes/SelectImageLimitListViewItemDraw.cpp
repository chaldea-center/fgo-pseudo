void SelectImageLimitListViewItemDraw___ctor(SelectImageLimitListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SelectImageLimitListViewItemDraw__SetButton(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        const MethodInfo *method)
{
  int v5; // w8
  ServantCostumeMaster_o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UIRangeLabel_o *limitCountRangeLabel; // x21
  System_String_o *v10; // x1
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x22
  __int64 v15; // x2
  UIRangeLabel_o *v16; // x21
  int v17; // w8
  float *v18; // x11
  float *v19; // x8
  float *v20; // x9
  float *v21; // x10
  float *v22; // x11
  float *list; // x11
  __int64 *v24; // x8
  int32_t limitCount; // [xsp+4h] [xbp-3Ch] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59337C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_21FFC50(&StringLiteral_18171/*"btn_bg_20"*/);
    sub_21FFC50(&StringLiteral_18173/*"btn_bg_21"*/);
    byte_59337C6 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  limitCount = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, method);
  Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !item || !Master_object )
    goto LABEL_44;
  if ( ServantCostumeMaster__TryGetEntity(Master_object, &entity, item->fields.svtId, item->fields.limitCount, 0) )
  {
    Master_object = (ServantCostumeMaster_o *)entity;
    if ( !entity )
      goto LABEL_44;
    limitCountRangeLabel = this->fields.limitCountRangeLabel;
    Master_object = (ServantCostumeMaster_o *)ServantCostumeEntity__getShortName(entity, 0);
    if ( !limitCountRangeLabel )
      goto LABEL_44;
LABEL_23:
    v10 = (System_String_o *)Master_object;
    goto LABEL_24;
  }
  limitCountRangeLabel = this->fields.limitCountRangeLabel;
  if ( item->fields.limitCount <= 3 )
  {
    limitCount = item->fields.limitCount;
    v11 = System_Int32__ToString((int32_t)&limitCount, 0);
    v14 = System_String__Concat_75438412((System_String_o *)StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager__Get(v14, 0);
    if ( !limitCountRangeLabel )
      goto LABEL_44;
    goto LABEL_23;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  if ( !byte_593385D )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_593385D = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  if ( !limitCountRangeLabel )
    goto LABEL_44;
  v10 = *(System_String_o **)&Master_object[2].fields.list->fields._blockReentrancyCount;
LABEL_24:
  UIRangeLabel__Set(limitCountRangeLabel, v10, 0, 1, 0, 0, 0);
  v16 = this->fields.limitCountRangeLabel;
  v17 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !item->fields.isSelected )
  {
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v15);
    if ( !byte_5932AD3 )
    {
      sub_21FFC50(&LocalizationManager_TypeInfo);
      byte_5932AD3 = 1;
    }
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v15);
      Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    list = (float *)Master_object[2].fields.list;
    v19 = list + 20;
    v20 = list + 21;
    v21 = list + 22;
    v22 = list + 23;
    if ( v16 )
      goto LABEL_40;
LABEL_44:
    sub_21FFECC(Master_object, v7);
  }
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v15);
  if ( !byte_5932AD4 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD4 = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v15);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v18 = (float *)Master_object[2].fields.list;
  v19 = v18 + 24;
  v20 = v18 + 25;
  v21 = v18 + 26;
  v22 = v18 + 27;
  if ( !v16 )
    goto LABEL_44;
LABEL_40:
  v27.fields.a = *v22;
  v27.fields.b = *v21;
  v27.fields.g = *v20;
  v27.fields.r = *v19;
  UIRangeLabel__set_effectColor(v16, v27, 0);
  Master_object = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_object )
    goto LABEL_44;
  v24 = &StringLiteral_18171/*"btn_bg_20"*/;
  if ( item->fields.isSelected )
    v24 = &StringLiteral_18173/*"btn_bg_21"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v24, 0);
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitListViewItemDraw__SetInput(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *Component_object; // x0
  UISprite_o *servantFaceIconSprite; // x21
  int32_t svtId; // w22
  int32_t limitCount; // w23
  const MethodInfo *v14; // x2

  if ( (byte_59337C5 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59337C5 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
      {
        sub_21FFECC(Component_object, v8);
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
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v9);
    AtlasManager__SetFaceImage(servantFaceIconSprite, svtId, limitCount, 1, 0, 0, 0);
    SelectImageLimitListViewItemDraw__SetButton(this, item, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitListViewItemDraw__SetItem(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *servantFaceIconSprite; // x21
  int32_t svtId; // w22
  int32_t limitCount; // w23
  const MethodInfo *v10; // x2

  if ( (byte_59337C4 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_59337C4 = 1;
  }
  if ( item && mode )
  {
    servantFaceIconSprite = this->fields.servantFaceIconSprite;
    svtId = item->fields.svtId;
    limitCount = item->fields.limitCount;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    AtlasManager__SetFaceImage(servantFaceIconSprite, svtId, limitCount, 1, 0, 0, 0);
    SelectImageLimitListViewItemDraw__SetButton(this, item, v10);
  }
}