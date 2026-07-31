void CriDisposableObjectManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v1; // x19

  if ( (byte_59317D7 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__TypeInfo);
    byte_59317D7 = 1;
  }
  v1 = (System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *)sub_21FFEBC(System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__TypeInfo);
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef____ctor(
    v1,
    (const MethodInfo_44D7720 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___ctor__);
  CriDisposableObjectManager_TypeInfo->static_fields->refList = v1;
  sub_21FFBF4(CriDisposableObjectManager_TypeInfo->static_fields, v1);
}


void CriDisposableObjectManager__CallOnModuleFinalization(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59317D4 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    byte_59317D4 = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, method, v2);
  CriDisposableObjectManager__DisposeAll(type, method);
}


void CriDisposableObjectManager__DisposeAll(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  CriDisposableObjectManager_c *v4; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v6; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t NextWithType; // w20
  CriDisposableObjectManager_c *v12; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *refList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  CriDisposableObjectManager_c *v16; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v17; // x0
  System_String_o *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  __int64 v22; // x1
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v23; // x0
  CriDisposableObjectManager_ObjectRef_o v24; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v25; // [xsp+28h] [xbp-88h]
  bool *v26; // [xsp+30h] [xbp-80h]
  Il2CppObject **v27; // [xsp+38h] [xbp-78h]
  bool lockTaken[4]; // [xsp+44h] [xbp-6Ch] BYREF
  Il2CppObject *v29; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_59317D6 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    sub_21FFC50(&CriDisposableObjectManager_ModuleType_TypeInfo);
    sub_21FFC50(&StringLiteral_16494/*"[CRIWARE] Internal: Object disposal(Type:"*/);
    sub_21FFC50(&StringLiteral_804/*") not handled by CriDisposableObjectManager; memory leak may have occured."*/);
    byte_59317D6 = 1;
  }
  v4 = CriDisposableObjectManager_TypeInfo;
  v29 = 0;
  lockTaken[0] = 0;
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, method, v2);
    v4 = CriDisposableObjectManager_TypeInfo;
  }
  static_fields = (Il2CppObject **)v4->static_fields;
  lockTaken[0] = 0;
  v25 = 0;
  v26 = lockTaken;
  v6 = *static_fields;
  v27 = &v29;
  v29 = v6;
  System_Threading_Monitor__Enter_77339928(v6, lockTaken, 0);
  while ( 1 )
  {
    if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v7, v8);
    NextWithType = CriDisposableObjectManager__GetNextWithType(type, v7);
    if ( NextWithType < 0 )
      break;
    v12 = CriDisposableObjectManager_TypeInfo;
    if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v9, v10);
      v12 = CriDisposableObjectManager_TypeInfo;
    }
    refList = v12->static_fields->refList;
    if ( !refList )
      sub_21FFECC(0, v9);
    System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
      &v24,
      refList,
      NextWithType,
      (const MethodInfo_44D7CB8 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    if ( v24.fields.disposable )
    {
      v24.fields.disposable->klass->vtable._5_Dispose.methodPtr();
    }
    else
    {
      v16 = CriDisposableObjectManager_TypeInfo;
      if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v14, v15);
        v16 = CriDisposableObjectManager_TypeInfo;
      }
      v17 = v16->static_fields->refList;
      if ( !v17 )
        sub_21FFECC(0, v14);
      System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
        &v24,
        v17,
        NextWithType,
        (const MethodInfo_44D7CB8 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
      *(_QWORD *)&v24.fields.guid.fields._a = CriDisposableObjectManager_ModuleType_TypeInfo;
      *(_QWORD *)&v24.fields.guid.fields._d = -1;
      v18 = System_Enum__ToString((System_Enum_o *)&v24, 0);
      v21 = (Il2CppObject *)System_String__Concat_75481624(
                              (System_String_o *)StringLiteral_16494/*"[CRIWARE] Internal: Object disposal(Type:"*/,
                              v18,
                              (System_String_o *)StringLiteral_804/*") not handled by CriDisposableObjectManager; memory leak may have occured."*/,
                              0);
      if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v19, v20);
      UnityEngine_Debug__LogWarning(v21, 0);
      v23 = CriDisposableObjectManager_TypeInfo->static_fields->refList;
      if ( !v23 )
        sub_21FFECC(0, v22);
      System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___RemoveAt(
        v23,
        NextWithType,
        (const MethodInfo_44D99C0 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    }
  }
  if ( lockTaken[0] )
    System_Threading_Monitor__Exit(*v27, 0);
}


int32_t CriDisposableObjectManager__GetNextWithType(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  CriDisposableObjectManager_c *v4; // x0
  struct System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *refList; // x8
  int32_t size; // w20
  CriDisposableObjectManager_c *v7; // x0
  CriDisposableObjectManager_ObjectRef_o v9; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_59317D5 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    byte_59317D5 = 1;
  }
  v4 = CriDisposableObjectManager_TypeInfo;
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, method, v2);
    v4 = CriDisposableObjectManager_TypeInfo;
  }
  refList = v4->static_fields->refList;
  if ( !refList )
LABEL_15:
    sub_21FFECC(v4, method);
  size = refList->fields._size;
  while ( --size >= 0 )
  {
    v7 = CriDisposableObjectManager_TypeInfo;
    if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, method, v2);
      v7 = CriDisposableObjectManager_TypeInfo;
    }
    v4 = (CriDisposableObjectManager_c *)v7->static_fields->refList;
    if ( !v4 )
      goto LABEL_15;
    System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
      &v9,
      (System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *)v4,
      size,
      (const MethodInfo_44D7CB8 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    if ( v9.fields.type == type )
      return size;
  }
  return -1;
}


bool CriDisposableObjectManager__IsDisposed(CriDisposable_o *disposable, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59317D3 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    byte_59317D3 = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, method, v2);
  return (unsigned int)CriDisposableObjectManager__SearchForDisposable(disposable, method) >> 31;
}


// local variable allocation has failed, the output may be wrong!
void CriDisposableObjectManager__Register(CriDisposable_o *disposable, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CriDisposableObjectManager_c *v7; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  CriDisposableObjectManager_c *v12; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *refList; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  struct CriDisposableObjectManager_ObjectRef_array *items; // x8
  _QWORD *v17; // x9
  int v18; // w10
  __int64 size; // x10
  struct System_Guid_o guid; // q0
  struct System_Guid_o v21; // q1
  struct System_Guid_o *v22; // x8
  const MethodInfo_44D8014 *v23; // x2
  CriDisposableObjectManager_ObjectRef_o v24; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v25; // [xsp+20h] [xbp-90h]
  bool *v26; // [xsp+28h] [xbp-88h]
  Il2CppObject **v27; // [xsp+30h] [xbp-80h]
  bool lockTaken[4]; // [xsp+3Ch] [xbp-74h] BYREF
  CriDisposableObjectManager_ObjectRef_o v29; // [xsp+40h] [xbp-70h]
  CriDisposableObjectManager_ObjectRef_o v30; // [xsp+60h] [xbp-50h] BYREF
  Il2CppObject *v31; // [xsp+88h] [xbp-28h] BYREF

  if ( (byte_59317D1 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__Add__);
    sub_21FFC50(&StringLiteral_16493/*"[CRIWARE] Internal: Duplicated object GUID"*/);
    byte_59317D1 = 1;
  }
  v31 = 0;
  lockTaken[0] = 0;
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, *(_QWORD *)&type, method);
  if ( CriDisposableObjectManager__SearchForDisposable(disposable, *(const MethodInfo **)&type) < 0 )
  {
    v7 = CriDisposableObjectManager_TypeInfo;
    if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v5, v6);
      v7 = CriDisposableObjectManager_TypeInfo;
    }
    static_fields = (Il2CppObject **)v7->static_fields;
    lockTaken[0] = 0;
    v25 = 0;
    v26 = lockTaken;
    v9 = *static_fields;
    v27 = &v31;
    v31 = v9;
    System_Threading_Monitor__Enter_77339928(v9, lockTaken, 0);
    v12 = CriDisposableObjectManager_TypeInfo;
    if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v10, v11);
      v12 = CriDisposableObjectManager_TypeInfo;
    }
    if ( !disposable )
      sub_21FFECC(v12, v10);
    refList = v12->static_fields->refList;
    v24.fields.guid = (struct System_Guid_o)disposable->fields;
    *(_QWORD *)&v24.fields.type = (unsigned int)type;
    v24.fields.disposable = disposable;
    v14 = sub_21FFBF4(&v24.fields.disposable, disposable);
    if ( !refList
      || (items = refList->fields._items,
          v17 = Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__Add__,
          v18 = refList->fields._version + 1,
          v29 = v24,
          refList->fields._version = v18,
          !items) )
    {
      sub_21FFECC(v14, v15);
    }
    size = refList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      v23 = *(const MethodInfo_44D8014 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL);
      v30 = v29;
      System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___AddWithResize(refList, &v30, v23);
    }
    else
    {
      guid = v29.fields.guid;
      v21 = *(struct System_Guid_o *)&v29.fields.type;
      v22 = (struct System_Guid_o *)items + 2 * size;
      refList->fields._size = size + 1;
      v22[2] = guid;
      v22[3] = v21;
      sub_21FFBF4(&v22[3].fields._d, 0);
    }
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(*v27, 0);
  }
  else
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5, v6);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_16493/*"[CRIWARE] Internal: Duplicated object GUID"*/, 0);
  }
}


int32_t CriDisposableObjectManager__SearchForDisposable(CriDisposable_o *disposable, const MethodInfo *method)
{
  __int64 v2; // x2
  CriDisposableObjectManager_c *v4; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CriDisposableObjectManager_c *v9; // x0
  struct System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *refList; // x8
  int32_t size; // w20
  CriDisposableObjectManager_c *v12; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v13; // x0
  CriDisposableObjectManager_ObjectRef_o *Item; // x0
  __int64 v15; // x1
  CriDisposableObjectManager_ObjectRef_o v17; // [xsp+0h] [xbp-70h] BYREF
  __int64 v18; // [xsp+20h] [xbp-50h]
  bool *v19; // [xsp+28h] [xbp-48h]
  Il2CppObject **v20; // [xsp+30h] [xbp-40h]
  bool lockTaken[4]; // [xsp+3Ch] [xbp-34h] BYREF
  Il2CppObject *v22; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_59317D0 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    byte_59317D0 = 1;
  }
  v4 = CriDisposableObjectManager_TypeInfo;
  v22 = 0;
  lockTaken[0] = 0;
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, method, v2);
    v4 = CriDisposableObjectManager_TypeInfo;
  }
  static_fields = (Il2CppObject **)v4->static_fields;
  lockTaken[0] = 0;
  v18 = 0;
  v19 = lockTaken;
  v6 = *static_fields;
  v20 = &v22;
  v22 = v6;
  System_Threading_Monitor__Enter_77339928(v6, lockTaken, 0);
  v9 = CriDisposableObjectManager_TypeInfo;
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v7, v8);
    v9 = CriDisposableObjectManager_TypeInfo;
  }
  refList = v9->static_fields->refList;
  if ( !refList )
    sub_21FFECC(v9, v7);
  size = refList->fields._size;
  while ( --size >= 0 )
  {
    v12 = CriDisposableObjectManager_TypeInfo;
    if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v7, v8);
      v12 = CriDisposableObjectManager_TypeInfo;
    }
    v13 = v12->static_fields->refList;
    if ( !v13 )
      sub_21FFECC(0, v7);
    Item = System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
             &v17,
             v13,
             size,
             (const MethodInfo_44D7CB8 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    if ( !disposable )
      sub_21FFECC(Item, v15);
    if ( System_Guid__op_Equality(v17.fields.guid, disposable->fields.guid, 0) )
      goto LABEL_17;
  }
  size = -1;
LABEL_17:
  if ( lockTaken[0] )
    System_Threading_Monitor__Exit(*v20, 0);
  return size;
}


bool CriDisposableObjectManager__Unregister(CriDisposable_o *disposable, const MethodInfo *method)
{
  __int64 v2; // x2
  CriDisposableObjectManager_c *v4; // x0
  Il2CppObject **static_fields; // x8
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t v10; // w19
  CriDisposableObjectManager_c *v11; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *refList; // x0
  bool v13; // w20
  bool lockTaken; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *v16; // [xsp+28h] [xbp-28h]

  if ( (byte_59317D2 & 1) == 0 )
  {
    sub_21FFC50(&CriDisposableObjectManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    byte_59317D2 = 1;
  }
  v4 = CriDisposableObjectManager_TypeInfo;
  v16 = 0;
  lockTaken = 0;
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, method, v2);
    v4 = CriDisposableObjectManager_TypeInfo;
  }
  static_fields = (Il2CppObject **)v4->static_fields;
  lockTaken = 0;
  v16 = *static_fields;
  System_Threading_Monitor__Enter_77339928(v16, &lockTaken, 0);
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v6, v7);
  v10 = CriDisposableObjectManager__SearchForDisposable(disposable, v6);
  if ( v10 < 0 )
  {
    v13 = 0;
  }
  else
  {
    v11 = CriDisposableObjectManager_TypeInfo;
    if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v8, v9);
      v11 = CriDisposableObjectManager_TypeInfo;
    }
    refList = v11->static_fields->refList;
    if ( !refList )
      sub_21FFECC(0, v8);
    System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___RemoveAt(
      refList,
      v10,
      (const MethodInfo_44D99C0 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    v13 = 1;
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(v16, 0);
  return v13;
}


void CriDisposableObjectManager_ObjectRef___ctor(
        CriDisposableObjectManager_ObjectRef_o *this,
        System_Guid_o guid,
        CriDisposable_o *disposable,
        int32_t type,
        const MethodInfo *method)
{
  this->fields.guid = guid;
  this->fields.type = type;
  this->fields.disposable = disposable;
  sub_21FFBF4(&this->fields.disposable, disposable);
}