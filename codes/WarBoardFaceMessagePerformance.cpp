void __fastcall WarBoardFaceMessagePerformance___ctor(
        WarBoardFaceMessagePerformance_o *this,
        int32_t stageId,
        int32_t sceneType,
        int64_t scriptId,
        const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  *(_DWORD *)(&this->fields._isPause_k__BackingField + 3) = stageId;
  *(_DWORD *)&this->fields.messagePlay = sceneType;
  *(_QWORD *)&this->fields.sceneType = scriptId;
}


System_Collections_IEnumerator_o *__fastcall WarBoardFaceMessagePerformance__Execute(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardFaceMessagePerformance__Execute_d__7_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E5240 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5240 = 1;
  }
  v5 = (WarBoardFaceMessagePerformance__Execute_d__7_o *)sub_B5D694(WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo);
  WarBoardFaceMessagePerformance__Execute_d__7___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.__4__this = this;
  sub_B5D560(&v5->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardFaceMessagePerformance__MessageEndCallback(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42E523F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E523F = 1;
  }
  *(&this->fields._isPause_k__BackingField + 1) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  WarBoardManager__AbleTimeAcceleration((WarBoardManager_o *)Instance, v6);
}


void __fastcall WarBoardFaceMessagePerformance__OnEnd(WarBoardFaceMessagePerformance_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42E5241 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5241 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  WarBoardManager__StopEffectAllScript((WarBoardManager_o *)Instance, v6);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardFaceMessagePerformance__OnStart(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w20
  int32_t v17; // w21
  int64_t v18; // x22
  System_Action_o *v19; // x23

  if ( (byte_42E523E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardFaceMessagePerformance_MessageEndCallback__, v11, v12, v13);
    byte_42E523E = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v15);
  WarBoardManager__DisableTimeAcceleration((WarBoardManager_o *)Instance, v15);
  *(&this->fields._isPause_k__BackingField + 1) = 1;
  v16 = *(_DWORD *)(&this->fields._isPause_k__BackingField + 3);
  v17 = *(_DWORD *)&this->fields.messagePlay;
  v18 = *(_QWORD *)&this->fields.sceneType;
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_WarBoardFaceMessagePerformance_MessageEndCallback__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayWarBoardMessage(v16, v17, v18, v19, 0LL);
}


bool __fastcall WarBoardFaceMessagePerformance___Execute_b__7_0(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  return *(&this->fields._isPause_k__BackingField + 1);
}


void __fastcall WarBoardFaceMessagePerformance__Execute_d__7___ctor(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardFaceMessagePerformance__Execute_d__7__MoveNext(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitWhile_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t v25; // w8

  if ( (byte_42E766B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardFaceMessagePerformance__Execute_b__7_0__, v11, v12, v13);
    byte_42E766B = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v25 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v17 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v17,
      _4__this,
      Method_WarBoardFaceMessagePerformance__Execute_b__7_0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v18 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v18, v17, 0LL);
    this->fields.__2__current = (Il2CppObject *)v18;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = 1;
    result = 1;
  }
  this->fields.__1__state = v25;
  return result;
}


Il2CppObject *__fastcall WarBoardFaceMessagePerformance__Execute_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardFaceMessagePerformance__Execute_d__7__System_Collections_IEnumerator_Reset(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardFaceMessagePerformance__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall WarBoardFaceMessagePerformance__Execute_d__7__System_Collections_IEnumerator_get_Current(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardFaceMessagePerformance__Execute_d__7__System_IDisposable_Dispose(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  ;
}