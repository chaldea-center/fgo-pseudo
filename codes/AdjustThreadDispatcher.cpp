void AdjustThreadDispatcher___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19

  if ( (byte_4CBF7C3 & 1) == 0 )
  {
    sub_1C713B0(&AdjustThreadDispatcher_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Queue_Action___ctor__);
    sub_1C713B0(&System_Collections_Generic_Queue_Action__TypeInfo);
    byte_4CBF7C3 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1C715FC(System_Collections_Generic_Queue_Action__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_39BABA8 *)Method_System_Collections_Generic_Queue_Action___ctor__);
  AdjustThreadDispatcher_TypeInfo->static_fields->executionQueue = (struct System_Collections_Generic_Queue_Action__o *)v1;
  sub_1C71354(AdjustThreadDispatcher_TypeInfo->static_fields, v1);
}


void AdjustThreadDispatcher___ctor(AdjustThreadDispatcher_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AdjustThreadDispatcher__Initialize(const MethodInfo *method)
{
  AdjustThreadDispatcher_c *v1; // x0
  UnityEngine_Object_o *instance; // x19
  UnityEngine_GameObject_o *v3; // x19
  Il2CppObject *v4; // x0
  AdjustThreadDispatcher_c *v5; // x8
  Il2CppObject *v6; // x20
  struct AdjustThreadDispatcher_StaticFields *static_fields; // x0

  if ( (byte_4CBF7C2 & 1) == 0 )
  {
    sub_1C713B0(&AdjustThreadDispatcher_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_AddComponent_AdjustThreadDispatcher___);
    sub_1C713B0(&UnityEngine_GameObject_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_2165/*"AdjustThreadDispatcher"*/);
    byte_4CBF7C2 = 1;
  }
  v1 = AdjustThreadDispatcher_TypeInfo;
  if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    v1 = AdjustThreadDispatcher_TypeInfo;
  }
  instance = (UnityEngine_Object_o *)v1->static_fields->instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    v3 = (UnityEngine_GameObject_o *)sub_1C715FC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v3, (System_String_o *)StringLiteral_2165/*"AdjustThreadDispatcher"*/, 0);
    if ( !v3 )
      sub_1C71608();
    v4 = UnityEngine_GameObject__AddComponent_object_(
           v3,
           (const MethodInfo_31A2DE8 *)Method_UnityEngine_GameObject_AddComponent_AdjustThreadDispatcher___);
    v5 = AdjustThreadDispatcher_TypeInfo;
    v6 = v4;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
      v5 = AdjustThreadDispatcher_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->instance = (struct AdjustThreadDispatcher_o *)v6;
    sub_1C71354(&static_fields->instance, v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)v3, 0);
  }
}


void AdjustThreadDispatcher__RunOnMainThread(System_Action_o *action, const MethodInfo *method)
{
  __int64 v3; // x1
  AdjustThreadDispatcher_c *v4; // x0
  Il2CppObject *executionQueue; // x19
  AdjustThreadDispatcher_c *v6; // x0
  System_Collections_Generic_Queue_T__o *v7; // x0
  bool lockTaken; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CBF7C0 & 1) == 0 )
  {
    sub_1C713B0(&AdjustThreadDispatcher_TypeInfo, method);
    sub_1C713B0(&Method_System_Collections_Generic_Queue_Action__Enqueue__, v3);
    byte_4CBF7C0 = 1;
  }
  if ( action )
  {
    v4 = AdjustThreadDispatcher_TypeInfo;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v4 = AdjustThreadDispatcher_TypeInfo;
    }
    executionQueue = (Il2CppObject *)v4->static_fields->executionQueue;
    lockTaken = 0;
    System_Threading_Monitor__Enter_65959364(executionQueue, &lockTaken, 0);
    v6 = AdjustThreadDispatcher_TypeInfo;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v6 = AdjustThreadDispatcher_TypeInfo;
    }
    v7 = (System_Collections_Generic_Queue_T__o *)v6->static_fields->executionQueue;
    if ( !v7 )
      sub_1C71608();
    System_Collections_Generic_Queue_object___Enqueue(
      v7,
      (Il2CppObject *)action,
      (const MethodInfo_39BB170 *)Method_System_Collections_Generic_Queue_Action__Enqueue__);
    if ( lockTaken )
      System_Threading_Monitor__Exit(executionQueue, 0);
  }
}


void AdjustThreadDispatcher__Update(AdjustThreadDispatcher_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  AdjustThreadDispatcher_c *v4; // x0
  struct System_Collections_Generic_Queue_Action__o *executionQueue; // x8
  Il2CppObject *v6; // x19
  AdjustThreadDispatcher_c *v7; // x0
  System_Collections_Generic_Queue_T__o *v8; // x0
  Il2CppObject *v9; // x24
  bool lockTaken; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CBF7C1 & 1) == 0 )
  {
    sub_1C713B0(&AdjustThreadDispatcher_TypeInfo, method);
    sub_1C713B0(&Method_System_Collections_Generic_Queue_Action__Dequeue__, v2);
    sub_1C713B0(&Method_System_Collections_Generic_Queue_Action__get_Count__, v3);
    byte_4CBF7C1 = 1;
  }
  lockTaken = 0;
  while ( 1 )
  {
    v4 = AdjustThreadDispatcher_TypeInfo;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v4 = AdjustThreadDispatcher_TypeInfo;
    }
    executionQueue = v4->static_fields->executionQueue;
    if ( !executionQueue )
      sub_1C71608();
    if ( executionQueue->fields._size <= 0 )
      break;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v4 = AdjustThreadDispatcher_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->executionQueue;
    lockTaken = 0;
    System_Threading_Monitor__Enter_65959364(v6, &lockTaken, 0);
    v7 = AdjustThreadDispatcher_TypeInfo;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v7 = AdjustThreadDispatcher_TypeInfo;
    }
    v8 = (System_Collections_Generic_Queue_T__o *)v7->static_fields->executionQueue;
    if ( !v8 )
      sub_1C71608();
    v9 = System_Collections_Generic_Queue_object___Dequeue(
           v8,
           (const MethodInfo_39BB300 *)Method_System_Collections_Generic_Queue_Action__Dequeue__);
    if ( lockTaken )
      System_Threading_Monitor__Exit(v6, 0);
    if ( v9 )
      ((void (__fastcall *)(Il2CppClass *, void *))v9[1].monitor)(v9[4].klass, v9[2].monitor);
  }
}