System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData(
        BattleEntity_o *battleEntity,
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

  if ( (byte_421681B & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo, method);
    byte_421681B = 1;
  }
  v4 = sub_B0D974(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo, method, v2);
  TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0___ctor(
    (TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *)v4,
    -2,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 40) = battleEntity;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 40), (System_Int32_array **)battleEntity, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v4;
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
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  struct BattleUserServantData_array *userSvt; // x1
  struct BattleUserServantData_array **p__7__wrap1; // x20
  int32_t _7__wrap2; // w8
  int32_t *p__7__wrap2; // x9
  BattleUserServantData_o *v10; // x10
  int32_t treasureDeviceId; // w1
  struct BattleUserServantData_array *v12; // x10
  int32_t max_length; // w11
  bool result; // w0
  int32_t treasureDeviceLv; // w2
  struct SimpleTreasureDeviceData_o v16; // x8
  __int64 v17; // x0
  struct SimpleTreasureDeviceData_o v18; // [xsp+8h] [xbp-18h] BYREF
  SimpleTreasureDeviceData_o v19; // 0:x0.8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap2 = &this->fields.__7__wrap2;
    _7__wrap2 = this->fields.__7__wrap2;
    p__7__wrap1 = &this->fields.__7__wrap1;
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
  p__7__wrap1 = &this->fields.__7__wrap1;
  sub_B0D840(&this->fields.__7__wrap1, userSvt);
  _7__wrap2 = 0;
  this->fields.__7__wrap2 = 0;
  for ( p__7__wrap2 = &this->fields.__7__wrap2; ; *p__7__wrap2 = _7__wrap2 )
  {
    v12 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
LABEL_18:
      sub_B0D97C(this);
    max_length = v12->max_length;
    if ( _7__wrap2 >= max_length )
    {
      *p__7__wrap1 = 0LL;
      sub_B0D840(p__7__wrap1, 0LL);
      return 0;
    }
    if ( _7__wrap2 >= (unsigned int)max_length )
    {
      v17 = sub_B0D9A8(this);
      sub_B0D948(v17, 0LL);
    }
    v10 = v12->m_Items[_7__wrap2];
    if ( !v10 )
      goto LABEL_18;
    treasureDeviceId = v10->fields.treasureDeviceId;
    if ( treasureDeviceId >= 1 )
      break;
LABEL_11:
    ++_7__wrap2;
  }
  treasureDeviceLv = v10->fields.treasureDeviceLv;
  v19 = (SimpleTreasureDeviceData_o)&v18;
  v18 = 0LL;
  SimpleTreasureDeviceData___ctor(v19, treasureDeviceId, treasureDeviceLv, 0LL);
  v16 = v18;
  result = 1;
  this->fields.__1__state = 1;
  this->fields.__2__current = v16;
  return result;
}


System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__GetEnumerator(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *v5; // x20
  __int64 CurrentManagedThreadId; // x0
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_42125C9 & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo, method);
    byte_42125C9 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v5 = this;
  }
  else
  {
    v5 = (TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *)sub_B0D974(
                                                                          TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo,
                                                                          method,
                                                                          v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    v5->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v5->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v5 )
      sub_B0D97C(CurrentManagedThreadId);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v5->fields.battleEntity = _3__battleEntity;
  sub_B0D840(&v5->fields.battleEntity, _3__battleEntity);
  return (System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *)v5;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_IEnumerator_get_Current(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleTreasureDeviceData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42125C8 & 1) == 0 )
  {
    sub_B0D8A4(&SimpleTreasureDeviceData_TypeInfo, method);
    byte_42125C8 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleTreasureDeviceData_TypeInfo, &_2__current);
}


void __fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_IDisposable_Dispose(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  ;
}