void CriFsLoadFileRequest___ctor(
        CriFsLoadFileRequest_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x2
  int64_t FileSize; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w8
  CriFsBinder_o *v15; // x21
  const MethodInfo *v16; // x1
  struct CriFsBinder_o *newBinder; // x1
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  CriFsBinder_o *v20; // x0

  if ( (byte_4CC08BB & 1) == 0 )
  {
    sub_1C713B0(&CriDisposableObjectManager_TypeInfo);
    sub_1C713B0(&CriFsBinder_TypeInfo);
    byte_4CC08BB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  this->fields._path_k__BackingField = path;
  sub_1C71354(&this->fields._path_k__BackingField, path);
  this->fields._doneDelegate_k__BackingField = doneDelegate;
  sub_1C71354(&this->fields._doneDelegate_k__BackingField, doneDelegate);
  this->fields.readUnitSize = readUnitSize;
  if ( srcBinder )
  {
    this->fields.newBinder = 0;
    sub_1C71354(&this->fields.newBinder, 0);
    this->fields.refBinder = srcBinder;
    sub_1C71354(&this->fields.refBinder, srcBinder);
    FileSize = CriFsBinder__GetFileSize(srcBinder, path, v11);
    this->fields.fileSize = FileSize;
    if ( FileSize < 0 )
      v14 = 4;
    else
      v14 = 2;
  }
  else
  {
    v15 = (CriFsBinder_o *)sub_1C715FC(CriFsBinder_TypeInfo);
    CriFsBinder___ctor(v15, v16);
    this->fields.newBinder = v15;
    sub_1C71354(&this->fields.newBinder, v15);
    newBinder = this->fields.newBinder;
    this->fields.refBinder = newBinder;
    sub_1C71354(&this->fields.refBinder, newBinder);
    v20 = this->fields.newBinder;
    if ( !v20 )
      sub_1C71608(0, v18);
    this->fields.bindId = CriFsBinder__BindFile(v20, 0, path, v19);
    v14 = 1;
  }
  this->fields.phase = v14;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v13);
}


// local variable allocation has failed, the output may be wrong!
void CriFsLoadFileRequest__Dispose(CriFsLoadFileRequest_o *this, bool disposing, const MethodInfo *method)
{
  struct CriFsLoader_o *loader; // x0
  struct CriFsBinder_o *newBinder; // x0

  if ( (byte_4CC08BC & 1) == 0 )
  {
    sub_1C713B0(&CriDisposableObjectManager_TypeInfo);
    byte_4CC08BC = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  loader = this->fields.loader;
  if ( loader )
  {
    ((void (__fastcall *)(struct CriFsLoader_o *, const MethodInfo *))loader->klass->vtable._5_Dispose.methodPtr)(
      loader,
      loader->klass->vtable._5_Dispose.method);
    this->fields.loader = 0;
    sub_1C71354(&this->fields.loader, 0);
  }
  newBinder = this->fields.newBinder;
  if ( newBinder )
  {
    ((void (__fastcall *)(struct CriFsBinder_o *, const MethodInfo *))newBinder->klass->vtable._5_Dispose.methodPtr)(
      newBinder,
      newBinder->klass->vtable._5_Dispose.method);
    this->fields.newBinder = 0;
    sub_1C71354(&this->fields.newBinder, 0);
  }
  this->fields._bytes_k__BackingField = 0;
  sub_1C71354(&this->fields._bytes_k__BackingField, 0);
}


void CriFsLoadFileRequest__OnError(CriFsLoadFileRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CriFsBinder_o *newBinder; // x0
  struct CriFsLoader_o *loader; // x0
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8

  if ( (byte_4CC08BE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_6131/*"Error occurred."*/);
    byte_4CC08BE = 1;
  }
  this->fields._bytes_k__BackingField = 0;
  sub_1C71354(&this->fields._bytes_k__BackingField, 0);
  v3 = StringLiteral_6131/*"Error occurred."*/;
  this->fields._error_k__BackingField = (struct System_String_o *)StringLiteral_6131/*"Error occurred."*/;
  sub_1C71354(&this->fields._error_k__BackingField, v3);
  this->fields.refBinder = 0;
  sub_1C71354(&this->fields.refBinder, 0);
  newBinder = this->fields.newBinder;
  if ( newBinder )
  {
    ((void (__fastcall *)(struct CriFsBinder_o *, const MethodInfo *))newBinder->klass->vtable._5_Dispose.methodPtr)(
      newBinder,
      newBinder->klass->vtable._5_Dispose.method);
    this->fields.newBinder = 0;
    sub_1C71354(&this->fields.newBinder, 0);
  }
  loader = this->fields.loader;
  if ( loader )
  {
    ((void (__fastcall *)(struct CriFsLoader_o *, const MethodInfo *))loader->klass->vtable._5_Dispose.methodPtr)(
      loader,
      loader->klass->vtable._5_Dispose.method);
    this->fields.loader = 0;
    sub_1C71354(&this->fields.loader, 0);
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
  CriFsLoader_o *loader; // x0

  if ( this->fields.phase == 2 )
  {
    loader = this->fields.loader;
    if ( loader )
      CriFsLoader__Stop(loader, method);
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
  int32_t Status; // w0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  CriFsBinder_o *refBinder; // x0
  int64_t FileSize; // x0
  int32_t *p_phase; // x8
  int v9; // w9

  Status = CriFsBinder__GetStatus(this->fields.bindId, method);
  if ( Status != 1 )
  {
    if ( Status == 2 )
    {
      refBinder = this->fields.refBinder;
      if ( !refBinder )
        sub_1C71608(0, v4);
      FileSize = CriFsBinder__GetFileSize(refBinder, this->fields._path_k__BackingField, v5);
      p_phase = &this->fields.phase;
      this->fields.fileSize = FileSize;
      if ( (FileSize & 0x8000000000000000LL) == 0 )
      {
        v9 = 2;
LABEL_8:
        *p_phase = v9;
        return;
      }
    }
    else
    {
      this->fields.fileSize = -1;
      p_phase = &this->fields.phase;
    }
    v9 = 4;
    goto LABEL_8;
  }
}


void CriFsLoadFileRequest__UpdateLoader(CriFsLoadFileRequest_o *this, const MethodInfo *method)
{
  CriFsLoader_o *loader; // x0
  struct CriFsLoader_o **p_loader; // x20
  CriFsLoader_o *v5; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct System_Byte_array *v8; // x0
  const MethodInfo *v9; // x6
  int32_t Status; // w0
  struct CriFsBinder_o *newBinder; // x0
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8

  if ( (byte_4CC08BD & 1) == 0 )
  {
    sub_1C713B0(&byte___TypeInfo);
    sub_1C713B0(&Method_CriFsLoadFileRequest_UpdateLoader__);
    sub_1C713B0(&CriFsLoader_TypeInfo);
    byte_4CC08BD = 1;
  }
  p_loader = &this->fields.loader;
  loader = this->fields.loader;
  if ( !loader )
  {
    v5 = (CriFsLoader_o *)sub_1C715FC(CriFsLoader_TypeInfo);
    CriFsLoader___ctor(v5, v6);
    *p_loader = v5;
    sub_1C71354(&this->fields.loader, v5);
    loader = *p_loader;
    if ( !*p_loader )
      goto LABEL_18;
    CriFsLoader__SetReadUnitSize(loader, this->fields.readUnitSize, v7);
    v8 = (struct System_Byte_array *)sub_1C71458(byte___TypeInfo, LODWORD(this->fields.fileSize));
    this->fields._bytes_k__BackingField = v8;
    sub_1C71354(&this->fields._bytes_k__BackingField, v8);
    loader = this->fields.loader;
    if ( !loader )
      goto LABEL_18;
    CriFsLoader__Load(
      loader,
      this->fields.refBinder,
      this->fields._path_k__BackingField,
      0,
      this->fields.fileSize,
      this->fields._bytes_k__BackingField,
      v9);
    loader = this->fields.loader;
    if ( !loader )
      goto LABEL_18;
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
      sub_1C71354(&this->fields._bytes_k__BackingField, 0);
      break;
  }
  loader = this->fields.loader;
  this->fields.phase = 3;
  if ( !loader )
LABEL_18:
    sub_1C71608(loader, method);
  ((void (__fastcall *)(CriFsLoader_o *, const MethodInfo *))loader->klass->vtable._5_Dispose.methodPtr)(
    loader,
    loader->klass->vtable._5_Dispose.method);
  this->fields.loader = 0;
  sub_1C71354(&this->fields.loader, 0);
  newBinder = this->fields.newBinder;
  if ( newBinder )
  {
    ((void (__fastcall *)(struct CriFsBinder_o *, const MethodInfo *))newBinder->klass->vtable._5_Dispose.methodPtr)(
      newBinder,
      newBinder->klass->vtable._5_Dispose.method);
    this->fields.newBinder = 0;
    sub_1C71354(&this->fields.newBinder, 0);
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
  sub_1C71354(&this->fields._bytes_k__BackingField, value);
}


void CriFsLoadFileRequest__set_path(CriFsLoadFileRequest_o *this, System_String_o *value, const MethodInfo *method)
{
  this->fields._path_k__BackingField = value;
  sub_1C71354(&this->fields._path_k__BackingField, value);
}