void FieldMotionManager___ctor(
        FieldMotionManager_o *this,
        BattleFieldMotionComponent_array *fieldMotions,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  struct System_Int32_array **v16; // x8
  struct System_Int32_array *v17; // x1
  FieldMotionManager_Fields *p_fields; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  BattleFieldMotionComponent_o *v25; // x0
  __int64 v26; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v28; // x26
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v30; // x27
  UnityEngine_Object_o *v31; // x23
  struct BattleFieldMotionComponent_array *v32; // x8
  System_Object_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  if ( (byte_4D342A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342A7 = 1;
  }
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C69B68(inited);
  v16 = *(struct System_Int32_array ***)(v15 + 184);
  v17 = *v16;
  this->fields.baseMotionIds = *v16;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseMotionIds,
    (int32_t)v17,
    (int32_t)perf,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)fieldMotions, v19, v20, v21, v22, v23, v24);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_23:
    sub_1C93D2C(v25, v26);
  v28 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(fieldMotionArray->max_length);
    v30 = v28 - 4;
    if ( v28 - 4 >= (int)max_length_low )
      break;
    if ( v30 >= max_length_low )
      goto LABEL_25;
    v31 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v28);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v31, 0, 0);
    if ( ((unsigned __int8)v25 & 1) != 0 )
    {
      v32 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_23;
      if ( v30 >= LODWORD(v32->max_length) )
LABEL_25:
        sub_1C93D34(v25);
      v25 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v32->obj.klass + v28);
      if ( !v25 )
        goto LABEL_23;
      BattleFieldMotionComponent__setPerf(v25, perf, 0);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v28;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_23;
  }
  v33 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotions,
          (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = (struct BattleFieldMotionComponent_array *)v33;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.retentionFieldMotionArray,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


Il2CppObject *FieldMotionManager__FindLastNotNullObject_object_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_31F908C *method)
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
    this = (FieldMotionManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (FieldMotionManager_o *)sub_1C69BC4();
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_18:
    sub_1C93D2C(this, getObjectFunc);
  v7 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( (v7 & 0x80000000) != 0 )
    return 0;
  while ( 1 )
  {
    if ( v7 >= LODWORD(fieldMotionArray->max_length) )
LABEL_21:
      sub_1C93D34(this);
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
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteMotionIds_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  long double inited; // q0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CurWaveEnemyDeckMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
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

  if ( (byte_4D342A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D342A9 = 1;
  }
  OverwriteMotionIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._OverwriteMotionIds_k__BackingField;
  if ( OverwriteMotionIds_k__BackingField )
    goto LABEL_4;
  if ( !stageEnt )
    goto LABEL_56;
  if ( !StageEntity__IsDisableFieldMotion(stageEnt, 0) )
  {
    OverwriteMotionIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)StageEntity__GetWaveFieldMotionIds(
                                                                                                stageEnt,
                                                                                                0,
                                                                                                0);
    if ( OverwriteMotionIds_k__BackingField )
    {
LABEL_4:
      v8 = System_Linq_Enumerable__Reverse_int_(
             OverwriteMotionIds_k__BackingField,
             (const MethodInfo_31D48F8 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v8,
               (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseMotionIds,
                                                           (const MethodInfo_31D48F8 *)Method_System_Linq_Enumerable_Reverse_int___);
    v16 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_59097676(
      v16,
      v15,
      (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0);
      OverwriteMotionIds_k__BackingField = System_Linq_Enumerable__Reverse_int_(
                                             CurWaveEnemyDeckMotionIds,
                                             (const MethodInfo_31D48F8 *)Method_System_Linq_Enumerable_Reverse_int___);
      if ( OverwriteMotionIds_k__BackingField )
      {
        klass = OverwriteMotionIds_k__BackingField->klass;
        v19 = OverwriteMotionIds_k__BackingField;
        v20 = *(unsigned __int16 *)&OverwriteMotionIds_k__BackingField->klass->_2.rank;
        if ( *(_WORD *)&OverwriteMotionIds_k__BackingField->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
          {
            --v20;
            p_offset += 4;
            if ( !v20 )
              goto LABEL_23;
          }
          v22 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_23:
          v22 = sub_1C69E5C(OverwriteMotionIds_k__BackingField, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
        }
        v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v22)(
                v19,
                *(_QWORD *)(v22 + 8));
        if ( !v24 )
          sub_1C93D2C(0, v23);
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
                goto LABEL_30;
            }
            v28 = v25 + 16LL * *v27 + 312;
          }
          else
          {
LABEL_30:
            v28 = sub_1C69E5C(v24, System_Collections_IEnumerator_TypeInfo, 0);
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
                goto LABEL_37;
            }
            v32 = v29 + 16LL * *v31 + 312;
          }
          else
          {
LABEL_37:
            v32 = sub_1C69E5C(v24, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
          }
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
          if ( !v16 )
            sub_1C93D2C(v33, v34);
          v35 = v33;
          v36 = System_Collections_Generic_List_int___Contains(
                  v16,
                  v33,
                  (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v36 )
            v36 = System_Collections_Generic_List_int___Remove(
                    v16,
                    v35,
                    (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
          items = v16->fields._items;
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1C93D2C(v36, v37);
          size = v16->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v35,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
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
              goto LABEL_50;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_50:
          v44 = sub_1C69E5C(v24, System_IDisposable_TypeInfo, 0);
        }
        OverwriteMotionIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(
                                                                                                    v24,
                                                                                                    *(_QWORD *)(v44 + 8));
        if ( v16 )
          return System_Collections_Generic_List_int___ToArray(
                   v16,
                   (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_56:
    sub_1C93D2C(OverwriteMotionIds_k__BackingField, stageEnt);
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C69B68(inited);
  return **(System_Int32_array ***)(v14 + 184);
}


UnityEngine_GameObject_o *FieldMotionManager__GetEnemyStage(FieldMotionManager_o *this, const MethodInfo *method)
{
  FieldMotionManager___c_c *v3; // x0
  System_Func_object__object__o *_9__21_0; // x20
  Il2CppObject *v5; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4D342AE & 1) == 0 )
  {
    sub_1C93AD4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C93AD4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_FieldMotionManager___c__GetEnemyStage_b__21_0__);
    sub_1C93AD4(&FieldMotionManager___c_TypeInfo);
    byte_4D342AE = 1;
  }
  v3 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v3 = FieldMotionManager___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__object__o *)v3->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = FieldMotionManager___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__21_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__21_0, v5, Method_FieldMotionManager___c__GetEnemyStage_b__21_0__, 0);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__21_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v7, v8, v9, v10, v11, v12);
  }
  if ( !this )
    sub_1C93D2C(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__21_0,
                               (const MethodInfo_31F908C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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


bool FieldMotionManager__GetFsmBoolValue(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool defaultValue,
        const MethodInfo *method)
{
  FieldMotionManager_o *v6; // x21
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  int v8; // w23
  UnityEngine_Object_o *v9; // x22

  v6 = this;
  if ( (byte_4D342AB & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342AB = 1;
  }
  fieldMotionArray = v6->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_16:
    sub_1C93D2C(this, variableName);
  v8 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( v8 < 0 )
    return defaultValue;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= LODWORD(fieldMotionArray->max_length) )
      sub_1C93D34(this);
    v9 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v9 )
        goto LABEL_16;
      this = (FieldMotionManager_o *)BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v9, 0);
      if ( !this )
        goto LABEL_16;
      this = (FieldMotionManager_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( !this )
        goto LABEL_16;
      this = (FieldMotionManager_o *)*((_QWORD *)this + 11);
      if ( !this )
        goto LABEL_16;
      this = (FieldMotionManager_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       variableName,
                                       0);
      if ( this )
        return HutongGames_PlayMaker_FsmBool__get_Value((HutongGames_PlayMaker_FsmBool_o *)this, 0);
    }
    if ( --v8 < 0 )
      return defaultValue;
    fieldMotionArray = v6->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_16;
  }
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Func_object__object__o *v14; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4D342AF & 1) == 0 )
  {
    sub_1C93AD4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C93AD4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_FieldMotionManager___c__DisplayClass22_0__GetGameObject_b__0__);
    sub_1C93AD4(&FieldMotionManager___c__DisplayClass22_0_TypeInfo);
    byte_4D342AF = 1;
  }
  v5 = sub_1C93D20(FieldMotionManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)name, v8, v9, v10, v11, v12, v13);
  v14 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
  System_Func_object__object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_FieldMotionManager___c__DisplayClass22_0__GetGameObject_b__0__,
    0);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v14,
                               (const MethodInfo_31F908C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  System_Func_object__object__o *_9__20_0; // x20
  Il2CppObject *v5; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4D342AD & 1) == 0 )
  {
    sub_1C93AD4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C93AD4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_FieldMotionManager___c__GetPlayerStage_b__20_0__);
    sub_1C93AD4(&FieldMotionManager___c_TypeInfo);
    byte_4D342AD = 1;
  }
  v3 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v3 = FieldMotionManager___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__object__o *)v3->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = FieldMotionManager___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__20_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__20_0, v5, Method_FieldMotionManager___c__GetPlayerStage_b__20_0__, 0);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__20_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v7, v8, v9, v10, v11, v12);
  }
  if ( !this )
    sub_1C93D2C(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__20_0,
                               (const MethodInfo_31F908C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Func_object__object__o *v10; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4D342B1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1C93AD4(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_FieldMotionManager___c__DisplayClass24_0__GetTargetTransform_b__0__);
    sub_1C93AD4(&FieldMotionManager___c__DisplayClass24_0_TypeInfo);
    byte_4D342B1 = 1;
  }
  v7 = sub_1C93D20(FieldMotionManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_DWORD *)(v7 + 16) = type;
  *(_DWORD *)(v7 + 20) = index;
  v10 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
  System_Func_object__object____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_FieldMotionManager___c__DisplayClass24_0__GetTargetTransform_b__0__,
    0);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v10,
                               (const MethodInfo_31F908C *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  __int64 v7; // x22
  FieldMotionManager___c_c *v8; // x0
  __int64 v9; // x1
  System_Func_object__object__o *v10; // x0
  intptr_t *v11; // x8
  UnityEngine_Transform_o *result; // x0
  System_Func_object__object__o *_9__23_1; // x20
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  GrandQuestFolderBoardItem_o *p__9__23_1; // x0
  Il2CppObject *v24; // x21
  struct FieldMotionManager___c_StaticFields *v25; // x0

  if ( (byte_4D342B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1C93AD4(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1C93AD4(&Method_FieldMotionManager___c__GetTransform_b__23_1__);
    sub_1C93AD4(&Method_FieldMotionManager___c__GetTransform_b__23_3__);
    sub_1C93AD4(&Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__0__);
    sub_1C93AD4(&Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__2__);
    sub_1C93AD4(&Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__4__);
    sub_1C93AD4(&Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__5__);
    sub_1C93AD4(&FieldMotionManager___c__DisplayClass23_0_TypeInfo);
    sub_1C93AD4(&FieldMotionManager___c_TypeInfo);
    byte_4D342B0 = 1;
  }
  v7 = sub_1C93D20(FieldMotionManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
LABEL_22:
    sub_1C93D2C(v8, v9);
  *(_DWORD *)(v7 + 16) = index;
  switch ( type )
  {
    case 0:
      v10 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__0__;
      goto LABEL_25;
    case 1:
      v8 = FieldMotionManager___c_TypeInfo;
      if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      _9__23_1 = (System_Func_object__object__o *)v8->static_fields->__9__23_1;
      if ( _9__23_1 )
        goto LABEL_21;
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v8->static_fields->__9;
      _9__23_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__23_1, v14, Method_FieldMotionManager___c__GetTransform_b__23_1__, 0);
      v21 = (int)_9__23_1;
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      static_fields->__9__23_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__23_1;
      p__9__23_1 = (GrandQuestFolderBoardItem_o *)&static_fields->__9__23_1;
      goto LABEL_20;
    case 2:
      v10 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__2__;
      goto LABEL_25;
    case 3:
      v8 = FieldMotionManager___c_TypeInfo;
      if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      _9__23_1 = (System_Func_object__object__o *)v8->static_fields->__9__23_3;
      if ( _9__23_1 )
        goto LABEL_21;
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v8->static_fields->__9;
      _9__23_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__23_1, v24, Method_FieldMotionManager___c__GetTransform_b__23_3__, 0);
      v21 = (int)_9__23_1;
      v25 = FieldMotionManager___c_TypeInfo->static_fields;
      v25->__9__23_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__23_1;
      p__9__23_1 = (GrandQuestFolderBoardItem_o *)&v25->__9__23_3;
LABEL_20:
      sub_1C93A78(p__9__23_1, v21, v15, v16, v17, v18, v19, v20);
LABEL_21:
      if ( !this )
        goto LABEL_22;
      goto LABEL_26;
    case 4:
      v10 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__4__;
      goto LABEL_25;
    case 5:
      v10 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__5__;
LABEL_25:
      _9__23_1 = v10;
      System_Func_object__object____ctor(v10, (Il2CppObject *)v7, *v11, 0);
LABEL_26:
      result = (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                            this,
                                            (System_Func_BattleFieldMotionComponent__T__o *)_9__23_1,
                                            (const MethodInfo_31F908C *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  if ( (byte_4D342AA & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342AA = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C93D2C(this, method);
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
        sub_1C93D34(this);
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

  if ( (byte_4D342B2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342B2 = 1;
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
    v14 = (System_String_o *)sub_1C93AE8(&StringLiteral_285/*" not found "*/);
    v15 = (System_String_o *)sub_1C93AE8(&StringLiteral_258/*" in fieldFsm "*/);
    v16 = System_String__Concat_64463988(v14, v8, v15, 0);
    v17 = sub_1C93AE8(&UnityEngine_UnityException_TypeInfo);
    v18 = (UnityEngine_UnityException_o *)sub_1C93D20(v17);
    UnityEngine_UnityException___ctor_72113552(v18, v16, 0);
    v19 = sub_1C93AE8(&Method_FieldMotionManager_PlayBattleAction__);
    sub_1C93BFC(v18, v19);
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
    sub_1C93D34(MotionName);
  MotionName = v13->m_Items[v10];
  if ( !MotionName )
LABEL_15:
    sub_1C93D2C(MotionName, v6);
  BattleFieldMotionComponent__playBattleActionData(MotionName, nowAction, v8, 0);
}


void FieldMotionManager__ResetFieldMotionArray(FieldMotionManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  unsigned __int64 max_length_low; // x9

  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_6:
    sub_1C93D2C(this, method);
  v10 = 1;
  v11 = 40;
  while ( 1 )
  {
    max_length_low = LODWORD(fieldMotionArray->max_length);
    if ( v10 >= (int)max_length_low )
      break;
    if ( v10 >= max_length_low )
      sub_1C93D34(this);
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v11) = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)fieldMotionArray + v11), 0, v2, v3, v4, v5, v6, v7);
    fieldMotionArray = this->fields.fieldMotionArray;
    ++v10;
    v11 += 8;
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
  if ( (byte_4D342B3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_PlayMakerFSM___);
    this = (FieldMotionManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342B3 = 1;
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
          (const MethodInfo_30EBC54 *)Method_ActionExtensions_Call_PlayMakerFSM___),
        (v15 = v6->fields.fieldMotionArray) == 0) )
  {
LABEL_24:
    sub_1C93D2C(this, str);
  }
  if ( (unsigned int)v9 >= LODWORD(v15->max_length) )
LABEL_25:
    sub_1C93D34(this);
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
  if ( (byte_4D342B4 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342B4 = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C93D2C(this, str);
  v6 = LODWORD(fieldMotionArray->max_length) - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      if ( v6 >= LODWORD(fieldMotionArray->max_length) )
LABEL_18:
        sub_1C93D34(this);
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
        if ( *((_BYTE *)this + 192) )
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

  if ( (byte_4D342B5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342B5 = 1;
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
          sub_1C93D34(MotionName);
        MotionName = v15->m_Items[v12];
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion(MotionName, active, 0);
          return;
        }
      }
LABEL_17:
      sub_1C93D2C(MotionName, v8);
    }
  }
}


void FieldMotionManager__SetBaseFieldMotionIds(
        FieldMotionManager_o *this,
        System_Int32_array *motionIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  System_Int32_array *v9; // x20
  FieldMotionManager_o *v10; // x19
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0

  v9 = motionIds;
  v10 = this;
  if ( (byte_4D342A6 & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_1C93AD4(&Method_System_Array_Empty_int___);
    byte_4D342A6 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( v10 )
        goto LABEL_4;
LABEL_15:
      sub_1C93D2C(this, motionIds);
    }
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  this = *(FieldMotionManager_o **)(v11[7] + 16LL);
  if ( (*((_BYTE *)this + 309) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_1C69B68(inited);
  v9 = (System_Int32_array *)**((_QWORD **)this + 23);
  if ( !v10 )
    goto LABEL_15;
LABEL_4:
  v10->fields.baseMotionIds = v9;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v10->fields.baseMotionIds,
    (int32_t)v9,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FieldMotionManager__SetOverwriteMotionIds(
        FieldMotionManager_o *this,
        System_Int32_array *motionIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OverwriteMotionIds_k__BackingField = motionIds;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OverwriteMotionIds_k__BackingField,
    (int32_t)motionIds,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void FieldMotionManager__SetTacticBg(FieldMotionManager_o *this, bool flg, const MethodInfo *method)
{
  FieldMotionManager___c_c *v5; // x0
  System_Func_object__object__o *_9__19_0; // x21
  Il2CppObject *v7; // x22
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *LastNotNullObject_object; // x20

  if ( (byte_4D342AC & 1) == 0 )
  {
    sub_1C93AD4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C93AD4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_FieldMotionManager___c__SetTacticBg_b__19_0__);
    sub_1C93AD4(&FieldMotionManager___c_TypeInfo);
    byte_4D342AC = 1;
  }
  v5 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v5 = FieldMotionManager___c_TypeInfo;
  }
  _9__19_0 = (System_Func_object__object__o *)v5->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = FieldMotionManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__19_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__19_0, v7, Method_FieldMotionManager___c__SetTacticBg_b__19_0__, 0);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__19_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0,
      (int32_t)_9__19_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !this )
    goto LABEL_16;
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__19_0,
                               (const MethodInfo_31F908C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
    sub_1C93D2C(v5, flg);
  }
}


void FieldMotionManager__SetVariables___Il2CppFullySharedGenericType_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
        const MethodInfo_31FA094 *method)
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
  System_RuntimeTypeHandle_o v23; // x27
  System_Type_o *TypeFromHandle; // x27
  System_Type_o *v25; // x0
  __int64 v26; // x27
  PlayMakerFSM_o *v27; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **p_klass; // x1
  System_String_c **v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_String_c **v36; // x1
  System_RuntimeTypeHandle_o v37; // x27
  System_Type_o *v38; // x27
  System_Type_o *v39; // x0
  __int64 v40; // x27
  HutongGames_PlayMaker_FsmGameObject_o *v41; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v42; // x1
  UnityEngine_GameObject_c **v43; // x0
  UnityEngine_GameObject_o *v44; // x1
  System_RuntimeTypeHandle_o v45; // x27
  System_Type_o *v46; // x27
  System_Type_o *v47; // x0
  long double v48; // q0
  __int64 v49; // x9
  PlayMakerFSM_o *v50; // x26
  __int64 v51; // x8
  __int64 v52; // x0
  System_RuntimeTypeHandle_o v53; // x27
  System_Type_o *v54; // x27
  System_Type_o *v55; // x0
  long double v56; // q0
  __int64 v57; // x9
  PlayMakerFSM_o *v58; // x26
  __int64 v59; // x8
  __int64 v60; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v61; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v62; // x3
  System_String_o *v63; // x27
  __int64 v64; // [xsp+0h] [xbp-40h] BYREF
  char *v65; // [xsp+8h] [xbp-38h]
  char *v66; // [xsp+10h] [xbp-30h]
  unsigned __int64 v67; // [xsp+18h] [xbp-28h]
  size_t v68; // [xsp+20h] [xbp-20h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+28h] [xbp-18h] BYREF
  System_String_o *v70; // [xsp+30h] [xbp-10h]
  __int64 v71; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = value.monitor;
  v71 = *(_QWORD *)(StatusReg + 40);
  klass = value.klass;
  v9 = *((_QWORD *)value.monitor + 7);
  if ( !v9 )
  {
    sub_1C93AD4(&bool_var);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&UnityEngine_GameObject_var);
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&int_var);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_var);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    v9 = *((_QWORD *)monitor + 7);
    if ( !v9 )
    {
      sub_1C69BC4();
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
    v13 = sub_1C69B68(v4);
    v10 = *(_QWORD *)(*((_QWORD *)monitor + 7) + 8LL);
    v14 = *(_DWORD *)(v13 + 252);
    v11 = *(_WORD *)(v10 + 309);
  }
  v66 = (char *)&v64 - (((unsigned int)(v14 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v67 = StatusReg;
  if ( (v11 & 1) == 0 )
    v10 = sub_1C69B68(v4);
  v65 = (char *)&v64 - (((unsigned int)(*(_DWORD *)(v10 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  v15 = (char *)&v64 - ((v12 + 15) & 0x1FFFFFFF0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v16
    || (v68 = v12,
        System_Collections_Generic_List_object___AddRange(
          v16,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v16,
                                   (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_85:
    sub_1C93D2C(Fsm, v18);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v20 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C93D34(Fsm);
      v22 = (UnityEngine_Object_o *)*((_QWORD *)&v20->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v22, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        v23.fields.value = **((_QWORD **)monitor + 7);
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        TypeFromHandle = System_Type__GetTypeFromHandle(v23, 0);
        v25 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)string_var, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v25, 0);
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
            v26 = *((_QWORD *)monitor + 7);
            v27 = Fsm;
            if ( *(int *)(*(_QWORD *)(v26 + 8) + 40LL) >= 0 )
              p_klass = &klass;
            else
              p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
            memcpy(v15, p_klass, v68);
            v29 = (System_String_c **)j_il2cpp_value_box_0(*(_QWORD *)(v26 + 8), v15);
            if ( v29 )
            {
              if ( *v29 == string_TypeInfo )
                v36 = v29;
              else
                v36 = 0;
            }
            else
            {
              v36 = 0;
            }
            v27->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v36;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v27->fields.addEventHandlers,
              (int32_t)v36,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35);
          }
        }
        else
        {
          v37.fields.value = **((_QWORD **)monitor + 7);
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v38 = System_Type__GetTypeFromHandle(v37, 0);
          v39 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)UnityEngine_GameObject_var, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v38, v39, 0);
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
              v40 = *((_QWORD *)monitor + 7);
              v41 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              if ( *(int *)(*(_QWORD *)(v40 + 8) + 40LL) >= 0 )
                v42 = &klass;
              else
                v42 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
              memcpy(v15, v42, v68);
              v43 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(*(_QWORD *)(v40 + 8), v15);
              if ( v43 )
              {
                if ( *v43 == UnityEngine_GameObject_TypeInfo )
                  v44 = (UnityEngine_GameObject_o *)v43;
                else
                  v44 = 0;
              }
              else
              {
                v44 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v41, v44, 0);
            }
          }
          else
          {
            v45.fields.value = **((_QWORD **)monitor + 7);
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v46 = System_Type__GetTypeFromHandle(v45, 0);
            v47 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)int_var, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v46, v47, 0);
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
                v49 = *((_QWORD *)monitor + 7);
                v50 = Fsm;
                v51 = *(_QWORD *)(v49 + 8);
                if ( (*(_BYTE *)(v51 + 309) & 1) != 0 )
                {
                  v52 = *(_QWORD *)(v49 + 8);
                }
                else
                {
                  LODWORD(v52) = sub_1C69B68(v48);
                  v49 = *((_QWORD *)monitor + 7);
                  v51 = *(_QWORD *)(v49 + 8);
                }
                if ( *(int *)(v51 + 40) >= 0 )
                  v61 = &klass;
                else
                  v61 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                sub_1C94610(v52, *(_QWORD *)(v49 + 16), (int)v66, v61);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v70, 0);
                LODWORD(v50->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v53.fields.value = **((_QWORD **)monitor + 7);
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v54 = System_Type__GetTypeFromHandle(v53, 0);
              v55 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)bool_var, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v54, v55, 0);
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
                  v57 = *((_QWORD *)monitor + 7);
                  v58 = Fsm;
                  v59 = *(_QWORD *)(v57 + 8);
                  if ( (*(_BYTE *)(v59 + 309) & 1) != 0 )
                  {
                    v60 = *(_QWORD *)(v57 + 8);
                  }
                  else
                  {
                    LODWORD(v60) = sub_1C69B68(v56);
                    v57 = *((_QWORD *)monitor + 7);
                    v59 = *(_QWORD *)(v57 + 8);
                  }
                  if ( *(int *)(v59 + 40) >= 0 )
                    v62 = &klass;
                  else
                    v62 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                  sub_1C94610(v60, *(_QWORD *)(v57 + 16), (int)v65, v62);
                  v63 = v70;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v63, 0);
                  LOBYTE(v58->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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
        const MethodInfo_31F91AC *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v9; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v11; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v13; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v16; // x0
  PlayMakerFSM_o *v17; // x22
  System_String_c **v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_String_c **v25; // x1
  Il2CppType *v26; // x23
  System_Type_o *v27; // x23
  System_Type_o *v28; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v29; // x22
  UnityEngine_GameObject_c **v30; // x0
  UnityEngine_GameObject_o *v31; // x1
  Il2CppType *v32; // x23
  System_Type_o *v33; // x23
  System_Type_o *v34; // x0
  PlayMakerFSM_o *v35; // x22
  System_String_o *v36; // x0
  Il2CppType *v37; // x23
  System_Type_o *v38; // x23
  System_Type_o *v39; // x0
  PlayMakerFSM_o *v40; // x22
  System_String_o *v41; // x0
  _BYTE v42[4]; // [xsp+4h] [xbp-6Ch] BYREF
  _BYTE v43[4]; // [xsp+8h] [xbp-68h] BYREF
  _BYTE v44[4]; // [xsp+Ch] [xbp-64h] BYREF

  v44[0] = value;
  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&bool_var);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&UnityEngine_GameObject_var);
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&int_var);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_var);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_64:
    sub_1C93D2C(Fsm, v9);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v11 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C93D34(Fsm);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
        v16 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)string_var, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v16, 0);
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
            v17 = Fsm;
            v43[0] = v44[0];
            v18 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v43);
            if ( v18 )
            {
              if ( *v18 == string_TypeInfo )
                v25 = v18;
              else
                v25 = 0;
            }
            else
            {
              v25 = 0;
            }
            v17->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v25;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v17->fields.addEventHandlers,
              (int32_t)v25,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
          }
        }
        else
        {
          v26 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v27 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v26, 0);
          v28 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)UnityEngine_GameObject_var, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v27, v28, 0);
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
              v29 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v42[0] = v44[0];
              v30 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v42);
              if ( v30 )
              {
                if ( *v30 == UnityEngine_GameObject_TypeInfo )
                  v31 = (UnityEngine_GameObject_o *)v30;
                else
                  v31 = 0;
              }
              else
              {
                v31 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v29, v31, 0);
            }
          }
          else
          {
            v32 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v33 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v32, 0);
            v34 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)int_var, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v33, v34, 0);
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
                v35 = Fsm;
                if ( !bool_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                v36 = System_Boolean__ToString((bool)v44, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v36, 0);
                LODWORD(v35->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v37 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v38 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v37, 0);
              v39 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)bool_var, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v38, v39, 0);
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
                  v40 = Fsm;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  v41 = System_Boolean__ToString((bool)v44, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v41, 0);
                  LOBYTE(v40->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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
        const MethodInfo_31F96C4 *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v9; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v11; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v13; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v16; // x0
  PlayMakerFSM_o *v17; // x22
  System_String_c **v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_String_c **v25; // x1
  Il2CppType *v26; // x23
  System_Type_o *v27; // x23
  System_Type_o *v28; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v29; // x22
  UnityEngine_GameObject_c **v30; // x0
  UnityEngine_GameObject_o *v31; // x1
  Il2CppType *v32; // x23
  System_Type_o *v33; // x23
  System_Type_o *v34; // x0
  PlayMakerFSM_o *v35; // x22
  System_String_o *v36; // x0
  Il2CppType *v37; // x23
  System_Type_o *v38; // x23
  System_Type_o *v39; // x0
  PlayMakerFSM_o *v40; // x22
  System_String_o *v41; // x23
  int32_t v42; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v43; // [xsp+8h] [xbp-68h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-64h] BYREF

  v44 = value;
  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&bool_var);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&UnityEngine_GameObject_var);
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&int_var);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_var);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_62:
    sub_1C93D2C(Fsm, v9);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v11 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C93D34(Fsm);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
        v16 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)string_var, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v16, 0);
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
            v17 = Fsm;
            v43 = v44;
            v18 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v43);
            if ( v18 )
            {
              if ( *v18 == string_TypeInfo )
                v25 = v18;
              else
                v25 = 0;
            }
            else
            {
              v25 = 0;
            }
            v17->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v25;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v17->fields.addEventHandlers,
              (int32_t)v25,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
          }
        }
        else
        {
          v26 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v27 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v26, 0);
          v28 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)UnityEngine_GameObject_var, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v27, v28, 0);
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
              v29 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v42 = v44;
              v30 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v42);
              if ( v30 )
              {
                if ( *v30 == UnityEngine_GameObject_TypeInfo )
                  v31 = (UnityEngine_GameObject_o *)v30;
                else
                  v31 = 0;
              }
              else
              {
                v31 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v29, v31, 0);
            }
          }
          else
          {
            v32 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v33 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v32, 0);
            v34 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)int_var, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v33, v34, 0);
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
                v35 = Fsm;
                v36 = System_Int32__ToString((int32_t)&v44, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v36, 0);
                LODWORD(v35->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v37 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v38 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v37, 0);
              v39 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)bool_var, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v38, v39, 0);
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
                  v40 = Fsm;
                  v41 = System_Int32__ToString((int32_t)&v44, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v41, 0);
                  LOBYTE(v40->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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
        const MethodInfo_31F9BCC *method)
{
  System_Collections_Generic_List_object__o *v8; // x23
  void *Fsm; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  _QWORD *v12; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v14; // x23
  Il2CppType *_0_T; // x24
  System_Type_o *TypeFromHandle; // x24
  System_Type_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *v24; // x1
  Il2CppType *v25; // x24
  System_Type_o *v26; // x24
  System_Type_o *v27; // x0
  Il2CppObject *v28; // x1
  Il2CppType *v29; // x24
  System_Type_o *v30; // x24
  System_Type_o *v31; // x0
  _DWORD *v32; // x23
  System_String_o *v33; // x0
  Il2CppType *v34; // x24
  System_Type_o *v35; // x24
  System_Type_o *v36; // x0
  _BYTE *v37; // x23
  System_String_o *v38; // x24

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&bool_var);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&UnityEngine_GameObject_var);
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&int_var);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_var);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4();
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_object___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = System_Collections_Generic_List_object___ToArray(
                 v8,
                 (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_64:
    sub_1C93D2C(Fsm, v10);
  }
  v11 = *((_QWORD *)Fsm + 3);
  v12 = Fsm;
  if ( (int)v11 >= 1 )
  {
    for ( i = 0; (__int64)i < (int)v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        sub_1C93D34(Fsm);
      v14 = (UnityEngine_Object_o *)v12[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (void *)UnityEngine_Object__op_Equality(v14, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
        v17 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)string_var, 0);
        Fsm = (void *)System_Type__op_Equality(TypeFromHandle, v17, 0);
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
                v24 = value;
              else
                v24 = 0;
            }
            else
            {
              v24 = 0;
            }
            *((_QWORD *)Fsm + 7) = v24;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)Fsm + 56), (int32_t)v24, v18, v19, v20, v21, v22, v23);
          }
        }
        else
        {
          v25 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v26 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v25, 0);
          v27 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)UnityEngine_GameObject_var, 0);
          Fsm = (void *)System_Type__op_Equality(v26, v27, 0);
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
            v30 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v29, 0);
            v31 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)int_var, 0);
            Fsm = (void *)System_Type__op_Equality(v30, v31, 0);
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
                v32 = Fsm;
                v33 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                           value,
                                           value->klass->vtable[3].method);
                Fsm = (void *)System_Int32__Parse(v33, 0);
                v32[14] = (_DWORD)Fsm;
              }
            }
            else
            {
              v34 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v35 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v34, 0);
              v36 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)bool_var, 0);
              Fsm = (void *)System_Type__op_Equality(v35, v36, 0);
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
                  v37 = Fsm;
                  v38 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                             value,
                                             value->klass->vtable[3].method);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (void *)System_Boolean__Parse(v38, 0);
                  v37[56] = (unsigned __int8)Fsm & 1;
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
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  __int64 v36; // x0
  __int64 v37; // x1
  int *fieldMotionArray; // x29
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x22
  System_Func_object__bool__o *v40; // x23
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject *v48; // x21
  int *v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0

  if ( (byte_4D342A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleDataDefine_FieldMotionPath__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C93AD4(&System_Func_int__string__TypeInfo);
    sub_1C93AD4(&System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_FieldMotionManager___c__DisplayClass13_0__SwitchUniqueFieldMotion_b__0__);
    sub_1C93AD4(&FieldMotionManager___c__DisplayClass13_0_TypeInfo);
    byte_4D342A8 = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v7);
  v9 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v9, 0, Method_BattleDataDefine_FieldMotionPath__, 0);
  v10 = System_Linq_Enumerable__Select_int__object_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v9,
          (const MethodInfo_31D7E14 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v10 )
    sub_1C93D2C(0, v11);
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
    v16 = sub_1C69E5C(v10, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v16)(
          v13,
          *(_QWORD *)(v16 + 8));
  if ( !v18 )
    sub_1C93D2C(0, v17);
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
      v23 = sub_1C69E5C(v18, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v18, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = sub_1C93D20(FieldMotionManager___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
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
      v28 = sub_1C69E5C(v18, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v18, *(_QWORD *)(v28 + 8));
    if ( !v24 )
      sub_1C93D2C(v29, v29);
    *(_QWORD *)(v24 + 16) = v29;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 16), v29, v30, v31, v32, v33, v34, v35);
    fieldMotionArray = (int *)this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_1C93D2C(v36, v37);
    if ( (__int64)i >= fieldMotionArray[6] )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v40 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v40,
      (Il2CppObject *)v24,
      Method_FieldMotionManager___c__DisplayClass13_0__SwitchUniqueFieldMotion_b__0__,
      0);
    v41 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v40,
            (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v48 = v41;
    if ( v41 )
    {
      v41 = (Il2CppObject *)sub_1C93C10(v41, *(_QWORD *)(*(_QWORD *)fieldMotionArray + 64LL));
      if ( !v41 )
      {
        v54 = sub_1C93D50(0);
        sub_1C93BFC(v54, 0);
      }
    }
    if ( i >= (unsigned int)fieldMotionArray[6] )
      sub_1C93D34(v41);
    v49 = &fieldMotionArray[2 * i];
    *((_QWORD *)v49 + 4) = v48;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v49 + 8), (int32_t)v48, v42, v43, v44, v45, v46, v47);
  }
  v50 = *(_QWORD *)v18;
  v51 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
  {
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_36;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_36:
    v53 = sub_1C69E5C(v18, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v53)(v18, *(_QWORD *)(v53 + 8));
}


System_Int32_array *FieldMotionManager__get_OverwriteMotionIds(FieldMotionManager_o *this, const MethodInfo *method)
{
  return this->fields._OverwriteMotionIds_k__BackingField;
}


void FieldMotionManager__set_OverwriteMotionIds(
        FieldMotionManager_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OverwriteMotionIds_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OverwriteMotionIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FieldMotionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D342B6 & 1) == 0 )
  {
    sub_1C93AD4(&FieldMotionManager___c_TypeInfo);
    byte_4D342B6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(FieldMotionManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FieldMotionManager___c_TypeInfo->static_fields->__9 = (struct FieldMotionManager___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)FieldMotionManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FieldMotionManager___c___ctor(FieldMotionManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_GameObject_o *FieldMotionManager___c___GetEnemyStage_b__21_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *FieldMotionManager___c___GetPlayerStage_b__20_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *FieldMotionManager___c___GetTransform_b__23_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *FieldMotionManager___c___GetTransform_b__23_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *FieldMotionManager___c___SetTacticBg_b__19_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return comp->fields.tacticBg;
}


void FieldMotionManager___c__DisplayClass13_0___ctor(
        FieldMotionManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FieldMotionManager___c__DisplayClass13_0___SwitchUniqueFieldMotion_b__0(
        FieldMotionManager___c__DisplayClass13_0_o *this,
        BattleFieldMotionComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D342B7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342B7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_1C93D2C(v5, v6);
  return BasicHelper__EqualExceptNullOrEmpty(x->fields._AssetName_k__BackingField, this->fields.targetName, 0);
}


void FieldMotionManager___c__DisplayClass22_0___ctor(
        FieldMotionManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_GameObject_o *FieldMotionManager___c__DisplayClass22_0___GetGameObject_b__0(
        FieldMotionManager___c__DisplayClass22_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return BattleFieldMotionComponent__getGameObject(comp, this->fields.name, 0);
}


void FieldMotionManager___c__DisplayClass23_0___ctor(
        FieldMotionManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass23_0___GetTransform_b__0(
        FieldMotionManager___c__DisplayClass23_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass23_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass23_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass23_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass23_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass23_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass23_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return BattleFieldMotionComponent__getEnemyTacticalTr(comp, this->fields.index, 0);
}


void FieldMotionManager___c__DisplayClass24_0___ctor(
        FieldMotionManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass24_0___GetTargetTransform_b__0(
        FieldMotionManager___c__DisplayClass24_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return BattleFieldMotionComponent__GetTargetTr(comp, this->fields.type, this->fields.index, 0);
}