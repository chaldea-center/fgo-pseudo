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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  ServantCostumeMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  int v23; // w2
  __int64 v24; // x3
  UIRangeLabel_o *limitCountRangeLabel; // x21
  struct UIRangeLabel_o **p_limitCountRangeLabel; // x23
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  System_String_o *v29; // x22
  int v30; // w2
  __int64 v31; // x3
  UIRangeLabel_o *v32; // x21
  float *v33; // x11
  float *v34; // x8
  float *v35; // x9
  float *v36; // x10
  float *v37; // x11
  float *lookup; // x11
  __int64 *v39; // x8
  int32_t limitCount; // [xsp+4h] [xbp-3Ch] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EE3E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCostumeMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v18, v19, v20);
    byte_42EE3E7 = 1;
  }
  entity = 0LL;
  limitCount = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
    v27 = (System_String_o *)Master_WarQuestSelectionMaster;
    goto LABEL_28;
  }
  p_limitCountRangeLabel = &this->fields.limitCountRangeLabel;
  limitCountRangeLabel = this->fields.limitCountRangeLabel;
  if ( item->fields.limitCount <= 3 )
  {
    limitCount = item->fields.limitCount;
    v28 = System_Int32__ToString((int32_t)&limitCount, 0LL);
    v29 = System_String__Concat_44577788((System_String_o *)StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v28, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager__Get(v29, 0LL);
    if ( !limitCountRangeLabel )
      goto LABEL_53;
    goto LABEL_27;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    byte_42E6772 = 1;
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
  v27 = *(System_String_o **)&Master_WarQuestSelectionMaster[2].fields._lookup->fields.count;
LABEL_28:
  UIRangeLabel__Set(limitCountRangeLabel, v27, 0LL, 1, 0, 0LL);
  v32 = *p_limitCountRangeLabel;
  if ( !item->fields.isSelected )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E563C )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v30, v31);
      byte_42E563C = 1;
    }
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
    }
    lookup = (float *)Master_WarQuestSelectionMaster[2].fields._lookup;
    v34 = lookup + 20;
    v35 = lookup + 21;
    v36 = lookup + 22;
    v37 = lookup + 23;
    if ( v32 )
      goto LABEL_48;
LABEL_53:
    sub_B5D69C(Master_WarQuestSelectionMaster, v22);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v30, v31);
    byte_42E563D = 1;
  }
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)LocalizationManager_TypeInfo;
  }
  v33 = (float *)Master_WarQuestSelectionMaster[2].fields._lookup;
  v34 = v33 + 24;
  v35 = v33 + 25;
  v36 = v33 + 26;
  v37 = v33 + 27;
  if ( !v32 )
    goto LABEL_53;
LABEL_48:
  v42.fields.b = *v36;
  v42.fields.g = *v35;
  v42.fields.r = *v34;
  v42.fields.a = *v37;
  UIRangeLabel__set_effectColor(v32, v42, 0LL);
  Master_WarQuestSelectionMaster = (ServantCostumeMaster_o *)this->fields.limitCountButtonSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_53;
  if ( item->fields.isSelected )
    v39 = &StringLiteral_17175/*"btn_bg_21"*/;
  else
    v39 = &StringLiteral_17174/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)Master_WarQuestSelectionMaster, (System_String_o *)*v39, 0LL);
}


void __fastcall SelectImageLimitListViewItemDraw__SetInput(
        SelectImageLimitListViewItemDraw_o *this,
        SelectImageLimitListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  UnityEngine_Object_o *baseButton; // x22
  __int64 v14; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UISprite_o *servantFaceIconSprite; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w22
  const MethodInfo *v19; // x2

  if ( (byte_42EE3E6 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, isInput, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    byte_42EE3E6 = 1;
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
                                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
            (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_B5D69C(Component_WebViewObject, v14);
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
    SelectImageLimitListViewItemDraw__SetButton(this, item, v19);
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

  if ( (byte_42EE3E5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    byte_42EE3E5 = 1;
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