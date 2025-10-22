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
  __int64 v18; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v20; // x26
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v22; // x27
  UnityEngine_Object_o *v23; // x23
  struct BattleFieldMotionComponent_array *v24; // x8
  System_Object_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C5A548 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A548 = 1;
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8EC78(inited);
  v12 = *(struct System_Int32_array ***)(v11 + 184);
  v13 = *v12;
  this->fields.baseMotionIds = *v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseMotionIds, (int32_t)v13, (int32_t)perf, method);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)fieldMotions, v15, v16);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_23:
    sub_1C3E7C0(v17, v18);
  v20 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(fieldMotionArray->max_length);
    v22 = v20 - 4;
    if ( v20 - 4 >= (int)max_length_low )
      break;
    if ( v22 >= max_length_low )
      goto LABEL_25;
    v23 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v20);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v23, 0, 0);
    if ( ((unsigned __int8)v17 & 1) != 0 )
    {
      v24 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_23;
      if ( v22 >= LODWORD(v24->max_length) )
LABEL_25:
        sub_1C3E7C8(v17, v18);
      v17 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v24->obj.klass + v20);
      if ( !v17 )
        goto LABEL_23;
      BattleFieldMotionComponent__setPerf(v17, perf, 0);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v20;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_23;
  }
  v25 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotions,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = (struct BattleFieldMotionComponent_array *)v25;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.retentionFieldMotionArray, (int32_t)v25, v26, v27);
}


Il2CppObject *FieldMotionManager__FindLastNotNullObject_object_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_314E0D4 *method)
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
    this = (FieldMotionManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (FieldMotionManager_o *)sub_1C8ECD4();
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_18:
    sub_1C3E7C0(this, getObjectFunc);
  v7 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( (v7 & 0x80000000) != 0 )
    return 0;
  while ( 1 )
  {
    if ( v7 >= LODWORD(fieldMotionArray->max_length) )
LABEL_21:
      sub_1C3E7C8(this, getObjectFunc);
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
  __int64 v23; // x1
  __int64 v24; // x20
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w21
  _BOOL8 v36; // x0
  __int64 v37; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0

  v6 = this;
  if ( (byte_4C5A54A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor___78135936);
    this = (FieldMotionManager_o *)sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C5A54A = 1;
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
              (const MethodInfo_312A334 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v14,
               (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.baseMotionIds,
                                                           (const MethodInfo_312A334 *)Method_System_Linq_Enumerable_Reverse_int___);
    v16 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58293520(
      v16,
      v15,
      (const MethodInfo_3797D10 *)Method_System_Collections_Generic_List_int___ctor___78135936);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0);
      this = (FieldMotionManager_o *)System_Linq_Enumerable__Reverse_int_(
                                       CurWaveEnemyDeckMotionIds,
                                       (const MethodInfo_312A334 *)Method_System_Linq_Enumerable_Reverse_int___);
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
          v22 = sub_1C8ED7C(this, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
        }
        v24 = (*(__int64 (__fastcall **)(FieldMotionManager_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
        if ( !v24 )
          sub_1C3E7C0(0, v23);
        while ( 1 )
        {
          v25 = *(_QWORD *)v24;
          v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v26;
              v27 += 4;
              if ( !v26 )
                goto LABEL_29;
            }
            v28 = v25 + 16LL * *v27 + 312;
          }
          else
          {
LABEL_29:
            v28 = sub_1C8ED7C(v24, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
            break;
          v29 = *(_QWORD *)v24;
          v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_int__c **)v31 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
            {
              --v30;
              v31 += 4;
              if ( !v30 )
                goto LABEL_36;
            }
            v32 = v29 + 16LL * *v31 + 312;
          }
          else
          {
LABEL_36:
            v32 = sub_1C8ED7C(v24, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
          }
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
          if ( !v16 )
            sub_1C3E7C0(v33, v34);
          v35 = v33;
          v36 = System_Collections_Generic_List_int___Contains(
                  v16,
                  v33,
                  (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v36 )
            v36 = System_Collections_Generic_List_int___Remove(
                    v16,
                    v35,
                    (const MethodInfo_3799938 *)Method_System_Collections_Generic_List_int__Remove__);
          items = v16->fields._items;
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1C3E7C0(v36, v37);
          size = v16->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v35,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size] = v35;
          }
        }
        v41 = *(_QWORD *)v24;
        v42 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_49;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_49:
          v44 = sub_1C8ED7C(v24, System_IDisposable_TypeInfo, 0);
        }
        this = (FieldMotionManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v24, *(_QWORD *)(v44 + 8));
        if ( v16 )
          return System_Collections_Generic_List_int___ToArray(
                   v16,
                   (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_55:
    sub_1C3E7C0(this, stageEnt);
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8EC78(inited);
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

  if ( (byte_4C5A54E & 1) == 0 )
  {
    sub_1C3E564(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C3E564(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_FieldMotionManager___c__GetEnemyStage_b__15_0__);
    sub_1C3E564(&FieldMotionManager___c_TypeInfo);
    byte_4C5A54E = 1;
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
    _9__15_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__15_0, v5, Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, 0);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__15_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v7, v8);
  }
  if ( !this )
    sub_1C3E7C0(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__15_0,
                               (const MethodInfo_314E0D4 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Func_object__object__o *v10; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4C5A54F & 1) == 0 )
  {
    sub_1C3E564(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C3E564(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__);
    sub_1C3E564(&FieldMotionManager___c__DisplayClass16_0_TypeInfo);
    byte_4C5A54F = 1;
  }
  v5 = sub_1C3E7B0(FieldMotionManager___c__DisplayClass16_0_TypeInfo);
  FieldMotionManager___c__DisplayClass16_0___ctor((FieldMotionManager___c__DisplayClass16_0_o *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = name;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)name, v8, v9);
  v10 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
  System_Func_object__object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__,
    0);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v10,
                               (const MethodInfo_314E0D4 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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

  if ( (byte_4C5A54D & 1) == 0 )
  {
    sub_1C3E564(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C3E564(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_FieldMotionManager___c__GetPlayerStage_b__14_0__);
    sub_1C3E564(&FieldMotionManager___c_TypeInfo);
    byte_4C5A54D = 1;
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
    _9__14_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__14_0, v5, Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, 0);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__14_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v7, v8);
  }
  if ( !this )
    sub_1C3E7C0(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__14_0,
                               (const MethodInfo_314E0D4 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v9; // x1
  System_Func_object__object__o *v10; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4C5A551 & 1) == 0 )
  {
    sub_1C3E564(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1C3E564(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__);
    sub_1C3E564(&FieldMotionManager___c__DisplayClass18_0_TypeInfo);
    byte_4C5A551 = 1;
  }
  v7 = (FieldMotionManager___c__DisplayClass18_0_o *)sub_1C3E7B0(FieldMotionManager___c__DisplayClass18_0_TypeInfo);
  FieldMotionManager___c__DisplayClass18_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  v7->fields.type = type;
  v7->fields.index = index;
  v10 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
  System_Func_object__object____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__,
    0);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v10,
                               (const MethodInfo_314E0D4 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  __int64 v9; // x1
  System_Func_object__object__o *v10; // x0
  intptr_t *v11; // x8
  UnityEngine_Transform_o *result; // x0
  System_Func_object__object__o *_9__17_1; // x20
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__17_1; // x0
  Il2CppObject *v20; // x21
  struct FieldMotionManager___c_StaticFields *v21; // x0

  if ( (byte_4C5A550 & 1) == 0 )
  {
    sub_1C3E564(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1C3E564(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1C3E564(&Method_FieldMotionManager___c__GetTransform_b__17_1__);
    sub_1C3E564(&Method_FieldMotionManager___c__GetTransform_b__17_3__);
    sub_1C3E564(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__);
    sub_1C3E564(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__);
    sub_1C3E564(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__);
    sub_1C3E564(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__);
    sub_1C3E564(&FieldMotionManager___c__DisplayClass17_0_TypeInfo);
    sub_1C3E564(&FieldMotionManager___c_TypeInfo);
    byte_4C5A550 = 1;
  }
  v7 = (FieldMotionManager___c__DisplayClass17_0_o *)sub_1C3E7B0(FieldMotionManager___c__DisplayClass17_0_TypeInfo);
  FieldMotionManager___c__DisplayClass17_0___ctor(v7, 0);
  if ( !v7 )
LABEL_22:
    sub_1C3E7C0(v8, v9);
  v7->fields.index = index;
  switch ( type )
  {
    case 0:
      v10 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__;
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
      v14 = (Il2CppObject *)v8->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v14, Method_FieldMotionManager___c__GetTransform_b__17_1__, 0);
      v17 = (int)_9__17_1;
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      static_fields->__9__17_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (CGThumbnailListItem_o *)&static_fields->__9__17_1;
      goto LABEL_20;
    case 2:
      v10 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__;
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
      v20 = (Il2CppObject *)v8->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v20, Method_FieldMotionManager___c__GetTransform_b__17_3__, 0);
      v17 = (int)_9__17_1;
      v21 = FieldMotionManager___c_TypeInfo->static_fields;
      v21->__9__17_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (CGThumbnailListItem_o *)&v21->__9__17_3;
LABEL_20:
      sub_1C3E508(p__9__17_1, v17, v15, v16);
LABEL_21:
      if ( !this )
        goto LABEL_22;
      goto LABEL_26;
    case 4:
      v10 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__;
      goto LABEL_25;
    case 5:
      v10 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__;
LABEL_25:
      _9__17_1 = v10;
      System_Func_object__object____ctor(v10, (Il2CppObject *)v7, *v11, 0);
LABEL_26:
      result = (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                            this,
                                            (System_Func_BattleFieldMotionComponent__T__o *)_9__17_1,
                                            (const MethodInfo_314E0D4 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  if ( (byte_4C5A54B & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A54B = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C3E7C0(this, method);
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
        sub_1C3E7C8(this, method);
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
  __int64 v6; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  System_String_o *v8; // x20
  unsigned int v9; // w9
  __int64 v10; // x24
  UnityEngine_Object_o *v11; // x22
  struct BattleFieldMotionComponent_array *v12; // x8
  struct BattleFieldMotionComponent_array *v13; // x8
  System_String_o *v14; // x19
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  __int64 v17; // x0
  UnityEngine_UnityException_o *v18; // x20
  __int64 v19; // x0

  if ( (byte_4C5A552 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A552 = 1;
  }
  MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__GetMotionName(nowAction, 0);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_15;
  v8 = (System_String_o *)MotionName;
  v9 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( (v9 & 0x80000000) != 0 )
  {
LABEL_21:
    v14 = (System_String_o *)sub_1C3E578(&StringLiteral_284/*" not found "*/);
    v15 = (System_String_o *)sub_1C3E578(&StringLiteral_257/*" in fieldFsm "*/);
    v16 = System_String__Concat_63674716(v14, v8, v15, 0);
    v17 = sub_1C3E578(&UnityEngine_UnityException_TypeInfo);
    v18 = (UnityEngine_UnityException_o *)sub_1C3E7B0(v17);
    UnityEngine_UnityException___ctor_71335588(v18, v16, 0);
    v19 = sub_1C3E578(&Method_FieldMotionManager_PlayBattleAction__);
    sub_1C3E68C(v18, v19);
  }
  while ( 1 )
  {
    if ( v9 >= LODWORD(fieldMotionArray->max_length) )
      goto LABEL_20;
    v10 = v9;
    v11 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    MotionName = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
    if ( ((unsigned __int8)MotionName & 1) != 0 )
    {
      v12 = this->fields.fieldMotionArray;
      if ( !v12 )
        goto LABEL_15;
      if ( (unsigned int)v10 >= LODWORD(v12->max_length) )
        goto LABEL_20;
      MotionName = v12->m_Items[v10];
      if ( !MotionName )
        goto LABEL_15;
      MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__checkMotionEvent(MotionName, v8, 0);
      if ( ((unsigned __int8)MotionName & 1) != 0 )
        break;
    }
    v9 = v10 - 1;
    if ( (int)v10 - 1 < 0 )
      goto LABEL_21;
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_15;
  }
  v13 = this->fields.fieldMotionArray;
  if ( !v13 )
    goto LABEL_15;
  if ( (unsigned int)v10 >= LODWORD(v13->max_length) )
LABEL_20:
    sub_1C3E7C8(MotionName, v6);
  MotionName = v13->m_Items[v10];
  if ( !MotionName )
LABEL_15:
    sub_1C3E7C0(MotionName, v6);
  BattleFieldMotionComponent__playBattleActionData(MotionName, nowAction, v8, 0);
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
    sub_1C3E7C0(this, method);
  v6 = 1;
  v7 = 40;
  while ( 1 )
  {
    max_length_low = LODWORD(fieldMotionArray->max_length);
    if ( v6 >= (int)max_length_low )
      break;
    if ( v6 >= max_length_low )
      sub_1C3E7C8(this, method);
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v7) = 0;
    sub_1C3E508((CGThumbnailListItem_o *)((char *)fieldMotionArray + v7), 0, v2, v3);
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
  if ( (byte_4C5A553 & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_PlayMakerFSM___);
    this = (FieldMotionManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A553 = 1;
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
          (const MethodInfo_3046360 *)Method_ActionExtensions_Call_PlayMakerFSM___),
        (v15 = v6->fields.fieldMotionArray) == 0) )
  {
LABEL_24:
    sub_1C3E7C0(this, str);
  }
  if ( (unsigned int)v9 >= LODWORD(v15->max_length) )
LABEL_25:
    sub_1C3E7C8(this, str);
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
  if ( (byte_4C5A554 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A554 = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C3E7C0(this, str);
  v6 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      if ( v6 >= LODWORD(fieldMotionArray->max_length) )
LABEL_18:
        sub_1C3E7C8(this, str);
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
  __int64 v8; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v10; // w9
  System_String_o *v11; // x21
  __int64 v12; // x24
  UnityEngine_Object_o *v13; // x22
  struct BattleFieldMotionComponent_array *v14; // x8
  struct BattleFieldMotionComponent_array *v15; // x8

  if ( (byte_4C5A555 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A555 = 1;
  }
  if ( nowAction )
  {
    MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__GetMotionName(nowAction, 0);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_17;
    v10 = LODWORD(fieldMotionArray->max_length) - 1;
    if ( (v10 & 0x80000000) == 0 )
    {
      v11 = (System_String_o *)MotionName;
      while ( 1 )
      {
        if ( v10 >= LODWORD(fieldMotionArray->max_length) )
          goto LABEL_23;
        v12 = v10;
        v13 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v10];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        MotionName = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
        if ( ((unsigned __int8)MotionName & 1) != 0 )
        {
          v14 = this->fields.fieldMotionArray;
          if ( !v14 )
            goto LABEL_17;
          if ( (unsigned int)v12 >= LODWORD(v14->max_length) )
            goto LABEL_23;
          MotionName = v14->m_Items[v12];
          if ( !MotionName )
            goto LABEL_17;
          MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__checkMotionEvent(MotionName, v11, 0);
          if ( ((unsigned __int8)MotionName & 1) != 0 )
            break;
        }
        v10 = v12 - 1;
        if ( (int)v12 - 1 < 0 )
          return;
        fieldMotionArray = this->fields.fieldMotionArray;
        if ( !fieldMotionArray )
          goto LABEL_17;
      }
      v15 = this->fields.fieldMotionArray;
      if ( v15 )
      {
        if ( (unsigned int)v12 >= LODWORD(v15->max_length) )
LABEL_23:
          sub_1C3E7C8(MotionName, v8);
        MotionName = v15->m_Items[v12];
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion(MotionName, active, 0);
          return;
        }
      }
LABEL_17:
      sub_1C3E7C0(MotionName, v8);
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
  if ( (byte_4C5A547 & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_1C3E564(&Method_System_Array_Empty_int___);
    byte_4C5A547 = 1;
    if ( klass )
    {
LABEL_3:
      if ( v6 )
        goto LABEL_4;
LABEL_15:
      sub_1C3E7C0(this, motionIds);
    }
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  this = *(FieldMotionManager_o **)(v7[7] + 16LL);
  if ( (BYTE5(this[7].fields.retentionFieldMotionArray) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_1C8EC78(inited);
  klass = (struct System_Int32_array *)this[4].fields.retentionFieldMotionArray->obj.klass;
  if ( !v6 )
    goto LABEL_15;
LABEL_4:
  v6->fields.baseMotionIds = klass;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.baseMotionIds, (int32_t)klass, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void FieldMotionManager__SetTacticBg(FieldMotionManager_o *this, bool flg, const MethodInfo *method)
{
  FieldMotionManager___c_c *v5; // x0
  System_Func_object__object__o *_9__13_0; // x21
  Il2CppObject *v7; // x22
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *LastNotNullObject_object; // x20

  if ( (byte_4C5A54C & 1) == 0 )
  {
    sub_1C3E564(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C3E564(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_FieldMotionManager___c__SetTacticBg_b__13_0__);
    sub_1C3E564(&FieldMotionManager___c_TypeInfo);
    byte_4C5A54C = 1;
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
    _9__13_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__13_0, v7, Method_FieldMotionManager___c__SetTacticBg_b__13_0__, 0);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__13_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v9, v10);
  }
  if ( !this )
    goto LABEL_16;
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__13_0,
                               (const MethodInfo_314E0D4 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
    sub_1C3E7C0(v5, flg);
  }
}


void FieldMotionManager__SetVariables___Il2CppFullySharedGenericType_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
        const MethodInfo_314F0DC *method)
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
  __int64 v18; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v20; // x25
  unsigned __int64 i; // x23
  UnityEngine_Object_o *v22; // x26
  intptr_t v23; // x27
  System_RuntimeTypeHandle_o v24; // x0
  System_Type_o *TypeFromHandle; // x27
  System_RuntimeTypeHandle_o v26; // x0
  System_Type_o *v27; // x0
  __int64 v28; // x27
  PlayMakerFSM_o *v29; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **p_klass; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  System_String_c **v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_String_c **v40; // x1
  intptr_t v41; // x27
  System_RuntimeTypeHandle_o v42; // x0
  System_Type_o *v43; // x27
  System_RuntimeTypeHandle_o v44; // x0
  System_Type_o *v45; // x0
  __int64 v46; // x27
  HutongGames_PlayMaker_FsmGameObject_o *v47; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  UnityEngine_GameObject_c **v55; // x0
  UnityEngine_GameObject_o *v56; // x1
  intptr_t v57; // x27
  System_RuntimeTypeHandle_o v58; // x0
  System_Type_o *v59; // x27
  System_RuntimeTypeHandle_o v60; // x0
  System_Type_o *v61; // x0
  long double v62; // q0
  __int64 v63; // x9
  PlayMakerFSM_o *v64; // x26
  __int64 v65; // x8
  __int64 v66; // x0
  intptr_t v67; // x27
  System_RuntimeTypeHandle_o v68; // x0
  System_Type_o *v69; // x27
  System_RuntimeTypeHandle_o v70; // x0
  System_Type_o *v71; // x0
  long double v72; // q0
  __int64 v73; // x9
  PlayMakerFSM_o *v74; // x26
  __int64 v75; // x8
  __int64 v76; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v77; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v78; // x3
  System_String_o *v79; // x27
  __int64 v80; // [xsp+0h] [xbp-40h] BYREF
  char *v81; // [xsp+8h] [xbp-38h]
  char *v82; // [xsp+10h] [xbp-30h]
  unsigned __int64 v83; // [xsp+18h] [xbp-28h]
  size_t v84; // [xsp+20h] [xbp-20h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+28h] [xbp-18h] BYREF
  System_String_o *v86; // [xsp+30h] [xbp-10h]
  __int64 v87; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = value.monitor;
  v87 = *(_QWORD *)(StatusReg + 40);
  klass = value.klass;
  v9 = *((_QWORD *)value.monitor + 7);
  if ( !v9 )
  {
    sub_1C3E564(&bool_var);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_GameObject_var);
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&int_var);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&string_var);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    v9 = *((_QWORD *)monitor + 7);
    if ( !v9 )
    {
      sub_1C8ECD4();
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
    v13 = sub_1C8EC78(v4);
    v10 = *(_QWORD *)(*((_QWORD *)monitor + 7) + 8LL);
    v14 = *(_DWORD *)(v13 + 252);
    v11 = *(_WORD *)(v10 + 309);
  }
  v82 = (char *)&v80 - (((unsigned int)(v14 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v83 = StatusReg;
  if ( (v11 & 1) == 0 )
    v10 = sub_1C8EC78(v4);
  v81 = (char *)&v80 - (((unsigned int)(*(_DWORD *)(v10 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  v15 = (char *)&v80 - ((v12 + 15) & 0x1FFFFFFF0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v16
    || (v84 = v12,
        System_Collections_Generic_List_object___AddRange(
          v16,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v16,
                                   (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_85:
    sub_1C3E7C0(Fsm, v18);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v20 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C3E7C8(Fsm, v18);
      v22 = (UnityEngine_Object_o *)*((_QWORD *)&v20->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v22, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        v23 = **((_QWORD **)monitor + 7);
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v24.fields.value = v23;
        TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0);
        v26.fields.value = (intptr_t)string_var;
        v27 = System_Type__GetTypeFromHandle(v26, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v27, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_85;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v22, 0);
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
            v28 = *((_QWORD *)monitor + 7);
            v29 = Fsm;
            if ( *(int *)(*(_QWORD *)(v28 + 8) + 40LL) >= 0 )
              p_klass = &klass;
            else
              p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
            memcpy(v15, p_klass, v84);
            v37 = (System_String_c **)j_il2cpp_value_box_0(*(_QWORD *)(v28 + 8), v15, v31, v32, v33, v34, v35, v36);
            if ( v37 )
            {
              if ( *v37 == string_TypeInfo )
                v40 = v37;
              else
                v40 = 0;
            }
            else
            {
              v40 = 0;
            }
            v29->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v40;
            sub_1C3E508((CGThumbnailListItem_o *)&v29->fields.addEventHandlers, (int32_t)v40, v38, v39);
          }
        }
        else
        {
          v41 = **((_QWORD **)monitor + 7);
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v42.fields.value = v41;
          v43 = System_Type__GetTypeFromHandle(v42, 0);
          v44.fields.value = (intptr_t)UnityEngine_GameObject_var;
          v45 = System_Type__GetTypeFromHandle(v44, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v43, v45, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_85;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v22, 0);
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
              v46 = *((_QWORD *)monitor + 7);
              v47 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              if ( *(int *)(*(_QWORD *)(v46 + 8) + 40LL) >= 0 )
                v48 = &klass;
              else
                v48 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
              memcpy(v15, v48, v84);
              v55 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(
                                                   *(_QWORD *)(v46 + 8),
                                                   v15,
                                                   v49,
                                                   v50,
                                                   v51,
                                                   v52,
                                                   v53,
                                                   v54);
              if ( v55 )
              {
                if ( *v55 == UnityEngine_GameObject_TypeInfo )
                  v56 = (UnityEngine_GameObject_o *)v55;
                else
                  v56 = 0;
              }
              else
              {
                v56 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v47, v56, 0);
            }
          }
          else
          {
            v57 = **((_QWORD **)monitor + 7);
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v58.fields.value = v57;
            v59 = System_Type__GetTypeFromHandle(v58, 0);
            v60.fields.value = (intptr_t)int_var;
            v61 = System_Type__GetTypeFromHandle(v60, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v59, v61, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_85;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v22, 0);
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
                v63 = *((_QWORD *)monitor + 7);
                v64 = Fsm;
                v65 = *(_QWORD *)(v63 + 8);
                if ( (*(_BYTE *)(v65 + 309) & 1) != 0 )
                {
                  v66 = *(_QWORD *)(v63 + 8);
                }
                else
                {
                  LODWORD(v66) = sub_1C8EC78(v62);
                  v63 = *((_QWORD *)monitor + 7);
                  v65 = *(_QWORD *)(v63 + 8);
                }
                if ( *(int *)(v65 + 40) >= 0 )
                  v77 = &klass;
                else
                  v77 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                sub_1C3EFCC(v66, *(_QWORD *)(v63 + 16), (int)v82, v77);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v86, 0);
                LODWORD(v64->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v67 = **((_QWORD **)monitor + 7);
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v68.fields.value = v67;
              v69 = System_Type__GetTypeFromHandle(v68, 0);
              v70.fields.value = (intptr_t)bool_var;
              v71 = System_Type__GetTypeFromHandle(v70, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v69, v71, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v22 )
                  goto LABEL_85;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v22, 0);
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
                  v73 = *((_QWORD *)monitor + 7);
                  v74 = Fsm;
                  v75 = *(_QWORD *)(v73 + 8);
                  if ( (*(_BYTE *)(v75 + 309) & 1) != 0 )
                  {
                    v76 = *(_QWORD *)(v73 + 8);
                  }
                  else
                  {
                    LODWORD(v76) = sub_1C8EC78(v72);
                    v73 = *((_QWORD *)monitor + 7);
                    v75 = *(_QWORD *)(v73 + 8);
                  }
                  if ( *(int *)(v75 + 40) >= 0 )
                    v78 = &klass;
                  else
                    v78 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                  sub_1C3EFCC(v76, *(_QWORD *)(v73 + 16), (int)v81, v78);
                  v79 = v86;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v79, 0);
                  LOBYTE(v74->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v20->fields.m_CancellationTokenSource;
    }
  }
}


void FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_314E1F4 *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v9; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v11; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v13; // x22
  Il2CppType *_0_T; // x23
  System_RuntimeTypeHandle_o v15; // x0
  System_Type_o *TypeFromHandle; // x23
  System_RuntimeTypeHandle_o v17; // x0
  System_Type_o *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  PlayMakerFSM_o *v25; // x22
  System_String_c **v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_c **v29; // x1
  Il2CppType *v30; // x23
  System_RuntimeTypeHandle_o v31; // x0
  System_Type_o *v32; // x23
  System_RuntimeTypeHandle_o v33; // x0
  System_Type_o *v34; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  HutongGames_PlayMaker_FsmGameObject_o *v41; // x22
  UnityEngine_GameObject_c **v42; // x0
  UnityEngine_GameObject_o *v43; // x1
  Il2CppType *v44; // x23
  System_RuntimeTypeHandle_o v45; // x0
  System_Type_o *v46; // x23
  System_RuntimeTypeHandle_o v47; // x0
  System_Type_o *v48; // x0
  PlayMakerFSM_o *v49; // x22
  System_String_o *v50; // x0
  Il2CppType *v51; // x23
  System_RuntimeTypeHandle_o v52; // x0
  System_Type_o *v53; // x23
  System_RuntimeTypeHandle_o v54; // x0
  System_Type_o *v55; // x0
  PlayMakerFSM_o *v56; // x22
  System_String_o *v57; // x0
  _BYTE v58[4]; // [xsp+4h] [xbp-6Ch] BYREF
  _BYTE v59[4]; // [xsp+8h] [xbp-68h] BYREF
  _BYTE v60[4]; // [xsp+Ch] [xbp-64h] BYREF

  v60[0] = value;
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&bool_var);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_GameObject_var);
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&int_var);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&string_var);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_64:
    sub_1C3E7C0(Fsm, v9);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v11 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C3E7C8(Fsm, v9);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v15.fields.value = (intptr_t)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0);
        v17.fields.value = (intptr_t)string_var;
        v18 = System_Type__GetTypeFromHandle(v17, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v18, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
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
            v25 = Fsm;
            v59[0] = v60[0];
            v26 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v59, v19, v20, v21, v22, v23, v24);
            if ( v26 )
            {
              if ( *v26 == string_TypeInfo )
                v29 = v26;
              else
                v29 = 0;
            }
            else
            {
              v29 = 0;
            }
            v25->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v29;
            sub_1C3E508((CGThumbnailListItem_o *)&v25->fields.addEventHandlers, (int32_t)v29, v27, v28);
          }
        }
        else
        {
          v30 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v31.fields.value = (intptr_t)v30;
          v32 = System_Type__GetTypeFromHandle(v31, 0);
          v33.fields.value = (intptr_t)UnityEngine_GameObject_var;
          v34 = System_Type__GetTypeFromHandle(v33, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v32, v34, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
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
              v41 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v58[0] = v60[0];
              v42 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(
                                                   method->rgctx_data->_1_T,
                                                   v58,
                                                   v35,
                                                   v36,
                                                   v37,
                                                   v38,
                                                   v39,
                                                   v40);
              if ( v42 )
              {
                if ( *v42 == UnityEngine_GameObject_TypeInfo )
                  v43 = (UnityEngine_GameObject_o *)v42;
                else
                  v43 = 0;
              }
              else
              {
                v43 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v41, v43, 0);
            }
          }
          else
          {
            v44 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v45.fields.value = (intptr_t)v44;
            v46 = System_Type__GetTypeFromHandle(v45, 0);
            v47.fields.value = (intptr_t)int_var;
            v48 = System_Type__GetTypeFromHandle(v47, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v46, v48, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
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
                v49 = Fsm;
                if ( !bool_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                v50 = System_Boolean__ToString((bool)v60, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v50, 0);
                LODWORD(v49->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v51 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v52.fields.value = (intptr_t)v51;
              v53 = System_Type__GetTypeFromHandle(v52, 0);
              v54.fields.value = (intptr_t)bool_var;
              v55 = System_Type__GetTypeFromHandle(v54, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v53, v55, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
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
                  v56 = Fsm;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  v57 = System_Boolean__ToString((bool)v60, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v57, 0);
                  LOBYTE(v56->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
    }
  }
}


void FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_314E70C *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v9; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v11; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v13; // x22
  Il2CppType *_0_T; // x23
  System_RuntimeTypeHandle_o v15; // x0
  System_Type_o *TypeFromHandle; // x23
  System_RuntimeTypeHandle_o v17; // x0
  System_Type_o *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  PlayMakerFSM_o *v25; // x22
  System_String_c **v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_c **v29; // x1
  Il2CppType *v30; // x23
  System_RuntimeTypeHandle_o v31; // x0
  System_Type_o *v32; // x23
  System_RuntimeTypeHandle_o v33; // x0
  System_Type_o *v34; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  HutongGames_PlayMaker_FsmGameObject_o *v41; // x22
  UnityEngine_GameObject_c **v42; // x0
  UnityEngine_GameObject_o *v43; // x1
  Il2CppType *v44; // x23
  System_RuntimeTypeHandle_o v45; // x0
  System_Type_o *v46; // x23
  System_RuntimeTypeHandle_o v47; // x0
  System_Type_o *v48; // x0
  PlayMakerFSM_o *v49; // x22
  System_String_o *v50; // x0
  Il2CppType *v51; // x23
  System_RuntimeTypeHandle_o v52; // x0
  System_Type_o *v53; // x23
  System_RuntimeTypeHandle_o v54; // x0
  System_Type_o *v55; // x0
  PlayMakerFSM_o *v56; // x22
  System_String_o *v57; // x23
  int32_t v58; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v59; // [xsp+8h] [xbp-68h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-64h] BYREF

  v60 = value;
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&bool_var);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_GameObject_var);
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&int_var);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&string_var);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_62:
    sub_1C3E7C0(Fsm, v9);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v11 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C3E7C8(Fsm, v9);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v15.fields.value = (intptr_t)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0);
        v17.fields.value = (intptr_t)string_var;
        v18 = System_Type__GetTypeFromHandle(v17, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v18, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_62;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
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
            v25 = Fsm;
            v59 = v60;
            v26 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v59, v19, v20, v21, v22, v23, v24);
            if ( v26 )
            {
              if ( *v26 == string_TypeInfo )
                v29 = v26;
              else
                v29 = 0;
            }
            else
            {
              v29 = 0;
            }
            v25->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v29;
            sub_1C3E508((CGThumbnailListItem_o *)&v25->fields.addEventHandlers, (int32_t)v29, v27, v28);
          }
        }
        else
        {
          v30 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v31.fields.value = (intptr_t)v30;
          v32 = System_Type__GetTypeFromHandle(v31, 0);
          v33.fields.value = (intptr_t)UnityEngine_GameObject_var;
          v34 = System_Type__GetTypeFromHandle(v33, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v32, v34, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_62;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
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
              v41 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v58 = v60;
              v42 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(
                                                   method->rgctx_data->_1_T,
                                                   &v58,
                                                   v35,
                                                   v36,
                                                   v37,
                                                   v38,
                                                   v39,
                                                   v40);
              if ( v42 )
              {
                if ( *v42 == UnityEngine_GameObject_TypeInfo )
                  v43 = (UnityEngine_GameObject_o *)v42;
                else
                  v43 = 0;
              }
              else
              {
                v43 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v41, v43, 0);
            }
          }
          else
          {
            v44 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v45.fields.value = (intptr_t)v44;
            v46 = System_Type__GetTypeFromHandle(v45, 0);
            v47.fields.value = (intptr_t)int_var;
            v48 = System_Type__GetTypeFromHandle(v47, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v46, v48, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_62;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
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
                v49 = Fsm;
                v50 = System_Int32__ToString((int32_t)&v60, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v50, 0);
                LODWORD(v49->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v51 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v52.fields.value = (intptr_t)v51;
              v53 = System_Type__GetTypeFromHandle(v52, 0);
              v54.fields.value = (intptr_t)bool_var;
              v55 = System_Type__GetTypeFromHandle(v54, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v53, v55, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_62;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0);
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
                  v56 = Fsm;
                  v57 = System_Int32__ToString((int32_t)&v60, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v57, 0);
                  LOBYTE(v56->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
    }
  }
}


void FieldMotionManager__SetVariables_object_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Il2CppObject *value,
        const MethodInfo_314EC14 *method)
{
  System_Collections_Generic_List_object__o *v8; // x23
  void *Fsm; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  _QWORD *v12; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v14; // x23
  Il2CppType *_0_T; // x24
  System_RuntimeTypeHandle_o v16; // x0
  System_Type_o *TypeFromHandle; // x24
  System_RuntimeTypeHandle_o v18; // x0
  System_Type_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x1
  Il2CppType *v23; // x24
  System_RuntimeTypeHandle_o v24; // x0
  System_Type_o *v25; // x24
  System_RuntimeTypeHandle_o v26; // x0
  System_Type_o *v27; // x0
  Il2CppObject *v28; // x1
  Il2CppType *v29; // x24
  System_RuntimeTypeHandle_o v30; // x0
  System_Type_o *v31; // x24
  System_RuntimeTypeHandle_o v32; // x0
  System_Type_o *v33; // x0
  _DWORD *v34; // x23
  System_String_o *v35; // x0
  Il2CppType *v36; // x24
  System_RuntimeTypeHandle_o v37; // x0
  System_Type_o *v38; // x24
  System_RuntimeTypeHandle_o v39; // x0
  System_Type_o *v40; // x0
  _BYTE *v41; // x23
  System_String_o *v42; // x24

  if ( !method->rgctx_data )
  {
    sub_1C3E564(&bool_var);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_GameObject_var);
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&int_var);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&string_var);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_object___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = System_Collections_Generic_List_object___ToArray(
                 v8,
                 (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_64:
    sub_1C3E7C0(Fsm, v10);
  }
  v11 = *((_QWORD *)Fsm + 3);
  v12 = Fsm;
  if ( (int)v11 >= 1 )
  {
    for ( i = 0; (__int64)i < (int)v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        sub_1C3E7C8(Fsm, v10);
      v14 = (UnityEngine_Object_o *)v12[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (void *)UnityEngine_Object__op_Equality(v14, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v16.fields.value = (intptr_t)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0);
        v18.fields.value = (intptr_t)string_var;
        v19 = System_Type__GetTypeFromHandle(v18, 0);
        Fsm = (void *)System_Type__op_Equality(TypeFromHandle, v19, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
                v22 = value;
              else
                v22 = 0;
            }
            else
            {
              v22 = 0;
            }
            *((_QWORD *)Fsm + 7) = v22;
            sub_1C3E508((CGThumbnailListItem_o *)((char *)Fsm + 56), (int32_t)v22, v20, v21);
          }
        }
        else
        {
          v23 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v24.fields.value = (intptr_t)v23;
          v25 = System_Type__GetTypeFromHandle(v24, 0);
          v26.fields.value = (intptr_t)UnityEngine_GameObject_var;
          v27 = System_Type__GetTypeFromHandle(v26, 0);
          Fsm = (void *)System_Type__op_Equality(v25, v27, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
                  v28 = value;
                else
                  v28 = 0;
              }
              else
              {
                v28 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                (UnityEngine_GameObject_o *)v28,
                0);
            }
          }
          else
          {
            v29 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v30.fields.value = (intptr_t)v29;
            v31 = System_Type__GetTypeFromHandle(v30, 0);
            v32.fields.value = (intptr_t)int_var;
            v33 = System_Type__GetTypeFromHandle(v32, 0);
            Fsm = (void *)System_Type__op_Equality(v31, v33, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v14 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
                v34 = Fsm;
                v35 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                           value,
                                           value->klass->vtable[3].method);
                Fsm = (void *)System_Int32__Parse(v35, 0);
                v34[14] = (_DWORD)Fsm;
              }
            }
            else
            {
              v36 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v37.fields.value = (intptr_t)v36;
              v38 = System_Type__GetTypeFromHandle(v37, 0);
              v39.fields.value = (intptr_t)bool_var;
              v40 = System_Type__GetTypeFromHandle(v39, 0);
              Fsm = (void *)System_Type__op_Equality(v38, v40, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
                  v41 = Fsm;
                  v42 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                             value,
                                             value->klass->vtable[3].method);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (void *)System_Boolean__Parse(v42, 0);
                  v41[56] = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(v11) = *((_DWORD *)v12 + 6);
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
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x19
  unsigned __int64 i; // x28
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  __int64 v33; // x1
  int *fieldMotionArray; // x29
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x22
  System_Func_object__bool__o *v36; // x23
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x21
  int *v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0

  if ( (byte_4C5A549 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleDataDefine_FieldMotionPath__);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C3E564(&System_Func_int__string__TypeInfo);
    sub_1C3E564(&System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__);
    sub_1C3E564(&FieldMotionManager___c__DisplayClass8_0_TypeInfo);
    byte_4C5A549 = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v7);
  v9 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v9, 0, Method_BattleDataDefine_FieldMotionPath__, 0);
  v10 = System_Linq_Enumerable__Select_int__object_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v9,
          (const MethodInfo_312D55C *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v10 )
    sub_1C3E7C0(0, v11);
  klass = v10->klass;
  v13 = v10;
  v14 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    v16 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v16 = sub_1C8ED7C(v10, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v16)(
          v13,
          *(_QWORD *)(v16 + 8));
  if ( !v18 )
    sub_1C3E7C0(0, v17);
  for ( i = 1; ; ++i )
  {
    v20 = *(_QWORD *)v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_16:
      v23 = sub_1C8ED7C(v18, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v18, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = sub_1C3E7B0(FieldMotionManager___c__DisplayClass8_0_TypeInfo);
    FieldMotionManager___c__DisplayClass8_0___ctor((FieldMotionManager___c__DisplayClass8_0_o *)v24, 0);
    v25 = *(_QWORD *)v18;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v27 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_23;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_23:
      v28 = sub_1C8ED7C(v18, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v18, *(_QWORD *)(v28 + 8));
    if ( !v24 )
      sub_1C3E7C0(v29, v29);
    *(_QWORD *)(v24 + 16) = v29;
    sub_1C3E508((CGThumbnailListItem_o *)(v24 + 16), v29, v30, v31);
    fieldMotionArray = (int *)this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_1C3E7C0(v32, v33);
    if ( (__int64)i >= fieldMotionArray[6] )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v36 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v36,
      (Il2CppObject *)v24,
      Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__,
      0);
    v37 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v36,
            (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v41 = v37;
    if ( v37 )
    {
      v37 = (Il2CppObject *)sub_1C3E6A0(v37, *(_QWORD *)(*(_QWORD *)fieldMotionArray + 64LL));
      if ( !v37 )
      {
        v47 = sub_1C3E7E4(0);
        sub_1C3E68C(v47, 0);
      }
    }
    if ( i >= (unsigned int)fieldMotionArray[6] )
      sub_1C3E7C8(v37, v38);
    v42 = &fieldMotionArray[2 * i];
    *((_QWORD *)v42 + 4) = v41;
    sub_1C3E508((CGThumbnailListItem_o *)(v42 + 8), (int32_t)v41, v39, v40);
  }
  v43 = *(_QWORD *)v18;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_36;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_36:
    v46 = sub_1C8ED7C(v18, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v18, *(_QWORD *)(v46 + 8));
}


void FieldMotionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5A556 & 1) == 0 )
  {
    sub_1C3E564(&FieldMotionManager___c_TypeInfo);
    byte_4C5A556 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(FieldMotionManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FieldMotionManager___c_TypeInfo->static_fields->__9 = (struct FieldMotionManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)FieldMotionManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *FieldMotionManager___c___GetPlayerStage_b__14_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C3E7C0(this, 0);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *FieldMotionManager___c___GetTransform_b__17_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C3E7C0(this, 0);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *FieldMotionManager___c___GetTransform_b__17_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C3E7C0(this, 0);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *FieldMotionManager___c___SetTacticBg_b__13_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass17_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C3E7C0(this, 0);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass17_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C3E7C0(this, 0);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass17_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
  __int64 v6; // x1

  if ( (byte_4C5A557 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A557 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_1C3E7C0(v5, v6);
  return BasicHelper__EqualExceptNullOrEmpty(x->fields._AssetName_k__BackingField, this->fields.targetName, 0);
}