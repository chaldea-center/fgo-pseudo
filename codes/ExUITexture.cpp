void ExUITexture___ctor(ExUITexture_o *this, const MethodInfo *method)
{
  UITexture___ctor((UITexture_o *)this, 0);
}


void ExUITexture__ClearImage(ExUITexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_o *assetData; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *loadAssetName; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Action_o *callbackFunc; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5939DF5 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5939DF5 = 1;
  }
  ((void (__fastcall *)(ExUITexture_o *, _QWORD, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
    this,
    0,
    this->klass->vtable._27_set_mainTexture.method);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAsset_47465556(assetData, 0);
    this->fields.assetData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v5, v6, v7, v8, v9, v10);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName, 0, v12, v13, v14, v15, v16, v17);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v19, v20, v21, v22, v23, v24);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


void ExUITexture__EndLoad(ExUITexture_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *loadAssetName; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  AssetData_o *assetData; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *Object_object__58323140; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_5939DF8 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_Texture2D____91482152);
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5939DF8 = 1;
  }
  if ( data )
  {
    loadAssetName = this->fields.loadAssetName;
    if ( loadAssetName )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data);
      if ( AssetManager__compAssetStorage_47463144(data, loadAssetName, 0) )
      {
        assetData = this->fields.assetData;
        this->fields.assetData = data;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.assetData,
          (int32_t)data,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        this->fields.loadAssetName = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName, 0, v13, v14, v15, v16, v17, v18);
        Object_object__58323140 = AssetData__GetObject_object__58323140(
                                    data,
                                    this->fields.assetLabel,
                                    (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
        ((void (__fastcall *)(ExUITexture_o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
          this,
          Object_object__58323140,
          this->klass->vtable._27_set_mainTexture.method);
        if ( assetData )
        {
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
          AssetManager__releaseAsset_47465556(assetData, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v21, v22, v23, v24, v25, v26);
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

  return ExUITexture__SetAssetImage_50744444(this, assetName, 0, callback, v4);
}


bool ExUITexture__SetAssetImage_50744444(
        ExUITexture_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *loadAssetName; // x23
  MissionNaviTransitionBoardItem_o *p_loadAssetName; // x22
  __int64 v21; // x1
  System_Delegate_o *callbackFunc; // x0
  ExUITexture_c *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  void *v30; // x8
  System_Action_c *v31; // x1
  AssetData_o *assetData; // x23
  __int64 v33; // x1
  AssetData_o *v34; // x0
  Il2CppObject *Object_object__58323140; // x0
  System_String_o *klass; // x23
  System_Delegate_o *v37; // x0
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  AssetLoader_LoadEndDataHandler_o *v43; // x21
  __int64 v44; // x1

  if ( (byte_5939DF7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_Texture2D____91482152);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_ExUITexture_EndLoad__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_5939DF7 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetLabel,
    (int32_t)assetLabel,
    assetLabel,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  loadAssetName = this->fields.loadAssetName;
  p_loadAssetName = (MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0) )
    {
      if ( callback )
      {
        callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
        this = (ExUITexture_o *)((char *)this + 552);
        v23 = (ExUITexture_c *)System_Delegate__Combine(callbackFunc, (System_Delegate_o *)callback, 0);
        v30 = v23;
        if ( v23 )
        {
          v31 = System_Action_TypeInfo;
          if ( v23->_1.image != System_Action_TypeInfo )
            goto LABEL_26;
          this->klass = v23;
          if ( v23->_1.image != v31 )
            goto LABEL_26;
        }
        else
        {
          this->klass = 0;
        }
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)this, (int32_t)v23, v24, v25, v26, v27, v28, v29);
      }
      return 1;
    }
    klass = (System_String_o *)p_loadAssetName->klass;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21);
    AssetManager__releaseAssetStorage(klass, 0);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
      if ( AssetManager__compAssetStorage_47463144(assetData, assetName, 0) )
      {
        v34 = this->fields.assetData;
        if ( !v34 )
          sub_21FFECC(0, v33);
        Object_object__58323140 = AssetData__GetObject_object__58323140(
                                    v34,
                                    this->fields.assetLabel,
                                    (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
        ((void (__fastcall *)(ExUITexture_o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
          this,
          Object_object__58323140,
          this->klass->vtable._27_set_mainTexture.method);
        if ( callback )
          ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
            callback->fields.method_code,
            callback->fields.method);
        return 1;
      }
    }
  }
  p_loadAssetName->klass = (MissionNaviTransitionBoardItem_c *)assetName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName,
    (int32_t)assetName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( callback )
  {
    p_loadAssetName = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v37 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callback, 0);
    v30 = v37;
    if ( !v37 )
    {
LABEL_27:
      p_loadAssetName->klass = 0;
LABEL_28:
      sub_21FFBF4(p_loadAssetName, (int32_t)v30, v24, v38, v39, v40, v41, v42);
      goto LABEL_29;
    }
    v31 = System_Action_TypeInfo;
    if ( (System_Action_c *)v37->klass == System_Action_TypeInfo )
    {
      p_loadAssetName->klass = (MissionNaviTransitionBoardItem_c *)v37;
      if ( (System_Action_c *)v37->klass == v31 )
        goto LABEL_28;
    }
LABEL_26:
    sub_220024C(v30, v31, v24);
    goto LABEL_27;
  }
LABEL_29:
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v43, (Il2CppObject *)this, Method_ExUITexture_EndLoad__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v44);
  return AssetManager__loadAssetStorage(assetName, v43, 1, 0, 0);
}


void ExUITexture__SetImage(ExUITexture_o *this, UnityEngine_Texture_o *tex, const MethodInfo *method)
{
  __int64 v5; // x1
  AssetData_o *assetData; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *loadAssetName; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Action_o *callbackFunc; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_5939DF6 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5939DF6 = 1;
  }
  ((void (__fastcall *)(ExUITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))this->klass->vtable._27_set_mainTexture.methodPtr)(
    this,
    tex,
    this->klass->vtable._27_set_mainTexture.method);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
    AssetManager__releaseAsset_47465556(assetData, 0);
    this->fields.assetData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v7, v8, v9, v10, v11, v12);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName, 0, v14, v15, v16, v17, v18, v19);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v21, v22, v23, v24, v25, v26);
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