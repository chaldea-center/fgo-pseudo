void CriFsBinder___ctor(CriFsBinder_o *this, const MethodInfo *method)
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

  if ( (byte_5969608 & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_5969608 = 1;
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
  CriFsBinder__criFsBinder_Create(&this->fields.handle, v6);
  if ( !this->fields.handle )
  {
    v12 = sub_2213A74(&System_Exception_TypeInfo);
    v10 = (System_Exception_o *)sub_2213CCC(v12);
    v11 = &StringLiteral_19160/*"criFsBinder_Create() failed."*/;
LABEL_12:
    v13 = (System_String_o *)sub_2213A74(v11);
    System_Exception___ctor_77375268(v10, v13, 0);
    v14 = sub_2213A74(&Method_CriFsBinder__ctor__);
    sub_2213BA0(v10, v14);
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v7, v8);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v8);
}


uint32_t CriFsBinder__BindCpk(
        CriFsBinder_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  intptr_t handle; // x0
  uint32_t bindId; // [xsp+Ch] [xbp-4h] BYREF

  handle = this->fields.handle;
  bindId = 0;
  if ( handle )
  {
    if ( srcBinder )
      srcBinder = (CriFsBinder_o *)srcBinder->fields.handle;
    CriFsBinder__criFsBinder_BindCpk(handle, (intptr_t)srcBinder, path, 0, 0, &bindId, v4);
    LODWORD(handle) = bindId;
  }
  return handle;
}


uint32_t CriFsBinder__BindDirectory(
        CriFsBinder_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  intptr_t handle; // x0
  uint32_t bindId; // [xsp+Ch] [xbp-4h] BYREF

  handle = this->fields.handle;
  bindId = 0;
  if ( handle )
  {
    if ( srcBinder )
      srcBinder = (CriFsBinder_o *)srcBinder->fields.handle;
    CriFsBinder__criFsBinder_BindDirectory(handle, (intptr_t)srcBinder, path, 0, 0, &bindId, v4);
    LODWORD(handle) = bindId;
  }
  return handle;
}


uint32_t CriFsBinder__BindFile(
        CriFsBinder_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  intptr_t handle; // x0
  uint32_t bindId; // [xsp+Ch] [xbp-4h] BYREF

  handle = this->fields.handle;
  bindId = 0;
  if ( srcBinder )
    srcBinder = (CriFsBinder_o *)srcBinder->fields.handle;
  CriFsBinder__criFsBinder_BindFile(handle, (intptr_t)srcBinder, path, 0, 0, &bindId, v4);
  return bindId;
}


uint32_t CriFsBinder__BindFileSection(
        CriFsBinder_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        uint64_t offset,
        int32_t size,
        System_String_o *sectionName,
        const MethodInfo *method)
{
  intptr_t handle; // x0
  const MethodInfo *v9; // [xsp+8h] [xbp-18h]
  uint32_t bindId; // [xsp+1Ch] [xbp-4h] BYREF

  handle = this->fields.handle;
  bindId = 0;
  if ( handle )
  {
    if ( srcBinder )
      srcBinder = (CriFsBinder_o *)srcBinder->fields.handle;
    CriFsBinder__criFsBinder_BindFileSection(
      handle,
      (intptr_t)srcBinder,
      path,
      offset,
      size,
      sectionName,
      0,
      0,
      &bindId,
      v9);
    LODWORD(handle) = bindId;
  }
  return handle;
}


int32_t CriFsBinder__CRIWARE368F9D49(uint32_t id, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969688;
  if ( !off_5969688 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "CRIWARE368F9D49";
    v5[3] = 15;
    v5[4] = 0x200000000LL;
    v6 = 4;
    v7 = 0;
    v3 = (void *)sub_2214114(v5);
    off_5969688 = v3;
  }
  return ((int32_t (__fastcall *)(_QWORD, const MethodInfo *))v3)(id, method);
}


void CriFsBinder__Dispose(CriFsBinder_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_5969609 & 1) == 0 )
  {
    sub_2213A60(&System_GC_TypeInfo);
    byte_5969609 = 1;
  }
  CriFsBinder__Dispose_36994808(this, 0, v2);
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v4, v5);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CriFsBinder__Dispose_36994808(CriFsBinder_o *this, bool disposing, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  intptr_t handle; // x0

  if ( (byte_596960A & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    byte_596960A = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, disposing, method);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  handle = this->fields.handle;
  if ( handle )
  {
    CriFsBinder__criFsBinder_Destroy(handle, v4);
    this->fields.handle = 0;
  }
}


void CriFsBinder__Finalize(CriFsBinder_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CriFsBinder__Dispose_36994808(this, 0, v2);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


bool CriFsBinder__GetContentsFileInfo(
        CriFsBinder_o *this,
        System_String_o *path,
        CriFsBinder_ContentsFileInfo_o *info,
        const MethodInfo *method)
{
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  intptr_t handle; // x21
  intptr_t ptr; // x0
  const MethodInfo *v12; // x3
  __int64 ContentsFileInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Byte_array *bytes_k__BackingField; // x1
  int v17; // w20
  __int128 v18; // q0
  __int128 v19; // q1
  bool v20; // w20
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v21; // x21
  CriStructMemory_CriFsBinder_ContentsFileInfo__c *klass; // x8
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  CriFsBinder_ContentsFileInfo_o v27; // [xsp+0h] [xbp-80h] BYREF
  __int64 v28; // [xsp+30h] [xbp-50h]
  CriStructMemory_CriFsBinder_ContentsFileInfo__o **v29; // [xsp+38h] [xbp-48h]
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v30; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_596960D & 1) == 0 )
  {
    sub_2213A60(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor__);
    sub_2213A60(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_bytes__);
    sub_2213A60(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
    sub_2213A60(&CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_596960D = 1;
  }
  v7 = (CriStructMemory_CriFsBinder_ContentsFileInfo__o *)sub_2213CCC(CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
  CriStructMemory_CriFsBinder_ContentsFileInfo____ctor(
    v7,
    (const MethodInfo_3F0D1C4 *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor__);
  v30 = v7;
  v28 = 0;
  v29 = &v30;
  if ( !v7 )
    sub_2213CDC(v8, v9);
  handle = this->fields.handle;
  ptr = CriStructMemory_CriFsBinder_ContentsFileInfo___get_ptr(
          v7,
          (const MethodInfo_3F0D1B8 *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
  ContentsFileInfo = CriFsBinder__criFsBinder_GetContentsFileInfo(handle, path, ptr, v12);
  if ( !v30 )
    sub_2213CDC(ContentsFileInfo, v14);
  bytes_k__BackingField = v30->fields._bytes_k__BackingField;
  v17 = ContentsFileInfo;
  memset(&v27, 0, sizeof(v27));
  CriFsBinder_ContentsFileInfo___ctor(&v27, bytes_k__BackingField, 0, v15);
  v18 = *(_OWORD *)&v27.fields.directory;
  v19 = *(_OWORD *)&v27.fields.readSize;
  *(_OWORD *)&info->fields.fileId = *(_OWORD *)&v27.fields.fileId;
  *(_OWORD *)&info->fields.directory = v18;
  *(_OWORD *)&info->fields.readSize = v19;
  sub_2213A04(info, 0);
  v20 = v17 == 0;
  v21 = v30;
  if ( v30 )
  {
    klass = v30->klass;
    v23 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_10;
      }
      v25 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_10:
      v25 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(CriStructMemory_CriFsBinder_ContentsFileInfo__o *, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
  }
  return v20;
}


bool CriFsBinder__GetContentsFileInfoByIndex(
        uint32_t bindId,
        int32_t index,
        int32_t numFiles,
        CriFsBinder_ContentsFileInfo_array **info,
        const MethodInfo *method)
{
  CriFsBinder_ContentsFileInfo_array *v9; // x0
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  intptr_t ptr; // x0
  const MethodInfo *v14; // x4
  __int64 ContentsFileInfoByIndex; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w20
  unsigned __int64 v19; // x23
  __int64 v20; // x27
  __int64 v21; // x28
  CriFsBinder_ContentsFileInfo_array *v22; // x29
  System_Byte_array *bytes_k__BackingField; // x21
  Il2CppType *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Type_o *TypeFromHandle; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  __int64 v31; // x1
  __int128 v32; // q0
  _OWORD *v33; // x0
  __int128 v34; // q2
  bool v35; // w20
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v36; // x21
  CriStructMemory_CriFsBinder_ContentsFileInfo__c *klass; // x8
  __int64 v38; // x9
  int *p_offset; // x10
  __int64 v40; // x0
  __int64 v42; // x0
  System_Exception_o *v43; // x19
  System_String_o *v44; // x0
  __int64 v45; // x0
  CriFsBinder_ContentsFileInfo_o v46; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v47; // [xsp+38h] [xbp-78h]
  CriStructMemory_CriFsBinder_ContentsFileInfo__o **v48; // [xsp+40h] [xbp-70h]
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v49; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_596960F & 1) == 0 )
  {
    sub_2213A60(&CriFsBinder_ContentsFileInfo___TypeInfo);
    sub_2213A60(&CriFsBinder_ContentsFileInfo_var);
    sub_2213A60(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor___91580536);
    sub_2213A60(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_bytes__);
    sub_2213A60(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
    sub_2213A60(&CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_596960F = 1;
  }
  v49 = 0;
  if ( index < 0 || numFiles <= 0 )
  {
    v42 = sub_2213A74(&System_Exception_TypeInfo);
    v43 = (System_Exception_o *)sub_2213CCC(v42);
    v44 = (System_String_o *)sub_2213A74(&StringLiteral_8241/*"Invalid parameters."*/);
    System_Exception___ctor_77375268(v43, v44, 0);
    v45 = sub_2213A74(&Method_CriFsBinder_GetContentsFileInfoByIndex__);
    sub_2213BA0(v43, v45);
  }
  v9 = (CriFsBinder_ContentsFileInfo_array *)sub_2213B20(
                                               CriFsBinder_ContentsFileInfo___TypeInfo,
                                               (unsigned int)numFiles);
  *info = v9;
  sub_2213A04(info, v9);
  v10 = (CriStructMemory_CriFsBinder_ContentsFileInfo__o *)sub_2213CCC(CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
  CriStructMemory_CriFsBinder_ContentsFileInfo____ctor_66114232(
    v10,
    numFiles,
    (const MethodInfo_3F0D2B8 *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor___91580536);
  v47 = 0;
  v48 = &v49;
  v49 = v10;
  if ( !v10 )
    sub_2213CDC(v11, v12);
  ptr = CriStructMemory_CriFsBinder_ContentsFileInfo___get_ptr(
          v10,
          (const MethodInfo_3F0D1B8 *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
  ContentsFileInfoByIndex = CriFsBinder__criFsBinder_GetContentsFileInfoByIndex(bindId, index, ptr, numFiles, v14);
  v18 = ContentsFileInfoByIndex;
  v19 = 0;
  v20 = (unsigned int)numFiles;
  v21 = 32;
  do
  {
    if ( !v49 )
      sub_2213CDC(ContentsFileInfoByIndex, v16);
    v22 = *info;
    bytes_k__BackingField = v49->fields._bytes_k__BackingField;
    v24 = CriFsBinder_ContentsFileInfo_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v16, v17);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v24, 0);
    if ( !*(&System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v25, v26);
    v28 = System_Runtime_InteropServices_Marshal__SizeOf(TypeFromHandle, 0) * v19;
    memset(&v46, 0, sizeof(v46));
    CriFsBinder_ContentsFileInfo___ctor(&v46, bytes_k__BackingField, v28, v29);
    if ( !v22 )
      sub_2213CDC(v30, v31);
    if ( v19 >= LODWORD(v22->max_length) )
      sub_2213CE4(v30);
    v32 = *(_OWORD *)&v46.fields.fileId;
    v33 = (_OWORD *)((char *)v22 + v21);
    v34 = *(_OWORD *)&v46.fields.directory;
    v33[1] = *(_OWORD *)&v46.fields.readSize;
    v33[2] = v32;
    *v33 = v34;
    ContentsFileInfoByIndex = sub_2213A04((char *)v22 + v21, 0);
    ++v19;
    v21 += 48;
  }
  while ( v20 != v19 );
  v35 = v18 == 0;
  v36 = v49;
  if ( v49 )
  {
    klass = v49->klass;
    v38 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_20;
      }
      v40 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_20:
      v40 = sub_224BC3C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(CriStructMemory_CriFsBinder_ContentsFileInfo__o *, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
  }
  return v35;
}


bool CriFsBinder__GetContentsFileInfo_36998312(
        CriFsBinder_o *this,
        int32_t id,
        CriFsBinder_ContentsFileInfo_o *info,
        const MethodInfo *method)
{
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  intptr_t handle; // x21
  intptr_t ptr; // x0
  const MethodInfo *v12; // x3
  __int64 ContentsFileInfoById; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Byte_array *bytes_k__BackingField; // x1
  int v17; // w20
  __int128 v18; // q0
  __int128 v19; // q1
  bool v20; // w20
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v21; // x21
  CriStructMemory_CriFsBinder_ContentsFileInfo__c *klass; // x8
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  CriFsBinder_ContentsFileInfo_o v27; // [xsp+0h] [xbp-80h] BYREF
  __int64 v28; // [xsp+30h] [xbp-50h]
  CriStructMemory_CriFsBinder_ContentsFileInfo__o **v29; // [xsp+38h] [xbp-48h]
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v30; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_596960E & 1) == 0 )
  {
    sub_2213A60(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor__);
    sub_2213A60(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_bytes__);
    sub_2213A60(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
    sub_2213A60(&CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_596960E = 1;
  }
  v7 = (CriStructMemory_CriFsBinder_ContentsFileInfo__o *)sub_2213CCC(CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
  CriStructMemory_CriFsBinder_ContentsFileInfo____ctor(
    v7,
    (const MethodInfo_3F0D1C4 *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor__);
  v30 = v7;
  v28 = 0;
  v29 = &v30;
  if ( !v7 )
    sub_2213CDC(v8, v9);
  handle = this->fields.handle;
  ptr = CriStructMemory_CriFsBinder_ContentsFileInfo___get_ptr(
          v7,
          (const MethodInfo_3F0D1B8 *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
  ContentsFileInfoById = CriFsBinder__criFsBinder_GetContentsFileInfoById(handle, id, ptr, v12);
  if ( !v30 )
    sub_2213CDC(ContentsFileInfoById, v14);
  bytes_k__BackingField = v30->fields._bytes_k__BackingField;
  v17 = ContentsFileInfoById;
  memset(&v27, 0, sizeof(v27));
  CriFsBinder_ContentsFileInfo___ctor(&v27, bytes_k__BackingField, 0, v15);
  v18 = *(_OWORD *)&v27.fields.directory;
  v19 = *(_OWORD *)&v27.fields.readSize;
  *(_OWORD *)&info->fields.fileId = *(_OWORD *)&v27.fields.fileId;
  *(_OWORD *)&info->fields.directory = v18;
  *(_OWORD *)&info->fields.readSize = v19;
  sub_2213A04(info, 0);
  v20 = v17 == 0;
  v21 = v30;
  if ( v30 )
  {
    klass = v30->klass;
    v23 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_10;
      }
      v25 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_10:
      v25 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(CriStructMemory_CriFsBinder_ContentsFileInfo__o *, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
  }
  return v20;
}


int64_t CriFsBinder__GetFileSize(CriFsBinder_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  intptr_t handle; // x8
  int64_t result; // x0
  int64_t size; // [xsp+8h] [xbp-8h] BYREF

  handle = this->fields.handle;
  result = -1;
  size = -1;
  if ( handle )
  {
    if ( CriFsBinder__criFsBinder_GetFileSize(handle, path, &size, v3) )
      return -1;
    else
      return size;
  }
  return result;
}


int64_t CriFsBinder__GetFileSize_36996856(CriFsBinder_o *this, int32_t id, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  intptr_t handle; // x8
  int64_t result; // x0
  int64_t size; // [xsp+8h] [xbp-8h] BYREF

  handle = this->fields.handle;
  result = -1;
  size = -1;
  if ( handle )
  {
    if ( CriFsBinder__criFsBinder_GetFileSizeById(handle, id, &size, v3) )
      return -1;
    else
      return size;
  }
  return result;
}


// attributes: thunk
int32_t CriFsBinder__GetNumContentsFiles(uint32_t bindId, const MethodInfo *method)
{
  return CriFsBinder__CRIWARE368F9D49(bindId, method);
}


int32_t CriFsBinder__GetStatus(uint32_t bindId, const MethodInfo *method)
{
  __int64 v2; // x2
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v5; // x2
  int32_t status; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596960C & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_596960C = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  status = 4;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method, v2);
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
    return 4;
  CriFsBinder__criFsBinder_GetStatus(bindId, &status, v5);
  return status;
}


// local variable allocation has failed, the output may be wrong!
void CriFsBinder__SetPriority(uint32_t bindId, int32_t priority, const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v6; // x2

  if ( (byte_5969610 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_5969610 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, *(_QWORD *)&priority, method);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
    CriFsBinder__criFsBinder_SetPriority(bindId, priority, v6);
}


void CriFsBinder__Unbind(uint32_t bindId, const MethodInfo *method)
{
  __int64 v2; // x2
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596960B & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_596960B = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method, v2);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
    CriFsBinder__criFsBinder_Unbind(bindId, v5);
}


uint32_t CriFsBinder__criFsBinder_BindCpk(
        intptr_t binder,
        intptr_t srcBinder,
        System_String_o *path,
        intptr_t work,
        int32_t worksize,
        uint32_t *bindId,
        const MethodInfo *method)
{
  int v7; // w7
  int v11; // w24
  __int64 v14; // x24
  uint32_t v15; // w19
  int v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v18; // [xsp+8h] [xbp-68h]
  int v19[2]; // [xsp+10h] [xbp-60h]
  void *v20; // [xsp+18h] [xbp-58h]
  __int64 v21; // [xsp+20h] [xbp-50h]
  int v22; // [xsp+28h] [xbp-48h]
  char v23; // [xsp+2Ch] [xbp-44h]

  v11 = (int)path;
  if ( !off_5969628 )
  {
    *(_QWORD *)v17 = "cri_ware_unity";
    v18 = 14;
    *(_QWORD *)v19 = "criFsBinder_BindCpk";
    v20 = &word_12 + 1;
    v21 = 0x200000000LL;
    v22 = 44;
    v23 = 0;
    off_5969628 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_2214114(v17);
  }
  v14 = sub_22140F0(v11, srcBinder, (int)path, work, worksize, (int)bindId, (int)method, v7, v17[0], v18, v19[0], v20);
  v15 = off_5969628(binder, srcBinder, v14, work, (unsigned int)worksize, bindId);
  sub_2214108(v14);
  return v15;
}


uint32_t CriFsBinder__criFsBinder_BindDirectory(
        intptr_t binder,
        intptr_t srcBinder,
        System_String_o *path,
        intptr_t work,
        int32_t worksize,
        uint32_t *bindId,
        const MethodInfo *method)
{
  int v7; // w7
  int v11; // w24
  __int64 v14; // x24
  uint32_t v15; // w19
  int v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v18; // [xsp+8h] [xbp-68h]
  int v19[2]; // [xsp+10h] [xbp-60h]
  void *v20; // [xsp+18h] [xbp-58h]
  __int64 v21; // [xsp+20h] [xbp-50h]
  int v22; // [xsp+28h] [xbp-48h]
  char v23; // [xsp+2Ch] [xbp-44h]

  v11 = (int)path;
  if ( !off_5969630 )
  {
    *(_QWORD *)v17 = "cri_ware_unity";
    v18 = 14;
    *(_QWORD *)v19 = "criFsBinder_BindDirectory";
    v20 = off_18 + 1;
    v21 = 0x200000000LL;
    v22 = 44;
    v23 = 0;
    off_5969630 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_2214114(v17);
  }
  v14 = sub_22140F0(v11, srcBinder, (int)path, work, worksize, (int)bindId, (int)method, v7, v17[0], v18, v19[0], v20);
  v15 = off_5969630(binder, srcBinder, v14, work, (unsigned int)worksize, bindId);
  sub_2214108(v14);
  return v15;
}


uint32_t CriFsBinder__criFsBinder_BindFile(
        intptr_t binder,
        intptr_t srcBinder,
        System_String_o *path,
        intptr_t work,
        int32_t worksize,
        uint32_t *bindId,
        const MethodInfo *method)
{
  int v7; // w7
  int v11; // w24
  __int64 v14; // x24
  uint32_t v15; // w19
  int v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v18; // [xsp+8h] [xbp-68h]
  int v19[2]; // [xsp+10h] [xbp-60h]
  void *v20; // [xsp+18h] [xbp-58h]
  __int64 v21; // [xsp+20h] [xbp-50h]
  int v22; // [xsp+28h] [xbp-48h]
  char v23; // [xsp+2Ch] [xbp-44h]

  v11 = (int)path;
  if ( !off_5969638 )
  {
    *(_QWORD *)v17 = "cri_ware_unity";
    v18 = 14;
    *(_QWORD *)v19 = "criFsBinder_BindFile";
    v20 = &dword_14;
    v21 = 0x200000000LL;
    v22 = 44;
    v23 = 0;
    off_5969638 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_2214114(v17);
  }
  v14 = sub_22140F0(v11, srcBinder, (int)path, work, worksize, (int)bindId, (int)method, v7, v17[0], v18, v19[0], v20);
  v15 = off_5969638(binder, srcBinder, v14, work, (unsigned int)worksize, bindId);
  sub_2214108(v14);
  return v15;
}


uint32_t CriFsBinder__criFsBinder_BindFileSection(
        intptr_t binder,
        intptr_t srcBinder,
        System_String_o *path,
        uint64_t offset,
        int32_t size,
        System_String_o *sectionName,
        intptr_t work,
        int32_t worksize,
        uint32_t *bindId,
        const MethodInfo *method)
{
  int v12; // w24
  int v15; // w26
  __int64 v18; // x26
  int v19; // w1
  int v20; // w2
  int v21; // w3
  int v22; // w4
  int v23; // w5
  int v24; // w6
  int v25; // w7
  __int64 v26; // x24
  uint32_t v27; // w19
  int v29; // [xsp+0h] [xbp-A0h]
  int v30; // [xsp+0h] [xbp-A0h]
  char v31; // [xsp+8h] [xbp-98h]
  char v32; // [xsp+8h] [xbp-98h]
  int v33[2]; // [xsp+10h] [xbp-90h] BYREF
  void *v34; // [xsp+18h] [xbp-88h]
  const char *v35; // [xsp+20h] [xbp-80h]
  __int64 v36; // [xsp+28h] [xbp-78h]
  __int64 v37; // [xsp+30h] [xbp-70h]
  int v38; // [xsp+38h] [xbp-68h]
  char v39; // [xsp+3Ch] [xbp-64h]

  v12 = (int)sectionName;
  v15 = (int)path;
  if ( !off_5969640 )
  {
    *(_QWORD *)v33 = "cri_ware_unity";
    v34 = byte_9 + 5;
    v35 = "criFsBinder_BindFileSection";
    v36 = 27;
    v37 = 0x200000000LL;
    v38 = 64;
    v39 = 0;
    off_5969640 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_2214114(v33);
  }
  v18 = sub_22140F0(v15, srcBinder, (int)path, offset, size, (int)sectionName, work, worksize, v29, v31, v33[0], v34);
  v26 = sub_22140F0(v12, v19, v20, v21, v22, v23, v24, v25, v30, v32, v33[0], v34);
  v27 = off_5969640(binder, srcBinder, v18, offset, (unsigned int)size, v26, work, (unsigned int)worksize, bindId);
  sub_2214108(v18);
  sub_2214108(v26);
  return v27;
}


uint32_t CriFsBinder__criFsBinder_Create(intptr_t *binder, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969618;
  if ( !off_5969618 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsBinder_Create";
    v5[3] = 18;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5);
    off_5969618 = v3;
  }
  return ((uint32_t (__fastcall *)(intptr_t *, const MethodInfo *))v3)(binder, method);
}


uint32_t CriFsBinder__criFsBinder_Destroy(intptr_t binder, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969620;
  if ( !off_5969620 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsBinder_Destroy";
    v5[3] = 19;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5);
    off_5969620 = v3;
  }
  return ((uint32_t (__fastcall *)(intptr_t, const MethodInfo *))v3)(binder, method);
}


int32_t CriFsBinder__criFsBinder_GetContentsFileInfo(
        intptr_t binder,
        System_String_o *path,
        intptr_t info,
        const MethodInfo *method)
{
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v9; // w21
  __int64 v11; // x21
  int32_t v12; // w19
  int v14[2]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v15; // [xsp+8h] [xbp-58h]
  int v16[2]; // [xsp+10h] [xbp-50h]
  void *v17; // [xsp+18h] [xbp-48h]
  __int64 v18; // [xsp+20h] [xbp-40h]
  int v19; // [xsp+28h] [xbp-38h]
  char v20; // [xsp+2Ch] [xbp-34h]

  v9 = (int)path;
  if ( !off_5969670 )
  {
    *(_QWORD *)v14 = "cri_ware_unity";
    v15 = 14;
    *(_QWORD *)v16 = "criFsBinder_GetContentsFileInfo";
    v17 = off_18 + 7;
    v18 = 0x200000000LL;
    v19 = 24;
    v20 = 0;
    off_5969670 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_2214114(v14);
  }
  v11 = sub_22140F0(v9, (int)path, info, (int)method, v4, v5, v6, v7, v14[0], v15, v16[0], v17);
  v12 = off_5969670(binder, v11, info);
  sub_2214108(v11);
  return v12;
}


int32_t CriFsBinder__criFsBinder_GetContentsFileInfoById(
        intptr_t binder,
        int32_t id,
        intptr_t info,
        const MethodInfo *method)
{
  void *v6; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v6 = off_5969678;
  if ( !off_5969678 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFsBinder_GetContentsFileInfoById";
    v9[3] = 35;
    v9[4] = 0x200000000LL;
    v10 = 20;
    v11 = 0;
    v6 = (void *)sub_2214114(v9);
    off_5969678 = v6;
  }
  return ((int32_t (__fastcall *)(intptr_t, _QWORD, intptr_t, const MethodInfo *))v6)(
           binder,
           (unsigned int)id,
           info,
           method);
}


int32_t CriFsBinder__criFsBinder_GetContentsFileInfoByIndex(
        uint32_t id,
        int32_t index,
        intptr_t info,
        int32_t num,
        const MethodInfo *method)
{
  void *v7; // x8
  _QWORD v11[5]; // [xsp+0h] [xbp-60h] BYREF
  int v12; // [xsp+28h] [xbp-38h]
  char v13; // [xsp+2Ch] [xbp-34h]

  v7 = off_5969680;
  if ( !off_5969680 )
  {
    v11[0] = "cri_ware_unity";
    v11[1] = 14;
    v11[2] = "criFsBinder_GetContentsFileInfoByIndex";
    v11[3] = 38;
    v11[4] = 0x200000000LL;
    v12 = 20;
    v13 = 0;
    v7 = (void *)sub_2214114(v11);
    off_5969680 = v7;
  }
  return ((int32_t (__fastcall *)(_QWORD, _QWORD, intptr_t, _QWORD, const MethodInfo *))v7)(
           id,
           (unsigned int)index,
           info,
           (unsigned int)num,
           method);
}


int32_t CriFsBinder__criFsBinder_GetFileSize(
        intptr_t binder,
        System_String_o *path,
        int64_t *size,
        const MethodInfo *method)
{
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v9; // w21
  __int64 v11; // x21
  int32_t v12; // w19
  int v14[2]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v15; // [xsp+8h] [xbp-58h]
  int v16[2]; // [xsp+10h] [xbp-50h]
  void *v17; // [xsp+18h] [xbp-48h]
  __int64 v18; // [xsp+20h] [xbp-40h]
  int v19; // [xsp+28h] [xbp-38h]
  char v20; // [xsp+2Ch] [xbp-34h]

  v9 = (int)path;
  if ( !off_5969658 )
  {
    *(_QWORD *)v14 = "cri_ware_unity";
    v15 = 14;
    *(_QWORD *)v16 = "criFsBinder_GetFileSize";
    v17 = &dword_14 + 3;
    v18 = 0x200000000LL;
    v19 = 24;
    v20 = 0;
    off_5969658 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_2214114(v14);
  }
  v11 = sub_22140F0(v9, (int)path, (int)size, (int)method, v4, v5, v6, v7, v14[0], v15, v16[0], v17);
  v12 = off_5969658(binder, v11, size);
  sub_2214108(v11);
  return v12;
}


int32_t CriFsBinder__criFsBinder_GetFileSizeById(intptr_t binder, int32_t id, int64_t *size, const MethodInfo *method)
{
  void *v6; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v6 = off_5969660;
  if ( !off_5969660 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFsBinder_GetFileSizeById";
    v9[3] = 27;
    v9[4] = 0x200000000LL;
    v10 = 20;
    v11 = 0;
    v6 = (void *)sub_2214114(v9);
    off_5969660 = v6;
  }
  return ((int32_t (__fastcall *)(intptr_t, _QWORD, int64_t *, const MethodInfo *))v6)(
           binder,
           (unsigned int)id,
           size,
           method);
}


int32_t CriFsBinder__criFsBinder_GetStatus(uint32_t bindId, int32_t *status, const MethodInfo *method)
{
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_5969650;
  if ( !off_5969650 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsBinder_GetStatus";
    v7[3] = 21;
    v7[4] = 0x200000000LL;
    v8 = 12;
    v9 = 0;
    v5 = (void *)sub_2214114(v7);
    off_5969650 = v5;
  }
  return ((int32_t (__fastcall *)(_QWORD, int32_t *, const MethodInfo *))v5)(bindId, status, method);
}


int32_t CriFsBinder__criFsBinder_SetPriority(uint32_t bindId, int32_t priority, const MethodInfo *method)
{
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_5969668;
  if ( !off_5969668 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsBinder_SetPriority";
    v7[3] = 23;
    v7[4] = 0x200000000LL;
    v8 = 8;
    v9 = 0;
    v5 = (void *)sub_2214114(v7);
    off_5969668 = v5;
  }
  return ((int32_t (__fastcall *)(_QWORD, _QWORD, const MethodInfo *))v5)(bindId, (unsigned int)priority, method);
}


int32_t CriFsBinder__criFsBinder_Unbind(uint32_t bindId, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969648;
  if ( !off_5969648 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsBinder_Unbind";
    v5[3] = 18;
    v5[4] = 0x200000000LL;
    v6 = 4;
    v7 = 0;
    v3 = (void *)sub_2214114(v5);
    off_5969648 = v3;
  }
  return ((int32_t (__fastcall *)(_QWORD, const MethodInfo *))v3)(bindId, method);
}


intptr_t CriFsBinder__get_nativeHandle(CriFsBinder_o *this, const MethodInfo *method)
{
  return this->fields.handle;
}


void CriFsBinder_ContentsFileInfo___ctor(
        CriFsBinder_ContentsFileInfo_o *this,
        System_Byte_array *data,
        int32_t startIndex,
        const MethodInfo *method)
{
  int32_t v7; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_String_o *v10; // x0
  int32_t v11; // w0
  struct System_String_o *v12; // x0
  int32_t v13; // w1
  int64_t v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_String_o *v17; // x0
  int64_t v18; // x0
  struct System_String_o *v19; // x0
  uint64_t v20; // x0
  int32_t v21; // w0
  struct System_String_o **p_userStr; // x19
  intptr_t v23; // [xsp+8h] [xbp-38h] BYREF
  intptr_t ptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5969690 & 1) == 0 )
  {
    sub_2213A60(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_5969690 = 1;
  }
  if ( System_IntPtr__get_Size(0) == 4 )
  {
    v7 = System_BitConverter__ToInt32(data, startIndex, 0);
    ptr = 0;
    System_IntPtr___ctor((intptr_t)&ptr, v7, 0);
    if ( !*(&System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v8, v9);
    v10 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(ptr, 0);
    this->fields.directory = v10;
    sub_2213A04(this, v10);
    v11 = System_BitConverter__ToInt32(data, startIndex + 4, 0);
    v23 = 0;
    System_IntPtr___ctor((intptr_t)&v23, v11, 0);
    v12 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v23, 0);
    this->fields.fileName = v12;
    sub_2213A04(&this->fields.fileName, v12);
    this->fields.readSize = System_BitConverter__ToUInt32(data, startIndex + 8, 0);
    this->fields.extractSize = System_BitConverter__ToUInt32(data, startIndex + 12, 0);
    this->fields.offset = System_BitConverter__ToUInt64(data, startIndex + 16, 0);
    v13 = startIndex + 24;
  }
  else
  {
    v14 = System_BitConverter__ToInt64(data, startIndex, 0);
    ptr = 0;
    System_IntPtr___ctor_77455540((intptr_t)&ptr, v14, 0);
    if ( !*(&System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v15, v16);
    v17 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(ptr, 0);
    this->fields.directory = v17;
    sub_2213A04(this, v17);
    v18 = System_BitConverter__ToInt64(data, startIndex + 8, 0);
    v23 = 0;
    System_IntPtr___ctor_77455540((intptr_t)&v23, v18, 0);
    v19 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v23, 0);
    this->fields.fileName = v19;
    sub_2213A04(&this->fields.fileName, v19);
    this->fields.readSize = System_BitConverter__ToUInt32(data, startIndex + 16, 0);
    this->fields.extractSize = System_BitConverter__ToUInt32(data, startIndex + 20, 0);
    v20 = System_BitConverter__ToUInt64(data, startIndex + 24, 0);
    v13 = startIndex + 32;
    this->fields.offset = v20;
  }
  v21 = System_BitConverter__ToInt32(data, v13, 0);
  this->fields.userStr = 0;
  p_userStr = &this->fields.userStr;
  *((_DWORD *)p_userStr - 2) = v21;
  sub_2213A04(p_userStr, 0);
}