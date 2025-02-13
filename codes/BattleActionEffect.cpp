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
    sub_1C22094(this, data);
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
    sub_1C22094(this, data);
  BattleBuffData__DelForceBuff(svt->fields.buffData, this->fields.buffArray, (const MethodInfo *)svt);
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___ctor(
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_T__o *v20; // x24
  System_Collections_Generic_HashSet_T__o *v21; // x25
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x24
  System_Func_object__bool__o *v29; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  struct BattleBuffData_BuffData_array *v33; // x25
  System_Func_object__bool__o *v34; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Object_array *v36; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct BattleBuffData_BuffData_array **p_SubBuffArray_k__BackingField; // x19
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4BDE8C5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C21E38(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77557088);
    sub_1C21E38(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1C21E38(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__);
    sub_1C21E38(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__);
    sub_1C21E38(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo);
    byte_4BDE8C5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = sub_1C22084(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !beforeSvtCache
    || (BuffArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)beforeSvtCache->fields._BuffArray_k__BackingField,
        v13 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo),
        System_Collections_Generic_HashSet_object____ctor_55610516(
          v13,
          BuffArray_k__BackingField,
          (const MethodInfo_3508C94 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77557088),
        !v9)
    || (*(_QWORD *)(v9 + 16) = v13,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)v13, v14, v15, v16, v17, v18, v19),
        !afterSvtCache) )
  {
    sub_1C22094(v10, v11);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v21 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_55610516(
    v21,
    v20,
    (const MethodInfo_3508C94 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___77557088);
  *(_QWORD *)(v9 + 24) = v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v29 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v9,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v31 = System_Linq_Enumerable__ToArray_object_(
          v30,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)beforeSvtCache->fields._BuffArray_k__BackingField;
  v33 = (struct BattleBuffData_BuffData_array *)v31;
  v34 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v34,
    (Il2CppObject *)v9,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__,
    0LL);
  v35 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v36 = System_Linq_Enumerable__ToArray_object_(
          v35,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields.buffArray = v33;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.buffArray, (int64_t)v33, v37, v38, v39, v40, v41, v42);
  this->fields._SubBuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v36;
  p_SubBuffArray_k__BackingField = &this->fields._SubBuffArray_k__BackingField;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 6) = targetId;
  *((_DWORD *)p_SubBuffArray_k__BackingField - 2) = 0;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_SubBuffArray_k__BackingField, (int64_t)v36, v44, v45, v46, v47, v48, v49);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_T__o *v22; // x23
  System_Collections_Generic_HashSet_int__o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct BattleBuffData_o *v30; // x8
  System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  System_Predicate_int__o *v32; // x23
  int v33; // w0

  if ( (byte_4BDE8C6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
    sub_1C21E38(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor___77556136);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    sub_1C21E38(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__);
    sub_1C21E38(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__);
    sub_1C21E38(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo);
    sub_1C21E38(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    byte_4BDE8C6 = 1;
  }
  v6 = sub_1C22084(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
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
    _9__16_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__16_0,
      v14,
      Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__,
      0LL);
    static_fields = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__16_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         buffArray,
                                                         (System_Func_TSource__TResult__o *)_9__16_0,
                                                         (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_55584880(
    v23,
    v22,
    (const MethodInfo_3502870 *)Method_System_Collections_Generic_HashSet_int___ctor___77556136);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = v23,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)v23, v24, v25, v26, v27, v28, v29),
        (v30 = svt->fields.buffData) == 0LL)
    || (unfixedBuffList = v30->fields.unfixedBuffList,
        v32 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v32,
          (Il2CppObject *)v6,
          Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
          0LL),
        !unfixedBuffList) )
  {
LABEL_16:
    sub_1C22094(buffData, v8);
  }
  System_Collections_Generic_List_int___RemoveAll(
    unfixedBuffList,
    (System_Predicate_T__o *)v32,
    (const MethodInfo_36336B8 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  v33 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svt->klass->vtable._9_get_hp.method)(
          svt,
          svt->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))svt->klass->vtable._10_set_hp.method)(
    svt,
    (unsigned int)(this->fields._ResultHpDiffVal_k__BackingField + v33),
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
    sub_1C22094(this, data);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SubBuffArray_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._SubBuffArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE8C7 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
    byte_4BDE8C7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields->__9 = (struct BattleActionEffect_AddSubChangeMaxHpBuff___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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

  if ( (byte_4BDE8C8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4BDE8C8 = 1;
  }
  beforeBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.beforeBuffsHash;
  if ( !beforeBuffsHash )
    sub_1C22094(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            beforeBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


bool __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0____ctor_b__1(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *afterBuffsHash; // x0

  if ( (byte_4BDE8C9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4BDE8C9 = 1;
  }
  afterBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.afterBuffsHash;
  if ( !afterBuffsHash )
    sub_1C22094(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            afterBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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

  if ( (byte_4BDE8CA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4BDE8CA = 1;
  }
  addOrderHashSet = this->fields.addOrderHashSet;
  if ( !addOrderHashSet )
    sub_1C22094(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           addOrderHashSet,
           x,
           (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, data);
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
  int32_t NowHp; // w0
  int32_t v7; // w21
  int32_t isSafe; // w22
  int32_t lossHp; // w20
  int32_t v10; // w1

  v5 = this;
  if ( (byte_4BDE8CB & 1) == 0 )
  {
    this = (BattleActionEffect_LossHPFunc_o *)sub_1C21E38(&System_Math_TypeInfo);
    byte_4BDE8CB = 1;
  }
  if ( !svt )
    sub_1C22094(this, data);
  NowHp = BattleServantData__getNowHp(svt, 0LL);
  if ( NowHp >= 1 )
  {
    v7 = NowHp;
    isSafe = v5->fields.isSafe;
    lossHp = v5->fields.lossHp;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v10 = System_Math__Max_63934620(v7 - lossHp, isSafe, 0LL);
    BattleServantData__setHp(svt, v10, 0, 0LL);
  }
}


void __fastcall BattleActionEffect_MaxHpBuffServant___ctor(
        BattleActionEffect_MaxHpBuffServant_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionEffect_MaxHpBuffServant_o *__fastcall BattleActionEffect_MaxHpBuffServant__InitBuff(
        BattleActionEffect_MaxHpBuffServant_o *this,
        BattleBuffData_BuffData_array *buffArray,
        int32_t targetId,
        int32_t diffVal,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.buffArray = buffArray;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.buffArray,
    (int64_t)buffArray,
    *(int64_t *)&targetId,
    diffVal,
    (System_String_o *)method,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, data);
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
    sub_1C22094(this, data);
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
    sub_1C22094(this, data);
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
    sub_1C22094(this, data);
  BattlePerformance__UpdateFieldView((BattlePerformance_o *)this, 0LL);
}