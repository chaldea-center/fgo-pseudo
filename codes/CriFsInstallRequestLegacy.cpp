void CriFsInstallRequestLegacy___ctor(
        CriFsInstallRequestLegacy_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        int32_t installBufferSize,
        const MethodInfo *method)
{
  CriFsInstaller_c *v13; // x0
  CriFsInstaller_o *v14; // x24
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  CriFsInstaller_o *installer; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_596969A & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    sub_2213A60(&CriFsInstaller_TypeInfo);
    byte_596969A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  this->fields._sourcePath_k__BackingField = srcPath;
  sub_2213A04(&this->fields._sourcePath_k__BackingField, srcPath);
  this->fields._destinationPath_k__BackingField = dstPath;
  sub_2213A04(&this->fields._destinationPath_k__BackingField, dstPath);
  this->fields._doneDelegate_k__BackingField = doneDelegate;
  sub_2213A04(&this->fields._doneDelegate_k__BackingField, doneDelegate);
  v13 = CriFsInstaller_TypeInfo;
  this->fields._progress_k__BackingField = 0.0;
  v14 = (CriFsInstaller_o *)sub_2213CCC(v13);
  CriFsInstaller___ctor(v14, v15);
  this->fields.installer = v14;
  sub_2213A04(&this->fields.installer, v14);
  installer = this->fields.installer;
  if ( !installer )
    sub_2213CDC(0, v16);
  CriFsInstaller__Copy(installer, srcBinder, srcPath, dstPath, installBufferSize, v17);
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v19, v20);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v20);
}


// local variable allocation has failed, the output may be wrong!
void CriFsInstallRequestLegacy__Dispose(CriFsInstallRequestLegacy_o *this, bool disposing, const MethodInfo *method)
{
  struct CriFsInstaller_o *v4; // x0
  struct CriFsInstaller_o **p_installer; // x19
  struct CriFsInstaller_o *installer; // t1

  if ( (byte_596969C & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    byte_596969C = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, disposing, method);
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
    sub_2213A04(p_installer, 0);
  }
}


void CriFsInstallRequestLegacy__Stop(CriFsInstallRequestLegacy_o *this, const MethodInfo *method)
{
  struct CriFsInstaller_o *installer; // x8
  intptr_t handle; // x0

  installer = this->fields.installer;
  if ( installer )
  {
    handle = installer->fields.handle;
    if ( handle )
      CriFsInstaller__criFsInstaller_Stop(handle, method);
  }
}


void CriFsInstallRequestLegacy__Update(CriFsInstallRequestLegacy_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CriFsInstaller_o *installer; // x8
  struct CriFsInstaller_o **p_installer; // x20
  intptr_t handle; // x0
  struct CriFsInstaller_o *v7; // x0
  intptr_t v8; // x0
  __int64 v9; // x1
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8
  float progress; // [xsp+8h] [xbp-18h] BYREF
  int32_t status; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_596969B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6397/*"Error occurred."*/);
    byte_596969B = 1;
  }
  p_installer = &this->fields.installer;
  installer = this->fields.installer;
  if ( installer )
  {
    handle = installer->fields.handle;
    progress = 0.0;
    if ( handle )
    {
      v7 = (struct CriFsInstaller_o *)CriFsInstaller__criFsInstaller_GetProgress(handle, &progress, v2);
      installer = this->fields.installer;
      this->fields._progress_k__BackingField = progress;
      if ( !installer )
LABEL_16:
        sub_2213CDC(v7, method);
    }
    else
    {
      this->fields._progress_k__BackingField = 0.0;
    }
    v8 = installer->fields.handle;
    status = 0;
    if ( v8 )
    {
      CriFsInstaller__criFsInstaller_GetStatus(v8, &status, v2);
      if ( status == 1 )
        return;
      if ( status == 3 )
      {
        v9 = StringLiteral_6397/*"Error occurred."*/;
        this->fields._error_k__BackingField = (struct System_String_o *)StringLiteral_6397/*"Error occurred."*/;
        this->fields._progress_k__BackingField = -1.0;
        sub_2213A04(&this->fields._error_k__BackingField, v9);
      }
    }
    v7 = *p_installer;
    if ( !*p_installer )
      goto LABEL_16;
    ((void (__fastcall *)(struct CriFsInstaller_o *, const MethodInfo *))v7->klass->vtable._5_Dispose.methodPtr)(
      v7,
      v7->klass->vtable._5_Dispose.method);
    this->fields.installer = 0;
    sub_2213A04(&this->fields.installer, 0);
    doneDelegate_k__BackingField = this->fields._doneDelegate_k__BackingField;
    this->fields._isDone_k__BackingField = 1;
    if ( doneDelegate_k__BackingField )
      ((void (__fastcall *)(intptr_t, CriFsInstallRequestLegacy_o *, intptr_t))doneDelegate_k__BackingField->fields.invoke_impl)(
        doneDelegate_k__BackingField->fields.method_code,
        this,
        doneDelegate_k__BackingField->fields.method);
  }
}