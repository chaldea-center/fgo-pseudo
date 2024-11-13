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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x22
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  struct System_Int32_array **v20; // x8
  struct System_Int32_array *v21; // x1
  FieldMotionManager_Fields *p_fields; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  BattleFieldMotionComponent_o *v29; // x0
  __int64 v30; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v32; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v34; // x27
  UnityEngine_Object_o *v35; // x23
  struct BattleFieldMotionComponent_array *v36; // x8
  System_Object_array *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B19462 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, fieldMotions, perf);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B19462 = 1;
  }
  v16 = Method_System_Array_Empty_int___;
  v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v17 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, fieldMotions);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18, fieldMotions);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C1C6BC(inited);
  v20 = *(struct System_Int32_array ***)(v19 + 184);
  v21 = *v20;
  this->fields.baseMotionIds = *v20;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseMotionIds,
    (int64_t)v21,
    (int64_t)perf,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)fieldMotions, v23, v24, v25, v26, v27, v28);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_23:
    sub_1BCAA3C(v29, v30);
  v32 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v34 = v32 - 4;
    if ( v32 - 4 >= (int)max_length )
      break;
    if ( v34 >= max_length )
      goto LABEL_25;
    v35 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    v29 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
    if ( ((unsigned __int8)v29 & 1) != 0 )
    {
      v36 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_23;
      if ( v34 >= v36->max_length )
LABEL_25:
        sub_1BCAA44(v29, v30);
      v29 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v36->obj.klass + v32);
      if ( !v29 )
        goto LABEL_23;
      BattleFieldMotionComponent__setPerf(v29, perf, 0LL);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v32;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_23;
  }
  v37 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotions,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = (struct BattleFieldMotionComponent_array *)v37;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.retentionFieldMotionArray,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
}


Il2CppObject *__fastcall FieldMotionManager__FindLastNotNullObject_object_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_2F5F6D8 *method)
{
  FieldMotionManager_o *v4; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v7; // w9
  __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  struct BattleFieldMotionComponent_array *v10; // x8
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x21

  v4 = this;
  if ( !method->rgctx_data )
  {
    this = (FieldMotionManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, getObjectFunc, method);
    if ( !method->rgctx_data )
      this = (FieldMotionManager_o *)sub_1C1C718(method);
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_18:
    sub_1BCAA3C(this, getObjectFunc);
  v7 = fieldMotionArray->max_length - 1;
  if ( (v7 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v7 >= fieldMotionArray->max_length )
LABEL_21:
      sub_1BCAA44(this, getObjectFunc);
    v8 = v7;
    v9 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, getObjectFunc);
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
      v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleFieldMotionComponent_o *, _QWORD))getObjectFunc->fields.m_target)(
                                      getObjectFunc->fields.original_method_info,
                                      v10->m_Items[v8],
                                      *(_QWORD *)&getObjectFunc->fields.extra_arg);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return (Il2CppObject *)v12;
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
  __int64 v8; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  long double inited; // q0
  _QWORD *v33; // x19
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Collections_Generic_IEnumerable_T__o *baseMotionIds; // x21
  System_Collections_Generic_List_int__o *v44; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CurWaveEnemyDeckMotionIds; // x0
  FieldMotionManager_c *klass; // x8
  FieldMotionManager_o *v47; // x20
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x20
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  int32_t v63; // w21
  _BOOL8 v64; // x0
  __int64 v65; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0

  v6 = this;
  if ( (byte_4B19464 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, stageEnt, data);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Reverse_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v27, v28);
    this = (FieldMotionManager_o *)sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v29, v30);
    byte_4B19464 = 1;
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
      v42 = System_Linq_Enumerable__Reverse_int_(
              WaveFieldMotionIds,
              (const MethodInfo_2F3C3D8 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v42,
               (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    baseMotionIds = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.baseMotionIds;
    v44 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v39,
                                                      v40,
                                                      v41);
    System_Collections_Generic_List_int____ctor_56116492(
      v44,
      baseMotionIds,
      (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0LL);
      this = (FieldMotionManager_o *)System_Linq_Enumerable__Reverse_int_(
                                       CurWaveEnemyDeckMotionIds,
                                       (const MethodInfo_2F3C3D8 *)Method_System_Linq_Enumerable_Reverse_int___);
      if ( this )
      {
        klass = this->klass;
        v47 = this;
        v48 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
          {
            --v48;
            p_offset += 4;
            if ( !v48 )
              goto LABEL_22;
          }
          v50 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_22:
          v50 = sub_1C1C7C0(this, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
        }
        v52 = (*(__int64 (__fastcall **)(FieldMotionManager_o *, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
        if ( !v52 )
          sub_1BCAA3C(0LL, v51);
        while ( 1 )
        {
          v53 = *(_QWORD *)v52;
          v54 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
          {
            v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v54;
              v55 += 4;
              if ( !v54 )
                goto LABEL_29;
            }
            v56 = v53 + 16LL * *v55 + 312;
          }
          else
          {
LABEL_29:
            v56 = sub_1C1C7C0(v52, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
            break;
          v57 = *(_QWORD *)v52;
          v58 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
          {
            v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_int__c **)v59 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
            {
              --v58;
              v59 += 4;
              if ( !v58 )
                goto LABEL_36;
            }
            v60 = v57 + 16LL * *v59 + 312;
          }
          else
          {
LABEL_36:
            v60 = sub_1C1C7C0(v52, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
          }
          v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v52, *(_QWORD *)(v60 + 8));
          if ( !v44 )
            sub_1BCAA3C(v61, v62);
          v63 = v61;
          v64 = System_Collections_Generic_List_int___Contains(
                  v44,
                  v61,
                  (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v64 )
            v64 = System_Collections_Generic_List_int___Remove(
                    v44,
                    v63,
                    (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
          items = v44->fields._items;
          v67 = Method_System_Collections_Generic_List_int__Add__;
          ++v44->fields._version;
          if ( !items )
            sub_1BCAA3C(v64, v65);
          size = v44->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v44,
              v63,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v44->fields._size = size + 1;
            items->m_Items[size + 1] = v63;
          }
        }
        v69 = *(_QWORD *)v52;
        v70 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
          {
            --v70;
            v71 += 4;
            if ( !v70 )
              goto LABEL_49;
          }
          v72 = v69 + 16LL * *v71 + 312;
        }
        else
        {
LABEL_49:
          v72 = sub_1C1C7C0(v52, System_IDisposable_TypeInfo, 0LL);
        }
        this = (FieldMotionManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v52, *(_QWORD *)(v72 + 8));
        if ( v44 )
          return System_Collections_Generic_List_int___ToArray(
                   v44,
                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_55:
    sub_1BCAA3C(this, stageEnt);
  }
  v33 = Method_System_Array_Empty_int___;
  v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v34 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v31);
    v34 = v33[7];
  }
  v35 = *(_QWORD *)(v34 + 16);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v35 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v35, v31);
  v36 = *(_QWORD *)(v33[7] + 16LL);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1C1C6BC(inited);
  return **(System_Int32_array ***)(v36 + 184);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager__GetEnemyStage(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  FieldMotionManager___c_c *v13; // x0
  System_Func_object__object__o *_9__15_0; // x20
  Il2CppObject *v15; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4B19468 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method, v2);
    sub_1BCA7E0(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, v9, v10);
    sub_1BCA7E0(&FieldMotionManager___c_TypeInfo, v11, v12);
    byte_4B19468 = 1;
  }
  v13 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, method);
    v13 = FieldMotionManager___c_TypeInfo;
  }
  _9__15_0 = (System_Func_object__object__o *)v13->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = FieldMotionManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__15_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
    System_Func_object__object____ctor(_9__15_0, v15, Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__15_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__15_0,
      (int64_t)_9__15_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !this )
    sub_1BCAA3C(v13, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__15_0,
                               (const MethodInfo_2F5F6D8 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_object__object__o *v26; // x20
  __int64 v27; // x1
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4B19469 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, name, method);
    sub_1BCA7E0(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__, v10, v11);
    sub_1BCA7E0(&FieldMotionManager___c__DisplayClass16_0_TypeInfo, v12, v13);
    byte_4B19469 = 1;
  }
  v14 = sub_1BCAA2C(FieldMotionManager___c__DisplayClass16_0_TypeInfo, name, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)name, v17, v18, v19, v20, v21, v22);
  v26 = (System_Func_object__object__o *)sub_1BCAA2C(
                                           System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                           v23,
                                           v24,
                                           v25);
  System_Func_object__object____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v26,
                               (const MethodInfo_2F5F6D8 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  FieldMotionManager___c_c *v13; // x0
  System_Func_object__object__o *_9__14_0; // x20
  Il2CppObject *v15; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4B19467 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method, v2);
    sub_1BCA7E0(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, v9, v10);
    sub_1BCA7E0(&FieldMotionManager___c_TypeInfo, v11, v12);
    byte_4B19467 = 1;
  }
  v13 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, method);
    v13 = FieldMotionManager___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__object__o *)v13->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = FieldMotionManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__14_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
    System_Func_object__object____ctor(_9__14_0, v15, Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__14_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
      (int64_t)_9__14_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !this )
    sub_1BCAA3C(v13, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__14_0,
                               (const MethodInfo_2F5F6D8 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Func_object__object__o *v20; // x20
  __int64 v21; // x1
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4B1946B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type, *(_QWORD *)&index);
    sub_1BCA7E0(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__, v11, v12);
    sub_1BCA7E0(&FieldMotionManager___c__DisplayClass18_0_TypeInfo, v13, v14);
    byte_4B1946B = 1;
  }
  v15 = sub_1BCAA2C(FieldMotionManager___c__DisplayClass18_0_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_DWORD *)(v15 + 16) = type;
  *(_DWORD *)(v15 + 20) = index;
  v20 = (System_Func_object__object__o *)sub_1BCAA2C(
                                           System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                           v17,
                                           v18,
                                           v19);
  System_Func_object__object____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v20,
                               (const MethodInfo_2F5F6D8 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
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
  __int64 v8; // x2
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
  __int64 v25; // x22
  FieldMotionManager___c_c *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Func_object__object__o *v30; // x0
  __int64 *v31; // x8
  UnityEngine_Transform_o *result; // x0
  System_Func_object__object__o *_9__17_1; // x20
  Il2CppObject *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__17_1; // x0
  Il2CppObject *v44; // x21
  struct FieldMotionManager___c_StaticFields *v45; // x0

  if ( (byte_4B1946A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type, *(_QWORD *)&index);
    sub_1BCA7E0(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_FieldMotionManager___c__GetTransform_b__17_1__, v9, v10);
    sub_1BCA7E0(&Method_FieldMotionManager___c__GetTransform_b__17_3__, v11, v12);
    sub_1BCA7E0(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__, v13, v14);
    sub_1BCA7E0(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__, v15, v16);
    sub_1BCA7E0(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__, v17, v18);
    sub_1BCA7E0(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__, v19, v20);
    sub_1BCA7E0(&FieldMotionManager___c__DisplayClass17_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&FieldMotionManager___c_TypeInfo, v23, v24);
    byte_4B1946A = 1;
  }
  v25 = sub_1BCAA2C(FieldMotionManager___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&index, method);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
LABEL_22:
    sub_1BCAA3C(v26, v27);
  *(_DWORD *)(v25 + 16) = index;
  switch ( type )
  {
    case 0:
      v30 = (System_Func_object__object__o *)sub_1BCAA2C(
                                               System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                               v27,
                                               v28,
                                               v29);
      v31 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__;
      goto LABEL_25;
    case 1:
      v26 = FieldMotionManager___c_TypeInfo;
      if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, v27);
        v26 = FieldMotionManager___c_TypeInfo;
      }
      _9__17_1 = (System_Func_object__object__o *)v26->static_fields->__9__17_1;
      if ( _9__17_1 )
        goto LABEL_21;
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26, v27);
        v26 = FieldMotionManager___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v26->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                    System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29);
      System_Func_object__object____ctor(_9__17_1, v34, Method_FieldMotionManager___c__GetTransform_b__17_1__, 0LL);
      v41 = (int64_t)_9__17_1;
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      static_fields->__9__17_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (PartyOrganizationUtility_o *)&static_fields->__9__17_1;
      goto LABEL_20;
    case 2:
      v30 = (System_Func_object__object__o *)sub_1BCAA2C(
                                               System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                               v27,
                                               v28,
                                               v29);
      v31 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__;
      goto LABEL_25;
    case 3:
      v26 = FieldMotionManager___c_TypeInfo;
      if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, v27);
        v26 = FieldMotionManager___c_TypeInfo;
      }
      _9__17_1 = (System_Func_object__object__o *)v26->static_fields->__9__17_3;
      if ( _9__17_1 )
        goto LABEL_21;
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26, v27);
        v26 = FieldMotionManager___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v26->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                    System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29);
      System_Func_object__object____ctor(_9__17_1, v44, Method_FieldMotionManager___c__GetTransform_b__17_3__, 0LL);
      v41 = (int64_t)_9__17_1;
      v45 = FieldMotionManager___c_TypeInfo->static_fields;
      v45->__9__17_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (PartyOrganizationUtility_o *)&v45->__9__17_3;
LABEL_20:
      sub_1BCA784(p__9__17_1, v41, v35, v36, v37, v38, v39, v40);
LABEL_21:
      if ( !this )
        goto LABEL_22;
      goto LABEL_26;
    case 4:
      v30 = (System_Func_object__object__o *)sub_1BCAA2C(
                                               System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                               v27,
                                               v28,
                                               v29);
      v31 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__;
      goto LABEL_25;
    case 5:
      v30 = (System_Func_object__object__o *)sub_1BCAA2C(
                                               System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                               v27,
                                               v28,
                                               v29);
      v31 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__;
LABEL_25:
      _9__17_1 = v30;
      System_Func_object__object____ctor(v30, (Il2CppObject *)v25, *v31, 0LL);
LABEL_26:
      result = (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                            this,
                                            (System_Func_BattleFieldMotionComponent__T__o *)_9__17_1,
                                            (const MethodInfo_2F5F6D8 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


bool __fastcall FieldMotionManager__IsStep(FieldMotionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FieldMotionManager_o *v3; // x19
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  char v5; // w21
  __int64 v6; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x9

  v3 = this;
  if ( (byte_4B19465 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19465 = 1;
  }
  fieldMotionArray = v3->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1BCAA3C(this, method);
  v5 = 0;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v8 = v6 - 4;
    if ( v6 - 4 >= (int)max_length )
      return v5 & 1;
    if ( v8 >= max_length )
      goto LABEL_17;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    fieldMotionArray = v3->fields.fieldMotionArray;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !fieldMotionArray )
        goto LABEL_15;
      if ( v8 >= fieldMotionArray->max_length )
LABEL_17:
        sub_1BCAA44(this, method);
      v10 = *((_QWORD *)&fieldMotionArray->obj.klass + v6);
      if ( !v10 )
        goto LABEL_15;
      v5 |= *(_BYTE *)(v10 + 184) != 0;
    }
    ++v6;
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
  __int64 v15; // x1
  System_String_o *v16; // x0
  System_String_o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  UnityEngine_UnityException_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x0

  if ( (byte_4B1946C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, nowAction, method);
    byte_4B1946C = 1;
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
    v14 = (System_String_o *)sub_1BCA7F4(&StringLiteral_307/*" not found "*/, v6);
    v16 = (System_String_o *)sub_1BCA7F4(&StringLiteral_275/*" in fieldFsm "*/, v15);
    v17 = System_String__Concat_62412480(v14, v8, v16, 0LL);
    v19 = sub_1BCA7F4(&UnityEngine_UnityException_TypeInfo, v18);
    v23 = (UnityEngine_UnityException_o *)sub_1BCAA2C(v19, v20, v21, v22);
    UnityEngine_UnityException___ctor_70138704(v23, v17, 0LL);
    v25 = sub_1BCA7F4(&Method_FieldMotionManager_PlayBattleAction__, v24);
    sub_1BCA908(v23, v25);
  }
  while ( 1 )
  {
    if ( v9 >= fieldMotionArray->max_length )
      goto LABEL_20;
    v10 = v9;
    v11 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    sub_1BCAA44(MotionName, v6);
  MotionName = v13->m_Items[v10];
  if ( !MotionName )
LABEL_15:
    sub_1BCAA3C(MotionName, v6);
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
    sub_1BCAA3C(this, method);
  v10 = 1LL;
  v11 = 40LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    if ( v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      sub_1BCAA44(this, method);
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v11) = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)((char *)fieldMotionArray + v11), 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v10; // w9
  __int64 v11; // x23
  UnityEngine_Object_o *v12; // x22
  struct BattleFieldMotionComponent_array *v13; // x8
  struct BattleFieldMotionComponent_array *v15; // x8
  Il2CppObject *Fsm; // x0
  struct BattleFieldMotionComponent_array *v17; // x8

  v6 = this;
  if ( (byte_4B1946D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_PlayMakerFSM___, str, callbackBeforeSend);
    this = (FieldMotionManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B1946D = 1;
  }
  fieldMotionArray = v6->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_24;
  v10 = fieldMotionArray->max_length - 1;
  if ( (v10 & 0x80000000) != 0 )
    return 0;
  while ( 1 )
  {
    if ( v10 >= fieldMotionArray->max_length )
      goto LABEL_25;
    v11 = v10;
    v12 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v10];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, str);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v13 = v6->fields.fieldMotionArray;
      if ( !v13 )
        goto LABEL_24;
      if ( (unsigned int)v11 >= v13->max_length )
        goto LABEL_25;
      this = (FieldMotionManager_o *)v13->m_Items[v11];
      if ( !this )
        goto LABEL_24;
      this = (FieldMotionManager_o *)BattleFieldMotionComponent__checkMotionEvent(
                                       (BattleFieldMotionComponent_o *)this,
                                       str,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    v10 = v11 - 1;
    if ( (int)v11 - 1 < 0 )
      return 0;
    fieldMotionArray = v6->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_24;
  }
  v15 = v6->fields.fieldMotionArray;
  if ( !v15 )
    goto LABEL_24;
  if ( (unsigned int)v11 >= v15->max_length )
    goto LABEL_25;
  this = (FieldMotionManager_o *)v15->m_Items[v11];
  if ( !this
    || (Fsm = (Il2CppObject *)BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)this, 0LL),
        ActionExtensions__Call_object_(
          (System_Action_T__o *)callbackBeforeSend,
          Fsm,
          (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_PlayMakerFSM___),
        (v17 = v6->fields.fieldMotionArray) == 0LL) )
  {
LABEL_24:
    sub_1BCAA3C(this, str);
  }
  if ( (unsigned int)v11 >= v17->max_length )
LABEL_25:
    sub_1BCAA44(this, str);
  this = (FieldMotionManager_o *)v17->m_Items[v11];
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
  if ( (byte_4B1946E & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, str, method);
    byte_4B1946E = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1BCAA3C(this, str);
  v6 = fieldMotionArray->max_length - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      if ( v6 >= fieldMotionArray->max_length )
LABEL_18:
        sub_1BCAA44(this, str);
      v7 = v6;
      v8 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, str);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B1946F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, nowAction, active);
    byte_4B1946F = 1;
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
          sub_1BCAA44(MotionName, v8);
        MotionName = v15->m_Items[v12];
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion(MotionName, active, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1BCAA3C(MotionName, v8);
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
  if ( (byte_4B19461 & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_1BCA7E0(&Method_System_Array_Empty_int___, motionIds, method);
    byte_4B19461 = 1;
    if ( klass )
    {
LABEL_3:
      if ( v10 )
        goto LABEL_4;
LABEL_15:
      sub_1BCAA3C(this, motionIds);
    }
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, motionIds);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13, motionIds);
  this = *(FieldMotionManager_o **)(v11[7] + 16LL);
  if ( (BYTE5(this[7].fields.retentionFieldMotionArray) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_1C1C6BC(inited);
  klass = (struct System_Int32_array *)this[4].fields.retentionFieldMotionArray->obj.klass;
  if ( !v10 )
    goto LABEL_15;
LABEL_4:
  v10->fields.baseMotionIds = klass;
  sub_1BCA784(
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  FieldMotionManager___c_c *v14; // x0
  System_Func_object__object__o *_9__13_0; // x21
  Il2CppObject *v16; // x22
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  Il2CppObject *LastNotNullObject_object; // x20

  if ( (byte_4B19466 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, flg, method);
    sub_1BCA7E0(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_FieldMotionManager___c__SetTacticBg_b__13_0__, v10, v11);
    sub_1BCA7E0(&FieldMotionManager___c_TypeInfo, v12, v13);
    byte_4B19466 = 1;
  }
  v14 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, flg);
    v14 = FieldMotionManager___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__object__o *)v14->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, flg);
      v14 = FieldMotionManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__13_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                  flg,
                                                  method,
                                                  v3);
    System_Func_object__object____ctor(_9__13_0, v16, Method_FieldMotionManager___c__SetTacticBg_b__13_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__13_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !this )
    goto LABEL_16;
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__13_0,
                               (const MethodInfo_2F5F6D8 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  v14 = (FieldMotionManager___c_c *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)LastNotNullObject_object,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( LastNotNullObject_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LastNotNullObject_object, flg, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(v14, flg);
  }
}


void __fastcall FieldMotionManager__SetVariables___Il2CppFullySharedGenericType_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
        const MethodInfo_2F606E0 *method)
{
  long double v4; // q0
  unsigned __int64 StatusReg; // x21
  _QWORD *monitor; // x19
  __int64 v9; // x8
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x0
  __int16 v35; // w8
  __int64 v36; // x22
  __int64 v37; // x8
  int v38; // w9
  char *v39; // x24
  System_Collections_Generic_List_object__o *v40; // x26
  PlayMakerFSM_o *Fsm; // x0
  __int64 v42; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v44; // x25
  unsigned __int64 i; // x23
  UnityEngine_Object_o *v46; // x26
  __int64 v47; // x27
  System_Type_o *TypeFromHandle; // x27
  System_Type_o *v49; // x0
  __int64 v50; // x27
  PlayMakerFSM_o *v51; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **p_klass; // x1
  System_String_c **v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  __int64 v61; // x27
  System_Type_o *v62; // x27
  System_Type_o *v63; // x0
  __int64 v64; // x27
  HutongGames_PlayMaker_FsmGameObject_o *v65; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v66; // x1
  UnityEngine_GameObject_c **v67; // x0
  UnityEngine_GameObject_o *v68; // x1
  __int64 v69; // x27
  System_Type_o *v70; // x27
  System_Type_o *v71; // x0
  long double v72; // q0
  __int64 v73; // x9
  PlayMakerFSM_o *v74; // x26
  __int64 v75; // x8
  __int64 v76; // x0
  __int64 v77; // x27
  System_Type_o *v78; // x27
  System_Type_o *v79; // x0
  long double v80; // q0
  __int64 v81; // x9
  PlayMakerFSM_o *v82; // x26
  __int64 v83; // x8
  __int64 v84; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v85; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v86; // x3
  __int64 v87; // x1
  System_String_o *v88; // x27
  __int64 v89; // [xsp+0h] [xbp-40h] BYREF
  __int64 v90; // [xsp+8h] [xbp-38h]
  __int64 v91; // [xsp+10h] [xbp-30h]
  unsigned __int64 v92; // [xsp+18h] [xbp-28h]
  __int64 v93; // [xsp+20h] [xbp-20h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+28h] [xbp-18h] BYREF
  System_String_o *v95; // [xsp+30h] [xbp-10h]
  __int64 v96; // [xsp+38h] [xbp-8h]
  System_RuntimeTypeHandle_o v97; // 0:w0.4
  System_RuntimeTypeHandle_o v98; // 0:w0.4
  System_RuntimeTypeHandle_o v99; // 0:w0.4
  System_RuntimeTypeHandle_o v100; // 0:w0.4
  System_RuntimeTypeHandle_o v101; // 0:w0.4
  System_RuntimeTypeHandle_o v102; // 0:w0.4
  System_RuntimeTypeHandle_o v103; // 0:w0.4
  System_RuntimeTypeHandle_o v104; // 0:w0.4

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = value.monitor;
  v96 = *(_QWORD *)(StatusReg + 40);
  klass = value.klass;
  v9 = *((_QWORD *)value.monitor + 7);
  if ( !v9 )
  {
    sub_1BCA7E0(&bool_var, variableName, value.klass);
    sub_1BCA7E0(&bool_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_GameObject_var, v12, v13);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v14, v15);
    sub_1BCA7E0(&int_var, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&string_var, v28, v29);
    sub_1BCA7E0(&string_TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Type_TypeInfo, v32, v33);
    v9 = monitor[7];
    if ( !v9 )
    {
      sub_1C1C718(monitor);
      v9 = monitor[7];
    }
  }
  v34 = *(_QWORD *)(v9 + 8);
  v35 = *(_WORD *)(v34 + 309);
  v36 = *(unsigned int *)(v34 + 252);
  if ( (v35 & 1) != 0 )
  {
    v38 = *(_DWORD *)(v34 + 252);
  }
  else
  {
    v37 = sub_1C1C6BC(v4);
    v34 = *(_QWORD *)(monitor[7] + 8LL);
    v38 = *(_DWORD *)(v37 + 252);
    v35 = *(_WORD *)(v34 + 309);
  }
  v91 = (__int64)&v89 - (((unsigned int)(v38 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v92 = StatusReg;
  if ( (v35 & 1) == 0 )
    v34 = sub_1C1C6BC(v4);
  v90 = (__int64)&v89 - (((unsigned int)(*(_DWORD *)(v34 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  v39 = (char *)&v89 - ((v36 + 15) & 0x1FFFFFFF0LL);
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                       variableName,
                                                       value.klass,
                                                       value.monitor);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v40
    || (v93 = v36,
        System_Collections_Generic_List_object___AddRange(
          v40,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v40,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_85:
    sub_1BCAA3C(Fsm, v42);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v44 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(Fsm, v42);
      v46 = (UnityEngine_Object_o *)*((_QWORD *)&v44->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v46, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        v47 = *(_QWORD *)monitor[7];
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v42);
        v97.fields.value = v47;
        TypeFromHandle = System_Type__GetTypeFromHandle(v97, 0LL);
        v98.fields.value = (int)string_var;
        v49 = System_Type__GetTypeFromHandle(v98, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v49, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v46 )
            goto LABEL_85;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v46, 0LL);
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
            v50 = monitor[7];
            v51 = Fsm;
            if ( *(int *)(*(_QWORD *)(v50 + 8) + 40LL) >= 0 )
              p_klass = &klass;
            else
              p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
            memcpy(v39, p_klass, v93);
            v53 = (System_String_c **)j_il2cpp_value_box_0(*(_QWORD *)(v50 + 8), v39);
            if ( v53 )
            {
              if ( *v53 == string_TypeInfo )
                v60 = (int64_t)v53;
              else
                v60 = 0LL;
            }
            else
            {
              v60 = 0LL;
            }
            v51->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v60;
            sub_1BCA784((PartyOrganizationUtility_o *)&v51->fields.addEventHandlers, v60, v54, v55, v56, v57, v58, v59);
          }
        }
        else
        {
          v61 = *(_QWORD *)monitor[7];
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v42);
          v99.fields.value = v61;
          v62 = System_Type__GetTypeFromHandle(v99, 0LL);
          v100.fields.value = (int)UnityEngine_GameObject_var;
          v63 = System_Type__GetTypeFromHandle(v100, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v62, v63, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v46 )
              goto LABEL_85;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v46, 0LL);
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
              v64 = monitor[7];
              v65 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              if ( *(int *)(*(_QWORD *)(v64 + 8) + 40LL) >= 0 )
                v66 = &klass;
              else
                v66 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
              memcpy(v39, v66, v93);
              v67 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(*(_QWORD *)(v64 + 8), v39);
              if ( v67 )
              {
                if ( *v67 == UnityEngine_GameObject_TypeInfo )
                  v68 = (UnityEngine_GameObject_o *)v67;
                else
                  v68 = 0LL;
              }
              else
              {
                v68 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v65, v68, 0LL);
            }
          }
          else
          {
            v69 = *(_QWORD *)monitor[7];
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v42);
            v101.fields.value = v69;
            v70 = System_Type__GetTypeFromHandle(v101, 0LL);
            v102.fields.value = (int)int_var;
            v71 = System_Type__GetTypeFromHandle(v102, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v70, v71, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v46 )
                goto LABEL_85;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v46, 0LL);
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
                v73 = monitor[7];
                v74 = Fsm;
                v75 = *(_QWORD *)(v73 + 8);
                if ( (*(_BYTE *)(v75 + 309) & 1) != 0 )
                {
                  v76 = *(_QWORD *)(v73 + 8);
                }
                else
                {
                  LODWORD(v76) = sub_1C1C6BC(v72);
                  v73 = monitor[7];
                  v75 = *(_QWORD *)(v73 + 8);
                }
                if ( *(int *)(v75 + 40) >= 0 )
                  v85 = &klass;
                else
                  v85 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                sub_1BCB248(v76, *(_QWORD *)(v73 + 16), v91, v85);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v95, 0LL);
                LODWORD(v74->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v77 = *(_QWORD *)monitor[7];
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v42);
              v103.fields.value = v77;
              v78 = System_Type__GetTypeFromHandle(v103, 0LL);
              v104.fields.value = (int)bool_var;
              v79 = System_Type__GetTypeFromHandle(v104, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v78, v79, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v46 )
                  goto LABEL_85;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v46, 0LL);
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
                  v81 = monitor[7];
                  v82 = Fsm;
                  v83 = *(_QWORD *)(v81 + 8);
                  if ( (*(_BYTE *)(v83 + 309) & 1) != 0 )
                  {
                    v84 = *(_QWORD *)(v81 + 8);
                  }
                  else
                  {
                    LODWORD(v84) = sub_1C1C6BC(v80);
                    v81 = monitor[7];
                    v83 = *(_QWORD *)(v81 + 8);
                  }
                  if ( *(int *)(v83 + 40) >= 0 )
                    v86 = &klass;
                  else
                    v86 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                  sub_1BCB248(v84, *(_QWORD *)(v81 + 16), v90, v86);
                  v88 = v95;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo, v87);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v88, 0LL);
                  LOBYTE(v82->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v44->fields.m_CancellationTokenSource;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_2F5F7F8 *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v33; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v35; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v37; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v40; // x0
  PlayMakerFSM_o *v41; // x22
  System_String_c **v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  Il2CppType *v50; // x23
  System_Type_o *v51; // x23
  System_Type_o *v52; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v53; // x22
  UnityEngine_GameObject_c **v54; // x0
  UnityEngine_GameObject_o *v55; // x1
  Il2CppType *v56; // x23
  System_Type_o *v57; // x23
  System_Type_o *v58; // x0
  PlayMakerFSM_o *v59; // x22
  System_String_o *v60; // x0
  Il2CppType *v61; // x23
  System_Type_o *v62; // x23
  System_Type_o *v63; // x0
  PlayMakerFSM_o *v64; // x22
  System_String_o *v65; // x0
  char v66[4]; // [xsp+4h] [xbp-6Ch] BYREF
  char v67[4]; // [xsp+8h] [xbp-68h] BYREF
  char v68[4]; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v69; // 0:w0.4
  System_RuntimeTypeHandle_o v70; // 0:w0.4
  System_RuntimeTypeHandle_o v71; // 0:w0.4
  System_RuntimeTypeHandle_o v72; // 0:w0.4
  System_RuntimeTypeHandle_o v73; // 0:w0.4
  System_RuntimeTypeHandle_o v74; // 0:w0.4
  System_RuntimeTypeHandle_o v75; // 0:w0.4
  System_RuntimeTypeHandle_o v76; // 0:w0.4

  v68[0] = value;
  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&bool_var, variableName, value);
    sub_1BCA7E0(&bool_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_GameObject_var, v9, v10);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v11, v12);
    sub_1BCA7E0(&int_var, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&string_var, v25, v26);
    sub_1BCA7E0(&string_TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Type_TypeInfo, v29, v30);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                       variableName,
                                                       value,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v31
    || (System_Collections_Generic_List_object___AddRange(
          v31,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v31,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1BCAA3C(Fsm, v33);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v35 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(Fsm, v33);
      v37 = (UnityEngine_Object_o *)*((_QWORD *)&v35->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v37, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v33);
        v69.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v69, 0LL);
        v70.fields.value = (int)string_var;
        v40 = System_Type__GetTypeFromHandle(v70, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v40, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v37 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v37, 0LL);
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
            v41 = Fsm;
            v67[0] = v68[0];
            v42 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v67);
            if ( v42 )
            {
              if ( *v42 == string_TypeInfo )
                v49 = (int64_t)v42;
              else
                v49 = 0LL;
            }
            else
            {
              v49 = 0LL;
            }
            v41->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v49;
            sub_1BCA784((PartyOrganizationUtility_o *)&v41->fields.addEventHandlers, v49, v43, v44, v45, v46, v47, v48);
          }
        }
        else
        {
          v50 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v33);
          v71.fields.value = (int)v50;
          v51 = System_Type__GetTypeFromHandle(v71, 0LL);
          v72.fields.value = (int)UnityEngine_GameObject_var;
          v52 = System_Type__GetTypeFromHandle(v72, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v51, v52, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v37 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v37, 0LL);
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
              v53 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v66[0] = v68[0];
              v54 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v66);
              if ( v54 )
              {
                if ( *v54 == UnityEngine_GameObject_TypeInfo )
                  v55 = (UnityEngine_GameObject_o *)v54;
                else
                  v55 = 0LL;
              }
              else
              {
                v55 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v53, v55, 0LL);
            }
          }
          else
          {
            v56 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v33);
            v73.fields.value = (int)v56;
            v57 = System_Type__GetTypeFromHandle(v73, 0LL);
            v74.fields.value = (int)int_var;
            v58 = System_Type__GetTypeFromHandle(v74, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v57, v58, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v37 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v37, 0LL);
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
                v59 = Fsm;
                if ( !bool_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(bool_TypeInfo, v33);
                v60 = System_Boolean__ToString((bool)v68, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v60, 0LL);
                LODWORD(v59->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v61 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v33);
              v75.fields.value = (int)v61;
              v62 = System_Type__GetTypeFromHandle(v75, 0LL);
              v76.fields.value = (int)bool_var;
              v63 = System_Type__GetTypeFromHandle(v76, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v62, v63, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v37 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v37, 0LL);
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
                  v64 = Fsm;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo, v33);
                  v65 = System_Boolean__ToString((bool)v68, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v65, 0LL);
                  LOBYTE(v64->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v35->fields.m_CancellationTokenSource;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_2F5FD10 *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v33; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v35; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v37; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v40; // x0
  PlayMakerFSM_o *v41; // x22
  System_String_c **v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  Il2CppType *v50; // x23
  System_Type_o *v51; // x23
  System_Type_o *v52; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v53; // x22
  UnityEngine_GameObject_c **v54; // x0
  UnityEngine_GameObject_o *v55; // x1
  Il2CppType *v56; // x23
  System_Type_o *v57; // x23
  System_Type_o *v58; // x0
  PlayMakerFSM_o *v59; // x22
  System_String_o *v60; // x0
  Il2CppType *v61; // x23
  System_Type_o *v62; // x23
  System_Type_o *v63; // x0
  PlayMakerFSM_o *v64; // x22
  __int64 v65; // x1
  System_String_o *v66; // x23
  int32_t v67; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v68; // [xsp+8h] [xbp-68h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v70; // 0:w0.4
  System_RuntimeTypeHandle_o v71; // 0:w0.4
  System_RuntimeTypeHandle_o v72; // 0:w0.4
  System_RuntimeTypeHandle_o v73; // 0:w0.4
  System_RuntimeTypeHandle_o v74; // 0:w0.4
  System_RuntimeTypeHandle_o v75; // 0:w0.4
  System_RuntimeTypeHandle_o v76; // 0:w0.4
  System_RuntimeTypeHandle_o v77; // 0:w0.4

  v69 = value;
  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&bool_var, variableName, *(_QWORD *)&value);
    sub_1BCA7E0(&bool_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_GameObject_var, v9, v10);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v11, v12);
    sub_1BCA7E0(&int_var, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&string_var, v25, v26);
    sub_1BCA7E0(&string_TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Type_TypeInfo, v29, v30);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                       variableName,
                                                       *(_QWORD *)&value,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v31
    || (System_Collections_Generic_List_object___AddRange(
          v31,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v31,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_62:
    sub_1BCAA3C(Fsm, v33);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v35 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(Fsm, v33);
      v37 = (UnityEngine_Object_o *)*((_QWORD *)&v35->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v37, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v33);
        v70.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v70, 0LL);
        v71.fields.value = (int)string_var;
        v40 = System_Type__GetTypeFromHandle(v71, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v40, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v37 )
            goto LABEL_62;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v37, 0LL);
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
            v41 = Fsm;
            v68 = v69;
            v42 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v68);
            if ( v42 )
            {
              if ( *v42 == string_TypeInfo )
                v49 = (int64_t)v42;
              else
                v49 = 0LL;
            }
            else
            {
              v49 = 0LL;
            }
            v41->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v49;
            sub_1BCA784((PartyOrganizationUtility_o *)&v41->fields.addEventHandlers, v49, v43, v44, v45, v46, v47, v48);
          }
        }
        else
        {
          v50 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v33);
          v72.fields.value = (int)v50;
          v51 = System_Type__GetTypeFromHandle(v72, 0LL);
          v73.fields.value = (int)UnityEngine_GameObject_var;
          v52 = System_Type__GetTypeFromHandle(v73, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v51, v52, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v37 )
              goto LABEL_62;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v37, 0LL);
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
              v53 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v67 = v69;
              v54 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v67);
              if ( v54 )
              {
                if ( *v54 == UnityEngine_GameObject_TypeInfo )
                  v55 = (UnityEngine_GameObject_o *)v54;
                else
                  v55 = 0LL;
              }
              else
              {
                v55 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v53, v55, 0LL);
            }
          }
          else
          {
            v56 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v33);
            v74.fields.value = (int)v56;
            v57 = System_Type__GetTypeFromHandle(v74, 0LL);
            v75.fields.value = (int)int_var;
            v58 = System_Type__GetTypeFromHandle(v75, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v57, v58, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v37 )
                goto LABEL_62;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v37, 0LL);
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
                v59 = Fsm;
                v60 = System_Int32__ToString((int32_t)&v69, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v60, 0LL);
                LODWORD(v59->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v61 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v33);
              v76.fields.value = (int)v61;
              v62 = System_Type__GetTypeFromHandle(v76, 0LL);
              v77.fields.value = (int)bool_var;
              v63 = System_Type__GetTypeFromHandle(v77, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v62, v63, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v37 )
                  goto LABEL_62;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v37, 0LL);
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
                  v64 = Fsm;
                  v66 = System_Int32__ToString((int32_t)&v69, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo, v65);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v66, 0LL);
                  LOBYTE(v64->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v35->fields.m_CancellationTokenSource;
    }
  }
}


void __fastcall FieldMotionManager__SetVariables_object_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Il2CppObject *value,
        const MethodInfo_2F60218 *method)
{
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x23
  void *Fsm; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  _QWORD *v36; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v38; // x23
  Il2CppType *_0_T; // x24
  System_Type_o *TypeFromHandle; // x24
  System_Type_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject *v48; // x1
  Il2CppType *v49; // x24
  System_Type_o *v50; // x24
  System_Type_o *v51; // x0
  Il2CppObject *v52; // x1
  Il2CppType *v53; // x24
  System_Type_o *v54; // x24
  System_Type_o *v55; // x0
  _DWORD *v56; // x23
  System_String_o *v57; // x0
  Il2CppType *v58; // x24
  System_Type_o *v59; // x24
  System_Type_o *v60; // x0
  _BYTE *v61; // x23
  __int64 v62; // x1
  System_String_o *v63; // x24
  System_RuntimeTypeHandle_o v64; // 0:w0.4
  System_RuntimeTypeHandle_o v65; // 0:w0.4
  System_RuntimeTypeHandle_o v66; // 0:w0.4
  System_RuntimeTypeHandle_o v67; // 0:w0.4
  System_RuntimeTypeHandle_o v68; // 0:w0.4
  System_RuntimeTypeHandle_o v69; // 0:w0.4
  System_RuntimeTypeHandle_o v70; // 0:w0.4
  System_RuntimeTypeHandle_o v71; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&bool_var, variableName, value);
    sub_1BCA7E0(&bool_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_GameObject_var, v10, v11);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v12, v13);
    sub_1BCA7E0(&int_var, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&string_var, v26, v27);
    sub_1BCA7E0(&string_TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Type_TypeInfo, v30, v31);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                       variableName,
                                                       value,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v32
    || (System_Collections_Generic_List_object___AddRange(
          v32,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = System_Collections_Generic_List_object___ToArray(
                 v32,
                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1BCAA3C(Fsm, v34);
  }
  v35 = *((_QWORD *)Fsm + 3);
  v36 = Fsm;
  if ( (int)v35 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v35; ++i )
    {
      if ( i >= (unsigned int)v35 )
        sub_1BCAA44(Fsm, v34);
      v38 = (UnityEngine_Object_o *)v36[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
      Fsm = (void *)UnityEngine_Object__op_Equality(v38, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v34);
        v64.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v64, 0LL);
        v65.fields.value = (int)string_var;
        v41 = System_Type__GetTypeFromHandle(v65, 0LL);
        Fsm = (void *)System_Type__op_Equality(TypeFromHandle, v41, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v38 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v38, 0LL);
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
                v48 = value;
              else
                v48 = 0LL;
            }
            else
            {
              v48 = 0LL;
            }
            *((_QWORD *)Fsm + 7) = v48;
            sub_1BCA784((PartyOrganizationUtility_o *)((char *)Fsm + 56), (int64_t)v48, v42, v43, v44, v45, v46, v47);
          }
        }
        else
        {
          v49 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v34);
          v66.fields.value = (int)v49;
          v50 = System_Type__GetTypeFromHandle(v66, 0LL);
          v67.fields.value = (int)UnityEngine_GameObject_var;
          v51 = System_Type__GetTypeFromHandle(v67, 0LL);
          Fsm = (void *)System_Type__op_Equality(v50, v51, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v38 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v38, 0LL);
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
                  v52 = value;
                else
                  v52 = 0LL;
              }
              else
              {
                v52 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                (UnityEngine_GameObject_o *)v52,
                0LL);
            }
          }
          else
          {
            v53 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v34);
            v68.fields.value = (int)v53;
            v54 = System_Type__GetTypeFromHandle(v68, 0LL);
            v69.fields.value = (int)int_var;
            v55 = System_Type__GetTypeFromHandle(v69, 0LL);
            Fsm = (void *)System_Type__op_Equality(v54, v55, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v38 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v38, 0LL);
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
                v56 = Fsm;
                v57 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                           value,
                                           value->klass->vtable[4].methodPtr);
                Fsm = (void *)System_Int32__Parse(v57, 0LL);
                v56[14] = (_DWORD)Fsm;
              }
            }
            else
            {
              v58 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v34);
              v70.fields.value = (int)v58;
              v59 = System_Type__GetTypeFromHandle(v70, 0LL);
              v71.fields.value = (int)bool_var;
              v60 = System_Type__GetTypeFromHandle(v71, 0LL);
              Fsm = (void *)System_Type__op_Equality(v59, v60, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v38 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v38, 0LL);
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
                  v61 = Fsm;
                  v63 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                             value,
                                             value->klass->vtable[4].methodPtr);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo, v62);
                  Fsm = (void *)System_Boolean__Parse(v63, 0LL);
                  v61[56] = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(v35) = *((_DWORD *)v36 + 6);
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
  __int64 v8; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *EnableFieldMotionIds; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Func_T__TResult__o *v32; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v36; // x19
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v40; // x1
  __int64 v41; // x19
  unsigned __int64 i; // x28
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x21
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  int64_t v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x29
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x22
  System_Func_object__bool__o *v68; // x23
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x21
  Il2CppClass **v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x0

  if ( (byte_4B19463 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleDataDefine_FieldMotionPath__, stageEnt, data);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__string___, v9, v10);
    sub_1BCA7E0(&System_Func_int__string__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_BattleFieldMotionComponent__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_string__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_string__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__, v23, v24);
    sub_1BCA7E0(&FieldMotionManager___c__DisplayClass8_0_TypeInfo, v25, v26);
    byte_4B19463 = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v27);
  v32 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__string__TypeInfo, v29, v30, v31);
  System_Func_int__object____ctor(v32, 0LL, Method_BattleDataDefine_FieldMotionPath__, 0LL);
  v33 = System_Linq_Enumerable__Select_int__object_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v32,
          (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v33 )
    sub_1BCAA3C(0LL, v34);
  klass = v33->klass;
  v36 = v33;
  v37 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v33, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v36,
          *(_QWORD *)(p_method + 8));
  if ( !v41 )
    sub_1BCAA3C(0LL, v40);
  for ( i = 1LL; ; ++i )
  {
    v43 = *(_QWORD *)v41;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_16;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_16:
      v46 = sub_1C1C7C0(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v41, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v50 = sub_1BCAA2C(FieldMotionManager___c__DisplayClass8_0_TypeInfo, v47, v48, v49);
    System_Object___ctor((Il2CppObject *)v50, 0LL);
    v51 = *(_QWORD *)v41;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v53 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_23;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_23:
      v54 = sub_1C1C7C0(v41, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v41, *(_QWORD *)(v54 + 8));
    if ( !v50 )
      sub_1BCAA3C(v55, v55);
    *(_QWORD *)(v50 + 16) = v55;
    sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 16), v55, v56, v57, v58, v59, v60, v61);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_1BCAA3C(v62, v63);
    if ( (__int64)i >= (int)fieldMotionArray->max_length )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v68 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_BattleFieldMotionComponent__bool__TypeInfo,
                                           v63,
                                           v64,
                                           v65);
    System_Func_object__bool____ctor(
      v68,
      (Il2CppObject *)v50,
      Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__,
      0LL);
    v69 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v68,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v77 = (int64_t)v69;
    if ( v69 )
    {
      v69 = (Il2CppObject *)sub_1BCA91C(v69, fieldMotionArray->obj.klass->_1.element_class);
      if ( !v69 )
      {
        v83 = sub_1BCAA60(0LL);
        sub_1BCA908(v83, 0LL);
      }
    }
    if ( i >= fieldMotionArray->max_length )
      sub_1BCAA44(v69, v70);
    v78 = &fieldMotionArray->obj.klass + i;
    v78[4] = (Il2CppClass *)v77;
    sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 4), v77, v71, v72, v73, v74, v75, v76);
  }
  v79 = *(_QWORD *)v41;
  v80 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
  {
    v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
    {
      --v80;
      v81 += 4;
      if ( !v80 )
        goto LABEL_36;
    }
    v82 = v79 + 16LL * *v81 + 312;
  }
  else
  {
LABEL_36:
    v82 = sub_1C1C7C0(v41, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v82)(v41, *(_QWORD *)(v82 + 8));
}


void __fastcall FieldMotionManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B19470 & 1) == 0 )
  {
    sub_1BCA7E0(&FieldMotionManager___c_TypeInfo, v1, v2);
    byte_4B19470 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FieldMotionManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FieldMotionManager___c_TypeInfo->static_fields->__9 = (struct FieldMotionManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)FieldMotionManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetPlayerStage_b__14_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1BCAA3C(this, 0LL);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1BCAA3C(this, 0LL);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1BCAA3C(this, 0LL);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___SetTacticBg_b__13_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1BCAA3C(this, 0LL);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1BCAA3C(this, 0LL);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B19471 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B19471 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_1BCAA3C(v5, v6);
  return BasicHelper__EqualExceptNullOrEmpty(x->fields._AssetName_k__BackingField, this->fields.targetName, 0LL);
}