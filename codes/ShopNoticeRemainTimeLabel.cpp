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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.label,
    (System_Int32_array **)label,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.monoBehaviour = monoBehaviour;
  sub_B16F98(
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
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  ShopNoticeRemainTimeLabel__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  updated = ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(this, v4);
  if ( !monoBehaviour )
    sub_B170D4();
  started = UnityEngine_MonoBehaviour__StartCoroutine_34804316(monoBehaviour, updated, 0LL);
  this->fields.coroutine = started;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.coroutine,
    (System_Int32_array **)started,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
      sub_B170D4();
    UnityEngine_MonoBehaviour__StopCoroutine_34804984(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B16F98(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(
        ShopNoticeRemainTimeLabel_o *this,
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

  if ( (byte_40FB765 & 1) == 0 )
  {
    sub_B16FFC(&ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_TypeInfo, method);
    byte_40FB765 = 1;
  }
  v6 = sub_B170CC(ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_TypeInfo, method, v2, v3, v4);
  ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8___ctor(
    (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct ShopNoticeRemainTimeLabel_o *_4__this; // x22
  UnityEngine_WaitForSeconds_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UILabel_o *label; // x20
  int64_t timeLimit; // x21
  System_String_o *RestTime5; // x0
  int64_t v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  bool result; // w0
  Il2CppObject *loopWait_5__2; // x1

  if ( (byte_40F79EA & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    byte_40F79EA = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_18;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v10 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForSeconds___ctor(v10, 1.0, 0LL);
    this->fields._loopWait_5__2 = v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._loopWait_5__2,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
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
  RestTime5 = LocalizationManager__GetRestTime5(timeLimit, -1LL, 0LL);
  if ( !label )
LABEL_18:
    sub_B170D4();
  UILabel__set_text(label, RestTime5, 0LL);
  v20 = _4__this->fields.timeLimit;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( v20 < NetworkManager__getTime(0LL) )
    return 0;
  loopWait_5__2 = (Il2CppObject *)this->fields._loopWait_5__2;
  this->fields.__2__current = loopWait_5__2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)loopWait_5__2,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  result = 1;
  this->fields.__1__state = 1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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