void __fastcall ShopNoticeRemainTimeLabel___ctor(
        ShopNoticeRemainTimeLabel_o *this,
        UILabel_o *label,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.label = label;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.label, (int32_t)label, v7, v8);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)monoBehaviour, v9, v10);
}


void __fastcall ShopNoticeRemainTimeLabel__SetTimeLimit(
        ShopNoticeRemainTimeLabel_o *this,
        int64_t timeLimit,
        const MethodInfo *method)
{
  this->fields.timeLimit = timeLimit;
}


void __fastcall ShopNoticeRemainTimeLabel__Start(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x20
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *updated; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  ShopNoticeRemainTimeLabel__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  updated = ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(this, v4);
  if ( !monoBehaviour )
    sub_1B64324(updated);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69113008(monoBehaviour, updated, 0LL);
  this->fields.coroutine = started;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.coroutine, (int32_t)started, v7, v8);
}


void __fastcall ShopNoticeRemainTimeLabel__Stop(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  ServantStatusBattleListViewItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  p_coroutine = (ServantStatusBattleListViewItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1B64324(0LL);
    UnityEngine_MonoBehaviour__StopCoroutine_69113628(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_1B6406C(p_coroutine, 0, v5, v6);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(
        ShopNoticeRemainTimeLabel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F8B12 & 1) == 0 )
  {
    sub_1B640C8(&ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_TypeInfo, method);
    byte_49F8B12 = 1;
  }
  v4 = sub_1B64314(ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8___ctor(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8__MoveNext(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct ShopNoticeRemainTimeLabel_o *_4__this; // x22
  UnityEngine_WaitForSeconds_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  UILabel_o *label; // x20
  int64_t timeLimit; // x21
  int64_t v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  bool result; // w0
  Il2CppObject *loopWait_5__2; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19

  v3 = this;
  if ( (byte_49F8B13 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *)sub_1B640C8(
                                                                        &UnityEngine_WaitForSeconds_TypeInfo,
                                                                        v5);
    byte_49F8B13 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    v8 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v8, 1.0, 0LL);
    v3->fields._loopWait_5__2 = v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._loopWait_5__2, (int32_t)v8, v9, v10);
  }
  if ( !_4__this )
    goto LABEL_16;
  label = _4__this->fields.label;
  timeLimit = _4__this->fields.timeLimit;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *)LocalizationManager__GetRestTime5(
                                                                      timeLimit,
                                                                      -1LL,
                                                                      0LL);
  if ( !label )
LABEL_16:
    sub_1B64324(this);
  UILabel__set_text(label, (System_String_o *)this, 0LL);
  v13 = _4__this->fields.timeLimit;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( v13 < NetworkManager__getTime(0LL) )
    return 0;
  loopWait_5__2 = (Il2CppObject *)v3->fields._loopWait_5__2;
  v3->fields.__2__current = loopWait_5__2;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)loopWait_5__2, v14, v15);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8__System_Collections_IEnumerator_Reset(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8__System_Collections_IEnumerator_get_Current(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8__System_IDisposable_Dispose(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *this,
        const MethodInfo *method)
{
  ;
}