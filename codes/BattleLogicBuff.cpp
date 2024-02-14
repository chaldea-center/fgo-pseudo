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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_421392E & 1) == 0 )
  {
    this = (BattleLogicBuff_ConvertReduceRegainProcess_o *)sub_B0D8A4(
                                                             &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             damageBuff);
    byte_421392E = 1;
  }
  selfSvt = v6->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            damageBuff,
                                                            curParam),
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
    sub_B0D97C(this);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)svtData, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(0LL);
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
  struct BattleServantData_o *selfSvt; // x23
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x0
  BattleBuffData_o *buffData; // x22
  System_Int32_array *Individualty; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  BattleBuffData_CheckIndividualitiesData_o *v28; // x24
  const MethodInfo *v29; // x6
  __int64 v30; // x0
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x4
  __int64 v34; // x1
  __int64 v35; // x2
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v37; // x0
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__2_0; // x20
  Il2CppObject *v40; // x21
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t v49; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_421392F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, *(_QWORD *)&curHp);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v7);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__,
      v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__,
      v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__,
      v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v14);
    sub_B0D8A4(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__, v16);
    sub_B0D8A4(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__, v17);
    sub_B0D8A4(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v18);
    byte_421392F = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v19 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                                             *(_QWORD *)&curHp,
                                                                             reduceHpBuffList);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v19,
    (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_33;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    reduceHpBuffList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v49 = 0;
  v51 = v50;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__);
    if ( !v32 )
      break;
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_B0D97C(v32);
    current = v51.fields.current;
    if ( !v51.fields.current )
      sub_B0D97C(v32);
    klass = v51.fields.current[1].klass;
    if ( !klass )
      sub_B0D97C(0LL);
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, v33);
    v28 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v26,
                                                         v27);
    BattleBuffData_CheckIndividualitiesData___ctor_22771868(v28, selfSvt, 0LL, 0LL, Individualty, 0LL, v29);
    if ( !buffData )
      sub_B0D97C(v30);
    FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v28, 1, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v19 )
        sub_B0D97C(FirstMatchCondBuff);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
        v19,
        (WarBoardAIRoute_RouteData_o *)FirstMatchCondBuff,
        (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v49 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v19 )
LABEL_33:
    sub_B0D97C(v20);
  if ( v49 < curHp && v19->fields._count > 0 )
    return 1;
  v37 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    v37 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                     v34,
                                                                                     v35);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__2_0,
      v40,
      Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v41 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    v41->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v41->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (System_Action_T__o *)_9__2_0,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  return 0;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x0

  if ( (byte_4211F5E & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1);
    byte_4211F5E = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_4213930 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, svtData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo, v6);
    sub_B0D8A4(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v7);
    byte_4213930 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo,
                                                                                                 svtData,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v17 = sub_B0D974(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v15, v16);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  *(_QWORD *)(v17 + 16) = svtData;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)svtData, v18, v19, v20, v21, v22, v23);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.preventDeathProc,
    (System_Int32_array **)v17,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v32 = sub_B0D974(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, v30, v31);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  *(_QWORD *)(v32 + 16) = svtData;
  sub_B0D840((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)svtData, v33, v34, v35, v36, v37, v38);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v32;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.convertDamageProc,
    (System_Int32_array **)v32,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
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
      sub_B0D97C(this);
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
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x20
  BattleLogicBuff_ReduceHpProcess___c_c *v9; // x0
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v12; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  __int64 v21; // x0
  const MethodInfo *v22; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_4213932 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___, method);
    sub_B0D8A4(&Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__, v4);
    sub_B0D8A4(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo, v5);
    sub_B0D8A4(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__, v6);
    sub_B0D8A4(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v7);
    byte_4213932 = 1;
  }
  buffList = this->fields.buffList;
  v9 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_ReduceHpProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    v9 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo,
                                                                                method,
                                                                                v2);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v12,
      Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__);
    v13 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    v13->__9__7_0 = _9__7_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v21 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v20, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_B0D97C(v21);
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v21,
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
  if ( (byte_4213933 & 1) == 0 )
  {
    this = (BattleLogicBuff_ReduceHpProcess_o *)sub_B0D8A4(
                                                  &Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__,
                                                  method);
    byte_4213933 = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    sub_B0D97C(this);
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
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x21
  __int64 v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4213931 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, damageBuff);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__, v10);
    byte_4213931 = 1;
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
      v15 = sub_B0D974(BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, v12, v13);
      BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor((BattleLogicBuff_ReduceHpProcess_BuffInfo_o *)v15, 0LL);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 16) = damageBuff;
        sub_B0D840(
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
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
          return;
        }
      }
    }
    sub_B0D97C(convertDamageProc);
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
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x0

  if ( (byte_4211F5F & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1);
    byte_4211F5F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.damage;
}