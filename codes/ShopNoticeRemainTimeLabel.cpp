void __fastcall ShopNoticeRemainTimeLabel___ctor(
        ShopNoticeRemainTimeLabel_o *this,
        UILabel_o *label,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.label = label;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.label,
    (System_Int32_array **)label,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.monoBehaviour = monoBehaviour;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)monoBehaviour,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  __int64 v6; // x1
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  ShopNoticeRemainTimeLabel__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  updated = ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(this, v4);
  if ( !monoBehaviour )
    sub_B2C434(updated, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_35309748(monoBehaviour, updated, 0LL);
  this->fields.coroutine = started;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.coroutine,
    (System_Int32_array **)started,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall ShopNoticeRemainTimeLabel__Stop(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  BattleServantConfConponent_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_coroutine = (BattleServantConfConponent_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_B2C434(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_35310416(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B2C2F8(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(
        ShopNoticeRemainTimeLabel_o *this,
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

  if ( (byte_41891A1 & 1) == 0 )
  {
    sub_B2C35C(&ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_TypeInfo, method);
    byte_41891A1 = 1;
  }
  v3 = sub_B2C42C(ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_TypeInfo);
  ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8___ctor(
    (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct ShopNoticeRemainTimeLabel_o *_4__this; // x22
  UnityEngine_WaitForSeconds_o *v7; // x20
  UILabel_o *label; // x20
  int64_t timeLimit; // x21
  int64_t v10; // x20
  bool result; // w0
  Il2CppObject *loopWait_5__2; // x1

  v2 = this;
  if ( (byte_418544B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *)sub_B2C35C(
                                                                        &UnityEngine_WaitForSeconds_TypeInfo,
                                                                        v4);
    byte_418544B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_18;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, 1.0, 0LL);
    v2->fields._loopWait_5__2 = v7;
    sub_B2C2F8(&v2->fields._loopWait_5__2, v7);
    if ( !_4__this )
      goto LABEL_18;
  }
  label = _4__this->fields.label;
  timeLimit = _4__this->fields.timeLimit;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *)LocalizationManager__GetRestTime5(
                                                                      timeLimit,
                                                                      -1LL,
                                                                      0LL);
  if ( !label )
LABEL_18:
    sub_B2C434(this, method);
  UILabel__set_text(label, (System_String_o *)this, 0LL);
  v10 = _4__this->fields.timeLimit;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( v10 < NetworkManager__getTime(0LL) )
    return 0;
  loopWait_5__2 = (Il2CppObject *)v2->fields._loopWait_5__2;
  v2->fields.__2__current = loopWait_5__2;
  sub_B2C2F8(&v2->fields.__2__current, loopWait_5__2);
  result = 1;
  v2->fields.__1__state = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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