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
  BattleActionEffect_AddChangeMaxHpBuff_o *v4; // x20
  int32_t v6; // w21
  int32_t subBaseHp; // [xsp+Ch] [xbp-24h] BYREF

  subBaseHp = 0;
  if ( !svt
    || (v4 = this,
        this = (BattleActionEffect_AddChangeMaxHpBuff_o *)BattleServantData__getMaxHp(svt, 0),
        !svt->fields.buffData) )
  {
    sub_1C7BD40(this, data);
  }
  v6 = (int)this;
  BattleBuffData__AddForceBuff(svt->fields.buffData, v4->fields.buffArray, 0);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
  if ( v4->fields.diffVal )
    BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v6, 1, 0);
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
    sub_1C7BD40(this, data);
  BattleBuffData__DelForceBuff(svt->fields.buffData, this->fields.buffArray, 0);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
}


void BattleActionEffect_AddServantBuff__AfterEffectProc(
        BattleActionEffect_AddServantBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x1
  const MethodInfo *v5; // x2

  if ( !data )
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
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
  System_Collections_Generic_HashSet_T__o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_T__o *v20; // x24
  System_Collections_Generic_HashSet_T__o *v21; // x25
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x24
  System_Func_object__bool__o *v29; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  struct BattleBuffData_BuffData_array *v33; // x25
  System_Func_object__bool__o *v34; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Object_array *v36; // x23
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct BattleBuffData_BuffData_array **p_SubBuffArray_k__BackingField; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7

  if ( (byte_4CF0C4D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C7BAE8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78721904);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C7BAE8(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__);
    sub_1C7BAE8(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__);
    sub_1C7BAE8(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo);
    byte_4CF0C4D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = sub_1C7BD34(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !beforeSvtCache
    || (BuffArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)beforeSvtCache->fields._BuffArray_k__BackingField,
        v13 = (System_Collections_Generic_HashSet_T__o *)sub_1C7BD34(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo),
        System_Collections_Generic_HashSet_object____ctor_57605716(
          v13,
          BuffArray_k__BackingField,
          (const MethodInfo_36EFE54 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78721904),
        !v9)
    || (*(_QWORD *)(v9 + 16) = v13,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)v13, v14, v15, v16, v17, v18, v19),
        !afterSvtCache) )
  {
    sub_1C7BD40(v10, v11);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v21 = (System_Collections_Generic_HashSet_T__o *)sub_1C7BD34(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_57605716(
    v21,
    v20,
    (const MethodInfo_36EFE54 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___78721904);
  *(_QWORD *)(v9 + 24) = v21;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v29 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v9,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__,
    0);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v31 = System_Linq_Enumerable__ToArray_object_(
          v30,
          (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)beforeSvtCache->fields._BuffArray_k__BackingField;
  v33 = (struct BattleBuffData_BuffData_array *)v31;
  v34 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v34,
    (Il2CppObject *)v9,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__,
    0);
  v35 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v36 = System_Linq_Enumerable__ToArray_object_(
          v35,
          (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields.buffArray = v33;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.buffArray, (int32_t)v33, v37, v38, v39, v40, v41, v42);
  this->fields._SubBuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v36;
  p_SubBuffArray_k__BackingField = &this->fields._SubBuffArray_k__BackingField;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 6) = targetId;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 2) = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_SubBuffArray_k__BackingField, (int32_t)v36, v44, v45, v46, v47, v48, v49);
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
  BattleActionEffect_AddSubChangeMaxHpBuff___c_c *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *buffArray; // x22
  System_Func_object__int__o *_9__16_0; // x23
  Il2CppObject *v12; // x24
  struct BattleActionEffect_AddSubChangeMaxHpBuff___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_T__o *v20; // x23
  System_Collections_Generic_HashSet_int__o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct BattleBuffData_o *v28; // x8
  System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  System_Predicate_int__o *v30; // x23
  int v31; // w0

  if ( (byte_4CF0C4E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
    sub_1C7BAE8(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int___ctor___78720936);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C7BAE8(&System_Predicate_int__TypeInfo);
    sub_1C7BAE8(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__);
    sub_1C7BAE8(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__);
    sub_1C7BAE8(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo);
    sub_1C7BAE8(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    byte_4CF0C4E = 1;
  }
  v6 = sub_1C7BD34(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo);
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
  v9 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  buffArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.buffArray;
  if ( !BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    v9 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__int__o *)v9->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_0,
      v12,
      Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__,
      0);
    static_fields = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__16_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_0,
      (int32_t)_9__16_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         buffArray,
                                                         (System_Func_TSource__TResult__o *)_9__16_0,
                                                         (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  v21 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_57580080(
    v21,
    v20,
    (const MethodInfo_36E9A30 *)Method_System_Collections_Generic_HashSet_int___ctor___78720936);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = v21,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)v21, v22, v23, v24, v25, v26, v27),
        (v28 = svt->fields.buffData) == 0)
    || (unfixedBuffList = v28->fields.unfixedBuffList,
        v30 = (System_Predicate_int__o *)sub_1C7BD34(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v30,
          (Il2CppObject *)v6,
          Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
          0),
        !unfixedBuffList) )
  {
LABEL_16:
    sub_1C7BD40(buffData, v8);
  }
  System_Collections_Generic_List_int___RemoveAll(
    unfixedBuffList,
    (System_Predicate_T__o *)v30,
    (const MethodInfo_3823400 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  v31 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svt->klass->vtable._9_get_hp.methodPtr)(
          svt,
          svt->klass->vtable._9_get_hp.method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, const MethodInfo *))svt->klass->vtable._10_set_hp.methodPtr)(
    svt,
    (unsigned int)(this->fields._ResultHpDiffVal_k__BackingField + v31),
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
    sub_1C7BD40(this, data);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SubBuffArray_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SubBuffArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionEffect_AddSubChangeMaxHpBuff___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF0C4F & 1) == 0 )
  {
    sub_1C7BAE8(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    byte_4CF0C4F = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields->__9 = (struct BattleActionEffect_AddSubChangeMaxHpBuff___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
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
  System_Collections_Generic_HashSet_T__o *beforeBuffsHash; // x0

  if ( (byte_4CF0C50 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4CF0C50 = 1;
  }
  beforeBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.beforeBuffsHash;
  if ( !beforeBuffsHash )
    sub_1C7BD40(0, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            beforeBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_36F0458 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


bool BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0____ctor_b__1(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *afterBuffsHash; // x0

  if ( (byte_4CF0C51 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4CF0C51 = 1;
  }
  afterBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.afterBuffsHash;
  if ( !afterBuffsHash )
    sub_1C7BD40(0, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            afterBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_36F0458 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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

  if ( (byte_4CF0C52 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4CF0C52 = 1;
  }
  addOrderHashSet = this->fields.addOrderHashSet;
  if ( !addOrderHashSet )
    sub_1C7BD40(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           addOrderHashSet,
           x,
           (const MethodInfo_36EA034 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  long double inited; // q0
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4CF0C53 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    byte_4CF0C53 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetId = inTargetId;
  if ( !buffArray )
  {
    v14 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v15 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v15 )
    {
      sub_1C51BD8(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C51B7C(inited);
    buffArray = **(BattleBuffData_BuffData_array ***)(v17 + 184);
  }
  this->fields.ChangeBuffArray = buffArray;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.ChangeBuffArray,
    (int32_t)buffArray,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
      sub_1C7BD40(0, v5);
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
      sub_1C7BD40(0, v5);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, data);
  BattleLogic__PlayLoadCurrentBgm((BattleLogic_o *)this, 0, 0.0, 0);
}


void BattleActionEffect_LossHPFunc___ctor(
        BattleActionEffect_LossHPFunc_o *this,
        int32_t targetId,
        int32_t lossHp,
        bool isSafe,
        const MethodInfo *method)
{
  bool v8; // w22

  v8 = isSafe;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetId = targetId;
  this->fields.lossHp = lossHp;
  this->fields.isSafe = v8;
}


void BattleActionEffect_LossHPFunc__PartialAfterEffectProc(
        BattleActionEffect_LossHPFunc_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  BattleActionEffect_LossHPFunc_o *v5; // x20
  int32_t NowHp; // w0
  int32_t v7; // w21
  int32_t isSafe; // w22
  int32_t lossHp; // w20
  int32_t v10; // w1

  v5 = this;
  if ( (byte_4CF0C54 & 1) == 0 )
  {
    this = (BattleActionEffect_LossHPFunc_o *)sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CF0C54 = 1;
  }
  if ( !svt )
    sub_1C7BD40(this, data);
  NowHp = BattleServantData__getNowHp(svt, 0);
  if ( NowHp >= 1 )
  {
    v7 = NowHp;
    isSafe = v5->fields.isSafe;
    lossHp = v5->fields.lossHp;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v10 = System_Math__Max_65698740(v7 - lossHp, isSafe, 0);
    BattleServantData__setHp(svt, v10, 0, 0, 0);
  }
}


void BattleActionEffect_MaxHpBuffServant___ctor(BattleActionEffect_MaxHpBuffServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleActionEffect_MaxHpBuffServant_o *BattleActionEffect_MaxHpBuffServant__InitBuff(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleBuffData_BuffData_array *buffArray,
        int32_t targetId,
        int32_t diffVal,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.buffArray = buffArray;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.buffArray,
    (int32_t)buffArray,
    targetId,
    diffVal,
    (System_String_o *)method,
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
  BattleServantData_o *v6; // x20
  int32_t NowHp; // w0

  if ( !data )
    sub_1C7BD40(this, 0);
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
  BattleActionEffect_SubChangeMaxHpBuff_o *v4; // x21
  int32_t v6; // w20
  int32_t NowHp; // w0
  int32_t subBaseHp; // [xsp+Ch] [xbp-24h] BYREF

  subBaseHp = 0;
  if ( !svt
    || (v4 = this,
        this = (BattleActionEffect_SubChangeMaxHpBuff_o *)BattleServantData__getMaxHp(svt, 0),
        !svt->fields.buffData) )
  {
    sub_1C7BD40(this, data);
  }
  v6 = (int)this;
  BattleBuffData__DelForceBuff(svt->fields.buffData, v4->fields.buffArray, 0);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
  if ( BattleServantData__getNowHp(svt, 0) >= 1 && subBaseHp >= 1 )
  {
    NowHp = BattleServantData__getNowHp(svt, 0);
    BattleServantData__setHp(svt, NowHp - subBaseHp, 0, 1, 0);
  }
  BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v6, 0, 0);
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
    sub_1C7BD40(this, data);
  BattleBuffData__AddForceBuff(svt->fields.buffData, this->fields.buffArray, 0);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
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
    sub_1C7BD40(this, data);
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
    sub_1C7BD40(this, data);
  BattlePerformance__UpdateFieldView((BattlePerformance_o *)this, 0);
}