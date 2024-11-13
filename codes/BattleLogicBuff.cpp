void __fastcall BattleLogicBuff___ctor(BattleLogicBuff_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicBuff_AddSubDamageProcess___ctor(
        BattleLogicBuff_AddSubDamageProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v5, v6, v7, v8, v9, v10);
}


int32_t __fastcall BattleLogicBuff_AddSubDamageProcess__GetActValue(
        BattleLogicBuff_AddSubDamageProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantData_o *selfSvt; // x22
  BattleBuffData_CheckIndividualitiesData_o *v7; // x20
  System_Int32_array *Individualty; // x0
  __int64 v9; // x1
  struct BattleServantData_o *v10; // x8
  BattleBuffData_o *buffData; // x22
  struct BattleServantData_o *v12; // x8

  if ( (byte_4B18DE6 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, damageBuff, method);
    byte_4B18DE6 = 1;
  }
  selfSvt = this->fields.selfSvt;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      damageBuff,
                                                      method,
                                                      v3);
  BattleBuffData_CheckIndividualitiesData___ctor_43379556(v7, selfSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  v10 = this->fields.selfSvt;
  if ( !v10 )
    goto LABEL_11;
  if ( !damageBuff )
    goto LABEL_11;
  buffData = v10->fields.buffData;
  Individualty = BattleBuffData_BuffData__GetIndividualty(damageBuff, 0, 0, 0, 0LL);
  if ( !buffData )
    goto LABEL_11;
  Individualty = (System_Int32_array *)BattleBuffData__checkActBuffDamageBuffIndiv(buffData, 135, v7, Individualty, 0LL);
  if ( ((unsigned __int8)Individualty & 1) != 0 )
  {
    v12 = this->fields.selfSvt;
    if ( v12 )
    {
      Individualty = (System_Int32_array *)v12->fields.buffData;
      if ( Individualty )
        return BattleBuffData__getActValue_43205148((BattleBuffData_o *)Individualty, 135, v7, 0LL);
    }
LABEL_11:
    sub_1BCAA3C(Individualty, v9);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4B18DE5 & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_1BCA7E0(
                                                             &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             damageBuff,
                                                             curParam);
    byte_4B18DE5 = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            damageBuff,
                                                            curParam,
                                                            method),
        BattleBuffData_CheckIndividualitiesData___ctor_43379556(v9, selfSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        !damageBuff)
    || (this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)BattleBuffData_BuffData__GetIndividualty(
                                                                 damageBuff,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0LL),
        !buffData) )
  {
    sub_1BCAA3C(this, damageBuff);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, *(_QWORD *)&damage);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_HashSet_T__o *v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w26
  _BOOL8 v34; // x0
  __int64 v35; // x1
  struct BattleServantData_o *selfSvt; // x23
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x0
  BattleBuffData_o *buffData; // x22
  System_Int32_array *Individualty; // x25
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  BattleBuffData_CheckIndividualitiesData_o *v44; // x24
  __int64 v45; // x0
  __int64 v46; // x1
  Il2CppObject *FirstMatchCondBuff; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  bool v50; // w19
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v51; // x0
  System_Action_object__o *_9__2_0; // x21
  Il2CppObject *v53; // x22
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18DE3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleBuffData_BuffData__TypeInfo, *(_QWORD *)&curHp, reduceHpBuffList);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v6, v7);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__,
      v14,
      v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v22, v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__,
      v24,
      v25);
    sub_1BCA7E0(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__, v26, v27);
    sub_1BCA7E0(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v28, v29);
    byte_4B18DE3 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v30 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                     *(_QWORD *)&curHp,
                                                     reduceHpBuffList,
                                                     method);
  System_Collections_Generic_HashSet_object____ctor(
    v30,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_object__o *)reduceHpBuffList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v33 = 0;
  v64 = v63;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v34 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_1BCAA3C(v34, v35);
    current = v64.fields._current;
    if ( !v64.fields._current )
      sub_1BCAA3C(v34, v35);
    klass = v64.fields._current[1].klass;
    if ( !klass )
      sub_1BCAA3C(0LL, v35);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, 0LL);
    v44 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v41,
                                                         v42,
                                                         v43);
    BattleBuffData_CheckIndividualitiesData___ctor_43382356(v44, selfSvt, 0LL, 0LL, Individualty, 0LL, 0LL, 0LL);
    if ( !buffData )
      sub_1BCAA3C(v45, v46);
    FirstMatchCondBuff = (Il2CppObject *)BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v44, 1, 0LL, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v30 )
        sub_1BCAA3C(FirstMatchCondBuff, FirstMatchCondBuff);
      System_Collections_Generic_HashSet_object___Add(
        v30,
        FirstMatchCondBuff,
        (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v33 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v30 )
LABEL_29:
    sub_1BCAA3C(v31, v32);
  v50 = v33 < curHp && v30->fields._count > 0;
  if ( !v50 )
  {
    v51 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    if ( !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v32);
      v51 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
    }
    _9__2_0 = (System_Action_object__o *)v51->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51, v32);
        v51 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v51->static_fields->__9;
      _9__2_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleBuffData_BuffData__TypeInfo, v32, v48, v49);
      System_Action_object____ctor(
        _9__2_0,
        v53,
        Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
        0LL);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_0,
        (int64_t)_9__2_0,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v30,
      (System_Action_T__o *)_9__2_0,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  return v50;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18DE4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1, v2);
    byte_4B18DE4 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  BattleBuffData_BuffData__RevertUnused(buff, 1, 0LL);
}


void __fastcall BattleLogicBuff_ReduceHpProcess___ctor(
        BattleLogicBuff_ReduceHpProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  int64_t v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  int64_t v56; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7

  if ( (byte_4B18DDE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicBuff_AddSubDamageProcess_TypeInfo, svtData, method);
    sub_1BCA7E0(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo, v10, v11);
    sub_1BCA7E0(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v12, v13);
    byte_4B18DDE = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo,
                                                       svtData,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v24 = sub_1BCAA2C(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v21, v22, v23);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  *(_QWORD *)(v24 + 16) = svtData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)svtData, v25, v26, v27, v28, v29, v30);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.preventDeathProc, v24, v31, v32, v33, v34, v35, v36);
  v40 = sub_1BCAA2C(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, v37, v38, v39);
  System_Object___ctor((Il2CppObject *)v40, 0LL);
  *(_QWORD *)(v40 + 16) = svtData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)svtData, v41, v42, v43, v44, v45, v46);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.convertDamageProc, v40, v47, v48, v49, v50, v51, v52);
  v56 = sub_1BCAA2C(BattleLogicBuff_AddSubDamageProcess_TypeInfo, v53, v54, v55);
  System_Object___ctor((Il2CppObject *)v56, 0LL);
  *(_QWORD *)(v56 + 16) = svtData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 16), (int64_t)svtData, v57, v58, v59, v60, v61, v62);
  this->fields.addSubDamageProc = (struct BattleLogicBuff_AddSubDamageProcess_o *)v56;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.addSubDamageProc, v56, v63, v64, v65, v66, v67, v68);
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
      sub_1BCAA3C(this, v5);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleLogicBuff_ReduceHpProcess___c_c *v11; // x0
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x20
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v14; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_int__o *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_4B18DE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___, method, v2);
    sub_1BCA7E0(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__, v7, v8);
    sub_1BCA7E0(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v9, v10);
    byte_4B18DE0 = 1;
  }
  v11 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  buffList = this->fields.buffList;
  if ( !BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo, method);
    v11 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v11->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo,
                                              method,
                                              v2,
                                              v3);
    System_Func_object__int____ctor(
      _9__8_0,
      v14,
      Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__,
      0LL);
    static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)_9__8_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v23 = System_Linq_Enumerable__Sum(v22, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_1BCAA3C(v23, v24);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v23,
           this->fields.buffList,
           v25);
}


bool __fastcall BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogicBuff_ReduceHpProcess_o *v3; // x19
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x8

  v3 = this;
  if ( (byte_4B18DE1 & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__,
                                                  method,
                                                  v2);
    byte_4B18DE1 = 1;
  }
  buffList = v3->fields.buffList;
  if ( !buffList )
    sub_1BCAA3C(this, method);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  BattleLogicBuff_AddSubDamageProcess_o *addSubDamageProc; // x0
  int32_t v15; // w22
  __int64 v16; // x1
  int32_t v17; // w22
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *buffList; // x21
  int64_t v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_4B18DDF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, damageBuff, *(_QWORD *)&totalParam);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__, v10, v11);
    sub_1BCA7E0(&System_Math_TypeInfo, v12, v13);
    byte_4B18DDF = 1;
  }
  if ( plusMinus >= 1 )
  {
    addSubDamageProc = this->fields.addSubDamageProc;
    if ( !addSubDamageProc )
      goto LABEL_16;
    v15 = *curParam;
    v17 = BattleLogicBuff_AddSubDamageProcess__GetActValue(
            addSubDamageProc,
            damageBuff,
            *(const MethodInfo **)&totalParam)
        + v15;
    *curParam = v17;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
    *curParam = System_Math__Max_63220196(0, v17, 0LL);
    addSubDamageProc = (BattleLogicBuff_AddSubDamageProcess_o *)this->fields.convertDamageProc;
    if ( !addSubDamageProc )
      goto LABEL_16;
    if ( BattleLogicBuff_ConvertReduceRegainProcess__CheckHpReduceToRegainIndiv(
           (BattleLogicBuff_ConvertReduceRegainProcess_o *)addSubDamageProc,
           damageBuff,
           curParam,
           v18) )
    {
      return;
    }
    buffList = (System_Collections_Generic_List_object__o *)this->fields.buffList;
    v23 = sub_1BCAA2C(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, v19, v20, v21);
    System_Object___ctor((Il2CppObject *)v23, 0LL);
    if ( !v23
      || (*(_QWORD *)(v23 + 16) = damageBuff,
          sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)damageBuff, v24, v25, v26, v27, v28, v29),
          *(_DWORD *)(v23 + 24) = *curParam,
          !buffList)
      || (items = buffList->fields._items,
          v37 = Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__,
          ++buffList->fields._version,
          !items) )
    {
LABEL_16:
      sub_1BCAA3C(addSubDamageProc, damageBuff);
    }
    size = buffList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        buffList,
        (Il2CppObject *)v23,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &items->obj.klass + size;
      buffList->fields._size = size + 1;
      v39[4] = (Il2CppClass *)v23;
      sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18DE2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1, v2);
    byte_4B18DE2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.damage;
}