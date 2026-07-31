void AdjustThreadDispatcher___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19

  if ( (byte_5930403 & 1) == 0 )
  {
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Action___ctor__);
    sub_21FFC50(&System_Collections_Generic_Queue_Action__TypeInfo);
    byte_5930403 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_21FFEBC(System_Collections_Generic_Queue_Action__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_469F6A0 *)Method_System_Collections_Generic_Queue_Action___ctor__);
  AdjustThreadDispatcher_TypeInfo->static_fields->executionQueue = (struct System_Collections_Generic_Queue_Action__o *)v1;
  sub_21FFBF4(AdjustThreadDispatcher_TypeInfo->static_fields, v1);
}


void AdjustThreadDispatcher___ctor(AdjustThreadDispatcher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AdjustThreadDispatcher__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustThreadDispatcher_c *v3; // x0
  UnityEngine_Object_o *instance; // x19
  UnityEngine_GameObject_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  AdjustThreadDispatcher_c *v12; // x8
  Il2CppObject *v13; // x20
  struct AdjustThreadDispatcher_StaticFields *static_fields; // x0
  __int64 v15; // x1
  __int64 v16; // x2

  if ( (byte_5930402 & 1) == 0 )
  {
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_AdjustThreadDispatcher___);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_2270/*"AdjustThreadDispatcher"*/);
    byte_5930402 = 1;
  }
  v3 = AdjustThreadDispatcher_TypeInfo;
  if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v1, v2);
    v3 = AdjustThreadDispatcher_TypeInfo;
  }
  instance = (UnityEngine_Object_o *)v3->static_fields->instance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    v5 = (UnityEngine_GameObject_o *)sub_21FFEBC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v5, (System_String_o *)StringLiteral_2270/*"AdjustThreadDispatcher"*/, 0);
    if ( !v5 )
      sub_21FFECC(v6, v7, v8);
    v9 = UnityEngine_GameObject__AddComponent_object_(
           v5,
           (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_AdjustThreadDispatcher___);
    v12 = AdjustThreadDispatcher_TypeInfo;
    v13 = v9;
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v10, v11);
      v12 = AdjustThreadDispatcher_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->instance = (struct AdjustThreadDispatcher_o *)v13;
    sub_21FFBF4(&static_fields->instance, v13);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)v5, 0);
  }
}


void AdjustThreadDispatcher__RunOnMainThread(System_Action_o *action, const MethodInfo *method)
{
  __int64 v3; // x1
  AdjustThreadDispatcher_c *v4; // x0
  Il2CppObject **static_fields; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  AdjustThreadDispatcher_c *v8; // x0
  System_Collections_Generic_Queue_T__o *executionQueue; // x0
  bool lockTaken; // [xsp+1Ch] [xbp-24h] BYREF
  Il2CppObject *v11; // [xsp+28h] [xbp-18h]

  if ( (byte_5930400 & 1) == 0 )
  {
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo, method);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Action__Enqueue__, v3);
    byte_5930400 = 1;
  }
  v11 = 0;
  lockTaken = 0;
  if ( action )
  {
    v4 = AdjustThreadDispatcher_TypeInfo;
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
    {
      ((void (*)(void))j_il2cpp_runtime_class_init_0)();
      v4 = AdjustThreadDispatcher_TypeInfo;
    }
    static_fields = (Il2CppObject **)v4->static_fields;
    lockTaken = 0;
    v11 = *static_fields;
    System_Threading_Monitor__Enter_77339928(v11, &lockTaken, 0);
    v8 = AdjustThreadDispatcher_TypeInfo;
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v6, v7);
      v8 = AdjustThreadDispatcher_TypeInfo;
    }
    executionQueue = (System_Collections_Generic_Queue_T__o *)v8->static_fields->executionQueue;
    if ( !executionQueue )
      sub_21FFECC(0, v6, v7);
    System_Collections_Generic_Queue_object___Enqueue(
      executionQueue,
      (Il2CppObject *)action,
      (const MethodInfo_469FC6C *)Method_System_Collections_Generic_Queue_Action__Enqueue__);
    if ( lockTaken )
      System_Threading_Monitor__Exit(v11, 0);
  }
}


void AdjustThreadDispatcher__Update(AdjustThreadDispatcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  AdjustThreadDispatcher_c *v5; // x0
  struct System_Collections_Generic_Queue_Action__o *executionQueue; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  AdjustThreadDispatcher_c *v9; // x0
  System_Collections_Generic_Queue_T__o *v10; // x0
  Il2CppObject *v11; // x24
  bool lockTaken; // [xsp+1Ch] [xbp-44h] BYREF
  Il2CppObject *v13; // [xsp+28h] [xbp-38h]

  if ( (byte_5930401 & 1) == 0 )
  {
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo, method);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Action__Dequeue__, v3);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Action__get_Count__, v4);
    byte_5930401 = 1;
  }
  v13 = 0;
  lockTaken = 0;
  while ( 1 )
  {
    v5 = AdjustThreadDispatcher_TypeInfo;
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, method, v2);
      v5 = AdjustThreadDispatcher_TypeInfo;
    }
    executionQueue = v5->static_fields->executionQueue;
    if ( !executionQueue )
      sub_21FFECC(v5, method, v2);
    if ( executionQueue->fields._size <= 0 )
      break;
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method, v2);
      executionQueue = AdjustThreadDispatcher_TypeInfo->static_fields->executionQueue;
    }
    v13 = (Il2CppObject *)executionQueue;
    lockTaken = 0;
    System_Threading_Monitor__Enter_77339928((Il2CppObject *)executionQueue, &lockTaken, 0);
    v9 = AdjustThreadDispatcher_TypeInfo;
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v7, v8);
      v9 = AdjustThreadDispatcher_TypeInfo;
    }
    v10 = (System_Collections_Generic_Queue_T__o *)v9->static_fields->executionQueue;
    if ( !v10 )
      sub_21FFECC(0, v7, v8);
    v11 = System_Collections_Generic_Queue_object___Dequeue(
            v10,
            (const MethodInfo_469FDFC *)Method_System_Collections_Generic_Queue_Action__Dequeue__);
    if ( lockTaken )
      System_Threading_Monitor__Exit(v13, 0);
    if ( v11 )
      ((void (__fastcall *)(Il2CppClass *, void *))v11[1].monitor)(v11[4].klass, v11[2].monitor);
  }
}