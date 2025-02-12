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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BB7377 & 1) == 0 )
  {
    sub_1C13D24(&BattleBuffData_CheckIndividualitiesData_TypeInfo, damageBuff);
    byte_4BB7377 = 1;
  }
  selfSvt = this->fields.selfSvt;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C13F70(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_43839548(v6, selfSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
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
        return BattleBuffData__getActValue_43662992((BattleBuffData_o *)Individualty, 135, v6, 0LL);
    }
LABEL_11:
    sub_1C13F80(Individualty, v8);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4BB7376 & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_1C13D24(
                                                             &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             damageBuff);
    byte_4BB7376 = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C13F70(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor_43839548(v9, selfSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        !damageBuff)
    || (this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)BattleBuffData_BuffData__GetIndividualty(
                                                                 damageBuff,
                                                                 0,
                                                                 0,
                                                                 0,
                                                                 0LL),
        !buffData) )
  {
    sub_1C13F80(this, damageBuff);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v5, v6, v7, v8, v9, v10);
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
    sub_1C13F80(0LL, damage);
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
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB7374 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BattleBuffData_BuffData__TypeInfo, *(_QWORD *)&curHp);
    sub_1C13D24(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v6);
    sub_1C13D24(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__,
      v8);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__,
      v9);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__,
      v10);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v13);
    sub_1C13D24(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__, v15);
    sub_1C13D24(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__, v16);
    sub_1C13D24(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v17);
    byte_4BB7374 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v18 = (System_Collections_Generic_HashSet_T__o *)sub_1C13F70(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v18,
    (const MethodInfo_34E66FC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)reduceHpBuffList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v21 = 0;
  v47 = v46;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v22 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_1C13F80(v22, v23);
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_1C13F80(v22, v23);
    klass = v47.fields._current[1].klass;
    if ( !klass )
      sub_1C13F80(0LL, v23);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, 0LL);
    v29 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C13F70(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_43842348(v29, selfSvt, 0LL, 0LL, Individualty, 0LL, 0LL, 0LL);
    if ( !buffData )
      sub_1C13F80(v30, v31);
    FirstMatchCondBuff = (Il2CppObject *)BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v29, 1, 0LL, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v18 )
        sub_1C13F80(FirstMatchCondBuff, FirstMatchCondBuff);
      System_Collections_Generic_HashSet_object___Add(
        v18,
        FirstMatchCondBuff,
        (const MethodInfo_34E78E0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v21 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v18 )
LABEL_29:
    sub_1C13F80(v19, v20);
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
      _9__2_0 = (System_Action_object__o *)sub_1C13F70(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__2_0,
        v36,
        Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
        0LL);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_0,
        (int64_t)_9__2_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v18,
      (System_Action_T__o *)_9__2_0,
      (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  return v33;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB7375 & 1) == 0 )
  {
    sub_1C13D24(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1);
    byte_4BB7375 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  if ( (byte_4BB736F & 1) == 0 )
  {
    sub_1C13D24(&BattleLogicBuff_AddSubDamageProcess_TypeInfo, svtData);
    sub_1C13D24(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo, v7);
    sub_1C13D24(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v8);
    byte_4BB736F = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v16 = sub_1C13F70(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  *(_QWORD *)(v16 + 16) = svtData;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)svtData, v17, v18, v19, v20, v21, v22);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.preventDeathProc, v16, v23, v24, v25, v26, v27, v28);
  v29 = sub_1C13F70(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  *(_QWORD *)(v29 + 16) = svtData;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)svtData, v30, v31, v32, v33, v34, v35);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v29;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.convertDamageProc, v29, v36, v37, v38, v39, v40, v41);
  v42 = sub_1C13F70(BattleLogicBuff_AddSubDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  *(_QWORD *)(v42 + 16) = svtData;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)svtData, v43, v44, v45, v46, v47, v48);
  this->fields.addSubDamageProc = (struct BattleLogicBuff_AddSubDamageProcess_o *)v42;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.addSubDamageProc, v42, v49, v50, v51, v52, v53, v54);
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
      sub_1C13F80(this, v5);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_int__o *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_4BB7371 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___, method);
    sub_1C13D24(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo, v3);
    sub_1C13D24(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__, v4);
    sub_1C13D24(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v5);
    byte_4BB7371 = 1;
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
    _9__8_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v9, Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__8_0__, 0LL);
    static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)_9__8_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Select_object__int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_2FC022C *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v18 = System_Linq_Enumerable__Sum(v17, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_1C13F80(v18, v19);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v18,
           this->fields.buffList,
           v20);
}


bool __fastcall BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicBuff_ReduceHpProcess_o *v2; // x19
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x8

  v2 = this;
  if ( (byte_4BB7372 & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_1C13D24(
                                                  &Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__,
                                                  method);
    byte_4BB7372 = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    sub_1C13F80(this, method);
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
  int64_t v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4BB7370 & 1) == 0 )
  {
    sub_1C13D24(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, damageBuff);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__, v10);
    sub_1C13D24(&System_Math_TypeInfo, v11);
    byte_4BB7370 = 1;
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
    *curParam = System_Math__Max_63787088(0, v14, 0LL);
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
    v17 = sub_1C13F70(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17
      || (*(_QWORD *)(v17 + 16) = damageBuff,
          sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)damageBuff, v18, v19, v20, v21, v22, v23),
          *(_DWORD *)(v17 + 24) = *curParam,
          !buffList)
      || (items = buffList->fields._items,
          v31 = Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__,
          ++buffList->fields._version,
          !items) )
    {
LABEL_16:
      sub_1C13F80(addSubDamageProc, damageBuff);
    }
    size = buffList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        buffList,
        (Il2CppObject *)v17,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      buffList->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v17;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v33 + 4), v17, v24, v25, v26, v27, v28, v29);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB7373 & 1) == 0 )
  {
    sub_1C13D24(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1);
    byte_4BB7373 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return x->fields.damage;
}