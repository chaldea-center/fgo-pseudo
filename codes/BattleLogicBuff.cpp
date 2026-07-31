void BattleLogicBuff___ctor(BattleLogicBuff_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBuff_AddSubDamageProcess___ctor(
        BattleLogicBuff_AddSubDamageProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.selfSvt = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)svtData, v5, v6, v7, v8, v9, v10);
}


int32_t BattleLogicBuff_AddSubDamageProcess__GetActValue(
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

  if ( (byte_593B96C & 1) == 0 )
  {
    sub_21FFC50(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_593B96C = 1;
  }
  selfSvt = this->fields.selfSvt;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_21FFEBC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_52746792(v6, selfSvt, 0, 0, 0, 0, 0, 1, 0);
  v9 = this->fields.selfSvt;
  if ( !v9 )
    goto LABEL_11;
  if ( !damageBuff )
    goto LABEL_11;
  buffData = v9->fields.buffData;
  Individualty = BattleBuffData_BuffData__GetIndividualty(damageBuff, 0, 0, 0, 0);
  if ( !buffData )
    goto LABEL_11;
  Individualty = (System_Int32_array *)BattleBuffData__checkActBuffDamageBuffIndiv(
                                         buffData,
                                         135,
                                         v6,
                                         Individualty,
                                         0,
                                         0);
  if ( ((unsigned __int8)Individualty & 1) != 0 )
  {
    v11 = this->fields.selfSvt;
    if ( v11 )
    {
      Individualty = (System_Int32_array *)v11->fields.buffData;
      if ( Individualty )
        return BattleBuffData__getActValue_52677936((BattleBuffData_o *)Individualty, 135, v6, 0, 0, 0);
    }
LABEL_11:
    sub_21FFECC(Individualty, v8);
  }
  return 0;
}


void BattleLogicBuff_BaseProcess___ctor(BattleLogicBuff_BaseProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBuff_BaseProcess__AfterAllAddCalcBuffParam(
        BattleLogicBuff_BaseProcess_o *this,
        int32_t *totalParam,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBuff_BaseProcess__PrevAddCalcBuffParam(
        BattleLogicBuff_BaseProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        int32_t totalParam,
        int32_t plusMinus,
        int32_t *curParam,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBuff_BaseProcess__SetSucceededBuff(
        BattleLogicBuff_BaseProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBuff_ChangeUseRateProcess___ctor(
        BattleLogicBuff_ChangeUseRateProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.applyTargetBuff = buff;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)buff, v5, v6, v7, v8, v9, v10);
}


void BattleLogicBuff_ChangeUseRateProcess__SetSucceededBuff(
        BattleLogicBuff_ChangeUseRateProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_21FFECC(this, 0);
  BattleBuffData_BuffData__AddAppliedBuff(buff, this->fields.applyTargetBuff, 0);
}


void BattleLogicBuff_ConvertReduceRegainProcess___ctor(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.selfSvt = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)svtData, v5, v6, v7, v8, v9, v10);
}


bool BattleLogicBuff_ConvertReduceRegainProcess__CheckHpReduceToRegainIndiv(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        int32_t *curParam,
        const MethodInfo *method)
{
  BattleLogicBuff_ConvertReduceRegainProcess_o *v6; // x20
  BattleServantData_o *selfSvt; // x24
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23
  bool v10; // w0

  v6 = this;
  if ( (byte_593B96B & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_21FFC50(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_593B96B = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_21FFEBC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor_52746792(v9, selfSvt, 0, 0, 0, 0, 0, 1, 0),
        !damageBuff)
    || (this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)BattleBuffData_BuffData__GetIndividualty(
                                                                 damageBuff,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0),
        !buffData) )
  {
    sub_21FFECC(this, damageBuff);
  }
  v10 = BattleBuffData__checkActBuffDamageBuffIndiv(buffData, 107, v9, (System_Int32_array *)this, 0, 0);
  if ( v10 )
  {
    v6->fields._TotalConvertReduceToRegainParam_k__BackingField += *curParam;
    *curParam = 0;
  }
  return v10;
}


int32_t BattleLogicBuff_ConvertReduceRegainProcess__get_TotalConvertReduceToRegainParam(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        const MethodInfo *method)
{
  return this->fields._TotalConvertReduceToRegainParam_k__BackingField;
}


void BattleLogicBuff_ConvertReduceRegainProcess__set_TotalConvertReduceToRegainParam(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TotalConvertReduceToRegainParam_k__BackingField = value;
}


void BattleLogicBuff_GutsRelationProcess___ctor(
        BattleLogicBuff_GutsRelationProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.gutsBuff = buff;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)buff, v5, v6, v7, v8, v9, v10);
}


void BattleLogicBuff_GutsRelationProcess__SetSucceededBuff(
        BattleLogicBuff_GutsRelationProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_21FFECC(this, 0);
  BattleBuffData_BuffData__AddAppliedBuff(buff, this->fields.gutsBuff, 0);
}


void BattleLogicBuff_PreventDeathDamageProcess___ctor(
        BattleLogicBuff_PreventDeathDamageProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.selfSvt = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)svtData, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
        BattleLogicBuff_PreventDeathDamageProcess_o *this,
        int32_t damage,
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *reduceHpBuffList,
        const MethodInfo *method)
{
  struct BattleServantData_o *selfSvt; // x0
  int32_t v6; // w19
  int32_t v8; // w0
  const MethodInfo *v9; // x3
  int32_t v10; // w22

  selfSvt = this->fields.selfSvt;
  if ( !selfSvt )
    sub_21FFECC(0, *(_QWORD *)&damage);
  v6 = damage;
  v8 = ((__int64 (__fastcall *)(struct BattleServantData_o *, const MethodInfo *, System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, const MethodInfo *))selfSvt->klass->vtable._13_get_resultHp.methodPtr)(
         selfSvt,
         selfSvt->klass->vtable._13_get_resultHp.method,
         reduceHpBuffList,
         method);
  if ( v8 <= v6 )
  {
    v10 = v8;
    if ( BattleLogicBuff_PreventDeathDamageProcess__IsApplyEffect(this, v8, reduceHpBuffList, v9) )
      return v10 - 1;
  }
  return v6;
}


bool BattleLogicBuff_PreventDeathDamageProcess__IsApplyEffect(
        BattleLogicBuff_PreventDeathDamageProcess_o *this,
        int32_t curHp,
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *reduceHpBuffList,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w26
  _BOOL8 v10; // x0
  __int64 v11; // x1
  struct BattleServantData_o *selfSvt; // x23
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x0
  BattleBuffData_o *buffData; // x22
  System_Int32_array *Individualty; // x25
  BattleBuffData_CheckIndividualitiesData_o *v17; // x24
  __int64 v18; // x0
  __int64 v19; // x1
  Il2CppObject *FirstMatchCondBuff; // x0
  bool v21; // cc
  bool v22; // w19
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v23; // x0
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__2_0; // x21
  Il2CppObject *v26; // x22
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593B969 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_21FFC50(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
    sub_21FFC50(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__);
    sub_21FFC50(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    byte_593B969 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v6 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v6,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)reduceHpBuffList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v9 = 0;
  v37 = v36;
  v36.fields._list = 0;
  *(_QWORD *)&v36.fields._index = &v37;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v10 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_21FFECC(v10, v11);
    current = v37.fields._current;
    if ( !v37.fields._current )
      sub_21FFECC(v10, v11);
    klass = v37.fields._current[1].klass;
    if ( !klass )
      sub_21FFECC(0, v11);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, 0);
    v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_21FFEBC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_52773348(v17, selfSvt, 0, 0, Individualty, 0, 0, 0);
    if ( !buffData )
      sub_21FFECC(v18, v19);
    FirstMatchCondBuff = (Il2CppObject *)BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v17, 1, 0, 0);
    if ( FirstMatchCondBuff )
    {
      if ( !v6 )
        sub_21FFECC(FirstMatchCondBuff, FirstMatchCondBuff);
      System_Collections_Generic_HashSet_object___Add(
        v6,
        FirstMatchCondBuff,
        (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v9 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v6 )
LABEL_35:
    sub_21FFECC(v7, v8);
  v21 = v6->fields._count > 0 && v9 < curHp;
  v22 = v21;
  if ( !v21 )
  {
    v23 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    if ( !*(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v8);
      v23 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__2_0 = (System_Action_object__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !*(&v23->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v23, v8);
        static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__2_0,
        v26,
        Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
        0);
      v27 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
      v27->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__2_0, (int32_t)_9__2_0, v28, v29, v30, v31, v32, v33);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v6,
      (System_Action_T__o *)_9__2_0,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  return v22;
}


void BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B96A & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    byte_593B96A = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicBuff_PreventDeathDamageProcess___c___ctor(
        BattleLogicBuff_PreventDeathDamageProcess___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBuff_PreventDeathDamageProcess___c___IsApplyEffect_b__2_0(
        BattleLogicBuff_PreventDeathDamageProcess___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_21FFECC(this, 0);
  BattleBuffData_BuffData__RevertUnused(buff, 1, 0);
}


void BattleLogicBuff_ReduceHpProcess___ctor(
        BattleLogicBuff_ReduceHpProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7

  if ( (byte_593B964 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicBuff_AddSubDamageProcess_TypeInfo);
    sub_21FFC50(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
    sub_21FFC50(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
    byte_593B964 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  v12 = sub_21FFEBC(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_QWORD *)(v12 + 16) = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 16), (int32_t)svtData, v13, v14, v15, v16, v17, v18);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.preventDeathProc, v12, v19, v20, v21, v22, v23, v24);
  v25 = sub_21FFEBC(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0);
  *(_QWORD *)(v25 + 16) = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 16), (int32_t)svtData, v26, v27, v28, v29, v30, v31);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v25;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.convertDamageProc, v25, v32, v33, v34, v35, v36, v37);
  v38 = sub_21FFEBC(BattleLogicBuff_AddSubDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0);
  *(_QWORD *)(v38 + 16) = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 16), (int32_t)svtData, v39, v40, v41, v42, v43, v44);
  this->fields.addSubDamageProc = (struct BattleLogicBuff_AddSubDamageProcess_o *)v38;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.addSubDamageProc, v38, v45, v46, v47, v48, v49, v50);
}


void BattleLogicBuff_ReduceHpProcess__AfterAllAddCalcBuffParam(
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
      sub_21FFECC(this, v5);
    *totalParam = BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
                    this->fields.preventDeathProc,
                    v5,
                    this->fields.buffList,
                    v3);
  }
}


int32_t BattleLogicBuff_ReduceHpProcess__GetFixDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicBuff_ReduceHpProcess___c_c *v3; // x0
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x20
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v7; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_int__o *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_593B966 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
    sub_21FFC50(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    sub_21FFC50(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__);
    sub_21FFC50(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    byte_593B966 = 1;
  }
  v3 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  buffList = this->fields.buffList;
  if ( !*(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo, method);
    v3 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__8_0 = (System_Func_object__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v7, Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__, 0);
    v8 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    v8->__9__8_0 = (struct System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)_9__8_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__8_0, (int32_t)_9__8_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v16 = System_Linq_Enumerable__Sum(v15, 0);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_21FFECC(v16, v17);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v16,
           this->fields.buffList,
           v18);
}


bool BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicBuff_ReduceHpProcess_o *v2; // x19
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x8

  v2 = this;
  if ( (byte_593B967 & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__);
    byte_593B967 = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    sub_21FFECC(this, method);
  return buffList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicBuff_ReduceHpProcess__PrevAddCalcBuffParam(
        BattleLogicBuff_ReduceHpProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        int32_t totalParam,
        int32_t plusMinus,
        int32_t *curParam,
        const MethodInfo *method)
{
  BattleLogicBuff_AddSubDamageProcess_o *addSubDamageProc; // x0
  int32_t v11; // w23
  __int64 v12; // x1
  int32_t ActValue; // w8
  System_Math_c *v14; // x0
  int32_t v15; // w22
  const MethodInfo *v16; // x3
  BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x8
  System_Collections_Generic_List_object__o *buffList; // x21
  __int64 v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_593B965 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593B965 = 1;
  }
  if ( plusMinus >= 1 )
  {
    addSubDamageProc = this->fields.addSubDamageProc;
    if ( !addSubDamageProc )
      goto LABEL_16;
    v11 = *curParam;
    ActValue = BattleLogicBuff_AddSubDamageProcess__GetActValue(
                 addSubDamageProc,
                 damageBuff,
                 *(const MethodInfo **)&totalParam);
    v14 = System_Math_TypeInfo;
    v15 = ActValue + v11;
    *curParam = ActValue + v11;
    if ( !*(&v14->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v14, v12);
    addSubDamageProc = (BattleLogicBuff_AddSubDamageProcess_o *)System_Math__Max_76939956(0, v15, 0);
    convertDamageProc = this->fields.convertDamageProc;
    *curParam = (int)addSubDamageProc;
    if ( !convertDamageProc )
      goto LABEL_16;
    if ( BattleLogicBuff_ConvertReduceRegainProcess__CheckHpReduceToRegainIndiv(
           convertDamageProc,
           damageBuff,
           curParam,
           v16) )
    {
      return;
    }
    buffList = (System_Collections_Generic_List_object__o *)this->fields.buffList;
    v19 = sub_21FFEBC(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0);
    if ( !v19
      || (*(_QWORD *)(v19 + 16) = damageBuff,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 16), (int32_t)damageBuff, v20, v21, v22, v23, v24, v25),
          *(_DWORD *)(v19 + 24) = *curParam,
          !buffList)
      || (items = buffList->fields._items,
          v33 = Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__,
          ++buffList->fields._version,
          !items) )
    {
LABEL_16:
      sub_21FFECC(addSubDamageProc, damageBuff);
    }
    size = buffList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        buffList,
        (Il2CppObject *)v19,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      buffList->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v19;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), v19, v26, v27, v28, v29, v30, v31);
    }
  }
}


void BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor(
        BattleLogicBuff_ReduceHpProcess_BuffInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBuff_ReduceHpProcess___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B968 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    byte_593B968 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicBuff_ReduceHpProcess___c___ctor(BattleLogicBuff_ReduceHpProcess___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicBuff_ReduceHpProcess___c___GetFixDamage_b__8_0(
        BattleLogicBuff_ReduceHpProcess___c_o *this,
        BattleLogicBuff_ReduceHpProcess_BuffInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.damage;
}