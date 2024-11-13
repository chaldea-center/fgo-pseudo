void __fastcall BattleActionEffect___ctor(BattleActionEffect_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionEffect_AddChangeMaxHpBuff___ctor(
        BattleActionEffect_AddChangeMaxHpBuff_o *this,
        const MethodInfo *method)
{
  BattleActionEffect_MaxHpBuffServant___ctor((BattleActionEffect_MaxHpBuffServant_o *)this, 0LL);
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
    sub_1BCAA3C(this, data);
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
    sub_1BCAA3C(this, data);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_IEnumerable_T__o *BuffArray_k__BackingField; // x25
  System_Collections_Generic_HashSet_T__o *v32; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_IEnumerable_T__o *v41; // x24
  System_Collections_Generic_HashSet_T__o *v42; // x25
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Func_object__bool__o *v53; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Object_array *v55; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x24
  BattleBuffData_BuffData_array *v57; // x25
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Func_object__bool__o *v61; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Object_array *v63; // x23
  struct BattleBuffData_BuffData_array **p_SubBuffArray_k__BackingField; // x19
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7

  if ( (byte_4B184B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, *(_QWORD *)&targetId, beforeSvtCache);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v9, v10);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76768176, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__, v17, v18);
    sub_1BCA7E0(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__, v19, v20);
    sub_1BCA7E0(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo, v21, v22);
    byte_4B184B7 = 1;
  }
  BattleActionEffect_MaxHpBuffServant___ctor((BattleActionEffect_MaxHpBuffServant_o *)this, 0LL);
  v26 = sub_1BCAA2C(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_TypeInfo, v23, v24, v25);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !beforeSvtCache
    || (BuffArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)beforeSvtCache->fields._BuffArray_k__BackingField,
        v32 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                           v28,
                                                           v29,
                                                           v30),
        System_Collections_Generic_HashSet_object____ctor_54898872(
          v32,
          BuffArray_k__BackingField,
          (const MethodInfo_345B0B8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76768176),
        !v26)
    || (*(_QWORD *)(v26 + 16) = v32,
        sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)v32, v33, v34, v35, v36, v37, v38),
        !afterSvtCache) )
  {
    sub_1BCAA3C(v27, v28);
  }
  v41 = (System_Collections_Generic_IEnumerable_T__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v42 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                     v28,
                                                     v39,
                                                     v40);
  System_Collections_Generic_HashSet_object____ctor_54898872(
    v42,
    v41,
    (const MethodInfo_345B0B8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76768176);
  *(_QWORD *)(v26 + 24) = v42;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 24), (int64_t)v42, v43, v44, v45, v46, v47, v48);
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)afterSvtCache->fields._BuffArray_k__BackingField;
  v53 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v50, v51, v52);
  System_Func_object__bool____ctor(
    v53,
    (Il2CppObject *)v26,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__0__,
    0LL);
  v54 = System_Linq_Enumerable__Where_object_(
          v49,
          (System_Func_TSource__bool__o *)v53,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v55 = System_Linq_Enumerable__ToArray_object_(
          v54,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)beforeSvtCache->fields._BuffArray_k__BackingField;
  v57 = (BattleBuffData_BuffData_array *)v55;
  v61 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v58, v59, v60);
  System_Func_object__bool____ctor(
    v61,
    (Il2CppObject *)v26,
    Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0___ctor_b__1__,
    0LL);
  v62 = System_Linq_Enumerable__Where_object_(
          v56,
          (System_Func_TSource__bool__o *)v61,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v63 = System_Linq_Enumerable__ToArray_object_(
          v62,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleActionEffect_MaxHpBuffServant__InitBuff((BattleActionEffect_MaxHpBuffServant_o *)this, v57, targetId, 0, 0LL);
  this->fields._SubBuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v63;
  p_SubBuffArray_k__BackingField = &this->fields._SubBuffArray_k__BackingField;
  sub_1BCA784((PartyOrganizationUtility_o *)p_SubBuffArray_k__BackingField, (int64_t)v63, v65, v66, v67, v68, v69, v70);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x21
  BattleBuffData_o *buffData; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  BattleActionEffect_AddSubChangeMaxHpBuff___c_c *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *buffArray; // x22
  System_Func_object__int__o *_9__16_0; // x23
  Il2CppObject *v35; // x24
  struct BattleActionEffect_AddSubChangeMaxHpBuff___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_T__o *v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_HashSet_int__o *v47; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x2
  __int64 v55; // x3
  struct BattleBuffData_o *v56; // x8
  System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  System_Predicate_int__o *v58; // x23
  int v59; // w0

  if ( (byte_4B184B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___, data, svt);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__RemoveAll__, v12, v13);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__, v16, v17);
    sub_1BCA7E0(
      &Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
      v18,
      v19);
    sub_1BCA7E0(&BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v22, v23);
    byte_4B184B8 = 1;
  }
  v24 = sub_1BCAA2C(BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0_TypeInfo, data, svt, method);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !svt )
    goto LABEL_16;
  buffData = svt->fields.buffData;
  svt->fields.maxhp += this->fields._BaseMaxHpDiffVal_k__BackingField;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__DelForceBuff(buffData, this->fields._SubBuffArray_k__BackingField, v27);
  buffData = svt->fields.buffData;
  if ( !buffData )
    goto LABEL_16;
  BattleBuffData__AddForceBuff(buffData, this->fields.buffArray, v28);
  v32 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  buffArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.buffArray;
  if ( !BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v29);
    v32 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__int__o *)v32->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v29);
      v32 = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                               v29,
                                               v30,
                                               v31);
    System_Func_object__int____ctor(
      _9__16_0,
      v35,
      Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__PartialAfterEffectProc_b__16_0__,
      0LL);
    static_fields = BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__16_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         buffArray,
                                                         (System_Func_TSource__TResult__o *)_9__16_0,
                                                         (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  v47 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v44,
                                                       v45,
                                                       v46);
  System_Collections_Generic_HashSet_int____ctor_54873236(
    v47,
    v43,
    (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
  if ( !v24
    || (*(_QWORD *)(v24 + 16) = v47,
        sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)v47, v48, v49, v50, v51, v52, v53),
        (v56 = svt->fields.buffData) == 0LL)
    || (unfixedBuffList = v56->fields.unfixedBuffList,
        v58 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v26, v54, v55),
        System_Predicate_int____ctor(
          v58,
          (Il2CppObject *)v24,
          Method_BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass16_0__PartialAfterEffectProc_b__1__,
          0LL),
        !unfixedBuffList) )
  {
LABEL_16:
    sub_1BCAA3C(buffData, v26);
  }
  System_Collections_Generic_List_int___RemoveAll(
    unfixedBuffList,
    (System_Predicate_T__o *)v58,
    (const MethodInfo_3586260 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  v59 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svt->klass->vtable._9_get_hp.method)(
          svt,
          svt->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))svt->klass->vtable._10_set_hp.method)(
    svt,
    (unsigned int)(this->fields._ResultHpDiffVal_k__BackingField + v59),
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
    sub_1BCAA3C(this, data);
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
  sub_1BCA784(
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B184B9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v1, v2);
    byte_4B184B9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields->__9 = (struct BattleActionEffect_AddSubChangeMaxHpBuff___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleActionEffect_AddSubChangeMaxHpBuff___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B184BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x, method);
    byte_4B184BA = 1;
  }
  beforeBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.beforeBuffsHash;
  if ( !beforeBuffsHash )
    sub_1BCAA3C(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            beforeBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


bool __fastcall BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0____ctor_b__1(
        BattleActionEffect_AddSubChangeMaxHpBuff___c__DisplayClass14_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *afterBuffsHash; // x0

  if ( (byte_4B184BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x, method);
    byte_4B184BB = 1;
  }
  afterBuffsHash = (System_Collections_Generic_HashSet_T__o *)this->fields.afterBuffsHash;
  if ( !afterBuffsHash )
    sub_1BCAA3C(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            afterBuffsHash,
            (Il2CppObject *)x,
            (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
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

  if ( (byte_4B184BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x, method);
    byte_4B184BC = 1;
  }
  addOrderHashSet = this->fields.addOrderHashSet;
  if ( !addOrderHashSet )
    sub_1BCAA3C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           addOrderHashSet,
           x,
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, data);
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
  int32_t NowHp; // w0
  __int64 v7; // x1
  int32_t v8; // w21
  int32_t isSafe; // w22
  int32_t lossHp; // w20
  int32_t v11; // w1

  v5 = this;
  if ( (byte_4B184BD & 1) == 0 )
  {
    this = (BattleActionEffect_LossHPFunc_o *)sub_1BCA7E0(&System_Math_TypeInfo, data, svt);
    byte_4B184BD = 1;
  }
  if ( !svt )
    sub_1BCAA3C(this, data);
  NowHp = BattleServantData__getNowHp(svt, 0LL);
  if ( NowHp >= 1 )
  {
    v8 = NowHp;
    isSafe = v5->fields.isSafe;
    lossHp = v5->fields.lossHp;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
    v11 = System_Math__Max_63220196(v8 - lossHp, isSafe, 0LL);
    BattleServantData__setHp(svt, v11, 0, 0LL);
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
  sub_1BCA784(
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
    sub_1BCAA3C(this, 0LL);
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
  BattleActionEffect_MaxHpBuffServant___ctor((BattleActionEffect_MaxHpBuffServant_o *)this, 0LL);
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
    sub_1BCAA3C(this, data);
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
    sub_1BCAA3C(this, data);
  BattleBuffData__AddForceBuff(svt->fields.buffData, this->fields.buffArray, (const MethodInfo *)svt);
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
    sub_1BCAA3C(this, data);
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
    sub_1BCAA3C(this, data);
  BattlePerformance__UpdateFieldView((BattlePerformance_o *)this, 0LL);
}