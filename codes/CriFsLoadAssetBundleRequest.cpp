void CriFsLoadAssetBundleRequest___ctor(
        CriFsLoadAssetBundleRequest_o *this,
        CriFsBinder_o *binder,
        System_String_o *path,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  struct CriFsLoadFileRequest_o *File_31205952; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4D29CEF & 1) == 0 )
  {
    sub_1C93AD4(&CriDisposableObjectManager_TypeInfo);
    byte_4D29CEF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  this->fields._path_k__BackingField = path;
  sub_1C93A78(&this->fields._path_k__BackingField, path);
  File_31205952 = CriFsUtility__LoadFile_31205952(binder, path, readUnitSize, v9);
  this->fields.loadFileReq = File_31205952;
  sub_1C93A78(&this->fields.loadFileReq, File_31205952);
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v11);
}


// local variable allocation has failed, the output may be wrong!
void CriFsLoadAssetBundleRequest__Dispose(
        CriFsLoadAssetBundleRequest_o *this,
        bool disposing,
        const MethodInfo *method)
{
  struct CriFsLoadFileRequest_o *v4; // x0
  struct CriFsLoadFileRequest_o **p_loadFileReq; // x19
  struct CriFsLoadFileRequest_o *loadFileReq; // t1

  if ( (byte_4D29CF1 & 1) == 0 )
  {
    sub_1C93AD4(&CriDisposableObjectManager_TypeInfo);
    byte_4D29CF1 = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  loadFileReq = this->fields.loadFileReq;
  p_loadFileReq = &this->fields.loadFileReq;
  v4 = loadFileReq;
  if ( loadFileReq )
  {
    ((void (__fastcall *)(struct CriFsLoadFileRequest_o *, const MethodInfo *))v4->klass->vtable._5_Dispose.methodPtr)(
      v4,
      v4->klass->vtable._5_Dispose.method);
    *p_loadFileReq = 0;
    sub_1C93A78(p_loadFileReq, 0);
  }
}


void CriFsLoadAssetBundleRequest__Update(CriFsLoadAssetBundleRequest_o *this, const MethodInfo *method)
{
  struct CriFsLoadFileRequest_o *loadFileReq; // x8
  struct CriFsLoadFileRequest_o **p_loadFileReq; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8
  UnityEngine_AsyncOperation_o *assetBundleReq; // x0
  UnityEngine_AssetBundleCreateRequest_o *v9; // x0
  struct UnityEngine_AssetBundle_o *assetBundle; // x0
  struct CriFsRequest_DoneDelegate_o *v11; // x8
  struct UnityEngine_AssetBundleCreateRequest_o *v12; // x0

  if ( (byte_4D29CF0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_6169/*"Error occurred."*/);
    byte_4D29CF0 = 1;
  }
  p_loadFileReq = &this->fields.loadFileReq;
  loadFileReq = this->fields.loadFileReq;
  if ( loadFileReq )
  {
    if ( loadFileReq->fields._isDone_k__BackingField )
    {
      if ( loadFileReq->fields._error_k__BackingField )
      {
        v5 = StringLiteral_6169/*"Error occurred."*/;
        this->fields._error_k__BackingField = (struct System_String_o *)StringLiteral_6169/*"Error occurred."*/;
        sub_1C93A78(&this->fields._error_k__BackingField, v5);
        doneDelegate_k__BackingField = this->fields._doneDelegate_k__BackingField;
        this->fields._isDone_k__BackingField = 1;
        if ( doneDelegate_k__BackingField )
          ((void (__fastcall *)(intptr_t, CriFsLoadAssetBundleRequest_o *, intptr_t))doneDelegate_k__BackingField->fields.invoke_impl)(
            doneDelegate_k__BackingField->fields.method_code,
            this,
            doneDelegate_k__BackingField->fields.method);
      }
      else
      {
        v12 = UnityEngine_AssetBundle__LoadFromMemoryAsync(loadFileReq->fields._bytes_k__BackingField, 0);
        this->fields.assetBundleReq = v12;
        sub_1C93A78(&this->fields.assetBundleReq, v12);
      }
      v9 = (UnityEngine_AssetBundleCreateRequest_o *)*p_loadFileReq;
      if ( *p_loadFileReq )
      {
        ((void (__fastcall *)(UnityEngine_AssetBundleCreateRequest_o *, const char *))v9->klass[1]._1.name)(
          v9,
          v9->klass[1]._1.namespaze);
        *p_loadFileReq = 0;
        sub_1C93A78(&this->fields.loadFileReq, 0);
        return;
      }
LABEL_18:
      sub_1C93D2C(v9, v6);
    }
    return;
  }
  assetBundleReq = (UnityEngine_AsyncOperation_o *)this->fields.assetBundleReq;
  if ( !assetBundleReq )
  {
    v11 = this->fields._doneDelegate_k__BackingField;
    this->fields._isDone_k__BackingField = 1;
    if ( !v11 )
      return;
LABEL_17:
    ((void (__fastcall *)(intptr_t, CriFsLoadAssetBundleRequest_o *, intptr_t))v11->fields.invoke_impl)(
      v11->fields.method_code,
      this,
      v11->fields.method);
    return;
  }
  if ( UnityEngine_AsyncOperation__get_isDone(assetBundleReq, 0) )
  {
    v9 = this->fields.assetBundleReq;
    if ( !v9 )
      goto LABEL_18;
    assetBundle = UnityEngine_AssetBundleCreateRequest__get_assetBundle(v9, 0);
    this->fields._assetBundle_k__BackingField = assetBundle;
    sub_1C93A78(&this->fields._assetBundle_k__BackingField, assetBundle);
    v11 = this->fields._doneDelegate_k__BackingField;
    this->fields._isDone_k__BackingField = 1;
    if ( v11 )
      goto LABEL_17;
  }
}


UnityEngine_AssetBundle_o *CriFsLoadAssetBundleRequest__get_assetBundle(
        CriFsLoadAssetBundleRequest_o *this,
        const MethodInfo *method)
{
  return this->fields._assetBundle_k__BackingField;
}


System_String_o *CriFsLoadAssetBundleRequest__get_path(CriFsLoadAssetBundleRequest_o *this, const MethodInfo *method)
{
  return this->fields._path_k__BackingField;
}


void CriFsLoadAssetBundleRequest__set_assetBundle(
        CriFsLoadAssetBundleRequest_o *this,
        UnityEngine_AssetBundle_o *value,
        const MethodInfo *method)
{
  this->fields._assetBundle_k__BackingField = value;
  sub_1C93A78(&this->fields._assetBundle_k__BackingField, value);
}


void CriFsLoadAssetBundleRequest__set_path(
        CriFsLoadAssetBundleRequest_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._path_k__BackingField = value;
  sub_1C93A78(&this->fields._path_k__BackingField, value);
}