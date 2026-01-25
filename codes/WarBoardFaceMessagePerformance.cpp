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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEC250 & 1) == 0 )
  {
    sub_1C7BAE8(&WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo);
    byte_4CEC250 = 1;
  }
  v3 = sub_1C7BD34(WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardFaceMessagePerformance__MessageEndCallback(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEC24F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CEC24F = 1;
  }
  *(&this->fields._isPause_k__BackingField + 1) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  WarBoardManager__AbleTimeAcceleration((WarBoardManager_o *)Instance, 0);
}


void WarBoardFaceMessagePerformance__OnEnd(WarBoardFaceMessagePerformance_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4CEC251 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CEC251 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
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
  int64_t v8; // x22
  System_Action_o *v9; // x23

  if ( (byte_4CEC24E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C7BAE8(&Method_WarBoardFaceMessagePerformance_MessageEndCallback__);
    byte_4CEC24E = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  WarBoardManager__DisableTimeAcceleration((WarBoardManager_o *)Instance, 0);
  *(&this->fields._isPause_k__BackingField + 1) = 1;
  v6 = *(_DWORD *)(&this->fields._isPause_k__BackingField + 3);
  v7 = *(_DWORD *)&this->fields.messagePlay;
  v8 = *(_QWORD *)&this->fields.sceneType;
  v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarBoardFaceMessagePerformance_MessageEndCallback__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayWarBoardMessage(v6, v7, v8, v9, 0);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w8

  if ( (byte_4CEC252 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C7BAE8(&Method_WarBoardFaceMessagePerformance__Execute_b__7_0__);
    byte_4CEC252 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardFaceMessagePerformance__Execute_b__7_0__, 0);
    v7 = (UnityEngine_WaitWhile_o *)sub_1C7BD34(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
  return result;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_WarBoardFaceMessagePerformance__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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