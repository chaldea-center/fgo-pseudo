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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ServantCostumeMaster_o *Master_object; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UIRangeLabel_o *limitCountRangeLabel; // x21
  System_String_o *v19; // x1
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x22
  __int64 v23; // x2
  UIRangeLabel_o *v24; // x21
  _BOOL4 isSelected; // w22
  float *v26; // x11
  float *v27; // x8
  float *v28; // x9
  float *v29; // x10
  float *v30; // x11
  float *lookup; // x11
  __int64 *v32; // x8
  int32_t limitCount; // [xsp+4h] [xbp-3Ch] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B118A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCostumeMaster___, item, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v13, v14);
    byte_4B118A2 = 1;
  }
  entity = 0LL;
  limitCount = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
  Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
    v19 = (System_String_o *)Master_object;
    goto LABEL_24;
  }
  limitCountRangeLabel = this->fields.limitCountRangeLabel;
  if ( item->fields.limitCount <= 3 )
  {
    limitCount = item->fields.limitCount;
    v20 = System_Int32__ToString((int32_t)&limitCount, 0LL);
    v22 = System_String__Concat_62401220((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v20, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager__Get(v22, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_43;
    goto LABEL_23;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    byte_4B1194D = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  if ( !limitCountRangeLabel )
    goto LABEL_43;
  v19 = *(System_String_o **)&Master_object[2].fields._lookup->fields._count;
LABEL_24:
  UIRangeLabel__Set(limitCountRangeLabel, v19, 0LL, 1, 0, 0LL);
  v24 = this->fields.limitCountRangeLabel;
  isSelected = item->fields.isSelected;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( item->fields.isSelected )
      goto LABEL_26;
    goto LABEL_33;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  if ( !isSelected )
  {
LABEL_33:
    if ( !byte_4B11133 )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v23);
      byte_4B11133 = 1;
    }
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
      Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    lookup = (float *)Master_object[2].fields._lookup;
    v27 = lookup + 20;
    v28 = lookup + 21;
    v29 = lookup + 22;
    v30 = lookup + 23;
    if ( v24 )
      goto LABEL_38;
LABEL_43:
    sub_1BCAA3C(Master_object, v16);
  }
LABEL_26:
  if ( !byte_4B11134 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v23);
    byte_4B11134 = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v26 = (float *)Master_object[2].fields._lookup;
  v27 = v26 + 24;
  v28 = v26 + 25;
  v29 = v26 + 26;
  v30 = v26 + 27;
  if ( !v24 )
    goto LABEL_43;
LABEL_38:
  v35.fields.a = *v30;
  v35.fields.b = *v29;
  v35.fields.g = *v28;
  v35.fields.r = *v27;
  UIRangeLabel__set_effectColor(v24, v35, 0LL);
  Master_object = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_object )
    goto LABEL_43;
  if ( item->fields.isSelected )
    v32 = &StringLiteral_17653/*"btn_bg_21"*/;
  else
    v32 = &StringLiteral_17652/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewItemDraw__SetInput(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *baseButton; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *Component_object; // x0
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v17; // x2

  if ( (byte_4B118A1 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, isInput);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B118A1 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_1BCAA3C(Component_object, v12);
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
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetFaceImage(servantFaceIconSprite, svtId, limitCount, 0LL);
    SelectImageLimitListViewItemDraw__SetButton(this, item, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B118A0 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    byte_4B118A0 = 1;
  }
  if ( item && mode )
  {
    servantFaceIconSprite = this->fields.servantFaceIconSprite;
    svtId = item->fields.svtId;
    limitCount = item->fields.limitCount;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
    AtlasManager__SetFaceImage(servantFaceIconSprite, svtId, limitCount, 0LL);
    SelectImageLimitListViewItemDraw__SetButton(this, item, v10);
  }
}