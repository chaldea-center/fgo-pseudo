void BattleLogicBuff___ctor(BattleLogicBuff_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBuff_AddSubDamageProcess___ctor(
        BattleLogicBuff_AddSubDamageProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.selfSvt = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)svtData, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4CF170B & 1) == 0 )
  {
    sub_1C7BAE8(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4CF170B = 1;
  }
  selfSvt = this->fields.selfSvt;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C7BD34(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_46474960(v6, selfSvt, 0, 0, 0, 0, 0, 1, 0);
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
        return BattleBuffData__getActValue_46165740((BattleBuffData_o *)Individualty, 135, v6, 0, 0, 0);
    }
LABEL_11:
    sub_1C7BD40(Individualty, v8);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.applyTargetBuff = buff;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)buff, v5, v6, v7, v8, v9, v10);
}


void BattleLogicBuff_ChangeUseRateProcess__SetSucceededBuff(
        BattleLogicBuff_ChangeUseRateProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1C7BD40(this, 0);
  BattleBuffData_BuffData__AddAppliedBuff(buff, this->fields.applyTargetBuff, 0);
}


void BattleLogicBuff_ConvertReduceRegainProcess___ctor(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.selfSvt = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)svtData, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4CF170A & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_1C7BAE8(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4CF170A = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C7BD34(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor_46474960(v9, selfSvt, 0, 0, 0, 0, 0, 1, 0),
        !damageBuff)
    || (this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)BattleBuffData_BuffData__GetIndividualty(
                                                                 damageBuff,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0),
        !buffData) )
  {
    sub_1C7BD40(this, damageBuff);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.gutsBuff = buff;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)buff, v5, v6, v7, v8, v9, v10);
}


void BattleLogicBuff_GutsRelationProcess__SetSucceededBuff(
        BattleLogicBuff_GutsRelationProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1C7BD40(this, 0);
  BattleBuffData_BuffData__AddAppliedBuff(buff, this->fields.gutsBuff, 0);
}


void BattleLogicBuff_PreventDeathDamageProcess___ctor(
        BattleLogicBuff_PreventDeathDamageProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.selfSvt = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)svtData, v5, v6, v7, v8, v9, v10);
}


int32_t BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
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
    sub_1C7BD40(0, damage);
  v8 = ((__int64 (__fastcall *)(struct BattleServantData_o *, const MethodInfo *, System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, const MethodInfo *))selfSvt->klass->vtable._13_get_resultHp.methodPtr)(
         selfSvt,
         selfSvt->klass->vtable._13_get_resultHp.method,
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


bool BattleLogicBuff_PreventDeathDamageProcess__IsApplyEffect(
        BattleLogicBuff_PreventDeathDamageProcess_o *this,
        int32_t curHp,
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *reduceHpBuffList,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v6; // x20
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
  bool v21; // w19
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v22; // x0
  System_Action_object__o *_9__2_0; // x21
  Il2CppObject *v24; // x22
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CF1708 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C7BAE8(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
    sub_1C7BAE8(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__);
    sub_1C7BAE8(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    byte_4CF1708 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C7BD34(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v6,
    (const MethodInfo_36EFD64 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)reduceHpBuffList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v9 = 0;
  v35 = v34;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v10 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_1C7BD40(v10, v11);
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1C7BD40(v10, v11);
    klass = v35.fields._current[1].klass;
    if ( !klass )
      sub_1C7BD40(0, v11);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, 0);
    v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C7BD34(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_46478136(v17, selfSvt, 0, 0, Individualty, 0, 0, 0);
    if ( !buffData )
      sub_1C7BD40(v18, v19);
    FirstMatchCondBuff = (Il2CppObject *)BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v17, 1, 0, 0);
    if ( FirstMatchCondBuff )
    {
      if ( !v6 )
        sub_1C7BD40(FirstMatchCondBuff, FirstMatchCondBuff);
      System_Collections_Generic_HashSet_object___Add(
        v6,
        FirstMatchCondBuff,
        (const MethodInfo_36F0F48 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v9 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v6 )
LABEL_29:
    sub_1C7BD40(v7, v8);
  v21 = v9 < curHp && v6->fields._count > 0;
  if ( !v21 )
  {
    v22 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    if ( !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
      v22 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    }
    _9__2_0 = (System_Action_object__o *)v22->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__2_0 = (System_Action_object__o *)sub_1C7BD34(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__2_0,
        v24,
        Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
        0);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0,
        (int32_t)_9__2_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v6,
      (System_Action_T__o *)_9__2_0,
      (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  return v21;
}


void BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF1709 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    byte_4CF1709 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
  BattleBuffData_BuffData__RevertUnused(buff, 1, 0);
}


void BattleLogicBuff_ReduceHpProcess___ctor(
        BattleLogicBuff_ReduceHpProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7

  if ( (byte_4CF1703 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicBuff_AddSubDamageProcess_TypeInfo);
    sub_1C7BAE8(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
    sub_1C7BAE8(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
    byte_4CF1703 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  v12 = sub_1C7BD34(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_QWORD *)(v12 + 16) = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)svtData, v13, v14, v15, v16, v17, v18);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v12;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.preventDeathProc, v12, v19, v20, v21, v22, v23, v24);
  v25 = sub_1C7BD34(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0);
  *(_QWORD *)(v25 + 16) = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 16), (int32_t)svtData, v26, v27, v28, v29, v30, v31);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.convertDamageProc, v25, v32, v33, v34, v35, v36, v37);
  v38 = sub_1C7BD34(BattleLogicBuff_AddSubDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0);
  *(_QWORD *)(v38 + 16) = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v38 + 16), (int32_t)svtData, v39, v40, v41, v42, v43, v44);
  this->fields.addSubDamageProc = (struct BattleLogicBuff_AddSubDamageProcess_o *)v38;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.addSubDamageProc, v38, v45, v46, v47, v48, v49, v50);
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
      sub_1C7BD40(this, v5);
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
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v6; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_int__o *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_4CF1705 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
    sub_1C7BAE8(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__);
    sub_1C7BAE8(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    byte_4CF1705 = 1;
  }
  v3 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  buffList = this->fields.buffList;
  if ( !BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    v3 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v3->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v6, Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__, 0);
    static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)_9__8_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v15 = System_Linq_Enumerable__Sum(v14, 0);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_1C7BD40(v15, v16);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v15,
           this->fields.buffList,
           v17);
}


bool BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicBuff_ReduceHpProcess_o *v2; // x19
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x8

  v2 = this;
  if ( (byte_4CF1706 & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__);
    byte_4CF1706 = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    sub_1C7BD40(this, method);
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
  int32_t v11; // w22
  int32_t v12; // w22
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *buffList; // x21
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4CF1704 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CF1704 = 1;
  }
  if ( plusMinus >= 1 )
  {
    addSubDamageProc = this->fields.addSubDamageProc;
    if ( !addSubDamageProc )
      goto LABEL_16;
    v11 = *curParam;
    v12 = BattleLogicBuff_AddSubDamageProcess__GetActValue(
            addSubDamageProc,
            damageBuff,
            *(const MethodInfo **)&totalParam)
        + v11;
    *curParam = v12;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    *curParam = System_Math__Max_65698740(0, v12, 0);
    addSubDamageProc = (BattleLogicBuff_AddSubDamageProcess_o *)this->fields.convertDamageProc;
    if ( !addSubDamageProc )
      goto LABEL_16;
    if ( BattleLogicBuff_ConvertReduceRegainProcess__CheckHpReduceToRegainIndiv(
           (BattleLogicBuff_ConvertReduceRegainProcess_o *)addSubDamageProc,
           damageBuff,
           curParam,
           v13) )
    {
      return;
    }
    buffList = (System_Collections_Generic_List_object__o *)this->fields.buffList;
    v15 = sub_1C7BD34(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    if ( !v15
      || (*(_QWORD *)(v15 + 16) = damageBuff,
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)damageBuff, v16, v17, v18, v19, v20, v21),
          *(_DWORD *)(v15 + 24) = *curParam,
          !buffList)
      || (items = buffList->fields._items,
          v29 = Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__,
          ++buffList->fields._version,
          !items) )
    {
LABEL_16:
      sub_1C7BD40(addSubDamageProc, damageBuff);
    }
    size = buffList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        buffList,
        (Il2CppObject *)v15,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      buffList->fields._size = size + 1;
      v31[4] = (Il2CppClass *)v15;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v31 + 4), v15, v22, v23, v24, v25, v26, v27);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF1707 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    byte_4CF1707 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
  return x->fields.damage;
}