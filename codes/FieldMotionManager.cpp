void __fastcall FieldMotionManager___ctor(
        FieldMotionManager_o *this,
        BattleFieldMotionComponent_array *fieldMotions,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  _QWORD *v7; // x22
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  struct System_Int32_array **v11; // x8
  struct System_Int32_array *v12; // x1
  FieldMotionManager_Fields *p_fields; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  BattleFieldMotionComponent_o *v16; // x0
  __int64 v17; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v19; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v21; // x27
  UnityEngine_Object_o *v22; // x23
  struct BattleFieldMotionComponent_array *v23; // x8
  System_Object_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A5E25E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E25E = 1;
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  if ( !*(_DWORD *)(v9 + 224) )
    j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  v11 = *(struct System_Int32_array ***)(v10 + 184);
  v12 = *v11;
  this->fields.baseMotionIds = *v11;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseMotionIds,
    (int32_t)v12,
    (int32_t)perf,
    (int32_t)method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)fieldMotions, v14, v15);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_23:
    sub_1B8880C(v16, v17);
  v19 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v21 = v19 - 4;
    if ( v19 - 4 >= (int)max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_25;
    v22 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) != 0 )
    {
      v23 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_23;
      if ( v21 >= v23->max_length )
LABEL_25:
        sub_1B88814(v16, v17);
      v16 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v23->obj.klass + v19);
      if ( !v16 )
        goto LABEL_23;
      BattleFieldMotionComponent__setPerf(v16, perf, 0LL);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v19;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_23;
  }
  v24 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotions,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = (struct BattleFieldMotionComponent_array *)v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.retentionFieldMotionArray, (int32_t)v24, v25, v26);
}


Il2CppObject *__fastcall FieldMotionManager__FindLastNotNullObject_object_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_2ECBEC0 *method)
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
    this = (FieldMotionManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (FieldMotionManager_o *)sub_1BDA4E8();
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_18:
    sub_1B8880C(this, getObjectFunc);
  v7 = fieldMotionArray->max_length - 1;
  if ( (v7 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v7 >= fieldMotionArray->max_length )
LABEL_21:
      sub_1B88814(this, getObjectFunc);
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
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *baseMotionIds; // x21
  System_Collections_Generic_List_int__o *v15; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CurWaveEnemyDeckMotionIds; // x0
  FieldMotionManager_c *klass; // x8
  FieldMotionManager_o *v18; // x20
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
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
  __int64 v33; // x1
  int32_t v34; // w21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  v6 = this;
  if ( (byte_4A5E260 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    this = (FieldMotionManager_o *)sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5E260 = 1;
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
      v13 = System_Linq_Enumerable__Reverse_int_(
              WaveFieldMotionIds,
              (const MethodInfo_2EAAE04 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v13,
               (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    baseMotionIds = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.baseMotionIds;
    v15 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55443684(
      v15,
      baseMotionIds,
      (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0LL);
      this = (FieldMotionManager_o *)System_Linq_Enumerable__Reverse_int_(
                                       CurWaveEnemyDeckMotionIds,
                                       (const MethodInfo_2EAAE04 *)Method_System_Linq_Enumerable_Reverse_int___);
      if ( this )
      {
        klass = this->klass;
        v18 = this;
        v19 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
          {
            --v19;
            p_offset += 4;
            if ( !v19 )
              goto LABEL_22;
          }
          v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_22:
          v21 = sub_1BDA590(this, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
        }
        v23 = (*(__int64 (__fastcall **)(FieldMotionManager_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
        if ( !v23 )
          sub_1B8880C(0LL, v22);
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
            v27 = sub_1BDA590(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
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
            v31 = sub_1BDA590(v23, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
          if ( !v15 )
            sub_1B8880C(v32, v33);
          v34 = v32;
          v35 = System_Collections_Generic_List_int___Contains(
                  v15,
                  v32,
                  (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v35 )
            v35 = System_Collections_Generic_List_int___Remove(
                    v15,
                    v34,
                    (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
          items = v15->fields._items;
          v38 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            sub_1B8880C(v35, v36);
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              v34,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size + 1] = v34;
          }
        }
        v40 = *(_QWORD *)v23;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_49;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_49:
          v43 = sub_1BDA590(v23, System_IDisposable_TypeInfo, 0LL);
        }
        this = (FieldMotionManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v23, *(_QWORD *)(v43 + 8));
        if ( v15 )
          return System_Collections_Generic_List_int___ToArray(
                   v15,
                   (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_55:
    sub_1B8880C(this, stageEnt);
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  if ( !*(_DWORD *)(v9 + 224) )
    j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  return **(System_Int32_array ***)(v10 + 184);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager__GetEnemyStage(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  FieldMotionManager___c_c *v3; // x0
  System_Func_object__object__o *_9__15_0; // x20
  Il2CppObject *v5; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4A5E264 & 1) == 0 )
  {
    sub_1B885B0(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1B885B0(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_FieldMotionManager___c__GetEnemyStage_b__15_0__);
    sub_1B885B0(&FieldMotionManager___c_TypeInfo);
    byte_4A5E264 = 1;
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
    _9__15_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__15_0, v5, Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__15_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v7, v8);
  }
  if ( !this )
    sub_1B8880C(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__15_0,
                               (const MethodInfo_2ECBEC0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Func_object__object__o *v10; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4A5E265 & 1) == 0 )
  {
    sub_1B885B0(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1B885B0(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__);
    sub_1B885B0(&FieldMotionManager___c__DisplayClass16_0_TypeInfo);
    byte_4A5E265 = 1;
  }
  v5 = sub_1B887FC(FieldMotionManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)name, v8, v9);
  v10 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
  System_Func_object__object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v10,
                               (const MethodInfo_2ECBEC0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  FieldMotionManager___c_c *v3; // x0
  System_Func_object__object__o *_9__14_0; // x20
  Il2CppObject *v5; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4A5E263 & 1) == 0 )
  {
    sub_1B885B0(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1B885B0(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_FieldMotionManager___c__GetPlayerStage_b__14_0__);
    sub_1B885B0(&FieldMotionManager___c_TypeInfo);
    byte_4A5E263 = 1;
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
    _9__14_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__14_0, v5, Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__14_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v7, v8);
  }
  if ( !this )
    sub_1B8880C(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__14_0,
                               (const MethodInfo_2ECBEC0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)LastNotNullObject_object;
  else
    return 0LL;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager__GetTargetTransform(
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

  if ( (byte_4A5E267 & 1) == 0 )
  {
    sub_1B885B0(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1B885B0(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__);
    sub_1B885B0(&FieldMotionManager___c__DisplayClass18_0_TypeInfo);
    byte_4A5E267 = 1;
  }
  v7 = sub_1B887FC(FieldMotionManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = type;
  *(_DWORD *)(v7 + 20) = index;
  v10 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
  System_Func_object__object____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v10,
                               (const MethodInfo_2ECBEC0 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0LL, 0LL) )
    return (UnityEngine_Transform_o *)LastNotNullObject_object;
  else
    return 0LL;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager__GetTransform(
        FieldMotionManager_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x22
  FieldMotionManager___c_c *v8; // x0
  __int64 v9; // x1
  System_Func_object__object__o *v10; // x0
  __int64 *v11; // x8
  UnityEngine_Transform_o *result; // x0
  System_Func_object__object__o *_9__17_1; // x20
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__17_1; // x0
  Il2CppObject *v20; // x21
  struct FieldMotionManager___c_StaticFields *v21; // x0

  if ( (byte_4A5E266 & 1) == 0 )
  {
    sub_1B885B0(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1B885B0(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1B885B0(&Method_FieldMotionManager___c__GetTransform_b__17_1__);
    sub_1B885B0(&Method_FieldMotionManager___c__GetTransform_b__17_3__);
    sub_1B885B0(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__);
    sub_1B885B0(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__);
    sub_1B885B0(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__);
    sub_1B885B0(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__);
    sub_1B885B0(&FieldMotionManager___c__DisplayClass17_0_TypeInfo);
    sub_1B885B0(&FieldMotionManager___c_TypeInfo);
    byte_4A5E266 = 1;
  }
  v7 = sub_1B887FC(FieldMotionManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
LABEL_22:
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = index;
  switch ( type )
  {
    case 0:
      v10 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
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
      _9__17_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v14, Method_FieldMotionManager___c__GetTransform_b__17_1__, 0LL);
      v17 = (int)_9__17_1;
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      static_fields->__9__17_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__17_1;
      goto LABEL_20;
    case 2:
      v10 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
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
      _9__17_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v20, Method_FieldMotionManager___c__GetTransform_b__17_3__, 0LL);
      v17 = (int)_9__17_1;
      v21 = FieldMotionManager___c_TypeInfo->static_fields;
      v21->__9__17_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (ServantStatusBattleListViewItem_o *)&v21->__9__17_3;
LABEL_20:
      sub_1B88554(p__9__17_1, v17, v15, v16);
LABEL_21:
      if ( !this )
        goto LABEL_22;
      goto LABEL_26;
    case 4:
      v10 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__;
      goto LABEL_25;
    case 5:
      v10 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__;
LABEL_25:
      _9__17_1 = v10;
      System_Func_object__object____ctor(v10, (Il2CppObject *)v7, *v11, 0LL);
LABEL_26:
      result = (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                            this,
                                            (System_Func_BattleFieldMotionComponent__T__o *)_9__17_1,
                                            (const MethodInfo_2ECBEC0 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  if ( (byte_4A5E261 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E261 = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1B8880C(this, method);
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
        sub_1B88814(this, method);
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
  UnityEngine_UnityException_o *v18; // x20
  __int64 v19; // x0

  if ( (byte_4A5E268 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E268 = 1;
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
    v14 = (System_String_o *)sub_1B885C4(&StringLiteral_312/*" not found "*/);
    v15 = (System_String_o *)sub_1B885C4(&StringLiteral_279/*" in fieldFsm "*/);
    v16 = System_String__Concat_61718292(v14, v8, v15, 0LL);
    v17 = sub_1B885C4(&UnityEngine_UnityException_TypeInfo);
    v18 = (UnityEngine_UnityException_o *)sub_1B887FC(v17);
    UnityEngine_UnityException___ctor_69443840(v18, v16, 0LL);
    v19 = sub_1B885C4(&Method_FieldMotionManager_PlayBattleAction__);
    sub_1B886D8(v18, v19);
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
    sub_1B88814(MotionName, v6);
  MotionName = v13->m_Items[v10];
  if ( !MotionName )
LABEL_15:
    sub_1B8880C(MotionName, v6);
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
    sub_1B8880C(this, method);
  v6 = 1LL;
  v7 = 40LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    if ( v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      sub_1B88814(this, method);
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v7) = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)fieldMotionArray + v7), 0, v2, v3);
    fieldMotionArray = this->fields.fieldMotionArray;
    ++v6;
    v7 += 8LL;
    if ( !fieldMotionArray )
      goto LABEL_6;
  }
}


bool __fastcall FieldMotionManager__SendEvent(
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
  if ( (byte_4A5E269 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_PlayMakerFSM___);
    this = (FieldMotionManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E269 = 1;
  }
  fieldMotionArray = v6->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_24;
  v8 = fieldMotionArray->max_length - 1;
  if ( (v8 & 0x80000000) != 0 )
    return 0;
  while ( 1 )
  {
    if ( v8 >= fieldMotionArray->max_length )
      goto LABEL_25;
    v9 = v8;
    v10 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v6->fields.fieldMotionArray;
      if ( !v11 )
        goto LABEL_24;
      if ( (unsigned int)v9 >= v11->max_length )
        goto LABEL_25;
      this = (FieldMotionManager_o *)v11->m_Items[v9];
      if ( !this )
        goto LABEL_24;
      this = (FieldMotionManager_o *)BattleFieldMotionComponent__checkMotionEvent(
                                       (BattleFieldMotionComponent_o *)this,
                                       str,
                                       0LL);
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
  if ( (unsigned int)v9 >= v13->max_length )
    goto LABEL_25;
  this = (FieldMotionManager_o *)v13->m_Items[v9];
  if ( !this
    || (Fsm = (Il2CppObject *)BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)this, 0LL),
        ActionExtensions__Call_object_(
          (System_Action_T__o *)callbackBeforeSend,
          Fsm,
          (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_PlayMakerFSM___),
        (v15 = v6->fields.fieldMotionArray) == 0LL) )
  {
LABEL_24:
    sub_1B8880C(this, str);
  }
  if ( (unsigned int)v9 >= v15->max_length )
LABEL_25:
    sub_1B88814(this, str);
  this = (FieldMotionManager_o *)v15->m_Items[v9];
  if ( !this )
    goto LABEL_24;
  BattleFieldMotionComponent__sendEvent((BattleFieldMotionComponent_o *)this, str, 0LL);
  return 1;
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
  if ( (byte_4A5E26A & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E26A = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1B8880C(this, str);
  v6 = fieldMotionArray->max_length - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      if ( v6 >= fieldMotionArray->max_length )
LABEL_18:
        sub_1B88814(this, str);
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

  if ( (byte_4A5E26B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E26B = 1;
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
          sub_1B88814(MotionName, v8);
        MotionName = v15->m_Items[v12];
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion(MotionName, active, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1B8880C(MotionName, v8);
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
  if ( (byte_4A5E25D & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5E25D = 1;
    if ( klass )
    {
LABEL_3:
      if ( v5 )
        goto LABEL_4;
LABEL_15:
      sub_1B8880C(this, motionIds);
    }
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  this = *(FieldMotionManager_o **)(v6[7] + 16LL);
  if ( (BYTE5(this[7].fields.retentionFieldMotionArray) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_1BDA48C(this);
  klass = (struct System_Int32_array *)this[4].fields.retentionFieldMotionArray->obj.klass;
  if ( !v5 )
    goto LABEL_15;
LABEL_4:
  v5->fields.baseMotionIds = klass;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.baseMotionIds, (int32_t)klass, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetTacticBg(FieldMotionManager_o *this, bool flg, const MethodInfo *method)
{
  FieldMotionManager___c_c *v5; // x0
  System_Func_object__object__o *_9__13_0; // x21
  Il2CppObject *v7; // x22
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *LastNotNullObject_object; // x20

  if ( (byte_4A5E262 & 1) == 0 )
  {
    sub_1B885B0(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1B885B0(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_FieldMotionManager___c__SetTacticBg_b__13_0__);
    sub_1B885B0(&FieldMotionManager___c_TypeInfo);
    byte_4A5E262 = 1;
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
    _9__13_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__13_0, v7, Method_FieldMotionManager___c__SetTacticBg_b__13_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__13_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v9, v10);
  }
  if ( !this )
    goto LABEL_16;
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__13_0,
                               (const MethodInfo_2ECBEC0 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (FieldMotionManager___c_c *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)LastNotNullObject_object,
                                     0LL,
                                     0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    if ( LastNotNullObject_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LastNotNullObject_object, flg, 0LL);
      return;
    }
LABEL_16:
    sub_1B8880C(v5, flg);
  }
}


void __fastcall FieldMotionManager__SetVariables___Il2CppFullySharedGenericType_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
        const MethodInfo_2ECCEC8 *method)
{
  unsigned __int64 StatusReg; // x21
  _QWORD *monitor; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int16 v10; // w8
  __int64 v11; // x22
  __int64 v12; // x8
  int v13; // w9
  char *v14; // x24
  System_Collections_Generic_List_object__o *v15; // x26
  PlayMakerFSM_o *Fsm; // x0
  __int64 v17; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v19; // x25
  unsigned __int64 i; // x23
  UnityEngine_Object_o *v21; // x26
  __int64 v22; // x27
  System_Type_o *TypeFromHandle; // x27
  System_Type_o *v24; // x0
  __int64 v25; // x27
  PlayMakerFSM_o *v26; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **p_klass; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_String_c **v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_c **v34; // x1
  __int64 v35; // x27
  System_Type_o *v36; // x27
  System_Type_o *v37; // x0
  __int64 v38; // x27
  HutongGames_PlayMaker_FsmGameObject_o *v39; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  UnityEngine_GameObject_c **v44; // x0
  UnityEngine_GameObject_o *v45; // x1
  __int64 v46; // x27
  System_Type_o *v47; // x27
  System_Type_o *v48; // x0
  __int64 v49; // x9
  PlayMakerFSM_o *v50; // x26
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x27
  System_Type_o *v54; // x27
  System_Type_o *v55; // x0
  __int64 v56; // x9
  PlayMakerFSM_o *v57; // x26
  __int64 v58; // x8
  __int64 v59; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v60; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v61; // x3
  System_String_o *v62; // x27
  __int64 v63; // [xsp+0h] [xbp-40h] BYREF
  __int64 v64; // [xsp+8h] [xbp-38h]
  __int64 v65; // [xsp+10h] [xbp-30h]
  unsigned __int64 v66; // [xsp+18h] [xbp-28h]
  __int64 v67; // [xsp+20h] [xbp-20h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+28h] [xbp-18h] BYREF
  System_String_o *v69; // [xsp+30h] [xbp-10h]
  __int64 v70; // [xsp+38h] [xbp-8h]
  System_RuntimeTypeHandle_o v71; // 0:w0.4
  System_RuntimeTypeHandle_o v72; // 0:w0.4
  System_RuntimeTypeHandle_o v73; // 0:w0.4
  System_RuntimeTypeHandle_o v74; // 0:w0.4
  System_RuntimeTypeHandle_o v75; // 0:w0.4
  System_RuntimeTypeHandle_o v76; // 0:w0.4
  System_RuntimeTypeHandle_o v77; // 0:w0.4
  System_RuntimeTypeHandle_o v78; // 0:w0.4

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = value.monitor;
  v70 = *(_QWORD *)(StatusReg + 40);
  klass = value.klass;
  v8 = *((_QWORD *)value.monitor + 7);
  if ( !v8 )
  {
    sub_1B885B0(&bool_var);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject_var);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&int_var);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_var);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    v8 = monitor[7];
    if ( !v8 )
    {
      sub_1BDA4E8();
      v8 = monitor[7];
    }
  }
  v9 = *(_QWORD *)(v8 + 8);
  v10 = *(_WORD *)(v9 + 309);
  v11 = *(unsigned int *)(v9 + 252);
  if ( (v10 & 1) != 0 )
  {
    v13 = *(_DWORD *)(v9 + 252);
  }
  else
  {
    v12 = sub_1BDA48C(v9);
    v9 = *(_QWORD *)(monitor[7] + 8LL);
    v13 = *(_DWORD *)(v12 + 252);
    v10 = *(_WORD *)(v9 + 309);
  }
  v65 = (__int64)&v63 - (((unsigned int)(v13 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v66 = StatusReg;
  if ( (v10 & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  v64 = (__int64)&v63 - (((unsigned int)(*(_DWORD *)(v9 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  v14 = (char *)&v63 - ((v11 + 15) & 0x1FFFFFFF0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v15
    || (v67 = v11,
        System_Collections_Generic_List_object___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v15,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_85:
    sub_1B8880C(Fsm, v17);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v19 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(Fsm, v17);
      v21 = (UnityEngine_Object_o *)*((_QWORD *)&v19->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v21, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        v22 = *(_QWORD *)monitor[7];
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v71.fields.value = v22;
        TypeFromHandle = System_Type__GetTypeFromHandle(v71, 0LL);
        v72.fields.value = (int)string_var;
        v24 = System_Type__GetTypeFromHandle(v72, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v24, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_85;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v21, 0LL);
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
            v25 = monitor[7];
            v26 = Fsm;
            if ( *(int *)(*(_QWORD *)(v25 + 8) + 40LL) >= 0 )
              p_klass = &klass;
            else
              p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
            memcpy(v14, p_klass, v67);
            v31 = (System_String_c **)j_il2cpp_value_box_0(*(_QWORD *)(v25 + 8), v14, v28, v29, v30);
            if ( v31 )
            {
              if ( *v31 == string_TypeInfo )
                v34 = v31;
              else
                v34 = 0LL;
            }
            else
            {
              v34 = 0LL;
            }
            v26->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v34;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.addEventHandlers, (int32_t)v34, v32, v33);
          }
        }
        else
        {
          v35 = *(_QWORD *)monitor[7];
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v73.fields.value = v35;
          v36 = System_Type__GetTypeFromHandle(v73, 0LL);
          v74.fields.value = (int)UnityEngine_GameObject_var;
          v37 = System_Type__GetTypeFromHandle(v74, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v36, v37, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_85;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v21, 0LL);
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
              v38 = monitor[7];
              v39 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              if ( *(int *)(*(_QWORD *)(v38 + 8) + 40LL) >= 0 )
                v40 = &klass;
              else
                v40 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
              memcpy(v14, v40, v67);
              v44 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(*(_QWORD *)(v38 + 8), v14, v41, v42, v43);
              if ( v44 )
              {
                if ( *v44 == UnityEngine_GameObject_TypeInfo )
                  v45 = (UnityEngine_GameObject_o *)v44;
                else
                  v45 = 0LL;
              }
              else
              {
                v45 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v39, v45, 0LL);
            }
          }
          else
          {
            v46 = *(_QWORD *)monitor[7];
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v75.fields.value = v46;
            v47 = System_Type__GetTypeFromHandle(v75, 0LL);
            v76.fields.value = (int)int_var;
            v48 = System_Type__GetTypeFromHandle(v76, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v47, v48, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v21 )
                goto LABEL_85;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v21, 0LL);
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
                v49 = monitor[7];
                v50 = Fsm;
                v51 = *(_QWORD *)(v49 + 8);
                if ( (*(_BYTE *)(v51 + 309) & 1) != 0 )
                {
                  v52 = *(_QWORD *)(v49 + 8);
                }
                else
                {
                  LODWORD(v52) = sub_1BDA48C(*(_QWORD *)(v49 + 8));
                  v49 = monitor[7];
                  v51 = *(_QWORD *)(v49 + 8);
                }
                if ( *(int *)(v51 + 40) >= 0 )
                  v60 = &klass;
                else
                  v60 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                sub_1B89018(v52, *(_QWORD *)(v49 + 16), v65, v60);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v69, 0LL);
                LODWORD(v50->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v53 = *(_QWORD *)monitor[7];
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v77.fields.value = v53;
              v54 = System_Type__GetTypeFromHandle(v77, 0LL);
              v78.fields.value = (int)bool_var;
              v55 = System_Type__GetTypeFromHandle(v78, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v54, v55, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v21 )
                  goto LABEL_85;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v21, 0LL);
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
                  v56 = monitor[7];
                  v57 = Fsm;
                  v58 = *(_QWORD *)(v56 + 8);
                  if ( (*(_BYTE *)(v58 + 309) & 1) != 0 )
                  {
                    v59 = *(_QWORD *)(v56 + 8);
                  }
                  else
                  {
                    LODWORD(v59) = sub_1BDA48C(*(_QWORD *)(v56 + 8));
                    v56 = monitor[7];
                    v58 = *(_QWORD *)(v56 + 8);
                  }
                  if ( *(int *)(v58 + 40) >= 0 )
                    v61 = &klass;
                  else
                    v61 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                  sub_1B89018(v59, *(_QWORD *)(v56 + 16), v64, v61);
                  v62 = v69;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v62, 0LL);
                  LOBYTE(v57->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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


void __fastcall FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_2ECBFE0 *method)
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  PlayMakerFSM_o *v20; // x22
  System_String_c **v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_c **v24; // x1
  Il2CppType *v25; // x23
  System_Type_o *v26; // x23
  System_Type_o *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  HutongGames_PlayMaker_FsmGameObject_o *v31; // x22
  UnityEngine_GameObject_c **v32; // x0
  UnityEngine_GameObject_o *v33; // x1
  Il2CppType *v34; // x23
  System_Type_o *v35; // x23
  System_Type_o *v36; // x0
  PlayMakerFSM_o *v37; // x22
  System_String_o *v38; // x0
  Il2CppType *v39; // x23
  System_Type_o *v40; // x23
  System_Type_o *v41; // x0
  PlayMakerFSM_o *v42; // x22
  System_String_o *v43; // x0
  char v44[4]; // [xsp+4h] [xbp-6Ch] BYREF
  char v45[4]; // [xsp+8h] [xbp-68h] BYREF
  char v46[4]; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v47; // 0:w0.4
  System_RuntimeTypeHandle_o v48; // 0:w0.4
  System_RuntimeTypeHandle_o v49; // 0:w0.4
  System_RuntimeTypeHandle_o v50; // 0:w0.4
  System_RuntimeTypeHandle_o v51; // 0:w0.4
  System_RuntimeTypeHandle_o v52; // 0:w0.4
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4

  v46[0] = value;
  if ( !method->rgctx_data )
  {
    sub_1B885B0(&bool_var);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject_var);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&int_var);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_var);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1B8880C(Fsm, v9);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v11 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(Fsm, v9);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v47.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v47, 0LL);
        v48.fields.value = (int)string_var;
        v16 = System_Type__GetTypeFromHandle(v48, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v16, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
            v20 = Fsm;
            v45[0] = v46[0];
            v21 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v45, v17, v18, v19);
            if ( v21 )
            {
              if ( *v21 == string_TypeInfo )
                v24 = v21;
              else
                v24 = 0LL;
            }
            else
            {
              v24 = 0LL;
            }
            v20->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v24;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.addEventHandlers, (int32_t)v24, v22, v23);
          }
        }
        else
        {
          v25 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v49.fields.value = (int)v25;
          v26 = System_Type__GetTypeFromHandle(v49, 0LL);
          v50.fields.value = (int)UnityEngine_GameObject_var;
          v27 = System_Type__GetTypeFromHandle(v50, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v26, v27, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
              v31 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v44[0] = v46[0];
              v32 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v44, v28, v29, v30);
              if ( v32 )
              {
                if ( *v32 == UnityEngine_GameObject_TypeInfo )
                  v33 = (UnityEngine_GameObject_o *)v32;
                else
                  v33 = 0LL;
              }
              else
              {
                v33 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v31, v33, 0LL);
            }
          }
          else
          {
            v34 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v51.fields.value = (int)v34;
            v35 = System_Type__GetTypeFromHandle(v51, 0LL);
            v52.fields.value = (int)int_var;
            v36 = System_Type__GetTypeFromHandle(v52, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v35, v36, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
                v37 = Fsm;
                if ( !bool_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                v38 = System_Boolean__ToString((bool)v46, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v38, 0LL);
                LODWORD(v37->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v39 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v53.fields.value = (int)v39;
              v40 = System_Type__GetTypeFromHandle(v53, 0LL);
              v54.fields.value = (int)bool_var;
              v41 = System_Type__GetTypeFromHandle(v54, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v40, v41, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
                  v42 = Fsm;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  v43 = System_Boolean__ToString((bool)v46, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v43, 0LL);
                  LOBYTE(v42->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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


void __fastcall FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_2ECC4F8 *method)
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  PlayMakerFSM_o *v20; // x22
  System_String_c **v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_c **v24; // x1
  Il2CppType *v25; // x23
  System_Type_o *v26; // x23
  System_Type_o *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  HutongGames_PlayMaker_FsmGameObject_o *v31; // x22
  UnityEngine_GameObject_c **v32; // x0
  UnityEngine_GameObject_o *v33; // x1
  Il2CppType *v34; // x23
  System_Type_o *v35; // x23
  System_Type_o *v36; // x0
  PlayMakerFSM_o *v37; // x22
  System_String_o *v38; // x0
  Il2CppType *v39; // x23
  System_Type_o *v40; // x23
  System_Type_o *v41; // x0
  PlayMakerFSM_o *v42; // x22
  System_String_o *v43; // x23
  int32_t v44; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v45; // [xsp+8h] [xbp-68h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v47; // 0:w0.4
  System_RuntimeTypeHandle_o v48; // 0:w0.4
  System_RuntimeTypeHandle_o v49; // 0:w0.4
  System_RuntimeTypeHandle_o v50; // 0:w0.4
  System_RuntimeTypeHandle_o v51; // 0:w0.4
  System_RuntimeTypeHandle_o v52; // 0:w0.4
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4

  v46 = value;
  if ( !method->rgctx_data )
  {
    sub_1B885B0(&bool_var);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject_var);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&int_var);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_var);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_62:
    sub_1B8880C(Fsm, v9);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v11 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(Fsm, v9);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v47.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v47, 0LL);
        v48.fields.value = (int)string_var;
        v16 = System_Type__GetTypeFromHandle(v48, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v16, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_62;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
            v20 = Fsm;
            v45 = v46;
            v21 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v45, v17, v18, v19);
            if ( v21 )
            {
              if ( *v21 == string_TypeInfo )
                v24 = v21;
              else
                v24 = 0LL;
            }
            else
            {
              v24 = 0LL;
            }
            v20->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v24;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.addEventHandlers, (int32_t)v24, v22, v23);
          }
        }
        else
        {
          v25 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v49.fields.value = (int)v25;
          v26 = System_Type__GetTypeFromHandle(v49, 0LL);
          v50.fields.value = (int)UnityEngine_GameObject_var;
          v27 = System_Type__GetTypeFromHandle(v50, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v26, v27, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_62;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
              v31 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v44 = v46;
              v32 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v44, v28, v29, v30);
              if ( v32 )
              {
                if ( *v32 == UnityEngine_GameObject_TypeInfo )
                  v33 = (UnityEngine_GameObject_o *)v32;
                else
                  v33 = 0LL;
              }
              else
              {
                v33 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v31, v33, 0LL);
            }
          }
          else
          {
            v34 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v51.fields.value = (int)v34;
            v35 = System_Type__GetTypeFromHandle(v51, 0LL);
            v52.fields.value = (int)int_var;
            v36 = System_Type__GetTypeFromHandle(v52, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v35, v36, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_62;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
                v37 = Fsm;
                v38 = System_Int32__ToString((int32_t)&v46, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v38, 0LL);
                LODWORD(v37->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v39 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v53.fields.value = (int)v39;
              v40 = System_Type__GetTypeFromHandle(v53, 0LL);
              v54.fields.value = (int)bool_var;
              v41 = System_Type__GetTypeFromHandle(v54, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v40, v41, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_62;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
                  v42 = Fsm;
                  v43 = System_Int32__ToString((int32_t)&v46, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v43, 0LL);
                  LOBYTE(v42->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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


void __fastcall FieldMotionManager__SetVariables_object_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Il2CppObject *value,
        const MethodInfo_2ECCA00 *method)
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
  Il2CppObject *v20; // x1
  Il2CppType *v21; // x24
  System_Type_o *v22; // x24
  System_Type_o *v23; // x0
  Il2CppObject *v24; // x1
  Il2CppType *v25; // x24
  System_Type_o *v26; // x24
  System_Type_o *v27; // x0
  _DWORD *v28; // x23
  System_String_o *v29; // x0
  Il2CppType *v30; // x24
  System_Type_o *v31; // x24
  System_Type_o *v32; // x0
  _BYTE *v33; // x23
  System_String_o *v34; // x24
  System_RuntimeTypeHandle_o v35; // 0:w0.4
  System_RuntimeTypeHandle_o v36; // 0:w0.4
  System_RuntimeTypeHandle_o v37; // 0:w0.4
  System_RuntimeTypeHandle_o v38; // 0:w0.4
  System_RuntimeTypeHandle_o v39; // 0:w0.4
  System_RuntimeTypeHandle_o v40; // 0:w0.4
  System_RuntimeTypeHandle_o v41; // 0:w0.4
  System_RuntimeTypeHandle_o v42; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&bool_var);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject_var);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&int_var);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_var);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_object___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = System_Collections_Generic_List_object___ToArray(
                 v8,
                 (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1B8880C(Fsm, v10);
  }
  v11 = *((_QWORD *)Fsm + 3);
  v12 = Fsm;
  if ( (int)v11 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        sub_1B88814(Fsm, v10);
      v14 = (UnityEngine_Object_o *)v12[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (void *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v35.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v35, 0LL);
        v36.fields.value = (int)string_var;
        v17 = System_Type__GetTypeFromHandle(v36, 0LL);
        Fsm = (void *)System_Type__op_Equality(TypeFromHandle, v17, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0LL);
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
                v20 = value;
              else
                v20 = 0LL;
            }
            else
            {
              v20 = 0LL;
            }
            *((_QWORD *)Fsm + 7) = v20;
            sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)Fsm + 56), (int32_t)v20, v18, v19);
          }
        }
        else
        {
          v21 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v37.fields.value = (int)v21;
          v22 = System_Type__GetTypeFromHandle(v37, 0LL);
          v38.fields.value = (int)UnityEngine_GameObject_var;
          v23 = System_Type__GetTypeFromHandle(v38, 0LL);
          Fsm = (void *)System_Type__op_Equality(v22, v23, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0LL);
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
                  v24 = value;
                else
                  v24 = 0LL;
              }
              else
              {
                v24 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                (UnityEngine_GameObject_o *)v24,
                0LL);
            }
          }
          else
          {
            v25 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v39.fields.value = (int)v25;
            v26 = System_Type__GetTypeFromHandle(v39, 0LL);
            v40.fields.value = (int)int_var;
            v27 = System_Type__GetTypeFromHandle(v40, 0LL);
            Fsm = (void *)System_Type__op_Equality(v26, v27, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v14 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0LL);
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
                v28 = Fsm;
                v29 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                           value,
                                           value->klass->vtable[4].methodPtr);
                Fsm = (void *)System_Int32__Parse(v29, 0LL);
                v28[14] = (_DWORD)Fsm;
              }
            }
            else
            {
              v30 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v41.fields.value = (int)v30;
              v31 = System_Type__GetTypeFromHandle(v41, 0LL);
              v42.fields.value = (int)bool_var;
              v32 = System_Type__GetTypeFromHandle(v42, 0LL);
              Fsm = (void *)System_Type__op_Equality(v31, v32, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0LL);
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
                  v33 = Fsm;
                  v34 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                             value,
                                             value->klass->vtable[4].methodPtr);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (void *)System_Boolean__Parse(v34, 0LL);
                  v33[56] = (unsigned __int8)Fsm & 1;
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


void __fastcall FieldMotionManager__SwitchUniqueFieldMotion(
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
  __int64 p_method; // x0
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
  __int64 v32; // x0
  __int64 v33; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x29
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x22
  System_Func_object__bool__o *v36; // x23
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x21
  Il2CppClass **v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0

  if ( (byte_4A5E25F & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleDataDefine_FieldMotionPath__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1B885B0(&System_Func_int__string__TypeInfo);
    sub_1B885B0(&System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__);
    sub_1B885B0(&FieldMotionManager___c__DisplayClass8_0_TypeInfo);
    byte_4A5E25F = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v7);
  v9 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v9, 0LL, Method_BattleDataDefine_FieldMotionPath__, 0LL);
  v10 = System_Linq_Enumerable__Select_int__object_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v9,
          (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v10 )
    sub_1B8880C(0LL, v11);
  klass = v10->klass;
  v13 = v10;
  v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(v10, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v13,
          *(_QWORD *)(p_method + 8));
  if ( !v18 )
    sub_1B8880C(0LL, v17);
  for ( i = 1LL; ; ++i )
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
      v23 = sub_1BDA590(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v18, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = sub_1B887FC(FieldMotionManager___c__DisplayClass8_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0LL);
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
      v28 = sub_1BDA590(v18, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v18, *(_QWORD *)(v28 + 8));
    if ( !v24 )
      sub_1B8880C(v29, v29);
    *(_QWORD *)(v24 + 16) = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 16), v29, v30, v31);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_1B8880C(v32, v33);
    if ( (__int64)i >= (int)fieldMotionArray->max_length )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v36 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v36,
      (Il2CppObject *)v24,
      Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__,
      0LL);
    v37 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v36,
            (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v41 = v37;
    if ( v37 )
    {
      v37 = (Il2CppObject *)sub_1B886EC(v37, fieldMotionArray->obj.klass->_1.element_class);
      if ( !v37 )
      {
        v47 = sub_1B88830(0LL);
        sub_1B886D8(v47, 0LL);
      }
    }
    if ( i >= fieldMotionArray->max_length )
      sub_1B88814(v37, v38);
    v42 = &fieldMotionArray->obj.klass + i;
    v42[4] = (Il2CppClass *)v41;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v41, v39, v40);
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
    v46 = sub_1BDA590(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v18, *(_QWORD *)(v46 + 8));
}


void __fastcall FieldMotionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E26C & 1) == 0 )
  {
    sub_1B885B0(&FieldMotionManager___c_TypeInfo);
    byte_4A5E26C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(FieldMotionManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FieldMotionManager___c_TypeInfo->static_fields->__9 = (struct FieldMotionManager___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)FieldMotionManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetPlayerStage_b__14_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B8880C(this, 0LL);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B8880C(this, 0LL);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B8880C(this, 0LL);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___SetTacticBg_b__13_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B8880C(this, 0LL);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B8880C(this, 0LL);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  __int64 v6; // x1

  if ( (byte_4A5E26D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E26D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_1B8880C(v5, v6);
  return BasicHelper__EqualExceptNullOrEmpty(x->fields._AssetName_k__BackingField, this->fields.targetName, 0LL);
}