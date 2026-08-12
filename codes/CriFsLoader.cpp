void CriFsLoader___ctor(CriFsLoader_o *this, const MethodInfo *method)
{
  __int64 v3; // x2
  System_Guid_o v4; // kr00_16
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  System_Exception_o *v10; // x19
  void *v11; // x0
  __int64 v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x0

  if ( (byte_5969574 & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_5969574 = 1;
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
  CriFsLoader__criFsLoader_Create(&this->fields.handle, v6);
  if ( !this->fields.handle )
  {
    v12 = sub_2213A74(&System_Exception_TypeInfo);
    v10 = (System_Exception_o *)sub_2213CCC(v12);
    v11 = &StringLiteral_19162/*"criFsLoader_Create() failed."*/;
LABEL_12:
    v13 = (System_String_o *)sub_2213A74(v11);
    System_Exception___ctor_77375268(v10, v13, 0);
    v14 = sub_2213A74(&Method_CriFsLoader__ctor__);
    sub_2213BA0(v10, v14);
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v7, v8);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v8);
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
  System_Runtime_InteropServices_GCHandle_o v10; // x23
  intptr_t handle; // x19
  intptr_t v12; // x23
  intptr_t v13; // x3
  const MethodInfo *v14; // x5

  v7 = this;
  this->fields.srcGch = System_Runtime_InteropServices_GCHandle__Alloc_76321116(&srcBuffer->obj, 3, 0);
  v10.fields.handle = (intptr_t)&v7->fields.srcGch;
  v7->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_76321116(&dstBuffer->obj, 3, 0);
  v7 = (CriFsLoader_o *)((char *)v7 + 40);
  handle = v7[-1].fields.srcGch.fields.handle;
  v12 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(v10, 0);
  v13 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject((System_Runtime_InteropServices_GCHandle_o)v7, 0);
  CriFsLoader__criFsLoader_DecompressData(handle, v12, srcSize, v13, dstSize, v14);
}


void CriFsLoader__Dispose(CriFsLoader_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_5969575 & 1) == 0 )
  {
    sub_2213A60(&System_GC_TypeInfo);
    byte_5969575 = 1;
  }
  CriFsLoader__Dispose_36989476(this, 1, v2);
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v4, v5);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CriFsLoader__Dispose_36989476(CriFsLoader_o *this, bool disposing, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  intptr_t handle; // x0
  System_Runtime_InteropServices_GCHandle_o v7; // x0
  struct System_Runtime_InteropServices_GCHandle_o *p_srcGch; // x19
  intptr_t v9; // t1

  if ( (byte_5969576 & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    byte_5969576 = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, disposing, method);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  handle = this->fields.handle;
  if ( handle )
  {
    CriFsLoader__criFsLoader_Destroy(handle, v5);
    this->fields.handle = 0;
  }
  if ( disposing )
  {
    if ( this->fields.dstGch.fields.handle )
    {
      v7.fields.handle = (intptr_t)&this->fields.dstGch;
      System_Runtime_InteropServices_GCHandle__Free(v7, 0);
    }
    v9 = this->fields.srcGch.fields.handle;
    p_srcGch = &this->fields.srcGch;
    if ( v9 )
      System_Runtime_InteropServices_GCHandle__Free((System_Runtime_InteropServices_GCHandle_o)p_srcGch, 0);
  }
}


void CriFsLoader__Finalize(CriFsLoader_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CriFsLoader__Dispose_36989476(this, 0, v2);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


int32_t CriFsLoader__GetStatus(CriFsLoader_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  intptr_t handle; // x0
  System_Runtime_InteropServices_GCHandle_o v5; // x0
  struct System_Runtime_InteropServices_GCHandle_o *p_srcGch; // x19
  intptr_t v7; // t1
  int32_t status; // [xsp+Ch] [xbp-14h] BYREF

  handle = this->fields.handle;
  status = 0;
  if ( !handle || (CriFsLoader__criFsLoader_GetStatus(handle, &status, v2), status != 1) )
  {
    if ( this->fields.dstGch.fields.handle )
    {
      v5.fields.handle = (intptr_t)&this->fields.dstGch;
      System_Runtime_InteropServices_GCHandle__Free(v5, 0);
    }
    v7 = this->fields.srcGch.fields.handle;
    p_srcGch = &this->fields.srcGch;
    if ( v7 )
      System_Runtime_InteropServices_GCHandle__Free((System_Runtime_InteropServices_GCHandle_o)p_srcGch, 0);
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
  struct System_Runtime_InteropServices_GCHandle_o *p_dstGch; // x23
  intptr_t handle; // x25
  intptr_t v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7

  this->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_76321116(&buffer->obj, 3, 0);
  p_dstGch = &this->fields.dstGch;
  if ( binder )
    binder = (CriFsBinder_o *)binder->fields.handle;
  handle = p_dstGch[-1].fields.handle;
  v15 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(
          (System_Runtime_InteropServices_GCHandle_o)p_dstGch,
          0);
  if ( !buffer )
    sub_2213CDC(v15, v16);
  CriFsLoader__criFsLoader_Load(
    handle,
    (intptr_t)binder,
    path,
    fileOffset,
    loadSize,
    v15,
    SLODWORD(buffer->max_length),
    v17);
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
  struct System_Runtime_InteropServices_GCHandle_o *p_dstGch; // x23
  intptr_t handle; // x25
  intptr_t v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7

  this->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_76321116(&buffer->obj, 3, 0);
  p_dstGch = &this->fields.dstGch;
  if ( binder )
    binder = (CriFsBinder_o *)binder->fields.handle;
  handle = p_dstGch[-1].fields.handle;
  v15 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(
          (System_Runtime_InteropServices_GCHandle_o)p_dstGch,
          0);
  if ( !buffer )
    sub_2213CDC(v15, v16);
  CriFsLoader__criFsLoader_LoadById(
    handle,
    (intptr_t)binder,
    id,
    fileOffset,
    loadSize,
    v15,
    SLODWORD(buffer->max_length),
    v17);
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
  struct System_Runtime_InteropServices_GCHandle_o *p_dstGch; // x23
  intptr_t handle; // x25
  intptr_t v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7

  this->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_76321116(&buffer->obj, 3, 0);
  p_dstGch = &this->fields.dstGch;
  if ( binder )
    binder = (CriFsBinder_o *)binder->fields.handle;
  handle = p_dstGch[-1].fields.handle;
  v15 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(
          (System_Runtime_InteropServices_GCHandle_o)p_dstGch,
          0);
  if ( !buffer )
    sub_2213CDC(v15, v16);
  CriFsLoader__criFsLoader_LoadWithoutDecompression(
    handle,
    (intptr_t)binder,
    path,
    fileOffset,
    loadSize,
    v15,
    SLODWORD(buffer->max_length),
    v17);
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
  struct System_Runtime_InteropServices_GCHandle_o *p_dstGch; // x23
  intptr_t handle; // x25
  intptr_t v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7

  this->fields.dstGch = System_Runtime_InteropServices_GCHandle__Alloc_76321116(&buffer->obj, 3, 0);
  p_dstGch = &this->fields.dstGch;
  if ( binder )
    binder = (CriFsBinder_o *)binder->fields.handle;
  handle = p_dstGch[-1].fields.handle;
  v15 = System_Runtime_InteropServices_GCHandle__AddrOfPinnedObject(
          (System_Runtime_InteropServices_GCHandle_o)p_dstGch,
          0);
  if ( !buffer )
    sub_2213CDC(v15, v16);
  CriFsLoader__criFsLoader_LoadWithoutDecompressionById(
    handle,
    (intptr_t)binder,
    id,
    fileOffset,
    loadSize,
    v15,
    SLODWORD(buffer->max_length),
    v17);
}


void CriFsLoader__SetReadUnitSize(CriFsLoader_o *this, int32_t unit_size, const MethodInfo *method)
{
  intptr_t handle; // x0

  handle = this->fields.handle;
  if ( handle )
    CriFsLoader__criFsLoader_SetReadUnitSize(handle, unit_size, method);
}


void CriFsLoader__Stop(CriFsLoader_o *this, const MethodInfo *method)
{
  intptr_t handle; // x0

  handle = this->fields.handle;
  if ( handle )
    CriFsLoader__criFsLoader_Stop(handle, method);
}


int32_t CriFsLoader__criFsLoader_Create(intptr_t *loader, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969578;
  if ( !off_5969578 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsLoader_Create";
    v5[3] = 18;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5, method);
    off_5969578 = v3;
  }
  return ((int32_t (__fastcall *)(intptr_t *, const MethodInfo *))v3)(loader, method);
}


int32_t CriFsLoader__criFsLoader_DecompressData(
        intptr_t loader,
        intptr_t src,
        int64_t src_size,
        intptr_t dst,
        int64_t dst_size,
        const MethodInfo *method)
{
  void *v8; // x8
  _QWORD v13[5]; // [xsp+0h] [xbp-70h] BYREF
  int v14; // [xsp+28h] [xbp-48h]
  char v15; // [xsp+2Ch] [xbp-44h]

  v8 = off_59695C0;
  if ( !off_59695C0 )
  {
    v13[0] = "cri_ware_unity";
    v13[1] = 14;
    v13[2] = "criFsLoader_DecompressData";
    v13[3] = 26;
    v13[4] = 0x200000000LL;
    v14 = 40;
    v15 = 0;
    v8 = (void *)sub_2214114(v13, src);
    off_59695C0 = v8;
  }
  return ((int32_t (__fastcall *)(intptr_t, intptr_t, int64_t, intptr_t, int64_t, const MethodInfo *))v8)(
           loader,
           src,
           src_size,
           dst,
           dst_size,
           method);
}


int32_t CriFsLoader__criFsLoader_Destroy(intptr_t loader, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969580;
  if ( !off_5969580 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsLoader_Destroy";
    v5[3] = 19;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5, method);
    off_5969580 = v3;
  }
  return ((int32_t (__fastcall *)(intptr_t, const MethodInfo *))v3)(loader, method);
}


int32_t CriFsLoader__criFsLoader_GetStatus(intptr_t loader, int32_t *status, const MethodInfo *method)
{
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_59695A0;
  if ( !off_59695A0 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsLoader_GetStatus";
    v7[3] = 21;
    v7[4] = 0x200000000LL;
    v8 = 16;
    v9 = 0;
    v5 = (void *)sub_2214114(v7, status);
    off_59695A0 = v5;
  }
  return ((int32_t (__fastcall *)(intptr_t, int32_t *, const MethodInfo *))v5)(loader, status, method);
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
  if ( !off_5969588 )
  {
    *(_QWORD *)v18 = "cri_ware_unity";
    v19 = 14;
    *(_QWORD *)v20 = "criFsLoader_Load";
    v21 = &word_10;
    v22 = 0x200000000LL;
    v23 = 56;
    v24 = 0;
    off_5969588 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_2214114(
                                                                                                    v18,
                                                                                                    binder);
  }
  v15 = sub_22140F0(
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
  v16 = off_5969588(loader, binder, v15, offset, load_size, buffer, buffer_size);
  sub_2214108(v15);
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
  void *v10; // x8
  _QWORD v17[5]; // [xsp+0h] [xbp-80h] BYREF
  int v18; // [xsp+28h] [xbp-58h]
  char v19; // [xsp+2Ch] [xbp-54h]

  v10 = off_5969590;
  if ( !off_5969590 )
  {
    v17[0] = "cri_ware_unity";
    v17[1] = 14;
    v17[2] = "criFsLoader_LoadById";
    v17[3] = 20;
    v17[4] = 0x200000000LL;
    v18 = 52;
    v19 = 0;
    v10 = (void *)sub_2214114(v17, binder);
    off_5969590 = v10;
  }
  return ((int32_t (__fastcall *)(intptr_t, intptr_t, _QWORD, int64_t, int64_t, intptr_t, int64_t, const MethodInfo *))v10)(
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
  if ( !off_59695B0 )
  {
    *(_QWORD *)v18 = "cri_ware_unity";
    v19 = 14;
    *(_QWORD *)v20 = "criFsLoader_LoadWithoutDecompression";
    v21 = &qword_20 + 4;
    v22 = 0x200000000LL;
    v23 = 56;
    v24 = 0;
    off_59695B0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_2214114(
                                                                                                    v18,
                                                                                                    binder);
  }
  v15 = sub_22140F0(
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
  v16 = off_59695B0(loader, binder, v15, offset, load_size, buffer, buffer_size);
  sub_2214108(v15);
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
  void *v10; // x8
  _QWORD v17[5]; // [xsp+0h] [xbp-80h] BYREF
  int v18; // [xsp+28h] [xbp-58h]
  char v19; // [xsp+2Ch] [xbp-54h]

  v10 = off_59695B8;
  if ( !off_59695B8 )
  {
    v17[0] = "cri_ware_unity";
    v17[1] = 14;
    v17[2] = "criFsLoader_LoadWithoutDecompressionById";
    v17[3] = 40;
    v17[4] = 0x200000000LL;
    v18 = 52;
    v19 = 0;
    v10 = (void *)sub_2214114(v17, binder);
    off_59695B8 = v10;
  }
  return ((int32_t (__fastcall *)(intptr_t, intptr_t, _QWORD, int64_t, int64_t, intptr_t, int64_t, const MethodInfo *))v10)(
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
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_59695A8;
  if ( !off_59695A8 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsLoader_SetReadUnitSize";
    v7[3] = 27;
    v7[4] = 0x200000000LL;
    v8 = 16;
    v9 = 0;
    v5 = (void *)sub_2214114(v7, unit_size);
    off_59695A8 = v5;
  }
  return ((int32_t (__fastcall *)(intptr_t, int64_t, const MethodInfo *))v5)(loader, unit_size, method);
}


int32_t CriFsLoader__criFsLoader_Stop(intptr_t loader, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969598;
  if ( !off_5969598 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsLoader_Stop";
    v5[3] = 16;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5, method);
    off_5969598 = v3;
  }
  return ((int32_t (__fastcall *)(intptr_t, const MethodInfo *))v3)(loader, method);
}