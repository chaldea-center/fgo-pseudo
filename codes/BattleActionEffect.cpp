void BattleActionEffect___ctor(BattleActionEffect_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_AddChangeMaxHpBuff___ctor(
        BattleActionEffect_AddChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_AddChangeMaxHpBuff__PartialAfterEffectProc(
        BattleActionEffect_AddChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  BattleActionEffect_AddChangeMaxHpBuff_c *klass; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  int32_t subBaseHp; // [xsp+Ch] [xbp-24h] BYREF

  klass = this->klass;
  subBaseHp = 0;
  buffData = (BattleBuffData_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleServantData_o *, const MethodInfo *, const MethodInfo *))klass->vtable._9_GetServantMaxHp.methodPtr)(
                                   this,
                                   svt,
                                   klass->vtable._9_GetServantMaxHp.method,
                                   method);
  if ( !svt || (v9 = (int)buffData, (buffData = svt->fields.buffData) == 0) )
    sub_2213CDC(buffData, v8);
  BattleBuffData__AddForceBuff(buffData, this->fields.buffArray, 0);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
  if ( this->fields.diffVal )
    BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v9, 1, 0);
}


void BattleActionEffect_AddChangeMaxHpBuff__PartialPreActionProc(
        BattleActionEffect_AddChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  int32_t subBaseHp; // [xsp+Ch] [xbp-14h] BYREF

  subBaseHp = 0;
  if ( !svt || !svt->fields.buffData )
    sub_2213CDC(this, data);
  BattleBuffData__DelForceBuff(svt->fields.buffData, this->fields.buffArray, 0);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
}


void BattleActionEffect_AddChangeMaxHpFieldBuff___ctor(
        BattleActionEffect_AddChangeMaxHpFieldBuff_o *this,
        int32_t beforeMaxHp,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._beforeMaxHp = beforeMaxHp;
}


int32_t BattleActionEffect_AddChangeMaxHpFieldBuff__GetServantMaxHp(
        BattleActionEffect_AddChangeMaxHpFieldBuff_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  return this->fields._beforeMaxHp;
}


void BattleActionEffect_AddChangeMaxHpFieldBuff__PartialAfterEffectProc(
        BattleActionEffect_AddChangeMaxHpFieldBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  BattleActionEffect_AddChangeMaxHpBuff__PartialAfterEffectProc(
    (BattleActionEffect_AddChangeMaxHpBuff_o *)this,
    data,
    svt,
    method);
  if ( !svt )
    sub_2213CDC(v5, v6);
  BattleServantData__updateHp(svt, 1, 0);
}


void BattleActionEffect_AddFieldBuff___ctor(
        BattleActionEffect_AddFieldBuff_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.AddBuffArray = buffArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)buffArray, v5, v6, v7, v8, v9, v10);
}


void BattleActionEffect_AddFieldBuff__AfterEffectProc(
        BattleActionEffect_AddFieldBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x8

  if ( !data
    || (FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__AddForceBuffArray(FieldEnvData_k__BackingField, this->fields.AddBuffArray, 0),
        (this = (BattleActionEffect_AddFieldBuff_o *)data->fields.perf) == 0) )
  {
    sub_2213CDC(this, data);
  }
  BattlePerformance__UpdateFieldView((BattlePerformance_o *)this, 0);
}


void BattleActionEffect_AddFieldBuff__PreActionProc(
        BattleActionEffect_AddFieldBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x8

  if ( !data || (FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField) == 0 )
    sub_2213CDC(this, data);
  BattleFieldEnvironmentData__DelForceBuffArray(FieldEnvData_k__BackingField, this->fields.AddBuffArray, 0);
}


void BattleActionEffect_AddServantBuff__AfterEffectProc(
        BattleActionEffect_AddServantBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x1
  const MethodInfo *v5; // x2

  if ( !data )
    sub_2213CDC(this, 0);
  ServantData = BattleData__getServantData(data, this->fields.targetId, 0);
  BattleActionEffect_BaseChangeServantBuff__ForceAddBuff(
    (BattleActionEffect_BaseChangeServantBuff_o *)this,
    ServantData,
    v5);
}


void BattleActionEffect_AddServantBuff__PreActionProc(
        BattleActionEffect_AddServantBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x1
  const MethodInfo *v5; // x2

  if ( !data )
    sub_2213CDC(this, 0);
  ServantData = BattleData__getServantData(data, this->fields.targetId, 0);
  BattleActionEffect_BaseChangeServantBuff__ForceDelBuff(
    (BattleActionEffect_BaseChangeServantBuff_o *)this,
    ServantData,
    v5);
}


void BattleActionEffect_AddSubChangeMaxHpBuff___ctor(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        int32_t targetId,
        BattleServantSnapShot_o *beforeSvtCache,
        BattleServantSnapShot_o *afterSvtCache,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__o *BuffArray_k__BackingField; // x25
  System_Collections_Generic_HashSet_object__o *v13; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_T__o *v20; // x24
  System_Collections_Generic_HashSet_object__o *v21; // x25
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x24
  System_Func_object__bool__o *v29; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  struct BattleBuffData_BuffData_array *v33; // x25
  System_Func_object__bool__o *v34; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Object_array *v36; // x23
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct BattleBuffData_BuffData_array **p_SubBuffArray_k__BackingField; // x21
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7

  if ( (byte_5973106 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___91631288);
    sub_2213A60(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__);
    sub_2213A60(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__);
    sub_2213A60(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo);
    byte_5973106 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = sub_2213CCC(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !beforeSvtCache
    || (BuffArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)beforeSvtCache->fields._BuffArray_k__BackingField,
        v13 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo),
        System_Collections_Generic_HashSet_object____ctor_69968828(
          v13,
          BuffArray_k__BackingField,
          (const MethodInfo_42BA3BC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___91631288),
        !v9)
    || (*(_QWORD *)(v9 + 16) = v13,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)v13, v14, v15, v16, v17, v18, v19),
        !afterSvtCache) )
  {
    sub_2213CDC(v10, v11);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v21 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_69968828(
    v21,
    v20,
    (const MethodInfo_42BA3BC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___91631288);
  *(_QWORD *)(v9 + 24) = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v29 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v9,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__,
    0);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v31 = System_Linq_Enumerable__ToArray_object_(
          v30,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)beforeSvtCache->fields._BuffArray_k__BackingField;
  v33 = (struct BattleBuffData_BuffData_array *)v31;
  v34 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v34,
    (Il2CppObject *)v9,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__,
    0);
  v35 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v36 = System_Linq_Enumerable__ToArray_object_(
          v35,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields.buffArray = v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.buffArray, (int32_t)v33, v37, v38, v39, v40, v41, v42);
  this->fields._SubBuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v36;
  p_SubBuffArray_k__BackingField = &this->fields._SubBuffArray_k__BackingField;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 2) = 0;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 6) = targetId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_SubBuffArray_k__BackingField,
    (int32_t)v36,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  p_SubBuffArray_k__BackingField[1] = (struct BattleBuffData_BuffData_array *)vrev64_s32(
                                                                                vsub_s32(
                                                                                  *(int32x2_t *)&afterSvtCache->fields._ResultHp_k__BackingField,
                                                                                  *(int32x2_t *)&beforeSvtCache->fields._ResultHp_k__BackingField)).n64_u64[0];
}


void BattleActionEffect_AddSubChangeMaxHpBuff__PartialAfterEffectProc(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  __int64 v6; // x21
  BattleBuffData_o *buffData; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  BattleActionEffect_AddSubChangeMaxHpBuff___c_c *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *buffArray; // x22
  struct BattleActionEffect_AddSubChangeMaxHpBuff___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__16_0; // x23
  Il2CppObject *v14; // x24
  struct BattleActionEffect_AddSubChangeMaxHpBuff___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_IEnumerable_T__o *v22; // x23
  System_Collections_Generic_HashSet_int__o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct BattleBuffData_o *v30; // x8
  System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  System_Predicate_int__o *v32; // x23
  int v33; // w0

  if ( (byte_5973107 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor___91630040);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__);
    sub_2213A60(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__);
    sub_2213A60(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo);
    sub_2213A60(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    byte_5973107 = 1;
  }
  v6 = sub_2213CCC(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !svt )
    goto LABEL_16;
  buffData = svt->fields.buffData;
  svt->fields.maxhp += this->fields._BaseMaxHpDiffVal_k__BackingField;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__DelForceBuff(buffData, this->fields._SubBuffArray_k__BackingField, 0);
  buffData = svt->fields.buffData;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__AddForceBuff(buffData, this->fields.buffArray, 0);
  v10 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  buffArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.buffArray;
  if ( !*(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v9);
    v10 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__16_0 = (System_Func_object__int__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v9);
      static_fields = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_0,
      v14,
      Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__,
      0);
    v15 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields;
    v15->__9__16_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__16_0, (int32_t)_9__16_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         buffArray,
                                                         (System_Func_TSource__TResult__o *)_9__16_0,
                                                         (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69943008(
    v23,
    v22,
    (const MethodInfo_42B3EE0 *)Method_System_Collections_Generic_HashSet_int___ctor___91630040);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = v23,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)v23, v24, v25, v26, v27, v28, v29),
        (v30 = svt->fields.buffData) == 0)
    || (unfixedBuffList = v30->fields.unfixedBuffList,
        v32 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v32,
          (Il2CppObject *)v6,
          Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
          0),
        !unfixedBuffList) )
  {
LABEL_16:
    sub_2213CDC(buffData, v8);
  }
  System_Collections_Generic_List_int___RemoveAll(
    unfixedBuffList,
    (System_Predicate_T__o *)v32,
    (const MethodInfo_4468864 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  v33 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svt->klass->vtable._9_get_hp.methodPtr)(
          svt,
          svt->klass->vtable._9_get_hp.method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, const MethodInfo *))svt->klass->vtable._10_set_hp.methodPtr)(
    svt,
    (unsigned int)(this->fields._ResultHpDiffVal_k__BackingField + v33),
    svt->klass->vtable._10_set_hp.method);
}


void BattleActionEffect_AddSubChangeMaxHpBuff__PartialPreActionProc(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  int32_t BaseMaxHpDiffVal_k__BackingField; // w9
  BattleActionEffect_AddSubChangeMaxHpBuff_o *v5; // x19

  if ( !svt
    || (BaseMaxHpDiffVal_k__BackingField = this->fields._BaseMaxHpDiffVal_k__BackingField,
        v5 = this,
        this = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)svt->fields.buffData,
        svt->fields.maxhp -= BaseMaxHpDiffVal_k__BackingField,
        !this)
    || (BattleBuffData__DelForceBuff((BattleBuffData_o *)this, v5->fields.buffArray, 0),
        (this = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)svt->fields.buffData) == 0) )
  {
    sub_2213CDC(this, data);
  }
  BattleBuffData__AddForceBuff((BattleBuffData_o *)this, v5->fields._SubBuffArray_k__BackingField, 0);
}


BattleBuffData_BuffData_array *BattleActionEffect_AddSubChangeMaxHpBuff__get_AddBuffArray(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  return this->fields.buffArray;
}


int32_t BattleActionEffect_AddSubChangeMaxHpBuff__get_BaseMaxHpDiffVal(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._BaseMaxHpDiffVal_k__BackingField;
}


int32_t BattleActionEffect_AddSubChangeMaxHpBuff__get_ResultHpDiffVal(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._ResultHpDiffVal_k__BackingField;
}


BattleBuffData_BuffData_array *BattleActionEffect_AddSubChangeMaxHpBuff__get_SubBuffArray(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._SubBuffArray_k__BackingField;
}


void BattleActionEffect_AddSubChangeMaxHpBuff__set_BaseMaxHpDiffVal(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BaseMaxHpDiffVal_k__BackingField = value;
}


void BattleActionEffect_AddSubChangeMaxHpBuff__set_ResultHpDiffVal(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ResultHpDiffVal_k__BackingField = value;
}


void BattleActionEffect_AddSubChangeMaxHpBuff__set_SubBuffArray(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        BattleBuffData_BuffData_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SubBuffArray_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SubBuffArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionEffect_AddSubChangeMaxHpBuff___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973108 & 1) == 0 )
  {
    sub_2213A60(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    byte_5973108 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields->__9 = (struct BattleActionEffect_AddSubChangeMaxHpBuff___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionEffect_AddSubChangeMaxHpBuff___c___ctor(
        BattleActionEffect_AddSubChangeMaxHpBuff___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleActionEffect_AddSubChangeMaxHpBuff___c___PartialAfterEffectProc_b__16_0(
        BattleActionEffect_AddSubChangeMaxHpBuff___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.addOrder;
}


void BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0____ctor_b__0(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *beforeBuffsHash; // x0

  if ( (byte_5973109 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_5973109 = 1;
  }
  beforeBuffsHash = this->fields.beforeBuffsHash;
  if ( !beforeBuffsHash )
    sub_2213CDC(0, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            (System_Collections_Generic_HashSet_object__o *)beforeBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_42BA9D0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


bool BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0____ctor_b__1(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *afterBuffsHash; // x0

  if ( (byte_597310A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_597310A = 1;
  }
  afterBuffsHash = this->fields.afterBuffsHash;
  if ( !afterBuffsHash )
    sub_2213CDC(0, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            (System_Collections_Generic_HashSet_object__o *)afterBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_42BA9D0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0___ctor(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0___PartialAfterEffectProc_b__1(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addOrderHashSet; // x0

  if ( (byte_597310B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_597310B = 1;
  }
  addOrderHashSet = this->fields.addOrderHashSet;
  if ( !addOrderHashSet )
    sub_2213CDC(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           addOrderHashSet,
           x,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void BattleActionEffect_Base___ctor(BattleActionEffect_Base_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_Base__AfterEffectProc(
        BattleActionEffect_Base_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  ;
}


void BattleActionEffect_Base__PreActionProc(
        BattleActionEffect_Base_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  ;
}


void BattleActionEffect_BaseChangeServantBuff___ctor(
        BattleActionEffect_BaseChangeServantBuff_o *this,
        int32_t inTargetId,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  long double v14; // q0
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_597310C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    byte_597310C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetId = inTargetId;
  if ( !buffArray )
  {
    v15 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v16 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v16 )
    {
      sub_224B964(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
      v17 = sub_224B908(v14);
    if ( !*(_DWORD *)(v17 + 228) )
      *(__n128 *)&v14 = j_il2cpp_runtime_class_init_0(v17, v7);
    v18 = *(_QWORD *)(v15[7] + 16LL);
    if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
      v18 = sub_224B908(v14);
    buffArray = **(BattleBuffData_BuffData_array ***)(v18 + 184);
  }
  this->fields.ChangeBuffArray = buffArray;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ChangeBuffArray,
    (int32_t)buffArray,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void BattleActionEffect_BaseChangeServantBuff__ForceAddBuff(
        BattleActionEffect_BaseChangeServantBuff_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v5; // x1

  if ( svtData )
  {
    BuffData = BattleServantData__get_BuffData(svtData, 0);
    if ( !BuffData )
      sub_2213CDC(0, v5);
    BattleBuffData__AddForceBuff(BuffData, this->fields.ChangeBuffArray, 0);
  }
}


void BattleActionEffect_BaseChangeServantBuff__ForceDelBuff(
        BattleActionEffect_BaseChangeServantBuff_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v5; // x1

  if ( svtData )
  {
    BuffData = BattleServantData__get_BuffData(svtData, 0);
    if ( !BuffData )
      sub_2213CDC(0, v5);
    BattleBuffData__DelForceBuff(BuffData, this->fields.ChangeBuffArray, 0);
  }
}


void BattleActionEffect_BaseField___ctor(BattleActionEffect_BaseField_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_BaseField__AfterEffectProc(
        BattleActionEffect_BaseField_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(BattleActionEffect_BaseField_o *, BattleData_o *, struct BattleFieldEnvironmentData_o *, const MethodInfo *))this->klass->vtable._6_PartialAfterEffectProc.methodPtr)(
    this,
    data,
    data->fields._FieldEnvData_k__BackingField,
    this->klass->vtable._6_PartialAfterEffectProc.method);
}


void BattleActionEffect_BaseField__PartialAfterEffectProc(
        BattleActionEffect_BaseField_o *this,
        BattleData_o *data,
        BattleFieldEnvironmentData_o *fieldData,
        const MethodInfo *method)
{
  ;
}


void BattleActionEffect_BaseFuncServant___ctor(BattleActionEffect_BaseFuncServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_BaseServant___ctor(BattleActionEffect_BaseServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_BaseServant__AfterEffectProc(
        BattleActionEffect_BaseServant_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x0

  if ( !data )
    sub_2213CDC(this, 0);
  ServantData = BattleData__getServantData(data, this->fields.targetId, 0);
  if ( ServantData )
    ((void (__fastcall *)(BattleActionEffect_BaseServant_o *, BattleData_o *, BattleServantData_o *, const MethodInfo *))this->klass->vtable._6_PartialAfterEffectProc.methodPtr)(
      this,
      data,
      ServantData,
      this->klass->vtable._6_PartialAfterEffectProc.method);
}


BattleServantData_o *BattleActionEffect_BaseServant__GetServant(
        BattleActionEffect_BaseServant_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return BattleData__getServantData(data, this->fields.targetId, 0);
}


void BattleActionEffect_BaseServant__PartialAfterEffectProc(
        BattleActionEffect_BaseServant_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  ;
}


void BattleActionEffect_ChangeBgmBuff___ctor(BattleActionEffect_ChangeBgmBuff_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_ChangeBgmBuff__AfterEffectProc(
        BattleActionEffect_ChangeBgmBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionEffect_ChangeBgmBuff_o *)data->fields.logic) == 0 )
    sub_2213CDC(this, data);
  BattleLogic__PlayLoadCurrentBgm((BattleLogic_o *)this, 0, 0.0, 0);
}


void BattleActionEffect_LossHPFunc___ctor(
        BattleActionEffect_LossHPFunc_o *this,
        int32_t targetId,
        int32_t lossHp,
        bool isSafe,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetId = targetId;
  this->fields.lossHp = lossHp;
  this->fields.isSafe = isSafe;
}


void BattleActionEffect_LossHPFunc__PartialAfterEffectProc(
        BattleActionEffect_LossHPFunc_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  BattleActionEffect_LossHPFunc_o *v5; // x20
  int32_t NowHp; // w0
  __int64 v7; // x1
  int32_t v8; // w21
  int32_t isSafe; // w22
  int32_t lossHp; // w20
  int32_t v11; // w1

  v5 = this;
  if ( (byte_597310D & 1) == 0 )
  {
    this = (BattleActionEffect_LossHPFunc_o *)sub_2213A60(&System_Math_TypeInfo);
    byte_597310D = 1;
  }
  if ( !svt )
    sub_2213CDC(this, data);
  NowHp = BattleServantData__getNowHp(svt, 0);
  if ( NowHp >= 1 )
  {
    v8 = NowHp;
    isSafe = v5->fields.isSafe;
    lossHp = v5->fields.lossHp;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
    v11 = System_Math__Max_77153260(v8 - lossHp, isSafe, 0);
    BattleServantData__setHp(svt, v11, 0, 0, 0);
  }
}


void BattleActionEffect_MaxHpBuffServant___ctor(BattleActionEffect_MaxHpBuffServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleActionEffect_MaxHpBuffServant__GetServantMaxHp(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_2213CDC(this, 0);
  return BattleServantData__getMaxHp(svt, 0);
}


// local variable allocation has failed, the output may be wrong!
BattleActionEffect_MaxHpBuffServant_o *BattleActionEffect_MaxHpBuffServant__InitBuff(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleBuffData_BuffData_array *buffArray,
        int32_t targetId,
        int32_t diffVal,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.buffArray = buffArray;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.buffArray,
    (int32_t)buffArray,
    *(System_String_o **)&targetId,
    *(System_String_o **)&diffVal,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.targetId = targetId;
  this->fields.diffVal = diffVal;
  return this;
}


void BattleActionEffect_MaxHpBuffServant__PartialPreActionProc(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  ;
}


void BattleActionEffect_MaxHpBuffServant__PreActionProc(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v6; // x19
  int32_t NowHp; // w0

  if ( !data )
    sub_2213CDC(this, 0);
  ServantData = BattleData__getServantData(data, this->fields.targetId, 0);
  if ( ServantData )
  {
    v6 = ServantData;
    ((void (__fastcall *)(BattleActionEffect_MaxHpBuffServant_o *, BattleData_o *, BattleServantData_o *, const MethodInfo *))this->klass->vtable._8_PartialPreActionProc.methodPtr)(
      this,
      data,
      ServantData,
      this->klass->vtable._8_PartialPreActionProc.method);
    NowHp = BattleServantData__getNowHp(v6, 0);
    BattleServantData__setHp(v6, NowHp - this->fields.diffVal, 0, 0, 0);
    BattleServantData__addDamage(v6, 0, 0, 0);
  }
}


void BattleActionEffect_SubChangeMaxHpBuff___ctor(
        BattleActionEffect_SubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_SubChangeMaxHpBuff__PartialAfterEffectProc(
        BattleActionEffect_SubChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  BattleActionEffect_SubChangeMaxHpBuff_c *klass; // x8
  BattleBuffData_o *buffData; // x0
  __int64 v8; // x1
  int32_t v9; // w20
  int32_t NowHp; // w0
  int32_t subBaseHp; // [xsp+Ch] [xbp-24h] BYREF

  klass = this->klass;
  subBaseHp = 0;
  buffData = (BattleBuffData_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleServantData_o *, const MethodInfo *, const MethodInfo *))klass->vtable._9_GetServantMaxHp.methodPtr)(
                                   this,
                                   svt,
                                   klass->vtable._9_GetServantMaxHp.method,
                                   method);
  if ( !svt || (v9 = (int)buffData, (buffData = svt->fields.buffData) == 0) )
    sub_2213CDC(buffData, v8);
  BattleBuffData__DelForceBuff(buffData, this->fields.buffArray, 0);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
  if ( BattleServantData__getNowHp(svt, 0) >= 1 && subBaseHp >= 1 )
  {
    NowHp = BattleServantData__getNowHp(svt, 0);
    BattleServantData__setHp(svt, NowHp - subBaseHp, 0, 1, 0);
  }
  BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v9, 0, 0);
}


void BattleActionEffect_SubChangeMaxHpBuff__PartialPreActionProc(
        BattleActionEffect_SubChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  int32_t subBaseHp; // [xsp+Ch] [xbp-14h] BYREF

  subBaseHp = 0;
  if ( !svt || !svt->fields.buffData )
    sub_2213CDC(this, data);
  BattleBuffData__AddForceBuff(svt->fields.buffData, this->fields.buffArray, 0);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
}


void BattleActionEffect_SubChangeMaxHpFieldBuff___ctor(
        BattleActionEffect_SubChangeMaxHpFieldBuff_o *this,
        int32_t beforeMaxHp,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._beforeMaxHp = beforeMaxHp;
}


int32_t BattleActionEffect_SubChangeMaxHpFieldBuff__GetServantMaxHp(
        BattleActionEffect_SubChangeMaxHpFieldBuff_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  return this->fields._beforeMaxHp;
}


void BattleActionEffect_SubChangeMaxHpFieldBuff__PartialAfterEffectProc(
        BattleActionEffect_SubChangeMaxHpFieldBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  BattleActionEffect_SubChangeMaxHpBuff__PartialAfterEffectProc(
    (BattleActionEffect_SubChangeMaxHpBuff_o *)this,
    data,
    svt,
    method);
  if ( !svt )
    sub_2213CDC(v5, v6);
  BattleServantData__updateHp(svt, 1, 0);
}


void BattleActionEffect_SubFieldBuff___ctor(
        BattleActionEffect_SubFieldBuff_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.SubBuffArray = buffArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)buffArray, v5, v6, v7, v8, v9, v10);
}


void BattleActionEffect_SubFieldBuff__AfterEffectProc(
        BattleActionEffect_SubFieldBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x8

  if ( !data
    || (FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__DelForceBuffArray(FieldEnvData_k__BackingField, this->fields.SubBuffArray, 0),
        (this = (BattleActionEffect_SubFieldBuff_o *)data->fields.perf) == 0) )
  {
    sub_2213CDC(this, data);
  }
  BattlePerformance__UpdateFieldView((BattlePerformance_o *)this, 0);
}


void BattleActionEffect_SubFieldBuff__PreActionProc(
        BattleActionEffect_SubFieldBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x8

  if ( !data || (FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField) == 0 )
    sub_2213CDC(this, data);
  BattleFieldEnvironmentData__AddForceBuffArray(FieldEnvData_k__BackingField, this->fields.SubBuffArray, 0);
}


void BattleActionEffect_UpdateAllInfo___ctor(BattleActionEffect_UpdateAllInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_UpdateAllInfo__PartialAfterEffectProc(
        BattleActionEffect_UpdateAllInfo_o *this,
        BattleData_o *data,
        BattleFieldEnvironmentData_o *fieldData,
        const MethodInfo *method)
{
  if ( !fieldData
    || (BattleFieldEnvironmentData__UpdateAllView(fieldData, 0), !data)
    || (this = (BattleActionEffect_UpdateAllInfo_o *)data->fields.logic) == 0 )
  {
    sub_2213CDC(this, data);
  }
  BattleLogic__UpdateConditionBuffPlayerSubMember((BattleLogic_o *)this, 0, 0, 0);
}


void BattleActionEffect_UpdateFieldInfo___ctor(BattleActionEffect_UpdateFieldInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionEffect_UpdateFieldInfo__PartialAfterEffectProc(
        BattleActionEffect_UpdateFieldInfo_o *this,
        BattleData_o *data,
        BattleFieldEnvironmentData_o *fieldData,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionEffect_UpdateFieldInfo_o *)data->fields.perf) == 0 )
    sub_2213CDC(this, data);
  BattlePerformance__UpdateFieldView((BattlePerformance_o *)this, 0);
}