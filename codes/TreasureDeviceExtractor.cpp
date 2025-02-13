System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDE7DC & 1) == 0 )
  {
    sub_1C21E38(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    byte_4BDE7DC = 1;
  }
  v3 = sub_1C22084(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)battleEntity, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v3;
}


void __fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0___ctor(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__MoveNext(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  struct BattleUserServantData_array *userSvt; // x1
  int32_t _7__wrap2; // w8
  BattleUserServantData_o *v14; // x9
  PartyOrganizationUtility_o *p__7__wrap1; // x0
  struct BattleUserServantData_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  bool result; // w0
  int32_t treasureDeviceLv; // w2
  struct SimpleTreasureDeviceData_o v20; // x8
  struct SimpleTreasureDeviceData_o v21; // [xsp+8h] [xbp-18h] BYREF
  SimpleTreasureDeviceData_o v22; // 0:x0.8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap2 = this->fields.__7__wrap2;
    this->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( _1__state )
    return 0;
  battleEntity = this->fields.battleEntity;
  this->fields.__1__state = -1;
  if ( !battleEntity )
    return 0;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return 0;
  userSvt = battleInfo->fields.userSvt;
  if ( !userSvt )
    return 0;
  this->fields.__7__wrap1 = userSvt;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__7__wrap1, (int64_t)userSvt, v2, v3, v4, v5, v6, v7);
  _7__wrap2 = 0;
  for ( this->fields.__7__wrap2 = 0; ; this->fields.__7__wrap2 = _7__wrap2 )
  {
    p__7__wrap1 = (PartyOrganizationUtility_o *)&this->fields.__7__wrap1;
    _7__wrap1 = this->fields.__7__wrap1;
    if ( !_7__wrap1 )
LABEL_17:
      sub_1C22094(p__7__wrap1, method);
    max_length = _7__wrap1->max_length;
    if ( _7__wrap2 >= (int)max_length )
    {
      p__7__wrap1->klass = 0LL;
      sub_1C21DDC(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
      return 0;
    }
    if ( _7__wrap2 >= max_length )
      sub_1C2209C(p__7__wrap1, method);
    v14 = _7__wrap1->m_Items[_7__wrap2];
    if ( !v14 )
      goto LABEL_17;
    method = (const MethodInfo *)(unsigned int)v14->fields.treasureDeviceId;
    if ( (int)method >= 1 )
      break;
LABEL_11:
    ++_7__wrap2;
  }
  treasureDeviceLv = v14->fields.treasureDeviceLv;
  v22 = (SimpleTreasureDeviceData_o)&v21;
  v21 = 0LL;
  SimpleTreasureDeviceData___ctor(v22, (int32_t)method, treasureDeviceLv, 0LL);
  v20 = v21;
  result = 1;
  this->fields.__1__state = 1;
  this->fields.__2__current = v20;
  return result;
}


System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__GetEnumerator(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_4BDE7DE & 1) == 0 )
  {
    sub_1C21E38(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    byte_4BDE7DE = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *)sub_1C22084(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v10->fields.battleEntity,
    (int64_t)_3__battleEntity,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return (System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *)v10;
}


SimpleTreasureDeviceData_o __fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__get_Current(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_IEnumerator_Reset(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_IEnumerator_get_Current(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleTreasureDeviceData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDE7DD & 1) == 0 )
  {
    sub_1C21E38(&SimpleTreasureDeviceData_TypeInfo);
    byte_4BDE7DD = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleTreasureDeviceData_TypeInfo, &_2__current, v2, v3, v4);
}


void __fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_IDisposable_Dispose(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  ;
}