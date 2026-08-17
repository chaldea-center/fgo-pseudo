void CriFsInstaller___ctor(CriFsInstaller_o *this, const MethodInfo *method)
{
  __int64 v3; // x2
  System_Guid_o v4; // kr00_16
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  System_Exception_o *v10; // x19
  void *v11; // x0
  __int64 v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x0

  if ( (byte_59695C8 & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59695C8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v4 = System_Guid__NewGuid(0);
  inited = CriFsPlugin_TypeInfo;
  this->fields.guid = v4;
  if ( !*(&inited->_2.cctor_finished + 1) )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(inited, *(_QWORD *)&v4.fields._d, v3);
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    v9 = sub_2213A74(&System_Exception_TypeInfo);
    v10 = (System_Exception_o *)sub_2213CCC(v9);
    v11 = &StringLiteral_5053/*"CriFsPlugin is not initialized."*/;
    goto LABEL_12;
  }
  this->fields.handle = 0;
  CriFsInstaller__criFsInstaller_Create(&this->fields.handle, 0, v6);
  if ( !this->fields.handle )
  {
    v12 = sub_2213A74(&System_Exception_TypeInfo);
    v10 = (System_Exception_o *)sub_2213CCC(v12);
    v11 = &StringLiteral_19161/*"criFsInstaller_Create() failed."*/;
LABEL_12:
    v13 = (System_String_o *)sub_2213A74(v11);
    System_Exception___ctor_77375268(v10, v13, 0);
    v14 = sub_2213A74(&Method_CriFsInstaller__ctor__);
    sub_2213BA0(v10, v14);
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v7, v8);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v8);
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
  struct System_Byte_array **p_installBuffer; // x23
  intptr_t p_installBufferGch; // x21
  intptr_t v15; // x24
  System_Runtime_InteropServices_GCHandle_o v16; // x0
  int64_t max_length_low; // x5
  CriFsInstaller_o *v18; // x4
  intptr_t v19; // x0
  intptr_t v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3

  handle = binder;
  v10 = this;
  if ( (byte_59695CB & 1) == 0 )
  {
    sub_2213A60(&byte___TypeInfo);
    sub_2213A60(&StringLiteral_23310/*"net2:"*/);
    sub_2213A60(&StringLiteral_21039/*"https:"*/);
    this = (CriFsInstaller_o *)sub_2213A60(&StringLiteral_21004/*"http:"*/);
    byte_59695CB = 1;
  }
  if ( !srcPath )
    goto LABEL_17;
  if ( System_String__StartsWith(srcPath, (System_String_o *)StringLiteral_21004/*"http:"*/, 0)
    || System_String__StartsWith(srcPath, (System_String_o *)StringLiteral_21039/*"https:"*/, 0) )
  {
    srcPath = System_String__Concat_75651716((System_String_o *)StringLiteral_23310/*"net2:"*/, srcPath, 0);
  }
  if ( installBufferSize >= 1 )
  {
    v12 = sub_2213B20(byte___TypeInfo, (unsigned int)installBufferSize);
    v10->fields.installBuffer = (struct System_Byte_array *)v12;
    p_installBuffer = &v10->fields.installBuffer;
    sub_2213A04(&v10->fields.installBuffer, v12);
    v10->fields.installBufferGch = System_Runtime_InteropServices_GCHandle__Alloc_76321116(
                                     &v10->fields.installBuffer->obj,
                                     3,
                                     0);
    p_installBufferGch = (intptr_t)&v10->fields.installBufferGch;
    if ( handle )
      handle = (CriFsBinder_o *)handle->fields.handle;
    v15 = *(_QWORD *)(p_installBufferGch + 8);
    v16.fields.handle = p_installBufferGch;
    this = (CriFsInstaller_o *)System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(v16, 0);
    if ( *p_installBuffer )
    {
      max_length_low = SLODWORD((*p_installBuffer)->max_length);
      v18 = this;
      v19 = v15;
      v20 = (intptr_t)handle;
      v21 = srcPath;
      v22 = dstPath;
      goto LABEL_16;
    }
LABEL_17:
    sub_2213CDC(this, binder);
  }
  v19 = v10->fields.handle;
  if ( handle )
    v20 = handle->fields.handle;
  else
    v20 = 0;
  v21 = srcPath;
  v22 = dstPath;
  v18 = 0;
  max_length_low = 0;
LABEL_16:
  CriFsInstaller__criFsInstaller_Copy(v19, v20, v21, v22, (intptr_t)v18, max_length_low, v11);
}


void CriFsInstaller__Dispose(CriFsInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_59695C9 & 1) == 0 )
  {
    sub_2213A60(&System_GC_TypeInfo);
    byte_59695C9 = 1;
  }
  CriFsInstaller__Dispose_36992668(this, 1, v2);
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v4, v5);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CriFsInstaller__Dispose_36992668(CriFsInstaller_o *this, bool disposing, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  intptr_t handle; // x0
  System_Runtime_InteropServices_GCHandle_o v7; // x0

  if ( (byte_59695CA & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    byte_59695CA = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, disposing, method);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  handle = this->fields.handle;
  if ( handle )
  {
    CriFsInstaller__criFsInstaller_Destroy(handle, v5);
    this->fields.handle = 0;
  }
  if ( disposing )
  {
    if ( this->fields.installBuffer )
    {
      v7.fields.handle = (intptr_t)&this->fields.installBufferGch;
      System_Runtime_InteropServices_GCHandle__Free(v7, 0);
      this->fields.installBuffer = 0;
      sub_2213A04(&this->fields.installBuffer, 0);
    }
  }
}


// attributes: thunk
void CriFsInstaller__ExecuteMain(const MethodInfo *method)
{
  CriFsInstaller__criFsInstaller_ExecuteMain(method);
}


void CriFsInstaller__Finalize(CriFsInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CriFsInstaller__Dispose_36992668(this, 0, v2);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


float CriFsInstaller__GetProgress(CriFsInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  intptr_t handle; // x0
  float progress; // [xsp+Ch] [xbp-4h] BYREF

  handle = this->fields.handle;
  progress = 0.0;
  if ( !handle )
    return 0.0;
  CriFsInstaller__criFsInstaller_GetProgress(handle, &progress, v2);
  return progress;
}


int32_t CriFsInstaller__GetStatus(CriFsInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  intptr_t handle; // x0
  int32_t status; // [xsp+Ch] [xbp-4h] BYREF

  handle = this->fields.handle;
  status = 0;
  if ( handle )
  {
    CriFsInstaller__criFsInstaller_GetStatus(handle, &status, v2);
    LODWORD(handle) = status;
  }
  return handle;
}


void CriFsInstaller__Stop(CriFsInstaller_o *this, const MethodInfo *method)
{
  intptr_t handle; // x0

  handle = this->fields.handle;
  if ( handle )
    CriFsInstaller__criFsInstaller_Stop(handle, method);
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
  if ( !off_59695E8 )
  {
    *(_QWORD *)v25 = "cri_ware_unity";
    v26 = 14;
    *(_QWORD *)v27 = "criFsInstaller_Copy";
    v28 = &word_12 + 1;
    v29 = 0x200000000LL;
    v30 = 48;
    v31 = 0;
    off_59695E8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_2214114(v25, binder);
  }
  v14 = sub_22140F0(
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
  v22 = sub_22140F0(v10, v15, v16, v17, v18, v19, v20, v21, v25[0], v26, v27[0], v28);
  v23 = off_59695E8(installer, binder, v14, v22, buffer, buffer_size);
  sub_2214108(v14);
  sub_2214108(v22);
  return v23;
}


int32_t CriFsInstaller__criFsInstaller_Create(intptr_t *installer, int32_t option, const MethodInfo *method)
{
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_59695D8;
  if ( !off_59695D8 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsInstaller_Create";
    v7[3] = 21;
    v7[4] = 0x200000000LL;
    v8 = 12;
    v9 = 0;
    v5 = (void *)sub_2214114(v7, option);
    off_59695D8 = v5;
  }
  return ((__int64 (__fastcall *)(intptr_t *, _QWORD, const MethodInfo *))v5)(installer, (unsigned int)option, method);
}


int32_t CriFsInstaller__criFsInstaller_Destroy(intptr_t installer, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_59695E0;
  if ( !off_59695E0 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsInstaller_Destroy";
    v5[3] = 22;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5, method);
    off_59695E0 = v3;
  }
  return ((__int64 (__fastcall *)(intptr_t, const MethodInfo *))v3)(installer, method);
}


int32_t CriFsInstaller__criFsInstaller_ExecuteMain(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = off_59695D0;
  if ( !off_59695D0 )
  {
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "criFsInstaller_ExecuteMain";
    v3[3] = 26;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    v1 = (void *)sub_2214114(v3);
    off_59695D0 = v1;
  }
  return ((__int64 (*)(void))v1)();
}


int32_t CriFsInstaller__criFsInstaller_GetProgress(intptr_t installer, float *progress, const MethodInfo *method)
{
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_5969600;
  if ( !off_5969600 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsInstaller_GetProgress";
    v7[3] = 26;
    v7[4] = 0x200000000LL;
    v8 = 16;
    v9 = 0;
    v5 = (void *)sub_2214114(v7, progress);
    off_5969600 = v5;
  }
  return ((__int64 (__fastcall *)(intptr_t, float *, const MethodInfo *))v5)(installer, progress, method);
}


int32_t CriFsInstaller__criFsInstaller_GetStatus(intptr_t installer, int32_t *status, const MethodInfo *method)
{
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_59695F8;
  if ( !off_59695F8 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsInstaller_GetStatus";
    v7[3] = 24;
    v7[4] = 0x200000000LL;
    v8 = 16;
    v9 = 0;
    v5 = (void *)sub_2214114(v7, status);
    off_59695F8 = v5;
  }
  return ((__int64 (__fastcall *)(intptr_t, int32_t *, const MethodInfo *))v5)(installer, status, method);
}


int32_t CriFsInstaller__criFsInstaller_Stop(intptr_t installer, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_59695F0;
  if ( !off_59695F0 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsInstaller_Stop";
    v5[3] = 19;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5, method);
    off_59695F0 = v3;
  }
  return ((__int64 (__fastcall *)(intptr_t, const MethodInfo *))v3)(installer, method);
}