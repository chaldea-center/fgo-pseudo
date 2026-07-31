void CriFsWebInstallRequest___ctor(
        CriFsWebInstallRequest_o *this,
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        const MethodInfo *method)
{
  CriFsWebInstaller_c *v9; // x0
  CriFsWebInstaller_o *v10; // x22
  const MethodInfo *v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  struct CriFsWebInstaller_o *installer; // x8
  __int64 v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_59314FD & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    sub_21FFC50(&CriFsWebInstaller_TypeInfo);
    byte_59314FD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  this->fields._sourcePath_k__BackingField = srcPath;
  sub_21FFBF4(&this->fields._sourcePath_k__BackingField, srcPath);
  this->fields._destinationPath_k__BackingField = dstPath;
  sub_21FFBF4(&this->fields._destinationPath_k__BackingField, dstPath);
  this->fields._doneDelegate_k__BackingField = doneDelegate;
  sub_21FFBF4(&this->fields._doneDelegate_k__BackingField, doneDelegate);
  v9 = CriFsWebInstaller_TypeInfo;
  this->fields._progress_k__BackingField = 0.0;
  v10 = (CriFsWebInstaller_o *)sub_21FFEBC(v9);
  CriFsWebInstaller___ctor(v10, v11);
  this->fields.installer = v10;
  sub_21FFBF4(&this->fields.installer, v10);
  System_IO_File__Delete(dstPath, 0);
  installer = this->fields.installer;
  if ( !installer )
    sub_21FFECC(v12, v13);
  CriFsWebInstaller__criFsWebInstaller_Copy(installer->fields.handle, srcPath, dstPath, v14);
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v16, v17);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v17);
}


// local variable allocation has failed, the output may be wrong!
void CriFsWebInstallRequest__Dispose(CriFsWebInstallRequest_o *this, bool disposing, const MethodInfo *method)
{
  struct CriFsWebInstaller_o *v4; // x0
  struct CriFsWebInstaller_o **p_installer; // x19
  struct CriFsWebInstaller_o *installer; // t1

  if ( (byte_59314FF & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    byte_59314FF = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, disposing, method);
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
    sub_21FFBF4(p_installer, 0);
  }
}


bool CriFsWebInstallRequest__GetCRC32(CriFsWebInstallRequest_o *this, uint32_t *ret_val, const MethodInfo *method)
{
  uint32_t crc32; // w9
  bool result; // w0

  crc32 = this->fields.crc32;
  result = this->fields.crc32_set;
  *ret_val = crc32;
  return result;
}


void CriFsWebInstallRequest__Stop(CriFsWebInstallRequest_o *this, const MethodInfo *method)
{
  struct CriFsWebInstaller_o *installer; // x8
  intptr_t handle; // x0

  installer = this->fields.installer;
  if ( installer )
  {
    handle = installer->fields.handle;
    if ( handle )
      CriFsWebInstaller__criFsWebInstaller_Stop(handle, method);
  }
}


void CriFsWebInstallRequest__Update(CriFsWebInstallRequest_o *this, const MethodInfo *method)
{
  CriFsWebInstaller_o *installer; // x0
  struct CriFsWebInstaller_o **p_installer; // x20
  __int64 StatusInfo; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  float contentsSize; // s0
  int32_t error; // w8
  int32_t status; // w21
  System_String_o *v11; // x0
  struct System_String_o *v12; // x0
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8
  CriFsWebInstaller_StatusInfo_o v14; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_59314FE & 1) == 0 )
  {
    sub_21FFC50(&CriFsWebInstaller_Error_TypeInfo);
    sub_21FFC50(&StringLiteral_16504/*"[CriFsWebInstallerError]"*/);
    byte_59314FE = 1;
  }
  p_installer = &this->fields.installer;
  installer = this->fields.installer;
  if ( installer )
  {
    StatusInfo = (__int64)CriFsWebInstaller__GetStatusInfo(&v14, installer, method);
    contentsSize = (float)v14.fields.contentsSize;
    status = v14.fields.status;
    error = v14.fields.error;
    if ( v14.fields.contentsSize <= 0 )
      contentsSize = 1.0;
    this->fields._progress_k__BackingField = (float)v14.fields.receivedSize / contentsSize;
    if ( status != 1 )
    {
      if ( status == 3 )
      {
        this->fields._progress_k__BackingField = -1.0;
        LODWORD(v14.fields.contentsSize) = error;
        *(_QWORD *)&v14.fields.status = CriFsWebInstaller_Error_TypeInfo;
        *(_QWORD *)&v14.fields.httpStatusCode = -1;
        v11 = System_Enum__ToString((System_Enum_o *)&v14, 0);
        v12 = System_String__Concat_75438412((System_String_o *)StringLiteral_16504/*"[CriFsWebInstallerError]"*/, v11, 0);
        this->fields._error_k__BackingField = v12;
        StatusInfo = sub_21FFBF4(&this->fields._error_k__BackingField, v12);
      }
      if ( !byte_5931819 )
      {
        StatusInfo = sub_21FFC50(&CriFsWebInstaller_TypeInfo);
        byte_5931819 = 1;
      }
      if ( status == 2 && CriFsWebInstaller_TypeInfo->static_fields->_isCrcEnabled_k__BackingField )
      {
        if ( !*p_installer )
          goto LABEL_19;
        this->fields.crc32_set = CriFsWebInstaller__criFsWebInstaller_GetCRC32(
                                   (*p_installer)->fields.handle,
                                   &this->fields.crc32,
                                   v7) == 0;
      }
      StatusInfo = (__int64)*p_installer;
      if ( *p_installer )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)StatusInfo + 392LL))(
          StatusInfo,
          *(_QWORD *)(*(_QWORD *)StatusInfo + 400LL));
        this->fields.installer = 0;
        sub_21FFBF4(&this->fields.installer, 0);
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
      sub_21FFECC(StatusInfo, v6);
    }
  }
}