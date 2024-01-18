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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4186AA1 & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_B2C35C(
                                                             &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             damageBuff);
    byte_4186AA1 = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo),
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
    sub_B2C434(this, damageBuff);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
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
    sub_B2C434(0LL, damage);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicBuff_PreventDeathDamageProcess__IsApplyEffect(
        BattleLogicBuff_PreventDeathDamageProcess_o *this,
        int32_t curHp,
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *reduceHpBuffList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  struct BattleServantData_o *selfSvt; // x23
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x0
  BattleBuffData_o *buffData; // x22
  System_Int32_array *Individualty; // x25
  BattleBuffData_CheckIndividualitiesData_o *v27; // x24
  const MethodInfo *v28; // x6
  __int64 v29; // x0
  __int64 v30; // x1
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x4
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v36; // x0
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__2_0; // x20
  Il2CppObject *v39; // x21
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int32_t v48; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4186AA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleBuffData_BuffData___ctor__, *(_QWORD *)&curHp);
    sub_B2C35C(&System_Action_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v7);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__,
      v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__,
      v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__,
      v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v14);
    sub_B2C35C(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__, v16);
    sub_B2C35C(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__, v17);
    sub_B2C35C(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v18);
    byte_4186AA2 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v19 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v19,
    (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_33;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    reduceHpBuffList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v48 = 0;
  v50 = v49;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v32 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_B2C434(v32, v33);
    current = v50.fields.current;
    if ( !v50.fields.current )
      sub_B2C434(v32, v33);
    klass = v50.fields.current[1].klass;
    if ( !klass )
      sub_B2C434(0LL, v33);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, v34);
    v27 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_23203976(v27, selfSvt, 0LL, 0LL, Individualty, 0LL, v28);
    if ( !buffData )
      sub_B2C434(v29, v30);
    FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v27, 1, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v19 )
        sub_B2C434(FirstMatchCondBuff, FirstMatchCondBuff);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
        v19,
        (WarBoardAIRoute_RouteData_o *)FirstMatchCondBuff,
        (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v48 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v19 )
LABEL_33:
    sub_B2C434(v20, v21);
  if ( v48 < curHp && v19->fields._count > 0 )
    return 1;
  v36 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    v36 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__2_0,
      v39,
      Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v40 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    v40->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v40->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (System_Action_T__o *)_9__2_0,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  return 0;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x0

  if ( (byte_4185587 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1);
    byte_4185587 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  BattleBuffData_BuffData__RevertUnused(buff, 1, 0LL);
}


void __fastcall BattleLogicBuff_ReduceHpProcess___ctor(
        BattleLogicBuff_ReduceHpProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_4186AA3 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, svtData);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo, v6);
    sub_B2C35C(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v7);
    byte_4186AA3 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15 = sub_B2C42C(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  *(_QWORD *)(v15 + 16) = svtData;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)svtData, v16, v17, v18, v19, v20, v21);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.preventDeathProc,
    (System_Int32_array **)v15,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = sub_B2C42C(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  *(_QWORD *)(v28 + 16) = svtData;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)svtData, v29, v30, v31, v32, v33, v34);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.convertDamageProc,
    (System_Int32_array **)v28,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
      sub_B2C434(this, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x20
  BattleLogicBuff_ReduceHpProcess___c_c *v8; // x0
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v11; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_4186AA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___, method);
    sub_B2C35C(&Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__, v3);
    sub_B2C35C(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo, v4);
    sub_B2C35C(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__, v5);
    sub_B2C35C(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v6);
    byte_4186AA5 = 1;
  }
  buffList = this->fields.buffList;
  v8 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_ReduceHpProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    v8 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v11,
      Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__);
    v12 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    v12->__9__7_0 = _9__7_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v20 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v19, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_B2C434(v20, v21);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v20,
           this->fields.buffList,
           v22);
}


bool __fastcall BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicBuff_ReduceHpProcess_o *v2; // x19
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x8

  v2 = this;
  if ( (byte_4186AA6 & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__,
                                                  method);
    byte_4186AA6 = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    sub_B2C434(this, method);
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
  __int64 v10; // x1
  BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x0
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x21
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4186AA4 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, damageBuff);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__, v10);
    byte_4186AA4 = 1;
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
      v13 = sub_B2C42C(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
      BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor((BattleLogicBuff_ReduceHpProcess_BuffInfo_o *)v13, 0LL);
      if ( v13 )
      {
        *(_QWORD *)(v13 + 16) = damageBuff;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v13 + 16),
          (System_Int32_array **)damageBuff,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        *(_DWORD *)(v13 + 24) = *curParam;
        if ( buffList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)buffList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
          return;
        }
      }
    }
    sub_B2C434(convertDamageProc, damageBuff);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x0

  if ( (byte_4185588 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1);
    byte_4185588 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.damage;
}