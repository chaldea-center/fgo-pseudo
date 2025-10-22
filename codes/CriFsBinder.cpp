void CriFsBinder___ctor(CriFsBinder_o *this, const MethodInfo *method)
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

  if ( (byte_4C501F0 & 1) == 0 )
  {
    sub_1C3E564(&CriDisposableObjectManager_TypeInfo);
    sub_1C3E564(&CriFsPlugin_TypeInfo);
    byte_4C501F0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    v6 = sub_1C3E578(&System_Exception_TypeInfo);
    v7 = (System_Exception_o *)sub_1C3E7B0(v6);
    v8 = &StringLiteral_4871/*"CriFsPlugin is not initialized."*/;
    goto LABEL_12;
  }
  this->fields.handle = 0;
  CriFsBinder__criFsBinder_Create(&this->fields.handle, v4);
  if ( System_IntPtr__op_Equality(this->fields.handle, 0, 0) )
  {
    v9 = sub_1C3E578(&System_Exception_TypeInfo);
    v7 = (System_Exception_o *)sub_1C3E7B0(v9);
    v8 = &StringLiteral_18350/*"criFsBinder_Create() failed."*/;
LABEL_12:
    v10 = (System_String_o *)sub_1C3E578(v8);
    System_Exception___ctor_65384116(v7, v10, 0);
    v11 = sub_1C3E578(&Method_CriFsBinder__ctor__);
    sub_1C3E68C(v7, v11);
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v5);
}


uint32_t CriFsBinder__BindCpk(
        CriFsBinder_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x6
  bool v8; // w8
  uint32_t result; // w0
  intptr_t handle; // x1
  uint32_t bindId; // [xsp+Ch] [xbp-24h] BYREF

  bindId = 0;
  v8 = System_IntPtr__op_Inequality(this->fields.handle, 0, 0);
  result = 0;
  if ( v8 )
  {
    if ( srcBinder )
      handle = srcBinder->fields.handle;
    else
      handle = 0;
    CriFsBinder__criFsBinder_BindCpk(this->fields.handle, handle, path, 0, 0, &bindId, v7);
    return bindId;
  }
  return result;
}


uint32_t CriFsBinder__BindDirectory(
        CriFsBinder_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x6
  bool v8; // w8
  uint32_t result; // w0
  intptr_t handle; // x1
  uint32_t bindId; // [xsp+Ch] [xbp-24h] BYREF

  bindId = 0;
  v8 = System_IntPtr__op_Inequality(this->fields.handle, 0, 0);
  result = 0;
  if ( v8 )
  {
    if ( srcBinder )
      handle = srcBinder->fields.handle;
    else
      handle = 0;
    CriFsBinder__criFsBinder_BindDirectory(this->fields.handle, handle, path, 0, 0, &bindId, v7);
    return bindId;
  }
  return result;
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

  bindId = 0;
  handle = this->fields.handle;
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
  bool v13; // w8
  uint32_t result; // w0
  intptr_t handle; // x1
  const MethodInfo *v16; // [xsp+8h] [xbp-48h]
  uint32_t bindId; // [xsp+1Ch] [xbp-34h] BYREF

  bindId = 0;
  v13 = System_IntPtr__op_Inequality(this->fields.handle, 0, 0);
  result = 0;
  if ( v13 )
  {
    if ( srcBinder )
      handle = srcBinder->fields.handle;
    else
      handle = 0;
    CriFsBinder__criFsBinder_BindFileSection(
      this->fields.handle,
      handle,
      path,
      offset,
      size,
      sectionName,
      0,
      0,
      &bindId,
      v16);
    return bindId;
  }
  return result;
}


int32_t CriFsBinder__CRIWARE368F9D49(uint32_t id, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4C50270;
  if ( !off_4C50270 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "CRIWARE368F9D49";
    v5[3] = 15;
    v6 = 4;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C3EB40(v5);
    off_4C50270 = v2;
  }
  return ((__int64 (__fastcall *)(_QWORD, const MethodInfo *))v2)(id, method);
}


void CriFsBinder__Dispose(CriFsBinder_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C501F1 & 1) == 0 )
  {
    sub_1C3E564(&System_GC_TypeInfo);
    byte_4C501F1 = 1;
  }
  CriFsBinder__Dispose_30853196(this, 0, v2);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CriFsBinder__Dispose_30853196(CriFsBinder_o *this, bool disposing, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (byte_4C501F2 & 1) == 0 )
  {
    sub_1C3E564(&CriDisposableObjectManager_TypeInfo);
    byte_4C501F2 = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
  {
    CriFsBinder__criFsBinder_Destroy(this->fields.handle, v4);
    this->fields.handle = 0;
  }
}


// positive sp value has been detected, the output may be wrong!
void CriFsBinder__Finalize(CriFsBinder_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CriFsBinder__Dispose_30853196(this, 0, v2);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


bool CriFsBinder__GetContentsFileInfo(
        CriFsBinder_o *this,
        System_String_o *path,
        CriFsBinder_ContentsFileInfo_o *info,
        const MethodInfo *method)
{
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  intptr_t handle; // x22
  intptr_t ptr; // x2
  const MethodInfo *v13; // x3
  int32_t ContentsFileInfo; // w0
  System_Byte_array *bytes_k__BackingField; // x1
  int32_t v16; // w21
  const MethodInfo *v17; // x3
  __int128 v18; // q0
  __int128 v19; // q2
  bool v20; // w21
  CriStructMemory_CriFsBinder_ContentsFileInfo__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  CriFsBinder_ContentsFileInfo_o v26; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4C501F5 & 1) == 0 )
  {
    sub_1C3E564(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor__);
    sub_1C3E564(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_bytes__);
    sub_1C3E564(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
    sub_1C3E564(&CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    byte_4C501F5 = 1;
  }
  v7 = (CriStructMemory_CriFsBinder_ContentsFileInfo__o *)sub_1C3E7B0(CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
  CriStructMemory_CriFsBinder_ContentsFileInfo____ctor(
    v7,
    (const MethodInfo_33AF778 *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor__);
  if ( !v7 )
    sub_1C3E7C0(v8, v9, v10);
  handle = this->fields.handle;
  ptr = CriStructMemory_CriFsBinder_ContentsFileInfo___get_ptr(
          v7,
          (const MethodInfo_33AF76C *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
  ContentsFileInfo = CriFsBinder__criFsBinder_GetContentsFileInfo(handle, path, ptr, v13);
  bytes_k__BackingField = v7->fields._bytes_k__BackingField;
  v16 = ContentsFileInfo;
  memset(&v26, 0, sizeof(v26));
  CriFsBinder_ContentsFileInfo___ctor(&v26, bytes_k__BackingField, 0, v17);
  v18 = *(_OWORD *)&v26.fields.fileId;
  v19 = *(_OWORD *)&v26.fields.directory;
  *(_OWORD *)&info->fields.readSize = *(_OWORD *)&v26.fields.readSize;
  *(_OWORD *)&info->fields.fileId = v18;
  *(_OWORD *)&info->fields.directory = v19;
  sub_1C3E508(info, 0);
  v20 = v16 == 0;
  klass = v7->klass;
  v22 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_8;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_8:
    v24 = sub_1C8ED7C(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(CriStructMemory_CriFsBinder_ContentsFileInfo__o *, _QWORD))v24)(v7, *(_QWORD *)(v24 + 8));
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
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  intptr_t ptr; // x2
  const MethodInfo *v15; // x4
  unsigned __int64 v16; // x25
  __int64 v17; // x29
  __int64 v18; // x24
  CriFsBinder_ContentsFileInfo_array *v19; // x21
  System_Byte_array *bytes_k__BackingField; // x22
  Il2CppType *v21; // x23
  System_RuntimeTypeHandle_o v22; // x0
  System_Type_o *TypeFromHandle; // x23
  int32_t v24; // w0
  const MethodInfo *v25; // x3
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  _OWORD *v29; // x0
  CriStructMemory_CriFsBinder_ContentsFileInfo__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v35; // x0
  System_Exception_o *v36; // x19
  System_String_o *v37; // x0
  __int64 v38; // x0
  int32_t ContentsFileInfoByIndex; // [xsp+Ch] [xbp-C4h]
  __int128 v40; // [xsp+10h] [xbp-C0h]
  __int128 v41; // [xsp+30h] [xbp-A0h]
  CriFsBinder_ContentsFileInfo_o v42; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4C501F7 & 1) == 0 )
  {
    sub_1C3E564(&CriFsBinder_ContentsFileInfo___TypeInfo);
    sub_1C3E564(&CriFsBinder_ContentsFileInfo_var);
    sub_1C3E564(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor___78068488);
    sub_1C3E564(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_bytes__);
    sub_1C3E564(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
    sub_1C3E564(&CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Runtime_InteropServices_Marshal_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    byte_4C501F7 = 1;
  }
  if ( index < 0 || numFiles <= 0 )
  {
    v35 = sub_1C3E578(&System_Exception_TypeInfo);
    v36 = (System_Exception_o *)sub_1C3E7B0(v35);
    v37 = (System_String_o *)sub_1C3E578(&StringLiteral_7904/*"Invalid parameters."*/);
    System_Exception___ctor_65384116(v36, v37, 0);
    v38 = sub_1C3E578(&Method_CriFsBinder_GetContentsFileInfoByIndex__);
    sub_1C3E68C(v36, v38);
  }
  v9 = (CriFsBinder_ContentsFileInfo_array *)sub_1C3E60C(
                                               CriFsBinder_ContentsFileInfo___TypeInfo,
                                               (unsigned int)numFiles);
  *info = v9;
  sub_1C3E508(info, v9);
  v10 = (CriStructMemory_CriFsBinder_ContentsFileInfo__o *)sub_1C3E7B0(CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
  CriStructMemory_CriFsBinder_ContentsFileInfo____ctor_54196344(
    v10,
    numFiles,
    (const MethodInfo_33AF878 *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor___78068488);
  if ( !v10 )
    sub_1C3E7C0(v11, v12, v13);
  ptr = CriStructMemory_CriFsBinder_ContentsFileInfo___get_ptr(
          v10,
          (const MethodInfo_33AF76C *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
  ContentsFileInfoByIndex = CriFsBinder__criFsBinder_GetContentsFileInfoByIndex(bindId, index, ptr, numFiles, v15);
  v16 = 0;
  v17 = (unsigned int)numFiles;
  v18 = 32;
  do
  {
    v19 = *info;
    bytes_k__BackingField = v10->fields._bytes_k__BackingField;
    v21 = CriFsBinder_ContentsFileInfo_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v22.fields.value = (intptr_t)v21;
    TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0);
    if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
    v24 = System_Runtime_InteropServices_Marshal__SizeOf(TypeFromHandle, 0);
    memset(&v42, 0, sizeof(v42));
    CriFsBinder_ContentsFileInfo___ctor(&v42, bytes_k__BackingField, v24 * v16, v25);
    if ( !v19 )
      sub_1C3E7C0(v26, v27, v28);
    v40 = *(_OWORD *)&v42.fields.directory;
    v41 = *(_OWORD *)&v42.fields.fileId;
    if ( v16 >= LODWORD(v19->max_length) )
      sub_1C3E7C8(v26, v27, v28);
    v29 = (_OWORD *)((char *)v19 + v18);
    v29[1] = *(_OWORD *)&v42.fields.readSize;
    v29[2] = v41;
    *v29 = v40;
    sub_1C3E508((char *)v19 + v18, 0);
    ++v16;
    v18 += 48;
  }
  while ( v17 != v16 );
  klass = v10->klass;
  v31 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_18;
    }
    v33 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_18:
    v33 = sub_1C8ED7C(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(CriStructMemory_CriFsBinder_ContentsFileInfo__o *, _QWORD))v33)(v10, *(_QWORD *)(v33 + 8));
  return ContentsFileInfoByIndex == 0;
}


bool CriFsBinder__GetContentsFileInfo_30857092(
        CriFsBinder_o *this,
        int32_t id,
        CriFsBinder_ContentsFileInfo_o *info,
        const MethodInfo *method)
{
  CriStructMemory_CriFsBinder_ContentsFileInfo__o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  intptr_t handle; // x22
  intptr_t ptr; // x2
  const MethodInfo *v13; // x3
  int32_t ContentsFileInfoById; // w0
  System_Byte_array *bytes_k__BackingField; // x1
  int32_t v16; // w21
  const MethodInfo *v17; // x3
  __int128 v18; // q0
  __int128 v19; // q2
  bool v20; // w21
  CriStructMemory_CriFsBinder_ContentsFileInfo__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  CriFsBinder_ContentsFileInfo_o v26; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4C501F6 & 1) == 0 )
  {
    sub_1C3E564(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor__);
    sub_1C3E564(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_bytes__);
    sub_1C3E564(&Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
    sub_1C3E564(&CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    byte_4C501F6 = 1;
  }
  v7 = (CriStructMemory_CriFsBinder_ContentsFileInfo__o *)sub_1C3E7B0(CriStructMemory_CriFsBinder_ContentsFileInfo__TypeInfo);
  CriStructMemory_CriFsBinder_ContentsFileInfo____ctor(
    v7,
    (const MethodInfo_33AF778 *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo___ctor__);
  if ( !v7 )
    sub_1C3E7C0(v8, v9, v10);
  handle = this->fields.handle;
  ptr = CriStructMemory_CriFsBinder_ContentsFileInfo___get_ptr(
          v7,
          (const MethodInfo_33AF76C *)Method_CriStructMemory_CriFsBinder_ContentsFileInfo__get_ptr__);
  ContentsFileInfoById = CriFsBinder__criFsBinder_GetContentsFileInfoById(handle, id, ptr, v13);
  bytes_k__BackingField = v7->fields._bytes_k__BackingField;
  v16 = ContentsFileInfoById;
  memset(&v26, 0, sizeof(v26));
  CriFsBinder_ContentsFileInfo___ctor(&v26, bytes_k__BackingField, 0, v17);
  v18 = *(_OWORD *)&v26.fields.fileId;
  v19 = *(_OWORD *)&v26.fields.directory;
  *(_OWORD *)&info->fields.readSize = *(_OWORD *)&v26.fields.readSize;
  *(_OWORD *)&info->fields.fileId = v18;
  *(_OWORD *)&info->fields.directory = v19;
  sub_1C3E508(info, 0);
  v20 = v16 == 0;
  klass = v7->klass;
  v22 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_8;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_8:
    v24 = sub_1C8ED7C(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(CriStructMemory_CriFsBinder_ContentsFileInfo__o *, _QWORD))v24)(v7, *(_QWORD *)(v24 + 8));
  return v20;
}


int64_t CriFsBinder__GetFileSize(CriFsBinder_o *this, System_String_o *path, const MethodInfo *method)
{
  int64_t v3; // x19
  const MethodInfo *v6; // x3
  int64_t size; // [xsp+8h] [xbp-28h] BYREF

  v3 = -1;
  size = -1;
  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
  {
    if ( CriFsBinder__criFsBinder_GetFileSize(this->fields.handle, path, &size, v6) )
      return -1;
    else
      return size;
  }
  return v3;
}


int64_t CriFsBinder__GetFileSize_30855532(CriFsBinder_o *this, int32_t id, const MethodInfo *method)
{
  int64_t v3; // x19
  const MethodInfo *v6; // x3
  int64_t size; // [xsp+8h] [xbp-28h] BYREF

  v3 = -1;
  size = -1;
  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
  {
    if ( CriFsBinder__criFsBinder_GetFileSizeById(this->fields.handle, id, &size, v6) )
      return -1;
    else
      return size;
  }
  return v3;
}


// attributes: thunk
int32_t CriFsBinder__GetNumContentsFiles(uint32_t bindId, const MethodInfo *method)
{
  return CriFsBinder__CRIWARE368F9D49(bindId, method);
}


int32_t CriFsBinder__GetStatus(uint32_t bindId, const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v4; // x2
  int32_t status; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C501F4 & 1) == 0 )
  {
    sub_1C3E564(&CriFsPlugin_TypeInfo);
    byte_4C501F4 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  status = 4;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( !CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
    return 4;
  CriFsBinder__criFsBinder_GetStatus(bindId, &status, v4);
  return status;
}


void CriFsBinder__SetPriority(uint32_t bindId, int32_t priority, const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C501F8 & 1) == 0 )
  {
    sub_1C3E564(&CriFsPlugin_TypeInfo);
    byte_4C501F8 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
    CriFsBinder__criFsBinder_SetPriority(bindId, priority, v6);
}


void CriFsBinder__Unbind(uint32_t bindId, const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C501F3 & 1) == 0 )
  {
    sub_1C3E564(&CriFsPlugin_TypeInfo);
    byte_4C501F3 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
    CriFsBinder__criFsBinder_Unbind(bindId, v4);
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
  if ( !off_4C50210 )
  {
    *(_QWORD *)v17 = "cri_ware_unity";
    v18 = 14;
    *(_QWORD *)v19 = "criFsBinder_BindCpk";
    v20 = &word_12 + 1;
    v22 = 44;
    v21 = 0x200000000LL;
    v23 = 0;
    off_4C50210 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_1C3EB40(v17);
  }
  v14 = sub_1C3EB1C(v11, srcBinder, (int)path, work, worksize, (int)bindId, (int)method, v7, v17[0], v18, v19[0], v20);
  v15 = off_4C50210(binder, srcBinder, v14, work, (unsigned int)worksize, bindId);
  sub_1C3EB34(v14);
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
  if ( !off_4C50218 )
  {
    *(_QWORD *)v17 = "cri_ware_unity";
    v18 = 14;
    *(_QWORD *)v19 = "criFsBinder_BindDirectory";
    v20 = &off_18 + 1;
    v22 = 44;
    v21 = 0x200000000LL;
    v23 = 0;
    off_4C50218 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_1C3EB40(v17);
  }
  v14 = sub_1C3EB1C(v11, srcBinder, (int)path, work, worksize, (int)bindId, (int)method, v7, v17[0], v18, v19[0], v20);
  v15 = off_4C50218(binder, srcBinder, v14, work, (unsigned int)worksize, bindId);
  sub_1C3EB34(v14);
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
  if ( !off_4C50220 )
  {
    *(_QWORD *)v17 = "cri_ware_unity";
    v18 = 14;
    *(_QWORD *)v19 = "criFsBinder_BindFile";
    v20 = &dword_14;
    v22 = 44;
    v21 = 0x200000000LL;
    v23 = 0;
    off_4C50220 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_1C3EB40(v17);
  }
  v14 = sub_1C3EB1C(v11, srcBinder, (int)path, work, worksize, (int)bindId, (int)method, v7, v17[0], v18, v19[0], v20);
  v15 = off_4C50220(binder, srcBinder, v14, work, (unsigned int)worksize, bindId);
  sub_1C3EB34(v14);
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
  if ( !off_4C50228 )
  {
    *(_QWORD *)v33 = "cri_ware_unity";
    v34 = byte_9 + 5;
    v35 = "criFsBinder_BindFileSection";
    v36 = 27;
    v38 = 64;
    v37 = 0x200000000LL;
    v39 = 0;
    off_4C50228 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_1C3EB40(v33);
  }
  v18 = sub_1C3EB1C(v15, srcBinder, (int)path, offset, size, (int)sectionName, work, worksize, v29, v31, v33[0], v34);
  v26 = sub_1C3EB1C(v12, v19, v20, v21, v22, v23, v24, v25, v30, v32, v33[0], v34);
  v27 = off_4C50228(binder, srcBinder, v18, offset, (unsigned int)size, v26, work, (unsigned int)worksize, bindId);
  sub_1C3EB34(v18);
  sub_1C3EB34(v26);
  return v27;
}


uint32_t CriFsBinder__criFsBinder_Create(intptr_t *binder, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4C50200;
  if ( !off_4C50200 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsBinder_Create";
    v5[3] = 18;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C3EB40(v5);
    off_4C50200 = v2;
  }
  return ((__int64 (__fastcall *)(intptr_t *, const MethodInfo *))v2)(binder, method);
}


uint32_t CriFsBinder__criFsBinder_Destroy(intptr_t binder, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4C50208;
  if ( !off_4C50208 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsBinder_Destroy";
    v5[3] = 19;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C3EB40(v5);
    off_4C50208 = v2;
  }
  return ((__int64 (__fastcall *)(intptr_t, const MethodInfo *))v2)(binder, method);
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
  if ( !off_4C50258 )
  {
    *(_QWORD *)v14 = "cri_ware_unity";
    v15 = 14;
    *(_QWORD *)v16 = "criFsBinder_GetContentsFileInfo";
    v17 = &off_18 + 7;
    v19 = 24;
    v18 = 0x200000000LL;
    v20 = 0;
    off_4C50258 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1C3EB40(v14);
  }
  v11 = sub_1C3EB1C(v9, (int)path, info, (int)method, v4, v5, v6, v7, v14[0], v15, v16[0], v17);
  v12 = off_4C50258(binder, v11, info);
  sub_1C3EB34(v11);
  return v12;
}


int32_t CriFsBinder__criFsBinder_GetContentsFileInfoById(
        intptr_t binder,
        int32_t id,
        intptr_t info,
        const MethodInfo *method)
{
  void *v4; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v4 = off_4C50260;
  if ( !off_4C50260 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFsBinder_GetContentsFileInfoById";
    v9[3] = 35;
    v10 = 20;
    v9[4] = 0x200000000LL;
    v11 = 0;
    v4 = (void *)sub_1C3EB40(v9);
    off_4C50260 = v4;
  }
  return ((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t, const MethodInfo *))v4)(
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
  void *v5; // x8
  _QWORD v11[5]; // [xsp+0h] [xbp-60h] BYREF
  int v12; // [xsp+28h] [xbp-38h]
  char v13; // [xsp+2Ch] [xbp-34h]

  v5 = off_4C50268;
  if ( !off_4C50268 )
  {
    v11[0] = "cri_ware_unity";
    v11[1] = 14;
    v11[2] = "criFsBinder_GetContentsFileInfoByIndex";
    v11[3] = 38;
    v12 = 20;
    v11[4] = 0x200000000LL;
    v13 = 0;
    v5 = (void *)sub_1C3EB40(v11);
    off_4C50268 = v5;
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, intptr_t, _QWORD, const MethodInfo *))v5)(
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
  if ( !off_4C50240 )
  {
    *(_QWORD *)v14 = "cri_ware_unity";
    v15 = 14;
    *(_QWORD *)v16 = "criFsBinder_GetFileSize";
    v17 = &dword_14 + 3;
    v19 = 24;
    v18 = 0x200000000LL;
    v20 = 0;
    off_4C50240 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1C3EB40(v14);
  }
  v11 = sub_1C3EB1C(v9, (int)path, (int)size, (int)method, v4, v5, v6, v7, v14[0], v15, v16[0], v17);
  v12 = off_4C50240(binder, v11, size);
  sub_1C3EB34(v11);
  return v12;
}


int32_t CriFsBinder__criFsBinder_GetFileSizeById(intptr_t binder, int32_t id, int64_t *size, const MethodInfo *method)
{
  void *v4; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v4 = off_4C50248;
  if ( !off_4C50248 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFsBinder_GetFileSizeById";
    v9[3] = 27;
    v10 = 20;
    v9[4] = 0x200000000LL;
    v11 = 0;
    v4 = (void *)sub_1C3EB40(v9);
    off_4C50248 = v4;
  }
  return ((__int64 (__fastcall *)(intptr_t, _QWORD, int64_t *, const MethodInfo *))v4)(
           binder,
           (unsigned int)id,
           size,
           method);
}


int32_t CriFsBinder__criFsBinder_GetStatus(uint32_t bindId, int32_t *status, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4C50238;
  if ( !off_4C50238 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsBinder_GetStatus";
    v7[3] = 21;
    v8 = 12;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C3EB40(v7);
    off_4C50238 = v3;
  }
  return ((__int64 (__fastcall *)(_QWORD, int32_t *, const MethodInfo *))v3)(bindId, status, method);
}


int32_t CriFsBinder__criFsBinder_SetPriority(uint32_t bindId, int32_t priority, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4C50250;
  if ( !off_4C50250 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsBinder_SetPriority";
    v7[3] = 23;
    v8 = 8;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C3EB40(v7);
    off_4C50250 = v3;
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, const MethodInfo *))v3)(bindId, (unsigned int)priority, method);
}


int32_t CriFsBinder__criFsBinder_Unbind(uint32_t bindId, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4C50230;
  if ( !off_4C50230 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsBinder_Unbind";
    v5[3] = 18;
    v6 = 4;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C3EB40(v5);
    off_4C50230 = v2;
  }
  return ((__int64 (__fastcall *)(_QWORD, const MethodInfo *))v2)(bindId, method);
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
  struct System_String_o *v8; // x0
  int32_t v9; // w0
  struct System_String_o *v10; // x0
  int32_t v11; // w1
  int64_t v12; // x0
  struct System_String_o *v13; // x0
  int64_t v14; // x0
  struct System_String_o *v15; // x0
  uint64_t v16; // x0
  int32_t v17; // w0
  struct System_String_o **p_userStr; // x19
  intptr_t v19; // [xsp+8h] [xbp-38h] BYREF
  intptr_t ptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C50278 & 1) == 0 )
  {
    sub_1C3E564(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_4C50278 = 1;
  }
  if ( System_IntPtr__get_Size(0) == 4 )
  {
    v7 = System_BitConverter__ToInt32(data, startIndex, 0);
    ptr = 0;
    System_IntPtr___ctor((intptr_t)&ptr, v7, 0);
    if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
    v8 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(ptr, 0);
    this->fields.directory = v8;
    sub_1C3E508(this, v8);
    v9 = System_BitConverter__ToInt32(data, startIndex + 4, 0);
    v19 = 0;
    System_IntPtr___ctor((intptr_t)&v19, v9, 0);
    v10 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v19, 0);
    this->fields.fileName = v10;
    sub_1C3E508(&this->fields.fileName, v10);
    this->fields.readSize = System_BitConverter__ToUInt32(data, startIndex + 8, 0);
    this->fields.extractSize = System_BitConverter__ToUInt32(data, startIndex + 12, 0);
    this->fields.offset = System_BitConverter__ToUInt64(data, startIndex + 16, 0);
    v11 = startIndex + 24;
  }
  else
  {
    v12 = System_BitConverter__ToInt64(data, startIndex, 0);
    ptr = 0;
    System_IntPtr___ctor_65467496((intptr_t)&ptr, v12, 0);
    if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
    v13 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(ptr, 0);
    this->fields.directory = v13;
    sub_1C3E508(this, v13);
    v14 = System_BitConverter__ToInt64(data, startIndex + 8, 0);
    v19 = 0;
    System_IntPtr___ctor_65467496((intptr_t)&v19, v14, 0);
    v15 = System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v19, 0);
    this->fields.fileName = v15;
    sub_1C3E508(&this->fields.fileName, v15);
    this->fields.readSize = System_BitConverter__ToUInt32(data, startIndex + 16, 0);
    this->fields.extractSize = System_BitConverter__ToUInt32(data, startIndex + 20, 0);
    v16 = System_BitConverter__ToUInt64(data, startIndex + 24, 0);
    v11 = startIndex + 32;
    this->fields.offset = v16;
  }
  v17 = System_BitConverter__ToInt32(data, v11, 0);
  this->fields.userStr = 0;
  p_userStr = &this->fields.userStr;
  *((_DWORD *)p_userStr - 2) = v17;
  sub_1C3E508(p_userStr, 0);
}