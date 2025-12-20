System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *TreasureDeviceExtractor__EnumerateTreasureDeviceData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2EDD8 & 1) == 0 )
  {
    sub_1C94098(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    byte_4D2EDD8 = 1;
  }
  v3 = sub_1C942E4(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)battleEntity, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v3;
}


void TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0___ctor(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__MoveNext(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  struct BattleUserServantData_array *userSvt; // x1
  int32_t _7__wrap2; // w8
  BattleUserServantData_o *v14; // x9
  GrandQuestFolderBoardItem_o *p__7__wrap1; // x0
  struct BattleUserServantData_array *_7__wrap1; // x9
  int32_t max_length; // w10
  bool result; // w0
  int32_t treasureDeviceLv; // w2
  SimpleTreasureDeviceData_o v20; // x0
  struct SimpleTreasureDeviceData_o v21; // x8
  struct SimpleTreasureDeviceData_o v22; // [xsp+8h] [xbp-18h] BYREF

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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__7__wrap1, (int32_t)userSvt, v2, v3, v4, v5, v6, v7);
  _7__wrap2 = 0;
  for ( this->fields.__7__wrap2 = 0; ; this->fields.__7__wrap2 = _7__wrap2 )
  {
    p__7__wrap1 = (GrandQuestFolderBoardItem_o *)&this->fields.__7__wrap1;
    _7__wrap1 = this->fields.__7__wrap1;
    if ( !_7__wrap1 )
LABEL_17:
      sub_1C942F0(p__7__wrap1, method);
    max_length = _7__wrap1->max_length;
    if ( _7__wrap2 >= max_length )
    {
      p__7__wrap1->klass = 0;
      sub_1C9403C(p__7__wrap1, 0, v2, v3, v4, v5, v6, v7);
      return 0;
    }
    if ( _7__wrap2 >= (unsigned int)max_length )
      sub_1C942F8(p__7__wrap1);
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
  v20 = (SimpleTreasureDeviceData_o)&v22;
  v22 = 0;
  SimpleTreasureDeviceData___ctor(v20, (int32_t)method, treasureDeviceLv, 0);
  v21 = v22;
  result = 1;
  this->fields.__1__state = 1;
  this->fields.__2__current = v21;
  return result;
}


System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__GetEnumerator(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_4D2EDDA & 1) == 0 )
  {
    sub_1C94098(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    byte_4D2EDDA = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *)sub_1C942E4(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v10->fields.battleEntity,
    (int32_t)_3__battleEntity,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return (System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *)v10;
}


SimpleTreasureDeviceData_o TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__get_Current(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_IEnumerator_Reset(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_IEnumerator_get_Current(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleTreasureDeviceData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2EDD9 & 1) == 0 )
  {
    sub_1C94098(&SimpleTreasureDeviceData_TypeInfo);
    byte_4D2EDD9 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleTreasureDeviceData_TypeInfo, &_2__current);
}


void TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_IDisposable_Dispose(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  ;
}