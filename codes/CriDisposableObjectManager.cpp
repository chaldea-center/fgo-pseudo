void CriDisposableObjectManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v1; // x19

  if ( (byte_4CE7CEF & 1) == 0 )
  {
    sub_1C7BAE8(&CriDisposableObjectManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__TypeInfo);
    byte_4CE7CEF = 1;
  }
  v1 = (System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *)sub_1C7BD34(System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__TypeInfo);
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef____ctor(
    v1,
    (const MethodInfo_38DF4FC *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___ctor__);
  CriDisposableObjectManager_TypeInfo->static_fields->refList = v1;
  sub_1C7BA8C(CriDisposableObjectManager_TypeInfo->static_fields, v1);
}


void CriDisposableObjectManager__CallOnModuleFinalization(int32_t type, const MethodInfo *method)
{
  if ( (byte_4CE7CEC & 1) == 0 )
  {
    sub_1C7BAE8(&CriDisposableObjectManager_TypeInfo);
    byte_4CE7CEC = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__DisposeAll(type, method);
}


void CriDisposableObjectManager__DisposeAll(int32_t type, const MethodInfo *method)
{
  CriDisposableObjectManager_c *v3; // x0
  Il2CppObject *refList; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  int32_t NextWithType; // w21
  CriDisposableObjectManager_c *v8; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  CriDisposableObjectManager_c *v12; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v13; // x0
  System_String_o *v14; // x1
  Il2CppObject *v15; // x22
  __int64 v16; // x1
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v17; // x0
  Il2CppObject *obj; // [xsp+0h] [xbp-90h]
  CriDisposableObjectManager_ObjectRef_o v19; // [xsp+8h] [xbp-88h] BYREF
  bool lockTaken; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CE7CEE & 1) == 0 )
  {
    sub_1C7BAE8(&CriDisposableObjectManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    sub_1C7BAE8(&CriDisposableObjectManager_ModuleType_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15960/*"[CRIWARE] Internal: Object disposal(Type:"*/);
    sub_1C7BAE8(&StringLiteral_772/*") not handled by CriDisposableObjectManager; memory leak may have occured."*/);
    byte_4CE7CEE = 1;
  }
  v3 = CriDisposableObjectManager_TypeInfo;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    v3 = CriDisposableObjectManager_TypeInfo;
  }
  refList = (Il2CppObject *)v3->static_fields->refList;
  lockTaken = 0;
  obj = refList;
  System_Threading_Monitor__Enter_66104560(refList, &lockTaken, 0);
  while ( 1 )
  {
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    NextWithType = CriDisposableObjectManager__GetNextWithType(type, v5);
    if ( NextWithType < 0 )
      break;
    v8 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
      v8 = CriDisposableObjectManager_TypeInfo;
    }
    v9 = v8->static_fields->refList;
    if ( !v9 )
      sub_1C7BD40(0, v6);
    System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
      &v19,
      v9,
      NextWithType,
      (const MethodInfo_38DFA60 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    if ( v19.fields.disposable )
    {
      ((void (__fastcall *)(struct CriDisposable_o *, const MethodInfo *, __int64))v19.fields.disposable->klass->vtable._5_Dispose.methodPtr)(
        v19.fields.disposable,
        v19.fields.disposable->klass->vtable._5_Dispose.method,
        v11);
    }
    else
    {
      v12 = CriDisposableObjectManager_TypeInfo;
      if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
        v12 = CriDisposableObjectManager_TypeInfo;
      }
      v13 = v12->static_fields->refList;
      if ( !v13 )
        sub_1C7BD40(0, v10);
      System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
        &v19,
        v13,
        NextWithType,
        (const MethodInfo_38DFA60 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
      *(_QWORD *)&v19.fields.guid.fields._a = CriDisposableObjectManager_ModuleType_TypeInfo;
      *(_QWORD *)&v19.fields.guid.fields._d = -1;
      v14 = System_Enum__ToString((System_Enum_o *)&v19, 0);
      v15 = (Il2CppObject *)System_String__Concat_64215176(
                              (System_String_o *)StringLiteral_15960/*"[CRIWARE] Internal: Object disposal(Type:"*/,
                              v14,
                              (System_String_o *)StringLiteral_772/*") not handled by CriDisposableObjectManager; memory leak may have occured."*/,
                              0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogWarning(v15, 0);
      v17 = CriDisposableObjectManager_TypeInfo->static_fields->refList;
      if ( !v17 )
        sub_1C7BD40(0, v16);
      System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___RemoveAt(
        v17,
        NextWithType,
        (const MethodInfo_38E1858 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    }
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(obj, 0);
}


int32_t CriDisposableObjectManager__GetNextWithType(int32_t type, const MethodInfo *method)
{
  CriDisposableObjectManager_c *v3; // x0
  struct System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *refList; // x8
  int32_t size; // w20
  CriDisposableObjectManager_c *v6; // x0
  CriDisposableObjectManager_ObjectRef_o v8; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4CE7CED & 1) == 0 )
  {
    sub_1C7BAE8(&CriDisposableObjectManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    byte_4CE7CED = 1;
  }
  v3 = CriDisposableObjectManager_TypeInfo;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    v3 = CriDisposableObjectManager_TypeInfo;
  }
  refList = v3->static_fields->refList;
  if ( !refList )
LABEL_15:
    sub_1C7BD40(v3, method);
  size = refList->fields._size;
  while ( --size >= 0 )
  {
    v6 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
      v6 = CriDisposableObjectManager_TypeInfo;
    }
    v3 = (CriDisposableObjectManager_c *)v6->static_fields->refList;
    if ( !v3 )
      goto LABEL_15;
    System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
      &v8,
      (System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *)v3,
      size,
      (const MethodInfo_38DFA60 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    if ( v8.fields.type == type )
      return size;
  }
  return -1;
}


bool CriDisposableObjectManager__IsDisposed(CriDisposable_o *disposable, const MethodInfo *method)
{
  if ( (byte_4CE7CEB & 1) == 0 )
  {
    sub_1C7BAE8(&CriDisposableObjectManager_TypeInfo);
    byte_4CE7CEB = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  return (unsigned int)CriDisposableObjectManager__SearchForDisposable(disposable, method) >> 31;
}


// local variable allocation has failed, the output may be wrong!
void CriDisposableObjectManager__Register(CriDisposable_o *disposable, int32_t type, const MethodInfo *method)
{
  CriDisposableObjectManager_c *v5; // x0
  Il2CppObject *refList; // x19
  __int64 v7; // x1
  CriDisposableObjectManager_c *v8; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  struct CriDisposableObjectManager_ObjectRef_array *items; // x8
  _QWORD *v13; // x10
  __int64 size; // x9
  __int128 v15; // q0
  char *v16; // x8
  const MethodInfo_38DFDD0 *v17; // x2
  CriDisposableObjectManager_ObjectRef_o v18; // [xsp+0h] [xbp-90h] BYREF
  CriDisposableObjectManager_ObjectRef_o v19; // [xsp+20h] [xbp-70h]
  CriDisposableObjectManager_ObjectRef_o v20; // [xsp+40h] [xbp-50h] BYREF
  bool lockTaken; // [xsp+6Ch] [xbp-24h] BYREF

  if ( (byte_4CE7CE9 & 1) == 0 )
  {
    sub_1C7BAE8(&CriDisposableObjectManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__Add__);
    sub_1C7BAE8(&StringLiteral_15959/*"[CRIWARE] Internal: Duplicated object GUID"*/);
    byte_4CE7CE9 = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  if ( CriDisposableObjectManager__SearchForDisposable(disposable, *(const MethodInfo **)&type) < 0 )
  {
    v5 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
      v5 = CriDisposableObjectManager_TypeInfo;
    }
    refList = (Il2CppObject *)v5->static_fields->refList;
    lockTaken = 0;
    System_Threading_Monitor__Enter_66104560(refList, &lockTaken, 0);
    v8 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
      v8 = CriDisposableObjectManager_TypeInfo;
    }
    if ( !disposable )
      sub_1C7BD40(v8, v7);
    v9 = v8->static_fields->refList;
    v18.fields.guid = (struct System_Guid_o)disposable->fields;
    v18.fields.disposable = disposable;
    *(_QWORD *)&v18.fields.type = (unsigned int)type;
    v10 = sub_1C7BA8C(&v18.fields.disposable, disposable);
    if ( !v9 )
      sub_1C7BD40(v10, v11);
    v19 = v18;
    items = v9->fields._items;
    v13 = Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__Add__;
    ++v9->fields._version;
    if ( !items )
      sub_1C7BD40(v10, v11);
    size = v9->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      v17 = *(const MethodInfo_38DFDD0 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL);
      v20 = v19;
      System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___AddWithResize(v9, &v20, v17);
    }
    else
    {
      v9->fields._size = size + 1;
      v15 = *(_OWORD *)&v19.fields.type;
      v16 = (char *)items + 32 * size;
      *((_OWORD *)v16 + 2) = v19.fields.guid;
      *((_OWORD *)v16 + 3) = v15;
      sub_1C7BA8C(v16 + 56, 0);
    }
    if ( lockTaken )
      System_Threading_Monitor__Exit(refList, 0);
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_15959/*"[CRIWARE] Internal: Duplicated object GUID"*/, 0);
  }
}


int32_t CriDisposableObjectManager__SearchForDisposable(CriDisposable_o *disposable, const MethodInfo *method)
{
  CriDisposableObjectManager_c *v3; // x0
  Il2CppObject *refList; // x19
  __int64 v5; // x1
  CriDisposableObjectManager_c *v6; // x0
  struct System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v7; // x8
  int32_t size; // w21
  CriDisposableObjectManager_c *v9; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v10; // x0
  CriDisposableObjectManager_ObjectRef_o *Item; // x0
  __int64 v12; // x1
  CriDisposableObjectManager_ObjectRef_o v14; // [xsp+8h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4CE7CE8 & 1) == 0 )
  {
    sub_1C7BAE8(&CriDisposableObjectManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    byte_4CE7CE8 = 1;
  }
  v3 = CriDisposableObjectManager_TypeInfo;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    v3 = CriDisposableObjectManager_TypeInfo;
  }
  refList = (Il2CppObject *)v3->static_fields->refList;
  lockTaken = 0;
  System_Threading_Monitor__Enter_66104560(refList, &lockTaken, 0);
  v6 = CriDisposableObjectManager_TypeInfo;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    v6 = CriDisposableObjectManager_TypeInfo;
  }
  v7 = v6->static_fields->refList;
  if ( !v7 )
    sub_1C7BD40(v6, v5);
  size = v7->fields._size;
  while ( --size >= 0 )
  {
    v9 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
      v9 = CriDisposableObjectManager_TypeInfo;
    }
    v10 = v9->static_fields->refList;
    if ( !v10 )
      sub_1C7BD40(0, v5);
    Item = System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
             &v14,
             v10,
             size,
             (const MethodInfo_38DFA60 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    if ( !disposable )
      sub_1C7BD40(Item, v12);
    if ( System_Guid__op_Equality(v14.fields.guid, disposable->fields.guid, 0) )
      goto LABEL_17;
  }
  size = -1;
LABEL_17:
  if ( lockTaken )
    System_Threading_Monitor__Exit(refList, 0);
  return size;
}


bool CriDisposableObjectManager__Unregister(CriDisposable_o *disposable, const MethodInfo *method)
{
  CriDisposableObjectManager_c *v3; // x0
  Il2CppObject *refList; // x19
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  int32_t v7; // w20
  CriDisposableObjectManager_c *v8; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v9; // x0
  bool v10; // w21
  bool lockTaken; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CE7CEA & 1) == 0 )
  {
    sub_1C7BAE8(&CriDisposableObjectManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    byte_4CE7CEA = 1;
  }
  v3 = CriDisposableObjectManager_TypeInfo;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    v3 = CriDisposableObjectManager_TypeInfo;
  }
  refList = (Il2CppObject *)v3->static_fields->refList;
  lockTaken = 0;
  System_Threading_Monitor__Enter_66104560(refList, &lockTaken, 0);
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  v7 = CriDisposableObjectManager__SearchForDisposable(disposable, v5);
  if ( v7 < 0 )
  {
    v10 = 0;
  }
  else
  {
    v8 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
      v8 = CriDisposableObjectManager_TypeInfo;
    }
    v9 = v8->static_fields->refList;
    if ( !v9 )
      sub_1C7BD40(0, v6);
    System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___RemoveAt(
      v9,
      v7,
      (const MethodInfo_38E1858 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    v10 = 1;
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(refList, 0);
  return v10;
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
  sub_1C7BA8C(&this->fields.disposable, disposable);
}