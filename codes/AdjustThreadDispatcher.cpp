void AdjustThreadDispatcher___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19

  if ( (byte_4D249D3 & 1) == 0 )
  {
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Action___ctor__);
    sub_1C94098(&System_Collections_Generic_Queue_Action__TypeInfo);
    byte_4D249D3 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1C942E4(System_Collections_Generic_Queue_Action__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_3A15C30 *)Method_System_Collections_Generic_Queue_Action___ctor__);
  AdjustThreadDispatcher_TypeInfo->static_fields->executionQueue = (struct System_Collections_Generic_Queue_Action__o *)v1;
  sub_1C9403C(AdjustThreadDispatcher_TypeInfo->static_fields, v1);
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

  if ( (byte_4D249D2 & 1) == 0 )
  {
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_AdjustThreadDispatcher___);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_2167/*"AdjustThreadDispatcher"*/);
    byte_4D249D2 = 1;
  }
  v1 = AdjustThreadDispatcher_TypeInfo;
  if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
  {
    ((void (*)(void))j_il2cpp_runtime_class_init_0)();
    v1 = AdjustThreadDispatcher_TypeInfo;
  }
  instance = (UnityEngine_Object_o *)v1->static_fields->instance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(instance, 0, 0) )
  {
    v3 = (UnityEngine_GameObject_o *)sub_1C942E4(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v3, (System_String_o *)StringLiteral_2167/*"AdjustThreadDispatcher"*/, 0);
    if ( !v3 )
      sub_1C942F0();
    v4 = UnityEngine_GameObject__AddComponent_object_(
           v3,
           (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_AdjustThreadDispatcher___);
    v5 = AdjustThreadDispatcher_TypeInfo;
    v6 = v4;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
      v5 = AdjustThreadDispatcher_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->instance = (struct AdjustThreadDispatcher_o *)v6;
    sub_1C9403C(&static_fields->instance, v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)v3, 0);
  }
}


void AdjustThreadDispatcher__RunOnMainThread(System_Action_o *action, const MethodInfo *method)
{
  AdjustThreadDispatcher_c *v3; // x0
  Il2CppObject *executionQueue; // x19
  AdjustThreadDispatcher_c *v5; // x0
  System_Collections_Generic_Queue_T__o *v6; // x0
  bool lockTaken; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D249D0 & 1) == 0 )
  {
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Action__Enqueue__);
    byte_4D249D0 = 1;
  }
  if ( action )
  {
    v3 = AdjustThreadDispatcher_TypeInfo;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v3 = AdjustThreadDispatcher_TypeInfo;
    }
    executionQueue = (Il2CppObject *)v3->static_fields->executionQueue;
    lockTaken = 0;
    System_Threading_Monitor__Enter_66345384(executionQueue, &lockTaken, 0);
    v5 = AdjustThreadDispatcher_TypeInfo;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v5 = AdjustThreadDispatcher_TypeInfo;
    }
    v6 = (System_Collections_Generic_Queue_T__o *)v5->static_fields->executionQueue;
    if ( !v6 )
      sub_1C942F0();
    System_Collections_Generic_Queue_object___Enqueue(
      v6,
      (Il2CppObject *)action,
      (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_Action__Enqueue__);
    if ( lockTaken )
      System_Threading_Monitor__Exit(executionQueue, 0);
  }
}


void AdjustThreadDispatcher__Update(AdjustThreadDispatcher_o *this, const MethodInfo *method)
{
  AdjustThreadDispatcher_c *v2; // x0
  struct System_Collections_Generic_Queue_Action__o *executionQueue; // x8
  Il2CppObject *v4; // x19
  AdjustThreadDispatcher_c *v5; // x0
  System_Collections_Generic_Queue_T__o *v6; // x0
  Il2CppObject *v7; // x24
  bool lockTaken; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D249D1 & 1) == 0 )
  {
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Action__Dequeue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Action__get_Count__);
    byte_4D249D1 = 1;
  }
  lockTaken = 0;
  while ( 1 )
  {
    v2 = AdjustThreadDispatcher_TypeInfo;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v2 = AdjustThreadDispatcher_TypeInfo;
    }
    executionQueue = v2->static_fields->executionQueue;
    if ( !executionQueue )
      sub_1C942F0();
    if ( executionQueue->fields._size <= 0 )
      break;
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v2 = AdjustThreadDispatcher_TypeInfo;
    }
    v4 = (Il2CppObject *)v2->static_fields->executionQueue;
    lockTaken = 0;
    System_Threading_Monitor__Enter_66345384(v4, &lockTaken, 0);
    v5 = AdjustThreadDispatcher_TypeInfo;
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
      v5 = AdjustThreadDispatcher_TypeInfo;
    }
    v6 = (System_Collections_Generic_Queue_T__o *)v5->static_fields->executionQueue;
    if ( !v6 )
      sub_1C942F0();
    v7 = System_Collections_Generic_Queue_object___Dequeue(
           v6,
           (const MethodInfo_3A16388 *)Method_System_Collections_Generic_Queue_Action__Dequeue__);
    if ( lockTaken )
      System_Threading_Monitor__Exit(v4, 0);
    if ( v7 )
      ((void (__fastcall *)(Il2CppClass *, void *))v7[1].monitor)(v7[4].klass, v7[2].monitor);
  }
}