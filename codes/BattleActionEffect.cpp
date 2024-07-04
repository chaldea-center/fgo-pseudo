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
  const MethodInfo *v6; // x2
  int32_t v7; // w21

  if ( !svt
    || (v4 = this,
        this = (BattleActionEffect_AddChangeMaxHpBuff_o *)BattleServantData__getMaxHp(svt, 0LL),
        !svt->fields.buffData) )
  {
    sub_1B00F28(this, data);
  }
  v7 = (int)this;
  BattleBuffData__AddForceBuff(svt->fields.buffData, v4->fields.buffArray, v6);
  if ( v4->fields.diffVal )
    BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v7, 1, 0LL);
}


void __fastcall BattleActionEffect_AddChangeMaxHpBuff__PartialPreActionProc(
        BattleActionEffect_AddChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || !svt->fields.buffData )
    sub_1B00F28(this, data);
  BattleBuffData__DelForceBuff(svt->fields.buffData, this->fields.buffArray, (const MethodInfo *)svt);
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
  __int64 v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_T__o *BuffArray_k__BackingField; // x25
  System_Collections_Generic_HashSet_T__o *v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_T__o *v23; // x24
  System_Collections_Generic_HashSet_T__o *v24; // x25
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x24
  System_Func_object__bool__o *v28; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x24
  struct BattleBuffData_BuffData_array *v32; // x25
  System_Func_object__bool__o *v33; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Object_array *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  struct BattleBuffData_BuffData_array **p_SubBuffArray_k__BackingField; // x19
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_48E48A1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, *(_QWORD *)&targetId);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v9);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___74510968, v11);
    sub_1B00CCC(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B00CCC(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__, v13);
    sub_1B00CCC(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__, v14);
    sub_1B00CCC(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo, v15);
    byte_48E48A1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v16 = sub_1B00F18(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !beforeSvtCache
    || (BuffArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)beforeSvtCache->fields._BuffArray_k__BackingField,
        v20 = (System_Collections_Generic_HashSet_T__o *)sub_1B00F18(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo),
        System_Collections_Generic_HashSet_object____ctor_52953936(
          v20,
          BuffArray_k__BackingField,
          (const MethodInfo_3280350 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___74510968),
        !v16)
    || (*(_QWORD *)(v16 + 16) = v20,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)v20, v21, v22),
        !afterSvtCache) )
  {
    sub_1B00F28(v17, v18);
  }
  v23 = (System_Collections_Generic_IEnumerable_T__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v24 = (System_Collections_Generic_HashSet_T__o *)sub_1B00F18(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_52953936(
    v24,
    v23,
    (const MethodInfo_3280350 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___74510968);
  *(_QWORD *)(v16 + 24) = v24;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v28 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v16,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)beforeSvtCache->fields._BuffArray_k__BackingField;
  v32 = (struct BattleBuffData_BuffData_array *)v30;
  v33 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v16,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__,
    0LL);
  v34 = System_Linq_Enumerable__Where_object_(
          v31,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v35 = System_Linq_Enumerable__ToArray_object_(
          v34,
          (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields.buffArray = v32;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.buffArray, (int32_t)v32, v36, v37);
  this->fields._SubBuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v35;
  p_SubBuffArray_k__BackingField = &this->fields._SubBuffArray_k__BackingField;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 6) = targetId;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 2) = 0;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_SubBuffArray_k__BackingField, (int32_t)v35, v39, v40);
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
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  BattleActionEffect_AddSubChangeMaxHpBuff___c_c *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *buffArray; // x22
  System_Func_object__int__o *_9__16_0; // x23
  Il2CppObject *v23; // x24
  struct BattleActionEffect_AddSubChangeMaxHpBuff___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_T__o *v27; // x23
  System_Collections_Generic_HashSet_int__o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  struct BattleBuffData_o *v31; // x8
  System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  System_Predicate_int__o *v33; // x23
  int v34; // w0

  if ( (byte_48E48A2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___, data);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor___74510056, v7);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__RemoveAll__, v9);
    sub_1B00CCC(&System_Predicate_int__TypeInfo, v10);
    sub_1B00CCC(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__, v11);
    sub_1B00CCC(
      &Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
      v12);
    sub_1B00CCC(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo, v13);
    sub_1B00CCC(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v14);
    byte_48E48A2 = 1;
  }
  v15 = sub_1B00F18(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !svt )
    goto LABEL_16;
  buffData = svt->fields.buffData;
  svt->fields.maxhp += this->fields._BaseMaxHpDiffVal_k__BackingField;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__DelForceBuff(buffData, this->fields._SubBuffArray_k__BackingField, v18);
  buffData = svt->fields.buffData;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__AddForceBuff(buffData, this->fields.buffArray, v19);
  v20 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  buffArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.buffArray;
  if ( !BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    v20 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__int__o *)v20->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_0,
      v23,
      Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__,
      0LL);
    static_fields = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__16_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         buffArray,
                                                         (System_Func_TSource__TResult__o *)_9__16_0,
                                                         (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_52928300(
    v28,
    v27,
    (const MethodInfo_3279F2C *)Method_System_Collections_Generic_HashSet_int___ctor___74510056);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = v28,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)v28, v29, v30),
        (v31 = svt->fields.buffData) == 0LL)
    || (unfixedBuffList = v31->fields.unfixedBuffList,
        v33 = (System_Predicate_int__o *)sub_1B00F18(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v33,
          (Il2CppObject *)v15,
          Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
          0LL),
        !unfixedBuffList) )
  {
LABEL_16:
    sub_1B00F28(buffData, v17);
  }
  System_Collections_Generic_List_int___RemoveAll(
    unfixedBuffList,
    (System_Predicate_T__o *)v33,
    (const MethodInfo_33A5FD4 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  v34 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svt->klass->vtable._9_get_hp.method)(
          svt,
          svt->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))svt->klass->vtable._10_set_hp.method)(
    svt,
    (unsigned int)(this->fields._ResultHpDiffVal_k__BackingField + v34),
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
  const MethodInfo *v7; // x2

  if ( !svt
    || (BaseMaxHpDiffVal_k__BackingField = this->fields._BaseMaxHpDiffVal_k__BackingField,
        v5 = this,
        this = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)svt->fields.buffData,
        svt->fields.maxhp -= BaseMaxHpDiffVal_k__BackingField,
        !this)
    || (BattleBuffData__DelForceBuff((BattleBuffData_o *)this, v5->fields.buffArray, (const MethodInfo *)svt),
        (this = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)svt->fields.buffData) == 0LL) )
  {
    sub_1B00F28(this, data);
  }
  BattleBuffData__AddForceBuff((BattleBuffData_o *)this, v5->fields._SubBuffArray_k__BackingField, v7);
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
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._SubBuffArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E48A3 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v1);
    byte_48E48A3 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields->__9 = (struct BattleActionEffect_AddSubChangeMaxHpBuff___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, 0LL);
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

  if ( (byte_48E48A4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_48E48A4 = 1;
  }
  beforeBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.beforeBuffsHash;
  if ( !beforeBuffsHash )
    sub_1B00F28(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            beforeBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_3280954 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


bool __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0____ctor_b__1(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *afterBuffsHash; // x0

  if ( (byte_48E48A5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x);
    byte_48E48A5 = 1;
  }
  afterBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.afterBuffsHash;
  if ( !afterBuffsHash )
    sub_1B00F28(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            afterBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_3280954 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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

  if ( (byte_48E48A6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x);
    byte_48E48A6 = 1;
  }
  addOrderHashSet = this->fields.addOrderHashSet;
  if ( !addOrderHashSet )
    sub_1B00F28(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           addOrderHashSet,
           x,
           (const MethodInfo_327A530 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_BaseField__AfterEffectProc(
        BattleActionEffect_BaseField_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B00F28(this, 0LL);
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
    sub_1B00F28(this, 0LL);
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
    sub_1B00F28(this, 0LL);
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_ChangeBgmBuff__AfterEffectProc(
        BattleActionEffect_ChangeBgmBuff_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionEffect_ChangeBgmBuff_o *)data->fields.logic) == 0LL )
    sub_1B00F28(this, data);
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
  if ( (byte_48E48A7 & 1) == 0 )
  {
    this = (BattleActionEffect_LossHPFunc_o *)sub_1B00CCC(&System_Math_TypeInfo, data);
    byte_48E48A7 = 1;
  }
  if ( !svt )
    sub_1B00F28(this, data);
  isSafe = v5->fields.isSafe;
  NowHp = BattleServantData__getNowHp(svt, 0LL);
  lossHp = v5->fields.lossHp;
  v9 = NowHp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = System_Math__Max_61144256(v9 - lossHp, isSafe, 0LL);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.buffArray, (int32_t)buffArray, targetId, diffVal);
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
    sub_1B00F28(this, 0LL);
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
  const MethodInfo *v6; // x2
  int32_t v7; // w21

  if ( !svt
    || (v4 = this,
        this = (BattleActionEffect_SubChangeMaxHpBuff_o *)BattleServantData__getMaxHp(svt, 0LL),
        !svt->fields.buffData) )
  {
    sub_1B00F28(this, data);
  }
  v7 = (int)this;
  BattleBuffData__DelForceBuff(svt->fields.buffData, v4->fields.buffArray, v6);
  BattleServantData__CheckUpdateUpdownOnlyDisplayHp(svt, v7, 0, 0LL);
}


void __fastcall BattleActionEffect_SubChangeMaxHpBuff__PartialPreActionProc(
        BattleActionEffect_SubChangeMaxHpBuff_o *this,
        BattleData_o *data,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || !svt->fields.buffData )
    sub_1B00F28(this, data);
  BattleBuffData__AddForceBuff(svt->fields.buffData, this->fields.buffArray, (const MethodInfo *)svt);
}


void __fastcall BattleActionEffect_UpdateAllInfo___ctor(
        BattleActionEffect_UpdateAllInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_UpdateAllInfo__PartialAfterEffectProc(
        BattleActionEffect_UpdateAllInfo_o *this,
        BattleData_o *data,
        BattleFieldEnvironmentData_o *fieldData,
        const MethodInfo *method)
{
  if ( !fieldData )
    sub_1B00F28(this, data);
  BattleFieldEnvironmentData__UpdateAllView(fieldData, 0LL);
}


void __fastcall BattleActionEffect_UpdateFieldInfo___ctor(
        BattleActionEffect_UpdateFieldInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_UpdateFieldInfo__PartialAfterEffectProc(
        BattleActionEffect_UpdateFieldInfo_o *this,
        BattleData_o *data,
        BattleFieldEnvironmentData_o *fieldData,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionEffect_UpdateFieldInfo_o *)data->fields.perf) == 0LL )
    sub_1B00F28(this, data);
  BattlePerformance__UpdateFieldView((BattlePerformance_o *)this, 0LL);
}