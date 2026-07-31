void CriMonoBehaviourManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  struct CriMonoBehaviourManager_StaticFields *static_fields; // x0

  if ( (byte_59317E4 & 1) == 0 )
  {
    sub_21FFC50(&CriMonoBehaviourManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriMonoBehaviour___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_CriMonoBehaviour__TypeInfo);
    byte_59317E4 = 1;
  }
  CriMonoBehaviourManager_TypeInfo->static_fields->_instance = 0;
  sub_21FFBF4(CriMonoBehaviourManager_TypeInfo->static_fields, 0);
  v1 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CriMonoBehaviour__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CriMonoBehaviour___ctor__);
  static_fields = CriMonoBehaviourManager_TypeInfo->static_fields;
  static_fields->criMonoBehaviourList = (struct System_Collections_Generic_List_CriMonoBehaviour__o *)v1;
  sub_21FFBF4(&static_fields->criMonoBehaviourList, v1);
}


void CriMonoBehaviourManager___ctor(CriMonoBehaviourManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CriMonoBehaviourManager__Awake(CriMonoBehaviourManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CriMonoBehaviourManager_c *v4; // x0
  UnityEngine_Object_o *instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  CriMonoBehaviourManager_c *v8; // x0

  if ( (byte_59317E1 & 1) == 0 )
  {
    sub_21FFC50(&CriMonoBehaviourManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59317E1 = 1;
  }
  v4 = CriMonoBehaviourManager_TypeInfo;
  if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, method, v2);
    v4 = CriMonoBehaviourManager_TypeInfo;
  }
  instance = (UnityEngine_Object_o *)v4->static_fields->_instance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    v8 = CriMonoBehaviourManager_TypeInfo;
    if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, v6, v7);
      v8 = CriMonoBehaviourManager_TypeInfo;
    }
    v8->static_fields->_instance = this;
    sub_21FFBF4(CriMonoBehaviourManager_TypeInfo->static_fields, this);
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)this, 0);
  }
}


void CriMonoBehaviourManager__CreateInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CriMonoBehaviourManager_c *v3; // x0
  UnityEngine_Object_o *instance; // x19
  UnityEngine_GameObject_o *managerObject; // x0
  __int64 v6; // x1

  if ( (byte_59317DD & 1) == 0 )
  {
    sub_21FFC50(&CriMonoBehaviourManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_CriMonoBehaviourManager___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59317DD = 1;
  }
  v3 = CriMonoBehaviourManager_TypeInfo;
  if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, v1, v2);
    v3 = CriMonoBehaviourManager_TypeInfo;
  }
  instance = (UnityEngine_Object_o *)v3->static_fields->_instance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    managerObject = CriWare_Common__get_managerObject(0);
    if ( !managerObject )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__AddComponent_object_(
      managerObject,
      (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_CriMonoBehaviourManager___);
  }
}


int32_t CriMonoBehaviourManager__GetIndex(CriMonoBehaviour_o *criMonoBehaviour, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t i; // w20
  void *inited; // x0
  System_Collections_Generic_List_object__o *criMonoBehaviourList; // x8

  if ( (byte_59317DE & 1) == 0 )
  {
    sub_21FFC50(&CriMonoBehaviourManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    byte_59317DE = 1;
  }
  for ( i = 0; ; ++i )
  {
    inited = CriMonoBehaviourManager_TypeInfo;
    if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, method, v2);
      inited = CriMonoBehaviourManager_TypeInfo;
    }
    criMonoBehaviourList = *(System_Collections_Generic_List_object__o **)(*((_QWORD *)inited + 23) + 8LL);
    if ( !criMonoBehaviourList )
LABEL_16:
      sub_21FFECC(inited, method);
    if ( i >= criMonoBehaviourList->fields._size )
      break;
    if ( !*((_DWORD *)inited + 57) )
    {
      inited = (void *)j_il2cpp_runtime_class_init_0(inited, method, v2);
      criMonoBehaviourList = (System_Collections_Generic_List_object__o *)CriMonoBehaviourManager_TypeInfo->static_fields->criMonoBehaviourList;
      if ( !criMonoBehaviourList )
        goto LABEL_16;
    }
    inited = System_Collections_Generic_List_object___get_Item(
               criMonoBehaviourList,
               i,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    if ( !inited || !criMonoBehaviour )
      goto LABEL_16;
    if ( System_Guid__op_Equality(*((System_Guid_o *)inited + 2), criMonoBehaviour->fields._guid_k__BackingField, 0) )
      return i;
  }
  return -1;
}


void CriMonoBehaviourManager__LateUpdate(CriMonoBehaviourManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CriMonoBehaviourManager_c *v3; // x0
  struct CriMonoBehaviourManager_StaticFields *static_fields; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t i; // w19
  CriMonoBehaviourManager_c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x8
  __int64 inited; // x0
  __int64 v11; // x1
  Il2CppObject *Item; // x0
  __int64 v13; // x1
  bool lockTaken; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *criMonoBehaviourList; // [xsp+28h] [xbp-28h]

  if ( (byte_59317E3 & 1) == 0 )
  {
    sub_21FFC50(&CriMonoBehaviourManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    byte_59317E3 = 1;
  }
  v3 = CriMonoBehaviourManager_TypeInfo;
  criMonoBehaviourList = 0;
  lockTaken = 0;
  if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, method, v2);
    v3 = CriMonoBehaviourManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  lockTaken = 0;
  criMonoBehaviourList = (Il2CppObject *)static_fields->criMonoBehaviourList;
  System_Threading_Monitor__Enter_77339928(criMonoBehaviourList, &lockTaken, 0);
  for ( i = 0; ; ++i )
  {
    v8 = CriMonoBehaviourManager_TypeInfo;
    if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, v5, v6);
      v8 = CriMonoBehaviourManager_TypeInfo;
    }
    v9 = (System_Collections_Generic_List_object__o *)v8->static_fields->criMonoBehaviourList;
    if ( !v9 )
      sub_21FFECC(v8, v5);
    if ( i >= v9->fields._size )
      break;
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      inited = j_il2cpp_runtime_class_init_0(v8, v5, v6);
      v9 = (System_Collections_Generic_List_object__o *)CriMonoBehaviourManager_TypeInfo->static_fields->criMonoBehaviourList;
      if ( !v9 )
        sub_21FFECC(inited, v11);
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v9,
             i,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    if ( !Item )
      sub_21FFECC(0, v13);
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
  struct CriMonoBehaviourManager_StaticFields *static_fields; // x8
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  bool v10; // w20
  CriMonoBehaviourManager_c *v11; // x0
  System_Collections_Generic_List_object__o *v12; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8
  bool lockTaken; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *criMonoBehaviourList; // [xsp+28h] [xbp-28h]

  if ( (byte_59317DF & 1) == 0 )
  {
    sub_21FFC50(&CriMonoBehaviourManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriMonoBehaviour__Add__);
    sub_21FFC50(&StringLiteral_16492/*"[CRIWARE] Internal: Duplicated CriMonoBehaviour GUID"*/);
    byte_59317DF = 1;
  }
  v4 = CriMonoBehaviourManager_TypeInfo;
  criMonoBehaviourList = 0;
  lockTaken = 0;
  if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, criMonoBehaviour, method);
    v4 = CriMonoBehaviourManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  lockTaken = 0;
  criMonoBehaviourList = (Il2CppObject *)static_fields->criMonoBehaviourList;
  System_Threading_Monitor__Enter_77339928(criMonoBehaviourList, &lockTaken, 0);
  if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, v6, v7);
  if ( CriMonoBehaviourManager__GetIndex(criMonoBehaviour, v6) < 0 )
  {
    v11 = CriMonoBehaviourManager_TypeInfo;
    if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, v8, v9);
      v11 = CriMonoBehaviourManager_TypeInfo;
    }
    v12 = (System_Collections_Generic_List_object__o *)v11->static_fields->criMonoBehaviourList;
    if ( !v12
      || (items = v12->fields._items,
          v14 = Method_System_Collections_Generic_List_CriMonoBehaviour__Add__,
          ++v12->fields._version,
          !items) )
    {
      sub_21FFECC(v12, v8);
    }
    size = v12->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)criMonoBehaviour,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v16[4] = (Il2CppClass *)criMonoBehaviour;
      sub_21FFBF4(v16 + 4, criMonoBehaviour);
    }
    v10 = 1;
  }
  else
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v8, v9);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_16492/*"[CRIWARE] Internal: Duplicated CriMonoBehaviour GUID"*/, 0);
    v10 = 0;
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(criMonoBehaviourList, 0);
  return v10;
}


bool CriMonoBehaviourManager__UnRegister(CriMonoBehaviour_o *criMonoBehaviour, const MethodInfo *method)
{
  __int64 v2; // x2
  CriMonoBehaviourManager_c *v4; // x0
  struct CriMonoBehaviourManager_StaticFields *static_fields; // x8
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t Index; // w19
  CriMonoBehaviourManager_c *v11; // x0
  System_Collections_Generic_List_object__o *v12; // x0
  bool v13; // w20
  bool lockTaken; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *criMonoBehaviourList; // [xsp+28h] [xbp-28h]

  if ( (byte_59317E0 & 1) == 0 )
  {
    sub_21FFC50(&CriMonoBehaviourManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriMonoBehaviour__RemoveAt__);
    byte_59317E0 = 1;
  }
  v4 = CriMonoBehaviourManager_TypeInfo;
  criMonoBehaviourList = 0;
  lockTaken = 0;
  if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, method, v2);
    v4 = CriMonoBehaviourManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  lockTaken = 0;
  criMonoBehaviourList = (Il2CppObject *)static_fields->criMonoBehaviourList;
  System_Threading_Monitor__Enter_77339928(criMonoBehaviourList, &lockTaken, 0);
  if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, v6, v7);
  Index = CriMonoBehaviourManager__GetIndex(criMonoBehaviour, v6);
  if ( Index < 0 )
  {
    v13 = 0;
  }
  else
  {
    v11 = CriMonoBehaviourManager_TypeInfo;
    if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, v8, v9);
      v11 = CriMonoBehaviourManager_TypeInfo;
    }
    v12 = (System_Collections_Generic_List_object__o *)v11->static_fields->criMonoBehaviourList;
    if ( !v12 )
      sub_21FFECC(0, v8);
    System_Collections_Generic_List_object___RemoveAt(
      v12,
      Index,
      (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_CriMonoBehaviour__RemoveAt__);
    v13 = 1;
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(criMonoBehaviourList, 0);
  return v13;
}


void CriMonoBehaviourManager__Update(CriMonoBehaviourManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CriMonoBehaviourManager_c *v3; // x0
  struct CriMonoBehaviourManager_StaticFields *static_fields; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t i; // w19
  CriMonoBehaviourManager_c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x8
  __int64 inited; // x0
  __int64 v11; // x1
  Il2CppObject *Item; // x0
  __int64 v13; // x1
  bool lockTaken; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *criMonoBehaviourList; // [xsp+28h] [xbp-28h]

  if ( (byte_59317E2 & 1) == 0 )
  {
    sub_21FFC50(&CriMonoBehaviourManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    byte_59317E2 = 1;
  }
  v3 = CriMonoBehaviourManager_TypeInfo;
  criMonoBehaviourList = 0;
  lockTaken = 0;
  if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, method, v2);
    v3 = CriMonoBehaviourManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  lockTaken = 0;
  criMonoBehaviourList = (Il2CppObject *)static_fields->criMonoBehaviourList;
  System_Threading_Monitor__Enter_77339928(criMonoBehaviourList, &lockTaken, 0);
  for ( i = 0; ; ++i )
  {
    v8 = CriMonoBehaviourManager_TypeInfo;
    if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, v5, v6);
      v8 = CriMonoBehaviourManager_TypeInfo;
    }
    v9 = (System_Collections_Generic_List_object__o *)v8->static_fields->criMonoBehaviourList;
    if ( !v9 )
      sub_21FFECC(v8, v5);
    if ( i >= v9->fields._size )
      break;
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      inited = j_il2cpp_runtime_class_init_0(v8, v5, v6);
      v9 = (System_Collections_Generic_List_object__o *)CriMonoBehaviourManager_TypeInfo->static_fields->criMonoBehaviourList;
      if ( !v9 )
        sub_21FFECC(inited, v11);
    }
    Item = System_Collections_Generic_List_object___get_Item(
             v9,
             i,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CriMonoBehaviour__get_Item__);
    if ( !Item )
      sub_21FFECC(0, v13);
    ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[6].methodPtr)(
      Item,
      Item->klass->vtable[6].method);
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(criMonoBehaviourList, 0);
}


CriMonoBehaviourManager_o *CriMonoBehaviourManager__get_instance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CriMonoBehaviourManager_c *inited; // x0

  if ( (byte_59317DC & 1) == 0 )
  {
    sub_21FFC50(&CriMonoBehaviourManager_TypeInfo);
    byte_59317DC = 1;
  }
  inited = CriMonoBehaviourManager_TypeInfo;
  if ( !*(&CriMonoBehaviourManager_TypeInfo->_2.cctor_finished + 1) )
    inited = (CriMonoBehaviourManager_c *)j_il2cpp_runtime_class_init_0(CriMonoBehaviourManager_TypeInfo, v1, v2);
  CriMonoBehaviourManager__CreateInstance((const MethodInfo *)inited);
  return CriMonoBehaviourManager_TypeInfo->static_fields->_instance;
}