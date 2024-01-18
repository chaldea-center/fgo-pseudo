void __fastcall WarBoardWaitTime___ctor(WarBoardWaitTime_o *this, float waitTime, const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  *(float *)(&this->fields._isPause_k__BackingField + 3) = waitTime;
}


System_Collections_IEnumerator_o *__fastcall WarBoardWaitTime__Execute(
        WarBoardWaitTime_o *this,
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

  if ( (byte_41888F9 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardWaitTime__Execute_d__2_TypeInfo, method);
    byte_41888F9 = 1;
  }
  v3 = sub_B2C42C(WarBoardWaitTime__Execute_d__2_TypeInfo);
  WarBoardWaitTime__Execute_d__2___ctor((WarBoardWaitTime__Execute_d__2_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  int32_t _1__state; // w8
  struct WarBoardWaitTime_o *_4__this; // x20
  float v5; // s0
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
        v5 = 0.0;
        goto LABEL_7;
      }
      return 0;
    }
LABEL_10:
    sub_B2C434(this, method);
  }
  espTime_5__2 = this->fields._espTime_5__2;
  this->fields.__1__state = -1;
  v5 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
  this->fields._espTime_5__2 = v5;
  if ( !_4__this )
    goto LABEL_10;
LABEL_7:
  if ( v5 >= *(float *)(&_4__this->fields._isPause_k__BackingField + 3) )
    return 0;
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardWaitTime__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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