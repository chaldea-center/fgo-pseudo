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

  if ( (byte_4C31057 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest__Add__);
    byte_4C31057 = 1;
  }
  requestList = (System_Collections_Generic_List_object__o *)this->fields.requestList;
  if ( !requestList
    || (items = requestList->fields._items,
        v7 = Method_System_Collections_Generic_List_CriFsRequest__Add__,
        ++requestList->fields._version,
        !items) )
  {
    sub_1C32E7C(requestList);
  }
  size = requestList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      requestList,
      (Il2CppObject *)request,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &items->obj.klass + size;
    requestList->fields._size = size + 1;
    v9[4] = (Il2CppClass *)request;
    sub_1C32BC4(v9 + 4, request);
  }
}


void CriFsServer__Awake(CriFsServer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *instance; // x20
  System_Collections_Generic_List_object__o *v4; // x20
  struct System_Collections_Generic_List_CriFsRequest__o **p_requestList; // x19
  __int64 v6; // x20
  System_Collections_Generic_List_object__o *v7; // x0
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x8

  if ( (byte_4C31054 & 1) == 0 )
  {
    sub_1C32C20(&CriFsRequest_TypeInfo);
    sub_1C32C20(&CriFsServer_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CriFsRequest__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31054 = 1;
  }
  instance = (UnityEngine_Object_o *)CriFsServer_TypeInfo->static_fields->_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    CriFsServer_TypeInfo->static_fields->_instance = this;
    sub_1C32BC4(CriFsServer_TypeInfo->static_fields, this);
    v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_CriFsRequest__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_CriFsRequest___ctor__);
    this->fields.requestList = (struct System_Collections_Generic_List_CriFsRequest__o *)v4;
    p_requestList = &this->fields.requestList;
    sub_1C32BC4(p_requestList, v4);
    v6 = sub_1C32E6C(CriFsRequest_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    *(System_Guid_o *)(v6 + 16) = System_Guid__NewGuid(0);
    v7 = (System_Collections_Generic_List_object__o *)*p_requestList;
    if ( !*p_requestList )
      goto LABEL_16;
    items = v7->fields._items;
    v9 = Method_System_Collections_Generic_List_CriFsRequest__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_16;
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        (Il2CppObject *)v6,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    }
    else
    {
      v11 = &items->obj.klass + size;
      v7->fields._size = size + 1;
      v11[4] = (Il2CppClass *)v6;
      sub_1C32BC4(v11 + 4, v6);
    }
    v7 = (System_Collections_Generic_List_object__o *)*p_requestList;
    if ( !*p_requestList )
LABEL_16:
      sub_1C32E7C(v7);
    System_Collections_Generic_List_object___RemoveAt(
      v7,
      0,
      (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_CriFsRequest__RemoveAt__);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)this, 0);
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

  if ( (byte_4C3105C & 1) == 0 )
  {
    sub_1C32C20(&CriFsBindRequest_TypeInfo);
    byte_4C3105C = 1;
  }
  v9 = (CriFsBindRequest_o *)sub_1C32E6C(CriFsBindRequest_TypeInfo);
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

  if ( (byte_4C3105D & 1) == 0 )
  {
    sub_1C32C20(&CriFsBindRequest_TypeInfo);
    byte_4C3105D = 1;
  }
  v9 = (CriFsBindRequest_o *)sub_1C32E6C(CriFsBindRequest_TypeInfo);
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

  if ( (byte_4C3105E & 1) == 0 )
  {
    sub_1C32C20(&CriFsBindRequest_TypeInfo);
    byte_4C3105E = 1;
  }
  v9 = (CriFsBindRequest_o *)sub_1C32E6C(CriFsBindRequest_TypeInfo);
  CriFsBindRequest___ctor(v9, 2, targetBinder, srcBinder, path, v10);
  CriFsServer__AddRequest(this, (CriFsRequest_o *)v9, v11);
  return v9;
}


void CriFsServer__CreateInstance(const MethodInfo *method)
{
  UnityEngine_Object_o *instance; // x19
  UnityEngine_GameObject_o *managerObject; // x0
  struct CriFsServer_o *v3; // x19

  if ( (byte_4C31052 & 1) == 0 )
  {
    sub_1C32C20(&CriFsPlugin_TypeInfo);
    sub_1C32C20(&CriFsServer_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_CriFsServer___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31052 = 1;
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
      (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_CriFsServer___);
    managerObject = (UnityEngine_GameObject_o *)CriFsPlugin_TypeInfo;
    v3 = CriFsServer_TypeInfo->static_fields->_instance;
    if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      managerObject = (UnityEngine_GameObject_o *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    if ( !v3 )
LABEL_12:
      sub_1C32E7C(managerObject);
    v3->fields._installBufferSize_k__BackingField = CriFsPlugin_TypeInfo->static_fields->installBufferSize;
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
  Il2CppObject *requestList; // x0
  int32_t v5; // w20
  int monitor; // w8
  int32_t v7; // w20
  System_Collections_Generic_List_object__o *v8; // x21
  Il2CppObject *Item; // x0

  v2 = this;
  if ( (byte_4C31056 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest__get_Count__);
    this = (CriFsServer_o *)sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
    byte_4C31056 = 1;
  }
  v3 = CriFsInstaller__criFsInstaller_ExecuteMain((const MethodInfo *)this);
  if ( !byte_4C312C4 )
  {
    v3 = sub_1C32C20(&CriFsWebInstaller_TypeInfo);
    byte_4C312C4 = 1;
  }
  if ( CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField )
    CriFsWebInstaller__criFsWebInstaller_ExecuteMain((const MethodInfo *)v3);
  requestList = (Il2CppObject *)v2->fields.requestList;
  if ( !requestList )
    goto LABEL_12;
  v5 = 0;
  while ( 1 )
  {
    monitor = (int)requestList[1].monitor;
    if ( v5 >= monitor )
      break;
    requestList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)requestList,
                    v5,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
    if ( requestList )
    {
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))requestList->klass->vtable[8].methodPtr)(
        requestList,
        requestList->klass->vtable[8].method);
      requestList = (Il2CppObject *)v2->fields.requestList;
      ++v5;
      if ( requestList )
        continue;
    }
    goto LABEL_12;
  }
  if ( monitor >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      requestList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)requestList,
                      v7,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
      if ( !requestList )
        break;
      if ( LOBYTE(requestList[2].monitor) )
        goto LABEL_20;
      requestList = (Il2CppObject *)v2->fields.requestList;
      if ( !requestList )
        break;
      requestList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)requestList,
                      v7,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
      if ( !requestList )
        break;
      if ( LOBYTE(requestList[3].monitor) )
      {
LABEL_20:
        v8 = (System_Collections_Generic_List_object__o *)v2->fields.requestList;
        if ( !v8 )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)v2->fields.requestList,
                 v7,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_CriFsRequest__get_Item__);
        System_Collections_Generic_List_object___Remove(
          v8,
          Item,
          (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_CriFsRequest__Remove__);
      }
      requestList = (Il2CppObject *)v2->fields.requestList;
      if ( !requestList )
        break;
      if ( ++v7 >= SLODWORD(requestList[1].monitor) )
        return;
    }
LABEL_12:
    sub_1C32E7C(requestList);
  }
}


void CriFsServer__DestroyInstance(const MethodInfo *method)
{
  UnityEngine_Object_o *instance; // x19
  UnityEngine_Object_o *v2; // x19

  if ( (byte_4C31053 & 1) == 0 )
  {
    sub_1C32C20(&CriFsServer_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31053 = 1;
  }
  instance = (UnityEngine_Object_o *)CriFsServer_TypeInfo->static_fields->_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(instance, 0, 0) )
  {
    v2 = (UnityEngine_Object_o *)CriFsServer_TypeInfo->static_fields->_instance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v2, 0);
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
  System_Collections_Generic_List_object__o *requestList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4C3105A & 1) == 0 )
  {
    sub_1C32C20(&CriFsInstallRequestLegacy_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest__Add__);
    byte_4C3105A = 1;
  }
  installBufferSize_k__BackingField = this->fields._installBufferSize_k__BackingField;
  v12 = (CriFsInstallRequestLegacy_o *)sub_1C32E6C(CriFsInstallRequestLegacy_TypeInfo);
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
        v16 = Method_System_Collections_Generic_List_CriFsRequest__Add__,
        ++requestList->fields._version,
        !items) )
  {
    sub_1C32E7C(requestList);
  }
  size = requestList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      requestList,
      (Il2CppObject *)v12,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    requestList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1C32BC4(v18 + 4, v12);
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

  if ( (byte_4C31059 & 1) == 0 )
  {
    sub_1C32C20(&CriFsLoadAssetBundleRequest_TypeInfo);
    byte_4C31059 = 1;
  }
  v9 = (CriFsLoadAssetBundleRequest_o *)sub_1C32E6C(CriFsLoadAssetBundleRequest_TypeInfo);
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

  if ( (byte_4C31058 & 1) == 0 )
  {
    sub_1C32C20(&CriFsLoadFileRequest_TypeInfo);
    byte_4C31058 = 1;
  }
  v11 = (CriFsLoadFileRequest_o *)sub_1C32E6C(CriFsLoadFileRequest_TypeInfo);
  CriFsLoadFileRequest___ctor(v11, binder, path, doneDelegate, readUnitSize, v12);
  CriFsServer__AddRequest(this, (CriFsRequest_o *)v11, v13);
  return v11;
}


void CriFsServer__OnDestroy(CriFsServer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *instance; // x20
  System_Collections_Generic_List_object__o *requestList; // x0
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C31055 & 1) == 0 )
  {
    sub_1C32C20(&CriFsServer_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_CriFsRequest__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_CriFsRequest__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_CriFsRequest__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31055 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  instance = (UnityEngine_Object_o *)CriFsServer_TypeInfo->static_fields->_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(instance, (UnityEngine_Object_o *)this, 0) )
  {
    requestList = (System_Collections_Generic_List_object__o *)this->fields.requestList;
    if ( !requestList )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      requestList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_CriFsRequest__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_CriFsRequest__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C32E7C(0);
      v5.fields._current->klass->vtable[5].methodPtr();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_CriFsRequest__Dispose__);
    CriFsServer_TypeInfo->static_fields->_instance = 0;
    sub_1C32BC4(CriFsServer_TypeInfo->static_fields, 0);
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
  System_Collections_Generic_List_object__o *requestList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4C3105B & 1) == 0 )
  {
    sub_1C32C20(&CriFsWebInstallRequest_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_CriFsRequest__Add__);
    byte_4C3105B = 1;
  }
  v9 = (CriFsWebInstallRequest_o *)sub_1C32E6C(CriFsWebInstallRequest_TypeInfo);
  CriFsWebInstallRequest___ctor(v9, srcPath, dstPath, doneDelegate, v10);
  requestList = (System_Collections_Generic_List_object__o *)this->fields.requestList;
  if ( !requestList
    || (items = requestList->fields._items,
        v13 = Method_System_Collections_Generic_List_CriFsRequest__Add__,
        ++requestList->fields._version,
        !items) )
  {
    sub_1C32E7C(requestList);
  }
  size = requestList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      requestList,
      (Il2CppObject *)v9,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    requestList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v9;
    sub_1C32BC4(v15 + 4, v9);
  }
  return (CriFsInstallRequest_o *)v9;
}


int32_t CriFsServer__get_installBufferSize(CriFsServer_o *this, const MethodInfo *method)
{
  return this->fields._installBufferSize_k__BackingField;
}


CriFsServer_o *CriFsServer__get_instance(const MethodInfo *method)
{
  if ( (byte_4C31051 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C32C20(&CriFsServer_TypeInfo);
    byte_4C31051 = 1;
  }
  CriFsServer__CreateInstance(method);
  return CriFsServer_TypeInfo->static_fields->_instance;
}


void CriFsServer__set_installBufferSize(CriFsServer_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._installBufferSize_k__BackingField = value;
}