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
  ServantCostumeMaster_o *Master_object; // x0
  __int64 v6; // x1
  UIRangeLabel_o *limitCountRangeLabel; // x21
  System_String_o *v8; // x1
  System_String_o *v9; // x0
  System_String_o *v10; // x22
  UIRangeLabel_o *v11; // x21
  _BOOL4 isSelected; // w22
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

  if ( (byte_4A56980 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11885/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1B885B0(&StringLiteral_17479/*"btn_bg_20"*/);
    sub_1B885B0(&StringLiteral_17480/*"btn_bg_21"*/);
    byte_4A56980 = 1;
  }
  entity = 0LL;
  limitCount = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
    v8 = (System_String_o *)Master_object;
    goto LABEL_24;
  }
  limitCountRangeLabel = this->fields.limitCountRangeLabel;
  if ( item->fields.limitCount <= 3 )
  {
    limitCount = item->fields.limitCount;
    v9 = System_Int32__ToString((int32_t)&limitCount, 0LL);
    v10 = System_String__Concat_61707032((System_String_o *)StringLiteral_11885/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v9, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager__Get(v10, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_43;
    goto LABEL_23;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  if ( !limitCountRangeLabel )
    goto LABEL_43;
  v8 = *(System_String_o **)&Master_object[2].fields._lookup->fields._count;
LABEL_24:
  UIRangeLabel__Set(limitCountRangeLabel, v8, 0LL, 1, 0, 0LL);
  v11 = this->fields.limitCountRangeLabel;
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
    if ( !byte_4A5638C )
    {
      sub_1B885B0(&LocalizationManager_TypeInfo);
      byte_4A5638C = 1;
    }
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    lookup = (float *)Master_object[2].fields._lookup;
    v14 = lookup + 20;
    v15 = lookup + 21;
    v16 = lookup + 22;
    v17 = lookup + 23;
    if ( v11 )
      goto LABEL_38;
LABEL_43:
    sub_1B8880C(Master_object, v6);
  }
LABEL_26:
  if ( !byte_4A5638D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5638D = 1;
  }
  Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v13 = (float *)Master_object[2].fields._lookup;
  v14 = v13 + 24;
  v15 = v13 + 25;
  v16 = v13 + 26;
  v17 = v13 + 27;
  if ( !v11 )
    goto LABEL_43;
LABEL_38:
  v22.fields.a = *v17;
  v22.fields.b = *v16;
  v22.fields.g = *v15;
  v22.fields.r = *v14;
  UIRangeLabel__set_effectColor(v11, v22, 0LL);
  Master_object = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_object )
    goto LABEL_43;
  if ( item->fields.isSelected )
    v19 = &StringLiteral_17480/*"btn_bg_21"*/;
  else
    v19 = &StringLiteral_17479/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v19, 0LL);
}


void __fastcall SelectImageLimitListViewItemDraw__SetInput(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v13; // x2

  if ( (byte_4A5697F & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5697F = 1;
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
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_1B8880C(Component_object, v8);
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

  if ( (byte_4A5697E & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5697E = 1;
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