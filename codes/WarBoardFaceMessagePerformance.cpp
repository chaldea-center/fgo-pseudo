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
  WarBoardFaceMessagePerformance__Execute_d__7_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_418405D & 1) == 0 )
  {
    sub_B2C35C(&WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo, method);
    byte_418405D = 1;
  }
  v3 = (WarBoardFaceMessagePerformance__Execute_d__7_o *)sub_B2C42C(WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo);
  WarBoardFaceMessagePerformance__Execute_d__7___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardFaceMessagePerformance__MessageEndCallback(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_418405C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_418405C = 1;
  }
  *(&this->fields._isPause_k__BackingField + 1) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  WarBoardManager__AbleTimeAcceleration((WarBoardManager_o *)Instance, v4);
}


void __fastcall WarBoardFaceMessagePerformance__OnEnd(WarBoardFaceMessagePerformance_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_418405E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_418405E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  WarBoardManager__StopEffectAllScript((WarBoardManager_o *)Instance, v4);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardFaceMessagePerformance__OnStart(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  int32_t v9; // w21
  int64_t v10; // x22
  System_Action_o *v11; // x23

  if ( (byte_418405B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ScriptManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B2C35C(&Method_WarBoardFaceMessagePerformance_MessageEndCallback__, v5);
    byte_418405B = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  WarBoardManager__DisableTimeAcceleration((WarBoardManager_o *)Instance, v7);
  *(&this->fields._isPause_k__BackingField + 1) = 1;
  v8 = *(_DWORD *)(&this->fields._isPause_k__BackingField + 3);
  v9 = *(_DWORD *)&this->fields.messagePlay;
  v10 = *(_QWORD *)&this->fields.sceneType;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarBoardFaceMessagePerformance_MessageEndCallback__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayWarBoardMessage(v8, v9, v10, v11, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitWhile_o *v10; // x20
  int32_t v11; // w8

  if ( (byte_4185746 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v4);
    sub_B2C35C(&Method_WarBoardFaceMessagePerformance__Execute_b__7_0__, v5);
    byte_4185746 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v11 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v9 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v9,
      _4__this,
      Method_WarBoardFaceMessagePerformance__Execute_b__7_0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v10 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v10, v9, 0LL);
    this->fields.__2__current = (Il2CppObject *)v10;
    sub_B2C2F8(&this->fields.__2__current, v10);
    v11 = 1;
    result = 1;
  }
  this->fields.__1__state = v11;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardFaceMessagePerformance__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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