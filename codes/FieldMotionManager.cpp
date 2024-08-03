void __fastcall FieldMotionManager___ctor(
        FieldMotionManager_o *this,
        BattleFieldMotionComponent_array *fieldMotions,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x22
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  struct System_Int32_array **v13; // x8
  struct System_Int32_array *v14; // x1
  FieldMotionManager_Fields *p_fields; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  BattleFieldMotionComponent_o *v18; // x0
  __int64 v19; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v21; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v23; // x27
  UnityEngine_Object_o *v24; // x23
  struct BattleFieldMotionComponent_array *v25; // x8
  System_Object_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FF48E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, fieldMotions);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FF48E = 1;
  }
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB5FA4(v11);
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  v13 = *(struct System_Int32_array ***)(v12 + 184);
  v14 = *v13;
  this->fields.baseMotionIds = *v13;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseMotionIds,
    (int32_t)v14,
    (int32_t)perf,
    (int32_t)method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)fieldMotions, v16, v17);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_23:
    sub_1B64324(v18);
  v21 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v23 = v21 - 4;
    if ( v21 - 4 >= (int)max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_25;
    v24 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v21);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      v25 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_23;
      if ( v23 >= v25->max_length )
LABEL_25:
        sub_1B6432C(v18, v19);
      v18 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v25->obj.klass + v21);
      if ( !v18 )
        goto LABEL_23;
      BattleFieldMotionComponent__setPerf(v18, perf, 0LL);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v21;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_23;
  }
  v26 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotions,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = (struct BattleFieldMotionComponent_array *)v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.retentionFieldMotionArray, (int32_t)v26, v27, v28);
}


Il2CppObject *__fastcall FieldMotionManager__FindLastNotNullObject_object_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_2E84EE0 *method)
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
    this = (FieldMotionManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, getObjectFunc);
    if ( !method->rgctx_data )
      this = (FieldMotionManager_o *)sub_1BB6000();
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_18:
    sub_1B64324(this);
  v7 = fieldMotionArray->max_length - 1;
  if ( (v7 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v7 >= fieldMotionArray->max_length )
LABEL_21:
      sub_1B6432C(this, getObjectFunc);
    v8 = v7;
    v9 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v4->fields.fieldMotionArray;
      if ( !v10 )
        goto LABEL_18;
      if ( (unsigned int)v8 >= v10->max_length )
        goto LABEL_21;
      if ( !getObjectFunc )
        goto LABEL_18;
      v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleFieldMotionComponent_o *, _QWORD))getObjectFunc->fields.m_target)(
                                      getObjectFunc->fields.original_method_info,
                                      v10->m_Items[v8],
                                      *(_QWORD *)&getObjectFunc->fields.extra_arg);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return (Il2CppObject *)v11;
    }
    v7 = v8 - 1;
    if ( (int)v8 - 1 < 0 )
      return 0LL;
    fieldMotionArray = v4->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_18;
  }
}


System_Int32_array *__fastcall FieldMotionManager__GetEnableFieldMotionIds(
        FieldMotionManager_o *this,
        StageEntity_o *stageEnt,
        BattleData_o *data,
        const MethodInfo *method)
{
  FieldMotionManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  _QWORD *v19; // x19
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *baseMotionIds; // x21
  System_Collections_Generic_List_int__o *v29; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CurWaveEnemyDeckMotionIds; // x0
  FieldMotionManager_c *klass; // x8
  FieldMotionManager_o *v32; // x20
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  __int64 v36; // x20
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  int32_t v46; // w21
  _BOOL8 v47; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0

  v6 = this;
  if ( (byte_49FF490 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, stageEnt);
    sub_1B640C8(&Method_System_Linq_Enumerable_Reverse_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v17);
    this = (FieldMotionManager_o *)sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v18);
    byte_49FF490 = 1;
  }
  if ( !stageEnt )
    goto LABEL_55;
  if ( !StageEntity__IsDisableFieldMotion(stageEnt, 0LL) )
  {
    WaveFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)StageEntity__GetWaveFieldMotionIds(
                                                                                stageEnt,
                                                                                0LL,
                                                                                0LL);
    if ( WaveFieldMotionIds )
    {
      v27 = System_Linq_Enumerable__Reverse_int_(
              WaveFieldMotionIds,
              (const MethodInfo_2E64098 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v27,
               (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    baseMotionIds = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.baseMotionIds;
    v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v25, v26);
    System_Collections_Generic_List_int____ctor_55113648(
      v29,
      baseMotionIds,
      (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0LL);
      this = (FieldMotionManager_o *)System_Linq_Enumerable__Reverse_int_(
                                       CurWaveEnemyDeckMotionIds,
                                       (const MethodInfo_2E64098 *)Method_System_Linq_Enumerable_Reverse_int___);
      if ( this )
      {
        klass = this->klass;
        v32 = this;
        v33 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
          {
            --v33;
            p_offset += 4;
            if ( !v33 )
              goto LABEL_22;
          }
          v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_22:
          v35 = sub_1BB60A8(this, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
        }
        v36 = (*(__int64 (__fastcall **)(FieldMotionManager_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
        if ( !v36 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v37 = *(_QWORD *)v36;
          v38 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
          {
            v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v38;
              v39 += 4;
              if ( !v38 )
                goto LABEL_29;
            }
            v40 = v37 + 16LL * *v39 + 312;
          }
          else
          {
LABEL_29:
            v40 = sub_1BB60A8(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
            break;
          v41 = *(_QWORD *)v36;
          v42 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
          {
            v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_int__c **)v43 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
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
            v44 = sub_1BB60A8(v36, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
          }
          v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
          if ( !v29 )
            sub_1B64324(v45);
          v46 = v45;
          v47 = System_Collections_Generic_List_int___Contains(
                  v29,
                  v45,
                  (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v47 )
            v47 = System_Collections_Generic_List_int___Remove(
                    v29,
                    v46,
                    (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
          items = v29->fields._items;
          v49 = Method_System_Collections_Generic_List_int__Add__;
          ++v29->fields._version;
          if ( !items )
            sub_1B64324(v47);
          size = v29->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v29,
              v46,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v29->fields._size = size + 1;
            items->m_Items[size + 1] = v46;
          }
        }
        v51 = *(_QWORD *)v36;
        v52 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
        {
          v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
          {
            --v52;
            v53 += 4;
            if ( !v52 )
              goto LABEL_49;
          }
          v54 = v51 + 16LL * *v53 + 312;
        }
        else
        {
LABEL_49:
          v54 = sub_1BB60A8(v36, System_IDisposable_TypeInfo, 0LL);
        }
        this = (FieldMotionManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v36, *(_QWORD *)(v54 + 8));
        if ( v29 )
          return System_Collections_Generic_List_int___ToArray(
                   v29,
                   (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_55:
    sub_1B64324(this);
  }
  v19 = Method_System_Array_Empty_int___;
  v20 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v20 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v20 = v19[7];
  }
  v21 = *(_QWORD *)(v20 + 16);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1BB5FA4(v21);
  if ( !*(_DWORD *)(v21 + 224) )
    j_il2cpp_runtime_class_init_0(v21);
  v22 = *(_QWORD *)(v19[7] + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BB5FA4(v22);
  return **(System_Int32_array ***)(v22 + 184);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager__GetEnemyStage(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FieldMotionManager___c_c *v8; // x0
  System_Func_object__object__o *_9__15_0; // x20
  Il2CppObject *v10; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_49FF494 & 1) == 0 )
  {
    sub_1B640C8(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method);
    sub_1B640C8(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, v6);
    sub_1B640C8(&FieldMotionManager___c_TypeInfo, v7);
    byte_49FF494 = 1;
  }
  v8 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v8 = FieldMotionManager___c_TypeInfo;
  }
  _9__15_0 = (System_Func_object__object__o *)v8->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = FieldMotionManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__15_0 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                  method,
                                                  v2);
    System_Func_object__object____ctor(_9__15_0, v10, Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__15_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v12, v13);
  }
  if ( !this )
    sub_1B64324(v8);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__15_0,
                               (const MethodInfo_2E84EE0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)LastNotNullObject_object;
  else
    return 0LL;
}


BattleFieldMotionComponent_array *__fastcall FieldMotionManager__GetFieldMotionArray(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  return this->fields.fieldMotionArray;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager__GetGameObject(
        FieldMotionManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_object__object__o *v15; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_49FF495 & 1) == 0 )
  {
    sub_1B640C8(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, name);
    sub_1B640C8(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__, v7);
    sub_1B640C8(&FieldMotionManager___c__DisplayClass16_0_TypeInfo, v8);
    byte_49FF495 = 1;
  }
  v9 = sub_1B64314(FieldMotionManager___c__DisplayClass16_0_TypeInfo, name, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)name, v11, v12);
  v15 = (System_Func_object__object__o *)sub_1B64314(
                                           System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                           v13,
                                           v14);
  System_Func_object__object____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v15,
                               (const MethodInfo_2E84EE0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)LastNotNullObject_object;
  else
    return 0LL;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager__GetPlayerStage(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FieldMotionManager___c_c *v8; // x0
  System_Func_object__object__o *_9__14_0; // x20
  Il2CppObject *v10; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_49FF493 & 1) == 0 )
  {
    sub_1B640C8(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method);
    sub_1B640C8(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, v6);
    sub_1B640C8(&FieldMotionManager___c_TypeInfo, v7);
    byte_49FF493 = 1;
  }
  v8 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v8 = FieldMotionManager___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__object__o *)v8->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = FieldMotionManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__14_0 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                  method,
                                                  v2);
    System_Func_object__object____ctor(_9__14_0, v10, Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__14_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v12, v13);
  }
  if ( !this )
    sub_1B64324(v8);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__14_0,
                               (const MethodInfo_2E84EE0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)LastNotNullObject_object;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall FieldMotionManager__GetTargetTransform(
        FieldMotionManager_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_object__object__o *v15; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_49FF497 & 1) == 0 )
  {
    sub_1B640C8(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type);
    sub_1B640C8(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__, v9);
    sub_1B640C8(&FieldMotionManager___c__DisplayClass18_0_TypeInfo, v10);
    byte_49FF497 = 1;
  }
  v11 = sub_1B64314(FieldMotionManager___c__DisplayClass18_0_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_DWORD *)(v11 + 16) = type;
  *(_DWORD *)(v11 + 20) = index;
  v15 = (System_Func_object__object__o *)sub_1B64314(
                                           System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                           v13,
                                           v14);
  System_Func_object__object____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v15,
                               (const MethodInfo_2E84EE0 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0LL, 0LL) )
    return (UnityEngine_Transform_o *)LastNotNullObject_object;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall FieldMotionManager__GetTransform(
        FieldMotionManager_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x22
  FieldMotionManager___c_c *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_object__object__o *v20; // x0
  __int64 *v21; // x8
  UnityEngine_Transform_o *result; // x0
  System_Func_object__object__o *_9__17_1; // x20
  Il2CppObject *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__17_1; // x0
  Il2CppObject *v30; // x21
  struct FieldMotionManager___c_StaticFields *v31; // x0

  if ( (byte_49FF496 & 1) == 0 )
  {
    sub_1B640C8(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type);
    sub_1B640C8(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v7);
    sub_1B640C8(&Method_FieldMotionManager___c__GetTransform_b__17_1__, v8);
    sub_1B640C8(&Method_FieldMotionManager___c__GetTransform_b__17_3__, v9);
    sub_1B640C8(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__, v10);
    sub_1B640C8(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__, v11);
    sub_1B640C8(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__, v12);
    sub_1B640C8(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__, v13);
    sub_1B640C8(&FieldMotionManager___c__DisplayClass17_0_TypeInfo, v14);
    sub_1B640C8(&FieldMotionManager___c_TypeInfo, v15);
    byte_49FF496 = 1;
  }
  v16 = sub_1B64314(FieldMotionManager___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
LABEL_22:
    sub_1B64324(v17);
  *(_DWORD *)(v16 + 16) = index;
  switch ( type )
  {
    case 0:
      v20 = (System_Func_object__object__o *)sub_1B64314(
                                               System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                               v18,
                                               v19);
      v21 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__;
      goto LABEL_25;
    case 1:
      v17 = FieldMotionManager___c_TypeInfo;
      if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v17 = FieldMotionManager___c_TypeInfo;
      }
      _9__17_1 = (System_Func_object__object__o *)v17->static_fields->__9__17_1;
      if ( _9__17_1 )
        goto LABEL_21;
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = FieldMotionManager___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v17->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1B64314(
                                                    System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                    v18,
                                                    v19);
      System_Func_object__object____ctor(_9__17_1, v24, Method_FieldMotionManager___c__GetTransform_b__17_1__, 0LL);
      v27 = (int)_9__17_1;
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      static_fields->__9__17_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__17_1;
      goto LABEL_20;
    case 2:
      v20 = (System_Func_object__object__o *)sub_1B64314(
                                               System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                               v18,
                                               v19);
      v21 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__;
      goto LABEL_25;
    case 3:
      v17 = FieldMotionManager___c_TypeInfo;
      if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v17 = FieldMotionManager___c_TypeInfo;
      }
      _9__17_1 = (System_Func_object__object__o *)v17->static_fields->__9__17_3;
      if ( _9__17_1 )
        goto LABEL_21;
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = FieldMotionManager___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v17->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1B64314(
                                                    System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                    v18,
                                                    v19);
      System_Func_object__object____ctor(_9__17_1, v30, Method_FieldMotionManager___c__GetTransform_b__17_3__, 0LL);
      v27 = (int)_9__17_1;
      v31 = FieldMotionManager___c_TypeInfo->static_fields;
      v31->__9__17_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (ServantStatusBattleListViewItem_o *)&v31->__9__17_3;
LABEL_20:
      sub_1B6406C(p__9__17_1, v27, v25, v26);
LABEL_21:
      if ( !this )
        goto LABEL_22;
      goto LABEL_26;
    case 4:
      v20 = (System_Func_object__object__o *)sub_1B64314(
                                               System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                               v18,
                                               v19);
      v21 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__;
      goto LABEL_25;
    case 5:
      v20 = (System_Func_object__object__o *)sub_1B64314(
                                               System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                               v18,
                                               v19);
      v21 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__;
LABEL_25:
      _9__17_1 = v20;
      System_Func_object__object____ctor(v20, (Il2CppObject *)v16, *v21, 0LL);
LABEL_26:
      result = (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                            this,
                                            (System_Func_BattleFieldMotionComponent__T__o *)_9__17_1,
                                            (const MethodInfo_2E84EE0 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


bool __fastcall FieldMotionManager__IsStep(FieldMotionManager_o *this, const MethodInfo *method)
{
  FieldMotionManager_o *v2; // x19
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  char v4; // w21
  __int64 v5; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v7; // x24
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x9

  v2 = this;
  if ( (byte_49FF491 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF491 = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1B64324(this);
  v4 = 0;
  v5 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v7 = v5 - 4;
    if ( v5 - 4 >= (int)max_length )
      return v4 & 1;
    if ( v7 >= max_length )
      goto LABEL_17;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
    fieldMotionArray = v2->fields.fieldMotionArray;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !fieldMotionArray )
        goto LABEL_15;
      if ( v7 >= fieldMotionArray->max_length )
LABEL_17:
        sub_1B6432C(this, method);
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


void __fastcall FieldMotionManager__PlayBattleAction(
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
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_UnityException_o *v20; // x20
  __int64 v21; // x0

  if ( (byte_49FF498 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, nowAction);
    byte_49FF498 = 1;
  }
  MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__GetMotionName(nowAction, 0LL);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_15;
  v8 = (System_String_o *)MotionName;
  v9 = fieldMotionArray->max_length - 1;
  if ( (v9 & 0x80000000) != 0 )
  {
LABEL_21:
    v14 = (System_String_o *)sub_1B640DC(&StringLiteral_312/*" not found "*/);
    v15 = (System_String_o *)sub_1B640DC(&StringLiteral_279/*" in fieldFsm "*/);
    v16 = System_String__Concat_61386656(v14, v8, v15, 0LL);
    v17 = sub_1B640DC(&UnityEngine_UnityException_TypeInfo);
    v20 = (UnityEngine_UnityException_o *)sub_1B64314(v17, v18, v19);
    UnityEngine_UnityException___ctor_69112196(v20, v16, 0LL);
    v21 = sub_1B640DC(&Method_FieldMotionManager_PlayBattleAction__);
    sub_1B641F0(v20, v21);
  }
  while ( 1 )
  {
    if ( v9 >= fieldMotionArray->max_length )
      goto LABEL_20;
    v10 = v9;
    v11 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    MotionName = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)MotionName & 1) != 0 )
    {
      v12 = this->fields.fieldMotionArray;
      if ( !v12 )
        goto LABEL_15;
      if ( (unsigned int)v10 >= v12->max_length )
        goto LABEL_20;
      MotionName = v12->m_Items[v10];
      if ( !MotionName )
        goto LABEL_15;
      MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__checkMotionEvent(MotionName, v8, 0LL);
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
  if ( (unsigned int)v10 >= v13->max_length )
LABEL_20:
    sub_1B6432C(MotionName, v6);
  MotionName = v13->m_Items[v10];
  if ( !MotionName )
LABEL_15:
    sub_1B64324(MotionName);
  BattleFieldMotionComponent__playBattleActionData(MotionName, nowAction, v8, 0LL);
}


void __fastcall FieldMotionManager__ResetFieldMotionArray(FieldMotionManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  unsigned __int64 max_length; // x9

  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_6:
    sub_1B64324(this);
  v6 = 1LL;
  v7 = 40LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    if ( v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      sub_1B6432C(this, method);
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v7) = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)fieldMotionArray + v7), 0, v2, v3);
    fieldMotionArray = this->fields.fieldMotionArray;
    ++v6;
    v7 += 8LL;
    if ( !fieldMotionArray )
      goto LABEL_6;
  }
}


void __fastcall FieldMotionManager__SendEvent(
        FieldMotionManager_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  FieldMotionManager_o *v4; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v6; // w9
  __int64 v7; // x23
  UnityEngine_Object_o *v8; // x21
  struct BattleFieldMotionComponent_array *v9; // x8
  struct BattleFieldMotionComponent_array *v10; // x8

  v4 = this;
  if ( (byte_49FF499 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, str);
    byte_49FF499 = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_15;
  v6 = fieldMotionArray->max_length - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      if ( v6 >= fieldMotionArray->max_length )
        goto LABEL_21;
      v7 = v6;
      v8 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.fieldMotionArray;
        if ( !v9 )
          goto LABEL_15;
        if ( (unsigned int)v7 >= v9->max_length )
          goto LABEL_21;
        this = (FieldMotionManager_o *)v9->m_Items[v7];
        if ( !this )
          goto LABEL_15;
        this = (FieldMotionManager_o *)BattleFieldMotionComponent__checkMotionEvent(
                                         (BattleFieldMotionComponent_o *)this,
                                         str,
                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      v6 = v7 - 1;
      if ( (int)v7 - 1 < 0 )
        return;
      fieldMotionArray = v4->fields.fieldMotionArray;
      if ( !fieldMotionArray )
        goto LABEL_15;
    }
    v10 = v4->fields.fieldMotionArray;
    if ( v10 )
    {
      if ( (unsigned int)v7 >= v10->max_length )
LABEL_21:
        sub_1B6432C(this, str);
      this = (FieldMotionManager_o *)v10->m_Items[v7];
      if ( this )
      {
        BattleFieldMotionComponent__sendEvent((BattleFieldMotionComponent_o *)this, str, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B64324(this);
  }
}


void __fastcall FieldMotionManager__SendEvent2ActiveFM(
        FieldMotionManager_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  FieldMotionManager_o *v4; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v6; // w9
  __int64 v7; // x23
  UnityEngine_Object_o *v8; // x21
  struct BattleFieldMotionComponent_array *v9; // x8

  v4 = this;
  if ( (byte_49FF49A & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, str);
    byte_49FF49A = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1B64324(this);
  v6 = fieldMotionArray->max_length - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      if ( v6 >= fieldMotionArray->max_length )
LABEL_18:
        sub_1B6432C(this, str);
      v7 = v6;
      v8 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.fieldMotionArray;
        if ( !v9 )
          goto LABEL_15;
        if ( (unsigned int)v7 >= v9->max_length )
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
    BattleFieldMotionComponent__sendEvent((BattleFieldMotionComponent_o *)this, str, 0LL);
  }
}


void __fastcall FieldMotionManager__SetActiveMotion(
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

  if ( (byte_49FF49B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, nowAction);
    byte_49FF49B = 1;
  }
  if ( nowAction )
  {
    MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__GetMotionName(nowAction, 0LL);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_17;
    v10 = fieldMotionArray->max_length - 1;
    if ( (v10 & 0x80000000) == 0 )
    {
      v11 = (System_String_o *)MotionName;
      while ( 1 )
      {
        if ( v10 >= fieldMotionArray->max_length )
          goto LABEL_23;
        v12 = v10;
        v13 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v10];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        MotionName = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
        if ( ((unsigned __int8)MotionName & 1) != 0 )
        {
          v14 = this->fields.fieldMotionArray;
          if ( !v14 )
            goto LABEL_17;
          if ( (unsigned int)v12 >= v14->max_length )
            goto LABEL_23;
          MotionName = v14->m_Items[v12];
          if ( !MotionName )
            goto LABEL_17;
          MotionName = (BattleFieldMotionComponent_o *)BattleFieldMotionComponent__checkMotionEvent(
                                                         MotionName,
                                                         v11,
                                                         0LL);
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
        if ( (unsigned int)v12 >= v15->max_length )
LABEL_23:
          sub_1B6432C(MotionName, v8);
        MotionName = v15->m_Items[v12];
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion(MotionName, active, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1B64324(MotionName);
    }
  }
}


void __fastcall FieldMotionManager__SetBaseFieldMotionIds(
        FieldMotionManager_o *this,
        System_Int32_array *motionIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Int32_array *klass; // x20
  FieldMotionManager_o *v5; // x19
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0

  klass = motionIds;
  v5 = this;
  if ( (byte_49FF48D & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_1B640C8(&Method_System_Array_Empty_int___, motionIds);
    byte_49FF48D = 1;
    if ( klass )
    {
LABEL_3:
      if ( v5 )
        goto LABEL_4;
LABEL_15:
      sub_1B64324(this);
    }
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  this = *(FieldMotionManager_o **)(v6[7] + 16LL);
  if ( (BYTE5(this[7].fields.retentionFieldMotionArray) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_1BB5FA4(this);
  klass = (struct System_Int32_array *)this[4].fields.retentionFieldMotionArray->obj.klass;
  if ( !v5 )
    goto LABEL_15;
LABEL_4:
  v5->fields.baseMotionIds = klass;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.baseMotionIds, (int32_t)klass, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetTacticBg(FieldMotionManager_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FieldMotionManager___c_c *v9; // x0
  System_Func_object__object__o *_9__13_0; // x21
  Il2CppObject *v11; // x22
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *LastNotNullObject_object; // x20

  if ( (byte_49FF492 & 1) == 0 )
  {
    sub_1B640C8(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, flg);
    sub_1B640C8(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_FieldMotionManager___c__SetTacticBg_b__13_0__, v7);
    sub_1B640C8(&FieldMotionManager___c_TypeInfo, v8);
    byte_49FF492 = 1;
  }
  v9 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v9 = FieldMotionManager___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__object__o *)v9->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = FieldMotionManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__13_0 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                  flg,
                                                  method);
    System_Func_object__object____ctor(_9__13_0, v11, Method_FieldMotionManager___c__SetTacticBg_b__13_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__13_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v13, v14);
  }
  if ( !this )
    goto LABEL_16;
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__13_0,
                               (const MethodInfo_2E84EE0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (FieldMotionManager___c_c *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)LastNotNullObject_object,
                                     0LL,
                                     0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( LastNotNullObject_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LastNotNullObject_object, flg, 0LL);
      return;
    }
LABEL_16:
    sub_1B64324(v9);
  }
}


void __fastcall FieldMotionManager__SetVariables___Il2CppFullySharedGenericType_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
        const MethodInfo_2E85EE8 *method)
{
  unsigned __int64 StatusReg; // x21
  _QWORD *monitor; // x19
  __int64 v8; // x8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x0
  __int16 v22; // w8
  __int64 v23; // x22
  __int64 v24; // x8
  int v25; // w9
  char *v26; // x24
  System_Collections_Generic_List_object__o *v27; // x26
  PlayMakerFSM_o *Fsm; // x0
  __int64 v29; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v31; // x25
  unsigned __int64 i; // x23
  UnityEngine_Object_o *v33; // x26
  __int64 v34; // x27
  System_Type_o *TypeFromHandle; // x27
  System_Type_o *v36; // x0
  __int64 v37; // x27
  PlayMakerFSM_o *v38; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **p_klass; // x1
  System_String_c **v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_c **v43; // x1
  __int64 v44; // x27
  System_Type_o *v45; // x27
  System_Type_o *v46; // x0
  __int64 v47; // x27
  HutongGames_PlayMaker_FsmGameObject_o *v48; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v49; // x1
  UnityEngine_GameObject_c **v50; // x0
  UnityEngine_GameObject_o *v51; // x1
  __int64 v52; // x27
  System_Type_o *v53; // x27
  System_Type_o *v54; // x0
  __int64 v55; // x9
  PlayMakerFSM_o *v56; // x26
  __int64 v57; // x8
  __int64 v58; // x0
  __int64 v59; // x27
  System_Type_o *v60; // x27
  System_Type_o *v61; // x0
  __int64 v62; // x9
  PlayMakerFSM_o *v63; // x26
  __int64 v64; // x8
  __int64 v65; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v66; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v67; // x3
  System_String_o *v68; // x27
  __int64 v69; // [xsp+0h] [xbp-40h] BYREF
  __int64 v70; // [xsp+8h] [xbp-38h]
  __int64 v71; // [xsp+10h] [xbp-30h]
  unsigned __int64 v72; // [xsp+18h] [xbp-28h]
  __int64 v73; // [xsp+20h] [xbp-20h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+28h] [xbp-18h] BYREF
  System_String_o *v75; // [xsp+30h] [xbp-10h]
  __int64 v76; // [xsp+38h] [xbp-8h]
  System_RuntimeTypeHandle_o v77; // 0:w0.4
  System_RuntimeTypeHandle_o v78; // 0:w0.4
  System_RuntimeTypeHandle_o v79; // 0:w0.4
  System_RuntimeTypeHandle_o v80; // 0:w0.4
  System_RuntimeTypeHandle_o v81; // 0:w0.4
  System_RuntimeTypeHandle_o v82; // 0:w0.4
  System_RuntimeTypeHandle_o v83; // 0:w0.4
  System_RuntimeTypeHandle_o v84; // 0:w0.4

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = value.monitor;
  v76 = *(_QWORD *)(StatusReg + 40);
  klass = value.klass;
  v8 = *((_QWORD *)value.monitor + 7);
  if ( !v8 )
  {
    sub_1B640C8(&bool_var, variableName);
    sub_1B640C8(&bool_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_GameObject_var, v10);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v11);
    sub_1B640C8(&int_var, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&string_var, v18);
    sub_1B640C8(&string_TypeInfo, v19);
    sub_1B640C8(&System_Type_TypeInfo, v20);
    v8 = monitor[7];
    if ( !v8 )
    {
      sub_1BB6000();
      v8 = monitor[7];
    }
  }
  v21 = *(_QWORD *)(v8 + 8);
  v22 = *(_WORD *)(v21 + 309);
  v23 = *(unsigned int *)(v21 + 252);
  if ( (v22 & 1) != 0 )
  {
    v25 = *(_DWORD *)(v21 + 252);
  }
  else
  {
    v24 = sub_1BB5FA4(v21);
    v21 = *(_QWORD *)(monitor[7] + 8LL);
    v25 = *(_DWORD *)(v24 + 252);
    v22 = *(_WORD *)(v21 + 309);
  }
  v71 = (__int64)&v69 - (((unsigned int)(v25 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v72 = StatusReg;
  if ( (v22 & 1) == 0 )
    v21 = sub_1BB5FA4(v21);
  v70 = (__int64)&v69 - (((unsigned int)(*(_DWORD *)(v21 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  v26 = (char *)&v69 - ((v23 + 15) & 0x1FFFFFFF0LL);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                       variableName,
                                                       value.klass);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v27
    || (v73 = v23,
        System_Collections_Generic_List_object___AddRange(
          v27,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v27,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_85:
    sub_1B64324(Fsm);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v31 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1B6432C(Fsm, v29);
      v33 = (UnityEngine_Object_o *)*((_QWORD *)&v31->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        v34 = *(_QWORD *)monitor[7];
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v77.fields.value = v34;
        TypeFromHandle = System_Type__GetTypeFromHandle(v77, 0LL);
        v78.fields.value = (int)string_var;
        v36 = System_Type__GetTypeFromHandle(v78, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v36, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_85;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v33, 0LL);
          if ( !Fsm )
            goto LABEL_85;
          Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_85;
          Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
          if ( !Fsm )
            goto LABEL_85;
          Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    variableName,
                                    0LL);
          if ( Fsm )
          {
            v37 = monitor[7];
            v38 = Fsm;
            if ( *(int *)(*(_QWORD *)(v37 + 8) + 40LL) >= 0 )
              p_klass = &klass;
            else
              p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
            memcpy(v26, p_klass, v73);
            v40 = (System_String_c **)j_il2cpp_value_box_0(*(_QWORD *)(v37 + 8), v26);
            if ( v40 )
            {
              if ( *v40 == string_TypeInfo )
                v43 = v40;
              else
                v43 = 0LL;
            }
            else
            {
              v43 = 0LL;
            }
            v38->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v43;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->fields.addEventHandlers, (int32_t)v43, v41, v42);
          }
        }
        else
        {
          v44 = *(_QWORD *)monitor[7];
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v79.fields.value = v44;
          v45 = System_Type__GetTypeFromHandle(v79, 0LL);
          v80.fields.value = (int)UnityEngine_GameObject_var;
          v46 = System_Type__GetTypeFromHandle(v80, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v45, v46, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v33 )
              goto LABEL_85;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v33, 0LL);
            if ( !Fsm )
              goto LABEL_85;
            Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
            if ( !Fsm )
              goto LABEL_85;
            Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
            if ( !Fsm )
              goto LABEL_85;
            Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                      variableName,
                                      0LL);
            if ( Fsm )
            {
              v47 = monitor[7];
              v48 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              if ( *(int *)(*(_QWORD *)(v47 + 8) + 40LL) >= 0 )
                v49 = &klass;
              else
                v49 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
              memcpy(v26, v49, v73);
              v50 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(*(_QWORD *)(v47 + 8), v26);
              if ( v50 )
              {
                if ( *v50 == UnityEngine_GameObject_TypeInfo )
                  v51 = (UnityEngine_GameObject_o *)v50;
                else
                  v51 = 0LL;
              }
              else
              {
                v51 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v48, v51, 0LL);
            }
          }
          else
          {
            v52 = *(_QWORD *)monitor[7];
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v81.fields.value = v52;
            v53 = System_Type__GetTypeFromHandle(v81, 0LL);
            v82.fields.value = (int)int_var;
            v54 = System_Type__GetTypeFromHandle(v82, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v53, v54, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v33 )
                goto LABEL_85;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v33, 0LL);
              if ( !Fsm )
                goto LABEL_85;
              Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
              if ( !Fsm )
                goto LABEL_85;
              Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
              if ( !Fsm )
                goto LABEL_85;
              Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                        variableName,
                                        0LL);
              if ( Fsm )
              {
                v55 = monitor[7];
                v56 = Fsm;
                v57 = *(_QWORD *)(v55 + 8);
                if ( (*(_BYTE *)(v57 + 309) & 1) != 0 )
                {
                  v58 = *(_QWORD *)(v55 + 8);
                }
                else
                {
                  LODWORD(v58) = sub_1BB5FA4(*(_QWORD *)(v55 + 8));
                  v55 = monitor[7];
                  v57 = *(_QWORD *)(v55 + 8);
                }
                if ( *(int *)(v57 + 40) >= 0 )
                  v66 = &klass;
                else
                  v66 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                sub_1B64B30(v58, *(_QWORD *)(v55 + 16), v71, v66);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v75, 0LL);
                LODWORD(v56->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v59 = *(_QWORD *)monitor[7];
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v83.fields.value = v59;
              v60 = System_Type__GetTypeFromHandle(v83, 0LL);
              v84.fields.value = (int)bool_var;
              v61 = System_Type__GetTypeFromHandle(v84, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v60, v61, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v33 )
                  goto LABEL_85;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v33, 0LL);
                if ( !Fsm )
                  goto LABEL_85;
                Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
                if ( !Fsm )
                  goto LABEL_85;
                Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
                if ( !Fsm )
                  goto LABEL_85;
                Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                          (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                          variableName,
                                          0LL);
                if ( Fsm )
                {
                  v62 = monitor[7];
                  v63 = Fsm;
                  v64 = *(_QWORD *)(v62 + 8);
                  if ( (*(_BYTE *)(v64 + 309) & 1) != 0 )
                  {
                    v65 = *(_QWORD *)(v62 + 8);
                  }
                  else
                  {
                    LODWORD(v65) = sub_1BB5FA4(*(_QWORD *)(v62 + 8));
                    v62 = monitor[7];
                    v64 = *(_QWORD *)(v62 + 8);
                  }
                  if ( *(int *)(v64 + 40) >= 0 )
                    v67 = &klass;
                  else
                    v67 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                  sub_1B64B30(v65, *(_QWORD *)(v62 + 16), v70, v67);
                  v68 = v75;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v68, 0LL);
                  LOBYTE(v63->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v31->fields.m_CancellationTokenSource;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_2E85000 *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v21; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v23; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v25; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v28; // x0
  PlayMakerFSM_o *v29; // x22
  System_String_c **v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_c **v33; // x1
  Il2CppType *v34; // x23
  System_Type_o *v35; // x23
  System_Type_o *v36; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v37; // x22
  UnityEngine_GameObject_c **v38; // x0
  UnityEngine_GameObject_o *v39; // x1
  Il2CppType *v40; // x23
  System_Type_o *v41; // x23
  System_Type_o *v42; // x0
  PlayMakerFSM_o *v43; // x22
  System_String_o *v44; // x0
  Il2CppType *v45; // x23
  System_Type_o *v46; // x23
  System_Type_o *v47; // x0
  PlayMakerFSM_o *v48; // x22
  System_String_o *v49; // x0
  char v50[4]; // [xsp+4h] [xbp-6Ch] BYREF
  char v51[4]; // [xsp+8h] [xbp-68h] BYREF
  char v52[4]; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4
  System_RuntimeTypeHandle_o v55; // 0:w0.4
  System_RuntimeTypeHandle_o v56; // 0:w0.4
  System_RuntimeTypeHandle_o v57; // 0:w0.4
  System_RuntimeTypeHandle_o v58; // 0:w0.4
  System_RuntimeTypeHandle_o v59; // 0:w0.4
  System_RuntimeTypeHandle_o v60; // 0:w0.4

  v52[0] = value;
  if ( !method->rgctx_data )
  {
    sub_1B640C8(&bool_var, variableName);
    sub_1B640C8(&bool_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_GameObject_var, v8);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v9);
    sub_1B640C8(&int_var, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&string_var, v16);
    sub_1B640C8(&string_TypeInfo, v17);
    sub_1B640C8(&System_Type_TypeInfo, v18);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                       variableName,
                                                       value);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v19
    || (System_Collections_Generic_List_object___AddRange(
          v19,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v19,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1B64324(Fsm);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v23 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1B6432C(Fsm, v21);
      v25 = (UnityEngine_Object_o *)*((_QWORD *)&v23->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v53.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v53, 0LL);
        v54.fields.value = (int)string_var;
        v28 = System_Type__GetTypeFromHandle(v54, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v28, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
          if ( !Fsm )
            goto LABEL_64;
          Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    variableName,
                                    0LL);
          if ( Fsm )
          {
            v29 = Fsm;
            v51[0] = v52[0];
            v30 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v51);
            if ( v30 )
            {
              if ( *v30 == string_TypeInfo )
                v33 = v30;
              else
                v33 = 0LL;
            }
            else
            {
              v33 = 0LL;
            }
            v29->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v33;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->fields.addEventHandlers, (int32_t)v33, v31, v32);
          }
        }
        else
        {
          v34 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v55.fields.value = (int)v34;
          v35 = System_Type__GetTypeFromHandle(v55, 0LL);
          v56.fields.value = (int)UnityEngine_GameObject_var;
          v36 = System_Type__GetTypeFromHandle(v56, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v35, v36, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
            if ( !Fsm )
              goto LABEL_64;
            Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                      variableName,
                                      0LL);
            if ( Fsm )
            {
              v37 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v50[0] = v52[0];
              v38 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v50);
              if ( v38 )
              {
                if ( *v38 == UnityEngine_GameObject_TypeInfo )
                  v39 = (UnityEngine_GameObject_o *)v38;
                else
                  v39 = 0LL;
              }
              else
              {
                v39 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v37, v39, 0LL);
            }
          }
          else
          {
            v40 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v57.fields.value = (int)v40;
            v41 = System_Type__GetTypeFromHandle(v57, 0LL);
            v58.fields.value = (int)int_var;
            v42 = System_Type__GetTypeFromHandle(v58, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v41, v42, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
              if ( !Fsm )
                goto LABEL_64;
              Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                        variableName,
                                        0LL);
              if ( Fsm )
              {
                v43 = Fsm;
                if ( !bool_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                v44 = System_Boolean__ToString((bool)v52, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v44, 0LL);
                LODWORD(v43->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v45 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v59.fields.value = (int)v45;
              v46 = System_Type__GetTypeFromHandle(v59, 0LL);
              v60.fields.value = (int)bool_var;
              v47 = System_Type__GetTypeFromHandle(v60, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v46, v47, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v25 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                          (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                          variableName,
                                          0LL);
                if ( Fsm )
                {
                  v48 = Fsm;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  v49 = System_Boolean__ToString((bool)v52, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v49, 0LL);
                  LOBYTE(v48->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v23->fields.m_CancellationTokenSource;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_2E85518 *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v21; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v23; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v25; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v28; // x0
  PlayMakerFSM_o *v29; // x22
  System_String_c **v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_c **v33; // x1
  Il2CppType *v34; // x23
  System_Type_o *v35; // x23
  System_Type_o *v36; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v37; // x22
  UnityEngine_GameObject_c **v38; // x0
  UnityEngine_GameObject_o *v39; // x1
  Il2CppType *v40; // x23
  System_Type_o *v41; // x23
  System_Type_o *v42; // x0
  PlayMakerFSM_o *v43; // x22
  System_String_o *v44; // x0
  Il2CppType *v45; // x23
  System_Type_o *v46; // x23
  System_Type_o *v47; // x0
  PlayMakerFSM_o *v48; // x22
  System_String_o *v49; // x23
  int32_t v50; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v51; // [xsp+8h] [xbp-68h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4
  System_RuntimeTypeHandle_o v55; // 0:w0.4
  System_RuntimeTypeHandle_o v56; // 0:w0.4
  System_RuntimeTypeHandle_o v57; // 0:w0.4
  System_RuntimeTypeHandle_o v58; // 0:w0.4
  System_RuntimeTypeHandle_o v59; // 0:w0.4
  System_RuntimeTypeHandle_o v60; // 0:w0.4

  v52 = value;
  if ( !method->rgctx_data )
  {
    sub_1B640C8(&bool_var, variableName);
    sub_1B640C8(&bool_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_GameObject_var, v8);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v9);
    sub_1B640C8(&int_var, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&string_var, v16);
    sub_1B640C8(&string_TypeInfo, v17);
    sub_1B640C8(&System_Type_TypeInfo, v18);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                       variableName,
                                                       *(_QWORD *)&value);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v19
    || (System_Collections_Generic_List_object___AddRange(
          v19,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v19,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_62:
    sub_1B64324(Fsm);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v23 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1B6432C(Fsm, v21);
      v25 = (UnityEngine_Object_o *)*((_QWORD *)&v23->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v53.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v53, 0LL);
        v54.fields.value = (int)string_var;
        v28 = System_Type__GetTypeFromHandle(v54, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v28, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_62;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
          if ( !Fsm )
            goto LABEL_62;
          Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_62;
          Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
          if ( !Fsm )
            goto LABEL_62;
          Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    variableName,
                                    0LL);
          if ( Fsm )
          {
            v29 = Fsm;
            v51 = v52;
            v30 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v51);
            if ( v30 )
            {
              if ( *v30 == string_TypeInfo )
                v33 = v30;
              else
                v33 = 0LL;
            }
            else
            {
              v33 = 0LL;
            }
            v29->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v33;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->fields.addEventHandlers, (int32_t)v33, v31, v32);
          }
        }
        else
        {
          v34 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v55.fields.value = (int)v34;
          v35 = System_Type__GetTypeFromHandle(v55, 0LL);
          v56.fields.value = (int)UnityEngine_GameObject_var;
          v36 = System_Type__GetTypeFromHandle(v56, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v35, v36, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_62;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
            if ( !Fsm )
              goto LABEL_62;
            Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
            if ( !Fsm )
              goto LABEL_62;
            Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
            if ( !Fsm )
              goto LABEL_62;
            Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                      variableName,
                                      0LL);
            if ( Fsm )
            {
              v37 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v50 = v52;
              v38 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v50);
              if ( v38 )
              {
                if ( *v38 == UnityEngine_GameObject_TypeInfo )
                  v39 = (UnityEngine_GameObject_o *)v38;
                else
                  v39 = 0LL;
              }
              else
              {
                v39 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v37, v39, 0LL);
            }
          }
          else
          {
            v40 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v57.fields.value = (int)v40;
            v41 = System_Type__GetTypeFromHandle(v57, 0LL);
            v58.fields.value = (int)int_var;
            v42 = System_Type__GetTypeFromHandle(v58, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v41, v42, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_62;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
              if ( !Fsm )
                goto LABEL_62;
              Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
              if ( !Fsm )
                goto LABEL_62;
              Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
              if ( !Fsm )
                goto LABEL_62;
              Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                        variableName,
                                        0LL);
              if ( Fsm )
              {
                v43 = Fsm;
                v44 = System_Int32__ToString((int32_t)&v52, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v44, 0LL);
                LODWORD(v43->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v45 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v59.fields.value = (int)v45;
              v46 = System_Type__GetTypeFromHandle(v59, 0LL);
              v60.fields.value = (int)bool_var;
              v47 = System_Type__GetTypeFromHandle(v60, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v46, v47, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v25 )
                  goto LABEL_62;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
                if ( !Fsm )
                  goto LABEL_62;
                Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
                if ( !Fsm )
                  goto LABEL_62;
                Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
                if ( !Fsm )
                  goto LABEL_62;
                Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                          (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                          variableName,
                                          0LL);
                if ( Fsm )
                {
                  v48 = Fsm;
                  v49 = System_Int32__ToString((int32_t)&v52, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v49, 0LL);
                  LOBYTE(v48->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v23->fields.m_CancellationTokenSource;
    }
  }
}


void __fastcall FieldMotionManager__SetVariables_object_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Il2CppObject *value,
        const MethodInfo_2E85A20 *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x23
  void *Fsm; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  _QWORD *v24; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v26; // x23
  Il2CppType *_0_T; // x24
  System_Type_o *TypeFromHandle; // x24
  System_Type_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x1
  Il2CppType *v33; // x24
  System_Type_o *v34; // x24
  System_Type_o *v35; // x0
  Il2CppObject *v36; // x1
  Il2CppType *v37; // x24
  System_Type_o *v38; // x24
  System_Type_o *v39; // x0
  _DWORD *v40; // x23
  System_String_o *v41; // x0
  Il2CppType *v42; // x24
  System_Type_o *v43; // x24
  System_Type_o *v44; // x0
  _BYTE *v45; // x23
  System_String_o *v46; // x24
  System_RuntimeTypeHandle_o v47; // 0:w0.4
  System_RuntimeTypeHandle_o v48; // 0:w0.4
  System_RuntimeTypeHandle_o v49; // 0:w0.4
  System_RuntimeTypeHandle_o v50; // 0:w0.4
  System_RuntimeTypeHandle_o v51; // 0:w0.4
  System_RuntimeTypeHandle_o v52; // 0:w0.4
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&bool_var, variableName);
    sub_1B640C8(&bool_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_GameObject_var, v9);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v10);
    sub_1B640C8(&int_var, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&string_var, v17);
    sub_1B640C8(&string_TypeInfo, v18);
    sub_1B640C8(&System_Type_TypeInfo, v19);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                       variableName,
                                                       value);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v20
    || (System_Collections_Generic_List_object___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = System_Collections_Generic_List_object___ToArray(
                 v20,
                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1B64324(Fsm);
  }
  v23 = *((_QWORD *)Fsm + 3);
  v24 = Fsm;
  if ( (int)v23 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v23; ++i )
    {
      if ( i >= (unsigned int)v23 )
        sub_1B6432C(Fsm, v22);
      v26 = (UnityEngine_Object_o *)v24[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (void *)UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v47.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v47, 0LL);
        v48.fields.value = (int)string_var;
        v29 = System_Type__GetTypeFromHandle(v48, 0LL);
        Fsm = (void *)System_Type__op_Equality(TypeFromHandle, v29, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v26, 0LL);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = (void *)*((_QWORD *)Fsm + 11);
          if ( !Fsm )
            goto LABEL_64;
          Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmString(
                  (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                  variableName,
                  0LL);
          if ( Fsm )
          {
            if ( value )
            {
              if ( (System_String_c *)value->klass == string_TypeInfo )
                v32 = value;
              else
                v32 = 0LL;
            }
            else
            {
              v32 = 0LL;
            }
            *((_QWORD *)Fsm + 7) = v32;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)Fsm + 56), (int32_t)v32, v30, v31);
          }
        }
        else
        {
          v33 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v49.fields.value = (int)v33;
          v34 = System_Type__GetTypeFromHandle(v49, 0LL);
          v50.fields.value = (int)UnityEngine_GameObject_var;
          v35 = System_Type__GetTypeFromHandle(v50, 0LL);
          Fsm = (void *)System_Type__op_Equality(v34, v35, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v26 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v26, 0LL);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = (void *)*((_QWORD *)Fsm + 11);
            if ( !Fsm )
              goto LABEL_64;
            Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                    variableName,
                    0LL);
            if ( Fsm )
            {
              if ( value )
              {
                if ( (UnityEngine_GameObject_c *)value->klass == UnityEngine_GameObject_TypeInfo )
                  v36 = value;
                else
                  v36 = 0LL;
              }
              else
              {
                v36 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                (UnityEngine_GameObject_o *)v36,
                0LL);
            }
          }
          else
          {
            v37 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v51.fields.value = (int)v37;
            v38 = System_Type__GetTypeFromHandle(v51, 0LL);
            v52.fields.value = (int)int_var;
            v39 = System_Type__GetTypeFromHandle(v52, 0LL);
            Fsm = (void *)System_Type__op_Equality(v38, v39, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v26 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v26, 0LL);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = (void *)*((_QWORD *)Fsm + 11);
              if ( !Fsm )
                goto LABEL_64;
              Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                      (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                      variableName,
                      0LL);
              if ( Fsm )
              {
                if ( !value )
                  goto LABEL_64;
                v40 = Fsm;
                v41 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                           value,
                                           value->klass->vtable[4].methodPtr);
                Fsm = (void *)System_Int32__Parse(v41, 0LL);
                v40[14] = (_DWORD)Fsm;
              }
            }
            else
            {
              v42 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v53.fields.value = (int)v42;
              v43 = System_Type__GetTypeFromHandle(v53, 0LL);
              v54.fields.value = (int)bool_var;
              v44 = System_Type__GetTypeFromHandle(v54, 0LL);
              Fsm = (void *)System_Type__op_Equality(v43, v44, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v26 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v26, 0LL);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = (void *)*((_QWORD *)Fsm + 11);
                if ( !Fsm )
                  goto LABEL_64;
                Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                        (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                        variableName,
                        0LL);
                if ( Fsm )
                {
                  if ( !value )
                    goto LABEL_64;
                  v45 = Fsm;
                  v46 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                             value,
                                             value->klass->vtable[4].methodPtr);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (void *)System_Boolean__Parse(v46, 0LL);
                  v45[56] = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(v23) = *((_DWORD *)v24 + 6);
    }
  }
}


void __fastcall FieldMotionManager__SwitchUniqueFieldMotion(
        FieldMotionManager_o *this,
        StageEntity_o *stageEnt,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *EnableFieldMotionIds; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_T__TResult__o *v21; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v22; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x19
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v28; // x19
  unsigned __int64 i; // x28
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x21
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x29
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x22
  System_Func_object__bool__o *v49; // x23
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x21
  Il2CppClass **v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0

  if ( (byte_49FF48F & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleDataDefine_FieldMotionPath__, stageEnt);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__string___, v8);
    sub_1B640C8(&System_Func_int__string__TypeInfo, v9);
    sub_1B640C8(&System_Func_BattleFieldMotionComponent__bool__TypeInfo, v10);
    sub_1B640C8(&System_IDisposable_TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_string__TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_string__TypeInfo, v13);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B640C8(&Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__, v15);
    sub_1B640C8(&FieldMotionManager___c__DisplayClass8_0_TypeInfo, v16);
    byte_49FF48F = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v17);
  v21 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__string__TypeInfo, v19, v20);
  System_Func_int__object____ctor(v21, 0LL, Method_BattleDataDefine_FieldMotionPath__, 0LL);
  v22 = System_Linq_Enumerable__Select_int__object_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v21,
          (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v22 )
    sub_1B64324(0LL);
  klass = v22->klass;
  v24 = v22;
  v25 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(v22, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v24,
          *(_QWORD *)(p_method + 8));
  if ( !v28 )
    sub_1B64324(0LL);
  for ( i = 1LL; ; ++i )
  {
    v30 = *(_QWORD *)v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_16:
      v33 = sub_1BB60A8(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v28, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v36 = sub_1B64314(FieldMotionManager___c__DisplayClass8_0_TypeInfo, v34, v35);
    System_Object___ctor((Il2CppObject *)v36, 0LL);
    v37 = *(_QWORD *)v28;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v39 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_23;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_23:
      v40 = sub_1BB60A8(v28, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v28, *(_QWORD *)(v40 + 8));
    if ( !v36 )
      sub_1B64324(v41);
    *(_QWORD *)(v36 + 16) = v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 16), v41, v42, v43);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_1B64324(v44);
    if ( (__int64)i >= (int)fieldMotionArray->max_length )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v49 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleFieldMotionComponent__bool__TypeInfo, v45, v46);
    System_Func_object__bool____ctor(
      v49,
      (Il2CppObject *)v36,
      Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__,
      0LL);
    v50 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v54 = v50;
    if ( v50 )
    {
      v50 = (Il2CppObject *)sub_1B64204(v50, fieldMotionArray->obj.klass->_1.element_class);
      if ( !v50 )
      {
        v60 = sub_1B64348(0LL);
        sub_1B641F0(v60, 0LL);
      }
    }
    if ( i >= fieldMotionArray->max_length )
      sub_1B6432C(v50, v51);
    v55 = &fieldMotionArray->obj.klass + i;
    v55[4] = (Il2CppClass *)v54;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v54, v52, v53);
  }
  v56 = *(_QWORD *)v28;
  v57 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_36;
    }
    v59 = v56 + 16LL * *v58 + 312;
  }
  else
  {
LABEL_36:
    v59 = sub_1BB60A8(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v59)(v28, *(_QWORD *)(v59 + 8));
}


void __fastcall FieldMotionManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF49C & 1) == 0 )
  {
    sub_1B640C8(&FieldMotionManager___c_TypeInfo, v1);
    byte_49FF49C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(FieldMotionManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  FieldMotionManager___c_TypeInfo->static_fields->__9 = (struct FieldMotionManager___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)FieldMotionManager___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall FieldMotionManager___c___ctor(FieldMotionManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetEnemyStage_b__15_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetPlayerStage_b__14_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___SetTacticBg_b__13_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return comp->fields.tacticBg;
}


void __fastcall FieldMotionManager___c__DisplayClass16_0___ctor(
        FieldMotionManager___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c__DisplayClass16_0___GetGameObject_b__0(
        FieldMotionManager___c__DisplayClass16_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return BattleFieldMotionComponent__getGameObject(comp, this->fields.name, 0LL);
}


void __fastcall FieldMotionManager___c__DisplayClass17_0___ctor(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__0(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return BattleFieldMotionComponent__getEnemyTacticalTr(comp, this->fields.index, 0LL);
}


void __fastcall FieldMotionManager___c__DisplayClass18_0___ctor(
        FieldMotionManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass18_0___GetTargetTransform_b__0(
        FieldMotionManager___c__DisplayClass18_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B64324(this);
  return BattleFieldMotionComponent__GetTargetTr(comp, this->fields.type, this->fields.index, 0LL);
}


void __fastcall FieldMotionManager___c__DisplayClass8_0___ctor(
        FieldMotionManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FieldMotionManager___c__DisplayClass8_0___SwitchUniqueFieldMotion_b__0(
        FieldMotionManager___c__DisplayClass8_0_o *this,
        BattleFieldMotionComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0

  if ( (byte_49FF49D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_49FF49D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_1B64324(v5);
  return BasicHelper__EqualExceptNullOrEmpty(x->fields._AssetName_k__BackingField, this->fields.targetName, 0LL);
}