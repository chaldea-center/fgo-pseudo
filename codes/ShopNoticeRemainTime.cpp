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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  ShopNoticeRemainTime_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x22
  __int64 v12; // x20
  int size; // w8
  __int64 v14; // x22

  v4 = this;
  if ( (byte_42EA686 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v5, v6, v7);
    this = (ShopNoticeRemainTime_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    byte_42EA686 = 1;
  }
  mostRecentTimeLimits = v4->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
LABEL_13:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    size = mostRecentTimeLimits->fields._size;
    if ( (int)v12 >= size )
      return 0;
    if ( size <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v14 = mostRecentTimeLimits->fields._items->m_Items[v12];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (ShopNoticeRemainTime_o *)NetworkManager__getTime(0LL);
    if ( v14 < (__int64)this )
      return 1;
    mostRecentTimeLimits = v4->fields.mostRecentTimeLimits;
    ++v12;
    if ( !mostRecentTimeLimits )
      goto LABEL_13;
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop(
        ShopNoticeRemainTime_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA685 & 1) == 0 )
  {
    sub_B5D5C4(&ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA685 = 1;
  }
  v5 = sub_B5D694(ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo);
  ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12___ctor(
    (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
  sub_B5D560(
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
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_long__o *klass; // x0
  BattleServantConfConponent_o *p_mostRecentTimeLimits; // x20
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // t1
  System_Collections_Generic_List_long__o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1

  if ( (byte_42EA684 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)shopNotice, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v12, v13, v14);
    byte_42EA684 = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  p_mostRecentTimeLimits = (BattleServantConfConponent_o *)&this->fields.mostRecentTimeLimits;
  klass = mostRecentTimeLimits;
  if ( !mostRecentTimeLimits
    && (v18 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo),
        System_Collections_Generic_List_long____ctor(
          v18,
          (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__),
        p_mostRecentTimeLimits->klass = (BattleServantConfConponent_c *)v18,
        sub_B5D560(p_mostRecentTimeLimits, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24),
        (klass = (System_Collections_Generic_List_long__o *)p_mostRecentTimeLimits->klass) == 0LL)
    || (System_Collections_Generic_List_long___Clear(
          klass,
          (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__),
        !shopNotice)
    || (klass = (System_Collections_Generic_List_long__o *)p_mostRecentTimeLimits->klass) == 0LL )
  {
    sub_B5D69C(klass, v25);
  }
  System_Collections_Generic_List_long___Add(
    klass,
    shopNotice->fields._MostRecentTimeLimit_k__BackingField,
    (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
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
    sub_B5D69C(v5, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_35615088(monoBehaviour, v5, 0LL);
  this->fields.coroutine = started;
  sub_B5D560(
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
      sub_B5D69C(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_35615756(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_B5D560(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
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
  int v2; // w2
  __int64 v3; // x3
  ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  struct ShopNoticeRemainTime_o *_4__this; // x20
  System_Action_o *onTimeUpAction; // x0
  UnityEngine_WaitForSeconds_o *v11; // x21
  bool result; // w0

  v4 = this;
  if ( (byte_42E5DC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, (_DWORD)method, v2, v3);
    this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)sub_B5D5C4(
                                                                     &UnityEngine_WaitForSeconds_TypeInfo,
                                                                     v5,
                                                                     v6,
                                                                     v7);
    byte_42E5DC6 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v11, 1.0, 0LL);
    v4->fields._loopWait_5__2 = v11;
    sub_B5D560(&v4->fields._loopWait_5__2);
    if ( _4__this )
      goto LABEL_11;
LABEL_14:
    sub_B5D69C(this, method);
  }
  if ( _1__state != 1 )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  if ( !ShopNoticeRemainTime__CheckTimeUp(_4__this, 0LL) )
    goto LABEL_11;
  this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)_4__this->fields.mostRecentTimeLimits;
  if ( !this )
    goto LABEL_14;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
  onTimeUpAction = _4__this->fields.onTimeUpAction;
  if ( onTimeUpAction )
    System_Action__Invoke(onTimeUpAction, 0LL);
LABEL_11:
  if ( _4__this->fields.isLoop )
  {
    v4->fields.__2__current = (Il2CppObject *)v4->fields._loopWait_5__2;
    sub_B5D560(&v4->fields.__2__current);
    result = 1;
    v4->fields.__1__state = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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