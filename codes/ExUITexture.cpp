void ExUITexture___ctor(ExUITexture_o *this, const MethodInfo *method)
{
  UITexture___ctor((UITexture_o *)this, 0);
}


void ExUITexture__ClearImage(ExUITexture_o *this, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_String_o *loadAssetName; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Action_o *callbackFunc; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C446C5 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C446C5 = 1;
  }
  ((void (__fastcall *)(ExUITexture_o *, _QWORD, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
    this,
    0,
    this->klass->vtable._27_set_mainTexture.method);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(assetData, 0);
    this->fields.assetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetData, 0, v4, v5);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadAssetName, 0, v7, v8);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v10, v11);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


void ExUITexture__EndLoad(ExUITexture_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *loadAssetName; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  AssetData_o *assetData; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Object_object__51154888; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C446C8 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C446C8 = 1;
  }
  if ( data )
  {
    loadAssetName = this->fields.loadAssetName;
    if ( loadAssetName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_40532384(data, loadAssetName, 0) )
      {
        assetData = this->fields.assetData;
        this->fields.assetData = data;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)data, v6, v7);
        this->fields.loadAssetName = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadAssetName, 0, v9, v10);
        Object_object__51154888 = AssetData__GetObject_object__51154888(
                                    data,
                                    this->fields.assetLabel,
                                    (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
        ((void (__fastcall *)(ExUITexture_o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
          this,
          Object_object__51154888,
          this->klass->vtable._27_set_mainTexture.method);
        if ( assetData )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40534712(assetData, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v12, v13);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
      }
    }
  }
}


bool ExUITexture__SetAssetImage(
        ExUITexture_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return ExUITexture__SetAssetImage_43800100(this, assetName, 0, callback, v4);
}


bool ExUITexture__SetAssetImage_43800100(
        ExUITexture_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *loadAssetName; // x23
  CGThumbnailListItem_o *p_loadAssetName; // x22
  System_Delegate_o *callbackFunc; // x0
  ExUITexture_c *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CGThumbnailListItem_c *v17; // x8
  System_Action_c *v18; // x1
  AssetData_o *assetData; // x23
  AssetData_o *v20; // x0
  Il2CppObject *Object_object__51154888; // x0
  System_String_o *klass; // x23
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Action_c *v26; // x1
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4C446C7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_ExUITexture_EndLoad__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C446C7 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.assetLabel,
    (int32_t)assetLabel,
    (int32_t)assetLabel,
    (const MethodInfo *)callback);
  loadAssetName = this->fields.loadAssetName;
  p_loadAssetName = (CGThumbnailListItem_o *)&this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0) )
    {
      if ( callback )
      {
        callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
        this = (ExUITexture_o *)((char *)this + 552);
        v14 = (ExUITexture_c *)System_Delegate__Combine(callbackFunc, (System_Delegate_o *)callback, 0);
        v17 = (CGThumbnailListItem_c *)v14;
        if ( v14 )
        {
          v18 = System_Action_TypeInfo;
          if ( v14->_1.image != System_Action_TypeInfo )
            goto LABEL_26;
          this->klass = v14;
          if ( v14->_1.image != v18 )
            goto LABEL_26;
        }
        else
        {
          this->klass = 0;
        }
        sub_1C36FFC((CGThumbnailListItem_o *)this, (int32_t)v14, v15, v16);
      }
      return 1;
    }
    klass = (System_String_o *)p_loadAssetName->klass;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(klass, 0);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_40532384(assetData, assetName, 0) )
      {
        v20 = this->fields.assetData;
        if ( !v20 )
          sub_1C372B4(0);
        Object_object__51154888 = AssetData__GetObject_object__51154888(
                                    v20,
                                    this->fields.assetLabel,
                                    (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
        ((void (__fastcall *)(ExUITexture_o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
          this,
          Object_object__51154888,
          this->klass->vtable._27_set_mainTexture.method);
        if ( callback )
          ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
            callback->fields.method_code,
            callback->fields.method);
        return 1;
      }
    }
  }
  p_loadAssetName->klass = (CGThumbnailListItem_c *)assetName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadAssetName, (int32_t)assetName, v9, v10);
  if ( callback )
  {
    p_loadAssetName = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v23 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callback, 0);
    v17 = (CGThumbnailListItem_c *)v23;
    if ( !v23 )
    {
LABEL_27:
      p_loadAssetName->klass = v17;
LABEL_28:
      sub_1C36FFC(p_loadAssetName, (int32_t)v17, v24, v25);
      goto LABEL_29;
    }
    v26 = System_Action_TypeInfo;
    if ( (System_Action_c *)v23->klass == System_Action_TypeInfo )
    {
      p_loadAssetName->klass = (CGThumbnailListItem_c *)v23;
      if ( (System_Action_c *)v23->klass == v26 )
        goto LABEL_28;
    }
LABEL_26:
    sub_1C37574(v17);
    goto LABEL_27;
  }
LABEL_29:
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_ExUITexture_EndLoad__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(assetName, v27, 1, 0);
}


void ExUITexture__SetImage(ExUITexture_o *this, UnityEngine_Texture_o *tex, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *loadAssetName; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Action_o *callbackFunc; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C446C6 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C446C6 = 1;
  }
  ((void (__fastcall *)(ExUITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
    this,
    tex,
    this->klass->vtable._27_set_mainTexture.method);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(assetData, 0);
    this->fields.assetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetData, 0, v6, v7);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadAssetName, 0, v9, v10);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v12, v13);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


System_String_o *ExUITexture__get_TextureName(ExUITexture_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0

  result = (System_String_o *)this->fields.assetData;
  if ( result )
    return AssetData__get_LastName((AssetData_o *)result, 0);
  return result;
}