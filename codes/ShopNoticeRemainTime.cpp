void __fastcall ShopNoticeRemainTime___ctor(
        ShopNoticeRemainTime_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)monoBehaviour, v5, v6);
}


bool __fastcall ShopNoticeRemainTime__CheckTimeUp(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x0
  int32_t v6; // w20
  int32_t size; // w24
  int64_t Item; // x21

  if ( (byte_49F8B10 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    byte_49F8B10 = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
LABEL_10:
    sub_1B64324(mostRecentTimeLimits);
  v6 = 0;
  while ( 1 )
  {
    size = mostRecentTimeLimits->fields._size;
    if ( v6 >= size )
      break;
    Item = System_Collections_Generic_List_long___get_Item(
             mostRecentTimeLimits,
             v6,
             (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( Item < NetworkManager__getTime(0LL) )
      break;
    mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
    ++v6;
    if ( !mostRecentTimeLimits )
      goto LABEL_10;
  }
  return v6 < size;
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop(
        ShopNoticeRemainTime_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F8B0F & 1) == 0 )
  {
    sub_1B640C8(&ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo, method);
    byte_49F8B0F = 1;
  }
  v4 = sub_1B64314(ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ShopNoticeRemainTime__SetMostRecentTimeLimits(
        ShopNoticeRemainTime_o *this,
        System_Collections_Generic_List_long__o *mostRecentTimeLimits,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mostRecentTimeLimits = mostRecentTimeLimits;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mostRecentTimeLimits,
    (int32_t)mostRecentTimeLimits,
    (int32_t)method,
    v3);
}


void __fastcall ShopNoticeRemainTime__SetOnTimeUpAction(
        ShopNoticeRemainTime_o *this,
        System_Action_o *onTimeUpAction,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.onTimeUpAction = onTimeUpAction;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.onTimeUpAction,
    (int32_t)onTimeUpAction,
    (int32_t)method,
    v3);
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
  ServantStatusBattleListViewItem_o *p_mostRecentTimeLimits; // x20
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // t1
  System_Collections_Generic_List_long__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t version; // w8
  int64_t MostRecentTimeLimit_k__BackingField; // x1
  struct System_Int64_array *items; // x9
  _QWORD *v17; // x10

  if ( (byte_49F8B0E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, shopNotice);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_49F8B0E = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  p_mostRecentTimeLimits = (ServantStatusBattleListViewItem_o *)&this->fields.mostRecentTimeLimits;
  klass = mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
  {
    v11 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       shopNotice,
                                                       method);
    System_Collections_Generic_List_long____ctor(
      v11,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    p_mostRecentTimeLimits->klass = (ServantStatusBattleListViewItem_c *)v11;
    sub_1B6406C(p_mostRecentTimeLimits, (int32_t)v11, v12, v13);
    klass = (System_Collections_Generic_List_long__o *)p_mostRecentTimeLimits->klass;
    if ( !p_mostRecentTimeLimits->klass )
      goto LABEL_10;
  }
  version = klass->fields._version;
  klass->fields._size = 0;
  klass->fields._version = version + 1;
  if ( !shopNotice
    || (MostRecentTimeLimit_k__BackingField = shopNotice->fields._MostRecentTimeLimit_k__BackingField,
        items = klass->fields._items,
        v17 = Method_System_Collections_Generic_List_long__Add__,
        klass->fields._version = version + 2,
        !items) )
  {
LABEL_10:
    sub_1B64324(klass);
  }
  if ( items->max_length )
  {
    klass->fields._size = 1;
    items->m_Items[0] = MostRecentTimeLimit_k__BackingField;
  }
  else
  {
    System_Collections_Generic_List_long___AddWithResize(
      klass,
      MostRecentTimeLimit_k__BackingField,
      *(const MethodInfo_3495074 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
}


void __fastcall ShopNoticeRemainTime__Start(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x20
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  ShopNoticeRemainTime__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  this->fields.isLoop = 1;
  v5 = ShopNoticeRemainTime__ExecuteEverySecondLoop(this, v4);
  if ( !monoBehaviour )
    sub_1B64324(v5);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69113008(monoBehaviour, v5, 0LL);
  this->fields.coroutine = started;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.coroutine, (int32_t)started, v7, v8);
}


void __fastcall ShopNoticeRemainTime__Stop(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  ServantStatusBattleListViewItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  p_coroutine = (ServantStatusBattleListViewItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  this->fields.isLoop = 0;
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
  ShopNoticeRemainTime_o *_4__this; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x8
  int v10; // w9
  struct System_Action_o *onTimeUpAction; // x8
  UnityEngine_WaitForSeconds_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *loopWait_5__2; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_49F8B11 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, method);
    this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_49F8B11 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v12 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v12, 1.0, 0LL);
    v3->fields._loopWait_5__2 = v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._loopWait_5__2, (int32_t)v12, v13, v14);
    if ( _4__this )
      goto LABEL_11;
LABEL_14:
    sub_1B64324(this);
  }
  if ( _1__state != 1 )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)ShopNoticeRemainTime__CheckTimeUp(_4__this, method);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_11;
  mostRecentTimeLimits = _4__this->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
    goto LABEL_14;
  v10 = mostRecentTimeLimits->fields._version + 1;
  mostRecentTimeLimits->fields._size = 0;
  mostRecentTimeLimits->fields._version = v10;
  onTimeUpAction = _4__this->fields.onTimeUpAction;
  if ( onTimeUpAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onTimeUpAction->fields.m_target)(
      onTimeUpAction->fields.original_method_info,
      *(_QWORD *)&onTimeUpAction->fields.extra_arg);
LABEL_11:
  if ( _4__this->fields.isLoop )
  {
    loopWait_5__2 = (Il2CppObject *)v3->fields._loopWait_5__2;
    v3->fields.__2__current = loopWait_5__2;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
    sub_1B6406C(p__2__current, (int32_t)loopWait_5__2, v7, v8);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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