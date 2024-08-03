void __fastcall BattleLogicBuff___ctor(BattleLogicBuff_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicBuff_AddSubDamageProcess___ctor(
        BattleLogicBuff_AddSubDamageProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)svtData, v5, v6);
}


int32_t __fastcall BattleLogicBuff_AddSubDamageProcess__GetActValue(
        BattleLogicBuff_AddSubDamageProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        const MethodInfo *method)
{
  BattleServantData_o *selfSvt; // x22
  BattleBuffData_CheckIndividualitiesData_o *v6; // x20
  System_Int32_array *Individualty; // x0
  struct BattleServantData_o *v8; // x8
  BattleBuffData_o *buffData; // x22
  struct BattleServantData_o *v10; // x8

  if ( (byte_49FEF1B & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, damageBuff);
    byte_49FEF1B = 1;
  }
  selfSvt = this->fields.selfSvt;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      damageBuff,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, selfSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  v8 = this->fields.selfSvt;
  if ( !v8 )
    goto LABEL_11;
  if ( !damageBuff )
    goto LABEL_11;
  buffData = v8->fields.buffData;
  Individualty = BattleBuffData_BuffData__GetIndividualty(damageBuff, 0, 0, 0, 0LL);
  if ( !buffData )
    goto LABEL_11;
  Individualty = (System_Int32_array *)BattleBuffData__checkActBuffDamageBuffIndiv(buffData, 135, v6, Individualty, 0LL);
  if ( ((unsigned __int8)Individualty & 1) != 0 )
  {
    v10 = this->fields.selfSvt;
    if ( v10 )
    {
      Individualty = (System_Int32_array *)v10->fields.buffData;
      if ( Individualty )
        return BattleBuffData__getActValue_42105172((BattleBuffData_o *)Individualty, 135, v6, 0LL);
    }
LABEL_11:
    sub_1B64324(Individualty);
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
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)svtData, v5, v6);
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
  bool v10; // w0

  v6 = this;
  if ( (byte_49FEF1A & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_1B640C8(
                                                             &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             damageBuff);
    byte_49FEF1A = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            damageBuff,
                                                            curParam),
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
    sub_1B64324(this);
  }
  v10 = BattleBuffData__checkActBuffDamageBuffIndiv(buffData, 107, v9, (System_Int32_array *)this, 0LL);
  if ( v10 )
  {
    v6->fields._TotalConvertReduceToRegainParam_k__BackingField += *curParam;
    *curParam = 0;
  }
  return v10;
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
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)svtData, v5, v6);
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
    sub_1B64324(0LL);
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
  System_Collections_Generic_HashSet_T__o *v18; // x20
  __int64 v19; // x0
  int32_t v20; // w26
  _BOOL8 v21; // x0
  struct BattleServantData_o *selfSvt; // x23
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x0
  BattleBuffData_o *buffData; // x22
  System_Int32_array *Individualty; // x25
  __int64 v27; // x1
  __int64 v28; // x2
  BattleBuffData_CheckIndividualitiesData_o *v29; // x24
  __int64 v30; // x0
  Il2CppObject *FirstMatchCondBuff; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  bool v34; // w19
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v35; // x0
  System_Action_object__o *_9__2_0; // x21
  Il2CppObject *v37; // x22
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FEF18 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleBuffData_BuffData__TypeInfo, *(_QWORD *)&curHp);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v6);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__,
      v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__,
      v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v13);
    sub_1B640C8(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__, v15);
    sub_1B640C8(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__, v16);
    sub_1B640C8(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v17);
    byte_49FEF18 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v18 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                     *(_QWORD *)&curHp,
                                                     reduceHpBuffList);
  System_Collections_Generic_HashSet_object____ctor(
    v18,
    (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)reduceHpBuffList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v20 = 0;
  v44 = v43;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v21 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_1B64324(v21);
    current = v44.fields._current;
    if ( !v44.fields._current )
      sub_1B64324(v21);
    klass = v44.fields._current[1].klass;
    if ( !klass )
      sub_1B64324(0LL);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, 0LL);
    v29 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v27,
                                                         v28);
    BattleBuffData_CheckIndividualitiesData___ctor_42147648(v29, selfSvt, 0LL, 0LL, Individualty, 0LL, 0LL);
    if ( !buffData )
      sub_1B64324(v30);
    FirstMatchCondBuff = (Il2CppObject *)BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v29, 1, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v18 )
        sub_1B64324(FirstMatchCondBuff);
      System_Collections_Generic_HashSet_object___Add(
        v18,
        FirstMatchCondBuff,
        (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v20 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v18 )
LABEL_29:
    sub_1B64324(v19);
  v34 = v20 < curHp && v18->fields._count > 0;
  if ( !v34 )
  {
    v35 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    if ( !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
      v35 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    }
    _9__2_0 = (System_Action_object__o *)v35->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v35->static_fields->__9;
      _9__2_0 = (System_Action_object__o *)sub_1B64314(System_Action_BattleBuffData_BuffData__TypeInfo, v32, v33);
      System_Action_object____ctor(
        _9__2_0,
        v37,
        Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
        0LL);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v39, v40);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v18,
      (System_Action_T__o *)_9__2_0,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  return v34;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEF19 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1);
    byte_49FEF19 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_49FEF13 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicBuff_AddSubDamageProcess_TypeInfo, svtData);
    sub_1B640C8(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo, v7);
    sub_1B640C8(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v8);
    byte_49FEF13 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo,
                                                      svtData,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14 = sub_1B64314(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v12, v13);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  *(_QWORD *)(v14 + 16) = svtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)svtData, v15, v16);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.preventDeathProc, v14, v17, v18);
  v21 = sub_1B64314(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, v19, v20);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  *(_QWORD *)(v21 + 16) = svtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)svtData, v22, v23);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.convertDamageProc, v21, v24, v25);
  v28 = sub_1B64314(BattleLogicBuff_AddSubDamageProcess_TypeInfo, v26, v27);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  *(_QWORD *)(v28 + 16) = svtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)svtData, v29, v30);
  this->fields.addSubDamageProc = (struct BattleLogicBuff_AddSubDamageProcess_o *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.addSubDamageProc, v28, v31, v32);
}


void __fastcall BattleLogicBuff_ReduceHpProcess__AfterAllAddCalcBuffParam(
        BattleLogicBuff_ReduceHpProcess_o *this,
        int32_t *totalParam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v5; // w1

  v5 = *totalParam;
  if ( v5 >= 1 )
  {
    if ( !this->fields.preventDeathProc )
      sub_1B64324(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleLogicBuff_ReduceHpProcess___c_c *v7; // x0
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x20
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v10; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_int__o *v14; // x0
  __int64 v15; // x0
  const MethodInfo *v16; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_49FEF15 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___, method);
    sub_1B640C8(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo, v4);
    sub_1B640C8(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__, v5);
    sub_1B640C8(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v6);
    byte_49FEF15 = 1;
  }
  v7 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  buffList = this->fields.buffList;
  if ( !BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    v7 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v7->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1B64314(
                                              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo,
                                              method,
                                              v2);
    System_Func_object__int____ctor(
      _9__8_0,
      v10,
      Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__,
      0LL);
    static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)_9__8_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v15 = System_Linq_Enumerable__Sum(v14, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_1B64324(v15);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v15,
           this->fields.buffList,
           v16);
}


bool __fastcall BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicBuff_ReduceHpProcess_o *v2; // x19
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x8

  v2 = this;
  if ( (byte_49FEF16 & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_1B640C8(
                                                  &Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__,
                                                  method);
    byte_49FEF16 = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    sub_1B64324(this);
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
  __int64 v11; // x1
  BattleLogicBuff_AddSubDamageProcess_o *addSubDamageProc; // x0
  int32_t v13; // w22
  int32_t v14; // w22
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *buffList; // x21
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_49FEF14 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, damageBuff);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__, v10);
    sub_1B640C8(&System_Math_TypeInfo, v11);
    byte_49FEF14 = 1;
  }
  if ( plusMinus >= 1 )
  {
    addSubDamageProc = this->fields.addSubDamageProc;
    if ( !addSubDamageProc )
      goto LABEL_16;
    v13 = *curParam;
    v14 = BattleLogicBuff_AddSubDamageProcess__GetActValue(
            addSubDamageProc,
            damageBuff,
            *(const MethodInfo **)&totalParam)
        + v13;
    *curParam = v14;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    *curParam = System_Math__Max_62194036(0, v14, 0LL);
    addSubDamageProc = (BattleLogicBuff_AddSubDamageProcess_o *)this->fields.convertDamageProc;
    if ( !addSubDamageProc )
      goto LABEL_16;
    if ( BattleLogicBuff_ConvertReduceRegainProcess__CheckHpReduceToRegainIndiv(
           (BattleLogicBuff_ConvertReduceRegainProcess_o *)addSubDamageProc,
           damageBuff,
           curParam,
           v15) )
    {
      return;
    }
    buffList = (System_Collections_Generic_List_object__o *)this->fields.buffList;
    v19 = sub_1B64314(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, v16, v17);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( !v19
      || (*(_QWORD *)(v19 + 16) = damageBuff,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)damageBuff, v20, v21),
          *(_DWORD *)(v19 + 24) = *curParam,
          !buffList)
      || (items = buffList->fields._items,
          v25 = Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__,
          ++buffList->fields._version,
          !items) )
    {
LABEL_16:
      sub_1B64324(addSubDamageProc);
    }
    size = buffList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        buffList,
        (Il2CppObject *)v19,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      buffList->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), v19, v22, v23);
    }
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEF17 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1);
    byte_49FEF17 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields.damage;
}