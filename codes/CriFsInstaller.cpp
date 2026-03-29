void CriFsInstaller___ctor(CriFsInstaller_o *this, const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  System_Exception_o *v7; // x19
  void *v8; // x0
  __int64 v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x0

  if ( (byte_4D29C20 & 1) == 0 )
  {
    sub_1C93AD4(&CriDisposableObjectManager_TypeInfo);
    sub_1C93AD4(&CriFsPlugin_TypeInfo);
    byte_4D29C20 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    v6 = sub_1C93AE8(&System_Exception_TypeInfo);
    v7 = (System_Exception_o *)sub_1C93D20(v6);
    v8 = &StringLiteral_4891/*"CriFsPlugin is not initialized."*/;
    goto LABEL_12;
  }
  this->fields.handle = 0;
  CriFsInstaller__criFsInstaller_Create(&this->fields.handle, 0, v4);
  if ( System_IntPtr__op_Equality(this->fields.handle, 0, 0) )
  {
    v9 = sub_1C93AE8(&System_Exception_TypeInfo);
    v7 = (System_Exception_o *)sub_1C93D20(v9);
    v8 = &StringLiteral_18492/*"criFsInstaller_Create() failed."*/;
LABEL_12:
    v10 = (System_String_o *)sub_1C93AE8(v8);
    System_Exception___ctor_66171816(v7, v10, 0);
    v11 = sub_1C93AE8(&Method_CriFsInstaller__ctor__);
    sub_1C93BFC(v7, v11);
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v5);
}


void CriFsInstaller__Copy(
        CriFsInstaller_o *this,
        CriFsBinder_o *binder,
        System_String_o *srcPath,
        System_String_o *dstPath,
        int32_t installBufferSize,
        const MethodInfo *method)
{
  CriFsBinder_o *handle; // x22
  CriFsInstaller_o *v10; // x21
  const MethodInfo *v11; // x6
  __int64 v12; // x0
  intptr_t v13; // x23
  System_Runtime_InteropServices_GCHandle_o v14; // x0
  struct System_Byte_array *installBuffer; // x8
  int64_t max_length_low; // x5
  CriFsInstaller_o *v17; // x4
  intptr_t v18; // x0
  intptr_t v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3

  handle = binder;
  v10 = this;
  if ( (byte_4D29C23 & 1) == 0 )
  {
    sub_1C93AD4(&byte___TypeInfo);
    sub_1C93AD4(&StringLiteral_22457/*"net2:"*/);
    sub_1C93AD4(&StringLiteral_20296/*"https:"*/);
    this = (CriFsInstaller_o *)sub_1C93AD4(&StringLiteral_20261/*"http:"*/);
    byte_4D29C23 = 1;
  }
  if ( !srcPath )
    goto LABEL_17;
  if ( System_String__StartsWith(srcPath, (System_String_o *)StringLiteral_20261/*"http:"*/, 0)
    || System_String__StartsWith(srcPath, (System_String_o *)StringLiteral_20296/*"https:"*/, 0) )
  {
    srcPath = System_String__Concat_64425724((System_String_o *)StringLiteral_22457/*"net2:"*/, srcPath, 0);
  }
  if ( installBufferSize >= 1 )
  {
    v12 = sub_1C93B7C(byte___TypeInfo, (unsigned int)installBufferSize);
    v10->fields.installBuffer = (struct System_Byte_array *)v12;
    sub_1C93A78(&v10->fields.installBuffer, v12);
    v10->fields.installBufferGch = System_Runtime_InteropServices_GCHandle__Alloc_65105564(
                                     &v10->fields.installBuffer->obj,
                                     3,
                                     0);
    if ( handle )
      handle = (CriFsBinder_o *)handle->fields.handle;
    v13 = v10->fields.handle;
    v14.fields.handle = (intptr_t)&v10->fields.installBufferGch;
    this = (CriFsInstaller_o *)System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(v14, 0);
    installBuffer = v10->fields.installBuffer;
    if ( installBuffer )
    {
      max_length_low = SLODWORD(installBuffer->max_length);
      v17 = this;
      v18 = v13;
      v19 = (intptr_t)handle;
      v20 = srcPath;
      v21 = dstPath;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C93D2C(this, binder);
  }
  v18 = v10->fields.handle;
  if ( handle )
    v19 = handle->fields.handle;
  else
    v19 = 0;
  v20 = srcPath;
  v21 = dstPath;
  v17 = 0;
  max_length_low = 0;
LABEL_16:
  CriFsInstaller__criFsInstaller_Copy(v18, v19, v20, v21, (intptr_t)v17, max_length_low, v11);
}


void CriFsInstaller__Dispose(CriFsInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D29C21 & 1) == 0 )
  {
    sub_1C93AD4(&System_GC_TypeInfo);
    byte_4D29C21 = 1;
  }
  CriFsInstaller__Dispose_31194568(this, 1, v2);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CriFsInstaller__Dispose_31194568(CriFsInstaller_o *this, bool disposing, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Runtime_InteropServices_GCHandle_o v6; // x0

  if ( (byte_4D29C22 & 1) == 0 )
  {
    sub_1C93AD4(&CriDisposableObjectManager_TypeInfo);
    byte_4D29C22 = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
  {
    CriFsInstaller__criFsInstaller_Destroy(this->fields.handle, v5);
    this->fields.handle = 0;
  }
  if ( disposing )
  {
    if ( this->fields.installBuffer )
    {
      v6.fields.handle = (intptr_t)&this->fields.installBufferGch;
      System_Runtime_InteropServices_GCHandle__Free(v6, 0);
      this->fields.installBuffer = 0;
      sub_1C93A78(&this->fields.installBuffer, 0);
    }
  }
}


// attributes: thunk
void CriFsInstaller__ExecuteMain(const MethodInfo *method)
{
  CriFsInstaller__criFsInstaller_ExecuteMain(method);
}


// positive sp value has been detected, the output may be wrong!
void CriFsInstaller__Finalize(CriFsInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CriFsInstaller__Dispose_31194568(this, 0, v2);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


float CriFsInstaller__GetProgress(CriFsInstaller_o *this, const MethodInfo *method)
{
  bool v3; // w0
  const MethodInfo *v4; // x2
  float result; // s0
  float progress; // [xsp+Ch] [xbp-14h] BYREF

  progress = 0.0;
  v3 = System_IntPtr__op_Inequality(this->fields.handle, 0, 0);
  result = 0.0;
  if ( v3 )
  {
    CriFsInstaller__criFsInstaller_GetProgress(this->fields.handle, &progress, v4);
    return progress;
  }
  return result;
}


int32_t CriFsInstaller__GetStatus(CriFsInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  bool v4; // w8
  int32_t result; // w0
  int32_t status; // [xsp+Ch] [xbp-14h] BYREF

  status = 0;
  v4 = System_IntPtr__op_Inequality(this->fields.handle, 0, 0);
  result = 0;
  if ( v4 )
  {
    CriFsInstaller__criFsInstaller_GetStatus(this->fields.handle, &status, v3);
    return status;
  }
  return result;
}


void CriFsInstaller__Stop(CriFsInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
    CriFsInstaller__criFsInstaller_Stop(this->fields.handle, v3);
}


int32_t CriFsInstaller__criFsInstaller_Copy(
        intptr_t installer,
        intptr_t binder,
        System_String_o *src_path,
        System_String_o *dst_path,
        intptr_t buffer,
        int64_t buffer_size,
        const MethodInfo *method)
{
  int v7; // w7
  int v10; // w23
  int v11; // w24
  __int64 v14; // x24
  int v15; // w1
  int v16; // w2
  int v17; // w3
  int v18; // w4
  int v19; // w5
  int v20; // w6
  int v21; // w7
  __int64 v22; // x23
  int32_t v23; // w19
  int v25[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v26; // [xsp+8h] [xbp-68h]
  int v27[2]; // [xsp+10h] [xbp-60h]
  void *v28; // [xsp+18h] [xbp-58h]
  __int64 v29; // [xsp+20h] [xbp-50h]
  int v30; // [xsp+28h] [xbp-48h]
  char v31; // [xsp+2Ch] [xbp-44h]

  v10 = (int)dst_path;
  v11 = (int)src_path;
  if ( !off_4D29C40 )
  {
    *(_QWORD *)v25 = "cri_ware_unity";
    v26 = 14;
    *(_QWORD *)v27 = "criFsInstaller_Copy";
    v28 = &word_12 + 1;
    v30 = 48;
    v29 = 0x200000000LL;
    v31 = 0;
    off_4D29C40 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_1C94184(v25, binder);
  }
  v14 = sub_1C94164(
          v11,
          binder,
          (int)src_path,
          (int)dst_path,
          buffer,
          buffer_size,
          (int)method,
          v7,
          v25[0],
          v26,
          v27[0],
          v28);
  v22 = sub_1C94164(v10, v15, v16, v17, v18, v19, v20, v21, v25[0], v26, v27[0], v28);
  v23 = off_4D29C40(installer, binder, v14, v22, buffer, buffer_size);
  sub_1C9417C(v14);
  sub_1C9417C(v22);
  return v23;
}


int32_t CriFsInstaller__criFsInstaller_Create(intptr_t *installer, int32_t option, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4D29C30;
  if ( !off_4D29C30 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsInstaller_Create";
    v7[3] = 21;
    v8 = 12;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C94184(v7, option);
    off_4D29C30 = v3;
  }
  return ((int32_t (__fastcall *)(intptr_t *, _QWORD, const MethodInfo *))v3)(installer, (unsigned int)option, method);
}


int32_t CriFsInstaller__criFsInstaller_Destroy(intptr_t installer, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4D29C38;
  if ( !off_4D29C38 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsInstaller_Destroy";
    v5[3] = 22;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C94184(v5, method);
    off_4D29C38 = v2;
  }
  return ((int32_t (__fastcall *)(intptr_t, const MethodInfo *))v2)(installer, method);
}


int32_t CriFsInstaller__criFsInstaller_ExecuteMain(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)off_4D29C28;
  if ( !off_4D29C28 )
  {
    v4 = 0;
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "criFsInstaller_ExecuteMain";
    v3[3] = 26;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1C94184(v3);
    v1 = method;
    off_4D29C28 = method;
  }
  return ((int32_t (__fastcall *)(const MethodInfo *))v1)(method);
}


int32_t CriFsInstaller__criFsInstaller_GetProgress(intptr_t installer, float *progress, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4D29C58;
  if ( !off_4D29C58 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsInstaller_GetProgress";
    v7[3] = 26;
    v8 = 16;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C94184(v7, progress);
    off_4D29C58 = v3;
  }
  return ((int32_t (__fastcall *)(intptr_t, float *, const MethodInfo *))v3)(installer, progress, method);
}


int32_t CriFsInstaller__criFsInstaller_GetStatus(intptr_t installer, int32_t *status, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4D29C50;
  if ( !off_4D29C50 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsInstaller_GetStatus";
    v7[3] = 24;
    v8 = 16;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C94184(v7, status);
    off_4D29C50 = v3;
  }
  return ((int32_t (__fastcall *)(intptr_t, int32_t *, const MethodInfo *))v3)(installer, status, method);
}


int32_t CriFsInstaller__criFsInstaller_Stop(intptr_t installer, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4D29C48;
  if ( !off_4D29C48 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsInstaller_Stop";
    v5[3] = 19;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C94184(v5, method);
    off_4D29C48 = v2;
  }
  return ((int32_t (__fastcall *)(intptr_t, const MethodInfo *))v2)(installer, method);
}