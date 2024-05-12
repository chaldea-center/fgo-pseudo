void __fastcall WarBoardChangeWinConditionTask___ctor(
        WarBoardChangeWinConditionTask_o *this,
        int32_t condId,
        const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  *(_DWORD *)(&this->fields._isPause_k__BackingField + 3) = condId;
}


System_Collections_IEnumerator_o *__fastcall WarBoardChangeWinConditionTask__Execute(
        WarBoardChangeWinConditionTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_43899E3 & 1) == 0 )
  {
    sub_B775C4(&WarBoardChangeWinConditionTask__Execute_d__2_TypeInfo);
    byte_43899E3 = 1;
  }
  v3 = sub_B77694(WarBoardChangeWinConditionTask__Execute_d__2_TypeInfo);
  WarBoardChangeWinConditionTask__Execute_d__2___ctor((WarBoardChangeWinConditionTask__Execute_d__2_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardChangeWinConditionTask__Execute_d__2___ctor(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardChangeWinConditionTask__Execute_d__2__MoveNext(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  struct WarBoardChangeWinConditionTask_o *_4__this; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8

  if ( (byte_4388F3A & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4388F3A = 1;
  }
  if ( !this->fields.__1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance
      || !_4__this
      || (warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField) == 0LL
      || (warBoardData_k__BackingField->fields.winCondId = *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3),
          (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
      || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
          (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
    {
      sub_B7769C(Instance, v5);
    }
    WarBoardManager__JudgmentGameSet(Instance, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall WarBoardChangeWinConditionTask__Execute_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardChangeWinConditionTask__Execute_d__2__System_Collections_IEnumerator_Reset(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardChangeWinConditionTask__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall WarBoardChangeWinConditionTask__Execute_d__2__System_Collections_IEnumerator_get_Current(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardChangeWinConditionTask__Execute_d__2__System_IDisposable_Dispose(
        WarBoardChangeWinConditionTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  ;
}