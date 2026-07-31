void CriFsLoadFileRequest___ctor(
        CriFsLoadFileRequest_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  intptr_t handle; // x0
  int32_t v15; // w8
  CriFsBinder_o *v16; // x21
  const MethodInfo *v17; // x1
  struct CriFsBinder_o *newBinder; // x1
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  CriFsBinder_o *v21; // x0
  uint32_t v22; // w0
  bool v23; // nf
  int64_t size; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59314F3 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    sub_21FFC50(&CriFsBinder_TypeInfo);
    byte_59314F3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  this->fields._path_k__BackingField = path;
  sub_21FFBF4(&this->fields._path_k__BackingField, path);
  this->fields._doneDelegate_k__BackingField = doneDelegate;
  sub_21FFBF4(&this->fields._doneDelegate_k__BackingField, doneDelegate);
  this->fields.readUnitSize = readUnitSize;
  if ( srcBinder )
  {
    this->fields.newBinder = 0;
    sub_21FFBF4(&this->fields.newBinder, 0);
    this->fields.refBinder = srcBinder;
    sub_21FFBF4(&this->fields.refBinder, srcBinder);
    handle = srcBinder->fields.handle;
    size = -1;
    if ( handle && !CriFsBinder__criFsBinder_GetFileSize(handle, path, &size, v13) )
    {
      v23 = size < 0;
      this->fields.fileSize = size;
      if ( v23 )
        v15 = 4;
      else
        v15 = 2;
    }
    else
    {
      this->fields.fileSize = -1;
      v15 = 4;
    }
  }
  else
  {
    v16 = (CriFsBinder_o *)sub_21FFEBC(CriFsBinder_TypeInfo);
    CriFsBinder___ctor(v16, v17);
    this->fields.newBinder = v16;
    sub_21FFBF4(&this->fields.newBinder, v16);
    newBinder = this->fields.newBinder;
    this->fields.refBinder = newBinder;
    sub_21FFBF4(&this->fields.refBinder, newBinder);
    v21 = this->fields.newBinder;
    if ( !v21 )
      sub_21FFECC(0, v19);
    v22 = CriFsBinder__BindFile(v21, 0, path, v20);
    v15 = 1;
    this->fields.bindId = v22;
  }
  this->fields.phase = v15;
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v11, v12);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v12);
}


// local variable allocation has failed, the output may be wrong!
void CriFsLoadFileRequest__Dispose(CriFsLoadFileRequest_o *this, bool disposing, const MethodInfo *method)
{
  struct CriFsLoader_o *loader; // x0
  struct CriFsBinder_o *newBinder; // x0

  if ( (byte_59314F4 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    byte_59314F4 = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, disposing, method);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  loader = this->fields.loader;
  if ( loader )
  {
    ((void (__fastcall *)(struct CriFsLoader_o *, const MethodInfo *))loader->klass->vtable._5_Dispose.methodPtr)(
      loader,
      loader->klass->vtable._5_Dispose.method);
    this->fields.loader = 0;
    sub_21FFBF4(&this->fields.loader, 0);
  }
  newBinder = this->fields.newBinder;
  if ( newBinder )
  {
    ((void (__fastcall *)(struct CriFsBinder_o *, const MethodInfo *))newBinder->klass->vtable._5_Dispose.methodPtr)(
      newBinder,
      newBinder->klass->vtable._5_Dispose.method);
    this->fields.newBinder = 0;
    sub_21FFBF4(&this->fields.newBinder, 0);
  }
  this->fields._bytes_k__BackingField = 0;
  sub_21FFBF4(&this->fields._bytes_k__BackingField, 0);
}


void CriFsLoadFileRequest__OnError(CriFsLoadFileRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CriFsBinder_o *newBinder; // x0
  struct CriFsLoader_o *loader; // x0
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8

  if ( (byte_59314F6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6385/*"Error occurred."*/);
    byte_59314F6 = 1;
  }
  this->fields._bytes_k__BackingField = 0;
  sub_21FFBF4(&this->fields._bytes_k__BackingField, 0);
  v3 = StringLiteral_6385/*"Error occurred."*/;
  this->fields._error_k__BackingField = (struct System_String_o *)StringLiteral_6385/*"Error occurred."*/;
  sub_21FFBF4(&this->fields._error_k__BackingField, v3);
  this->fields.refBinder = 0;
  sub_21FFBF4(&this->fields.refBinder, 0);
  newBinder = this->fields.newBinder;
  if ( newBinder )
  {
    ((void (__fastcall *)(struct CriFsBinder_o *, const MethodInfo *))newBinder->klass->vtable._5_Dispose.methodPtr)(
      newBinder,
      newBinder->klass->vtable._5_Dispose.method);
    this->fields.newBinder = 0;
    sub_21FFBF4(&this->fields.newBinder, 0);
  }
  loader = this->fields.loader;
  if ( loader )
  {
    ((void (__fastcall *)(struct CriFsLoader_o *, const MethodInfo *))loader->klass->vtable._5_Dispose.methodPtr)(
      loader,
      loader->klass->vtable._5_Dispose.method);
    this->fields.loader = 0;
    sub_21FFBF4(&this->fields.loader, 0);
  }
  doneDelegate_k__BackingField = this->fields._doneDelegate_k__BackingField;
  this->fields.phase = 3;
  this->fields._isDone_k__BackingField = 1;
  if ( doneDelegate_k__BackingField )
    ((void (__fastcall *)(intptr_t, CriFsLoadFileRequest_o *, intptr_t))doneDelegate_k__BackingField->fields.invoke_impl)(
      doneDelegate_k__BackingField->fields.method_code,
      this,
      doneDelegate_k__BackingField->fields.method);
}


void CriFsLoadFileRequest__Stop(CriFsLoadFileRequest_o *this, const MethodInfo *method)
{
  struct CriFsLoader_o *loader; // x8
  intptr_t handle; // x0

  if ( this->fields.phase == 2 )
  {
    loader = this->fields.loader;
    if ( loader )
    {
      handle = loader->fields.handle;
      if ( handle )
        CriFsLoader__criFsLoader_Stop(handle, method);
    }
  }
}


void CriFsLoadFileRequest__Update(CriFsLoadFileRequest_o *this, const MethodInfo *method)
{
  int32_t phase; // w8

  phase = this->fields.phase;
  if ( phase == 1 )
  {
    CriFsLoadFileRequest__UpdateBinder(this, method);
    phase = this->fields.phase;
  }
  if ( phase == 2 )
  {
    CriFsLoadFileRequest__UpdateLoader(this, method);
    phase = this->fields.phase;
  }
  if ( phase == 4 )
    CriFsLoadFileRequest__OnError(this, method);
}


void CriFsLoadFileRequest__UpdateBinder(CriFsLoadFileRequest_o *this, const MethodInfo *method)
{
  __int64 Status; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  struct CriFsBinder_o *refBinder; // x8
  intptr_t handle; // x0
  System_String_o *path_k__BackingField; // x1
  int32_t v9; // w8
  bool v10; // nf
  int64_t size; // [xsp+8h] [xbp-18h] BYREF

  Status = CriFsBinder__GetStatus(this->fields.bindId, method);
  if ( (_DWORD)Status != 1 )
  {
    if ( (_DWORD)Status != 2 )
      goto LABEL_6;
    refBinder = this->fields.refBinder;
    if ( !refBinder )
      sub_21FFECC(Status, v4);
    handle = refBinder->fields.handle;
    path_k__BackingField = this->fields._path_k__BackingField;
    size = -1;
    if ( handle && !CriFsBinder__criFsBinder_GetFileSize(handle, path_k__BackingField, &size, v5) )
    {
      v10 = size < 0;
      this->fields.fileSize = size;
      if ( v10 )
        v9 = 4;
      else
        v9 = 2;
    }
    else
    {
LABEL_6:
      this->fields.fileSize = -1;
      v9 = 4;
    }
    this->fields.phase = v9;
  }
}


void CriFsLoadFileRequest__UpdateLoader(CriFsLoadFileRequest_o *this, const MethodInfo *method)
{
  CriFsLoader_o *loader; // x0
  CriFsLoader_o *v4; // x21
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  struct CriFsLoader_o *v7; // x8
  intptr_t handle; // x0
  struct System_Byte_array *v9; // x0
  const MethodInfo *v10; // x6
  int32_t Status; // w0
  struct CriFsBinder_o *newBinder; // x0
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8

  if ( (byte_59314F5 & 1) == 0 )
  {
    sub_21FFC50(&byte___TypeInfo);
    sub_21FFC50(&Method_CriFsLoadFileRequest_UpdateLoader__);
    sub_21FFC50(&CriFsLoader_TypeInfo);
    byte_59314F5 = 1;
  }
  loader = this->fields.loader;
  if ( !loader )
  {
    v4 = (CriFsLoader_o *)sub_21FFEBC(CriFsLoader_TypeInfo);
    CriFsLoader___ctor(v4, v5);
    this->fields.loader = v4;
    loader = (CriFsLoader_o *)sub_21FFBF4(&this->fields.loader, v4);
    v7 = this->fields.loader;
    if ( !v7 )
      goto LABEL_20;
    handle = v7->fields.handle;
    if ( handle )
      CriFsLoader__criFsLoader_SetReadUnitSize(handle, this->fields.readUnitSize, v6);
    v9 = (struct System_Byte_array *)sub_21FFD10(byte___TypeInfo, LODWORD(this->fields.fileSize));
    this->fields._bytes_k__BackingField = v9;
    sub_21FFBF4(&this->fields._bytes_k__BackingField, v9);
    loader = this->fields.loader;
    if ( !loader )
      goto LABEL_20;
    CriFsLoader__Load(
      loader,
      this->fields.refBinder,
      this->fields._path_k__BackingField,
      0,
      this->fields.fileSize,
      this->fields._bytes_k__BackingField,
      v10);
    loader = this->fields.loader;
    if ( !loader )
      goto LABEL_20;
  }
  Status = CriFsLoader__GetStatus(loader, method);
  switch ( Status )
  {
    case 3:
      this->fields.phase = 4;
      return;
    case 1:
      return;
    case 0:
      this->fields._bytes_k__BackingField = 0;
      sub_21FFBF4(&this->fields._bytes_k__BackingField, 0);
      break;
  }
  loader = this->fields.loader;
  this->fields.phase = 3;
  if ( !loader )
LABEL_20:
    sub_21FFECC(loader, method);
  ((void (__fastcall *)(CriFsLoader_o *, const MethodInfo *))loader->klass->vtable._5_Dispose.methodPtr)(
    loader,
    loader->klass->vtable._5_Dispose.method);
  this->fields.loader = 0;
  sub_21FFBF4(&this->fields.loader, 0);
  newBinder = this->fields.newBinder;
  if ( newBinder )
  {
    ((void (__fastcall *)(struct CriFsBinder_o *, const MethodInfo *))newBinder->klass->vtable._5_Dispose.methodPtr)(
      newBinder,
      newBinder->klass->vtable._5_Dispose.method);
    this->fields.newBinder = 0;
    sub_21FFBF4(&this->fields.newBinder, 0);
  }
  doneDelegate_k__BackingField = this->fields._doneDelegate_k__BackingField;
  this->fields._isDone_k__BackingField = 1;
  if ( doneDelegate_k__BackingField )
    ((void (__fastcall *)(intptr_t, CriFsLoadFileRequest_o *, intptr_t))doneDelegate_k__BackingField->fields.invoke_impl)(
      doneDelegate_k__BackingField->fields.method_code,
      this,
      doneDelegate_k__BackingField->fields.method);
}


System_Byte_array *CriFsLoadFileRequest__get_bytes(CriFsLoadFileRequest_o *this, const MethodInfo *method)
{
  return this->fields._bytes_k__BackingField;
}


System_String_o *CriFsLoadFileRequest__get_path(CriFsLoadFileRequest_o *this, const MethodInfo *method)
{
  return this->fields._path_k__BackingField;
}


void CriFsLoadFileRequest__set_bytes(CriFsLoadFileRequest_o *this, System_Byte_array *value, const MethodInfo *method)
{
  this->fields._bytes_k__BackingField = value;
  sub_21FFBF4(&this->fields._bytes_k__BackingField, value);
}


void CriFsLoadFileRequest__set_path(CriFsLoadFileRequest_o *this, System_String_o *value, const MethodInfo *method)
{
  this->fields._path_k__BackingField = value;
  sub_21FFBF4(&this->fields._path_k__BackingField, value);
}