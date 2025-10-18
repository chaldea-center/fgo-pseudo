void CriFsLoadAssetBundleRequest___ctor(
        CriFsLoadAssetBundleRequest_o *this,
        CriFsBinder_o *binder,
        System_String_o *path,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  struct CriFsLoadFileRequest_o *File_30832332; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4C3C4FF & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    byte_4C3C4FF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  this->fields._path_k__BackingField = path;
  sub_1C36FFC(&this->fields._path_k__BackingField, path);
  File_30832332 = CriFsUtility__LoadFile_30832332(binder, path, readUnitSize, v9);
  this->fields.loadFileReq = File_30832332;
  sub_1C36FFC(&this->fields.loadFileReq, File_30832332);
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

  if ( (byte_4C3C501 & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    byte_4C3C501 = 1;
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
    sub_1C36FFC(p_loadFileReq, 0);
  }
}


void CriFsLoadAssetBundleRequest__Update(CriFsLoadAssetBundleRequest_o *this, const MethodInfo *method)
{
  struct CriFsLoadFileRequest_o *loadFileReq; // x8
  struct CriFsLoadFileRequest_o **p_loadFileReq; // x20
  __int64 v5; // x1
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8
  UnityEngine_AsyncOperation_o *assetBundleReq; // x0
  UnityEngine_AssetBundleCreateRequest_o *v8; // x0
  struct UnityEngine_AssetBundle_o *assetBundle; // x0
  struct CriFsRequest_DoneDelegate_o *v10; // x8
  struct UnityEngine_AssetBundleCreateRequest_o *v11; // x0

  if ( (byte_4C3C500 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6139/*"Error occurred."*/);
    byte_4C3C500 = 1;
  }
  p_loadFileReq = &this->fields.loadFileReq;
  loadFileReq = this->fields.loadFileReq;
  if ( loadFileReq )
  {
    if ( loadFileReq->fields._isDone_k__BackingField )
    {
      if ( loadFileReq->fields._error_k__BackingField )
      {
        v5 = StringLiteral_6139/*"Error occurred."*/;
        this->fields._error_k__BackingField = (struct System_String_o *)StringLiteral_6139/*"Error occurred."*/;
        sub_1C36FFC(&this->fields._error_k__BackingField, v5);
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
        v11 = UnityEngine_AssetBundle__LoadFromMemoryAsync(loadFileReq->fields._bytes_k__BackingField, 0);
        this->fields.assetBundleReq = v11;
        sub_1C36FFC(&this->fields.assetBundleReq, v11);
      }
      v8 = (UnityEngine_AssetBundleCreateRequest_o *)*p_loadFileReq;
      if ( *p_loadFileReq )
      {
        ((void (__fastcall *)(UnityEngine_AssetBundleCreateRequest_o *, const char *))v8->klass[1]._1.name)(
          v8,
          v8->klass[1]._1.namespaze);
        *p_loadFileReq = 0;
        sub_1C36FFC(&this->fields.loadFileReq, 0);
        return;
      }
LABEL_18:
      sub_1C372B4(v8);
    }
    return;
  }
  assetBundleReq = (UnityEngine_AsyncOperation_o *)this->fields.assetBundleReq;
  if ( !assetBundleReq )
  {
    v10 = this->fields._doneDelegate_k__BackingField;
    this->fields._isDone_k__BackingField = 1;
    if ( !v10 )
      return;
LABEL_17:
    ((void (__fastcall *)(intptr_t, CriFsLoadAssetBundleRequest_o *, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      this,
      v10->fields.method);
    return;
  }
  if ( UnityEngine_AsyncOperation__get_isDone(assetBundleReq, 0) )
  {
    v8 = this->fields.assetBundleReq;
    if ( !v8 )
      goto LABEL_18;
    assetBundle = UnityEngine_AssetBundleCreateRequest__get_assetBundle(v8, 0);
    this->fields._assetBundle_k__BackingField = assetBundle;
    sub_1C36FFC(&this->fields._assetBundle_k__BackingField, assetBundle);
    v10 = this->fields._doneDelegate_k__BackingField;
    this->fields._isDone_k__BackingField = 1;
    if ( v10 )
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
  sub_1C36FFC(&this->fields._assetBundle_k__BackingField, value);
}


void CriFsLoadAssetBundleRequest__set_path(
        CriFsLoadAssetBundleRequest_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._path_k__BackingField = value;
  sub_1C36FFC(&this->fields._path_k__BackingField, value);
}