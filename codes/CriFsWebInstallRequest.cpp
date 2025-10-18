void CriFsWebInstallRequest___ctor(
        CriFsWebInstallRequest_o *this,
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        const MethodInfo *method)
{
  CriFsWebInstaller_o *v9; // x22
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  struct CriFsWebInstaller_o *installer; // x8
  const MethodInfo *v14; // x2

  if ( (byte_4C3C505 & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    sub_1C37058(&CriFsWebInstaller_TypeInfo);
    byte_4C3C505 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  this->fields._sourcePath_k__BackingField = srcPath;
  sub_1C36FFC(&this->fields._sourcePath_k__BackingField, srcPath);
  this->fields._destinationPath_k__BackingField = dstPath;
  sub_1C36FFC(&this->fields._destinationPath_k__BackingField, dstPath);
  this->fields._doneDelegate_k__BackingField = doneDelegate;
  sub_1C36FFC(&this->fields._doneDelegate_k__BackingField, doneDelegate);
  this->fields._progress_k__BackingField = 0.0;
  v9 = (CriFsWebInstaller_o *)sub_1C372A4(CriFsWebInstaller_TypeInfo);
  CriFsWebInstaller___ctor(v9, v10);
  this->fields.installer = v9;
  sub_1C36FFC(&this->fields.installer, v9);
  System_IO_File__Delete(dstPath, 0);
  installer = this->fields.installer;
  if ( !installer )
    sub_1C372B4(v11);
  CriFsWebInstaller__criFsWebInstaller_Copy(installer->fields.handle, srcPath, dstPath, v12);
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void CriFsWebInstallRequest__Dispose(CriFsWebInstallRequest_o *this, bool disposing, const MethodInfo *method)
{
  struct CriFsWebInstaller_o *v4; // x0
  struct CriFsWebInstaller_o **p_installer; // x19
  struct CriFsWebInstaller_o *installer; // t1

  if ( (byte_4C3C507 & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    byte_4C3C507 = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  installer = this->fields.installer;
  p_installer = &this->fields.installer;
  v4 = installer;
  if ( installer )
  {
    ((void (__fastcall *)(struct CriFsWebInstaller_o *, const MethodInfo *))v4->klass->vtable._5_Dispose.methodPtr)(
      v4,
      v4->klass->vtable._5_Dispose.method);
    *p_installer = 0;
    sub_1C36FFC(p_installer, 0);
  }
}


bool CriFsWebInstallRequest__GetCRC32(CriFsWebInstallRequest_o *this, uint32_t *ret_val, const MethodInfo *method)
{
  *ret_val = this->fields.crc32;
  return this->fields.crc32_set;
}


void CriFsWebInstallRequest__Stop(CriFsWebInstallRequest_o *this, const MethodInfo *method)
{
  CriFsWebInstaller_o *installer; // x0

  installer = this->fields.installer;
  if ( installer )
    CriFsWebInstaller__Stop(installer, method);
}


void CriFsWebInstallRequest__Update(CriFsWebInstallRequest_o *this, const MethodInfo *method)
{
  CriFsWebInstaller_o *installer; // x0
  struct CriFsWebInstaller_o **p_installer; // x20
  CriFsWebInstaller_StatusInfo_o *StatusInfo; // x0
  const MethodInfo *v6; // x2
  int32_t error; // w8
  int32_t status; // w21
  float contentsSize; // s0
  System_String_o *v10; // x0
  struct System_String_o *v11; // x0
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8
  CriFsWebInstaller_StatusInfo_o v13; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C3C506 & 1) == 0 )
  {
    sub_1C37058(&CriFsWebInstaller_Error_TypeInfo);
    sub_1C37058(&StringLiteral_15914/*"[CriFsWebInstallerError]"*/);
    byte_4C3C506 = 1;
  }
  p_installer = &this->fields.installer;
  installer = this->fields.installer;
  if ( installer )
  {
    StatusInfo = CriFsWebInstaller__GetStatusInfo(&v13, installer, method);
    status = v13.fields.status;
    error = v13.fields.error;
    contentsSize = 1.0;
    if ( v13.fields.contentsSize > 0 )
      contentsSize = (float)v13.fields.contentsSize;
    this->fields._progress_k__BackingField = (float)v13.fields.receivedSize / contentsSize;
    if ( status != 1 )
    {
      if ( status == 3 )
      {
        this->fields._progress_k__BackingField = -1.0;
        LODWORD(v13.fields.contentsSize) = error;
        *(_QWORD *)&v13.fields.status = CriFsWebInstaller_Error_TypeInfo;
        *(_QWORD *)&v13.fields.httpStatusCode = -1;
        v10 = System_Enum__ToString((System_Enum_o *)&v13, 0);
        v11 = System_String__Concat_63561656((System_String_o *)StringLiteral_15914/*"[CriFsWebInstallerError]"*/, v10, 0);
        this->fields._error_k__BackingField = v11;
        StatusInfo = (CriFsWebInstaller_StatusInfo_o *)sub_1C36FFC(&this->fields._error_k__BackingField, v11);
      }
      if ( !byte_4C3C813 )
      {
        StatusInfo = (CriFsWebInstaller_StatusInfo_o *)sub_1C37058(&CriFsWebInstaller_TypeInfo);
        byte_4C3C813 = 1;
      }
      if ( status == 2 && CriFsWebInstaller_TypeInfo->static_fields->_isCrcEnabled_k__BackingField )
      {
        if ( !*p_installer )
          goto LABEL_19;
        this->fields.crc32_set = CriFsWebInstaller__criFsWebInstaller_GetCRC32(
                                   (*p_installer)->fields.handle,
                                   &this->fields.crc32,
                                   v6) == 0;
      }
      StatusInfo = (CriFsWebInstaller_StatusInfo_o *)*p_installer;
      if ( *p_installer )
      {
        (*(void (__fastcall **)(CriFsWebInstaller_StatusInfo_o *, _QWORD))(*(_QWORD *)&StatusInfo->fields.status + 392LL))(
          StatusInfo,
          *(_QWORD *)(*(_QWORD *)&StatusInfo->fields.status + 400LL));
        this->fields.installer = 0;
        sub_1C36FFC(&this->fields.installer, 0);
        doneDelegate_k__BackingField = this->fields._doneDelegate_k__BackingField;
        this->fields._isDone_k__BackingField = 1;
        if ( doneDelegate_k__BackingField )
          ((void (__fastcall *)(intptr_t, CriFsWebInstallRequest_o *, intptr_t))doneDelegate_k__BackingField->fields.invoke_impl)(
            doneDelegate_k__BackingField->fields.method_code,
            this,
            doneDelegate_k__BackingField->fields.method);
        return;
      }
LABEL_19:
      sub_1C372B4(StatusInfo);
    }
  }
}