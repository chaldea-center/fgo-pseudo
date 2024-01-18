System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_41899AF & 1) == 0 )
  {
    sub_B2C35C(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo, method);
    byte_41899AF = 1;
  }
  v3 = sub_B2C42C(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
  TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0___ctor(
    (TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)battleEntity, v6, v7, v8, v9, v10, v11);
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
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  struct BattleUserServantData_array *userSvt; // x1
  struct BattleUserServantData_array **p__7__wrap1; // x20
  int32_t _7__wrap2; // w8
  int32_t *p__7__wrap2; // x9
  BattleUserServantData_o *v10; // x10
  struct BattleUserServantData_array *v11; // x10
  int32_t max_length; // w11
  bool result; // w0
  int32_t treasureDeviceLv; // w2
  struct SimpleTreasureDeviceData_o v15; // x8
  __int64 v16; // x0
  struct SimpleTreasureDeviceData_o v17; // [xsp+8h] [xbp-18h] BYREF
  SimpleTreasureDeviceData_o v18; // 0:x0.8

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
  sub_B2C2F8(&this->fields.__7__wrap1, userSvt);
  _7__wrap2 = 0;
  this->fields.__7__wrap2 = 0;
  for ( p__7__wrap2 = &this->fields.__7__wrap2; ; *p__7__wrap2 = _7__wrap2 )
  {
    v11 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
LABEL_18:
      sub_B2C434(this, method);
    max_length = v11->max_length;
    if ( _7__wrap2 >= max_length )
    {
      *p__7__wrap1 = 0LL;
      sub_B2C2F8(p__7__wrap1, 0LL);
      return 0;
    }
    if ( _7__wrap2 >= (unsigned int)max_length )
    {
      v16 = sub_B2C460(this);
      sub_B2C400(v16, 0LL);
    }
    v10 = v11->m_Items[_7__wrap2];
    if ( !v10 )
      goto LABEL_18;
    method = (const MethodInfo *)(unsigned int)v10->fields.treasureDeviceId;
    if ( (int)method >= 1 )
      break;
LABEL_11:
    ++_7__wrap2;
  }
  treasureDeviceLv = v10->fields.treasureDeviceLv;
  v18 = (SimpleTreasureDeviceData_o)&v17;
  v17 = 0LL;
  SimpleTreasureDeviceData___ctor(v18, (int32_t)method, treasureDeviceLv, 0LL);
  v15 = v17;
  result = 1;
  this->fields.__1__state = 1;
  this->fields.__2__current = v15;
  return result;
}


System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__GetEnumerator(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_4185361 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo, method);
    byte_4185361 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *)sub_B2C42C(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B2C434(CurrentManagedThreadId, v6);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v4->fields.battleEntity = _3__battleEntity;
  sub_B2C2F8(&v4->fields.battleEntity, _3__battleEntity);
  return (System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *)v4;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_IEnumerator_get_Current(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleTreasureDeviceData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185360 & 1) == 0 )
  {
    sub_B2C35C(&SimpleTreasureDeviceData_TypeInfo, method);
    byte_4185360 = 1;
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