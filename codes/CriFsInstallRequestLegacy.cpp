void CriFsInstallRequestLegacy___ctor(
        CriFsInstallRequestLegacy_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        int32_t installBufferSize,
        const MethodInfo *method)
{
  CriFsInstaller_o *v13; // x24
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  const MethodInfo *v16; // x5
  CriFsInstaller_o *installer; // x0
  const MethodInfo *v18; // x2

  if ( (byte_4CC08C2 & 1) == 0 )
  {
    sub_1C713B0(&CriDisposableObjectManager_TypeInfo);
    sub_1C713B0(&CriFsInstaller_TypeInfo);
    byte_4CC08C2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  this->fields._sourcePath_k__BackingField = srcPath;
  sub_1C71354(&this->fields._sourcePath_k__BackingField, srcPath);
  this->fields._destinationPath_k__BackingField = dstPath;
  sub_1C71354(&this->fields._destinationPath_k__BackingField, dstPath);
  this->fields._doneDelegate_k__BackingField = doneDelegate;
  sub_1C71354(&this->fields._doneDelegate_k__BackingField, doneDelegate);
  this->fields._progress_k__BackingField = 0.0;
  v13 = (CriFsInstaller_o *)sub_1C715FC(CriFsInstaller_TypeInfo);
  CriFsInstaller___ctor(v13, v14);
  this->fields.installer = v13;
  sub_1C71354(&this->fields.installer, v13);
  installer = this->fields.installer;
  if ( !installer )
    sub_1C71608(0, v15);
  CriFsInstaller__Copy(installer, srcBinder, srcPath, dstPath, installBufferSize, v16);
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v18);
}


// local variable allocation has failed, the output may be wrong!
void CriFsInstallRequestLegacy__Dispose(CriFsInstallRequestLegacy_o *this, bool disposing, const MethodInfo *method)
{
  struct CriFsInstaller_o *v4; // x0
  struct CriFsInstaller_o **p_installer; // x19
  struct CriFsInstaller_o *installer; // t1

  if ( (byte_4CC08C4 & 1) == 0 )
  {
    sub_1C713B0(&CriDisposableObjectManager_TypeInfo);
    byte_4CC08C4 = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  installer = this->fields.installer;
  p_installer = &this->fields.installer;
  v4 = installer;
  if ( installer )
  {
    ((void (__fastcall *)(struct CriFsInstaller_o *, const MethodInfo *))v4->klass->vtable._5_Dispose.methodPtr)(
      v4,
      v4->klass->vtable._5_Dispose.method);
    *p_installer = 0;
    sub_1C71354(p_installer, 0);
  }
}


void CriFsInstallRequestLegacy__Stop(CriFsInstallRequestLegacy_o *this, const MethodInfo *method)
{
  CriFsInstaller_o *installer; // x0

  installer = this->fields.installer;
  if ( installer )
    CriFsInstaller__Stop(installer, method);
}


void CriFsInstallRequestLegacy__Update(CriFsInstallRequestLegacy_o *this, const MethodInfo *method)
{
  CriFsInstaller_o *installer; // x0
  struct CriFsInstaller_o **p_installer; // x20
  const MethodInfo *v5; // x1
  float Progress; // s0
  CriFsInstaller_o *v7; // x0
  int32_t Status; // w0
  __int64 v9; // x1
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8

  if ( (byte_4CC08C3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_6131/*"Error occurred."*/);
    byte_4CC08C3 = 1;
  }
  p_installer = &this->fields.installer;
  installer = this->fields.installer;
  if ( installer )
  {
    Progress = CriFsInstaller__GetProgress(installer, method);
    v7 = this->fields.installer;
    this->fields._progress_k__BackingField = Progress;
    if ( !v7 )
      goto LABEL_12;
    Status = CriFsInstaller__GetStatus(v7, v5);
    if ( Status == 1 )
      return;
    if ( Status == 3 )
    {
      this->fields._progress_k__BackingField = -1.0;
      v9 = StringLiteral_6131/*"Error occurred."*/;
      this->fields._error_k__BackingField = (struct System_String_o *)StringLiteral_6131/*"Error occurred."*/;
      sub_1C71354(&this->fields._error_k__BackingField, v9);
    }
    v7 = *p_installer;
    if ( !*p_installer )
LABEL_12:
      sub_1C71608(v7, v5);
    ((void (__fastcall *)(CriFsInstaller_o *, const MethodInfo *))v7->klass->vtable._5_Dispose.methodPtr)(
      v7,
      v7->klass->vtable._5_Dispose.method);
    this->fields.installer = 0;
    sub_1C71354(&this->fields.installer, 0);
    doneDelegate_k__BackingField = this->fields._doneDelegate_k__BackingField;
    this->fields._isDone_k__BackingField = 1;
    if ( doneDelegate_k__BackingField )
      ((void (__fastcall *)(intptr_t, CriFsInstallRequestLegacy_o *, intptr_t))doneDelegate_k__BackingField->fields.invoke_impl)(
        doneDelegate_k__BackingField->fields.method_code,
        this,
        doneDelegate_k__BackingField->fields.method);
  }
}