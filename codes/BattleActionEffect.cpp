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
  const MethodInfo *v6; // x2
  int32_t v7; // w21
  int32_t subBaseHp; // [xsp+Ch] [xbp-24h] BYREF

  subBaseHp = 0;
  if ( !svt
    || (v4 = this,
        this = (BattleActionEffect_AddChangeMaxHpBuff_o *)BattleServantData__getMaxHp(svt, 0),
        !svt->fields.buffData) )
  {
    sub_1C2D6EC(this, data);
  }
  v7 = (int)this;
  BattleBuffData__AddForceBuff(svt->fields.buffData, v4->fields.buffArray, v6);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
  if ( v4->fields.diffVal )
    BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v7, 1, 0);
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
    sub_1C2D6EC(this, data);
  BattleBuffData__DelForceBuff(svt->fields.buffData, this->fields.buffArray, (const MethodInfo *)svt);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_T__o *v16; // x24
  System_Collections_Generic_HashSet_T__o *v17; // x25
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x24
  System_Func_object__bool__o *v21; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Object_array *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x24
  struct BattleBuffData_BuffData_array *v25; // x25
  System_Func_object__bool__o *v26; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Object_array *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct BattleBuffData_BuffData_array **p_SubBuffArray_k__BackingField; // x19
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4C2987F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C2D490(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77924768);
    sub_1C2D490(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__);
    sub_1C2D490(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__);
    sub_1C2D490(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo);
    byte_4C2987F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = sub_1C2D6DC(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !beforeSvtCache
    || (BuffArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)beforeSvtCache->fields._BuffArray_k__BackingField,
        v13 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo),
        System_Collections_Generic_HashSet_object____ctor_56888952(
          v13,
          BuffArray_k__BackingField,
          (const MethodInfo_3640E78 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77924768),
        !v9)
    || (*(_QWORD *)(v9 + 16) = v13,
        sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v13, v14, v15),
        !afterSvtCache) )
  {
    sub_1C2D6EC(v10, v11);
  }
  v16 = (System_Collections_Generic_IEnumerable_T__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v17 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_56888952(
    v17,
    v16,
    (const MethodInfo_3640E78 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77924768);
  *(_QWORD *)(v9 + 24) = v17;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v21 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__,
    0);
  v22 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v23 = System_Linq_Enumerable__ToArray_object_(
          v22,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)beforeSvtCache->fields._BuffArray_k__BackingField;
  v25 = (struct BattleBuffData_BuffData_array *)v23;
  v26 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__,
    0);
  v27 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v28 = System_Linq_Enumerable__ToArray_object_(
          v27,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields.buffArray = v25;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.buffArray, (int32_t)v25, v29, v30);
  this->fields._SubBuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v28;
  p_SubBuffArray_k__BackingField = &this->fields._SubBuffArray_k__BackingField;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 6) = targetId;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 2) = 0;
  sub_1C2D434((CGThumbnailListItem_o *)p_SubBuffArray_k__BackingField, (int32_t)v28, v32, v33);
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
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  BattleActionEffect_AddSubChangeMaxHpBuff___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *buffArray; // x22
  System_Func_object__int__o *_9__16_0; // x23
  Il2CppObject *v14; // x24
  struct BattleActionEffect_AddSubChangeMaxHpBuff___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_T__o *v18; // x23
  System_Collections_Generic_HashSet_int__o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattleBuffData_o *v22; // x8
  System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  System_Predicate_int__o *v24; // x23
  int v25; // w0

  if ( (byte_4C29880 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
    sub_1C2D490(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C2D490(&System_Predicate_int__TypeInfo);
    sub_1C2D490(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__);
    sub_1C2D490(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__);
    sub_1C2D490(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo);
    sub_1C2D490(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    byte_4C29880 = 1;
  }
  v6 = sub_1C2D6DC(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !svt )
    goto LABEL_16;
  buffData = svt->fields.buffData;
  svt->fields.maxhp += this->fields._BaseMaxHpDiffVal_k__BackingField;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__DelForceBuff(buffData, this->fields._SubBuffArray_k__BackingField, v9);
  buffData = svt->fields.buffData;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__AddForceBuff(buffData, this->fields.buffArray, v10);
  v11 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  buffArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.buffArray;
  if ( !BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    v11 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__int__o *)v11->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_0,
      v14,
      Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__,
      0);
    static_fields = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__16_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         buffArray,
                                                         (System_Func_TSource__TResult__o *)_9__16_0,
                                                         (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56862832(
    v19,
    v18,
    (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = v19,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 16), (int32_t)v19, v20, v21),
        (v22 = svt->fields.buffData) == 0)
    || (unfixedBuffList = v22->fields.unfixedBuffList,
        v24 = (System_Predicate_int__o *)sub_1C2D6DC(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v24,
          (Il2CppObject *)v6,
          Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
          0),
        !unfixedBuffList) )
  {
LABEL_16:
    sub_1C2D6EC(buffData, v8);
  }
  System_Collections_Generic_List_int___RemoveAll(
    unfixedBuffList,
    (System_Predicate_T__o *)v24,
    (const MethodInfo_376E188 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  v25 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svt->klass->vtable._9_get_hp.methodPtr)(
          svt,
          svt->klass->vtable._9_get_hp.method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, const MethodInfo *))svt->klass->vtable._10_set_hp.methodPtr)(
    svt,
    (unsigned int)(this->fields._ResultHpDiffVal_k__BackingField + v25),
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
  const MethodInfo *v7; // x2

  if ( !svt
    || (BaseMaxHpDiffVal_k__BackingField = this->fields._BaseMaxHpDiffVal_k__BackingField,
        v5 = this,
        this = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)svt->fields.buffData,
        svt->fields.maxhp -= BaseMaxHpDiffVal_k__BackingField,
        !this)
    || (BattleBuffData__DelForceBuff((BattleBuffData_o *)this, v5->fields.buffArray, (const MethodInfo *)svt),
        (this = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)svt->fields.buffData) == 0) )
  {
    sub_1C2D6EC(this, data);
  }
  BattleBuffData__AddForceBuff((BattleBuffData_o *)this, v5->fields._SubBuffArray_k__BackingField, v7);
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
  const MethodInfo *v3; // x3

  this->fields._SubBuffArray_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._SubBuffArray_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActionEffect_AddSubChangeMaxHpBuff___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C29881 & 1) == 0 )
  {
    sub_1C2D490(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    byte_4C29881 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields->__9 = (struct BattleActionEffect_AddSubChangeMaxHpBuff___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C2D6EC(this, 0);
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

  if ( (byte_4C29882 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4C29882 = 1;
  }
  beforeBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.beforeBuffsHash;
  if ( !beforeBuffsHash )
    sub_1C2D6EC(0, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            beforeBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_364147C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


bool BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0____ctor_b__1(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *afterBuffsHash; // x0

  if ( (byte_4C29883 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4C29883 = 1;
  }
  afterBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.afterBuffsHash;
  if ( !afterBuffsHash )
    sub_1C2D6EC(0, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            afterBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_364147C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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

  if ( (byte_4C29884 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C29884 = 1;
  }
  addOrderHashSet = this->fields.addOrderHashSet;
  if ( !addOrderHashSet )
    sub_1C2D6EC(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           addOrderHashSet,
           x,
           (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
  const MethodInfo *v8; // x3
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_4C29885 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    byte_4C29885 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetId = inTargetId;
  if ( !buffArray )
  {
    v10 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v11 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v11 )
    {
      sub_1C7DC00(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C7DBA4(inited);
    buffArray = **(BattleBuffData_BuffData_array ***)(v13 + 184);
  }
  this->fields.ChangeBuffArray = buffArray;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ChangeBuffArray, (int32_t)buffArray, v7, v8);
}


void BattleActionEffect_BaseChangeServantBuff__ForceAddBuff(
        BattleActionEffect_BaseChangeServantBuff_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( svtData )
  {
    BuffData = BattleServantData__get_BuffData(svtData, 0);
    if ( !BuffData )
      sub_1C2D6EC(0, v5);
    BattleBuffData__AddForceBuff(BuffData, this->fields.ChangeBuffArray, v6);
  }
}


void BattleActionEffect_BaseChangeServantBuff__ForceDelBuff(
        BattleActionEffect_BaseChangeServantBuff_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( svtData )
  {
    BuffData = BattleServantData__get_BuffData(svtData, 0);
    if ( !BuffData )
      sub_1C2D6EC(0, v5);
    BattleBuffData__DelForceBuff(BuffData, this->fields.ChangeBuffArray, v6);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, data);
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
  if ( (byte_4C29886 & 1) == 0 )
  {
    this = (BattleActionEffect_LossHPFunc_o *)sub_1C2D490(&System_Math_TypeInfo);
    byte_4C29886 = 1;
  }
  if ( !svt )
    sub_1C2D6EC(this, data);
  NowHp = BattleServantData__getNowHp(svt, 0);
  if ( NowHp >= 1 )
  {
    v7 = NowHp;
    isSafe = v5->fields.isSafe;
    lossHp = v5->fields.lossHp;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v10 = System_Math__Max_64982040(v7 - lossHp, isSafe, 0);
    BattleServantData__setHp(svt, v10, 0, 0, 0);
  }
}


void BattleActionEffect_MaxHpBuffServant___ctor(BattleActionEffect_MaxHpBuffServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
BattleActionEffect_MaxHpBuffServant_o *BattleActionEffect_MaxHpBuffServant__InitBuff(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleBuffData_BuffData_array *buffArray,
        int32_t targetId,
        int32_t diffVal,
        const MethodInfo *method)
{
  this->fields.buffArray = buffArray;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.buffArray,
    (int32_t)buffArray,
    targetId,
    *(const MethodInfo **)&diffVal);
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
    sub_1C2D6EC(this, 0);
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
    BattleServantData__setHp(v6, NowHp - this->fields.diffVal, 0, 1, 0);
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
  const MethodInfo *v6; // x2
  int32_t v7; // w20
  int32_t NowHp; // w0
  int32_t subBaseHp; // [xsp+Ch] [xbp-24h] BYREF

  subBaseHp = 0;
  if ( !svt
    || (v4 = this,
        this = (BattleActionEffect_SubChangeMaxHpBuff_o *)BattleServantData__getMaxHp(svt, 0),
        !svt->fields.buffData) )
  {
    sub_1C2D6EC(this, data);
  }
  v7 = (int)this;
  BattleBuffData__DelForceBuff(svt->fields.buffData, v4->fields.buffArray, v6);
  BattleServantData__CalculateTotalBaseHp(svt, &subBaseHp, 1, 0);
  NowHp = BattleServantData__getNowHp(svt, 0);
  BattleServantData__setHp(svt, NowHp - subBaseHp, 0, 1, 0);
  BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v7, 0, 0);
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
    sub_1C2D6EC(this, data);
  BattleBuffData__AddForceBuff(svt->fields.buffData, this->fields.buffArray, (const MethodInfo *)svt);
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
  if ( !fieldData )
    sub_1C2D6EC(this, data);
  BattleFieldEnvironmentData__UpdateAllView(fieldData, 0);
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
    sub_1C2D6EC(this, data);
  BattlePerformance__UpdateFieldView((BattlePerformance_o *)this, 0);
}