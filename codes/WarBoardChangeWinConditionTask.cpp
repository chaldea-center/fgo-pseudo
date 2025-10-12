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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3563B & 1) == 0 )
  {
    sub_1C32C20(&WarBoardChangeWinConditionTask__Execute_d__2_TypeInfo);
    byte_4C3563B = 1;
  }
  v3 = sub_1C32E6C(WarBoardChangeWinConditionTask__Execute_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  struct WarBoardChangeWinConditionTask_o *_4__this; // x20
  WarBoardManager_o *Instance; // x0
  struct WarBoardData_o *warBoardData_k__BackingField; // x8

  if ( (byte_4C3563C & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C3563C = 1;
  }
  if ( !this->fields.__1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance
      || !_4__this
      || (warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField) == 0
      || (warBoardData_k__BackingField->fields.winCondId = *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3),
          (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
      || (WarBoardManager__UpdateRuleButton(Instance, 0),
          (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
    {
      sub_1C32E7C(Instance);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_WarBoardChangeWinConditionTask__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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