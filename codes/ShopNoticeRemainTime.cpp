void ShopNoticeRemainTime___ctor(
        ShopNoticeRemainTime_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)monoBehaviour, v5, v6);
}


bool ShopNoticeRemainTime__CheckTimeUp(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x0
  int32_t v4; // w20
  int32_t size; // w24
  int64_t Item; // x21

  if ( (byte_4C235A8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C235A8 = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
LABEL_10:
    sub_1C2D6EC(mostRecentTimeLimits, method);
  v4 = 0;
  while ( 1 )
  {
    size = mostRecentTimeLimits->fields._size;
    if ( v4 >= size )
      break;
    Item = System_Collections_Generic_List_long___get_Item(
             mostRecentTimeLimits,
             v4,
             (const MethodInfo_37718C8 *)Method_System_Collections_Generic_List_long__get_Item__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( Item < NetworkManager__getTime(0) )
      break;
    mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
    ++v4;
    if ( !mostRecentTimeLimits )
      goto LABEL_10;
  }
  return v4 < size;
}


System_Collections_IEnumerator_o *ShopNoticeRemainTime__ExecuteEverySecondLoop(
        ShopNoticeRemainTime_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C235A7 & 1) == 0 )
  {
    sub_1C2D490(&ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo);
    byte_4C235A7 = 1;
  }
  v3 = sub_1C2D6DC(ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void ShopNoticeRemainTime__SetMostRecentTimeLimits(
        ShopNoticeRemainTime_o *this,
        System_Collections_Generic_List_long__o *mostRecentTimeLimits,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mostRecentTimeLimits = mostRecentTimeLimits;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.mostRecentTimeLimits,
    (int32_t)mostRecentTimeLimits,
    (int32_t)method,
    v3);
}


void ShopNoticeRemainTime__SetOnTimeUpAction(
        ShopNoticeRemainTime_o *this,
        System_Action_o *onTimeUpAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onTimeUpAction = onTimeUpAction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onTimeUpAction, (int32_t)onTimeUpAction, (int32_t)method, v3);
}


void ShopNoticeRemainTime__SetShopNotice(
        ShopNoticeRemainTime_o *this,
        ShopNotice_o *shopNotice,
        const MethodInfo *method)
{
  ShopNotice_o *v3; // x19
  System_Collections_Generic_List_long__o *klass; // x0
  CGThumbnailListItem_o *p_mostRecentTimeLimits; // x20
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // t1
  System_Collections_Generic_List_long__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t version; // w8
  struct System_Int64_array *items; // x9
  _QWORD *v13; // x10

  v3 = shopNotice;
  if ( (byte_4C235A6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C235A6 = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  p_mostRecentTimeLimits = (CGThumbnailListItem_o *)&this->fields.mostRecentTimeLimits;
  klass = mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
    p_mostRecentTimeLimits->klass = (CGThumbnailListItem_c *)v8;
    sub_1C2D434(p_mostRecentTimeLimits, (int32_t)v8, v9, v10);
    klass = (System_Collections_Generic_List_long__o *)p_mostRecentTimeLimits->klass;
    if ( !p_mostRecentTimeLimits->klass )
      goto LABEL_10;
  }
  version = klass->fields._version;
  klass->fields._size = 0;
  klass->fields._version = version + 1;
  if ( !v3
    || (shopNotice = (ShopNotice_o *)v3->fields._MostRecentTimeLimit_k__BackingField,
        items = klass->fields._items,
        v13 = Method_System_Collections_Generic_List_long__Add__,
        klass->fields._version = version + 2,
        !items) )
  {
LABEL_10:
    sub_1C2D6EC(klass, shopNotice);
  }
  if ( LODWORD(items->max_length) )
  {
    klass->fields._size = 1;
    items->m_Items[0] = (int64_t)shopNotice;
  }
  else
  {
    System_Collections_Generic_List_long___AddWithResize(
      klass,
      (int64_t)shopNotice,
      *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
}


void ShopNoticeRemainTime__Start(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x20
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x0
  __int64 v6; // x1
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  ShopNoticeRemainTime__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  this->fields.isLoop = 1;
  v5 = ShopNoticeRemainTime__ExecuteEverySecondLoop(this, v4);
  if ( !monoBehaviour )
    sub_1C2D6EC(v5, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71149276(monoBehaviour, v5, 0);
  this->fields.coroutine = started;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9);
}


void ShopNoticeRemainTime__Stop(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  CGThumbnailListItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_coroutine = (CGThumbnailListItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  this->fields.isLoop = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1C2D6EC(0, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_71149896(monoBehaviour, coroutine, 0);
    p_coroutine->klass = 0;
    sub_1C2D434(p_coroutine, 0, v5, v6);
  }
}


void ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12___ctor(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__MoveNext(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *v2; // x19
  int32_t _1__state; // w8
  ShopNoticeRemainTime_o *_4__this; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x8
  int v8; // w9
  struct System_Action_o *onTimeUpAction; // x8
  UnityEngine_WaitForSeconds_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *loopWait_5__2; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4C235A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C235A9 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v10 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v10, 1.0, 0);
    v2->fields._loopWait_5__2 = v10;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._loopWait_5__2, (int32_t)v10, v11, v12);
    if ( _4__this )
      goto LABEL_11;
LABEL_14:
    sub_1C2D6EC(this, method);
  }
  if ( _1__state != 1 )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)ShopNoticeRemainTime__CheckTimeUp(_4__this, method);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_11;
  mostRecentTimeLimits = _4__this->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
    goto LABEL_14;
  v8 = mostRecentTimeLimits->fields._version + 1;
  mostRecentTimeLimits->fields._size = 0;
  mostRecentTimeLimits->fields._version = v8;
  onTimeUpAction = _4__this->fields.onTimeUpAction;
  if ( onTimeUpAction )
    ((void (__fastcall *)(intptr_t, intptr_t))onTimeUpAction->fields.invoke_impl)(
      onTimeUpAction->fields.method_code,
      onTimeUpAction->fields.method);
LABEL_11:
  if ( _4__this->fields.isLoop )
  {
    loopWait_5__2 = (Il2CppObject *)v2->fields._loopWait_5__2;
    v2->fields.__2__current = loopWait_5__2;
    p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
    sub_1C2D434(p__2__current, (int32_t)loopWait_5__2, v5, v6);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__System_Collections_IEnumerator_Reset(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__System_Collections_IEnumerator_get_Current(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12__System_IDisposable_Dispose(
        ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *this,
        const MethodInfo *method)
{
  ;
}