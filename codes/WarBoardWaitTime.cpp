void __fastcall WarBoardWaitTime___ctor(WarBoardWaitTime_o *this, float waitTime, const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  *(float *)(&this->fields._isPause_k__BackingField + 3) = waitTime;
}


System_Collections_IEnumerator_o *__fastcall WarBoardWaitTime__Execute(
        WarBoardWaitTime_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA91B & 1) == 0 )
  {
    sub_B16FFC(&WarBoardWaitTime__Execute_d__2_TypeInfo, method);
    byte_40FA91B = 1;
  }
  v6 = sub_B170CC(WarBoardWaitTime__Execute_d__2_TypeInfo, method, v2, v3, v4);
  WarBoardWaitTime__Execute_d__2___ctor((WarBoardWaitTime__Execute_d__2_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardWaitTime__Execute_d__2___ctor(
        WarBoardWaitTime__Execute_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardWaitTime__Execute_d__2__MoveNext(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  struct WarBoardWaitTime_o *_4__this; // x20
  float v11; // s0
  float espTime_5__2; // s8
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      if ( *(float *)(&_4__this->fields._isPause_k__BackingField + 3) >= 0.0 )
      {
        this->fields._espTime_5__2 = 0.0;
        v11 = 0.0;
        goto LABEL_7;
      }
      return 0;
    }
LABEL_10:
    sub_B170D4();
  }
  espTime_5__2 = this->fields._espTime_5__2;
  this->fields.__1__state = -1;
  v11 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
  this->fields._espTime_5__2 = v11;
  if ( !_4__this )
    goto LABEL_10;
LABEL_7:
  if ( v11 >= *(float *)(&_4__this->fields._isPause_k__BackingField + 3) )
    return 0;
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall WarBoardWaitTime__Execute_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardWaitTime__Execute_d__2__System_Collections_IEnumerator_Reset(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardWaitTime__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall WarBoardWaitTime__Execute_d__2__System_Collections_IEnumerator_get_Current(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardWaitTime__Execute_d__2__System_IDisposable_Dispose(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  ;
}