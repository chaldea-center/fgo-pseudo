void __fastcall ShopNoticeRemainTime___ctor(
        ShopNoticeRemainTime_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)monoBehaviour, v5, v6, v7, v8, v9, v10);
}


bool __fastcall ShopNoticeRemainTime__CheckTimeUp(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x0
  int32_t v9; // w20
  int32_t size; // w24
  __int64 v11; // x1
  int64_t Item; // x21

  if ( (byte_4B1275E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B1275E = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
LABEL_10:
    sub_1BCAA3C(mostRecentTimeLimits, method);
  v9 = 0;
  while ( 1 )
  {
    size = mostRecentTimeLimits->fields._size;
    if ( v9 >= size )
      break;
    Item = System_Collections_Generic_List_long___get_Item(
             mostRecentTimeLimits,
             v9,
             (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
    if ( Item < NetworkManager__getTime(0LL) )
      break;
    mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
    ++v9;
    if ( !mostRecentTimeLimits )
      goto LABEL_10;
  }
  return v9 < size;
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeRemainTime__ExecuteEverySecondLoop(
        ShopNoticeRemainTime_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1275D & 1) == 0 )
  {
    sub_1BCA7E0(&ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo, method, v2);
    byte_4B1275D = 1;
  }
  v5 = sub_1BCAA2C(ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall ShopNoticeRemainTime__SetMostRecentTimeLimits(
        ShopNoticeRemainTime_o *this,
        System_Collections_Generic_List_long__o *mostRecentTimeLimits,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mostRecentTimeLimits = mostRecentTimeLimits;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mostRecentTimeLimits,
    (int64_t)mostRecentTimeLimits,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.onTimeUpAction = onTimeUpAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onTimeUpAction,
    (int64_t)onTimeUpAction,
    (int64_t)method,
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
  ShopNotice_o *v4; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_long__o *klass; // x0
  PartyOrganizationUtility_o *p_mostRecentTimeLimits; // x20
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // t1
  System_Collections_Generic_List_long__o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int32_t version; // w8
  struct System_Int64_array *items; // x9
  _QWORD *v24; // x10

  v4 = shopNotice;
  if ( (byte_4B1275C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, shopNotice, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v10, v11);
    byte_4B1275C = 1;
  }
  mostRecentTimeLimits = this->fields.mostRecentTimeLimits;
  p_mostRecentTimeLimits = (PartyOrganizationUtility_o *)&this->fields.mostRecentTimeLimits;
  klass = mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
  {
    v15 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       shopNotice,
                                                       method,
                                                       v3);
    System_Collections_Generic_List_long____ctor(
      v15,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    p_mostRecentTimeLimits->klass = (PartyOrganizationUtility_c *)v15;
    sub_1BCA784(p_mostRecentTimeLimits, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    klass = (System_Collections_Generic_List_long__o *)p_mostRecentTimeLimits->klass;
    if ( !p_mostRecentTimeLimits->klass )
      goto LABEL_10;
  }
  version = klass->fields._version;
  klass->fields._size = 0;
  klass->fields._version = version + 1;
  if ( !v4
    || (shopNotice = (ShopNotice_o *)v4->fields._MostRecentTimeLimit_k__BackingField,
        items = klass->fields._items,
        v24 = Method_System_Collections_Generic_List_long__Add__,
        klass->fields._version = version + 2,
        !items) )
  {
LABEL_10:
    sub_1BCAA3C(klass, shopNotice);
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
      *(const MethodInfo_3589C90 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
}


void __fastcall ShopNoticeRemainTime__Start(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x20
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x0
  __int64 v6; // x1
  struct UnityEngine_Coroutine_o *started; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  ShopNoticeRemainTime__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  this->fields.isLoop = 1;
  v5 = ShopNoticeRemainTime__ExecuteEverySecondLoop(this, v4);
  if ( !monoBehaviour )
    sub_1BCAA3C(v5, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_70139516(monoBehaviour, v5, 0LL);
  this->fields.coroutine = started;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.coroutine, (int64_t)started, v8, v9, v10, v11, v12, v13);
}


void __fastcall ShopNoticeRemainTime__Stop(ShopNoticeRemainTime_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  PartyOrganizationUtility_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_coroutine = (PartyOrganizationUtility_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  this->fields.isLoop = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1BCAA3C(0LL, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_70140136(monoBehaviour, coroutine, 0LL);
    p_coroutine->klass = 0LL;
    sub_1BCA784(p_coroutine, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v3; // x3
  ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t _1__state; // w8
  ShopNoticeRemainTime_o *_4__this; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Collections_Generic_List_long__o *mostRecentTimeLimits; // x8
  int v16; // w9
  struct System_Action_o *onTimeUpAction; // x8
  UnityEngine_WaitForSeconds_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t loopWait_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4B1275F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, method, v2);
    this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)sub_1BCA7E0(
                                                                     &UnityEngine_WaitForSeconds_TypeInfo,
                                                                     v5,
                                                                     v6);
    byte_4B1275F = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v18 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v18, 1.0, 0LL);
    v4->fields._loopWait_5__2 = v18;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._loopWait_5__2, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    if ( _4__this )
      goto LABEL_11;
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state != 1 )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  this = (ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_o *)ShopNoticeRemainTime__CheckTimeUp(_4__this, method);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_11;
  mostRecentTimeLimits = _4__this->fields.mostRecentTimeLimits;
  if ( !mostRecentTimeLimits )
    goto LABEL_14;
  v16 = mostRecentTimeLimits->fields._version + 1;
  mostRecentTimeLimits->fields._size = 0;
  mostRecentTimeLimits->fields._version = v16;
  onTimeUpAction = _4__this->fields.onTimeUpAction;
  if ( onTimeUpAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onTimeUpAction->fields.m_target)(
      onTimeUpAction->fields.original_method_info,
      *(_QWORD *)&onTimeUpAction->fields.extra_arg);
LABEL_11:
  if ( _4__this->fields.isLoop )
  {
    loopWait_5__2 = (int64_t)v4->fields._loopWait_5__2;
    v4->fields.__2__current = (Il2CppObject *)loopWait_5__2;
    p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
    sub_1BCA784(p__2__current, loopWait_5__2, v9, v10, v11, v12, v13, v14);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_ShopNoticeRemainTime__ExecuteEverySecondLoop_d__12_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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