System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *TreasureDeviceExtractor__EnumerateTreasureDeviceData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C45490 & 1) == 0 )
  {
    sub_1C37058(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    byte_4C45490 = 1;
  }
  v3 = sub_1C372A4(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)battleEntity, v4, v5);
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
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  struct BattleUserServantData_array *userSvt; // x1
  int32_t _7__wrap2; // w8
  BattleUserServantData_o *v10; // x9
  int32_t treasureDeviceId; // w1
  CGThumbnailListItem_o *p__7__wrap1; // x0
  struct BattleUserServantData_array *_7__wrap1; // x9
  int32_t max_length; // w10
  bool result; // w0
  int32_t treasureDeviceLv; // w2
  SimpleTreasureDeviceData_o v17; // x0
  struct SimpleTreasureDeviceData_o v18; // x8
  struct SimpleTreasureDeviceData_o v19; // [xsp+8h] [xbp-18h] BYREF

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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__7__wrap1, (int32_t)userSvt, v2, v3);
  _7__wrap2 = 0;
  for ( this->fields.__7__wrap2 = 0; ; this->fields.__7__wrap2 = _7__wrap2 )
  {
    p__7__wrap1 = (CGThumbnailListItem_o *)&this->fields.__7__wrap1;
    _7__wrap1 = this->fields.__7__wrap1;
    if ( !_7__wrap1 )
LABEL_17:
      sub_1C372B4(p__7__wrap1);
    max_length = _7__wrap1->max_length;
    if ( _7__wrap2 >= max_length )
    {
      p__7__wrap1->klass = 0;
      sub_1C36FFC(p__7__wrap1, 0, v2, v3);
      return 0;
    }
    if ( _7__wrap2 >= (unsigned int)max_length )
      sub_1C372BC(p__7__wrap1);
    v10 = _7__wrap1->m_Items[_7__wrap2];
    if ( !v10 )
      goto LABEL_17;
    treasureDeviceId = v10->fields.treasureDeviceId;
    if ( treasureDeviceId >= 1 )
      break;
LABEL_11:
    ++_7__wrap2;
  }
  treasureDeviceLv = v10->fields.treasureDeviceLv;
  v17 = (SimpleTreasureDeviceData_o)&v19;
  v19 = 0;
  SimpleTreasureDeviceData___ctor(v17, treasureDeviceId, treasureDeviceLv, 0);
  v18 = v19;
  result = 1;
  this->fields.__1__state = 1;
  this->fields.__2__current = v18;
  return result;
}


System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__GetEnumerator(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *v6; // x20
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_4C45492 & 1) == 0 )
  {
    sub_1C37058(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    byte_4C45492 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *)sub_1C372A4(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v6->fields.battleEntity = _3__battleEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.battleEntity, (int32_t)_3__battleEntity, v4, v5);
  return (System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *)v6;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_IEnumerator_get_Current(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  struct SimpleTreasureDeviceData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45491 & 1) == 0 )
  {
    sub_1C37058(&SimpleTreasureDeviceData_TypeInfo);
    byte_4C45491 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleTreasureDeviceData_TypeInfo, &_2__current, v2, v3, v4, v5, v6, v7);
}


void TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_IDisposable_Dispose(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  ;
}