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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_42E7C59 & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_B5D5C4(
                                                             &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             (_DWORD)damageBuff,
                                                             (_DWORD)curParam,
                                                             method);
    byte_42E7C59 = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo),
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
    sub_B5D69C(this, damageBuff);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
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
    sub_B5D69C(0LL, damage);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v45; // x19
  __int64 v46; // x0
  __int64 v47; // x1
  struct BattleServantData_o *selfSvt; // x23
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x0
  BattleBuffData_o *buffData; // x22
  System_Int32_array *Individualty; // x25
  BattleBuffData_CheckIndividualitiesData_o *v53; // x24
  const MethodInfo *v54; // x6
  __int64 v55; // x0
  __int64 v56; // x1
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  _BOOL8 v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x4
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v62; // x0
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__2_0; // x20
  Il2CppObject *v65; // x21
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int32_t v74; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E7C5A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, curHp, (_DWORD)reduceHpBuffList, method);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v33, v34, v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__,
      v36,
      v37,
      v38);
    sub_B5D5C4(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__, v39, v40, v41);
    sub_B5D5C4(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v42, v43, v44);
    byte_42E7C5A = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v45 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v45,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_33;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v75,
    reduceHpBuffList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v74 = 0;
  v76 = v75;
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v76,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v58 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_B5D69C(v58, v59);
    current = v76.fields.current;
    if ( !v76.fields.current )
      sub_B5D69C(v58, v59);
    klass = v76.fields.current[1].klass;
    if ( !klass )
      sub_B5D69C(0LL, v59);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, v60);
    v53 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_23687408(v53, selfSvt, 0LL, 0LL, Individualty, 0LL, v54);
    if ( !buffData )
      sub_B5D69C(v55, v56);
    FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v53, 1, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v45 )
        sub_B5D69C(FirstMatchCondBuff, FirstMatchCondBuff);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
        v45,
        (WarBoardAIRoute_RouteData_o *)FirstMatchCondBuff,
        (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v74 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v76,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v45 )
LABEL_33:
    sub_B5D69C(v46, v47);
  if ( v74 < curHp && v45->fields._count > 0 )
    return 1;
  v62 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    v62 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  }
  static_fields = v62->static_fields;
  _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__2_0,
      v65,
      Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v66 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    v66->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v66->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v45,
    (System_Action_T__o *)_9__2_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  return 0;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x0

  if ( (byte_42E6026 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1, v2, v3);
    byte_42E6026 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  BattleBuffData_BuffData__RevertUnused(buff, 1, 0LL);
}


void __fastcall BattleLogicBuff_ReduceHpProcess___ctor(
        BattleLogicBuff_ReduceHpProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_42E7C5B & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, (_DWORD)svtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v12, v13, v14);
    byte_42E7C5B = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v22 = sub_B5D694(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  *(_QWORD *)(v22 + 16) = svtData;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)svtData, v23, v24, v25, v26, v27, v28);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.preventDeathProc,
    (System_Int32_array **)v22,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = sub_B5D694(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  *(_QWORD *)(v35 + 16) = svtData;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 16), (System_Int32_array **)svtData, v36, v37, v38, v39, v40, v41);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.convertDamageProc,
    (System_Int32_array **)v35,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
      sub_B5D69C(this, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x20
  BattleLogicBuff_ReduceHpProcess___c_c *v18; // x0
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v21; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_42E7C5D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__, v11, v12, v13);
    sub_B5D5C4(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v14, v15, v16);
    byte_42E7C5D = 1;
  }
  buffList = this->fields.buffList;
  v18 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_ReduceHpProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    v18 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v21,
      Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__);
    v22 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    v22->__9__7_0 = _9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v30 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v29, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_B5D69C(v30, v31);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v30,
           this->fields.buffList,
           v32);
}


bool __fastcall BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleLogicBuff_ReduceHpProcess_o *v4; // x19
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x8

  v4 = this;
  if ( (byte_42E7C5E & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__,
                                                  (_DWORD)method,
                                                  v2,
                                                  v3);
    byte_42E7C5E = 1;
  }
  buffList = v4->fields.buffList;
  if ( !buffList )
    sub_B5D69C(this, method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x0
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x21
  __int64 v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E7C5C & 1) == 0 )
  {
    sub_B5D5C4(
      &BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo,
      (_DWORD)damageBuff,
      totalParam,
      *(_QWORD *)&plusMinus);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__, v10, v11, v12);
    byte_42E7C5C = 1;
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
      v15 = sub_B5D694(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo);
      BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor((BattleLogicBuff_ReduceHpProcess_BuffInfo_o *)v15, 0LL);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 16) = damageBuff;
        sub_B5D560(
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
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
          return;
        }
      }
    }
    sub_B5D69C(convertDamageProc, damageBuff);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x0

  if ( (byte_42E6027 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1, v2, v3);
    byte_42E6027 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.damage;
}