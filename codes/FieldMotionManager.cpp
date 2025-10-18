void FieldMotionManager___ctor(
        FieldMotionManager_o *this,
        BattleFieldMotionComponent_array *fieldMotions,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  struct System_Int32_array **v12; // x8
  struct System_Int32_array *v13; // x1
  FieldMotionManager_Fields *p_fields; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleFieldMotionComponent_o *v17; // x0
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v19; // x26
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v21; // x27
  UnityEngine_Object_o *v22; // x23
  struct BattleFieldMotionComponent_array *v23; // x8
  System_Object_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C46751 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46751 = 1;
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C877C8(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8776C(inited);
  v12 = *(struct System_Int32_array ***)(v11 + 184);
  v13 = *v12;
  this->fields.baseMotionIds = *v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseMotionIds, (int32_t)v13, (int32_t)perf, method);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)fieldMotions, v15, v16);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_23:
    sub_1C372B4(v17);
  v19 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(fieldMotionArray->max_length);
    v21 = v19 - 4;
    if ( v19 - 4 >= (int)max_length_low )
      break;
    if ( v21 >= max_length_low )
      goto LABEL_25;
    v22 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v22, 0, 0);
    if ( ((unsigned __int8)v17 & 1) != 0 )
    {
      v23 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_23;
      if ( v21 >= LODWORD(v23->max_length) )
LABEL_25:
        sub_1C372BC(v17);
      v17 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v23->obj.klass + v19);
      if ( !v17 )
        goto LABEL_23;
      BattleFieldMotionComponent__setPerf(v17, perf, 0);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v19;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_23;
  }
  v24 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotions,
          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = (struct BattleFieldMotionComponent_array *)v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.retentionFieldMotionArray, (int32_t)v24, v25, v26);
}


Il2CppObject *FieldMotionManager__FindLastNotNullObject_object_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_313C1E0 *method)
{
  FieldMotionManager_o *v4; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v7; // w9
  __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  struct BattleFieldMotionComponent_array *v10; // x8
  UnityEngine_Object_o *v11; // x21

  v4 = this;
  if ( !method->rgctx_data )
  {
    this = (FieldMotionManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (FieldMotionManager_o *)sub_1C877C8();
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_18:
    sub_1C372B4(this);
  v7 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( (v7 & 0x80000000) != 0 )
    return 0;
  while ( 1 )
  {
    if ( v7 >= LODWORD(fieldMotionArray->max_length) )
LABEL_21:
      sub_1C372BC(this);
    v8 = v7;
    v9 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v4->fields.fieldMotionArray;
      if ( !v10 )
        goto LABEL_18;
      if ( (unsigned int)v8 >= LODWORD(v10->max_length) )
        goto LABEL_21;
      if ( !getObjectFunc )
        goto LABEL_18;
      v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(intptr_t, BattleFieldMotionComponent_o *, intptr_t))getObjectFunc->fields.invoke_impl)(
                                      getObjectFunc->fields.method_code,
                                      v10->m_Items[v8],
                                      getObjectFunc->fields.method);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return (Il2CppObject *)v11;
    }
    v7 = v8 - 1;
    if ( (int)v8 - 1 < 0 )
      return 0;
    fieldMotionArray = v4->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_18;
  }
}


System_Int32_array *FieldMotionManager__GetEnableFieldMotionIds(
        FieldMotionManager_o *this,
        StageEntity_o *stageEnt,
        BattleData_o *data,
        const MethodInfo *method)
{
  FieldMotionManager_o *v6; // x19
  long double inited; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CurWaveEnemyDeckMotionIds; // x0
  FieldMotionManager_c *klass; // x8
  FieldMotionManager_o *v19; // x20
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  int32_t v33; // w21
  _BOOL8 v34; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  v6 = this;
  if ( (byte_4C46753 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    this = (FieldMotionManager_o *)sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C46753 = 1;
  }
  if ( !stageEnt )
    goto LABEL_55;
  if ( !StageEntity__IsDisableFieldMotion(stageEnt, 0) )
  {
    WaveFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)StageEntity__GetWaveFieldMotionIds(
                                                                                stageEnt,
                                                                                0,
                                                                                0);
    if ( WaveFieldMotionIds )
    {
      v14 = System_Linq_Enumerable__Reverse_int_(
              WaveFieldMotionIds,
              (const MethodInfo_3118440 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v14,
               (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.baseMotionIds,
                                                           (const MethodInfo_3118440 *)Method_System_Linq_Enumerable_Reverse_int___);
    v16 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58218708(
      v16,
      v15,
      (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0);
      this = (FieldMotionManager_o *)System_Linq_Enumerable__Reverse_int_(
                                       CurWaveEnemyDeckMotionIds,
                                       (const MethodInfo_3118440 *)Method_System_Linq_Enumerable_Reverse_int___);
      if ( this )
      {
        klass = this->klass;
        v19 = this;
        v20 = *(unsigned __int16 *)&this->klass->_2.rank;
        if ( *(_WORD *)&this->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
          {
            --v20;
            p_offset += 4;
            if ( !v20 )
              goto LABEL_22;
          }
          v22 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_22:
          v22 = sub_1C87870(this, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
        }
        v23 = (*(__int64 (__fastcall **)(FieldMotionManager_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
        if ( !v23 )
          sub_1C372B4(0);
        while ( 1 )
        {
          v24 = *(_QWORD *)v23;
          v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v25;
              v26 += 4;
              if ( !v25 )
                goto LABEL_29;
            }
            v27 = v24 + 16LL * *v26 + 312;
          }
          else
          {
LABEL_29:
            v27 = sub_1C87870(v23, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
            break;
          v28 = *(_QWORD *)v23;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_int__c **)v30 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
            {
              --v29;
              v30 += 4;
              if ( !v29 )
                goto LABEL_36;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_36:
            v31 = sub_1C87870(v23, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
          if ( !v16 )
            sub_1C372B4(v32);
          v33 = v32;
          v34 = System_Collections_Generic_List_int___Contains(
                  v16,
                  v32,
                  (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v34 )
            v34 = System_Collections_Generic_List_int___Remove(
                    v16,
                    v33,
                    (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
          items = v16->fields._items;
          v36 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1C372B4(v34);
          size = v16->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v33,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size] = v33;
          }
        }
        v38 = *(_QWORD *)v23;
        v39 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
        {
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_49;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_49:
          v41 = sub_1C87870(v23, System_IDisposable_TypeInfo, 0);
        }
        this = (FieldMotionManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v23, *(_QWORD *)(v41 + 8));
        if ( v16 )
          return System_Collections_Generic_List_int___ToArray(
                   v16,
                   (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_55:
    sub_1C372B4(this);
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C877C8(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8776C(inited);
  return **(System_Int32_array ***)(v11 + 184);
}


UnityEngine_GameObject_o *FieldMotionManager__GetEnemyStage(FieldMotionManager_o *this, const MethodInfo *method)
{
  FieldMotionManager___c_c *v3; // x0
  System_Func_object__object__o *_9__15_0; // x20
  Il2CppObject *v5; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4C46757 & 1) == 0 )
  {
    sub_1C37058(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C37058(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_FieldMotionManager___c__GetEnemyStage_b__15_0__);
    sub_1C37058(&FieldMotionManager___c_TypeInfo);
    byte_4C46757 = 1;
  }
  v3 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v3 = FieldMotionManager___c_TypeInfo;
  }
  _9__15_0 = (System_Func_object__object__o *)v3->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = FieldMotionManager___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__15_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__15_0, v5, Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, 0);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__15_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v7, v8);
  }
  if ( !this )
    sub_1C372B4(v3);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__15_0,
                               (const MethodInfo_313C1E0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0, 0) )
    return (UnityEngine_GameObject_o *)LastNotNullObject_object;
  else
    return 0;
}


BattleFieldMotionComponent_array *FieldMotionManager__GetFieldMotionArray(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  return this->fields.fieldMotionArray;
}


UnityEngine_GameObject_o *FieldMotionManager__GetGameObject(
        FieldMotionManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Func_object__object__o *v9; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4C46758 & 1) == 0 )
  {
    sub_1C37058(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C37058(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__);
    sub_1C37058(&FieldMotionManager___c__DisplayClass16_0_TypeInfo);
    byte_4C46758 = 1;
  }
  v5 = sub_1C372A4(FieldMotionManager___c__DisplayClass16_0_TypeInfo);
  FieldMotionManager___c__DisplayClass16_0___ctor((FieldMotionManager___c__DisplayClass16_0_o *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = name;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)name, v7, v8);
  v9 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
  System_Func_object__object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__,
    0);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v9,
                               (const MethodInfo_313C1E0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0, 0) )
    return (UnityEngine_GameObject_o *)LastNotNullObject_object;
  else
    return 0;
}


UnityEngine_GameObject_o *FieldMotionManager__GetPlayerStage(FieldMotionManager_o *this, const MethodInfo *method)
{
  FieldMotionManager___c_c *v3; // x0
  System_Func_object__object__o *_9__14_0; // x20
  Il2CppObject *v5; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4C46756 & 1) == 0 )
  {
    sub_1C37058(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C37058(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_FieldMotionManager___c__GetPlayerStage_b__14_0__);
    sub_1C37058(&FieldMotionManager___c_TypeInfo);
    byte_4C46756 = 1;
  }
  v3 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v3 = FieldMotionManager___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__object__o *)v3->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = FieldMotionManager___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__14_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__14_0, v5, Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, 0);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__14_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v7, v8);
  }
  if ( !this )
    sub_1C372B4(v3);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__14_0,
                               (const MethodInfo_313C1E0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0, 0) )
    return (UnityEngine_GameObject_o *)LastNotNullObject_object;
  else
    return 0;
}


UnityEngine_Transform_o *FieldMotionManager__GetTargetTransform(
        FieldMotionManager_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  FieldMotionManager___c__DisplayClass18_0_o *v7; // x22
  __int64 v8; // x0
  System_Func_object__object__o *v9; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4C4675A & 1) == 0 )
  {
    sub_1C37058(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1C37058(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__);
    sub_1C37058(&FieldMotionManager___c__DisplayClass18_0_TypeInfo);
    byte_4C4675A = 1;
  }
  v7 = (FieldMotionManager___c__DisplayClass18_0_o *)sub_1C372A4(FieldMotionManager___c__DisplayClass18_0_TypeInfo);
  FieldMotionManager___c__DisplayClass18_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  v7->fields.type = type;
  v7->fields.index = index;
  v9 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
  System_Func_object__object____ctor(
    v9,
    (Il2CppObject *)v7,
    Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__,
    0);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v9,
                               (const MethodInfo_313C1E0 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0, 0) )
    return (UnityEngine_Transform_o *)LastNotNullObject_object;
  else
    return 0;
}


UnityEngine_Transform_o *FieldMotionManager__GetTransform(
        FieldMotionManager_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  FieldMotionManager___c__DisplayClass17_0_o *v7; // x22
  FieldMotionManager___c_c *v8; // x0
  System_Func_object__object__o *v9; // x0
  intptr_t *v10; // x8
  UnityEngine_Transform_o *result; // x0
  System_Func_object__object__o *_9__17_1; // x20
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__17_1; // x0
  Il2CppObject *v19; // x21
  struct FieldMotionManager___c_StaticFields *v20; // x0

  if ( (byte_4C46759 & 1) == 0 )
  {
    sub_1C37058(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1C37058(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1C37058(&Method_FieldMotionManager___c__GetTransform_b__17_1__);
    sub_1C37058(&Method_FieldMotionManager___c__GetTransform_b__17_3__);
    sub_1C37058(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__);
    sub_1C37058(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__);
    sub_1C37058(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__);
    sub_1C37058(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__);
    sub_1C37058(&FieldMotionManager___c__DisplayClass17_0_TypeInfo);
    sub_1C37058(&FieldMotionManager___c_TypeInfo);
    byte_4C46759 = 1;
  }
  v7 = (FieldMotionManager___c__DisplayClass17_0_o *)sub_1C372A4(FieldMotionManager___c__DisplayClass17_0_TypeInfo);
  FieldMotionManager___c__DisplayClass17_0___ctor(v7, 0);
  if ( !v7 )
LABEL_22:
    sub_1C372B4(v8);
  v7->fields.index = index;
  switch ( type )
  {
    case 0:
      v9 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v10 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__;
      goto LABEL_25;
    case 1:
      v8 = FieldMotionManager___c_TypeInfo;
      if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      _9__17_1 = (System_Func_object__object__o *)v8->static_fields->__9__17_1;
      if ( _9__17_1 )
        goto LABEL_21;
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v8->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v13, Method_FieldMotionManager___c__GetTransform_b__17_1__, 0);
      v16 = (int)_9__17_1;
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      static_fields->__9__17_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (CGThumbnailListItem_o *)&static_fields->__9__17_1;
      goto LABEL_20;
    case 2:
      v9 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v10 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__;
      goto LABEL_25;
    case 3:
      v8 = FieldMotionManager___c_TypeInfo;
      if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      _9__17_1 = (System_Func_object__object__o *)v8->static_fields->__9__17_3;
      if ( _9__17_1 )
        goto LABEL_21;
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v8->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v19, Method_FieldMotionManager___c__GetTransform_b__17_3__, 0);
      v16 = (int)_9__17_1;
      v20 = FieldMotionManager___c_TypeInfo->static_fields;
      v20->__9__17_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (CGThumbnailListItem_o *)&v20->__9__17_3;
LABEL_20:
      sub_1C36FFC(p__9__17_1, v16, v14, v15);
LABEL_21:
      if ( !this )
        goto LABEL_22;
      goto LABEL_26;
    case 4:
      v9 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v10 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__;
      goto LABEL_25;
    case 5:
      v9 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v10 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__;
LABEL_25:
      _9__17_1 = v9;
      System_Func_object__object____ctor(v9, (Il2CppObject *)v7, *v10, 0);
LABEL_26:
      result = (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                            this,
                                            (System_Func_BattleFieldMotionComponent__T__o *)_9__17_1,
                                            (const MethodInfo_313C1E0 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


bool FieldMotionManager__IsStep(FieldMotionManager_o *this, const MethodInfo *method)
{
  FieldMotionManager_o *v2; // x19
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  char v4; // w21
  __int64 v5; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v7; // x24
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x9

  v2 = this;
  if ( (byte_4C46754 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46754 = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C372B4(this);
  v4 = 0;
  v5 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(fieldMotionArray->max_length);
    v7 = v5 - 4;
    if ( v5 - 4 >= (int)max_length_low )
      return v4 & 1;
    if ( v7 >= max_length_low )
      goto LABEL_17;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
    fieldMotionArray = v2->fields.fieldMotionArray;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !fieldMotionArray )
        goto LABEL_15;
      if ( v7 >= LODWORD(fieldMotionArray->max_length) )
LABEL_17:
        sub_1C372BC(this);
      v9 = *((_QWORD *)&fieldMotionArray->obj.klass + v5);
      if ( !v9 )
        goto LABEL_15;
      v4 |= *(_BYTE *)(v9 + 184) != 0;
    }
    ++v5;
    if ( !fieldMotionArray )
      goto LABEL_15;
  }
}


void FieldMotionManager__PlayBattleAction(
        FieldMotionManager_o *this,
        BattleActionData_o *nowAction,
        const MethodInfo *method)
{
  BattleFieldMotionComponent_o *MotionName; // x0
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  System_String_o *v7; // x20
  unsigned int v8; // w9
  __int64 v9; // x24
  UnityEngine_Object_o *v10; // x22
  struct BattleFieldMotionComponent_array *v11; // x8
  struct BattleFieldMotionComponent_array *v12; // x8
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  __int64 v16; // x0
  UnityEngine_UnityException_o *v17; // x20
  __int64 v18; // x0

  if ( (byte_4C4675B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4675B = 1;
  }
  MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__GetMotionName(nowAction, 0);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_15;
  v7 = (System_String_o *)MotionName;
  v8 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_21:
    v13 = (System_String_o *)sub_1C3706C(&StringLiteral_284/*" not found "*/);
    v14 = (System_String_o *)sub_1C3706C(&StringLiteral_257/*" in fieldFsm "*/);
    v15 = System_String__Concat_63599904(v13, v7, v14, 0);
    v16 = sub_1C3706C(&UnityEngine_UnityException_TypeInfo);
    v17 = (UnityEngine_UnityException_o *)sub_1C372A4(v16);
    UnityEngine_UnityException___ctor_71260776(v17, v15, 0);
    v18 = sub_1C3706C(&Method_FieldMotionManager_PlayBattleAction__);
    sub_1C37180(v17, v18);
  }
  while ( 1 )
  {
    if ( v8 >= LODWORD(fieldMotionArray->max_length) )
      goto LABEL_20;
    v9 = v8;
    v10 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    MotionName = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( ((unsigned __int8)MotionName & 1) != 0 )
    {
      v11 = this->fields.fieldMotionArray;
      if ( !v11 )
        goto LABEL_15;
      if ( (unsigned int)v9 >= LODWORD(v11->max_length) )
        goto LABEL_20;
      MotionName = v11->m_Items[v9];
      if ( !MotionName )
        goto LABEL_15;
      MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__checkMotionEvent(MotionName, v7, 0);
      if ( ((unsigned __int8)MotionName & 1) != 0 )
        break;
    }
    v8 = v9 - 1;
    if ( (int)v9 - 1 < 0 )
      goto LABEL_21;
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_15;
  }
  v12 = this->fields.fieldMotionArray;
  if ( !v12 )
    goto LABEL_15;
  if ( (unsigned int)v9 >= LODWORD(v12->max_length) )
LABEL_20:
    sub_1C372BC(MotionName);
  MotionName = v12->m_Items[v9];
  if ( !MotionName )
LABEL_15:
    sub_1C372B4(MotionName);
  BattleFieldMotionComponent__playBattleActionData(MotionName, nowAction, v7, 0);
}


void FieldMotionManager__ResetFieldMotionArray(FieldMotionManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  unsigned __int64 max_length_low; // x9

  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_6:
    sub_1C372B4(this);
  v6 = 1;
  v7 = 40;
  while ( 1 )
  {
    max_length_low = LODWORD(fieldMotionArray->max_length);
    if ( v6 >= (int)max_length_low )
      break;
    if ( v6 >= max_length_low )
      sub_1C372BC(this);
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v7) = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)fieldMotionArray + v7), 0, v2, v3);
    fieldMotionArray = this->fields.fieldMotionArray;
    ++v6;
    v7 += 8;
    if ( !fieldMotionArray )
      goto LABEL_6;
  }
}


bool FieldMotionManager__SendEvent(
        FieldMotionManager_o *this,
        System_String_o *str,
        System_Action_PlayMakerFSM__o *callbackBeforeSend,
        const MethodInfo *method)
{
  FieldMotionManager_o *v6; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v8; // w9
  __int64 v9; // x23
  UnityEngine_Object_o *v10; // x22
  struct BattleFieldMotionComponent_array *v11; // x8
  struct BattleFieldMotionComponent_array *v13; // x8
  Il2CppObject *Fsm; // x0
  struct BattleFieldMotionComponent_array *v15; // x8

  v6 = this;
  if ( (byte_4C4675C & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_PlayMakerFSM___);
    this = (FieldMotionManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4675C = 1;
  }
  fieldMotionArray = v6->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_24;
  v8 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( (v8 & 0x80000000) != 0 )
    return 0;
  while ( 1 )
  {
    if ( v8 >= LODWORD(fieldMotionArray->max_length) )
      goto LABEL_25;
    v9 = v8;
    v10 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v6->fields.fieldMotionArray;
      if ( !v11 )
        goto LABEL_24;
      if ( (unsigned int)v9 >= LODWORD(v11->max_length) )
        goto LABEL_25;
      this = (FieldMotionManager_o *)v11->m_Items[v9];
      if ( !this )
        goto LABEL_24;
      this = (FieldMotionManager_o *)BattleFieldMotionComponent__checkMotionEvent(
                                       (BattleFieldMotionComponent_o *)this,
                                       str,
                                       0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    v8 = v9 - 1;
    if ( (int)v9 - 1 < 0 )
      return 0;
    fieldMotionArray = v6->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_24;
  }
  v13 = v6->fields.fieldMotionArray;
  if ( !v13 )
    goto LABEL_24;
  if ( (unsigned int)v9 >= LODWORD(v13->max_length) )
    goto LABEL_25;
  this = (FieldMotionManager_o *)v13->m_Items[v9];
  if ( !this
    || (Fsm = (Il2CppObject *)BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)this, 0),
        ActionExtensions__Call_object_(
          (System_Action_T__o *)callbackBeforeSend,
          Fsm,
          (const MethodInfo_3034548 *)Method_ActionExtensions_Call_PlayMakerFSM___),
        (v15 = v6->fields.fieldMotionArray) == 0) )
  {
LABEL_24:
    sub_1C372B4(this);
  }
  if ( (unsigned int)v9 >= LODWORD(v15->max_length) )
LABEL_25:
    sub_1C372BC(this);
  this = (FieldMotionManager_o *)v15->m_Items[v9];
  if ( !this )
    goto LABEL_24;
  BattleFieldMotionComponent__sendEvent((BattleFieldMotionComponent_o *)this, str, 0);
  return 1;
}


void FieldMotionManager__SendEvent2ActiveFM(FieldMotionManager_o *this, System_String_o *str, const MethodInfo *method)
{
  FieldMotionManager_o *v4; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v6; // w9
  __int64 v7; // x23
  UnityEngine_Object_o *v8; // x21
  struct BattleFieldMotionComponent_array *v9; // x8

  v4 = this;
  if ( (byte_4C4675D & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4675D = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C372B4(this);
  v6 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      if ( v6 >= LODWORD(fieldMotionArray->max_length) )
LABEL_18:
        sub_1C372BC(this);
      v7 = v6;
      v8 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.fieldMotionArray;
        if ( !v9 )
          goto LABEL_15;
        if ( (unsigned int)v7 >= LODWORD(v9->max_length) )
          goto LABEL_18;
        this = (FieldMotionManager_o *)v9->m_Items[v7];
        if ( !this )
          goto LABEL_15;
        if ( LOBYTE(this[4].fields.baseMotionIds) )
          break;
      }
      v6 = v7 - 1;
      if ( (int)v7 - 1 < 0 )
        return;
      fieldMotionArray = v4->fields.fieldMotionArray;
      if ( !fieldMotionArray )
        goto LABEL_15;
    }
    BattleFieldMotionComponent__sendEvent((BattleFieldMotionComponent_o *)this, str, 0);
  }
}


void FieldMotionManager__SetActiveMotion(
        FieldMotionManager_o *this,
        BattleActionData_o *nowAction,
        bool active,
        const MethodInfo *method)
{
  BattleFieldMotionComponent_o *MotionName; // x0
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v9; // w9
  System_String_o *v10; // x21
  __int64 v11; // x24
  UnityEngine_Object_o *v12; // x22
  struct BattleFieldMotionComponent_array *v13; // x8
  struct BattleFieldMotionComponent_array *v14; // x8

  if ( (byte_4C4675E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4675E = 1;
  }
  if ( nowAction )
  {
    MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__GetMotionName(nowAction, 0);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_17;
    v9 = LODWORD(fieldMotionArray->max_length) - 1;
    if ( (v9 & 0x80000000) == 0 )
    {
      v10 = (System_String_o *)MotionName;
      while ( 1 )
      {
        if ( v9 >= LODWORD(fieldMotionArray->max_length) )
          goto LABEL_23;
        v11 = v9;
        v12 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        MotionName = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( ((unsigned __int8)MotionName & 1) != 0 )
        {
          v13 = this->fields.fieldMotionArray;
          if ( !v13 )
            goto LABEL_17;
          if ( (unsigned int)v11 >= LODWORD(v13->max_length) )
            goto LABEL_23;
          MotionName = v13->m_Items[v11];
          if ( !MotionName )
            goto LABEL_17;
          MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__checkMotionEvent(MotionName, v10, 0);
          if ( ((unsigned __int8)MotionName & 1) != 0 )
            break;
        }
        v9 = v11 - 1;
        if ( (int)v11 - 1 < 0 )
          return;
        fieldMotionArray = this->fields.fieldMotionArray;
        if ( !fieldMotionArray )
          goto LABEL_17;
      }
      v14 = this->fields.fieldMotionArray;
      if ( v14 )
      {
        if ( (unsigned int)v11 >= LODWORD(v14->max_length) )
LABEL_23:
          sub_1C372BC(MotionName);
        MotionName = v14->m_Items[v11];
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion(MotionName, active, 0);
          return;
        }
      }
LABEL_17:
      sub_1C372B4(MotionName);
    }
  }
}


void FieldMotionManager__SetBaseFieldMotionIds(
        FieldMotionManager_o *this,
        System_Int32_array *motionIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  struct System_Int32_array *klass; // x20
  FieldMotionManager_o *v6; // x19
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0

  klass = motionIds;
  v6 = this;
  if ( (byte_4C46750 & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_1C37058(&Method_System_Array_Empty_int___);
    byte_4C46750 = 1;
    if ( klass )
    {
LABEL_3:
      if ( v6 )
        goto LABEL_4;
LABEL_15:
      sub_1C372B4(this);
    }
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C877C8(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  this = *(FieldMotionManager_o **)(v7[7] + 16LL);
  if ( (BYTE5(this[7].fields.retentionFieldMotionArray) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_1C8776C(inited);
  klass = (struct System_Int32_array *)this[4].fields.retentionFieldMotionArray->obj.klass;
  if ( !v6 )
    goto LABEL_15;
LABEL_4:
  v6->fields.baseMotionIds = klass;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.baseMotionIds, (int32_t)klass, (int32_t)method, v3);
}


void FieldMotionManager__SetTacticBg(FieldMotionManager_o *this, bool flg, const MethodInfo *method)
{
  FieldMotionManager___c_c *v5; // x0
  System_Func_object__object__o *_9__13_0; // x21
  Il2CppObject *v7; // x22
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *LastNotNullObject_object; // x20

  if ( (byte_4C46755 & 1) == 0 )
  {
    sub_1C37058(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C37058(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_FieldMotionManager___c__SetTacticBg_b__13_0__);
    sub_1C37058(&FieldMotionManager___c_TypeInfo);
    byte_4C46755 = 1;
  }
  v5 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v5 = FieldMotionManager___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__object__o *)v5->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = FieldMotionManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__13_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__13_0, v7, Method_FieldMotionManager___c__SetTacticBg_b__13_0__, 0);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__13_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v9, v10);
  }
  if ( !this )
    goto LABEL_16;
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__13_0,
                               (const MethodInfo_313C1E0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (FieldMotionManager___c_c *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)LastNotNullObject_object,
                                     0,
                                     0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    if ( LastNotNullObject_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LastNotNullObject_object, flg, 0);
      return;
    }
LABEL_16:
    sub_1C372B4(v5);
  }
}


void FieldMotionManager__SetVariables___Il2CppFullySharedGenericType_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
        const MethodInfo_313D1E8 *method)
{
  long double v4; // q0
  unsigned __int64 StatusReg; // x21
  void *monitor; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int16 v11; // w8
  size_t v12; // x22
  __int64 v13; // x8
  int v14; // w9
  char *v15; // x24
  System_Collections_Generic_List_object__o *v16; // x26
  PlayMakerFSM_o *Fsm; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v19; // x25
  unsigned __int64 i; // x23
  UnityEngine_Object_o *v21; // x26
  intptr_t v22; // x27
  System_RuntimeTypeHandle_o v23; // x0
  System_Type_o *TypeFromHandle; // x27
  System_RuntimeTypeHandle_o v25; // x0
  System_Type_o *v26; // x0
  __int64 v27; // x27
  PlayMakerFSM_o *v28; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **p_klass; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  System_String_c **v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_c **v39; // x1
  intptr_t v40; // x27
  System_RuntimeTypeHandle_o v41; // x0
  System_Type_o *v42; // x27
  System_RuntimeTypeHandle_o v43; // x0
  System_Type_o *v44; // x0
  __int64 v45; // x27
  HutongGames_PlayMaker_FsmGameObject_o *v46; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  UnityEngine_GameObject_c **v54; // x0
  UnityEngine_GameObject_o *v55; // x1
  intptr_t v56; // x27
  System_RuntimeTypeHandle_o v57; // x0
  System_Type_o *v58; // x27
  System_RuntimeTypeHandle_o v59; // x0
  System_Type_o *v60; // x0
  long double v61; // q0
  __int64 v62; // x9
  PlayMakerFSM_o *v63; // x26
  __int64 v64; // x8
  __int64 v65; // x0
  intptr_t v66; // x27
  System_RuntimeTypeHandle_o v67; // x0
  System_Type_o *v68; // x27
  System_RuntimeTypeHandle_o v69; // x0
  System_Type_o *v70; // x0
  long double v71; // q0
  __int64 v72; // x9
  PlayMakerFSM_o *v73; // x26
  __int64 v74; // x8
  __int64 v75; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v76; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v77; // x3
  System_String_o *v78; // x27
  __int64 v79; // [xsp+0h] [xbp-40h] BYREF
  char *v80; // [xsp+8h] [xbp-38h]
  char *v81; // [xsp+10h] [xbp-30h]
  unsigned __int64 v82; // [xsp+18h] [xbp-28h]
  size_t v83; // [xsp+20h] [xbp-20h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+28h] [xbp-18h] BYREF
  System_String_o *v85; // [xsp+30h] [xbp-10h]
  __int64 v86; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = value.monitor;
  v86 = *(_QWORD *)(StatusReg + 40);
  klass = value.klass;
  v9 = *((_QWORD *)value.monitor + 7);
  if ( !v9 )
  {
    sub_1C37058(&bool_var);
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&UnityEngine_GameObject_var);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&int_var);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_var);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&System_Type_TypeInfo);
    v9 = *((_QWORD *)monitor + 7);
    if ( !v9 )
    {
      sub_1C877C8();
      v9 = *((_QWORD *)monitor + 7);
    }
  }
  v10 = *(_QWORD *)(v9 + 8);
  v11 = *(_WORD *)(v10 + 309);
  v12 = *(unsigned int *)(v10 + 252);
  if ( (v11 & 1) != 0 )
  {
    v14 = *(_DWORD *)(v10 + 252);
  }
  else
  {
    v13 = sub_1C8776C(v4);
    v10 = *(_QWORD *)(*((_QWORD *)monitor + 7) + 8LL);
    v14 = *(_DWORD *)(v13 + 252);
    v11 = *(_WORD *)(v10 + 309);
  }
  v81 = (char *)&v79 - (((unsigned int)(v14 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v82 = StatusReg;
  if ( (v11 & 1) == 0 )
    v10 = sub_1C8776C(v4);
  v80 = (char *)&v79 - (((unsigned int)(*(_DWORD *)(v10 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  v15 = (char *)&v79 - ((v12 + 15) & 0x1FFFFFFF0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v16
    || (v83 = v12,
        System_Collections_Generic_List_object___AddRange(
          v16,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v16,
                                   (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_85:
    sub_1C372B4(Fsm);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v19 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C372BC(Fsm);
      v21 = (UnityEngine_Object_o *)*((_QWORD *)&v19->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v21, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        v22 = **((_QWORD **)monitor + 7);
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v23.fields.value = v22;
        TypeFromHandle = System_Type__GetTypeFromHandle(v23, 0);
        v25.fields.value = (intptr_t)string_var;
        v26 = System_Type__GetTypeFromHandle(v25, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v26, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_85;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v21, 0);
          if ( !Fsm )
            goto LABEL_85;
          Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
          if ( !Fsm )
            goto LABEL_85;
          Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
          if ( !Fsm )
            goto LABEL_85;
          Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    variableName,
                                    0);
          if ( Fsm )
          {
            v27 = *((_QWORD *)monitor + 7);
            v28 = Fsm;
            if ( *(int *)(*(_QWORD *)(v27 + 8) + 40LL) >= 0 )
              p_klass = &klass;
            else
              p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
            memcpy(v15, p_klass, v83);
            v36 = (System_String_c **)j_il2cpp_value_box_0(*(_QWORD *)(v27 + 8), v15, v30, v31, v32, v33, v34, v35);
            if ( v36 )
            {
              if ( *v36 == string_TypeInfo )
                v39 = v36;
              else
                v39 = 0;
            }
            else
            {
              v39 = 0;
            }
            v28->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v39;
            sub_1C36FFC((CGThumbnailListItem_o *)&v28->fields.addEventHandlers, (int32_t)v39, v37, v38);
          }
        }
        else
        {
          v40 = **((_QWORD **)monitor + 7);
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v41.fields.value = v40;
          v42 = System_Type__GetTypeFromHandle(v41, 0);
          v43.fields.value = (intptr_t)UnityEngine_GameObject_var;
          v44 = System_Type__GetTypeFromHandle(v43, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v42, v44, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_85;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v21, 0);
            if ( !Fsm )
              goto LABEL_85;
            Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
            if ( !Fsm )
              goto LABEL_85;
            Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
            if ( !Fsm )
              goto LABEL_85;
            Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                      variableName,
                                      0);
            if ( Fsm )
            {
              v45 = *((_QWORD *)monitor + 7);
              v46 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              if ( *(int *)(*(_QWORD *)(v45 + 8) + 40LL) >= 0 )
                v47 = &klass;
              else
                v47 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
              memcpy(v15, v47, v83);
              v54 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(
                                                   *(_QWORD *)(v45 + 8),
                                                   v15,
                                                   v48,
                                                   v49,
                                                   v50,
                                                   v51,
                                                   v52,
                                                   v53);
              if ( v54 )
              {
                if ( *v54 == UnityEngine_GameObject_TypeInfo )
                  v55 = (UnityEngine_GameObject_o *)v54;
                else
                  v55 = 0;
              }
              else
              {
                v55 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v46, v55, 0);
            }
          }
          else
          {
            v56 = **((_QWORD **)monitor + 7);
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v57.fields.value = v56;
            v58 = System_Type__GetTypeFromHandle(v57, 0);
            v59.fields.value = (intptr_t)int_var;
            v60 = System_Type__GetTypeFromHandle(v59, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v58, v60, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v21 )
                goto LABEL_85;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v21, 0);
              if ( !Fsm )
                goto LABEL_85;
              Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
              if ( !Fsm )
                goto LABEL_85;
              Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
              if ( !Fsm )
                goto LABEL_85;
              Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                        variableName,
                                        0);
              if ( Fsm )
              {
                v62 = *((_QWORD *)monitor + 7);
                v63 = Fsm;
                v64 = *(_QWORD *)(v62 + 8);
                if ( (*(_BYTE *)(v64 + 309) & 1) != 0 )
                {
                  v65 = *(_QWORD *)(v62 + 8);
                }
                else
                {
                  LODWORD(v65) = sub_1C8776C(v61);
                  v62 = *((_QWORD *)monitor + 7);
                  v64 = *(_QWORD *)(v62 + 8);
                }
                if ( *(int *)(v64 + 40) >= 0 )
                  v76 = &klass;
                else
                  v76 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                sub_1C37AC0(v65, *(_QWORD *)(v62 + 16), (int)v81, v76);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v85, 0);
                LODWORD(v63->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v66 = **((_QWORD **)monitor + 7);
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v67.fields.value = v66;
              v68 = System_Type__GetTypeFromHandle(v67, 0);
              v69.fields.value = (intptr_t)bool_var;
              v70 = System_Type__GetTypeFromHandle(v69, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v68, v70, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v21 )
                  goto LABEL_85;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v21, 0);
                if ( !Fsm )
                  goto LABEL_85;
                Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
                if ( !Fsm )
                  goto LABEL_85;
                Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
                if ( !Fsm )
                  goto LABEL_85;
                Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                          (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                          variableName,
                                          0);
                if ( Fsm )
                {
                  v72 = *((_QWORD *)monitor + 7);
                  v73 = Fsm;
                  v74 = *(_QWORD *)(v72 + 8);
                  if ( (*(_BYTE *)(v74 + 309) & 1) != 0 )
                  {
                    v75 = *(_QWORD *)(v72 + 8);
                  }
                  else
                  {
                    LODWORD(v75) = sub_1C8776C(v71);
                    v72 = *((_QWORD *)monitor + 7);
                    v74 = *(_QWORD *)(v72 + 8);
                  }
                  if ( *(int *)(v74 + 40) >= 0 )
                    v77 = &klass;
                  else
                    v77 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                  sub_1C37AC0(v75, *(_QWORD *)(v72 + 16), (int)v80, v77);
                  v78 = v85;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v78, 0);
                  LOBYTE(v73->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v19->fields.m_CancellationTokenSource;
    }
  }
}


void FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_313C300 *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  PlayMakerFSM_o *Fsm; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v10; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v12; // x22
  Il2CppType *_0_T; // x23
  System_RuntimeTypeHandle_o v14; // x0
  System_Type_o *TypeFromHandle; // x23
  System_RuntimeTypeHandle_o v16; // x0
  System_Type_o *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  PlayMakerFSM_o *v24; // x22
  System_String_c **v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_c **v28; // x1
  Il2CppType *v29; // x23
  System_RuntimeTypeHandle_o v30; // x0
  System_Type_o *v31; // x23
  System_RuntimeTypeHandle_o v32; // x0
  System_Type_o *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  HutongGames_PlayMaker_FsmGameObject_o *v40; // x22
  UnityEngine_GameObject_c **v41; // x0
  UnityEngine_GameObject_o *v42; // x1
  Il2CppType *v43; // x23
  System_RuntimeTypeHandle_o v44; // x0
  System_Type_o *v45; // x23
  System_RuntimeTypeHandle_o v46; // x0
  System_Type_o *v47; // x0
  PlayMakerFSM_o *v48; // x22
  System_String_o *v49; // x0
  Il2CppType *v50; // x23
  System_RuntimeTypeHandle_o v51; // x0
  System_Type_o *v52; // x23
  System_RuntimeTypeHandle_o v53; // x0
  System_Type_o *v54; // x0
  PlayMakerFSM_o *v55; // x22
  System_String_o *v56; // x0
  _BYTE v57[4]; // [xsp+4h] [xbp-6Ch] BYREF
  _BYTE v58[4]; // [xsp+8h] [xbp-68h] BYREF
  _BYTE v59[4]; // [xsp+Ch] [xbp-64h] BYREF

  v59[0] = value;
  if ( !method->rgctx_data )
  {
    sub_1C37058(&bool_var);
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&UnityEngine_GameObject_var);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&int_var);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_var);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C877C8();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_64:
    sub_1C372B4(Fsm);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v10 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C372BC(Fsm);
      v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v14.fields.value = (intptr_t)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v14, 0);
        v16.fields.value = (intptr_t)string_var;
        v17 = System_Type__GetTypeFromHandle(v16, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v17, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v12, 0);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
          if ( !Fsm )
            goto LABEL_64;
          Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    variableName,
                                    0);
          if ( Fsm )
          {
            v24 = Fsm;
            v58[0] = v59[0];
            v25 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v58, v18, v19, v20, v21, v22, v23);
            if ( v25 )
            {
              if ( *v25 == string_TypeInfo )
                v28 = v25;
              else
                v28 = 0;
            }
            else
            {
              v28 = 0;
            }
            v24->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v28;
            sub_1C36FFC((CGThumbnailListItem_o *)&v24->fields.addEventHandlers, (int32_t)v28, v26, v27);
          }
        }
        else
        {
          v29 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v30.fields.value = (intptr_t)v29;
          v31 = System_Type__GetTypeFromHandle(v30, 0);
          v32.fields.value = (intptr_t)UnityEngine_GameObject_var;
          v33 = System_Type__GetTypeFromHandle(v32, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v31, v33, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v12, 0);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
            if ( !Fsm )
              goto LABEL_64;
            Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                      variableName,
                                      0);
            if ( Fsm )
            {
              v40 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v57[0] = v59[0];
              v41 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(
                                                   method->rgctx_data->_1_T,
                                                   v57,
                                                   v34,
                                                   v35,
                                                   v36,
                                                   v37,
                                                   v38,
                                                   v39);
              if ( v41 )
              {
                if ( *v41 == UnityEngine_GameObject_TypeInfo )
                  v42 = (UnityEngine_GameObject_o *)v41;
                else
                  v42 = 0;
              }
              else
              {
                v42 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v40, v42, 0);
            }
          }
          else
          {
            v43 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v44.fields.value = (intptr_t)v43;
            v45 = System_Type__GetTypeFromHandle(v44, 0);
            v46.fields.value = (intptr_t)int_var;
            v47 = System_Type__GetTypeFromHandle(v46, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v45, v47, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v12, 0);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
              if ( !Fsm )
                goto LABEL_64;
              Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                        variableName,
                                        0);
              if ( Fsm )
              {
                v48 = Fsm;
                if ( !bool_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                v49 = System_Boolean__ToString((bool)v59, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v49, 0);
                LODWORD(v48->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v50 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v51.fields.value = (intptr_t)v50;
              v52 = System_Type__GetTypeFromHandle(v51, 0);
              v53.fields.value = (intptr_t)bool_var;
              v54 = System_Type__GetTypeFromHandle(v53, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v52, v54, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v12 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v12, 0);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                          (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                          variableName,
                                          0);
                if ( Fsm )
                {
                  v55 = Fsm;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  v56 = System_Boolean__ToString((bool)v59, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v56, 0);
                  LOBYTE(v55->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
    }
  }
}


void FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_313C818 *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  PlayMakerFSM_o *Fsm; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v10; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v12; // x22
  Il2CppType *_0_T; // x23
  System_RuntimeTypeHandle_o v14; // x0
  System_Type_o *TypeFromHandle; // x23
  System_RuntimeTypeHandle_o v16; // x0
  System_Type_o *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  PlayMakerFSM_o *v24; // x22
  System_String_c **v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_c **v28; // x1
  Il2CppType *v29; // x23
  System_RuntimeTypeHandle_o v30; // x0
  System_Type_o *v31; // x23
  System_RuntimeTypeHandle_o v32; // x0
  System_Type_o *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  HutongGames_PlayMaker_FsmGameObject_o *v40; // x22
  UnityEngine_GameObject_c **v41; // x0
  UnityEngine_GameObject_o *v42; // x1
  Il2CppType *v43; // x23
  System_RuntimeTypeHandle_o v44; // x0
  System_Type_o *v45; // x23
  System_RuntimeTypeHandle_o v46; // x0
  System_Type_o *v47; // x0
  PlayMakerFSM_o *v48; // x22
  System_String_o *v49; // x0
  Il2CppType *v50; // x23
  System_RuntimeTypeHandle_o v51; // x0
  System_Type_o *v52; // x23
  System_RuntimeTypeHandle_o v53; // x0
  System_Type_o *v54; // x0
  PlayMakerFSM_o *v55; // x22
  System_String_o *v56; // x23
  int32_t v57; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v58; // [xsp+8h] [xbp-68h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-64h] BYREF

  v59 = value;
  if ( !method->rgctx_data )
  {
    sub_1C37058(&bool_var);
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&UnityEngine_GameObject_var);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&int_var);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_var);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C877C8();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_62:
    sub_1C372B4(Fsm);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v10 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C372BC(Fsm);
      v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v14.fields.value = (intptr_t)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v14, 0);
        v16.fields.value = (intptr_t)string_var;
        v17 = System_Type__GetTypeFromHandle(v16, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v17, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_62;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v12, 0);
          if ( !Fsm )
            goto LABEL_62;
          Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
          if ( !Fsm )
            goto LABEL_62;
          Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
          if ( !Fsm )
            goto LABEL_62;
          Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    variableName,
                                    0);
          if ( Fsm )
          {
            v24 = Fsm;
            v58 = v59;
            v25 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v58, v18, v19, v20, v21, v22, v23);
            if ( v25 )
            {
              if ( *v25 == string_TypeInfo )
                v28 = v25;
              else
                v28 = 0;
            }
            else
            {
              v28 = 0;
            }
            v24->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v28;
            sub_1C36FFC((CGThumbnailListItem_o *)&v24->fields.addEventHandlers, (int32_t)v28, v26, v27);
          }
        }
        else
        {
          v29 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v30.fields.value = (intptr_t)v29;
          v31 = System_Type__GetTypeFromHandle(v30, 0);
          v32.fields.value = (intptr_t)UnityEngine_GameObject_var;
          v33 = System_Type__GetTypeFromHandle(v32, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v31, v33, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_62;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v12, 0);
            if ( !Fsm )
              goto LABEL_62;
            Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
            if ( !Fsm )
              goto LABEL_62;
            Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
            if ( !Fsm )
              goto LABEL_62;
            Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                      variableName,
                                      0);
            if ( Fsm )
            {
              v40 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v57 = v59;
              v41 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(
                                                   method->rgctx_data->_1_T,
                                                   &v57,
                                                   v34,
                                                   v35,
                                                   v36,
                                                   v37,
                                                   v38,
                                                   v39);
              if ( v41 )
              {
                if ( *v41 == UnityEngine_GameObject_TypeInfo )
                  v42 = (UnityEngine_GameObject_o *)v41;
                else
                  v42 = 0;
              }
              else
              {
                v42 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v40, v42, 0);
            }
          }
          else
          {
            v43 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v44.fields.value = (intptr_t)v43;
            v45 = System_Type__GetTypeFromHandle(v44, 0);
            v46.fields.value = (intptr_t)int_var;
            v47 = System_Type__GetTypeFromHandle(v46, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v45, v47, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_62;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v12, 0);
              if ( !Fsm )
                goto LABEL_62;
              Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
              if ( !Fsm )
                goto LABEL_62;
              Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
              if ( !Fsm )
                goto LABEL_62;
              Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                        variableName,
                                        0);
              if ( Fsm )
              {
                v48 = Fsm;
                v49 = System_Int32__ToString((int32_t)&v59, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v49, 0);
                LODWORD(v48->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v50 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v51.fields.value = (intptr_t)v50;
              v52 = System_Type__GetTypeFromHandle(v51, 0);
              v53.fields.value = (intptr_t)bool_var;
              v54 = System_Type__GetTypeFromHandle(v53, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v52, v54, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v12 )
                  goto LABEL_62;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v12, 0);
                if ( !Fsm )
                  goto LABEL_62;
                Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
                if ( !Fsm )
                  goto LABEL_62;
                Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
                if ( !Fsm )
                  goto LABEL_62;
                Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                          (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                          variableName,
                                          0);
                if ( Fsm )
                {
                  v55 = Fsm;
                  v56 = System_Int32__ToString((int32_t)&v59, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v56, 0);
                  LOBYTE(v55->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
    }
  }
}


void FieldMotionManager__SetVariables_object_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Il2CppObject *value,
        const MethodInfo_313CD20 *method)
{
  System_Collections_Generic_List_object__o *v8; // x23
  void *Fsm; // x0
  __int64 v10; // x8
  _QWORD *v11; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v13; // x23
  Il2CppType *_0_T; // x24
  System_RuntimeTypeHandle_o v15; // x0
  System_Type_o *TypeFromHandle; // x24
  System_RuntimeTypeHandle_o v17; // x0
  System_Type_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x1
  Il2CppType *v22; // x24
  System_RuntimeTypeHandle_o v23; // x0
  System_Type_o *v24; // x24
  System_RuntimeTypeHandle_o v25; // x0
  System_Type_o *v26; // x0
  Il2CppObject *v27; // x1
  Il2CppType *v28; // x24
  System_RuntimeTypeHandle_o v29; // x0
  System_Type_o *v30; // x24
  System_RuntimeTypeHandle_o v31; // x0
  System_Type_o *v32; // x0
  _DWORD *v33; // x23
  System_String_o *v34; // x0
  Il2CppType *v35; // x24
  System_RuntimeTypeHandle_o v36; // x0
  System_Type_o *v37; // x24
  System_RuntimeTypeHandle_o v38; // x0
  System_Type_o *v39; // x0
  _BYTE *v40; // x23
  System_String_o *v41; // x24

  if ( !method->rgctx_data )
  {
    sub_1C37058(&bool_var);
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&UnityEngine_GameObject_var);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&int_var);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_var);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C877C8();
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_object___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = System_Collections_Generic_List_object___ToArray(
                 v8,
                 (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_64:
    sub_1C372B4(Fsm);
  }
  v10 = *((_QWORD *)Fsm + 3);
  v11 = Fsm;
  if ( (int)v10 >= 1 )
  {
    for ( i = 0; (__int64)i < (int)v10; ++i )
    {
      if ( i >= (unsigned int)v10 )
        sub_1C372BC(Fsm);
      v13 = (UnityEngine_Object_o *)v11[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (void *)UnityEngine_Object__op_Equality(v13, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v15.fields.value = (intptr_t)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0);
        v17.fields.value = (intptr_t)string_var;
        v18 = System_Type__GetTypeFromHandle(v17, 0);
        Fsm = (void *)System_Type__op_Equality(TypeFromHandle, v18, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = (void *)*((_QWORD *)Fsm + 11);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmString(
                  (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                  variableName,
                  0);
          if ( Fsm )
          {
            if ( value )
            {
              if ( (System_String_c *)value->klass == string_TypeInfo )
                v21 = value;
              else
                v21 = 0;
            }
            else
            {
              v21 = 0;
            }
            *((_QWORD *)Fsm + 7) = v21;
            sub_1C36FFC((CGThumbnailListItem_o *)((char *)Fsm + 56), (int32_t)v21, v19, v20);
          }
        }
        else
        {
          v22 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v23.fields.value = (intptr_t)v22;
          v24 = System_Type__GetTypeFromHandle(v23, 0);
          v25.fields.value = (intptr_t)UnityEngine_GameObject_var;
          v26 = System_Type__GetTypeFromHandle(v25, 0);
          Fsm = (void *)System_Type__op_Equality(v24, v26, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = (void *)*((_QWORD *)Fsm + 11);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                    variableName,
                    0);
            if ( Fsm )
            {
              if ( value )
              {
                if ( (UnityEngine_GameObject_c *)value->klass == UnityEngine_GameObject_TypeInfo )
                  v27 = value;
                else
                  v27 = 0;
              }
              else
              {
                v27 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                (UnityEngine_GameObject_o *)v27,
                0);
            }
          }
          else
          {
            v28 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v29.fields.value = (intptr_t)v28;
            v30 = System_Type__GetTypeFromHandle(v29, 0);
            v31.fields.value = (intptr_t)int_var;
            v32 = System_Type__GetTypeFromHandle(v31, 0);
            Fsm = (void *)System_Type__op_Equality(v30, v32, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = (void *)*((_QWORD *)Fsm + 11);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                      (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                      variableName,
                      0);
              if ( Fsm )
              {
                if ( !value )
                  goto LABEL_64;
                v33 = Fsm;
                v34 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                           value,
                                           value->klass->vtable[3].method);
                Fsm = (void *)System_Int32__Parse(v34, 0);
                v33[14] = (_DWORD)Fsm;
              }
            }
            else
            {
              v35 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v36.fields.value = (intptr_t)v35;
              v37 = System_Type__GetTypeFromHandle(v36, 0);
              v38.fields.value = (intptr_t)bool_var;
              v39 = System_Type__GetTypeFromHandle(v38, 0);
              Fsm = (void *)System_Type__op_Equality(v37, v39, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = (void *)*((_QWORD *)Fsm + 11);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                        (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                        variableName,
                        0);
                if ( Fsm )
                {
                  if ( !value )
                    goto LABEL_64;
                  v40 = Fsm;
                  v41 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                             value,
                                             value->klass->vtable[3].method);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (void *)System_Boolean__Parse(v41, 0);
                  v40[56] = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(v10) = *((_DWORD *)v11 + 6);
    }
  }
}


void FieldMotionManager__SwitchUniqueFieldMotion(
        FieldMotionManager_o *this,
        StageEntity_o *stageEnt,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerable_TSource__o *EnableFieldMotionIds; // x19
  System_Func_T__TResult__o *v9; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v10; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x19
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x19
  unsigned __int64 i; // x28
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x21
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  int *fieldMotionArray; // x29
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x22
  System_Func_object__bool__o *v33; // x23
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x21
  int *v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_4C46752 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleDataDefine_FieldMotionPath__);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C37058(&System_Func_int__string__TypeInfo);
    sub_1C37058(&System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__);
    sub_1C37058(&FieldMotionManager___c__DisplayClass8_0_TypeInfo);
    byte_4C46752 = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v7);
  v9 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v9, 0, Method_BattleDataDefine_FieldMotionPath__, 0);
  v10 = System_Linq_Enumerable__Select_int__object_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v9,
          (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v10 )
    sub_1C372B4(0);
  klass = v10->klass;
  v12 = v10;
  v13 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_8;
    }
    v15 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v15 = sub_1C87870(v10, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v15)(
          v12,
          *(_QWORD *)(v15 + 8));
  if ( !v16 )
    sub_1C372B4(0);
  for ( i = 1; ; ++i )
  {
    v18 = *(_QWORD *)v16;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_16:
      v21 = sub_1C87870(v16, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v16, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = sub_1C372A4(FieldMotionManager___c__DisplayClass8_0_TypeInfo);
    FieldMotionManager___c__DisplayClass8_0___ctor((FieldMotionManager___c__DisplayClass8_0_o *)v22, 0);
    v23 = *(_QWORD *)v16;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v25 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_23;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_23:
      v26 = sub_1C87870(v16, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v16, *(_QWORD *)(v26 + 8));
    if ( !v22 )
      sub_1C372B4(v27);
    *(_QWORD *)(v22 + 16) = v27;
    sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 16), v27, v28, v29);
    fieldMotionArray = (int *)this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_1C372B4(v30);
    if ( (__int64)i >= fieldMotionArray[6] )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v33 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v33,
      (Il2CppObject *)v22,
      Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__,
      0);
    v34 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v33,
            (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v37 = v34;
    if ( v34 )
    {
      v34 = (Il2CppObject *)sub_1C37194(v34, *(_QWORD *)(*(_QWORD *)fieldMotionArray + 64LL));
      if ( !v34 )
      {
        v43 = sub_1C372D8(0);
        sub_1C37180(v43, 0);
      }
    }
    if ( i >= (unsigned int)fieldMotionArray[6] )
      sub_1C372BC(v34);
    v38 = &fieldMotionArray[2 * i];
    *((_QWORD *)v38 + 4) = v37;
    sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 8), (int32_t)v37, v35, v36);
  }
  v39 = *(_QWORD *)v16;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_36;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_36:
    v42 = sub_1C87870(v16, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v16, *(_QWORD *)(v42 + 8));
}


void FieldMotionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4675F & 1) == 0 )
  {
    sub_1C37058(&FieldMotionManager___c_TypeInfo);
    byte_4C4675F = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(FieldMotionManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FieldMotionManager___c_TypeInfo->static_fields->__9 = (struct FieldMotionManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)FieldMotionManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void FieldMotionManager___c___ctor(FieldMotionManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_GameObject_o *FieldMotionManager___c___GetEnemyStage_b__15_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *FieldMotionManager___c___GetPlayerStage_b__14_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *FieldMotionManager___c___GetTransform_b__17_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *FieldMotionManager___c___GetTransform_b__17_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *FieldMotionManager___c___SetTacticBg_b__13_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return comp->fields.tacticBg;
}


void FieldMotionManager___c__DisplayClass16_0___ctor(
        FieldMotionManager___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_GameObject_o *FieldMotionManager___c__DisplayClass16_0___GetGameObject_b__0(
        FieldMotionManager___c__DisplayClass16_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return BattleFieldMotionComponent__getGameObject(comp, this->fields.name, 0);
}


void FieldMotionManager___c__DisplayClass17_0___ctor(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass17_0___GetTransform_b__0(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass17_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass17_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass17_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return BattleFieldMotionComponent__getEnemyTacticalTr(comp, this->fields.index, 0);
}


void FieldMotionManager___c__DisplayClass18_0___ctor(
        FieldMotionManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass18_0___GetTargetTransform_b__0(
        FieldMotionManager___c__DisplayClass18_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C372B4(this);
  return BattleFieldMotionComponent__GetTargetTr(comp, this->fields.type, this->fields.index, 0);
}


void FieldMotionManager___c__DisplayClass8_0___ctor(
        FieldMotionManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FieldMotionManager___c__DisplayClass8_0___SwitchUniqueFieldMotion_b__0(
        FieldMotionManager___c__DisplayClass8_0_o *this,
        BattleFieldMotionComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0

  if ( (byte_4C46760 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46760 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_1C372B4(v5);
  return BasicHelper__EqualExceptNullOrEmpty(x->fields._AssetName_k__BackingField, this->fields.targetName, 0);
}