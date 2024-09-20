void __fastcall TreasureDvcEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct TreasureDvcEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct TreasureDvcEntity_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct TreasureDvcEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct TreasureDvcEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct TreasureDvcEntity_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5BCE6 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_19855/*"groupSeqIDs"*/);
    sub_1B885B0(&StringLiteral_18552/*"delayEnd"*/);
    sub_1B885B0(&StringLiteral_16525/*"_actSet"*/);
    sub_1B885B0(&StringLiteral_22780/*"randomWeights"*/);
    sub_1B885B0(&StringLiteral_23870/*"tdTypeChangeIDs"*/);
    sub_1B885B0(&StringLiteral_22779/*"randomSeqIds"*/);
    byte_4A5BCE6 = 1;
  }
  TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_ID = (struct System_String_o *)StringLiteral_22779/*"randomSeqIds"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TreasureDvcEntity_TypeInfo->static_fields,
    StringLiteral_22779/*"randomSeqIds"*/,
    v1,
    v2);
  v3 = StringLiteral_22780/*"randomWeights"*/;
  static_fields = TreasureDvcEntity_TypeInfo->static_fields;
  static_fields->KEY_RANDOM_SEQ_WEIGHT = (struct System_String_o *)StringLiteral_22780/*"randomWeights"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->KEY_RANDOM_SEQ_WEIGHT, v3, v5, v6);
  v7 = StringLiteral_19855/*"groupSeqIDs"*/;
  v8 = TreasureDvcEntity_TypeInfo->static_fields;
  v8->KEY_GROUP_SEQ_ID = (struct System_String_o *)StringLiteral_19855/*"groupSeqIDs"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->KEY_GROUP_SEQ_ID, v7, v9, v10);
  v11 = StringLiteral_23870/*"tdTypeChangeIDs"*/;
  v12 = TreasureDvcEntity_TypeInfo->static_fields;
  v12->KEY_TD_TYPE_CHANGE_ID = (struct System_String_o *)StringLiteral_23870/*"tdTypeChangeIDs"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->KEY_TD_TYPE_CHANGE_ID, v11, v13, v14);
  v15 = StringLiteral_18552/*"delayEnd"*/;
  v16 = TreasureDvcEntity_TypeInfo->static_fields;
  v16->KEY_TD_DELAY_END = (struct System_String_o *)StringLiteral_18552/*"delayEnd"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->KEY_TD_DELAY_END, v15, v17, v18);
  v19 = StringLiteral_16525/*"_actSet"*/;
  v20 = TreasureDvcEntity_TypeInfo->static_fields;
  v20->KET_SUFFIX_ACTSET = (struct System_String_o *)StringLiteral_16525/*"_actSet"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->KET_SUFFIX_ACTSET, v19, v21, v22);
}


void __fastcall TreasureDvcEntity___ctor(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5BCE5 = 1;
  }
  *(_QWORD *)&this->fields.cacheRandomSeqId = -1LL;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcEntity__CreatePrimaryKey(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetAssumedEffectId(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BCE1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16943/*"assumedEffectId"*/);
    byte_4A5BCE1 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16943/*"assumedEffectId"*/, 0LL);
}


int64_t __fastcall TreasureDvcEntity__GetEffectFlag(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  int64_t effectFlag; // x8

  effectFlag = this->fields.effectFlag;
  if ( (effectFlag & 1) != 0 )
    return 1LL;
  if ( (effectFlag & 2) != 0 )
    return 2LL;
  return -1LL;
}


System_Int32_array *__fastcall TreasureDvcEntity__GetExcludeTdChangeTypes(
        TreasureDvcEntity_o *this,
        System_Int32_array *defArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5BCDA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19303/*"excludeTdChangeTypes"*/);
    byte_4A5BCDA = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19303/*"excludeTdChangeTypes"*/, defArray, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__GetLotteriedSeqId(
        TreasureDvcEntity_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( TreasureDvcEntity__IsRandomTD(this, *(const MethodInfo **)&limit) )
    return this->fields.cacheRandomSeqId;
  else
    return TreasureDvcEntity__getSeqId(this, limit, v5);
}


System_String_o *__fastcall TreasureDvcEntity__GetNpNameFileSuffix(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCE0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22161/*"npNameFileSuffix"*/);
    byte_4A5BCE0 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22161/*"npNameFileSuffix"*/, 0LL, 0LL);
}


System_Collections_Generic_List_int__o *__fastcall TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
        TreasureDvcEntity_o *this,
        int32_t battlePontId,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__object__o *v18; // x21
  System_Collections_Generic_Dictionary_object__object__c *klass; // x8
  System_Collections_Generic_Dictionary_object__object__o *v20; // x20
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_String_o *v34; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  int32_t v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5BCE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_string___);
    sub_1B885B0(&System_Func_string__string__TypeInfo);
    sub_1B885B0(&System_Func_string__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_TreasureDvcEntity___c__DisplayClass54_0__GetTdChangeByBattlePointPhaseList_b__0__);
    sub_1B885B0(&Method_TreasureDvcEntity___c__DisplayClass54_0__GetTdChangeByBattlePointPhaseList_b__1__);
    sub_1B885B0(&TreasureDvcEntity___c__DisplayClass54_0_TypeInfo);
    sub_1B885B0(&StringLiteral_23866/*"tdChangeByBattlePoint_{0}_"*/);
    byte_4A5BCE2 = 1;
  }
  result = 0;
  v5 = sub_1B887FC(TreasureDvcEntity___c__DisplayClass54_0_TypeInfo);
  TreasureDvcEntity___c__DisplayClass54_0___ctor((TreasureDvcEntity___c__DisplayClass54_0_o *)v5, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v46 = battlePontId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v7, v8, v9);
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_23866/*"tdChangeByBattlePoint_{0}_"*/,
                                                                        v10,
                                                                        0LL);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = script;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)script, v13, v14);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
                 script,
                 (const MethodInfo_31C6EA8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__),
        v16 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_string__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v16,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass54_0__GetTdChangeByBattlePointPhaseList_b__0__,
          0LL),
        v17 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v16,
                (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_string___),
        v18 = (System_Func_object__object__o *)sub_1B887FC(System_Func_string__string__TypeInfo),
        System_Func_object__object____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_TreasureDvcEntity___c__DisplayClass54_0__GetTdChangeByBattlePointPhaseList_b__1__,
          0LL),
        (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Select_object__object_(
                                                                               v17,
                                                                               (System_Func_TSource__TResult__o *)v18,
                                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_string__string___)) == 0LL) )
  {
LABEL_41:
    sub_1B8880C(script, v12);
  }
  klass = script->klass;
  v20 = script;
  v21 = *(unsigned __int16 *)(&script->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&script->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_10;
    }
    v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v23 = sub_1BDA590(script, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v23)(
          v20,
          *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1B8880C(0LL, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_17;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_17:
      v29 = sub_1BDA590(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v32 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_24;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_24:
      v33 = sub_1BDA590(v25, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v34 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    v35 = System_Int32__TryParse(v34, &result, 0LL);
    if ( v35 )
    {
      if ( !v6 )
        sub_1B8880C(v35, v36);
      v37 = (unsigned int)result;
      items = v6->fields._items;
      v39 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1B8880C(v35, v37);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          v37,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size + 1] = v37;
      }
    }
  }
  v41 = *(_QWORD *)v25;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_36;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_36:
    v44 = sub_1BDA590(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v25, *(_QWORD *)(v44 + 8));
  return v6;
}


bool __fastcall TreasureDvcEntity__HasEffectFlag(
        TreasureDvcEntity_o *this,
        int64_t effectFlag,
        const MethodInfo *method)
{
  return (this->fields.effectFlag & effectFlag) != 0;
}


bool __fastcall TreasureDvcEntity__IsDelayEnd(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4A5BCDE & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcEntity_TypeInfo);
    byte_4A5BCDE = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScript(this, v4->static_fields->KEY_TD_DELAY_END, v2);
}


bool __fastcall TreasureDvcEntity__IsGroupId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4A5BCD2 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcEntity_TypeInfo);
    byte_4A5BCD2 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_GROUP_SEQ_ID, v2);
}


bool __fastcall TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BCDF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6782/*"ForcedOnlyFirstOneSpeed"*/);
    byte_4A5BCDF = 1;
  }
  return TreasureDvcEntity__getScriptInt(this, (System_String_o *)StringLiteral_6782/*"ForcedOnlyFirstOneSpeed"*/, 0, v2) > 0;
}


bool __fastcall TreasureDvcEntity__IsRandomTD(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0
  const MethodInfo *v5; // x2
  TreasureDvcEntity_c *v6; // x0

  if ( (byte_4A5BCD1 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcEntity_TypeInfo);
    byte_4A5BCD1 = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  if ( !TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_RANDOM_SEQ_ID, v2) )
    return 0;
  v6 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v6 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v6->static_fields->KEY_RANDOM_SEQ_WEIGHT, v5);
}


bool __fastcall TreasureDvcEntity__IsRandomTD_40024928(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        System_String_o *keyWeight,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  return TreasureDvcEntity__checkScript(this, keySeqId, (const MethodInfo *)keyWeight)
      && TreasureDvcEntity__checkScript(this, keyWeight, v6);
}


bool __fastcall TreasureDvcEntity__IsTDTypeChange(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TreasureDvcEntity_c *v4; // x0

  if ( (byte_4A5BCDB & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcEntity_TypeInfo);
    byte_4A5BCDB = 1;
  }
  v4 = TreasureDvcEntity_TypeInfo;
  if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
    v4 = TreasureDvcEntity_TypeInfo;
  }
  return TreasureDvcEntity__checkScriptPartialMatch(this, v4->static_fields->KEY_TD_TYPE_CHANGE_ID, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureDvcEntity__TryGetTdIdChangeByBattlePoint(
        TreasureDvcEntity_o *this,
        int32_t battlePointId,
        int32_t battlePointPhase,
        int32_t *tdIdChangeByBattlePoint,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x0
  TreasureDvcEntity___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Func_int__int__o *_9__55_0; // x24
  Il2CppObject *v13; // x25
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x20
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t v37; // w24
  Il2CppObject *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x2
  System_String_o *v43; // x1
  const MethodInfo *v44; // x3
  bool v45; // w22
  int v46; // w23
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  int32_t v52; // [xsp+8h] [xbp-58h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5BCE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__55_0__);
    sub_1B885B0(&TreasureDvcEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_23867/*"tdChangeByBattlePoint_{0}_{1}"*/);
    byte_4A5BCE3 = 1;
  }
  v9 = TreasureDvcEntity__GetTdChangeByBattlePointPhaseList(
         this,
         battlePointId,
         *(const MethodInfo **)&battlePointPhase);
  v10 = TreasureDvcEntity___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v10 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__55_0 = v10->static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = TreasureDvcEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__55_0 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__55_0,
      v13,
      Method_TreasureDvcEntity___c__TryGetTdIdChangeByBattlePoint_b__55_0__,
      0LL);
    static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = _9__55_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__55_0, (int32_t)_9__55_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_int__int_(
          v11,
          (System_Func_TSource__TKey__o *)_9__55_0,
          (const MethodInfo_2EAA218 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
  if ( !v17 )
    sub_1B8880C(0LL, v18);
  klass = v17->klass;
  v20 = v17;
  v21 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BDA590(v17, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v20,
          *(_QWORD *)(p_method + 8));
  if ( !v25 )
    sub_1B8880C(0LL, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_21;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_21:
      v29 = sub_1BDA590(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v32 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_28;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_28:
      v33 = sub_1BDA590(v25, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    if ( v37 <= battlePointPhase )
    {
      v53 = battlePointId;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v34, v35, v36);
      v52 = v37;
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v39, v40, v41);
      v43 = System_String__Format_61721404((System_String_o *)StringLiteral_23867/*"tdChangeByBattlePoint_{0}_{1}"*/, v38, v42, 0LL);
      *tdIdChangeByBattlePoint = TreasureDvcEntity__getScriptInt(this, v43, 0, v44);
      v45 = 1;
      v46 = 5;
      goto LABEL_33;
    }
  }
  v45 = 0;
  v46 = 6;
LABEL_33:
  v47 = *(_QWORD *)v25;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_37;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_37:
    v50 = sub_1BDA590(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v25, *(_QWORD *)(v50 + 8));
  if ( v46 == 6 )
  {
    v45 = 0;
    *tdIdChangeByBattlePoint = 0;
  }
  return v45;
}


bool __fastcall TreasureDvcEntity__TryGetWithBackStepNpcIds(
        TreasureDvcEntity_o *this,
        System_Int32_array **npcIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5BCE4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23871/*"tdWithBackStepNpcIds"*/);
    byte_4A5BCE4 = 1;
  }
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23871/*"tdWithBackStepNpcIds"*/, 0LL, v3);
  *npcIds = ScriptIntArrayParam;
  sub_1B88554((ServantStatusBattleListViewItem_o *)npcIds, (int32_t)ScriptIntArrayParam, v7, v8);
  return *npcIds != 0LL;
}


bool __fastcall TreasureDvcEntity__checkScript(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BCCC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4A5BCCC = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall TreasureDvcEntity__checkScriptPartialMatch(
        TreasureDvcEntity_o *this,
        System_String_o *checkKey,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  bool v9; // w20
  int v10; // w19
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5BCCD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    byte_4A5BCCD = 1;
  }
  memset(&v12, 0, sizeof(v12));
  script = this->fields.script;
  if ( script )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_31C6EA8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    if ( !Keys )
      sub_1B8880C(0LL, v7);
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v12,
      Keys,
      (const MethodInfo_3422D74 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
             &v12,
             (const MethodInfo_32C510C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
      if ( !v9 )
        break;
      if ( !v12.fields._currentKey )
        sub_1B8880C(0LL, v8);
      if ( System_String__Contains((System_String_o *)v12.fields._currentKey, checkKey, 0LL) )
      {
        v10 = 5;
        goto LABEL_11;
      }
    }
    v10 = 2;
LABEL_11:
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v12,
      (const MethodInfo_32C5108 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    LOBYTE(script) = v9 && v10 == 5;
  }
  return (char)script;
}


int32_t __fastcall TreasureDvcEntity__getCacheGroupId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.cacheGroupId;
}


int32_t __fastcall TreasureDvcEntity__getCacheRandomSeqId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.cacheRandomSeqId;
}


bool __fastcall TreasureDvcEntity__getEffectExplanation(
        TreasureDvcEntity_o *this,
        System_String_o **tdName,
        System_String_o **tdExplanation,
        int32_t *maxLv,
        int32_t *tdGuageCount,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v13; // x0
  __int64 v14; // x0
  Il2CppObject *MasterData_object; // x0
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcLvEntity_o *v17; // x23
  System_String_o *v18; // x25
  Il2CppObject *name; // x24
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *Detail_40032616; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t gaugeCount; // w8
  LocalizationManager_c *v34; // x0
  System_String_o *unknownNameText; // x1
  int32_t v37; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5BCCB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&StringLiteral_9329/*"NP_NAME"*/);
    sub_1B885B0(&StringLiteral_9330/*"NP_NAME_LEVEL"*/);
    byte_4A5BCCB = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BDA48C(v13);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BDA48C(v14);
  MasterData_object = **(Il2CppObject ***)(v14 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, tdName);
  }
  Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)MasterData_object, this->fields.id, lv, 0LL);
  *maxLv = this->fields.maxLv;
  v17 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9329/*"NP_NAME"*/, 0LL);
    v24 = System_String__Format(v27, (Il2CppObject *)this->fields.name, 0LL);
  }
  else
  {
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9330/*"NP_NAME_LEVEL"*/, 0LL);
    name = (Il2CppObject *)this->fields.name;
    v37 = lv;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v20, v21, v22);
    v24 = System_String__Format_61721404(v18, name, v23, 0LL);
  }
  *tdName = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdName, (int32_t)v24, v25, v26);
  if ( v17 )
  {
    Detail_40032616 = TreasureDvcLvEntity__getDetail_40032616(v17, lv, 0LL);
    *tdExplanation = Detail_40032616;
    sub_1B88554((ServantStatusBattleListViewItem_o *)tdExplanation, (int32_t)Detail_40032616, v31, v32);
    gaugeCount = v17->fields.gaugeCount;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4A56A2D )
    {
      sub_1B885B0(&LocalizationManager_TypeInfo);
      byte_4A56A2D = 1;
    }
    v34 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v34->static_fields->unknownNameText;
    *tdExplanation = unknownNameText;
    sub_1B88554((ServantStatusBattleListViewItem_o *)tdExplanation, (int32_t)unknownNameText, v28, v29);
    gaugeCount = 0;
  }
  *tdGuageCount = gaugeCount;
  return v17 != 0LL;
}


System_Int32_array *__fastcall TreasureDvcEntity__getFixAppearanceInfoArray(
        TreasureDvcEntity_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = limit;
  if ( (byte_4A5BCD8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19443/*"fixAppearanceId_"*/);
    byte_4A5BCD8 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_19443/*"fixAppearanceId_"*/, v4, 0LL);
  return TreasureDvcEntity__getScriptIntArrayParam(this, v5, 0LL, v6);
}


int32_t __fastcall TreasureDvcEntity__getGroupSeqId(
        TreasureDvcEntity_o *this,
        System_String_o *keyGroupSeqId,
        int32_t index,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x0
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v10; // x1
  int32_t max_length; // w8

  if ( (byte_4A5BCD7 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5BCD7 = 1;
  }
  v7 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keyGroupSeqId, v7, v8);
  if ( (index & 0x80000000) != 0 )
    return -1;
  if ( !ScriptIntArrayParam )
    sub_1B8880C(0LL, v10);
  max_length = ScriptIntArrayParam->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
    sub_1B88814(ScriptIntArrayParam, v10);
  return ScriptIntArrayParam->m_Items[index + 1];
}


System_Int32_array *__fastcall TreasureDvcEntity__getIndividualities(
        TreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.individuality;
}


System_String_o *__fastcall TreasureDvcEntity__getName(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


int32_t __fastcall TreasureDvcEntity__getRandomSeqId(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        System_String_o *keyWeight,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x22
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x20
  const MethodInfo *v10; // x3
  System_Int32_array *v11; // x21
  WeightRate_int__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  int32_t v17; // w1

  if ( (byte_4A5BCD5 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_WeightRate_int___ctor__);
    sub_1B885B0(&Method_WeightRate_int__getData__);
    sub_1B885B0(&Method_WeightRate_int__getTotalWeight__);
    sub_1B885B0(&Method_WeightRate_int__setWeight__);
    sub_1B885B0(&WeightRate_int__TypeInfo);
    byte_4A5BCD5 = 1;
  }
  v7 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  v11 = TreasureDvcEntity__getScriptIntArrayParam(this, keyWeight, v7, v10);
  v12 = (WeightRate_int__o *)sub_1B887FC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v12, (const MethodInfo_38DB260 *)Method_WeightRate_int___ctor__);
  if ( !ScriptIntArrayParam )
    goto LABEL_14;
  v15 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( v11 )
    {
      if ( v16 >= v11->max_length || v16 >= (unsigned int)v15 )
        sub_1B88814(v13, v14);
      if ( !v12 )
        break;
      WeightRate_int___setWeight(
        v12,
        v11->m_Items[v16 + 1],
        ScriptIntArrayParam->m_Items[v16 + 1],
        (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
      LODWORD(v15) = ScriptIntArrayParam->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_11;
    }
LABEL_14:
    sub_1B8880C(v13, v14);
  }
LABEL_11:
  if ( !v12 )
    goto LABEL_14;
  v17 = UnityEngine_Random__Range_69419120(0, v12->fields.totalweight, 0LL);
  return WeightRate_int___getData(v12, v17, (const MethodInfo_38DABF0 *)Method_WeightRate_int__getData__);
}


int32_t __fastcall TreasureDvcEntity__getRandomSeqIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t actSetId,
        const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w8
  __int64 v11; // x20
  const MethodInfo *v12; // x4
  __int64 v13; // x21
  __int64 v14; // x8
  unsigned __int64 v15; // x26
  __int64 v16; // x8
  int32_t v17; // w22
  unsigned __int64 v18; // x29
  TreasureDvcEntity_c *v19; // x0
  int32_t v20; // w24
  TreasureDvcEntity_o *AddLimitKey; // x23
  const MethodInfo *v22; // x4
  TreasureDvcEntity_o *v23; // x25
  const MethodInfo *v24; // x4
  System_String_o *v25; // x24
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  int32_t RandomSeqId; // w0
  const MethodInfo *v30; // x3
  int32_t RandomSeqIndex; // w0
  const MethodInfo *v32; // x3

  if ( (byte_4A5BCD4 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&TreasureDvcEntity_TypeInfo);
    byte_4A5BCD4 = 1;
  }
  result = this->fields.cacheRandomSeqId;
  if ( (result & 0x80000000) == 0 )
    return result;
  this->fields.cacheRandomSeqId = this->fields.seqId;
  v8 = sub_1B88658(int___TypeInfo, 2LL);
  if ( !v8 )
    goto LABEL_30;
  v10 = *(_DWORD *)(v8 + 24);
  v11 = v8;
  if ( !v10 || (*(_DWORD *)(v8 + 32) = limitCount, v10 == 1) )
LABEL_29:
    sub_1B88814(v8, v9);
  *(_DWORD *)(v8 + 36) = -1;
  if ( !actSetId )
  {
    v8 = sub_1B88658(int___TypeInfo, 1LL);
    v13 = v8;
    goto LABEL_12;
  }
  v8 = sub_1B88658(int___TypeInfo, 2LL);
  if ( !v8 )
LABEL_30:
    sub_1B8880C(v8, v9);
  v13 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_29;
  *(_DWORD *)(v8 + 32) = actSetId;
LABEL_12:
  v14 = *(_QWORD *)(v11 + 24);
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
        goto LABEL_29;
      if ( !v13 )
        goto LABEL_30;
      v16 = *(_QWORD *)(v13 + 24);
      if ( (int)v16 >= 1 )
        break;
LABEL_24:
      LODWORD(v14) = *(_DWORD *)(v11 + 24);
      if ( (__int64)++v15 >= (int)v14 )
        return this->fields.cacheRandomSeqId;
    }
    v17 = *(_DWORD *)(v11 + 4 * v15 + 32);
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        goto LABEL_29;
      v19 = TreasureDvcEntity_TypeInfo;
      v20 = *(_DWORD *)(v13 + 32 + 4 * v18);
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v19 = TreasureDvcEntity_TypeInfo;
      }
      AddLimitKey = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                             (TreasureDvcEntity_o *)v19,
                                             v19->static_fields->KEY_RANDOM_SEQ_ID,
                                             v17,
                                             v20,
                                             v12);
      v23 = (TreasureDvcEntity_o *)TreasureDvcEntity__makeAddLimitKey(
                                     AddLimitKey,
                                     TreasureDvcEntity_TypeInfo->static_fields->KEY_RANDOM_SEQ_WEIGHT,
                                     v17,
                                     v20,
                                     v22);
      v25 = TreasureDvcEntity__makeAddLimitKey(
              v23,
              TreasureDvcEntity_TypeInfo->static_fields->KEY_GROUP_SEQ_ID,
              v17,
              v20,
              v24);
      v8 = TreasureDvcEntity__checkScript(this, (System_String_o *)AddLimitKey, v26);
      if ( (v8 & 1) != 0 )
      {
        v8 = TreasureDvcEntity__checkScript(this, (System_String_o *)v23, v27);
        if ( (v8 & 1) != 0 )
          break;
      }
      LODWORD(v16) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_24;
    }
    RandomSeqId = TreasureDvcEntity__getRandomSeqId(this, (System_String_o *)AddLimitKey, (System_String_o *)v23, v28);
    this->fields.cacheRandomSeqId = RandomSeqId;
    RandomSeqIndex = TreasureDvcEntity__getRandomSeqIndex(this, (System_String_o *)AddLimitKey, RandomSeqId, v30);
    this->fields.cacheGroupId = TreasureDvcEntity__getGroupSeqId(this, v25, RandomSeqIndex, v32);
  }
  return this->fields.cacheRandomSeqId;
}


int32_t __fastcall TreasureDvcEntity__getRandomSeqIndex(
        TreasureDvcEntity_o *this,
        System_String_o *keySeqId,
        int32_t seqId,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x0
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v10; // x1
  int max_length; // w9
  System_Int32_array *v12; // x8
  __int64 v13; // x0

  if ( (byte_4A5BCD6 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5BCD6 = 1;
  }
  v7 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, keySeqId, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1B8880C(0LL, v10);
  max_length = ScriptIntArrayParam->max_length;
  v12 = ScriptIntArrayParam;
  if ( max_length < 1 )
  {
LABEL_9:
    LODWORD(v13) = -1;
  }
  else
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( max_length == (_DWORD)v13 )
        sub_1B88814(v13, v10);
      if ( v12->m_Items[(int)v13 + 1] == seqId )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( max_length == (_DWORD)v13 )
        goto LABEL_9;
    }
  }
  return v13;
}


System_Int32_array *__fastcall TreasureDvcEntity__getRelatedBgms(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BCD9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22846/*"relationBgmIds"*/);
    byte_4A5BCD9 = 1;
  }
  return TreasureDvcEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22846/*"relationBgmIds"*/, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDvcEntity__getScriptInt(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  TreasureDvcEntity_o *v12; // x0
  System_String_o *v13; // x1
  System_Int32_array *v14; // x2
  const MethodInfo *v15; // x3

  v4 = defVal;
  if ( (byte_4A5BCCE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5BCCE = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1B88ACC(script);
  return (unsigned int)TreasureDvcEntity__getScriptIntArrayParam(v12, v13, v14, v15);
}


System_Int32_array *__fastcall TreasureDvcEntity__getScriptIntArrayParam(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__c *v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_object__o *v11; // x19
  TreasureDvcEntity___c_c *v12; // x8
  System_Converter_object__int__o *_9__28_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v15; // x21
  struct TreasureDvcEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  TreasureDvcEntity_o *v19; // x0
  int32_t v20; // w1
  const MethodInfo *v21; // x2

  if ( (byte_4A5BCCF & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__);
    sub_1B885B0(&TreasureDvcEntity___c_TypeInfo);
    byte_4A5BCCF = 1;
  }
  if ( !TreasureDvcEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           script,
           (Il2CppObject *)key,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( sub_1B886EC(Item, int___TypeInfo) )
    return (System_Int32_array *)sub_1B886EC(Item, int___TypeInfo);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = (System_Collections_Generic_List_object__o *)script;
  v12 = TreasureDvcEntity___c_TypeInfo;
  if ( !TreasureDvcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDvcEntity___c_TypeInfo);
    v12 = TreasureDvcEntity___c_TypeInfo;
  }
  _9__28_0 = v12->static_fields->__9__28_0;
  if ( !v11
    || (v7 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v11->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__28_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = TreasureDvcEntity___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__28_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__28_0,
        v15,
        Method_TreasureDvcEntity___c__getScriptIntArrayParam_b__28_0__,
        0LL);
      static_fields = TreasureDvcEntity___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = _9__28_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v17, v18);
    }
    if ( v11 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v11,
                                                                            (System_Converter_T__TOutput__o *)_9__28_0,
                                                                            (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_21:
    sub_1B8880C(script, v7);
  }
  sub_1B88ACC(v11);
  return (System_Int32_array *)TreasureDvcEntity__getSeqId(v19, v20, v21);
}


int32_t __fastcall TreasureDvcEntity__getSeqId(TreasureDvcEntity_o *this, int32_t limit, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5BCD0 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_21106/*"limitSeqId_{0}"*/);
    byte_4A5BCD0 = 1;
  }
  v11 = limit;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v8 = System_String__Format((System_String_o *)StringLiteral_21106/*"limitSeqId_{0}"*/, v7, 0LL);
  return TreasureDvcEntity__getScriptInt(this, v8, this->fields.seqId, v9);
}


int32_t __fastcall TreasureDvcEntity__getTDTypeChangeId(
        TreasureDvcEntity_o *this,
        System_String_o *key,
        int32_t commandType,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x0
  const MethodInfo *v8; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v10; // x1

  if ( (byte_4A5BCDD & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5BCDD = 1;
  }
  v7 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  ScriptIntArrayParam = TreasureDvcEntity__getScriptIntArrayParam(this, key, v7, v8);
  if ( !ScriptIntArrayParam )
    sub_1B8880C(0LL, v10);
  if ( commandType - 1 >= ScriptIntArrayParam->max_length )
    sub_1B88814(ScriptIntArrayParam, v10);
  return ScriptIntArrayParam->m_Items[commandType];
}


int32_t __fastcall TreasureDvcEntity__getTDTypeChangeIdEachLimit(
        TreasureDvcEntity_o *this,
        int32_t limitCount,
        int32_t commandType,
        const MethodInfo *method)
{
  int32_t id; // w21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  __int64 v11; // x8
  __int64 v12; // x22
  unsigned __int64 v13; // x24
  TreasureDvcEntity_o *v14; // x0
  int32_t v15; // w23
  System_String_o *AddLimitKey; // x23
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3

  if ( (byte_4A5BCDC & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&TreasureDvcEntity_TypeInfo);
    byte_4A5BCDC = 1;
  }
  id = this->fields.id;
  v8 = sub_1B88658(int___TypeInfo, 2LL);
  if ( !v8 )
    sub_1B8880C(0LL, v9);
  v11 = *(_QWORD *)(v8 + 24);
  v12 = v8;
  if ( !(_DWORD)v11 || (*(_DWORD *)(v8 + 32) = limitCount, (_DWORD)v11 == 1) )
LABEL_15:
    sub_1B88814(v8, v9);
  *(_DWORD *)(v8 + 36) = -1;
  if ( (int)v11 < 1 )
    return id;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v11 )
      goto LABEL_15;
    v14 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    v15 = *(_DWORD *)(v12 + 32 + 4 * v13);
    if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
      v14 = (TreasureDvcEntity_o *)TreasureDvcEntity_TypeInfo;
    }
    AddLimitKey = TreasureDvcEntity__makeAddLimitKey(
                    v14,
                    (System_String_o *)v14[1].fields.script->fields._entries,
                    v15,
                    0,
                    v10);
    v8 = TreasureDvcEntity__checkScript(this, AddLimitKey, v17);
    if ( (v8 & 1) != 0 )
      return TreasureDvcEntity__getTDTypeChangeId(this, AddLimitKey, commandType, v18);
    LODWORD(v11) = *(_DWORD *)(v12 + 24);
    if ( (__int64)++v13 >= (int)v11 )
      return id;
  }
}


System_String_o *__fastcall TreasureDvcEntity__makeAddLimitKey(
        TreasureDvcEntity_o *this,
        System_String_o *baseKey,
        int32_t limit,
        int32_t actSet,
        const MethodInfo *method)
{
  int32_t v6; // w20
  TreasureDvcEntity_c *v8; // x0
  System_String_o *KET_SUFFIX_ACTSET; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  Il2CppObject *v12; // x21
  System_String_o *v13; // x0
  Il2CppObject *v14; // x2
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v6 = limit;
  v16 = actSet;
  v17 = limit;
  if ( (byte_4A5BCD3 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_25111/*"{0}{1}{2}"*/);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BCD3 = 1;
  }
  if ( v6 != -1 || actSet )
  {
    if ( actSet )
    {
      v8 = TreasureDvcEntity_TypeInfo;
      if ( !TreasureDvcEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TreasureDvcEntity_TypeInfo);
        v8 = TreasureDvcEntity_TypeInfo;
      }
      KET_SUFFIX_ACTSET = v8->static_fields->KET_SUFFIX_ACTSET;
      v10 = System_Int32__ToString((int32_t)&v16, 0LL);
      v11 = System_String__Concat_61707032(KET_SUFFIX_ACTSET, v10, 0LL);
      v6 = v17;
      v12 = (Il2CppObject *)v11;
    }
    else
    {
      v12 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    if ( v6 == -1 )
    {
      v14 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
      v13 = System_Int32__ToString((int32_t)&v17, 0LL);
      v14 = (Il2CppObject *)System_String__Concat_61707032((System_String_o *)StringLiteral_16123/*"_"*/, v13, 0LL);
    }
    return System_String__Format_61721472(
             (System_String_o *)StringLiteral_25111/*"{0}{1}{2}"*/,
             (Il2CppObject *)baseKey,
             v14,
             v12,
             0LL);
  }
  return baseKey;
}


void __fastcall TreasureDvcEntity__resetCacheRandomSeqId(TreasureDvcEntity_o *this, const MethodInfo *method)
{
  this->fields.cacheRandomSeqId = -1;
}


void __fastcall TreasureDvcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BCE7 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcEntity___c_TypeInfo);
    byte_4A5BCE7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TreasureDvcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TreasureDvcEntity___c_TypeInfo->static_fields->__9 = (struct TreasureDvcEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)TreasureDvcEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall TreasureDvcEntity___c___ctor(TreasureDvcEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TreasureDvcEntity___c___TryGetTdIdChangeByBattlePoint_b__55_0(
        TreasureDvcEntity___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


int32_t __fastcall TreasureDvcEntity___c___getScriptIntArrayParam_b__28_0(
        TreasureDvcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4A5BCE8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BCE8 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0LL);
}


void __fastcall TreasureDvcEntity___c__DisplayClass54_0___ctor(
        TreasureDvcEntity___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TreasureDvcEntity___c__DisplayClass54_0___GetTdChangeByBattlePointPhaseList_b__0(
        TreasureDvcEntity___c__DisplayClass54_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return System_String__StartsWith(x, this->fields.checkKey, 0LL);
}


System_String_o *__fastcall TreasureDvcEntity___c__DisplayClass54_0___GetTdChangeByBattlePointPhaseList_b__1(
        TreasureDvcEntity___c__DisplayClass54_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  TreasureDvcEntity___c__DisplayClass54_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A5BCE9 & 1) == 0 )
  {
    this = (TreasureDvcEntity___c__DisplayClass54_0_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BCE9 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  return System_String__Replace_61726660(x, v4->fields.checkKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}