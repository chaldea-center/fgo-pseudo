void CriDisposableObjectManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v1; // x19

  if ( (byte_4C3C7DF & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___ctor__);
    sub_1C37058(&System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__TypeInfo);
    byte_4C3C7DF = 1;
  }
  v1 = (System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *)sub_1C372A4(System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__TypeInfo);
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef____ctor(
    v1,
    (const MethodInfo_3845CA8 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___ctor__);
  CriDisposableObjectManager_TypeInfo->static_fields->refList = v1;
  sub_1C36FFC(CriDisposableObjectManager_TypeInfo->static_fields, v1);
}


void CriDisposableObjectManager__CallOnModuleFinalization(int32_t type, const MethodInfo *method)
{
  if ( (byte_4C3C7DC & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    byte_4C3C7DC = 1;
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
  int32_t NextWithType; // w21
  CriDisposableObjectManager_c *v7; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v8; // x0
  __int64 v9; // x2
  CriDisposableObjectManager_c *v10; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v11; // x0
  System_String_o *v12; // x1
  Il2CppObject *v13; // x22
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v14; // x0
  Il2CppObject *obj; // [xsp+0h] [xbp-90h]
  CriDisposableObjectManager_ObjectRef_o v16; // [xsp+8h] [xbp-88h] BYREF
  bool lockTaken; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C3C7DE & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    sub_1C37058(&CriDisposableObjectManager_ModuleType_TypeInfo);
    sub_1C37058(&StringLiteral_15905/*"[CRIWARE] Internal: Object disposal(Type:"*/);
    sub_1C37058(&StringLiteral_774/*") not handled by CriDisposableObjectManager; memory leak may have occured."*/);
    byte_4C3C7DE = 1;
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
  System_Threading_Monitor__Enter_65491060(refList, &lockTaken, 0);
  while ( 1 )
  {
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    NextWithType = CriDisposableObjectManager__GetNextWithType(type, v5);
    if ( NextWithType < 0 )
      break;
    v7 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
      v7 = CriDisposableObjectManager_TypeInfo;
    }
    v8 = v7->static_fields->refList;
    if ( !v8 )
      sub_1C372B4(0);
    System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
      &v16,
      v8,
      NextWithType,
      (const MethodInfo_384620C *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    if ( v16.fields.disposable )
    {
      ((void (__fastcall *)(struct CriDisposable_o *, const MethodInfo *, __int64))v16.fields.disposable->klass->vtable._5_Dispose.methodPtr)(
        v16.fields.disposable,
        v16.fields.disposable->klass->vtable._5_Dispose.method,
        v9);
    }
    else
    {
      v10 = CriDisposableObjectManager_TypeInfo;
      if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
        v10 = CriDisposableObjectManager_TypeInfo;
      }
      v11 = v10->static_fields->refList;
      if ( !v11 )
        sub_1C372B4(0);
      System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
        &v16,
        v11,
        NextWithType,
        (const MethodInfo_384620C *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
      *(_QWORD *)&v16.fields.guid.fields._a = CriDisposableObjectManager_ModuleType_TypeInfo;
      *(_QWORD *)&v16.fields.guid.fields._d = -1;
      v12 = System_Enum__ToString((System_Enum_o *)&v16, 0);
      v13 = (Il2CppObject *)System_String__Concat_63599904(
                              (System_String_o *)StringLiteral_15905/*"[CRIWARE] Internal: Object disposal(Type:"*/,
                              v12,
                              (System_String_o *)StringLiteral_774/*") not handled by CriDisposableObjectManager; memory leak may have occured."*/,
                              0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogWarning(v13, 0);
      v14 = CriDisposableObjectManager_TypeInfo->static_fields->refList;
      if ( !v14 )
        sub_1C372B4(0);
      System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___RemoveAt(
        v14,
        NextWithType,
        (const MethodInfo_3848004 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
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

  if ( (byte_4C3C7DD & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    byte_4C3C7DD = 1;
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
    sub_1C372B4(v3);
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
      (const MethodInfo_384620C *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    if ( v8.fields.type == type )
      return size;
  }
  return -1;
}


bool CriDisposableObjectManager__IsDisposed(CriDisposable_o *disposable, const MethodInfo *method)
{
  if ( (byte_4C3C7DB & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    byte_4C3C7DB = 1;
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
  CriDisposableObjectManager_c *v7; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v8; // x22
  __int64 v9; // x0
  struct CriDisposableObjectManager_ObjectRef_array *items; // x8
  _QWORD *v11; // x10
  __int64 size; // x9
  __int128 v13; // q0
  char *v14; // x8
  const MethodInfo_384657C *v15; // x2
  CriDisposableObjectManager_ObjectRef_o v16; // [xsp+0h] [xbp-90h] BYREF
  CriDisposableObjectManager_ObjectRef_o v17; // [xsp+20h] [xbp-70h]
  CriDisposableObjectManager_ObjectRef_o v18; // [xsp+40h] [xbp-50h] BYREF
  bool lockTaken; // [xsp+6Ch] [xbp-24h] BYREF

  if ( (byte_4C3C7D9 & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__Add__);
    sub_1C37058(&StringLiteral_15904/*"[CRIWARE] Internal: Duplicated object GUID"*/);
    byte_4C3C7D9 = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0();
  if ( CriDisposableObjectManager__SearchForDisposable(disposable, *(const MethodInfo **)&type) < 0 )
  {
    v5 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v5 = CriDisposableObjectManager_TypeInfo;
    }
    refList = (Il2CppObject *)v5->static_fields->refList;
    lockTaken = 0;
    System_Threading_Monitor__Enter_65491060(refList, &lockTaken, 0);
    v7 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v7 = CriDisposableObjectManager_TypeInfo;
    }
    if ( !disposable )
      sub_1C372B4(v7);
    v8 = v7->static_fields->refList;
    v16.fields.guid = (struct System_Guid_o)disposable->fields;
    v16.fields.disposable = disposable;
    *(_QWORD *)&v16.fields.type = (unsigned int)type;
    v9 = sub_1C36FFC(&v16.fields.disposable, disposable);
    if ( !v8 )
      sub_1C372B4(v9);
    v17 = v16;
    items = v8->fields._items;
    v11 = Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__Add__;
    ++v8->fields._version;
    if ( !items )
      sub_1C372B4(v9);
    size = v8->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      v15 = *(const MethodInfo_384657C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL);
      v18 = v17;
      System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___AddWithResize(v8, &v18, v15);
    }
    else
    {
      v8->fields._size = size + 1;
      v13 = *(_OWORD *)&v17.fields.type;
      v14 = (char *)items + 32 * size;
      *((_OWORD *)v14 + 2) = v17.fields.guid;
      *((_OWORD *)v14 + 3) = v13;
      sub_1C36FFC(v14 + 56, 0);
    }
    if ( lockTaken )
      System_Threading_Monitor__Exit(refList, 0);
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0();
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_15904/*"[CRIWARE] Internal: Duplicated object GUID"*/, 0);
  }
}


int32_t CriDisposableObjectManager__SearchForDisposable(CriDisposable_o *disposable, const MethodInfo *method)
{
  CriDisposableObjectManager_c *v3; // x0
  Il2CppObject *refList; // x19
  CriDisposableObjectManager_c *v5; // x0
  struct System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v6; // x8
  int32_t size; // w21
  CriDisposableObjectManager_c *v8; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v9; // x0
  CriDisposableObjectManager_ObjectRef_o *Item; // x0
  CriDisposableObjectManager_ObjectRef_o v12; // [xsp+8h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4C3C7D8 & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    byte_4C3C7D8 = 1;
  }
  v3 = CriDisposableObjectManager_TypeInfo;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    v3 = CriDisposableObjectManager_TypeInfo;
  }
  refList = (Il2CppObject *)v3->static_fields->refList;
  lockTaken = 0;
  System_Threading_Monitor__Enter_65491060(refList, &lockTaken, 0);
  v5 = CriDisposableObjectManager_TypeInfo;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    v5 = CriDisposableObjectManager_TypeInfo;
  }
  v6 = v5->static_fields->refList;
  if ( !v6 )
    sub_1C372B4(v5);
  size = v6->fields._size;
  while ( --size >= 0 )
  {
    v8 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
      v8 = CriDisposableObjectManager_TypeInfo;
    }
    v9 = v8->static_fields->refList;
    if ( !v9 )
      sub_1C372B4(0);
    Item = System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___get_Item(
             &v12,
             v9,
             size,
             (const MethodInfo_384620C *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__get_Item__);
    if ( !disposable )
      sub_1C372B4(Item);
    if ( System_Guid__op_Equality(v12.fields.guid, disposable->fields.guid, 0) )
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
  int32_t v6; // w20
  CriDisposableObjectManager_c *v7; // x0
  System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__o *v8; // x0
  bool v9; // w21
  bool lockTaken; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3C7DA & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    byte_4C3C7DA = 1;
  }
  v3 = CriDisposableObjectManager_TypeInfo;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0();
    v3 = CriDisposableObjectManager_TypeInfo;
  }
  refList = (Il2CppObject *)v3->static_fields->refList;
  lockTaken = 0;
  System_Threading_Monitor__Enter_65491060(refList, &lockTaken, 0);
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0();
  v6 = CriDisposableObjectManager__SearchForDisposable(disposable, v5);
  if ( v6 < 0 )
  {
    v9 = 0;
  }
  else
  {
    v7 = CriDisposableObjectManager_TypeInfo;
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v7 = CriDisposableObjectManager_TypeInfo;
    }
    v8 = v7->static_fields->refList;
    if ( !v8 )
      sub_1C372B4(0);
    System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef___RemoveAt(
      v8,
      v6,
      (const MethodInfo_3848004 *)Method_System_Collections_Generic_List_CriDisposableObjectManager_ObjectRef__RemoveAt__);
    v9 = 1;
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(refList, 0);
  return v9;
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
  sub_1C36FFC(&this->fields.disposable, disposable);
}