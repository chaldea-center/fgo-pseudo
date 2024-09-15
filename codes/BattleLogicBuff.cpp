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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)svtData, v5, v6);
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

  if ( (byte_4A30A93 & 1) == 0 )
  {
    sub_1B761C0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, damageBuff);
    byte_4A30A93 = 1;
  }
  selfSvt = this->fields.selfSvt;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B7640C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, selfSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
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
        return BattleBuffData__getActValue_42262612((BattleBuffData_o *)Individualty, 135, v6, 0LL);
    }
LABEL_11:
    sub_1B7641C(Individualty, v8);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)svtData, v5, v6);
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
  if ( (byte_4A30A92 & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_1B761C0(
                                                             &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             damageBuff);
    byte_4A30A92 = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B7640C(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v9, selfSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        !damageBuff)
    || (this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)BattleBuffData_BuffData__GetIndividualty(
                                                                 damageBuff,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0LL),
        !buffData) )
  {
    sub_1B7641C(this, damageBuff);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)svtData, v5, v6);
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
    sub_1B7641C(0LL, damage);
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
  __int64 v20; // x1
  int32_t v21; // w26
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct BattleServantData_o *selfSvt; // x23
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x0
  BattleBuffData_o *buffData; // x22
  System_Int32_array *Individualty; // x25
  BattleBuffData_CheckIndividualitiesData_o *v29; // x24
  __int64 v30; // x0
  __int64 v31; // x1
  Il2CppObject *FirstMatchCondBuff; // x0
  bool v33; // w19
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v34; // x0
  System_Action_object__o *_9__2_0; // x21
  Il2CppObject *v36; // x22
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A30A90 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_BattleBuffData_BuffData__TypeInfo, *(_QWORD *)&curHp);
    sub_1B761C0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v6);
    sub_1B761C0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__,
      v8);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__,
      v9);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__,
      v10);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v13);
    sub_1B761C0(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__, v15);
    sub_1B761C0(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__, v16);
    sub_1B761C0(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v17);
    byte_4A30A90 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v18 = (System_Collections_Generic_HashSet_T__o *)sub_1B7640C(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v18,
    (const MethodInfo_3395F1C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)reduceHpBuffList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v21 = 0;
  v43 = v42;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v22 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_1B7641C(v22, v23);
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1B7641C(v22, v23);
    klass = v43.fields._current[1].klass;
    if ( !klass )
      sub_1B7641C(0LL, v23);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, 0LL);
    v29 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B7640C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_42436172(v29, selfSvt, 0LL, 0LL, Individualty, 0LL, 0LL, 0LL);
    if ( !buffData )
      sub_1B7641C(v30, v31);
    FirstMatchCondBuff = (Il2CppObject *)BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v29, 1, 0LL, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v18 )
        sub_1B7641C(FirstMatchCondBuff, FirstMatchCondBuff);
      System_Collections_Generic_HashSet_object___Add(
        v18,
        FirstMatchCondBuff,
        (const MethodInfo_3397100 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v21 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v18 )
LABEL_29:
    sub_1B7641C(v19, v20);
  v33 = v21 < curHp && v18->fields._count > 0;
  if ( !v33 )
  {
    v34 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    if ( !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
      v34 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    }
    _9__2_0 = (System_Action_object__o *)v34->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__2_0 = (System_Action_object__o *)sub_1B7640C(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__2_0,
        v36,
        Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
        0LL);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v38, v39);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v18,
      (System_Action_T__o *)_9__2_0,
      (const MethodInfo_2E4F7C0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  return v33;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A30A91 & 1) == 0 )
  {
    sub_1B761C0(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1);
    byte_4A30A91 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B7641C(this, 0LL);
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
  __int64 v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A30A8B & 1) == 0 )
  {
    sub_1B761C0(&BattleLogicBuff_AddSubDamageProcess_TypeInfo, svtData);
    sub_1B761C0(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__, v6);
    sub_1B761C0(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo, v7);
    sub_1B761C0(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v8);
    byte_4A30A8B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = sub_1B7640C(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_QWORD *)(v12 + 16) = svtData;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)svtData, v13, v14);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v12;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.preventDeathProc, v12, v15, v16);
  v17 = sub_1B7640C(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  *(_QWORD *)(v17 + 16) = svtData;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)svtData, v18, v19);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v17;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.convertDamageProc, v17, v20, v21);
  v22 = sub_1B7640C(BattleLogicBuff_AddSubDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  *(_QWORD *)(v22 + 16) = svtData;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)svtData, v23, v24);
  this->fields.addSubDamageProc = (struct BattleLogicBuff_AddSubDamageProcess_o *)v22;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.addSubDamageProc, v22, v25, v26);
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
      sub_1B7641C(this, v5);
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
  BattleLogicBuff_ReduceHpProcess___c_c *v6; // x0
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x20
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v9; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_int__o *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_4A30A8D & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___, method);
    sub_1B761C0(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo, v3);
    sub_1B761C0(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__, v4);
    sub_1B761C0(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v5);
    byte_4A30A8D = 1;
  }
  v6 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  buffList = this->fields.buffList;
  if ( !BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    v6 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v6->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1B7640C(System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v9, Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__, 0LL);
    static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)_9__8_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_2E92630 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v14 = System_Linq_Enumerable__Sum(v13, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_1B7641C(v14, v15);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v14,
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
  if ( (byte_4A30A8E & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_1B761C0(
                                                  &Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__,
                                                  method);
    byte_4A30A8E = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    sub_1B7641C(this, method);
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
  System_Collections_Generic_List_object__o *buffList; // x21
  __int64 v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4A30A8C & 1) == 0 )
  {
    sub_1B761C0(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, damageBuff);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__, v10);
    sub_1B761C0(&System_Math_TypeInfo, v11);
    byte_4A30A8C = 1;
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
    *curParam = System_Math__Max_62353708(0, v14, 0LL);
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
    v17 = sub_1B7640C(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17
      || (*(_QWORD *)(v17 + 16) = damageBuff,
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)damageBuff, v18, v19),
          *(_DWORD *)(v17 + 24) = *curParam,
          !buffList)
      || (items = buffList->fields._items,
          v23 = Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__,
          ++buffList->fields._version,
          !items) )
    {
LABEL_16:
      sub_1B7641C(addSubDamageProc, damageBuff);
    }
    size = buffList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        buffList,
        (Il2CppObject *)v17,
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      buffList->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v17;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 4), v17, v20, v21);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A30A8F & 1) == 0 )
  {
    sub_1B761C0(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1);
    byte_4A30A8F = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B7641C(this, 0LL);
  return x->fields.damage;
}