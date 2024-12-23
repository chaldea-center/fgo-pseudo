// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardFaceMessagePerformance___ctor(
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


System_Collections_IEnumerator_o *__fastcall WarBoardFaceMessagePerformance__Execute(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B64A04 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo, method);
    byte_4B64A04 = 1;
  }
  v3 = sub_1BE4D18(WarBoardFaceMessagePerformance__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardFaceMessagePerformance__MessageEndCallback(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B64A03 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B64A03 = 1;
  }
  *(&this->fields._isPause_k__BackingField + 1) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  WarBoardManager__AbleTimeAcceleration((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardFaceMessagePerformance__OnEnd(WarBoardFaceMessagePerformance_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4B64A05 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B64A05 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  WarBoardManager__StopEffectAllScript((WarBoardManager_o *)Instance, 0LL);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardFaceMessagePerformance__OnStart(
        WarBoardFaceMessagePerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w20
  int32_t v10; // w21
  int64_t v11; // x22
  System_Action_o *v12; // x23

  if ( (byte_4B64A02 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1BE4ACC(&Method_WarBoardFaceMessagePerformance_MessageEndCallback__, v5);
    byte_4B64A02 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v8);
  WarBoardManager__DisableTimeAcceleration((WarBoardManager_o *)Instance, 0LL);
  *(&this->fields._isPause_k__BackingField + 1) = 1;
  v9 = *(_DWORD *)(&this->fields._isPause_k__BackingField + 3);
  v10 = *(_DWORD *)&this->fields.messagePlay;
  v11 = *(_QWORD *)&this->fields.sceneType;
  v12 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_WarBoardFaceMessagePerformance_MessageEndCallback__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayWarBoardMessage(v9, v10, v11, v12, 0LL);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitWhile_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t v16; // w8

  if ( (byte_4B64A06 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Func_bool__TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_WaitWhile_TypeInfo, v3);
    sub_1BE4ACC(&Method_WarBoardFaceMessagePerformance__Execute_b__7_0__, v4);
    byte_4B64A06 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v16 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v8 = (System_Func_bool__o *)sub_1BE4D18(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v8, _4__this, Method_WarBoardFaceMessagePerformance__Execute_b__7_0__, 0LL);
    v9 = (UnityEngine_WaitWhile_o *)sub_1BE4D18(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v9, v8, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    v16 = 1;
    result = 1;
  }
  this->fields.__1__state = v16;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_WarBoardFaceMessagePerformance__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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