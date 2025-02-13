void __fastcall FieldMotionManager___ctor(
        FieldMotionManager_o *this,
        BattleFieldMotionComponent_array *fieldMotions,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  _QWORD *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  struct System_Int32_array **v16; // x8
  struct System_Int32_array *v17; // x1
  FieldMotionManager_Fields *p_fields; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BattleFieldMotionComponent_o *v25; // x0
  __int64 v26; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v28; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v30; // x27
  UnityEngine_Object_o *v31; // x23
  struct BattleFieldMotionComponent_array *v32; // x8
  System_Object_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4BDF89E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF89E = 1;
  }
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_1C73D70(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C73D14(inited);
  v16 = *(struct System_Int32_array ***)(v15 + 184);
  v17 = *v16;
  this->fields.baseMotionIds = *v16;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.baseMotionIds,
    (int64_t)v17,
    (int64_t)perf,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)fieldMotions, v19, v20, v21, v22, v23, v24);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_23:
    sub_1C22094(v25, v26);
  v28 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v30 = v28 - 4;
    if ( v28 - 4 >= (int)max_length )
      break;
    if ( v30 >= max_length )
      goto LABEL_25;
    v31 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v28);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)v25 & 1) != 0 )
    {
      v32 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_23;
      if ( v30 >= v32->max_length )
LABEL_25:
        sub_1C2209C(v25, v26);
      v25 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v32->obj.klass + v28);
      if ( !v25 )
        goto LABEL_23;
      BattleFieldMotionComponent__setPerf(v25, perf, 0LL);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v28;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_23;
  }
  v33 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotions,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = (struct BattleFieldMotionComponent_array *)v33;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.retentionFieldMotionArray,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


Il2CppObject *__fastcall FieldMotionManager__FindLastNotNullObject_object_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_2FFD53C *method)
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
    this = (FieldMotionManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (FieldMotionManager_o *)sub_1C73D70();
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_18:
    sub_1C22094(this, getObjectFunc);
  v7 = fieldMotionArray->max_length - 1;
  if ( (v7 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v7 >= fieldMotionArray->max_length )
LABEL_21:
      sub_1C2209C(this, getObjectFunc);
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
  long double inited; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *baseMotionIds; // x21
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
  if ( (byte_4BDF8A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    this = (FieldMotionManager_o *)sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDF8A0 = 1;
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
      v14 = System_Linq_Enumerable__Reverse_int_(
              WaveFieldMotionIds,
              (const MethodInfo_2FD9F20 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v14,
               (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    baseMotionIds = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.baseMotionIds;
    v16 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_56826212(
      v16,
      baseMotionIds,
      (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0LL);
      this = (FieldMotionManager_o *)System_Linq_Enumerable__Reverse_int_(
                                       CurWaveEnemyDeckMotionIds,
                                       (const MethodInfo_2FD9F20 *)Method_System_Linq_Enumerable_Reverse_int___);
      if ( this )
      {
        klass = this->klass;
        v19 = this;
        v20 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
          {
            --v20;
            p_offset += 4;
            if ( !v20 )
              goto LABEL_22;
          }
          v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_22:
          v22 = sub_1C73E18(this, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
        }
        v24 = (*(__int64 (__fastcall **)(FieldMotionManager_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
        if ( !v24 )
          sub_1C22094(0LL, v23);
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
            v28 = sub_1C73E18(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
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
            v32 = sub_1C73E18(v24, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
          }
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
          if ( !v16 )
            sub_1C22094(v33, v34);
          v35 = v33;
          v36 = System_Collections_Generic_List_int___Contains(
                  v16,
                  v33,
                  (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v36 )
            v36 = System_Collections_Generic_List_int___Remove(
                    v16,
                    v35,
                    (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__);
          items = v16->fields._items;
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1C22094(v36, v37);
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v35,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size + 1] = v35;
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
          v44 = sub_1C73E18(v24, System_IDisposable_TypeInfo, 0LL);
        }
        this = (FieldMotionManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v24, *(_QWORD *)(v44 + 8));
        if ( v16 )
          return System_Collections_Generic_List_int___ToArray(
                   v16,
                   (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_55:
    sub_1C22094(this, stageEnt);
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C73D70(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C73D14(inited);
  return **(System_Int32_array ***)(v11 + 184);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager__GetEnemyStage(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  FieldMotionManager___c_c *v3; // x0
  System_Func_object__object__o *_9__15_0; // x20
  Il2CppObject *v5; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4BDF8A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C21E38(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_FieldMotionManager___c__GetEnemyStage_b__15_0__);
    sub_1C21E38(&FieldMotionManager___c_TypeInfo);
    byte_4BDF8A4 = 1;
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
    _9__15_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__15_0, v5, Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__15_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__15_0, (int64_t)_9__15_0, v7, v8, v9, v10, v11, v12);
  }
  if ( !this )
    sub_1C22094(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__15_0,
                               (const MethodInfo_2FFD53C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Func_object__object__o *v14; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4BDF8A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C21E38(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__);
    sub_1C21E38(&FieldMotionManager___c__DisplayClass16_0_TypeInfo);
    byte_4BDF8A5 = 1;
  }
  v5 = sub_1C22084(FieldMotionManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)name, v8, v9, v10, v11, v12, v13);
  v14 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
  System_Func_object__object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v14,
                               (const MethodInfo_2FFD53C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4BDF8A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C21E38(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_FieldMotionManager___c__GetPlayerStage_b__14_0__);
    sub_1C21E38(&FieldMotionManager___c_TypeInfo);
    byte_4BDF8A3 = 1;
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
    _9__14_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__14_0, v5, Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__14_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__14_0, (int64_t)_9__14_0, v7, v8, v9, v10, v11, v12);
  }
  if ( !this )
    sub_1C22094(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__14_0,
                               (const MethodInfo_2FFD53C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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

  if ( (byte_4BDF8A7 & 1) == 0 )
  {
    sub_1C21E38(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1C21E38(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__);
    sub_1C21E38(&FieldMotionManager___c__DisplayClass18_0_TypeInfo);
    byte_4BDF8A7 = 1;
  }
  v7 = sub_1C22084(FieldMotionManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = type;
  *(_DWORD *)(v7 + 20) = index;
  v10 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
  System_Func_object__object____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v10,
                               (const MethodInfo_2FFD53C *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__17_1; // x0
  Il2CppObject *v24; // x21
  struct FieldMotionManager___c_StaticFields *v25; // x0

  if ( (byte_4BDF8A6 & 1) == 0 )
  {
    sub_1C21E38(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_1C21E38(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_1C21E38(&Method_FieldMotionManager___c__GetTransform_b__17_1__);
    sub_1C21E38(&Method_FieldMotionManager___c__GetTransform_b__17_3__);
    sub_1C21E38(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__);
    sub_1C21E38(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__);
    sub_1C21E38(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__);
    sub_1C21E38(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__);
    sub_1C21E38(&FieldMotionManager___c__DisplayClass17_0_TypeInfo);
    sub_1C21E38(&FieldMotionManager___c_TypeInfo);
    byte_4BDF8A6 = 1;
  }
  v7 = sub_1C22084(FieldMotionManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
LABEL_22:
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = index;
  switch ( type )
  {
    case 0:
      v10 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
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
      _9__17_1 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v14, Method_FieldMotionManager___c__GetTransform_b__17_1__, 0LL);
      v21 = (int64_t)_9__17_1;
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      static_fields->__9__17_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (PartyOrganizationUtility_o *)&static_fields->__9__17_1;
      goto LABEL_20;
    case 2:
      v10 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
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
      v24 = (Il2CppObject *)v8->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v24, Method_FieldMotionManager___c__GetTransform_b__17_3__, 0LL);
      v21 = (int64_t)_9__17_1;
      v25 = FieldMotionManager___c_TypeInfo->static_fields;
      v25->__9__17_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (PartyOrganizationUtility_o *)&v25->__9__17_3;
LABEL_20:
      sub_1C21DDC(p__9__17_1, v21, v15, v16, v17, v18, v19, v20);
LABEL_21:
      if ( !this )
        goto LABEL_22;
      goto LABEL_26;
    case 4:
      v10 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__;
      goto LABEL_25;
    case 5:
      v10 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__;
LABEL_25:
      _9__17_1 = v10;
      System_Func_object__object____ctor(v10, (Il2CppObject *)v7, *v11, 0LL);
LABEL_26:
      result = (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                            this,
                                            (System_Func_BattleFieldMotionComponent__T__o *)_9__17_1,
                                            (const MethodInfo_2FFD53C *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  if ( (byte_4BDF8A1 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8A1 = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C22094(this, method);
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
        sub_1C2209C(this, method);
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

  if ( (byte_4BDF8A8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8A8 = 1;
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
    v14 = (System_String_o *)sub_1C21E4C(&StringLiteral_309/*" not found "*/);
    v15 = (System_String_o *)sub_1C21E4C(&StringLiteral_277/*" in fieldFsm "*/);
    v16 = System_String__Concat_63126736(v14, v8, v15, 0LL);
    v17 = sub_1C21E4C(&UnityEngine_UnityException_TypeInfo);
    v18 = (UnityEngine_UnityException_o *)sub_1C22084(v17);
    UnityEngine_UnityException___ctor_70854072(v18, v16, 0LL);
    v19 = sub_1C21E4C(&Method_FieldMotionManager_PlayBattleAction__);
    sub_1C21F60(v18, v19);
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
    sub_1C2209C(MotionName, v6);
  MotionName = v13->m_Items[v10];
  if ( !MotionName )
LABEL_15:
    sub_1C22094(MotionName, v6);
  BattleFieldMotionComponent__playBattleActionData(MotionName, nowAction, v8, 0LL);
}


void __fastcall FieldMotionManager__ResetFieldMotionArray(FieldMotionManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  unsigned __int64 max_length; // x9

  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_6:
    sub_1C22094(this, method);
  v10 = 1LL;
  v11 = 40LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    if ( v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      sub_1C2209C(this, method);
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v11) = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)((char *)fieldMotionArray + v11), 0LL, v2, v3, v4, v5, v6, v7);
    fieldMotionArray = this->fields.fieldMotionArray;
    ++v10;
    v11 += 8LL;
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
  if ( (byte_4BDF8A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_PlayMakerFSM___);
    this = (FieldMotionManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8A9 = 1;
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
          (const MethodInfo_2F02610 *)Method_ActionExtensions_Call_PlayMakerFSM___),
        (v15 = v6->fields.fieldMotionArray) == 0LL) )
  {
LABEL_24:
    sub_1C22094(this, str);
  }
  if ( (unsigned int)v9 >= v15->max_length )
LABEL_25:
    sub_1C2209C(this, str);
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
  if ( (byte_4BDF8AA & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8AA = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C22094(this, str);
  v6 = fieldMotionArray->max_length - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      if ( v6 >= fieldMotionArray->max_length )
LABEL_18:
        sub_1C2209C(this, str);
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

  if ( (byte_4BDF8AB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8AB = 1;
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
          sub_1C2209C(MotionName, v8);
        MotionName = v15->m_Items[v12];
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion(MotionName, active, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1C22094(MotionName, v8);
    }
  }
}


void __fastcall FieldMotionManager__SetBaseFieldMotionIds(
        FieldMotionManager_o *this,
        System_Int32_array *motionIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  struct System_Int32_array *klass; // x20
  FieldMotionManager_o *v10; // x19
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0

  klass = motionIds;
  v10 = this;
  if ( (byte_4BDF89D & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_1C21E38(&Method_System_Array_Empty_int___);
    byte_4BDF89D = 1;
    if ( klass )
    {
LABEL_3:
      if ( v10 )
        goto LABEL_4;
LABEL_15:
      sub_1C22094(this, motionIds);
    }
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C73D70(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  this = *(FieldMotionManager_o **)(v11[7] + 16LL);
  if ( (BYTE5(this[7].fields.retentionFieldMotionArray) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_1C73D14(inited);
  klass = (struct System_Int32_array *)this[4].fields.retentionFieldMotionArray->obj.klass;
  if ( !v10 )
    goto LABEL_15;
LABEL_4:
  v10->fields.baseMotionIds = klass;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v10->fields.baseMotionIds,
    (int64_t)klass,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetTacticBg(FieldMotionManager_o *this, bool flg, const MethodInfo *method)
{
  FieldMotionManager___c_c *v5; // x0
  System_Func_object__object__o *_9__13_0; // x21
  Il2CppObject *v7; // x22
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *LastNotNullObject_object; // x20

  if ( (byte_4BDF8A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_1C21E38(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_FieldMotionManager___c__SetTacticBg_b__13_0__);
    sub_1C21E38(&FieldMotionManager___c_TypeInfo);
    byte_4BDF8A2 = 1;
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
    _9__13_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__13_0, v7, Method_FieldMotionManager___c__SetTacticBg_b__13_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__13_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__13_0, (int64_t)_9__13_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !this )
    goto LABEL_16;
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__13_0,
                               (const MethodInfo_2FFD53C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
    sub_1C22094(v5, flg);
  }
}


void __fastcall FieldMotionManager__SetVariables___Il2CppFullySharedGenericType_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
        const MethodInfo_2FFE544 *method)
{
  long double v4; // q0
  unsigned __int64 StatusReg; // x21
  _QWORD *monitor; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int16 v11; // w8
  __int64 v12; // x22
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
  __int64 v23; // x27
  System_Type_o *TypeFromHandle; // x27
  System_Type_o *v25; // x0
  __int64 v26; // x27
  PlayMakerFSM_o *v27; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **p_klass; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_String_c **v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  __int64 v40; // x27
  System_Type_o *v41; // x27
  System_Type_o *v42; // x0
  __int64 v43; // x27
  HutongGames_PlayMaker_FsmGameObject_o *v44; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  UnityEngine_GameObject_c **v49; // x0
  UnityEngine_GameObject_o *v50; // x1
  __int64 v51; // x27
  System_Type_o *v52; // x27
  System_Type_o *v53; // x0
  long double v54; // q0
  __int64 v55; // x9
  PlayMakerFSM_o *v56; // x26
  __int64 v57; // x8
  __int64 v58; // x0
  __int64 v59; // x27
  System_Type_o *v60; // x27
  System_Type_o *v61; // x0
  long double v62; // q0
  __int64 v63; // x9
  PlayMakerFSM_o *v64; // x26
  __int64 v65; // x8
  __int64 v66; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v67; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v68; // x3
  System_String_o *v69; // x27
  __int64 v70; // [xsp+0h] [xbp-40h] BYREF
  __int64 v71; // [xsp+8h] [xbp-38h]
  __int64 v72; // [xsp+10h] [xbp-30h]
  unsigned __int64 v73; // [xsp+18h] [xbp-28h]
  __int64 v74; // [xsp+20h] [xbp-20h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+28h] [xbp-18h] BYREF
  System_String_o *v76; // [xsp+30h] [xbp-10h]
  __int64 v77; // [xsp+38h] [xbp-8h]
  System_RuntimeTypeHandle_o v78; // 0:w0.4
  System_RuntimeTypeHandle_o v79; // 0:w0.4
  System_RuntimeTypeHandle_o v80; // 0:w0.4
  System_RuntimeTypeHandle_o v81; // 0:w0.4
  System_RuntimeTypeHandle_o v82; // 0:w0.4
  System_RuntimeTypeHandle_o v83; // 0:w0.4
  System_RuntimeTypeHandle_o v84; // 0:w0.4
  System_RuntimeTypeHandle_o v85; // 0:w0.4

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = value.monitor;
  v77 = *(_QWORD *)(StatusReg + 40);
  klass = value.klass;
  v9 = *((_QWORD *)value.monitor + 7);
  if ( !v9 )
  {
    sub_1C21E38(&bool_var);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject_var);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&int_var);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&string_var);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    v9 = monitor[7];
    if ( !v9 )
    {
      sub_1C73D70();
      v9 = monitor[7];
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
    v13 = sub_1C73D14(v4);
    v10 = *(_QWORD *)(monitor[7] + 8LL);
    v14 = *(_DWORD *)(v13 + 252);
    v11 = *(_WORD *)(v10 + 309);
  }
  v72 = (__int64)&v70 - (((unsigned int)(v14 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v73 = StatusReg;
  if ( (v11 & 1) == 0 )
    v10 = sub_1C73D14(v4);
  v71 = (__int64)&v70 - (((unsigned int)(*(_DWORD *)(v10 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  v15 = (char *)&v70 - ((v12 + 15) & 0x1FFFFFFF0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v16
    || (v74 = v12,
        System_Collections_Generic_List_object___AddRange(
          v16,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v16,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_85:
    sub_1C22094(Fsm, v18);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v20 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C2209C(Fsm, v18);
      v22 = (UnityEngine_Object_o *)*((_QWORD *)&v20->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v22, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        v23 = *(_QWORD *)monitor[7];
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v78.fields.value = v23;
        TypeFromHandle = System_Type__GetTypeFromHandle(v78, 0LL);
        v79.fields.value = (int)string_var;
        v25 = System_Type__GetTypeFromHandle(v79, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v25, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_85;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v22, 0LL);
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
            v26 = monitor[7];
            v27 = Fsm;
            if ( *(int *)(*(_QWORD *)(v26 + 8) + 40LL) >= 0 )
              p_klass = &klass;
            else
              p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
            memcpy(v15, p_klass, v74);
            v32 = (System_String_c **)j_il2cpp_value_box_0(*(_QWORD *)(v26 + 8), v15, v29, v30, v31);
            if ( v32 )
            {
              if ( *v32 == string_TypeInfo )
                v39 = (int64_t)v32;
              else
                v39 = 0LL;
            }
            else
            {
              v39 = 0LL;
            }
            v27->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v39;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v27->fields.addEventHandlers, v39, v33, v34, v35, v36, v37, v38);
          }
        }
        else
        {
          v40 = *(_QWORD *)monitor[7];
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v80.fields.value = v40;
          v41 = System_Type__GetTypeFromHandle(v80, 0LL);
          v81.fields.value = (int)UnityEngine_GameObject_var;
          v42 = System_Type__GetTypeFromHandle(v81, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v41, v42, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_85;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v22, 0LL);
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
              v43 = monitor[7];
              v44 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              if ( *(int *)(*(_QWORD *)(v43 + 8) + 40LL) >= 0 )
                v45 = &klass;
              else
                v45 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
              memcpy(v15, v45, v74);
              v49 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(*(_QWORD *)(v43 + 8), v15, v46, v47, v48);
              if ( v49 )
              {
                if ( *v49 == UnityEngine_GameObject_TypeInfo )
                  v50 = (UnityEngine_GameObject_o *)v49;
                else
                  v50 = 0LL;
              }
              else
              {
                v50 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v44, v50, 0LL);
            }
          }
          else
          {
            v51 = *(_QWORD *)monitor[7];
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v82.fields.value = v51;
            v52 = System_Type__GetTypeFromHandle(v82, 0LL);
            v83.fields.value = (int)int_var;
            v53 = System_Type__GetTypeFromHandle(v83, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v52, v53, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_85;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v22, 0LL);
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
                  LODWORD(v58) = sub_1C73D14(v54);
                  v55 = monitor[7];
                  v57 = *(_QWORD *)(v55 + 8);
                }
                if ( *(int *)(v57 + 40) >= 0 )
                  v67 = &klass;
                else
                  v67 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                sub_1C228A0(v58, *(_QWORD *)(v55 + 16), v72, v67);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v76, 0LL);
                LODWORD(v56->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v59 = *(_QWORD *)monitor[7];
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v84.fields.value = v59;
              v60 = System_Type__GetTypeFromHandle(v84, 0LL);
              v85.fields.value = (int)bool_var;
              v61 = System_Type__GetTypeFromHandle(v85, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v60, v61, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v22 )
                  goto LABEL_85;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v22, 0LL);
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
                  v63 = monitor[7];
                  v64 = Fsm;
                  v65 = *(_QWORD *)(v63 + 8);
                  if ( (*(_BYTE *)(v65 + 309) & 1) != 0 )
                  {
                    v66 = *(_QWORD *)(v63 + 8);
                  }
                  else
                  {
                    LODWORD(v66) = sub_1C73D14(v62);
                    v63 = monitor[7];
                    v65 = *(_QWORD *)(v63 + 8);
                  }
                  if ( *(int *)(v65 + 40) >= 0 )
                    v68 = &klass;
                  else
                    v68 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                  sub_1C228A0(v66, *(_QWORD *)(v63 + 16), v71, v68);
                  v69 = v76;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v69, 0LL);
                  LOBYTE(v64->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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


void __fastcall FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_2FFD65C *method)
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  Il2CppType *v29; // x23
  System_Type_o *v30; // x23
  System_Type_o *v31; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  HutongGames_PlayMaker_FsmGameObject_o *v35; // x22
  UnityEngine_GameObject_c **v36; // x0
  UnityEngine_GameObject_o *v37; // x1
  Il2CppType *v38; // x23
  System_Type_o *v39; // x23
  System_Type_o *v40; // x0
  PlayMakerFSM_o *v41; // x22
  System_String_o *v42; // x0
  Il2CppType *v43; // x23
  System_Type_o *v44; // x23
  System_Type_o *v45; // x0
  PlayMakerFSM_o *v46; // x22
  System_String_o *v47; // x0
  char v48[4]; // [xsp+4h] [xbp-6Ch] BYREF
  char v49[4]; // [xsp+8h] [xbp-68h] BYREF
  char v50[4]; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v51; // 0:w0.4
  System_RuntimeTypeHandle_o v52; // 0:w0.4
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4
  System_RuntimeTypeHandle_o v55; // 0:w0.4
  System_RuntimeTypeHandle_o v56; // 0:w0.4
  System_RuntimeTypeHandle_o v57; // 0:w0.4
  System_RuntimeTypeHandle_o v58; // 0:w0.4

  v50[0] = value;
  if ( !method->rgctx_data )
  {
    sub_1C21E38(&bool_var);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject_var);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&int_var);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&string_var);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1C22094(Fsm, v9);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v11 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C2209C(Fsm, v9);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v51.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v51, 0LL);
        v52.fields.value = (int)string_var;
        v16 = System_Type__GetTypeFromHandle(v52, 0LL);
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
            v49[0] = v50[0];
            v21 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v49, v17, v18, v19);
            if ( v21 )
            {
              if ( *v21 == string_TypeInfo )
                v28 = (int64_t)v21;
              else
                v28 = 0LL;
            }
            else
            {
              v28 = 0LL;
            }
            v20->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v28;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v20->fields.addEventHandlers, v28, v22, v23, v24, v25, v26, v27);
          }
        }
        else
        {
          v29 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v53.fields.value = (int)v29;
          v30 = System_Type__GetTypeFromHandle(v53, 0LL);
          v54.fields.value = (int)UnityEngine_GameObject_var;
          v31 = System_Type__GetTypeFromHandle(v54, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v30, v31, 0LL);
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
              v35 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v48[0] = v50[0];
              v36 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v48, v32, v33, v34);
              if ( v36 )
              {
                if ( *v36 == UnityEngine_GameObject_TypeInfo )
                  v37 = (UnityEngine_GameObject_o *)v36;
                else
                  v37 = 0LL;
              }
              else
              {
                v37 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v35, v37, 0LL);
            }
          }
          else
          {
            v38 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v55.fields.value = (int)v38;
            v39 = System_Type__GetTypeFromHandle(v55, 0LL);
            v56.fields.value = (int)int_var;
            v40 = System_Type__GetTypeFromHandle(v56, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v39, v40, 0LL);
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
                v41 = Fsm;
                if ( !bool_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                v42 = System_Boolean__ToString((bool)v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v42, 0LL);
                LODWORD(v41->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v43 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v57.fields.value = (int)v43;
              v44 = System_Type__GetTypeFromHandle(v57, 0LL);
              v58.fields.value = (int)bool_var;
              v45 = System_Type__GetTypeFromHandle(v58, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v44, v45, 0LL);
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
                  v46 = Fsm;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  v47 = System_Boolean__ToString((bool)v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v47, 0LL);
                  LOBYTE(v46->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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
        const MethodInfo_2FFDB74 *method)
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  Il2CppType *v29; // x23
  System_Type_o *v30; // x23
  System_Type_o *v31; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  HutongGames_PlayMaker_FsmGameObject_o *v35; // x22
  UnityEngine_GameObject_c **v36; // x0
  UnityEngine_GameObject_o *v37; // x1
  Il2CppType *v38; // x23
  System_Type_o *v39; // x23
  System_Type_o *v40; // x0
  PlayMakerFSM_o *v41; // x22
  System_String_o *v42; // x0
  Il2CppType *v43; // x23
  System_Type_o *v44; // x23
  System_Type_o *v45; // x0
  PlayMakerFSM_o *v46; // x22
  System_String_o *v47; // x23
  int32_t v48; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v49; // [xsp+8h] [xbp-68h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v51; // 0:w0.4
  System_RuntimeTypeHandle_o v52; // 0:w0.4
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4
  System_RuntimeTypeHandle_o v55; // 0:w0.4
  System_RuntimeTypeHandle_o v56; // 0:w0.4
  System_RuntimeTypeHandle_o v57; // 0:w0.4
  System_RuntimeTypeHandle_o v58; // 0:w0.4

  v50 = value;
  if ( !method->rgctx_data )
  {
    sub_1C21E38(&bool_var);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject_var);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&int_var);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&string_var);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70();
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_62:
    sub_1C22094(Fsm, v9);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v11 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C2209C(Fsm, v9);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v51.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v51, 0LL);
        v52.fields.value = (int)string_var;
        v16 = System_Type__GetTypeFromHandle(v52, 0LL);
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
            v49 = v50;
            v21 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v49, v17, v18, v19);
            if ( v21 )
            {
              if ( *v21 == string_TypeInfo )
                v28 = (int64_t)v21;
              else
                v28 = 0LL;
            }
            else
            {
              v28 = 0LL;
            }
            v20->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v28;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v20->fields.addEventHandlers, v28, v22, v23, v24, v25, v26, v27);
          }
        }
        else
        {
          v29 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v53.fields.value = (int)v29;
          v30 = System_Type__GetTypeFromHandle(v53, 0LL);
          v54.fields.value = (int)UnityEngine_GameObject_var;
          v31 = System_Type__GetTypeFromHandle(v54, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v30, v31, 0LL);
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
              v35 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v48 = v50;
              v36 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v48, v32, v33, v34);
              if ( v36 )
              {
                if ( *v36 == UnityEngine_GameObject_TypeInfo )
                  v37 = (UnityEngine_GameObject_o *)v36;
                else
                  v37 = 0LL;
              }
              else
              {
                v37 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v35, v37, 0LL);
            }
          }
          else
          {
            v38 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v55.fields.value = (int)v38;
            v39 = System_Type__GetTypeFromHandle(v55, 0LL);
            v56.fields.value = (int)int_var;
            v40 = System_Type__GetTypeFromHandle(v56, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v39, v40, 0LL);
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
                v41 = Fsm;
                v42 = System_Int32__ToString((int32_t)&v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v42, 0LL);
                LODWORD(v41->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v43 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v57.fields.value = (int)v43;
              v44 = System_Type__GetTypeFromHandle(v57, 0LL);
              v58.fields.value = (int)bool_var;
              v45 = System_Type__GetTypeFromHandle(v58, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v44, v45, 0LL);
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
                  v46 = Fsm;
                  v47 = System_Int32__ToString((int32_t)&v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v47, 0LL);
                  LOBYTE(v46->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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
        const MethodInfo_2FFE07C *method)
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
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
  System_RuntimeTypeHandle_o v39; // 0:w0.4
  System_RuntimeTypeHandle_o v40; // 0:w0.4
  System_RuntimeTypeHandle_o v41; // 0:w0.4
  System_RuntimeTypeHandle_o v42; // 0:w0.4
  System_RuntimeTypeHandle_o v43; // 0:w0.4
  System_RuntimeTypeHandle_o v44; // 0:w0.4
  System_RuntimeTypeHandle_o v45; // 0:w0.4
  System_RuntimeTypeHandle_o v46; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&bool_var);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject_var);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&int_var);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&string_var);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70();
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_object___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = System_Collections_Generic_List_object___ToArray(
                 v8,
                 (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1C22094(Fsm, v10);
  }
  v11 = *((_QWORD *)Fsm + 3);
  v12 = Fsm;
  if ( (int)v11 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        sub_1C2209C(Fsm, v10);
      v14 = (UnityEngine_Object_o *)v12[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (void *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v39.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v39, 0LL);
        v40.fields.value = (int)string_var;
        v17 = System_Type__GetTypeFromHandle(v40, 0LL);
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
                v24 = value;
              else
                v24 = 0LL;
            }
            else
            {
              v24 = 0LL;
            }
            *((_QWORD *)Fsm + 7) = v24;
            sub_1C21DDC((PartyOrganizationUtility_o *)((char *)Fsm + 56), (int64_t)v24, v18, v19, v20, v21, v22, v23);
          }
        }
        else
        {
          v25 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v41.fields.value = (int)v25;
          v26 = System_Type__GetTypeFromHandle(v41, 0LL);
          v42.fields.value = (int)UnityEngine_GameObject_var;
          v27 = System_Type__GetTypeFromHandle(v42, 0LL);
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
            Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                    variableName,
                    0LL);
            if ( Fsm )
            {
              if ( value )
              {
                if ( (UnityEngine_GameObject_c *)value->klass == UnityEngine_GameObject_TypeInfo )
                  v28 = value;
                else
                  v28 = 0LL;
              }
              else
              {
                v28 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                (UnityEngine_GameObject_o *)v28,
                0LL);
            }
          }
          else
          {
            v29 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v43.fields.value = (int)v29;
            v30 = System_Type__GetTypeFromHandle(v43, 0LL);
            v44.fields.value = (int)int_var;
            v31 = System_Type__GetTypeFromHandle(v44, 0LL);
            Fsm = (void *)System_Type__op_Equality(v30, v31, 0LL);
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
                v32 = Fsm;
                v33 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                           value,
                                           value->klass->vtable[4].methodPtr);
                Fsm = (void *)System_Int32__Parse(v33, 0LL);
                v32[14] = (_DWORD)Fsm;
              }
            }
            else
            {
              v34 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v45.fields.value = (int)v34;
              v35 = System_Type__GetTypeFromHandle(v45, 0LL);
              v46.fields.value = (int)bool_var;
              v36 = System_Type__GetTypeFromHandle(v46, 0LL);
              Fsm = (void *)System_Type__op_Equality(v35, v36, 0LL);
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
                  v37 = Fsm;
                  v38 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                             value,
                                             value->klass->vtable[4].methodPtr);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (void *)System_Boolean__Parse(v38, 0LL);
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
  int64_t v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x0
  __int64 v37; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x29
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x22
  System_Func_object__bool__o *v40; // x23
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x21
  Il2CppClass **v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x0

  if ( (byte_4BDF89F & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleDataDefine_FieldMotionPath__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C21E38(&System_Func_int__string__TypeInfo);
    sub_1C21E38(&System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__);
    sub_1C21E38(&FieldMotionManager___c__DisplayClass8_0_TypeInfo);
    byte_4BDF89F = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v7);
  v9 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v9, 0LL, Method_BattleDataDefine_FieldMotionPath__, 0LL);
  v10 = System_Linq_Enumerable__Select_int__object_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v9,
          (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v10 )
    sub_1C22094(0LL, v11);
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
    p_method = sub_1C73E18(v10, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v13,
          *(_QWORD *)(p_method + 8));
  if ( !v18 )
    sub_1C22094(0LL, v17);
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
      v23 = sub_1C73E18(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v18, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = sub_1C22084(FieldMotionManager___c__DisplayClass8_0_TypeInfo);
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
      v28 = sub_1C73E18(v18, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v18, *(_QWORD *)(v28 + 8));
    if ( !v24 )
      sub_1C22094(v29, v29);
    *(_QWORD *)(v24 + 16) = v29;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 16), v29, v30, v31, v32, v33, v34, v35);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_1C22094(v36, v37);
    if ( (__int64)i >= (int)fieldMotionArray->max_length )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v40 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v40,
      (Il2CppObject *)v24,
      Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__,
      0LL);
    v41 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v40,
            (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v49 = (int64_t)v41;
    if ( v41 )
    {
      v41 = (Il2CppObject *)sub_1C21F74(v41, fieldMotionArray->obj.klass->_1.element_class);
      if ( !v41 )
      {
        v55 = sub_1C220B8(0LL);
        sub_1C21F60(v55, 0LL);
      }
    }
    if ( i >= fieldMotionArray->max_length )
      sub_1C2209C(v41, v42);
    v50 = &fieldMotionArray->obj.klass + i;
    v50[4] = (Il2CppClass *)v49;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v50 + 4), v49, v43, v44, v45, v46, v47, v48);
  }
  v51 = *(_QWORD *)v18;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_36;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_36:
    v54 = sub_1C73E18(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v18, *(_QWORD *)(v54 + 8));
}


void __fastcall FieldMotionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF8AC & 1) == 0 )
  {
    sub_1C21E38(&FieldMotionManager___c_TypeInfo);
    byte_4BDF8AC = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(FieldMotionManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FieldMotionManager___c_TypeInfo->static_fields->__9 = (struct FieldMotionManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)FieldMotionManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetPlayerStage_b__14_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C22094(this, 0LL);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C22094(this, 0LL);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C22094(this, 0LL);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___SetTacticBg_b__13_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C22094(this, 0LL);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C22094(this, 0LL);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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

  if ( (byte_4BDF8AD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8AD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_1C22094(v5, v6);
  return BasicHelper__EqualExceptNullOrEmpty(x->fields._AssetName_k__BackingField, this->fields.targetName, 0LL);
}