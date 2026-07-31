// local variable allocation has failed, the output may be wrong!
void WarBoardFaceMessagePerformance___ctor(
        WarBoardFaceMessagePerformance_o *this,
        int32_t stageId,
        int32_t sceneType,
        int64_t scriptId,
        const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, *(const MethodInfo **)&stageId);
  *(_DWORD *)(&this->fields._isPause_k__BackingField + 3) = stageId;
  *(_DWORD *)&this->fields.messagePlay = sceneType;
  *(_QWORD *)&this->fields.sceneType = scriptId;
}


System_Collections_IEnumerator_o *WarBoardFaceMessagePerformance__Execute(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5936240 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo);
    byte_5936240 = 1;
  }
  v3 = sub_21FFEBC(WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardFaceMessagePerformance__MessageEndCallback(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_593623F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_593623F = 1;
  }
  v3 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  *(&this->fields._isPause_k__BackingField + 1) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v3);
  if ( !Instance )
    sub_21FFECC(0, v5);
  WarBoardManager__AbleTimeAcceleration((WarBoardManager_o *)Instance, 0);
}


void WarBoardFaceMessagePerformance__OnEnd(WarBoardFaceMessagePerformance_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_5936241 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5936241 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  WarBoardManager__StopEffectAllScript((WarBoardManager_o *)Instance, 0);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardFaceMessagePerformance__OnStart(WarBoardFaceMessagePerformance_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w20
  int32_t v7; // w21
  System_Action_c *v8; // x0
  int64_t v9; // x22
  System_Action_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_593623E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardFaceMessagePerformance_MessageEndCallback__);
    byte_593623E = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  WarBoardManager__DisableTimeAcceleration((WarBoardManager_o *)Instance, 0);
  v6 = *(_DWORD *)(&this->fields._isPause_k__BackingField + 3);
  v7 = *(_DWORD *)&this->fields.messagePlay;
  v8 = System_Action_TypeInfo;
  v9 = *(_QWORD *)&this->fields.sceneType;
  *(&this->fields._isPause_k__BackingField + 1) = 1;
  v10 = (System_Action_o *)sub_21FFEBC(v8);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_WarBoardFaceMessagePerformance_MessageEndCallback__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v11, v12);
  ScriptManager__PlayWarBoardMessage(v6, v7, v9, v10, 0);
}


bool WarBoardFaceMessagePerformance___Execute_b__7_0(WarBoardFaceMessagePerformance_o *this, const MethodInfo *method)
{
  return *(&this->fields._isPause_k__BackingField + 1);
}


void WarBoardFaceMessagePerformance__Execute_d__7___ctor(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardFaceMessagePerformance__Execute_d__7__MoveNext(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  int32_t v4; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5936242 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    sub_21FFC50(&Method_WarBoardFaceMessagePerformance__Execute_b__7_0__);
    byte_5936242 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardFaceMessagePerformance__Execute_b__7_0__, 0);
    v7 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v4 = 1;
    goto LABEL_7;
  }
  if ( _1__state == 1 )
  {
    v4 = -1;
LABEL_7:
    this->fields.__1__state = v4;
  }
  return _1__state == 0;
}


Il2CppObject *WarBoardFaceMessagePerformance__Execute_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardFaceMessagePerformance__Execute_d__7__System_Collections_IEnumerator_Reset(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardFaceMessagePerformance__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *WarBoardFaceMessagePerformance__Execute_d__7__System_Collections_IEnumerator_get_Current(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardFaceMessagePerformance__Execute_d__7__System_IDisposable_Dispose(
        WarBoardFaceMessagePerformance__Execute_d__7_o *this,
        const MethodInfo *method)
{
  ;
}