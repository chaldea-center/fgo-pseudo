void __fastcall ShopNoticeRemainTime___ctor(
        ShopNoticeRemainTime_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)monoBehaviour, v5, v6);
}


bool __fastcall ShopNoticeRemainTime__CheckTimeUp(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x0
  int32_t v6; // w20
  int32_t size; // w24
  int64_t Item; // x21

  if ( (byte_4AFE36A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    byte_4AFE36A = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
LABEL_10:
    sub_1BC3264(mostRecentTimeLimits, method);
  v6 = 0;
  while ( 1 )
  {
    size = mostRecentTimeLimits->fields._size;
    if ( v6 >= size )
      break;
    Item = System_Collections_Generic_List_long___get_Item(
             mostRecentTimeLimits,
             v6,
             (const MethodInfo_3688B84 *)Method_System_Collections_Generic_List_long__get_Item__);
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
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4AFE369 & 1) == 0 )
  {
    sub_1BC3008(&ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo, method);
    byte_4AFE369 = 1;
  }
  v3 = sub_1BC3254(ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ShopNoticeRemainTime__SetMostRecentTimeLimits(
        ShopNoticeRemainTime_o *this,
        System_Collections_Generic_List_long__o *mostRecentTimeLimits,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mostRecentTimeLimits = mostRecentTimeLimits;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.mostRecentTimeLimits,
    (int32_t)mostRecentTimeLimits,
    (int32_t)method,
    v3);
}


void __fastcall ShopNoticeRemainTime__SetOnTimeUpAction(
        ShopNoticeRemainTime_o *this,
        System_Action_o *onTimeUpAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onTimeUpAction = onTimeUpAction;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onTimeUpAction, (int32_t)onTimeUpAction, (int32_t)method, v3);
}


void __fastcall ShopNoticeRemainTime__SetShopNotice(
        ShopNoticeRemainTime_o *this,
        ShopNotice_o *shopNotice,
        const MethodInfo *method)
{
  ShopNotice_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *klass; // x0
  CGThumbnailListItem_o *p_mostRecentTimeLimits; // x20
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // t1
  System_Collections_Generic_List_long__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t version; // w8
  struct System_Int64_array *items; // x9
  _QWORD *v16; // x10

  v3 = shopNotice;
  if ( (byte_4AFE368 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, shopNotice);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_4AFE368 = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  p_mostRecentTimeLimits = (CGThumbnailListItem_o *)&this->fields.mostRecentTimeLimits;
  klass = mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
  {
    v11 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v11,
      (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
    p_mostRecentTimeLimits->klass = (CGThumbnailListItem_c *)v11;
    sub_1BC2FAC(p_mostRecentTimeLimits, (int32_t)v11, v12, v13);
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
        v16 = Method_System_Collections_Generic_List_long__Add__,
        klass->fields._version = version + 2,
        !items) )
  {
LABEL_10:
    sub_1BC3264(klass, shopNotice);
  }
  if ( items->max_length )
  {
    klass->fields._size = 1;
    items->m_Items[0] = (int64_t)shopNotice;
  }
  else
  {
    System_Collections_Generic_List_long___AddWithResize(
      klass,
      (int64_t)shopNotice,
      *(const MethodInfo_3688E74 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
}


void __fastcall ShopNoticeRemainTime__Start(ShopNoticeRemainTime_o *this, const MethodInfo *method)
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
    sub_1BC3264(v5, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_70019872(monoBehaviour, v5, 0LL);
  this->fields.coroutine = started;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9);
}


void __fastcall ShopNoticeRemainTime__Stop(ShopNoticeRemainTime_o *this, const MethodInfo *method)
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
      sub_1BC3264(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_70020492(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_1BC2FAC(p_coroutine, 0, v5, v6);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  ShopNoticeRemainTime_o *_4__this; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x8
  int v9; // w9
  struct System_Action_o *onTimeUpAction; // x8
  UnityEngine_WaitForSeconds_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *loopWait_5__2; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4AFE36B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Clear__, method);
    this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4AFE36B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v11, 1.0, 0LL);
    v2->fields._loopWait_5__2 = v11;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields._loopWait_5__2, (int32_t)v11, v12, v13);
    if ( _4__this )
      goto LABEL_11;
LABEL_14:
    sub_1BC3264(this, method);
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
  v9 = mostRecentTimeLimits->fields._version + 1;
  mostRecentTimeLimits->fields._size = 0;
  mostRecentTimeLimits->fields._version = v9;
  onTimeUpAction = _4__this->fields.onTimeUpAction;
  if ( onTimeUpAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onTimeUpAction->fields.m_target)(
      onTimeUpAction->fields.original_method_info,
      *(_QWORD *)&onTimeUpAction->fields.extra_arg);
LABEL_11:
  if ( _4__this->fields.isLoop )
  {
    loopWait_5__2 = (Il2CppObject *)v2->fields._loopWait_5__2;
    v2->fields.__2__current = loopWait_5__2;
    p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
    sub_1BC2FAC(p__2__current, (int32_t)loopWait_5__2, v6, v7);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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