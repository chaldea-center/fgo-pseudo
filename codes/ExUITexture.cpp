void ExUITexture___ctor(ExUITexture_o *this, const MethodInfo *method)
{
  UITexture___ctor((UITexture_o *)this, 0);
}


void ExUITexture__ClearImage(ExUITexture_o *this, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_String_o *loadAssetName; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Action_o *callbackFunc; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2DFC6 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2DFC6 = 1;
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
    AssetManager__releaseAsset_41285308(assetData, 0);
    this->fields.assetData = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.assetData, 0, v4, v5, v6, v7, v8, v9);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.loadAssetName, 0, v11, v12, v13, v14, v15, v16);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v18, v19, v20, v21, v22, v23);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  AssetData_o *assetData; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *Object_object__51893132; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4D2DFC9 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2DFC9 = 1;
  }
  if ( data )
  {
    loadAssetName = this->fields.loadAssetName;
    if ( loadAssetName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_41282980(data, loadAssetName, 0) )
      {
        assetData = this->fields.assetData;
        this->fields.assetData = data;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.assetData, (int32_t)data, v6, v7, v8, v9, v10, v11);
        this->fields.loadAssetName = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.loadAssetName, 0, v13, v14, v15, v16, v17, v18);
        Object_object__51893132 = AssetData__GetObject_object__51893132(
                                    data,
                                    this->fields.assetLabel,
                                    (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
        ((void (__fastcall *)(ExUITexture_o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
          this,
          Object_object__51893132,
          this->klass->vtable._27_set_mainTexture.method);
        if ( assetData )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_41285308(assetData, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v20, v21, v22, v23, v24, v25);
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

  return ExUITexture__SetAssetImage_44589820(this, assetName, 0, callback, v4);
}


bool ExUITexture__SetAssetImage_44589820(
        ExUITexture_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_String_o *loadAssetName; // x23
  GrandQuestFolderBoardItem_o *p_loadAssetName; // x22
  System_Delegate_o *callbackFunc; // x0
  ExUITexture_c *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  GrandQuestFolderBoardItem_c *v28; // x8
  System_Action_c *v29; // x1
  AssetData_o *assetData; // x23
  __int64 v31; // x1
  AssetData_o *v32; // x0
  Il2CppObject *Object_object__51893132; // x0
  System_String_o *klass; // x23
  System_Delegate_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Action_c *v42; // x1
  AssetLoader_LoadEndDataHandler_o *v43; // x21

  if ( (byte_4D2DFC8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_ExUITexture_EndLoad__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4D2DFC8 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.assetLabel,
    (int32_t)assetLabel,
    (int32_t)assetLabel,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  loadAssetName = this->fields.loadAssetName;
  p_loadAssetName = (GrandQuestFolderBoardItem_o *)&this->fields.loadAssetName;
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
        v21 = (ExUITexture_c *)System_Delegate__Combine(callbackFunc, (System_Delegate_o *)callback, 0);
        v28 = (GrandQuestFolderBoardItem_c *)v21;
        if ( v21 )
        {
          v29 = System_Action_TypeInfo;
          if ( v21->_1.image != System_Action_TypeInfo )
            goto LABEL_26;
          this->klass = v21;
          if ( v21->_1.image != v29 )
            goto LABEL_26;
        }
        else
        {
          this->klass = 0;
        }
        sub_1C9403C((GrandQuestFolderBoardItem_o *)this, (int32_t)v21, v22, v23, v24, v25, v26, v27);
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
      if ( AssetManager__compAssetStorage_41282980(assetData, assetName, 0) )
      {
        v32 = this->fields.assetData;
        if ( !v32 )
          sub_1C942F0(0, v31);
        Object_object__51893132 = AssetData__GetObject_object__51893132(
                                    v32,
                                    this->fields.assetLabel,
                                    (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
        ((void (__fastcall *)(ExUITexture_o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
          this,
          Object_object__51893132,
          this->klass->vtable._27_set_mainTexture.method);
        if ( callback )
          ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
            callback->fields.method_code,
            callback->fields.method);
        return 1;
      }
    }
  }
  p_loadAssetName->klass = (GrandQuestFolderBoardItem_c *)assetName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadAssetName,
    (int32_t)assetName,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( callback )
  {
    p_loadAssetName = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v35 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callback, 0);
    v28 = (GrandQuestFolderBoardItem_c *)v35;
    if ( !v35 )
    {
LABEL_27:
      p_loadAssetName->klass = v28;
LABEL_28:
      sub_1C9403C(p_loadAssetName, (int32_t)v28, v36, v37, v38, v39, v40, v41);
      goto LABEL_29;
    }
    v42 = System_Action_TypeInfo;
    if ( (System_Action_c *)v35->klass == System_Action_TypeInfo )
    {
      p_loadAssetName->klass = (GrandQuestFolderBoardItem_c *)v35;
      if ( (System_Action_c *)v35->klass == v42 )
        goto LABEL_28;
    }
LABEL_26:
    sub_1C9468C(v28);
    goto LABEL_27;
  }
LABEL_29:
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v43, (Il2CppObject *)this, Method_ExUITexture_EndLoad__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(assetName, v43, 1, 0);
}


void ExUITexture__SetImage(ExUITexture_o *this, UnityEngine_Texture_o *tex, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *loadAssetName; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Action_o *callbackFunc; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D2DFC7 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2DFC7 = 1;
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
    AssetManager__releaseAsset_41285308(assetData, 0);
    this->fields.assetData = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.assetData, 0, v6, v7, v8, v9, v10, v11);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.loadAssetName, 0, v13, v14, v15, v16, v17, v18);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v20, v21, v22, v23, v24, v25);
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