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
  sub_B0D840(
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x22
  __int64 v6; // x20
  int size; // w8
  __int64 v8; // x22

  v2 = this;
  if ( (byte_42160DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    this = (ShopNoticeRemainTime_o *)sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    byte_42160DB = 1;
  }
  mostRecentTimeLimits = v2->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
LABEL_13:
    sub_B0D97C(this);
  v6 = 0LL;
  while ( 1 )
  {
    size = mostRecentTimeLimits->fields._size;
    if ( (int)v6 >= size )
      return 0;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = mostRecentTimeLimits->fields._items->m_Items[v6];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (ShopNoticeRemainTime_o *)NetworkManager__getTime(0LL);
    if ( v8 < (__int64)this )
      return 1;
    mostRecentTimeLimits = v2->fields.mostRecentTimeLimits;
    ++v6;
    if ( !mostRecentTimeLimits )
      goto LABEL_13;
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop(
        ShopNoticeRemainTime_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42160DA & 1) == 0 )
  {
    sub_B0D8A4(&ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo, method);
    byte_42160DA = 1;
  }
  v4 = sub_B0D974(ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo, method, v2);
  ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12___ctor(
    (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  sub_B0D840(
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
  sub_B0D840(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *klass; // x0
  BattleServantConfConponent_o *p_mostRecentTimeLimits; // x20
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // t1
  System_Collections_Generic_List_long__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42160D9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, shopNotice);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_42160D9 = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  p_mostRecentTimeLimits = (BattleServantConfConponent_o *)&this->fields.mostRecentTimeLimits;
  klass = mostRecentTimeLimits;
  if ( !mostRecentTimeLimits
    && (v11 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                           System_Collections_Generic_List_long__TypeInfo,
                                                           shopNotice,
                                                           method),
        System_Collections_Generic_List_long____ctor(
          v11,
          (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__),
        p_mostRecentTimeLimits->klass = (BattleServantConfConponent_c *)v11,
        sub_B0D840(p_mostRecentTimeLimits, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17),
        (klass = (System_Collections_Generic_List_long__o *)p_mostRecentTimeLimits->klass) == 0LL)
    || (System_Collections_Generic_List_long___Clear(
          klass,
          (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__),
        !shopNotice)
    || (klass = (System_Collections_Generic_List_long__o *)p_mostRecentTimeLimits->klass) == 0LL )
  {
    sub_B0D97C(klass);
  }
  System_Collections_Generic_List_long___Add(
    klass,
    shopNotice->fields._MostRecentTimeLimit_k__BackingField,
    (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
}


void __fastcall ShopNoticeRemainTime__Start(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x20
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  ShopNoticeRemainTime__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  this->fields.isLoop = 1;
  v5 = ShopNoticeRemainTime__ExecuteEverySecondLoop(this, v4);
  if ( !monoBehaviour )
    sub_B0D97C(v5);
  started = UnityEngine_MonoBehaviour__StartCoroutine_34930128(monoBehaviour, v5, 0LL);
  this->fields.coroutine = started;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.coroutine,
    (System_Int32_array **)started,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
      sub_B0D97C(0LL);
    UnityEngine_MonoBehaviour__StopCoroutine_34930796(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B0D840(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v2; // x2
  ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *v3; // x19
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct ShopNoticeRemainTime_o *_4__this; // x20
  System_Action_o *onTimeUpAction; // x0
  UnityEngine_WaitForSeconds_o *v8; // x21
  Il2CppObject *loopWait_5__2; // x1
  bool result; // w0

  v3 = this;
  if ( (byte_4212293 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, method);
    this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_4212293 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v8 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v8, 1.0, 0LL);
    v3->fields._loopWait_5__2 = v8;
    sub_B0D840(&v3->fields._loopWait_5__2, v8);
    if ( _4__this )
      goto LABEL_11;
LABEL_14:
    sub_B0D97C(this);
  }
  if ( _1__state != 1 )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  if ( !ShopNoticeRemainTime__CheckTimeUp(_4__this, 0LL) )
    goto LABEL_11;
  this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)_4__this->fields.mostRecentTimeLimits;
  if ( !this )
    goto LABEL_14;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
  onTimeUpAction = _4__this->fields.onTimeUpAction;
  if ( onTimeUpAction )
    System_Action__Invoke(onTimeUpAction, 0LL);
LABEL_11:
  if ( _4__this->fields.isLoop )
  {
    loopWait_5__2 = (Il2CppObject *)v3->fields._loopWait_5__2;
    v3->fields.__2__current = loopWait_5__2;
    sub_B0D840(&v3->fields.__2__current, loopWait_5__2);
    result = 1;
    v3->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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