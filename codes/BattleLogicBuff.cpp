void __fastcall BattleLogicBuff___ctor(BattleLogicBuff_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicBuff_BaseProcess___ctor(BattleLogicBuff_BaseProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicBuff_BaseProcess__AfterAllAddCalcBuffParam(
        BattleLogicBuff_BaseProcess_o *this,
        int32_t *totalParam,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicBuff_BaseProcess__PrevAddCalcBuffParam(
        BattleLogicBuff_BaseProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        int32_t totalParam,
        int32_t plusMinus,
        int32_t *curParam,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicBuff_ConvertReduceRegainProcess___ctor(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleLogicBuff_ConvertReduceRegainProcess__CheckHpReduceToRegainIndiv(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        int32_t *curParam,
        const MethodInfo *method)
{
  BattleLogicBuff_ConvertReduceRegainProcess_o *v6; // x20
  BattleServantData_o *selfSvt; // x24
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23
  const MethodInfo *v10; // x6
  const MethodInfo *v11; // x4
  bool result; // w0

  v6 = this;
  if ( (byte_42AF16A & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_B52984(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_42AF16A = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B52A54(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v9, selfSvt, 0LL, 0LL, 0LL, 0LL, v10),
        !damageBuff)
    || (this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)BattleBuffData_BuffData__GetIndividualty(
                                                                 damageBuff,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 v11),
        !buffData) )
  {
    sub_B52A5C(this, damageBuff);
  }
  if ( !BattleBuffData__checkActBuffDamageBuffIndiv(buffData, 107, v9, (System_Int32_array *)this, 0LL) )
    return 0;
  result = 1;
  v6->fields._TotalConvertReduceToRegainParam_k__BackingField += *curParam;
  *curParam = 0;
  return result;
}


int32_t __fastcall BattleLogicBuff_ConvertReduceRegainProcess__get_TotalConvertReduceToRegainParam(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        const MethodInfo *method)
{
  return this->fields._TotalConvertReduceToRegainParam_k__BackingField;
}


void __fastcall BattleLogicBuff_ConvertReduceRegainProcess__set_TotalConvertReduceToRegainParam(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TotalConvertReduceToRegainParam_k__BackingField = value;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___ctor(
        BattleLogicBuff_PreventDeathDamageProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
}


int32_t __fastcall BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
        BattleLogicBuff_PreventDeathDamageProcess_o *this,
        int32_t damage,
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *reduceHpBuffList,
        const MethodInfo *method)
{
  struct BattleServantData_o *selfSvt; // x0
  int32_t v8; // w0
  const MethodInfo *v9; // x3
  int32_t v11; // w22

  selfSvt = this->fields.selfSvt;
  if ( !selfSvt )
    sub_B52A5C(0LL, damage);
  v8 = ((__int64 (__fastcall *)(struct BattleServantData_o *, Il2CppMethodPointer, System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, const MethodInfo *))selfSvt->klass->vtable._13_get_resultHp.method)(
         selfSvt,
         selfSvt->klass->vtable._14_set_resultHp.methodPtr,
         reduceHpBuffList,
         method);
  if ( v8 > damage )
    return damage;
  v11 = v8;
  if ( BattleLogicBuff_PreventDeathDamageProcess__IsApplyEffect(this, v8, reduceHpBuffList, v9) )
    return v11 - 1;
  else
    return damage;
}


bool __fastcall BattleLogicBuff_PreventDeathDamageProcess__IsApplyEffect(
        BattleLogicBuff_PreventDeathDamageProcess_o *this,
        int32_t curHp,
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *reduceHpBuffList,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  struct BattleServantData_o *selfSvt; // x23
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x0
  BattleBuffData_o *buffData; // x22
  System_Int32_array *Individualty; // x25
  BattleBuffData_CheckIndividualitiesData_o *v14; // x24
  const MethodInfo *v15; // x6
  __int64 v16; // x0
  __int64 v17; // x1
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x4
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v23; // x0
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__2_0; // x20
  Il2CppObject *v26; // x21
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v35; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AF16B & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B52984(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
    sub_B52984(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__);
    sub_B52984(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    byte_42AF16B = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v6 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v6,
    (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_33;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    reduceHpBuffList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v35 = 0;
  v37 = v36;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v19 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_B52A5C(v19, v20);
    current = v37.fields.current;
    if ( !v37.fields.current )
      sub_B52A5C(v19, v20);
    klass = v37.fields.current[1].klass;
    if ( !klass )
      sub_B52A5C(0LL, v20);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, v21);
    v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B52A54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_23402588(v14, selfSvt, 0LL, 0LL, Individualty, 0LL, v15);
    if ( !buffData )
      sub_B52A5C(v16, v17);
    FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v14, 1, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v6 )
        sub_B52A5C(FirstMatchCondBuff, FirstMatchCondBuff);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
        v6,
        (WarBoardAIRoute_RouteData_o *)FirstMatchCondBuff,
        (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v35 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v6 )
LABEL_33:
    sub_B52A5C(v7, v8);
  if ( v35 < curHp && v6->fields._count > 0 )
    return 1;
  v23 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    v23 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__2_0,
      v26,
      Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v27 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    v27->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v27->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (System_Action_T__o *)_9__2_0,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  return 0;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x0

  if ( (byte_42AD7A4 & 1) == 0 )
  {
    sub_B52984(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    byte_42AD7A4 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___ctor(
        BattleLogicBuff_PreventDeathDamageProcess___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___IsApplyEffect_b__2_0(
        BattleLogicBuff_PreventDeathDamageProcess___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B52A5C(this, 0LL);
  BattleBuffData_BuffData__RevertUnused(buff, 1, 0LL);
}


void __fastcall BattleLogicBuff_ReduceHpProcess___ctor(
        BattleLogicBuff_ReduceHpProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42AF16C & 1) == 0 )
  {
    sub_B52984(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
    sub_B52984(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
    byte_42AF16C = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = sub_B52A54(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_QWORD *)(v12 + 16) = svtData;
  sub_B52920((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)svtData, v13, v14, v15, v16, v17, v18);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.preventDeathProc,
    (System_Int32_array **)v12,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = sub_B52A54(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  *(_QWORD *)(v25 + 16) = svtData;
  sub_B52920((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)svtData, v26, v27, v28, v29, v30, v31);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v25;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.convertDamageProc,
    (System_Int32_array **)v25,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


void __fastcall BattleLogicBuff_ReduceHpProcess__AfterAllAddCalcBuffParam(
        BattleLogicBuff_ReduceHpProcess_o *this,
        int32_t *totalParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v5; // x1

  v5 = (unsigned int)*totalParam;
  if ( (int)v5 >= 1 )
  {
    if ( !this->fields.preventDeathProc )
      sub_B52A5C(this, v5);
    *totalParam = BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
                    this->fields.preventDeathProc,
                    v5,
                    this->fields.buffList,
                    v3);
  }
}


int32_t __fastcall BattleLogicBuff_ReduceHpProcess__GetFixDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x20
  BattleLogicBuff_ReduceHpProcess___c_c *v4; // x0
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v7; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_42AF16E & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
    sub_B52984(&Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__);
    sub_B52984(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    sub_B52984(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__);
    sub_B52984(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    byte_42AF16E = 1;
  }
  buffList = this->fields.buffList;
  v4 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_ReduceHpProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    v4 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v7,
      Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__);
    v8 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    v8->__9__7_0 = _9__7_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v16 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v15, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_B52A5C(v16, v17);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v16,
           this->fields.buffList,
           v18);
}


bool __fastcall BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicBuff_ReduceHpProcess_o *v2; // x19
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x8

  v2 = this;
  if ( (byte_42AF16F & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__);
    byte_42AF16F = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    sub_B52A5C(this, method);
  return buffList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicBuff_ReduceHpProcess__PrevAddCalcBuffParam(
        BattleLogicBuff_ReduceHpProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        int32_t totalParam,
        int32_t plusMinus,
        int32_t *curParam,
        const MethodInfo *method)
{
  BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x0
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x21
  __int64 v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42AF16D & 1) == 0 )
  {
    sub_B52984(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
    byte_42AF16D = 1;
  }
  if ( plusMinus >= 1 )
  {
    convertDamageProc = this->fields.convertDamageProc;
    if ( convertDamageProc )
    {
      if ( BattleLogicBuff_ConvertReduceRegainProcess__CheckHpReduceToRegainIndiv(
             convertDamageProc,
             damageBuff,
             curParam,
             *(const MethodInfo **)&plusMinus) )
      {
        return;
      }
      buffList = this->fields.buffList;
      v12 = sub_B52A54(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
      BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor((BattleLogicBuff_ReduceHpProcess_BuffInfo_o *)v12, 0LL);
      if ( v12 )
      {
        *(_QWORD *)(v12 + 16) = damageBuff;
        sub_B52920(
          (BattleServantConfConponent_o *)(v12 + 16),
          (System_Int32_array **)damageBuff,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        *(_DWORD *)(v12 + 24) = *curParam;
        if ( buffList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)buffList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
          return;
        }
      }
    }
    sub_B52A5C(convertDamageProc, damageBuff);
  }
}


void __fastcall BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor(
        BattleLogicBuff_ReduceHpProcess_BuffInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicBuff_ReduceHpProcess___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x0

  if ( (byte_42AD7A5 & 1) == 0 )
  {
    sub_B52984(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    byte_42AD7A5 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall BattleLogicBuff_ReduceHpProcess___c___ctor(
        BattleLogicBuff_ReduceHpProcess___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicBuff_ReduceHpProcess___c___GetFixDamage_b__7_0(
        BattleLogicBuff_ReduceHpProcess___c_o *this,
        BattleLogicBuff_ReduceHpProcess_BuffInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.damage;
}