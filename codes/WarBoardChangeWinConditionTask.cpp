// local variable allocation has failed, the output may be wrong!
void WarBoardChangeWinConditionTask___ctor(
        WarBoardChangeWinConditionTask_o *this,
        int32_t condId,
        const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, *(const MethodInfo **)&condId);
  *(_DWORD *)(&this->fields._isPause_k__BackingField + 3) = condId;
}


System_Collections_IEnumerator_o *WarBoardChangeWinConditionTask__Execute(
        WarBoardChangeWinConditionTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E38B & 1) == 0 )
  {
    sub_2213A60(&WarBoardChangeWinConditionTask__Execute_d__2_TypeInfo);
    byte_596E38B = 1;
  }
  v3 = sub_2213CCC(WarBoardChangeWinConditionTask__Execute_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardChangeWinConditionTask__Execute_d__2___ctor(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardChangeWinConditionTask__Execute_d__2__MoveNext(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  struct WarBoardChangeWinConditionTask_o *_4__this; // x21
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  const MethodInfo_47A29F8 *v7; // x0

  if ( (byte_596E38C & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E38C = 1;
  }
  if ( !this->fields.__1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance
      || !_4__this
      || (warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField) == 0
      || (v7 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
          warBoardData_k__BackingField->fields.winCondId = *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3),
          (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance(v7)) == 0)
      || (WarBoardManager__UpdateRuleButton(Instance, 0),
          (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
    {
      sub_2213CDC(Instance, v5);
    }
    WarBoardManager__JudgmentGameSet(Instance, 0);
  }
  return 0;
}


Il2CppObject *WarBoardChangeWinConditionTask__Execute_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardChangeWinConditionTask__Execute_d__2__System_Collections_IEnumerator_Reset(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardChangeWinConditionTask__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *WarBoardChangeWinConditionTask__Execute_d__2__System_Collections_IEnumerator_get_Current(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardChangeWinConditionTask__Execute_d__2__System_IDisposable_Dispose(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  ;
}