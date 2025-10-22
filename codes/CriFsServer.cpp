void CriFsServer___ctor(CriFsServer_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
  this->fields._guid_k__BackingField = System_Guid__NewGuid(0);
}


void CriFsServer__AddRequest(CriFsServer_o *this, CriFsRequest_o *request, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *requestList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  Il2CppClass **v9; // x8

  if ( (byte_4C50327 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest__Add__);
    byte_4C50327 = 1;
  }
  requestList = (System_Collections_Generic_List_object__o *)this->fields.requestList;
  if ( !requestList
    || (items = requestList->fields._items,
        v7 = Method_System_Collections_Generic_List_CriFsRequest__Add__,
        ++requestList->fields._version,
        !items) )
  {
    sub_1C3E7C0(requestList, request);
  }
  size = requestList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      requestList,
      (Il2CppObject *)request,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &items->obj.klass + size;
    requestList->fields._size = size + 1;
    v9[4] = (Il2CppClass *)request;
    sub_1C3E508(v9 + 4, request);
  }
}


void CriFsServer__Awake(CriFsServer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *instance; // x20
  System_Collections_Generic_List_object__o *v4; // x20
  struct System_Collections_Generic_List_CriFsRequest__o **p_requestList; // x19
  __int64 v6; // x20
  __int64 v7; // x1
  System_Guid_o v8; // kr00_16
  System_Collections_Generic_List_object__o *v9; // x0
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x8

  if ( (byte_4C50324 & 1) == 0 )
  {
    sub_1C3E564(&CriFsRequest_TypeInfo);
    sub_1C3E564(&CriFsServer_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_CriFsRequest__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50324 = 1;
  }
  instance = (UnityEngine_Object_o *)CriFsServer_TypeInfo->static_fields->_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    CriFsServer_TypeInfo->static_fields->_instance = this;
    sub_1C3E508(CriFsServer_TypeInfo->static_fields, this);
    v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_CriFsRequest__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_CriFsRequest___ctor__);
    this->fields.requestList = (struct System_Collections_Generic_List_CriFsRequest__o *)v4;
    p_requestList = &this->fields.requestList;
    sub_1C3E508(p_requestList, v4);
    v6 = sub_1C3E7B0(CriFsRequest_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v8 = System_Guid__NewGuid(0);
    v7 = *(_QWORD *)&v8.fields._d;
    *(System_Guid_o *)(v6 + 16) = v8;
    v9 = (System_Collections_Generic_List_object__o *)*p_requestList;
    if ( !*p_requestList )
      goto LABEL_16;
    items = v9->fields._items;
    v11 = Method_System_Collections_Generic_List_CriFsRequest__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_16;
    size = v9->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        (Il2CppObject *)v6,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = &items->obj.klass + size;
      v9->fields._size = size + 1;
      v13[4] = (Il2CppClass *)v6;
      sub_1C3E508(v13 + 4, v6);
    }
    v9 = (System_Collections_Generic_List_object__o *)*p_requestList;
    if ( !*p_requestList )
LABEL_16:
      sub_1C3E7C0(v9, v7);
    System_Collections_Generic_List_object___RemoveAt(
      v9,
      0,
      (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_CriFsRequest__RemoveAt__);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)this, 0);
  }
}


CriFsBindRequest_o *CriFsServer__BindCpk(
        CriFsServer_o *this,
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        const MethodInfo *method)
{
  CriFsBindRequest_o *v9; // x23
  const MethodInfo *v10; // x5
  const MethodInfo *v11; // x2

  if ( (byte_4C5032C & 1) == 0 )
  {
    sub_1C3E564(&CriFsBindRequest_TypeInfo);
    byte_4C5032C = 1;
  }
  v9 = (CriFsBindRequest_o *)sub_1C3E7B0(CriFsBindRequest_TypeInfo);
  CriFsBindRequest___ctor(v9, 0, targetBinder, srcBinder, path, v10);
  CriFsServer__AddRequest(this, (CriFsRequest_o *)v9, v11);
  return v9;
}


CriFsBindRequest_o *CriFsServer__BindDirectory(
        CriFsServer_o *this,
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        const MethodInfo *method)
{
  CriFsBindRequest_o *v9; // x23
  const MethodInfo *v10; // x5
  const MethodInfo *v11; // x2

  if ( (byte_4C5032D & 1) == 0 )
  {
    sub_1C3E564(&CriFsBindRequest_TypeInfo);
    byte_4C5032D = 1;
  }
  v9 = (CriFsBindRequest_o *)sub_1C3E7B0(CriFsBindRequest_TypeInfo);
  CriFsBindRequest___ctor(v9, 1, targetBinder, srcBinder, path, v10);
  CriFsServer__AddRequest(this, (CriFsRequest_o *)v9, v11);
  return v9;
}


CriFsBindRequest_o *CriFsServer__BindFile(
        CriFsServer_o *this,
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        const MethodInfo *method)
{
  CriFsBindRequest_o *v9; // x23
  const MethodInfo *v10; // x5
  const MethodInfo *v11; // x2

  if ( (byte_4C5032E & 1) == 0 )
  {
    sub_1C3E564(&CriFsBindRequest_TypeInfo);
    byte_4C5032E = 1;
  }
  v9 = (CriFsBindRequest_o *)sub_1C3E7B0(CriFsBindRequest_TypeInfo);
  CriFsBindRequest___ctor(v9, 2, targetBinder, srcBinder, path, v10);
  CriFsServer__AddRequest(this, (CriFsRequest_o *)v9, v11);
  return v9;
}


void CriFsServer__CreateInstance(const MethodInfo *method)
{
  UnityEngine_Object_o *instance; // x19
  UnityEngine_GameObject_o *managerObject; // x0
  __int64 v3; // x1
  struct CriFsServer_o *v4; // x19

  if ( (byte_4C50322 & 1) == 0 )
  {
    sub_1C3E564(&CriFsPlugin_TypeInfo);
    sub_1C3E564(&CriFsServer_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_CriFsServer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50322 = 1;
  }
  instance = (UnityEngine_Object_o *)CriFsServer_TypeInfo->static_fields->_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    managerObject = CriWare_Common__get_managerObject(0);
    if ( !managerObject )
      goto LABEL_12;
    UnityEngine_GameObject__AddComponent_object_(
      managerObject,
      (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_CriFsServer___);
    managerObject = (UnityEngine_GameObject_o *)CriFsPlugin_TypeInfo;
    v4 = CriFsServer_TypeInfo->static_fields->_instance;
    if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      managerObject = (UnityEngine_GameObject_o *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    if ( !v4 )
LABEL_12:
      sub_1C3E7C0(managerObject, v3);
    v4->fields._installBufferSize_k__BackingField = CriFsPlugin_TypeInfo->static_fields->installBufferSize;
  }
}


void CriFsServer__CriInternalLateUpdate(CriFsServer_o *this, const MethodInfo *method)
{
  ;
}


void CriFsServer__CriInternalUpdate(CriFsServer_o *this, const MethodInfo *method)
{
  CriFsServer_o *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  Il2CppObject *requestList; // x0
  int32_t v6; // w20
  int monitor; // w8
  int32_t v8; // w20
  System_Collections_Generic_List_object__o *v9; // x21
  Il2CppObject *Item; // x0

  v2 = this;
  if ( (byte_4C50326 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest__get_Count__);
    this = (CriFsServer_o *)sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
    byte_4C50326 = 1;
  }
  v3 = CriFsInstaller__criFsInstaller_ExecuteMain((const MethodInfo *)this);
  if ( !byte_4C50594 )
  {
    v3 = sub_1C3E564(&CriFsWebInstaller_TypeInfo);
    byte_4C50594 = 1;
  }
  if ( CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField )
    CriFsWebInstaller__criFsWebInstaller_ExecuteMain((const MethodInfo *)v3);
  requestList = (Il2CppObject *)v2->fields.requestList;
  if ( !requestList )
    goto LABEL_12;
  v6 = 0;
  while ( 1 )
  {
    monitor = (int)requestList[1].monitor;
    if ( v6 >= monitor )
      break;
    requestList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)requestList,
                    v6,
                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
    if ( requestList )
    {
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))requestList->klass->vtable[8].methodPtr)(
        requestList,
        requestList->klass->vtable[8].method);
      requestList = (Il2CppObject *)v2->fields.requestList;
      ++v6;
      if ( requestList )
        continue;
    }
    goto LABEL_12;
  }
  if ( monitor >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      requestList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)requestList,
                      v8,
                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
      if ( !requestList )
        break;
      if ( LOBYTE(requestList[2].monitor) )
        goto LABEL_20;
      requestList = (Il2CppObject *)v2->fields.requestList;
      if ( !requestList )
        break;
      requestList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)requestList,
                      v8,
                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
      if ( !requestList )
        break;
      if ( LOBYTE(requestList[3].monitor) )
      {
LABEL_20:
        v9 = (System_Collections_Generic_List_object__o *)v2->fields.requestList;
        if ( !v9 )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)v2->fields.requestList,
                 v8,
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
        System_Collections_Generic_List_object___Remove(
          v9,
          Item,
          (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_CriFsRequest__Remove__);
      }
      requestList = (Il2CppObject *)v2->fields.requestList;
      if ( !requestList )
        break;
      if ( ++v8 >= SLODWORD(requestList[1].monitor) )
        return;
    }
LABEL_12:
    sub_1C3E7C0(requestList, v4);
  }
}


void CriFsServer__DestroyInstance(const MethodInfo *method)
{
  UnityEngine_Object_o *instance; // x19
  UnityEngine_Object_o *v2; // x19

  if ( (byte_4C50323 & 1) == 0 )
  {
    sub_1C3E564(&CriFsServer_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50323 = 1;
  }
  instance = (UnityEngine_Object_o *)CriFsServer_TypeInfo->static_fields->_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(instance, 0, 0) )
  {
    v2 = (UnityEngine_Object_o *)CriFsServer_TypeInfo->static_fields->_instance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v2, 0);
  }
}


CriFsInstallRequest_o *CriFsServer__Install(
        CriFsServer_o *this,
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        const MethodInfo *method)
{
  int32_t installBufferSize_k__BackingField; // w25
  CriFsInstallRequestLegacy_o *v12; // x19
  const MethodInfo *v13; // x6
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *requestList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4C5032A & 1) == 0 )
  {
    sub_1C3E564(&CriFsInstallRequestLegacy_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest__Add__);
    byte_4C5032A = 1;
  }
  installBufferSize_k__BackingField = this->fields._installBufferSize_k__BackingField;
  v12 = (CriFsInstallRequestLegacy_o *)sub_1C3E7B0(CriFsInstallRequestLegacy_TypeInfo);
  CriFsInstallRequestLegacy___ctor(
    v12,
    srcBinder,
    srcPath,
    dstPath,
    doneDelegate,
    installBufferSize_k__BackingField,
    v13);
  requestList = (System_Collections_Generic_List_object__o *)this->fields.requestList;
  if ( !requestList
    || (items = requestList->fields._items,
        v17 = Method_System_Collections_Generic_List_CriFsRequest__Add__,
        ++requestList->fields._version,
        !items) )
  {
    sub_1C3E7C0(requestList, v14);
  }
  size = requestList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      requestList,
      (Il2CppObject *)v12,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    requestList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v12;
    sub_1C3E508(v19 + 4, v12);
  }
  return (CriFsInstallRequest_o *)v12;
}


CriFsLoadAssetBundleRequest_o *CriFsServer__LoadAssetBundle(
        CriFsServer_o *this,
        CriFsBinder_o *binder,
        System_String_o *path,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  CriFsLoadAssetBundleRequest_o *v9; // x23
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x2

  if ( (byte_4C50329 & 1) == 0 )
  {
    sub_1C3E564(&CriFsLoadAssetBundleRequest_TypeInfo);
    byte_4C50329 = 1;
  }
  v9 = (CriFsLoadAssetBundleRequest_o *)sub_1C3E7B0(CriFsLoadAssetBundleRequest_TypeInfo);
  CriFsLoadAssetBundleRequest___ctor(v9, binder, path, readUnitSize, v10);
  CriFsServer__AddRequest(this, (CriFsRequest_o *)v9, v11);
  return v9;
}


CriFsLoadFileRequest_o *CriFsServer__LoadFile(
        CriFsServer_o *this,
        CriFsBinder_o *binder,
        System_String_o *path,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  CriFsLoadFileRequest_o *v11; // x24
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x2

  if ( (byte_4C50328 & 1) == 0 )
  {
    sub_1C3E564(&CriFsLoadFileRequest_TypeInfo);
    byte_4C50328 = 1;
  }
  v11 = (CriFsLoadFileRequest_o *)sub_1C3E7B0(CriFsLoadFileRequest_TypeInfo);
  CriFsLoadFileRequest___ctor(v11, binder, path, doneDelegate, readUnitSize, v12);
  CriFsServer__AddRequest(this, (CriFsRequest_o *)v11, v13);
  return v11;
}


void CriFsServer__OnDestroy(CriFsServer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *instance; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *requestList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C50325 & 1) == 0 )
  {
    sub_1C3E564(&CriFsServer_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_CriFsRequest__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_CriFsRequest__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_CriFsRequest__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50325 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  instance = (UnityEngine_Object_o *)CriFsServer_TypeInfo->static_fields->_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(instance, (UnityEngine_Object_o *)this, 0) )
  {
    requestList = (System_Collections_Generic_List_object__o *)this->fields.requestList;
    if ( !requestList )
      sub_1C3E7C0(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      requestList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_CriFsRequest__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_CriFsRequest__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C3E7C0(0, v6);
      v7.fields._current->klass->vtable[5].methodPtr();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_CriFsRequest__Dispose__);
    CriFsServer_TypeInfo->static_fields->_instance = 0;
    sub_1C3E508(CriFsServer_TypeInfo->static_fields, 0);
  }
}


CriFsInstallRequest_o *CriFsServer__WebInstall(
        CriFsServer_o *this,
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        const MethodInfo *method)
{
  CriFsWebInstallRequest_o *v9; // x19
  const MethodInfo *v10; // x4
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *requestList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C5032B & 1) == 0 )
  {
    sub_1C3E564(&CriFsWebInstallRequest_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_CriFsRequest__Add__);
    byte_4C5032B = 1;
  }
  v9 = (CriFsWebInstallRequest_o *)sub_1C3E7B0(CriFsWebInstallRequest_TypeInfo);
  CriFsWebInstallRequest___ctor(v9, srcPath, dstPath, doneDelegate, v10);
  requestList = (System_Collections_Generic_List_object__o *)this->fields.requestList;
  if ( !requestList
    || (items = requestList->fields._items,
        v14 = Method_System_Collections_Generic_List_CriFsRequest__Add__,
        ++requestList->fields._version,
        !items) )
  {
    sub_1C3E7C0(requestList, v11);
  }
  size = requestList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      requestList,
      (Il2CppObject *)v9,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    requestList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v9;
    sub_1C3E508(v16 + 4, v9);
  }
  return (CriFsInstallRequest_o *)v9;
}


int32_t CriFsServer__get_installBufferSize(CriFsServer_o *this, const MethodInfo *method)
{
  return this->fields._installBufferSize_k__BackingField;
}


CriFsServer_o *CriFsServer__get_instance(const MethodInfo *method)
{
  if ( (byte_4C50321 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C3E564(&CriFsServer_TypeInfo);
    byte_4C50321 = 1;
  }
  CriFsServer__CreateInstance(method);
  return CriFsServer_TypeInfo->static_fields->_instance;
}


void CriFsServer__set_installBufferSize(CriFsServer_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._installBufferSize_k__BackingField = value;
}