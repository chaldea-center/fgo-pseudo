void __fastcall BattleLogicBuff___ctor(BattleLogicBuff_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicBuff_AddSubDamageProcess___ctor(
        BattleLogicBuff_AddSubDamageProcess_o *this,
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
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
}


int32_t __fastcall BattleLogicBuff_AddSubDamageProcess__GetActValue(
        BattleLogicBuff_AddSubDamageProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        const MethodInfo *method)
{
  BattleServantData_o *selfSvt; // x22
  BattleBuffData_CheckIndividualitiesData_o *v6; // x20
  System_Int32_array *Individualty; // x0
  __int64 v8; // x1
  struct BattleServantData_o *v9; // x8
  BattleBuffData_o *buffData; // x22
  struct BattleServantData_o *v11; // x8

  if ( (byte_438A7F4 & 1) == 0 )
  {
    sub_B775C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_438A7F4 = 1;
  }
  selfSvt = this->fields.selfSvt;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B77694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, selfSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  v9 = this->fields.selfSvt;
  if ( !v9 )
    goto LABEL_11;
  if ( !damageBuff )
    goto LABEL_11;
  buffData = v9->fields.buffData;
  Individualty = BattleBuffData_BuffData__GetIndividualty(damageBuff, 0, 0, 0, 0LL);
  if ( !buffData )
    goto LABEL_11;
  Individualty = (System_Int32_array *)BattleBuffData__checkActBuffDamageBuffIndiv(buffData, 135, v6, Individualty, 0LL);
  if ( ((unsigned __int8)Individualty & 1) != 0 )
  {
    v11 = this->fields.selfSvt;
    if ( v11 )
    {
      Individualty = (System_Int32_array *)v11->fields.buffData;
      if ( Individualty )
        return BattleBuffData__getActValue_32086076((BattleBuffData_o *)Individualty, 135, v6, 0LL);
    }
LABEL_11:
    sub_B7769C(Individualty, v8);
  }
  return 0;
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
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
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
  bool result; // w0

  v6 = this;
  if ( (byte_438A7F5 & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_B775C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_438A7F5 = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B77694(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v9, selfSvt, 0LL, 0LL, 0LL, 0LL, 0LL),
        !damageBuff)
    || (this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)BattleBuffData_BuffData__GetIndividualty(
                                                                 damageBuff,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0LL),
        !buffData) )
  {
    sub_B7769C(this, damageBuff);
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
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
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
    sub_B7769C(0LL, damage);
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
  __int64 v15; // x0
  __int64 v16; // x1
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v21; // x0
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__2_0; // x20
  Il2CppObject *v24; // x21
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t v33; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_438A7F6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B775C4(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B775C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_B775C4(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
    sub_B775C4(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__);
    sub_B775C4(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    byte_438A7F6 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v6 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v6,
    (const MethodInfo_2EE2460 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_33;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    reduceHpBuffList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v33 = 0;
  v35 = v34;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v18 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_B7769C(v18, v19);
    current = v35.fields.current;
    if ( !v35.fields.current )
      sub_B7769C(v18, v19);
    klass = v35.fields.current[1].klass;
    if ( !klass )
      sub_B7769C(0LL, v19);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, 0LL);
    v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B77694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_24553672(v14, selfSvt, 0LL, 0LL, Individualty, 0LL, 0LL);
    if ( !buffData )
      sub_B7769C(v15, v16);
    FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v14, 1, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v6 )
        sub_B7769C(FirstMatchCondBuff, FirstMatchCondBuff);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
        v6,
        (WarBoardAIRoute_RouteData_o *)FirstMatchCondBuff,
        (const MethodInfo_2EE361C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v33 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v6 )
LABEL_33:
    sub_B7769C(v7, v8);
  if ( v33 < curHp && v6->fields._count > 0 )
    return 1;
  v21 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    v21 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__2_0,
      v24,
      Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v25 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    v25->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v25->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (System_Action_T__o *)_9__2_0,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  return 0;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438ABF8 & 1) == 0 )
  {
    sub_B775C4(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    byte_438ABF8 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
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
  __int64 v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_438A7F7 & 1) == 0 )
  {
    sub_B775C4(&BattleLogicBuff_AddSubDamageProcess_TypeInfo);
    sub_B775C4(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
    sub_B775C4(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
    byte_438A7F7 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = sub_B77694(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_QWORD *)(v12 + 16) = svtData;
  sub_B77560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)svtData, v13, v14, v15, v16, v17, v18);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v12;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.preventDeathProc,
    (System_Int32_array **)v12,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = sub_B77694(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  *(_QWORD *)(v25 + 16) = svtData;
  sub_B77560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)svtData, v26, v27, v28, v29, v30, v31);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v25;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.convertDamageProc,
    (System_Int32_array **)v25,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = sub_B77694(BattleLogicBuff_AddSubDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  *(_QWORD *)(v38 + 16) = svtData;
  sub_B77560((BattleServantConfConponent_o *)(v38 + 16), (System_Int32_array **)svtData, v39, v40, v41, v42, v43, v44);
  this->fields.addSubDamageProc = (struct BattleLogicBuff_AddSubDamageProcess_o *)v38;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.addSubDamageProc,
    (System_Int32_array **)v38,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
      sub_B7769C(this, v5);
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
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x21
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

  if ( (byte_438A7F9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
    sub_B775C4(&Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__);
    sub_B775C4(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    sub_B775C4(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__);
    sub_B775C4(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    byte_438A7F9 = 1;
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
  _9__8_0 = static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__8_0,
      v7,
      Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__);
    v8 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    v8->__9__8_0 = _9__8_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
          (System_Func_TSource__TResult__o *)_9__8_0,
          (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v16 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v15, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_B7769C(v16, v17);
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
  if ( (byte_438A7FA & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__);
    byte_438A7FA = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    sub_B7769C(this, method);
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
  BattleLogicBuff_AddSubDamageProcess_o *addSubDamageProc; // x0
  int32_t v11; // w22
  int32_t v12; // w22
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x21
  __int64 v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438A7F8 & 1) == 0 )
  {
    sub_B775C4(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
    sub_B775C4(&System_Math_TypeInfo);
    byte_438A7F8 = 1;
  }
  if ( plusMinus >= 1 )
  {
    addSubDamageProc = this->fields.addSubDamageProc;
    if ( addSubDamageProc )
    {
      v11 = *curParam;
      v12 = BattleLogicBuff_AddSubDamageProcess__GetActValue(
              addSubDamageProc,
              damageBuff,
              *(const MethodInfo **)&totalParam)
          + v11;
      *curParam = v12;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      *curParam = System_Math__Max_45851140(0, v12, 0LL);
      addSubDamageProc = (BattleLogicBuff_AddSubDamageProcess_o *)this->fields.convertDamageProc;
      if ( addSubDamageProc )
      {
        if ( BattleLogicBuff_ConvertReduceRegainProcess__CheckHpReduceToRegainIndiv(
               (BattleLogicBuff_ConvertReduceRegainProcess_o *)addSubDamageProc,
               damageBuff,
               curParam,
               v13) )
        {
          return;
        }
        buffList = this->fields.buffList;
        v15 = sub_B77694(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
        BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor((BattleLogicBuff_ReduceHpProcess_BuffInfo_o *)v15, 0LL);
        if ( v15 )
        {
          *(_QWORD *)(v15 + 16) = damageBuff;
          sub_B77560(
            (BattleServantConfConponent_o *)(v15 + 16),
            (System_Int32_array **)damageBuff,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          *(_DWORD *)(v15 + 24) = *curParam;
          if ( buffList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)buffList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
            return;
          }
        }
      }
    }
    sub_B7769C(addSubDamageProc, damageBuff);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438ABF9 & 1) == 0 )
  {
    sub_B775C4(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    byte_438ABF9 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleLogicBuff_ReduceHpProcess___c___ctor(
        BattleLogicBuff_ReduceHpProcess___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicBuff_ReduceHpProcess___c___GetFixDamage_b__8_0(
        BattleLogicBuff_ReduceHpProcess___c_o *this,
        BattleLogicBuff_ReduceHpProcess_BuffInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.damage;
}