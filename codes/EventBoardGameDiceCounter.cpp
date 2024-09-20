void __fastcall EventBoardGameDiceCounter___ctor(EventBoardGameDiceCounter_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5EDFD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19701/*"game1_count_"*/);
    byte_4A5EDFD = 1;
  }
  v5 = StringLiteral_19701/*"game1_count_"*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_19701/*"game1_count_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spriteName, v5, v2, v3);
  this->fields.delayTime = 0.2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameDiceCounter__CountDown(EventBoardGameDiceCounter_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentNum; // w8
  System_Collections_IEnumerator_o *v5; // x1

  currentNum = this->fields.currentNum;
  if ( currentNum >= 1 )
  {
    v5 = EventBoardGameDiceCounter__SetNum(this, currentNum - 1, v2);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventBoardGameDiceCounter__SetNum(
        EventBoardGameDiceCounter_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5EDFC & 1) == 0 )
  {
    sub_1B885B0(&EventBoardGameDiceCounter__SetNum_d__7_TypeInfo);
    byte_4A5EDFC = 1;
  }
  v5 = sub_1B887FC(EventBoardGameDiceCounter__SetNum_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 40) = num;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall EventBoardGameDiceCounter__SetNumSprite(
        EventBoardGameDiceCounter_o *this,
        int32_t num,
        const MethodInfo *method)
{
  UISprite_o *counterSp; // x20
  System_String_o *spriteName; // x21
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = num;
  spriteName = this->fields.spriteName;
  counterSp = this->fields.counterSp;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_61707032(spriteName, v6, 0LL);
  if ( !counterSp )
    sub_1B8880C(v7, v8);
  UISprite__set_spriteName(counterSp, v7, 0LL);
  this->fields.currentNum = v9;
}


void __fastcall EventBoardGameDiceCounter__Setup(
        EventBoardGameDiceCounter_o *this,
        int32_t num,
        const MethodInfo *method)
{
  if ( (unsigned int)num <= 9 && this->fields.currentNum != num )
    EventBoardGameDiceCounter__SetNumSprite(this, num, method);
}


void __fastcall EventBoardGameDiceCounter__SetNum_d__7___ctor(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventBoardGameDiceCounter__SetNum_d__7__MoveNext(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  struct EventBoardGameDiceCounter_o *_4__this; // x0
  float delayTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  bool result; // w0

  if ( (byte_4A5EDFE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5EDFE = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_10;
    EventBoardGameDiceCounter__SetNumSprite(_4__this, this->fields.num, v2);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      delayTime = _4__this->fields.delayTime;
      v7 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v7, delayTime, 0LL);
      this->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v7, v9, v10);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1B8880C(_4__this, method);
  }
  return 0;
}


Il2CppObject *__fastcall EventBoardGameDiceCounter__SetNum_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventBoardGameDiceCounter__SetNum_d__7__System_Collections_IEnumerator_Reset(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventBoardGameDiceCounter__SetNum_d__7_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall EventBoardGameDiceCounter__SetNum_d__7__System_Collections_IEnumerator_get_Current(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventBoardGameDiceCounter__SetNum_d__7__System_IDisposable_Dispose(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  ;
}