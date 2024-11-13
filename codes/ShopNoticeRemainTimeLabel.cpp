void __fastcall ShopNoticeRemainTimeLabel___ctor(
        ShopNoticeRemainTimeLabel_o *this,
        UILabel_o *label,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.label = label;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.label, (int64_t)label, v7, v8, v9, v10, v11, v12);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)monoBehaviour, v13, v14, v15, v16, v17, v18);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  ShopNoticeRemainTimeLabel__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  updated = ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(this, v4);
  if ( !monoBehaviour )
    sub_1BCAA3C(updated, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_70139516(monoBehaviour, updated, 0LL);
  this->fields.coroutine = started;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.coroutine, (int64_t)started, v8, v9, v10, v11, v12, v13);
}


void __fastcall ShopNoticeRemainTimeLabel__Stop(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
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


System_Collections_IEnumerator_o *__fastcall ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(
        ShopNoticeRemainTimeLabel_o *this,
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

  if ( (byte_4B12760 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_TypeInfo, method, v2);
    byte_4B12760 = 1;
  }
  v5 = sub_1BCAA2C(ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
  ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  struct ShopNoticeRemainTimeLabel_o *_4__this; // x22
  UnityEngine_WaitForSeconds_o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UILabel_o *label; // x20
  int64_t timeLimit; // x21
  __int64 v20; // x1
  int64_t v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  bool result; // w0
  int64_t loopWait_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19

  v4 = this;
  if ( (byte_4B12761 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *)sub_1BCA7E0(
                                                                        &UnityEngine_WaitForSeconds_TypeInfo,
                                                                        v7,
                                                                        v8);
    byte_4B12761 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v11, 1.0, 0LL);
    v4->fields._loopWait_5__2 = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._loopWait_5__2, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    goto LABEL_16;
  label = _4__this->fields.label;
  timeLimit = _4__this->fields.timeLimit;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_o *)LocalizationManager__GetRestTime5(
                                                                      timeLimit,
                                                                      -1LL,
                                                                      0LL);
  if ( !label )
LABEL_16:
    sub_1BCAA3C(this, method);
  UILabel__set_text(label, (System_String_o *)this, 0LL);
  v21 = _4__this->fields.timeLimit;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  if ( v21 < NetworkManager__getTime(0LL) )
    return 0;
  loopWait_5__2 = (int64_t)v4->fields._loopWait_5__2;
  v4->fields.__2__current = (Il2CppObject *)loopWait_5__2;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, loopWait_5__2, v22, v23, v24, v25, v26, v27);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__8_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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