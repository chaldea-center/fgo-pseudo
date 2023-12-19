System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB877 & 1) == 0 )
  {
    sub_B16FFC(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo, method);
    byte_40FB877 = 1;
  }
  v6 = sub_B170CC(TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo, method, v2, v3, v4);
  TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0___ctor(
    (TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *)v6,
    -2,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 40) = battleEntity;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)battleEntity, v7, v8, v9, v10, v11, v12);
  return (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v6;
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  struct BattleUserServantData_array *userSvt; // x1
  BattleServantConfConponent_o *p__7__wrap1; // x20
  int32_t _7__wrap2; // w8
  int32_t *p__7__wrap2; // x9
  __int64 v16; // x10
  BattleServantConfConponent_c *klass; // x10
  int32_t namespaze; // w11
  bool result; // w0
  int32_t v20; // w2
  struct SimpleTreasureDeviceData_o v21; // x8
  struct SimpleTreasureDeviceData_o v22; // [xsp+8h] [xbp-18h] BYREF
  SimpleTreasureDeviceData_o v23; // 0:x0.8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap2 = &this->fields.__7__wrap2;
    _7__wrap2 = this->fields.__7__wrap2;
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
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
  p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__7__wrap1,
    (System_Int32_array **)userSvt,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  _7__wrap2 = 0;
  this->fields.__7__wrap2 = 0;
  for ( p__7__wrap2 = &this->fields.__7__wrap2; ; *p__7__wrap2 = _7__wrap2 )
  {
    klass = p__7__wrap1->klass;
    if ( !p__7__wrap1->klass )
LABEL_18:
      sub_B170D4();
    namespaze = (int32_t)klass->_1.namespaze;
    if ( _7__wrap2 >= namespaze )
    {
      p__7__wrap1->klass = 0LL;
      sub_B16F98(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
      return 0;
    }
    if ( _7__wrap2 >= (unsigned int)namespaze )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v16 = *((_QWORD *)&klass->_1.byval_arg.data + _7__wrap2);
    if ( !v16 )
      goto LABEL_18;
    method = (const MethodInfo *)*(unsigned int *)(v16 + 344);
    if ( (int)method >= 1 )
      break;
LABEL_11:
    ++_7__wrap2;
  }
  v20 = *(_DWORD *)(v16 + 348);
  v23 = (SimpleTreasureDeviceData_o)&v22;
  v22 = 0LL;
  SimpleTreasureDeviceData___ctor(v23, (int32_t)method, v20, 0LL);
  v21 = v22;
  result = 1;
  this->fields.__1__state = 1;
  this->fields.__2__current = v21;
  return result;
}


System_Collections_Generic_IEnumerator_SimpleTreasureDeviceData__o *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__GetEnumerator(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  int32_t l__initialThreadId; // w20
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *v10; // x20
  System_Int32_array **_3__battleEntity; // x1

  if ( (byte_40F792C & 1) == 0 )
  {
    sub_B16FFC(&TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo, method);
    byte_40F792C = 1;
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
    v10 = (TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *)sub_B170CC(
                                                                           TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v10 )
      sub_B170D4();
  }
  _3__battleEntity = (System_Int32_array **)this->fields.__3__battleEntity;
  v10->fields.battleEntity = (struct BattleEntity_o *)_3__battleEntity;
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.battleEntity, _3__battleEntity, v2, v3, v4, v7, v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
}


Il2CppObject *__fastcall TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0__System_Collections_IEnumerator_get_Current(
        TreasureDeviceExtractor__EnumerateTreasureDeviceData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleTreasureDeviceData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F792B & 1) == 0 )
  {
    sub_B16FFC(&SimpleTreasureDeviceData_TypeInfo, method);
    byte_40F792B = 1;
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