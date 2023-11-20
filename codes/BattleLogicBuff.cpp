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
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_B16F98(&this->fields, svtData);
}


bool __fastcall BattleLogicBuff_ConvertReduceRegainProcess__CheckHpReduceToRegainIndiv(
        BattleLogicBuff_ConvertReduceRegainProcess_o *this,
        BattleBuffData_BuffData_o *damageBuff,
        int32_t *curParam,
        const MethodInfo *method)
{
  __int64 v4; // x4
  struct BattleServantData_o *selfSvt; // x24
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v10; // x23
  const MethodInfo *v11; // x6
  const MethodInfo *v12; // x4
  System_Int32_array *Individualty; // x0
  bool result; // w0

  if ( (byte_40F853E & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, damageBuff);
    byte_40F853E = 1;
  }
  selfSvt = this->fields.selfSvt;
  if ( !selfSvt
    || (buffData = selfSvt->fields.buffData,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             damageBuff,
                                                             curParam,
                                                             method,
                                                             v4),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, selfSvt, 0LL, 0LL, 0LL, 0LL, v11),
        !damageBuff)
    || (Individualty = BattleBuffData_BuffData__GetIndividualty(damageBuff, 0, 0, 0, v12), !buffData) )
  {
    sub_B170D4();
  }
  if ( !BattleBuffData__checkActBuffDamageBuffIndiv(buffData, 107, v10, Individualty, 0LL) )
    return 0;
  result = 1;
  this->fields._TotalConvertReduceToRegainParam_k__BackingField += *curParam;
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.selfSvt = svtData;
  sub_B16F98(&this->fields, svtData);
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
    sub_B170D4();
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
  __int64 v4; // x4
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
  __int64 v19; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v20; // x19
  struct BattleServantData_o *selfSvt; // x23
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x0
  BattleBuffData_o *buffData; // x22
  System_Int32_array *Individualty; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  BattleBuffData_CheckIndividualitiesData_o *v30; // x24
  const MethodInfo *v31; // x6
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x1
  const MethodInfo *v33; // x4
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  BattleLogicBuff_PreventDeathDamageProcess___c_c *v39; // x0
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__2_0; // x20
  Il2CppObject *v42; // x21
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *v43; // x0
  int32_t v45; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F853F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, *(_QWORD *)&curHp);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v8);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__,
      v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__,
      v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Current__,
      v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v15);
    sub_B16FFC(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__, v17);
    sub_B16FFC(&Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__, v18);
    sub_B16FFC(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v19);
    byte_40F853F = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v20 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                                             *(_QWORD *)&curHp,
                                                                             reduceHpBuffList,
                                                                             method,
                                                                             v4);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v20,
    (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  if ( !reduceHpBuffList )
    goto LABEL_33;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v46,
    reduceHpBuffList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__GetEnumerator__);
  v45 = 0;
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__MoveNext__) )
  {
    selfSvt = this->fields.selfSvt;
    if ( !selfSvt )
      sub_B170D4();
    current = v47.fields.current;
    if ( !v47.fields.current )
      sub_B170D4();
    klass = v47.fields.current[1].klass;
    if ( !klass )
      sub_B170D4();
    buffData = selfSvt->fields.buffData;
    Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)klass, 0, 0, 0, v33);
    v30 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v26,
                                                         v27,
                                                         v28,
                                                         v29);
    BattleBuffData_CheckIndividualitiesData___ctor_22056984(v30, selfSvt, 0LL, 0LL, Individualty, 0LL, v31);
    if ( !buffData )
      sub_B170D4();
    FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 96, v30, 1, 0LL);
    if ( FirstMatchCondBuff )
    {
      if ( !v20 )
        sub_B170D4();
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
        v20,
        (WarBoardAIRoute_RouteData_o *)FirstMatchCondBuff,
        (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    }
    else
    {
      v45 += LODWORD(current[1].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo__Dispose__);
  if ( !v20 )
LABEL_33:
    sub_B170D4();
  if ( v45 < curHp && v20->fields._count > 0 )
    return 1;
  v39 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo);
    v39 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                     v34,
                                                                                     v35,
                                                                                     v36,
                                                                                     v37);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__2_0,
      v42,
      Method_BattleLogicBuff_PreventDeathDamageProcess___c__IsApplyEffect_b__2_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v43 = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
    v43->__9__2_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__2_0;
    sub_B16F98(&v43->__9__2_0, _9__2_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v20,
    (System_Action_T__o *)_9__2_0,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  return 0;
}


void __fastcall BattleLogicBuff_PreventDeathDamageProcess___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleLogicBuff_PreventDeathDamageProcess___c_StaticFields *static_fields; // x0

  if ( (byte_40F78C1 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1);
    byte_40F78C1 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleLogicBuff_PreventDeathDamageProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_PreventDeathDamageProcess___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
  BattleBuffData_BuffData__RevertUnused(buff, 1, 0LL);
}


void __fastcall BattleLogicBuff_ReduceHpProcess___ctor(
        BattleLogicBuff_ReduceHpProcess_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x21

  if ( (byte_40F8540 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, svtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo, v8);
    sub_B16FFC(&BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v9);
    byte_40F8540 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__TypeInfo,
                                                                                                  svtData,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor__);
  this->fields.buffList = (struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v10;
  sub_B16F98(&this->fields, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15 = (Il2CppObject *)sub_B170CC(BattleLogicBuff_PreventDeathDamageProcess_TypeInfo, v11, v12, v13, v14);
  System_Object___ctor(v15, 0LL);
  v15[1].klass = (Il2CppClass *)svtData;
  sub_B16F98(&v15[1], svtData);
  this->fields.preventDeathProc = (struct BattleLogicBuff_PreventDeathDamageProcess_o *)v15;
  sub_B16F98(&this->fields.preventDeathProc, v15);
  v20 = (Il2CppObject *)sub_B170CC(BattleLogicBuff_ConvertReduceRegainProcess_TypeInfo, v16, v17, v18, v19);
  System_Object___ctor(v20, 0LL);
  v20[1].klass = (Il2CppClass *)svtData;
  sub_B16F98(&v20[1], svtData);
  this->fields.convertDamageProc = (struct BattleLogicBuff_ConvertReduceRegainProcess_o *)v20;
  sub_B16F98(&this->fields.convertDamageProc, v20);
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
      sub_B170D4();
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x20
  BattleLogicBuff_ReduceHpProcess___c_c *v11; // x0
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v14; // x22
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *v15; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  int32_t v17; // w0
  const MethodInfo *v18; // x3
  BattleLogicBuff_PreventDeathDamageProcess_o *preventDeathProc; // x8

  if ( (byte_40F8542 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___, method);
    sub_B16FFC(&Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__, v6);
    sub_B16FFC(&System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo, v7);
    sub_B16FFC(&Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__, v8);
    sub_B16FFC(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v9);
    byte_40F8542 = 1;
  }
  buffList = this->fields.buffList;
  v11 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  if ( (BYTE3(BattleLogicBuff_ReduceHpProcess___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicBuff_ReduceHpProcess___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBuff_ReduceHpProcess___c_TypeInfo);
    v11 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__TypeInfo,
                                                                                method,
                                                                                v2,
                                                                                v3,
                                                                                v4);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v14,
      Method_BattleLogicBuff_ReduceHpProcess___c__GetFixDamage_b__7_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___ctor__);
    v15 = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
    v15->__9__7_0 = _9__7_0;
    sub_B16F98(&v15->__9__7_0, _9__7_0);
  }
  v16 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffList,
          (System_Func_TSource__TResult__o *)_9__7_0,
          (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int___);
  v17 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v16, 0LL);
  preventDeathProc = this->fields.preventDeathProc;
  if ( !preventDeathProc )
    sub_B170D4();
  return BattleLogicBuff_PreventDeathDamageProcess__GetDamageAffectedEffect(
           preventDeathProc,
           v17,
           this->fields.buffList,
           v18);
}


bool __fastcall BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(
        BattleLogicBuff_ReduceHpProcess_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x8

  if ( (byte_40F8543 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__get_Count__, method);
    byte_40F8543 = 1;
  }
  buffList = this->fields.buffList;
  if ( !buffList )
    sub_B170D4();
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
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *buffList; // x21
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v17; // x22

  if ( (byte_40F8541 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo, damageBuff);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__, v10);
    byte_40F8541 = 1;
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
      v17 = (BattleLogicBuff_ReduceHpProcess_BuffInfo_o *)sub_B170CC(
                                                            BattleLogicBuff_ReduceHpProcess_BuffInfo_TypeInfo,
                                                            v12,
                                                            v13,
                                                            v14,
                                                            v15);
      BattleLogicBuff_ReduceHpProcess_BuffInfo___ctor(v17, 0LL);
      if ( v17 )
      {
        v17->fields.buff = damageBuff;
        sub_B16F98(&v17->fields, damageBuff);
        v17->fields.damage = *curParam;
        if ( buffList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)buffList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__Add__);
          return;
        }
      }
    }
    sub_B170D4();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleLogicBuff_ReduceHpProcess___c_StaticFields *static_fields; // x0

  if ( (byte_40F78C2 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1);
    byte_40F78C2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicBuff_ReduceHpProcess___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleLogicBuff_ReduceHpProcess___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicBuff_ReduceHpProcess___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
  return x->fields.damage;
}