void CriMonoBehaviourManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  struct CriMonoBehaviourManager_StaticFields *static_fields; // x0

  if ( (byte_4CE7CFC & 1) == 0 )
  {
    sub_1C7BAE8(&CriMonoBehaviourManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriMonoBehaviour___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CriMonoBehaviour__TypeInfo);
    byte_4CE7CFC = 1;
  }
  CriMonoBehaviourManager_TypeInfo->static_fields->_instance = 0;
  sub_1C7BA8C(CriMonoBehaviourManager_TypeInfo->static_fields, 0);
  v1 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_CriMonoBehaviour__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_CriMonoBehaviour___ctor__);
  static_fields = CriMonoBehaviourManager_TypeInfo->static_fields;
  static_fields->criMonoBehaviourList = (struct System_Collections_Generic_List_CriMonoBehaviour__o *)v1;
  sub_1C7BA8C(&static_fields->criMonoBehaviourList, v1);
}


void CriMonoBehaviourManager___ctor(CriMonoBehaviourManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CriMonoBehaviourManager__Awake(CriMonoBehaviourManager_o *this, const MethodInfo *method)
{
  CriMonoBehaviourManager_c *v3; // x0
  UnityEngine_Object_o *instance; // x20
  CriMonoBehaviourManager_c *v5; // x0

  if ( (byte_4CE7CF9 & 1) == 0 )
  {
    sub_1C7BAE8(&CriMonoBehaviourManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE7CF9 = 1;
  }
  v3 = CriMonoBehaviourManager_TypeInfo;
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
    v3 = CriMonoBehaviourManager_TypeInfo;
  }
  instance = (UnityEngine_Object_o *)v3->static_fields->_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    v5 = CriMonoBehaviourManager_TypeInfo;
    if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
      v5 = CriMonoBehaviourManager_TypeInfo;
    }
    v5->static_fields->_instance = this;
    sub_1C7BA8C(CriMonoBehaviourManager_TypeInfo->static_fields, this);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)this, 0);
  }
}


void CriMonoBehaviourManager__CreateInstance(const MethodInfo *method)
{
  CriMonoBehaviourManager_c *v1; // x0
  UnityEngine_Object_o *instance; // x19
  UnityEngine_GameObject_o *managerObject; // x0
  __int64 v4; // x1

  if ( (byte_4CE7CF5 & 1) == 0 )
  {
    sub_1C7BAE8(&CriMonoBehaviourManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_CriMonoBehaviourManager___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE7CF5 = 1;
  }
  v1 = CriMonoBehaviourManager_TypeInfo;
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
    v1 = CriMonoBehaviourManager_TypeInfo;
  }
  instance = (UnityEngine_Object_o *)v1->static_fields->_instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    managerObject = CriWare_Common__get_managerObject(0);
    if ( !managerObject )
      sub_1C7BD40(0, v4);
    UnityEngine_GameObject__AddComponent_object_(
      managerObject,
      (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_CriMonoBehaviourManager___);
  }
}


int32_t CriMonoBehaviourManager__GetIndex(CriMonoBehaviour_o *criMonoBehaviour, const MethodInfo *method)
{
  int32_t i; // w20
  void *inited; // x0
  System_Collections_Generic_List_object__o *criMonoBehaviourList; // x8

  if ( (byte_4CE7CF6 & 1) == 0 )
  {
    sub_1C7BAE8(&CriMonoBehaviourManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    byte_4CE7CF6 = 1;
  }
  for ( i = 0; ; ++i )
  {
    inited = CriMonoBehaviourManager_TypeInfo;
    if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
      inited = CriMonoBehaviourManager_TypeInfo;
    }
    criMonoBehaviourList = *(System_Collections_Generic_List_object__o **)(*((_QWORD *)inited + 23) + 8LL);
    if ( !criMonoBehaviourList )
LABEL_16:
      sub_1C7BD40(inited, method);
    if ( i >= criMonoBehaviourList->fields._size )
      break;
    if ( !*((_DWORD *)inited + 56) )
    {
      inited = (void *)j_il2cpp_runtime_class_init_0(inited);
      criMonoBehaviourList = (System_Collections_Generic_List_object__o *)CriMonoBehaviourManager_TypeInfo->static_fields->criMonoBehaviourList;
      if ( !criMonoBehaviourList )
        goto LABEL_16;
    }
    inited = System_Collections_Generic_List_object___get_Item(
               criMonoBehaviourList,
               i,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    if ( !inited || !criMonoBehaviour )
      goto LABEL_16;
    if ( System_Guid__op_Equality(*((System_Guid_o *)inited + 2), criMonoBehaviour->fields._guid_k__BackingField, 0) )
      return i;
  }
  return -1;
}


void CriMonoBehaviourManager__LateUpdate(CriMonoBehaviourManager_o *this, const MethodInfo *method)
{
  CriMonoBehaviourManager_c *v2; // x0
  Il2CppObject *criMonoBehaviourList; // x19
  __int64 v4; // x1
  int32_t i; // w20
  CriMonoBehaviourManager_c *v6; // x0
  System_Collections_Generic_List_object__o *v7; // x8
  __int64 inited; // x0
  __int64 v9; // x1
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  bool lockTaken; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CE7CFB & 1) == 0 )
  {
    sub_1C7BAE8(&CriMonoBehaviourManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    byte_4CE7CFB = 1;
  }
  v2 = CriMonoBehaviourManager_TypeInfo;
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
    v2 = CriMonoBehaviourManager_TypeInfo;
  }
  criMonoBehaviourList = (Il2CppObject *)v2->static_fields->criMonoBehaviourList;
  lockTaken = 0;
  System_Threading_Monitor__Enter_66104560(criMonoBehaviourList, &lockTaken, 0);
  for ( i = 0; ; ++i )
  {
    v6 = CriMonoBehaviourManager_TypeInfo;
    if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
      v6 = CriMonoBehaviourManager_TypeInfo;
    }
    v7 = (System_Collections_Generic_List_object__o *)v6->static_fields->criMonoBehaviourList;
    if ( !v7 )
      sub_1C7BD40(v6, v4);
    if ( i >= v7->fields._size )
      break;
    if ( !v6->_2.cctor_finished )
    {
      inited = j_il2cpp_runtime_class_init_0(v6);
      v7 = (System_Collections_Generic_List_object__o *)CriMonoBehaviourManager_TypeInfo->static_fields->criMonoBehaviourList;
      if ( !v7 )
        sub_1C7BD40(inited, v9);
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             i,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    if ( !Item )
      sub_1C7BD40(0, v11);
    ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[7].methodPtr)(
      Item,
      Item->klass->vtable[7].method);
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(criMonoBehaviourList, 0);
}


bool CriMonoBehaviourManager__Register(
        CriMonoBehaviourManager_o *this,
        CriMonoBehaviour_o *criMonoBehaviour,
        const MethodInfo *method)
{
  CriMonoBehaviourManager_c *v4; // x0
  Il2CppObject *criMonoBehaviourList; // x19
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  bool v8; // w21
  CriMonoBehaviourManager_c *v9; // x0
  System_Collections_Generic_List_object__o *v10; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  bool lockTaken; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CE7CF7 & 1) == 0 )
  {
    sub_1C7BAE8(&CriMonoBehaviourManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriMonoBehaviour__Add__);
    sub_1C7BAE8(&StringLiteral_15958/*"[CRIWARE] Internal: Duplicated CriMonoBehaviour GUID"*/);
    byte_4CE7CF7 = 1;
  }
  v4 = CriMonoBehaviourManager_TypeInfo;
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
    v4 = CriMonoBehaviourManager_TypeInfo;
  }
  criMonoBehaviourList = (Il2CppObject *)v4->static_fields->criMonoBehaviourList;
  lockTaken = 0;
  System_Threading_Monitor__Enter_66104560(criMonoBehaviourList, &lockTaken, 0);
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
  if ( CriMonoBehaviourManager__GetIndex(criMonoBehaviour, v6) < 0 )
  {
    v9 = CriMonoBehaviourManager_TypeInfo;
    if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
      v9 = CriMonoBehaviourManager_TypeInfo;
    }
    v10 = (System_Collections_Generic_List_object__o *)v9->static_fields->criMonoBehaviourList;
    if ( !v10 )
      sub_1C7BD40(0, v7);
    items = v10->fields._items;
    v12 = Method_System_Collections_Generic_List_CriMonoBehaviour__Add__;
    ++v10->fields._version;
    if ( !items )
      sub_1C7BD40(v10, v7);
    size = v10->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)criMonoBehaviour,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v14[4] = (Il2CppClass *)criMonoBehaviour;
      sub_1C7BA8C(v14 + 4, criMonoBehaviour);
    }
    v8 = 1;
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_15958/*"[CRIWARE] Internal: Duplicated CriMonoBehaviour GUID"*/, 0);
    v8 = 0;
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(criMonoBehaviourList, 0);
  return v8;
}


bool CriMonoBehaviourManager__UnRegister(CriMonoBehaviour_o *criMonoBehaviour, const MethodInfo *method)
{
  CriMonoBehaviourManager_c *v3; // x0
  Il2CppObject *criMonoBehaviourList; // x19
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  int32_t Index; // w20
  CriMonoBehaviourManager_c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x0
  bool v10; // w21
  bool lockTaken; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CE7CF8 & 1) == 0 )
  {
    sub_1C7BAE8(&CriMonoBehaviourManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriMonoBehaviour__RemoveAt__);
    byte_4CE7CF8 = 1;
  }
  v3 = CriMonoBehaviourManager_TypeInfo;
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
    v3 = CriMonoBehaviourManager_TypeInfo;
  }
  criMonoBehaviourList = (Il2CppObject *)v3->static_fields->criMonoBehaviourList;
  lockTaken = 0;
  System_Threading_Monitor__Enter_66104560(criMonoBehaviourList, &lockTaken, 0);
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
  Index = CriMonoBehaviourManager__GetIndex(criMonoBehaviour, v5);
  if ( Index < 0 )
  {
    v10 = 0;
  }
  else
  {
    v8 = CriMonoBehaviourManager_TypeInfo;
    if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
      v8 = CriMonoBehaviourManager_TypeInfo;
    }
    v9 = (System_Collections_Generic_List_object__o *)v8->static_fields->criMonoBehaviourList;
    if ( !v9 )
      sub_1C7BD40(0, v6);
    System_Collections_Generic_List_object___RemoveAt(
      v9,
      Index,
      (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_CriMonoBehaviour__RemoveAt__);
    v10 = 1;
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(criMonoBehaviourList, 0);
  return v10;
}


void CriMonoBehaviourManager__Update(CriMonoBehaviourManager_o *this, const MethodInfo *method)
{
  CriMonoBehaviourManager_c *v2; // x0
  Il2CppObject *criMonoBehaviourList; // x19
  __int64 v4; // x1
  int32_t i; // w20
  CriMonoBehaviourManager_c *v6; // x0
  System_Collections_Generic_List_object__o *v7; // x8
  __int64 inited; // x0
  __int64 v9; // x1
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  bool lockTaken; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CE7CFA & 1) == 0 )
  {
    sub_1C7BAE8(&CriMonoBehaviourManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    byte_4CE7CFA = 1;
  }
  v2 = CriMonoBehaviourManager_TypeInfo;
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
    v2 = CriMonoBehaviourManager_TypeInfo;
  }
  criMonoBehaviourList = (Il2CppObject *)v2->static_fields->criMonoBehaviourList;
  lockTaken = 0;
  System_Threading_Monitor__Enter_66104560(criMonoBehaviourList, &lockTaken, 0);
  for ( i = 0; ; ++i )
  {
    v6 = CriMonoBehaviourManager_TypeInfo;
    if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
      v6 = CriMonoBehaviourManager_TypeInfo;
    }
    v7 = (System_Collections_Generic_List_object__o *)v6->static_fields->criMonoBehaviourList;
    if ( !v7 )
      sub_1C7BD40(v6, v4);
    if ( i >= v7->fields._size )
      break;
    if ( !v6->_2.cctor_finished )
    {
      inited = j_il2cpp_runtime_class_init_0(v6);
      v7 = (System_Collections_Generic_List_object__o *)CriMonoBehaviourManager_TypeInfo->static_fields->criMonoBehaviourList;
      if ( !v7 )
        sub_1C7BD40(inited, v9);
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             i,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    if ( !Item )
      sub_1C7BD40(0, v11);
    ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[6].methodPtr)(
      Item,
      Item->klass->vtable[6].method);
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(criMonoBehaviourList, 0);
}


CriMonoBehaviourManager_o *CriMonoBehaviourManager__get_instance(const MethodInfo *method)
{
  CriMonoBehaviourManager_c *inited; // x0

  if ( (byte_4CE7CF4 & 1) == 0 )
  {
    sub_1C7BAE8(&CriMonoBehaviourManager_TypeInfo);
    byte_4CE7CF4 = 1;
  }
  inited = CriMonoBehaviourManager_TypeInfo;
  if ( !CriMonoBehaviourManager_TypeInfo->_2.cctor_finished )
    inited = (CriMonoBehaviourManager_c *)j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo);
  CriMonoBehaviourManager__CreateInstance((const MethodInfo *)inited);
  return CriMonoBehaviourManager_TypeInfo->static_fields->_instance;
}