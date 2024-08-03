void __fastcall BattleActionEffect___ctor(BattleActionEffect_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_AddChangeMaxHpBuff___ctor(
        BattleActionEffect_AddChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_AddChangeMaxHpBuff__PartialAfterEffectProc(
        BattleActionEffect_AddChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  BattleActionEffect_AddChangeMaxHpBuff_o *v4; // x20
  int32_t v6; // w21

  if ( !svt
    || (v4 = this,
        this = (BattleActionEffect_AddChangeMaxHpBuff_o *)BattleServantData__getMaxHp(svt, 0LL),
        !svt->fields.buffData) )
  {
    sub_1B64324(this);
  }
  v6 = (int)this;
  BattleBuffData__AddForceBuff(svt->fields.buffData, v4->fields.buffArray, 0LL);
  if ( v4->fields.diffVal )
    BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v6, 1, 0LL);
}


void __fastcall BattleActionEffect_AddChangeMaxHpBuff__PartialPreActionProc(
        BattleActionEffect_AddChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || !svt->fields.buffData )
    sub_1B64324(this);
  BattleBuffData__DelForceBuff(svt->fields.buffData, this->fields.buffArray, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___ctor(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        int32_t targetId,
        BattleServantSnapShot_o *beforeSvtCache,
        BattleServantSnapShot_o *afterSvtCache,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffArray_k__BackingField; // x25
  System_Collections_Generic_HashSet_T__o *v23; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_IEnumerable_T__o *v28; // x24
  System_Collections_Generic_HashSet_T__o *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_object__bool__o *v35; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Object_array *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x24
  struct BattleBuffData_BuffData_array *v39; // x25
  __int64 v40; // x1
  __int64 v41; // x2
  System_Func_object__bool__o *v42; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Object_array *v44; // x23
  int32_t v45; // w2
  int32_t v46; // w3
  struct BattleBuffData_BuffData_array **p_SubBuffArray_k__BackingField; // x19
  int32_t v48; // w2
  int32_t v49; // w3

  if ( (byte_49FE55A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, *(_QWORD *)&targetId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v9);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75638120, v11);
    sub_1B640C8(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B640C8(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__, v13);
    sub_1B640C8(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__, v14);
    sub_1B640C8(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo, v15);
    byte_49FE55A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v18 = sub_1B64314(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo, v16, v17);
  BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor(
    (BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *)v18,
    0LL);
  if ( !beforeSvtCache
    || (BuffArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)beforeSvtCache->fields._BuffArray_k__BackingField,
        v23 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                           System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                           v20,
                                                           v21),
        System_Collections_Generic_HashSet_object____ctor_53911232(
          v23,
          BuffArray_k__BackingField,
          (const MethodInfo_3369EC0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75638120),
        !v18)
    || (*(_QWORD *)(v18 + 16) = v23,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v23, v24, v25),
        !afterSvtCache) )
  {
    sub_1B64324(v19);
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v29 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                     v26,
                                                     v27);
  System_Collections_Generic_HashSet_object____ctor_53911232(
    v29,
    v28,
    (const MethodInfo_3369EC0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75638120);
  *(_QWORD *)(v18 + 24) = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v35 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v33, v34);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v18,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__,
    0LL);
  v36 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v37 = System_Linq_Enumerable__ToArray_object_(
          v36,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)beforeSvtCache->fields._BuffArray_k__BackingField;
  v39 = (struct BattleBuffData_BuffData_array *)v37;
  v42 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v40, v41);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v18,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__,
    0LL);
  v43 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v44 = System_Linq_Enumerable__ToArray_object_(
          v43,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields.buffArray = v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buffArray, (int32_t)v39, v45, v46);
  this->fields._SubBuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v44;
  p_SubBuffArray_k__BackingField = &this->fields._SubBuffArray_k__BackingField;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 6) = targetId;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 2) = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_SubBuffArray_k__BackingField, (int32_t)v44, v48, v49);
  p_SubBuffArray_k__BackingField[1] = (struct BattleBuffData_BuffData_array *)vrev64_s32(
                                                                                vsub_s32(
                                                                                  *(int32x2_t *)&afterSvtCache->fields._ResultHp_k__BackingField,
                                                                                  *(int32x2_t *)&beforeSvtCache->fields._ResultHp_k__BackingField)).n64_u64[0];
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff__PartialAfterEffectProc(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
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
  __int64 v15; // x21
  BattleBuffData_o *buffData; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  BattleActionEffect_AddSubChangeMaxHpBuff___c_c *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *buffArray; // x22
  System_Func_object__int__o *_9__16_0; // x23
  Il2CppObject *v22; // x24
  struct BattleActionEffect_AddSubChangeMaxHpBuff___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_T__o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_HashSet_int__o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  struct BattleBuffData_o *v34; // x8
  System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  System_Predicate_int__o *v36; // x23
  int v37; // w0

  if ( (byte_49FE55B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___, data);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v7);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__RemoveAll__, v9);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v10);
    sub_1B640C8(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__, v11);
    sub_1B640C8(
      &Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
      v12);
    sub_1B640C8(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo, v13);
    sub_1B640C8(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v14);
    byte_49FE55B = 1;
  }
  v15 = sub_1B64314(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo, data, svt);
  BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0___ctor(
    (BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_o *)v15,
    0LL);
  if ( !svt )
    goto LABEL_16;
  buffData = svt->fields.buffData;
  svt->fields.maxhp += this->fields._BaseMaxHpDiffVal_k__BackingField;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__DelForceBuff(buffData, this->fields._SubBuffArray_k__BackingField, 0LL);
  buffData = svt->fields.buffData;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__AddForceBuff(buffData, this->fields.buffArray, 0LL);
  v19 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  buffArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.buffArray;
  if ( !BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    v19 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__int__o *)v19->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__int__TypeInfo, v17, v18);
    System_Func_object__int____ctor(
      _9__16_0,
      v22,
      Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__,
      0LL);
    static_fields = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__16_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         buffArray,
                                                         (System_Func_TSource__TResult__o *)_9__16_0,
                                                         (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  v29 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_HashSet_int____ctor_53885596(
    v29,
    v26,
    (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = v29,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)v29, v30, v31),
        (v34 = svt->fields.buffData) == 0LL)
    || (unfixedBuffList = v34->fields.unfixedBuffList,
        v36 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v32, v33),
        System_Predicate_int____ctor(
          v36,
          (Il2CppObject *)v15,
          Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
          0LL),
        !unfixedBuffList) )
  {
LABEL_16:
    sub_1B64324(buffData);
  }
  System_Collections_Generic_List_int___RemoveAll(
    unfixedBuffList,
    (System_Predicate_T__o *)v36,
    (const MethodInfo_34915A4 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  v37 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svt->klass->vtable._9_get_hp.method)(
          svt,
          svt->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))svt->klass->vtable._10_set_hp.method)(
    svt,
    (unsigned int)(this->fields._ResultHpDiffVal_k__BackingField + v37),
    svt->klass->vtable._11_get_reducedhp.methodPtr);
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff__PartialPreActionProc(
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
    || (BattleBuffData__DelForceBuff((BattleBuffData_o *)this, v5->fields.buffArray, 0LL),
        (this = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)svt->fields.buffData) == 0LL) )
  {
    sub_1B64324(this);
  }
  BattleBuffData__AddForceBuff((BattleBuffData_o *)this, v5->fields._SubBuffArray_k__BackingField, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleActionEffect_AddSubChangeMaxHpBuff__get_AddBuffArray(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  return this->fields.buffArray;
}


int32_t __fastcall BattleActionEffect_AddSubChangeMaxHpBuff__get_BaseMaxHpDiffVal(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._BaseMaxHpDiffVal_k__BackingField;
}


int32_t __fastcall BattleActionEffect_AddSubChangeMaxHpBuff__get_ResultHpDiffVal(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._ResultHpDiffVal_k__BackingField;
}


BattleBuffData_BuffData_array *__fastcall BattleActionEffect_AddSubChangeMaxHpBuff__get_SubBuffArray(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._SubBuffArray_k__BackingField;
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff__set_BaseMaxHpDiffVal(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BaseMaxHpDiffVal_k__BackingField = value;
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff__set_ResultHpDiffVal(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ResultHpDiffVal_k__BackingField = value;
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff__set_SubBuffArray(
        BattleActionEffect_AddSubChangeMaxHpBuff_o *this,
        BattleBuffData_BuffData_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SubBuffArray_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._SubBuffArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE644 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v1);
    byte_49FE644 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields->__9 = (struct BattleActionEffect_AddSubChangeMaxHpBuff___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c___ctor(
        BattleActionEffect_AddSubChangeMaxHpBuff___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c___PartialAfterEffectProc_b__16_0(
        BattleActionEffect_AddSubChangeMaxHpBuff___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.addOrder;
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0____ctor_b__0(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *beforeBuffsHash; // x0

  if ( (byte_49FE645 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_49FE645 = 1;
  }
  beforeBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.beforeBuffsHash;
  if ( !beforeBuffsHash )
    sub_1B64324(0LL);
  return !System_Collections_Generic_HashSet_object___Contains(
            beforeBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


bool __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0____ctor_b__1(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *afterBuffsHash; // x0

  if ( (byte_49FE646 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_49FE646 = 1;
  }
  afterBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.afterBuffsHash;
  if ( !afterBuffsHash )
    sub_1B64324(0LL);
  return !System_Collections_Generic_HashSet_object___Contains(
            afterBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0___ctor(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0___PartialAfterEffectProc_b__1(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *addOrderHashSet; // x0

  if ( (byte_49FE647 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x);
    byte_49FE647 = 1;
  }
  addOrderHashSet = this->fields.addOrderHashSet;
  if ( !addOrderHashSet )
    sub_1B64324(0LL);
  return System_Collections_Generic_HashSet_int___Contains(
           addOrderHashSet,
           x,
           (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall BattleActionEffect_Base___ctor(BattleActionEffect_Base_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_Base__AfterEffectProc(
        BattleActionEffect_Base_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionEffect_Base__PreActionProc(
        BattleActionEffect_Base_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionEffect_BaseField___ctor(BattleActionEffect_BaseField_o *this, const MethodInfo *method)
{
  BattleActionEffect_Base___ctor((BattleActionEffect_Base_o *)this, 0LL);
}


void __fastcall BattleActionEffect_BaseField__AfterEffectProc(
        BattleActionEffect_BaseField_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64324(this);
  ((void (__fastcall *)(BattleActionEffect_BaseField_o *, BattleData_o *, struct BattleFieldEnvironmentData_o *, void *))this->klass->vtable._6_PartialAfterEffectProc.method)(
    this,
    data,
    data->fields._FieldEnvData_k__BackingField,
    this->klass[1]._1.image);
}


void __fastcall BattleActionEffect_BaseField__PartialAfterEffectProc(
        BattleActionEffect_BaseField_o *this,
        BattleData_o *data,
        BattleFieldEnvironmentData_o *fieldData,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionEffect_BaseFuncServant___ctor(
        BattleActionEffect_BaseFuncServant_o *this,
        const MethodInfo *method)
{
  BattleActionEffect_BaseServant___ctor((BattleActionEffect_BaseServant_o *)this, 0LL);
}


void __fastcall BattleActionEffect_BaseServant___ctor(BattleActionEffect_BaseServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_BaseServant__AfterEffectProc(
        BattleActionEffect_BaseServant_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x0

  if ( !data )
    sub_1B64324(this);
  ServantData = BattleData__getServantData(data, this->fields.targetId, 0LL);
  if ( ServantData )
    ((void (__fastcall *)(BattleActionEffect_BaseServant_o *, BattleData_o *, BattleServantData_o *, void *))this->klass->vtable._6_PartialAfterEffectProc.method)(
      this,
      data,
      ServantData,
      this->klass[1]._1.image);
}


BattleServantData_o *__fastcall BattleActionEffect_BaseServant__GetServant(
        BattleActionEffect_BaseServant_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64324(this);
  return BattleData__getServantData(data, this->fields.targetId, 0LL);
}


void __fastcall BattleActionEffect_BaseServant__PartialAfterEffectProc(
        BattleActionEffect_BaseServant_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionEffect_ChangeBgmBuff___ctor(
        BattleActionEffect_ChangeBgmBuff_o *this,
        const MethodInfo *method)
{
  BattleActionEffect_Base___ctor((BattleActionEffect_Base_o *)this, 0LL);
}


void __fastcall BattleActionEffect_ChangeBgmBuff__AfterEffectProc(
        BattleActionEffect_ChangeBgmBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionEffect_ChangeBgmBuff_o *)data->fields.logic) == 0LL )
    sub_1B64324(this);
  BattleLogic__PlayLoadCurrentBgm((BattleLogic_o *)this, 0LL, 0.0, 0LL);
}


void __fastcall BattleActionEffect_LossHPFunc___ctor(
        BattleActionEffect_LossHPFunc_o *this,
        int32_t targetId,
        int32_t lossHp,
        bool isSafe,
        const MethodInfo *method)
{
  bool v8; // w22

  v8 = isSafe;
  BattleActionEffect_BaseServant___ctor((BattleActionEffect_BaseServant_o *)this, 0LL);
  this->fields.targetId = targetId;
  this->fields.lossHp = lossHp;
  this->fields.isSafe = v8;
}


void __fastcall BattleActionEffect_LossHPFunc__PartialAfterEffectProc(
        BattleActionEffect_LossHPFunc_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  BattleActionEffect_LossHPFunc_o *v5; // x20
  int32_t isSafe; // w21
  int32_t NowHp; // w0
  int32_t lossHp; // w22
  int32_t v9; // w20
  int32_t v10; // w1

  v5 = this;
  if ( (byte_49FE648 & 1) == 0 )
  {
    this = (BattleActionEffect_LossHPFunc_o *)sub_1B640C8(&System_Math_TypeInfo, data);
    byte_49FE648 = 1;
  }
  if ( !svt )
    sub_1B64324(this);
  isSafe = v5->fields.isSafe;
  NowHp = BattleServantData__getNowHp(svt, 0LL);
  lossHp = v5->fields.lossHp;
  v9 = NowHp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = System_Math__Max_62194036(v9 - lossHp, isSafe, 0LL);
  BattleServantData__setHp(svt, v10, 0, 0LL);
}


void __fastcall BattleActionEffect_MaxHpBuffServant___ctor(
        BattleActionEffect_MaxHpBuffServant_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActionEffect_MaxHpBuffServant_o *__fastcall BattleActionEffect_MaxHpBuffServant__InitBuff(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleBuffData_BuffData_array *buffArray,
        int32_t targetId,
        int32_t diffVal,
        const MethodInfo *method)
{
  this->fields.buffArray = buffArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buffArray, (int32_t)buffArray, targetId, diffVal);
  this->fields.targetId = targetId;
  this->fields.diffVal = diffVal;
  return this;
}


void __fastcall BattleActionEffect_MaxHpBuffServant__PartialPreActionProc(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionEffect_MaxHpBuffServant__PreActionProc(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v6; // x20
  int32_t NowHp; // w0

  if ( !data )
    sub_1B64324(this);
  ServantData = BattleData__getServantData(data, this->fields.targetId, 0LL);
  if ( ServantData )
  {
    v6 = ServantData;
    ((void (__fastcall *)(BattleActionEffect_MaxHpBuffServant_o *, BattleData_o *, BattleServantData_o *, void *))this->klass->vtable._8_PartialPreActionProc.method)(
      this,
      data,
      ServantData,
      this->klass[1]._1.image);
    NowHp = BattleServantData__getNowHp(v6, 0LL);
    BattleServantData__setHp(v6, NowHp - this->fields.diffVal, 0, 0LL);
    BattleServantData__addDamage(v6, 0, 0, 0LL);
  }
}


void __fastcall BattleActionEffect_SubChangeMaxHpBuff___ctor(
        BattleActionEffect_SubChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_SubChangeMaxHpBuff__PartialAfterEffectProc(
        BattleActionEffect_SubChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  BattleActionEffect_SubChangeMaxHpBuff_o *v4; // x20
  int32_t v6; // w21

  if ( !svt
    || (v4 = this,
        this = (BattleActionEffect_SubChangeMaxHpBuff_o *)BattleServantData__getMaxHp(svt, 0LL),
        !svt->fields.buffData) )
  {
    sub_1B64324(this);
  }
  v6 = (int)this;
  BattleBuffData__DelForceBuff(svt->fields.buffData, v4->fields.buffArray, 0LL);
  BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v6, 0, 0LL);
}


void __fastcall BattleActionEffect_SubChangeMaxHpBuff__PartialPreActionProc(
        BattleActionEffect_SubChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || !svt->fields.buffData )
    sub_1B64324(this);
  BattleBuffData__AddForceBuff(svt->fields.buffData, this->fields.buffArray, 0LL);
}


void __fastcall BattleActionEffect_UpdateAllInfo___ctor(
        BattleActionEffect_UpdateAllInfo_o *this,
        const MethodInfo *method)
{
  BattleActionEffect_Base___ctor((BattleActionEffect_Base_o *)this, 0LL);
}


void __fastcall BattleActionEffect_UpdateAllInfo__PartialAfterEffectProc(
        BattleActionEffect_UpdateAllInfo_o *this,
        BattleData_o *data,
        BattleFieldEnvironmentData_o *fieldData,
        const MethodInfo *method)
{
  if ( !fieldData )
    sub_1B64324(this);
  BattleFieldEnvironmentData__UpdateAllView(fieldData, 0LL);
}


void __fastcall BattleActionEffect_UpdateFieldInfo___ctor(
        BattleActionEffect_UpdateFieldInfo_o *this,
        const MethodInfo *method)
{
  BattleActionEffect_Base___ctor((BattleActionEffect_Base_o *)this, 0LL);
}


void __fastcall BattleActionEffect_UpdateFieldInfo__PartialAfterEffectProc(
        BattleActionEffect_UpdateFieldInfo_o *this,
        BattleData_o *data,
        BattleFieldEnvironmentData_o *fieldData,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionEffect_UpdateFieldInfo_o *)data->fields.perf) == 0LL )
    sub_1B64324(this);
  BattlePerformance__UpdateFieldView((BattlePerformance_o *)this, 0LL);
}