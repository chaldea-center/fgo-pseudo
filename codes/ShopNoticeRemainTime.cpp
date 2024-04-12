void __fastcall ShopNoticeRemainTime___ctor(
        ShopNoticeRemainTime_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)monoBehaviour,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool __fastcall ShopNoticeRemainTime__CheckTimeUp(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  ShopNoticeRemainTime_o *v2; // x19
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x22
  __int64 v4; // x20
  int size; // w8
  __int64 v6; // x22

  v2 = this;
  if ( (byte_42B1A8D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Item__);
    this = (ShopNoticeRemainTime_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42B1A8D = 1;
  }
  mostRecentTimeLimits = v2->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
LABEL_13:
    sub_B52A5C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    size = mostRecentTimeLimits->fields._size;
    if ( (int)v4 >= size )
      return 0;
    if ( size <= (unsigned int)v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v6 = mostRecentTimeLimits->fields._items->m_Items[v4];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (ShopNoticeRemainTime_o *)NetworkManager__getTime(0LL);
    if ( v6 < (__int64)this )
      return 1;
    mostRecentTimeLimits = v2->fields.mostRecentTimeLimits;
    ++v4;
    if ( !mostRecentTimeLimits )
      goto LABEL_13;
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop(
        ShopNoticeRemainTime_o *this,
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

  if ( (byte_42B1A8C & 1) == 0 )
  {
    sub_B52984(&ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo);
    byte_42B1A8C = 1;
  }
  v3 = sub_B52A54(ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo);
  ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12___ctor(
    (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ShopNoticeRemainTime__SetMostRecentTimeLimits(
        ShopNoticeRemainTime_o *this,
        System_Collections_Generic_List_long__o *mostRecentTimeLimits,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mostRecentTimeLimits = mostRecentTimeLimits;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mostRecentTimeLimits,
    (System_Int32_array **)mostRecentTimeLimits,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopNoticeRemainTime__SetOnTimeUpAction(
        ShopNoticeRemainTime_o *this,
        System_Action_o *onTimeUpAction,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onTimeUpAction = onTimeUpAction;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onTimeUpAction,
    (System_Int32_array **)onTimeUpAction,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopNoticeRemainTime__SetShopNotice(
        ShopNoticeRemainTime_o *this,
        ShopNotice_o *shopNotice,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *klass; // x0
  BattleServantConfConponent_o *p_mostRecentTimeLimits; // x20
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // t1
  System_Collections_Generic_List_long__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1

  if ( (byte_42B1A8B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    byte_42B1A8B = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  p_mostRecentTimeLimits = (BattleServantConfConponent_o *)&this->fields.mostRecentTimeLimits;
  klass = mostRecentTimeLimits;
  if ( !mostRecentTimeLimits
    && (v8 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo),
        System_Collections_Generic_List_long____ctor(
          v8,
          (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__),
        p_mostRecentTimeLimits->klass = (BattleServantConfConponent_c *)v8,
        sub_B52920(p_mostRecentTimeLimits, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14),
        (klass = (System_Collections_Generic_List_long__o *)p_mostRecentTimeLimits->klass) == 0LL)
    || (System_Collections_Generic_List_long___Clear(
          klass,
          (const MethodInfo_2FE21D8 *)Method_System_Collections_Generic_List_long__Clear__),
        !shopNotice)
    || (klass = (System_Collections_Generic_List_long__o *)p_mostRecentTimeLimits->klass) == 0LL )
  {
    sub_B52A5C(klass, v15);
  }
  System_Collections_Generic_List_long___Add(
    klass,
    shopNotice->fields._MostRecentTimeLimit_k__BackingField,
    (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
}


void __fastcall ShopNoticeRemainTime__Start(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x20
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x0
  __int64 v6; // x1
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  ShopNoticeRemainTime__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  this->fields.isLoop = 1;
  v5 = ShopNoticeRemainTime__ExecuteEverySecondLoop(this, v4);
  if ( !monoBehaviour )
    sub_B52A5C(v5, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_35611808(monoBehaviour, v5, 0LL);
  this->fields.coroutine = started;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.coroutine,
    (System_Int32_array **)started,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall ShopNoticeRemainTime__Stop(ShopNoticeRemainTime_o *this, const MethodInfo *method)
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
  this->fields.isLoop = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_B52A5C(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_35612476(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B52920(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12___ctor(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__MoveNext(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *v2; // x19
  int32_t _1__state; // w8
  struct ShopNoticeRemainTime_o *_4__this; // x20
  System_Action_o *onTimeUpAction; // x0
  UnityEngine_WaitForSeconds_o *v6; // x21
  bool result; // w0

  v2 = this;
  if ( (byte_42AD3AE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Clear__);
    this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD3AE = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, 1.0, 0LL);
    v2->fields._loopWait_5__2 = v6;
    sub_B52920(&v2->fields._loopWait_5__2);
    if ( _4__this )
      goto LABEL_11;
LABEL_14:
    sub_B52A5C(this, method);
  }
  if ( _1__state != 1 )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  if ( !ShopNoticeRemainTime__CheckTimeUp(_4__this, 0LL) )
    goto LABEL_11;
  this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)_4__this->fields.mostRecentTimeLimits;
  if ( !this )
    goto LABEL_14;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_2FE21D8 *)Method_System_Collections_Generic_List_long__Clear__);
  onTimeUpAction = _4__this->fields.onTimeUpAction;
  if ( onTimeUpAction )
    System_Action__Invoke(onTimeUpAction, 0LL);
LABEL_11:
  if ( _4__this->fields.isLoop )
  {
    v2->fields.__2__current = (Il2CppObject *)v2->fields._loopWait_5__2;
    sub_B52920(&v2->fields.__2__current);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__System_Collections_IEnumerator_Reset(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__System_Collections_IEnumerator_get_Current(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__System_IDisposable_Dispose(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  ;
}