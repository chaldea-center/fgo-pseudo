void CriFsLoader___ctor(CriFsLoader_o *this, const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  System_Exception_o *v7; // x19
  void *v8; // x0
  __int64 v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x0

  if ( (byte_4C3C3D8 & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    sub_1C37058(&CriFsPlugin_TypeInfo);
    byte_4C3C3D8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    v6 = sub_1C3706C(&System_Exception_TypeInfo);
    v7 = (System_Exception_o *)sub_1C372A4(v6);
    v8 = &StringLiteral_4871/*"CriFsPlugin is not initialized."*/;
    goto LABEL_12;
  }
  this->fields.handle = 0;
  CriFsLoader__criFsLoader_Create(&this->fields.handle, v4);
  if ( System_IntPtr__op_Equality(this->fields.handle, 0, 0) )
  {
    v9 = sub_1C3706C(&System_Exception_TypeInfo);
    v7 = (System_Exception_o *)sub_1C372A4(v9);
    v8 = &StringLiteral_18335/*"criFsLoader_Create() failed."*/;
LABEL_12:
    v10 = (System_String_o *)sub_1C3706C(v8);
    System_Exception___ctor_65309304(v7, v10, 0);
    v11 = sub_1C3706C(&Method_CriFsLoader__ctor__);
    sub_1C37180(v7, v11);
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v5);
}


void CriFsLoader__DecompressData(
        CriFsLoader_o *this,
        int64_t srcSize,
        System_Byte_array *srcBuffer,
        int64_t dstSize,
        System_Byte_array *dstBuffer,
        const MethodInfo *method)
{
  CriFsLoader_o *v7; // x22
  intptr_t p_srcGch; // x23
  intptr_t handle; // x19
  System_Runtime_InteropServices_GCHandle_o v12; // x0
  intptr_t v13; // x23
  System_Runtime_InteropServices_GCHandle_o v14; // x0
  intptr_t v15; // x3
  const MethodInfo *v16; // x5

  v7 = this;
  this->fields.srcGch = System_Runtime_InteropServices_GCHandle__Alloc_64242468(&srcBuffer->obj, 3, 0);
  p_srcGch = (intptr_t)&v7->fields.srcGch;
  v7->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_64242468(&dstBuffer->obj, 3, 0);
  v7 = (CriFsLoader_o *)((char *)v7 + 40);
  handle = v7[-1].fields.srcGch.fields.handle;
  v12.fields.handle = p_srcGch;
  v13 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(v12, 0);
  v14.fields.handle = (intptr_t)v7;
  v15 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(v14, 0);
  CriFsLoader__criFsLoader_DecompressData(handle, v13, srcSize, v15, dstSize, v16);
}


void CriFsLoader__Dispose(CriFsLoader_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3C3D9 & 1) == 0 )
  {
    sub_1C37058(&System_GC_TypeInfo);
    byte_4C3C3D9 = 1;
  }
  CriFsLoader__Dispose_30817572(this, 1, v2);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CriFsLoader__Dispose_30817572(CriFsLoader_o *this, bool disposing, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Runtime_InteropServices_GCHandle_o v6; // x0
  System_Runtime_InteropServices_GCHandle_o v7; // x0
  struct System_Runtime_InteropServices_GCHandle_o *p_srcGch; // x19
  System_Runtime_InteropServices_GCHandle_o v9; // x0
  System_Runtime_InteropServices_GCHandle_o v10; // x0

  if ( (byte_4C3C3DA & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    byte_4C3C3DA = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
  {
    CriFsLoader__criFsLoader_Destroy(this->fields.handle, v5);
    this->fields.handle = 0;
  }
  if ( disposing )
  {
    v6.fields.handle = (intptr_t)&this->fields.dstGch;
    if ( System_Runtime_InteropServices_GCHandle__get_IsAllocated(v6, 0) )
    {
      v7.fields.handle = (intptr_t)&this->fields.dstGch;
      System_Runtime_InteropServices_GCHandle__Free(v7, 0);
    }
    p_srcGch = &this->fields.srcGch;
    v9.fields.handle = (intptr_t)p_srcGch;
    if ( System_Runtime_InteropServices_GCHandle__get_IsAllocated(v9, 0) )
    {
      v10.fields.handle = (intptr_t)p_srcGch;
      System_Runtime_InteropServices_GCHandle__Free(v10, 0);
    }
  }
}


// positive sp value has been detected, the output may be wrong!
void CriFsLoader__Finalize(CriFsLoader_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CriFsLoader__Dispose_30817572(this, 0, v2);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


int32_t CriFsLoader__GetStatus(CriFsLoader_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  System_Runtime_InteropServices_GCHandle_o v4; // x0
  System_Runtime_InteropServices_GCHandle_o v5; // x0
  struct System_Runtime_InteropServices_GCHandle_o *p_srcGch; // x19
  System_Runtime_InteropServices_GCHandle_o v7; // x0
  System_Runtime_InteropServices_GCHandle_o v8; // x0
  int32_t status; // [xsp+Ch] [xbp-14h] BYREF

  status = 0;
  if ( !System_IntPtr__op_Inequality(this->fields.handle, 0, 0)
    || (CriFsLoader__criFsLoader_GetStatus(this->fields.handle, &status, v3), status != 1) )
  {
    v4.fields.handle = (intptr_t)&this->fields.dstGch;
    if ( System_Runtime_InteropServices_GCHandle__get_IsAllocated(v4, 0) )
    {
      v5.fields.handle = (intptr_t)&this->fields.dstGch;
      System_Runtime_InteropServices_GCHandle__Free(v5, 0);
    }
    p_srcGch = &this->fields.srcGch;
    v7.fields.handle = (intptr_t)p_srcGch;
    if ( System_Runtime_InteropServices_GCHandle__get_IsAllocated(v7, 0) )
    {
      v8.fields.handle = (intptr_t)p_srcGch;
      System_Runtime_InteropServices_GCHandle__Free(v8, 0);
    }
  }
  return status;
}


void CriFsLoader__Load(
        CriFsLoader_o *this,
        CriFsBinder_o *binder,
        System_String_o *path,
        int64_t fileOffset,
        int64_t loadSize,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  intptr_t handle; // x25
  System_Runtime_InteropServices_GCHandle_o v14; // x0
  intptr_t v15; // x0
  const MethodInfo *v16; // x7

  this->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_64242468(&buffer->obj, 3, 0);
  if ( binder )
    binder = (CriFsBinder_o *)binder->fields.handle;
  handle = this->fields.handle;
  v14.fields.handle = (intptr_t)&this->fields.dstGch;
  v15 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(v14, 0);
  if ( !buffer )
    sub_1C372B4(v15);
  CriFsLoader__criFsLoader_Load(
    handle,
    (intptr_t)binder,
    path,
    fileOffset,
    loadSize,
    v15,
    SLODWORD(buffer->max_length),
    v16);
}


void CriFsLoader__LoadById(
        CriFsLoader_o *this,
        CriFsBinder_o *binder,
        int32_t id,
        int64_t fileOffset,
        int64_t loadSize,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  intptr_t handle; // x25
  System_Runtime_InteropServices_GCHandle_o v14; // x0
  intptr_t v15; // x0
  const MethodInfo *v16; // x7

  this->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_64242468(&buffer->obj, 3, 0);
  if ( binder )
    binder = (CriFsBinder_o *)binder->fields.handle;
  handle = this->fields.handle;
  v14.fields.handle = (intptr_t)&this->fields.dstGch;
  v15 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(v14, 0);
  if ( !buffer )
    sub_1C372B4(v15);
  CriFsLoader__criFsLoader_LoadById(
    handle,
    (intptr_t)binder,
    id,
    fileOffset,
    loadSize,
    v15,
    SLODWORD(buffer->max_length),
    v16);
}


void CriFsLoader__LoadWithoutDecompression(
        CriFsLoader_o *this,
        CriFsBinder_o *binder,
        System_String_o *path,
        int64_t fileOffset,
        int64_t loadSize,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  intptr_t handle; // x25
  System_Runtime_InteropServices_GCHandle_o v14; // x0
  intptr_t v15; // x0
  const MethodInfo *v16; // x7

  this->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_64242468(&buffer->obj, 3, 0);
  if ( binder )
    binder = (CriFsBinder_o *)binder->fields.handle;
  handle = this->fields.handle;
  v14.fields.handle = (intptr_t)&this->fields.dstGch;
  v15 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(v14, 0);
  if ( !buffer )
    sub_1C372B4(v15);
  CriFsLoader__criFsLoader_LoadWithoutDecompression(
    handle,
    (intptr_t)binder,
    path,
    fileOffset,
    loadSize,
    v15,
    SLODWORD(buffer->max_length),
    v16);
}


void CriFsLoader__LoadWithoutDecompressionById(
        CriFsLoader_o *this,
        CriFsBinder_o *binder,
        int32_t id,
        int64_t fileOffset,
        int64_t loadSize,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  intptr_t handle; // x25
  System_Runtime_InteropServices_GCHandle_o v14; // x0
  intptr_t v15; // x0
  const MethodInfo *v16; // x7

  this->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_64242468(&buffer->obj, 3, 0);
  if ( binder )
    binder = (CriFsBinder_o *)binder->fields.handle;
  handle = this->fields.handle;
  v14.fields.handle = (intptr_t)&this->fields.dstGch;
  v15 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(v14, 0);
  if ( !buffer )
    sub_1C372B4(v15);
  CriFsLoader__criFsLoader_LoadWithoutDecompressionById(
    handle,
    (intptr_t)binder,
    id,
    fileOffset,
    loadSize,
    v15,
    SLODWORD(buffer->max_length),
    v16);
}


void CriFsLoader__SetReadUnitSize(CriFsLoader_o *this, int32_t unit_size, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
    CriFsLoader__criFsLoader_SetReadUnitSize(this->fields.handle, unit_size, v5);
}


void CriFsLoader__Stop(CriFsLoader_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
    CriFsLoader__criFsLoader_Stop(this->fields.handle, v3);
}


int32_t CriFsLoader__criFsLoader_Create(intptr_t *loader, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4C3C3E0;
  if ( !off_4C3C3E0 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsLoader_Create";
    v5[3] = 18;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C37634(v5, method);
    off_4C3C3E0 = v2;
  }
  return ((__int64 (__fastcall *)(intptr_t *, const MethodInfo *))v2)(loader, method);
}


int32_t CriFsLoader__criFsLoader_DecompressData(
        intptr_t loader,
        intptr_t src,
        int64_t src_size,
        intptr_t dst,
        int64_t dst_size,
        const MethodInfo *method)
{
  void *v6; // x8
  _QWORD v13[5]; // [xsp+0h] [xbp-70h] BYREF
  int v14; // [xsp+28h] [xbp-48h]
  char v15; // [xsp+2Ch] [xbp-44h]

  v6 = off_4C3C428;
  if ( !off_4C3C428 )
  {
    v13[0] = "cri_ware_unity";
    v13[1] = 14;
    v13[2] = "criFsLoader_DecompressData";
    v13[3] = 26;
    v14 = 40;
    v13[4] = 0x200000000LL;
    v15 = 0;
    v6 = (void *)sub_1C37634(v13, src);
    off_4C3C428 = v6;
  }
  return ((__int64 (__fastcall *)(intptr_t, intptr_t, int64_t, intptr_t, int64_t, const MethodInfo *))v6)(
           loader,
           src,
           src_size,
           dst,
           dst_size,
           method);
}


int32_t CriFsLoader__criFsLoader_Destroy(intptr_t loader, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4C3C3E8;
  if ( !off_4C3C3E8 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsLoader_Destroy";
    v5[3] = 19;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C37634(v5, method);
    off_4C3C3E8 = v2;
  }
  return ((__int64 (__fastcall *)(intptr_t, const MethodInfo *))v2)(loader, method);
}


int32_t CriFsLoader__criFsLoader_GetStatus(intptr_t loader, int32_t *status, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4C3C408;
  if ( !off_4C3C408 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsLoader_GetStatus";
    v7[3] = 21;
    v8 = 16;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C37634(v7, status);
    off_4C3C408 = v3;
  }
  return ((__int64 (__fastcall *)(intptr_t, int32_t *, const MethodInfo *))v3)(loader, status, method);
}


int32_t CriFsLoader__criFsLoader_Load(
        intptr_t loader,
        intptr_t binder,
        System_String_o *path,
        int64_t offset,
        int64_t load_size,
        intptr_t buffer,
        int64_t buffer_size,
        const MethodInfo *method)
{
  int v12; // w25
  __int64 v15; // x25
  int32_t v16; // w19
  int v18[2]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v19; // [xsp+8h] [xbp-78h]
  int v20[2]; // [xsp+10h] [xbp-70h]
  void *v21; // [xsp+18h] [xbp-68h]
  __int64 v22; // [xsp+20h] [xbp-60h]
  int v23; // [xsp+28h] [xbp-58h]
  char v24; // [xsp+2Ch] [xbp-54h]

  v12 = (int)path;
  if ( !off_4C3C3F0 )
  {
    *(_QWORD *)v18 = "cri_ware_unity";
    v19 = 14;
    *(_QWORD *)v20 = "criFsLoader_Load";
    v21 = &word_10;
    v23 = 56;
    v22 = 0x200000000LL;
    v24 = 0;
    off_4C3C3F0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_1C37634(
                                                                                                    v18,
                                                                                                    binder);
  }
  v15 = sub_1C37610(
          v12,
          binder,
          (int)path,
          offset,
          load_size,
          buffer,
          buffer_size,
          (int)method,
          v18[0],
          v19,
          v20[0],
          v21);
  v16 = off_4C3C3F0(loader, binder, v15, offset, load_size, buffer, buffer_size);
  sub_1C37628(v15);
  return v16;
}


int32_t CriFsLoader__criFsLoader_LoadById(
        intptr_t loader,
        intptr_t binder,
        int32_t id,
        int64_t offset,
        int64_t load_size,
        intptr_t buffer,
        int64_t buffer_size,
        const MethodInfo *method)
{
  void *v8; // x8
  _QWORD v17[5]; // [xsp+0h] [xbp-80h] BYREF
  int v18; // [xsp+28h] [xbp-58h]
  char v19; // [xsp+2Ch] [xbp-54h]

  v8 = off_4C3C3F8;
  if ( !off_4C3C3F8 )
  {
    v17[0] = "cri_ware_unity";
    v17[1] = 14;
    v17[2] = "criFsLoader_LoadById";
    v17[3] = 20;
    v18 = 52;
    v17[4] = 0x200000000LL;
    v19 = 0;
    v8 = (void *)sub_1C37634(v17, binder);
    off_4C3C3F8 = v8;
  }
  return ((__int64 (__fastcall *)(intptr_t, intptr_t, _QWORD, int64_t, int64_t, intptr_t, int64_t, const MethodInfo *))v8)(
           loader,
           binder,
           (unsigned int)id,
           offset,
           load_size,
           buffer,
           buffer_size,
           method);
}


int32_t CriFsLoader__criFsLoader_LoadWithoutDecompression(
        intptr_t loader,
        intptr_t binder,
        System_String_o *path,
        int64_t offset,
        int64_t load_size,
        intptr_t buffer,
        int64_t buffer_size,
        const MethodInfo *method)
{
  int v12; // w25
  __int64 v15; // x25
  int32_t v16; // w19
  int v18[2]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v19; // [xsp+8h] [xbp-78h]
  int v20[2]; // [xsp+10h] [xbp-70h]
  void *v21; // [xsp+18h] [xbp-68h]
  __int64 v22; // [xsp+20h] [xbp-60h]
  int v23; // [xsp+28h] [xbp-58h]
  char v24; // [xsp+2Ch] [xbp-54h]

  v12 = (int)path;
  if ( !off_4C3C418 )
  {
    *(_QWORD *)v18 = "cri_ware_unity";
    v19 = 14;
    *(_QWORD *)v20 = "criFsLoader_LoadWithoutDecompression";
    v21 = &qword_20 + 4;
    v23 = 56;
    v22 = 0x200000000LL;
    v24 = 0;
    off_4C3C418 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_1C37634(
                                                                                                    v18,
                                                                                                    binder);
  }
  v15 = sub_1C37610(
          v12,
          binder,
          (int)path,
          offset,
          load_size,
          buffer,
          buffer_size,
          (int)method,
          v18[0],
          v19,
          v20[0],
          v21);
  v16 = off_4C3C418(loader, binder, v15, offset, load_size, buffer, buffer_size);
  sub_1C37628(v15);
  return v16;
}


int32_t CriFsLoader__criFsLoader_LoadWithoutDecompressionById(
        intptr_t loader,
        intptr_t binder,
        int32_t id,
        int64_t offset,
        int64_t load_size,
        intptr_t buffer,
        int64_t buffer_size,
        const MethodInfo *method)
{
  void *v8; // x8
  _QWORD v17[5]; // [xsp+0h] [xbp-80h] BYREF
  int v18; // [xsp+28h] [xbp-58h]
  char v19; // [xsp+2Ch] [xbp-54h]

  v8 = off_4C3C420;
  if ( !off_4C3C420 )
  {
    v17[0] = "cri_ware_unity";
    v17[1] = 14;
    v17[2] = "criFsLoader_LoadWithoutDecompressionById";
    v17[3] = 40;
    v18 = 52;
    v17[4] = 0x200000000LL;
    v19 = 0;
    v8 = (void *)sub_1C37634(v17, binder);
    off_4C3C420 = v8;
  }
  return ((__int64 (__fastcall *)(intptr_t, intptr_t, _QWORD, int64_t, int64_t, intptr_t, int64_t, const MethodInfo *))v8)(
           loader,
           binder,
           (unsigned int)id,
           offset,
           load_size,
           buffer,
           buffer_size,
           method);
}


int32_t CriFsLoader__criFsLoader_SetReadUnitSize(intptr_t loader, int64_t unit_size, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4C3C410;
  if ( !off_4C3C410 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsLoader_SetReadUnitSize";
    v7[3] = 27;
    v8 = 16;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C37634(v7, unit_size);
    off_4C3C410 = v3;
  }
  return ((__int64 (__fastcall *)(intptr_t, int64_t, const MethodInfo *))v3)(loader, unit_size, method);
}


int32_t CriFsLoader__criFsLoader_Stop(intptr_t loader, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4C3C400;
  if ( !off_4C3C400 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsLoader_Stop";
    v5[3] = 16;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C37634(v5, method);
    off_4C3C400 = v2;
  }
  return ((__int64 (__fastcall *)(intptr_t, const MethodInfo *))v2)(loader, method);
}