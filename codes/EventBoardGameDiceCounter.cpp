void EventBoardGameDiceCounter___ctor(EventBoardGameDiceCounter_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4CE870A & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19905/*"game1_count_"*/);
    byte_4CE870A = 1;
  }
  v3 = StringLiteral_19905/*"game1_count_"*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_19905/*"game1_count_"*/;
  sub_1C7BA8C(&this->fields.spriteName, v3);
  this->fields.delayTime = 0.2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventBoardGameDiceCounter__CountDown(EventBoardGameDiceCounter_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentNum; // w8
  System_Collections_IEnumerator_o *v5; // x1

  currentNum = this->fields.currentNum;
  if ( currentNum >= 1 )
  {
    v5 = EventBoardGameDiceCounter__SetNum(this, currentNum - 1, v2);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v5, 0);
  }
}


System_Collections_IEnumerator_o *EventBoardGameDiceCounter__SetNum(
        EventBoardGameDiceCounter_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4CE8709 & 1) == 0 )
  {
    sub_1C7BAE8(&EventBoardGameDiceCounter__SetNum_d__7_TypeInfo);
    byte_4CE8709 = 1;
  }
  v5 = sub_1C7BD34(EventBoardGameDiceCounter__SetNum_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C(v5 + 32, this);
  *(_DWORD *)(v5 + 40) = num;
  return (System_Collections_IEnumerator_o *)v5;
}


void EventBoardGameDiceCounter__SetNumSprite(EventBoardGameDiceCounter_o *this, int32_t num, const MethodInfo *method)
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
  v6 = System_Int32__ToString((int32_t)&v9, 0);
  v7 = System_String__Concat_64176912(spriteName, v6, 0);
  if ( !counterSp )
    sub_1C7BD40(v7, v8);
  UISprite__set_spriteName(counterSp, v7, 0);
  this->fields.currentNum = v9;
}


void EventBoardGameDiceCounter__Setup(EventBoardGameDiceCounter_o *this, int32_t num, const MethodInfo *method)
{
  if ( (unsigned int)num <= 9 && this->fields.currentNum != num )
    EventBoardGameDiceCounter__SetNumSprite(this, num, method);
}


void EventBoardGameDiceCounter__SetNum_d__7___ctor(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventBoardGameDiceCounter__SetNum_d__7__MoveNext(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  struct EventBoardGameDiceCounter_o *_4__this; // x0
  float delayTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4CE870B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CE870B = 1;
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
      v7 = (UnityEngine_WaitForSeconds_o *)sub_1C7BD34(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v7, delayTime, 0);
      this->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = &this->fields.__2__current;
      sub_1C7BA8C(p__2__current, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1C7BD40(_4__this, method);
  }
  return 0;
}


Il2CppObject *EventBoardGameDiceCounter__SetNum_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventBoardGameDiceCounter__SetNum_d__7__System_Collections_IEnumerator_Reset(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_EventBoardGameDiceCounter__SetNum_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *EventBoardGameDiceCounter__SetNum_d__7__System_Collections_IEnumerator_get_Current(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventBoardGameDiceCounter__SetNum_d__7__System_IDisposable_Dispose(
        EventBoardGameDiceCounter__SetNum_d__7_o *this,
        const MethodInfo *method)
{
  ;
}