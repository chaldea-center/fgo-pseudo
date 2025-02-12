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
  __int64 v13; // x1
  _QWORD *v14; // x22
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  struct System_Int32_array **v18; // x8
  struct System_Int32_array *v19; // x1
  FieldMotionManager_Fields *p_fields; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  BattleFieldMotionComponent_o *v27; // x0
  __int64 v28; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v30; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v32; // x27
  UnityEngine_Object_o *v33; // x23
  struct BattleFieldMotionComponent_array *v34; // x8
  System_Object_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BB79F7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_int___, fieldMotions);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___, v12);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v13);
    byte_4BB79F7 = 1;
  }
  v14 = Method_System_Array_Empty_int___;
  v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v15 )
  {
    sub_1C65C5C(Method_System_Array_Empty_int___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C65C00(inited);
  if ( !*(_DWORD *)(v16 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C65C00(inited);
  v18 = *(struct System_Int32_array ***)(v17 + 184);
  v19 = *v18;
  this->fields.baseMotionIds = *v18;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.baseMotionIds,
    (int64_t)v19,
    (int64_t)perf,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)fieldMotions, v21, v22, v23, v24, v25, v26);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_23:
    sub_1C13F80(v27, v28);
  v30 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v32 = v30 - 4;
    if ( v30 - 4 >= (int)max_length )
      break;
    if ( v32 >= max_length )
      goto LABEL_25;
    v33 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v30);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
    if ( ((unsigned __int8)v27 & 1) != 0 )
    {
      v34 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_23;
      if ( v32 >= v34->max_length )
LABEL_25:
        sub_1C13F88(v27, v28);
      v27 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v34->obj.klass + v30);
      if ( !v27 )
        goto LABEL_23;
      BattleFieldMotionComponent__setPerf(v27, perf, 0LL);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v30;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_23;
  }
  v35 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotions,
          (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = (struct BattleFieldMotionComponent_array *)v35;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.retentionFieldMotionArray,
    (int64_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


Il2CppObject *__fastcall FieldMotionManager__FindLastNotNullObject_object_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_2FDCA04 *method)
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
    this = (FieldMotionManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, getObjectFunc);
    if ( !method->rgctx_data )
      this = (FieldMotionManager_o *)sub_1C65C5C();
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_18:
    sub_1C13F80(this, getObjectFunc);
  v7 = fieldMotionArray->max_length - 1;
  if ( (v7 & 0x80000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( v7 >= fieldMotionArray->max_length )
LABEL_21:
      sub_1C13F88(this, getObjectFunc);
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
  long double inited; // q0
  _QWORD *v20; // x19
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *baseMotionIds; // x21
  System_Collections_Generic_List_int__o *v28; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CurWaveEnemyDeckMotionIds; // x0
  FieldMotionManager_c *klass; // x8
  FieldMotionManager_o *v31; // x20
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 v35; // x1
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
  __int64 v46; // x1
  int32_t v47; // w21
  _BOOL8 v48; // x0
  __int64 v49; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0

  v6 = this;
  if ( (byte_4BB79F9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_int___, stageEnt);
    sub_1C13D24(&Method_System_Linq_Enumerable_Reverse_int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1C13D24(&System_IDisposable_TypeInfo, v9);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_int__TypeInfo, v10);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Remove__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor___77417304, v17);
    this = (FieldMotionManager_o *)sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v18);
    byte_4BB79F9 = 1;
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
      v26 = System_Linq_Enumerable__Reverse_int_(
              WaveFieldMotionIds,
              (const MethodInfo_2FB9470 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v26,
               (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    baseMotionIds = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.baseMotionIds;
    v28 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_56687228(
      v28,
      baseMotionIds,
      (const MethodInfo_360FA7C *)Method_System_Collections_Generic_List_int___ctor___77417304);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0LL);
      this = (FieldMotionManager_o *)System_Linq_Enumerable__Reverse_int_(
                                       CurWaveEnemyDeckMotionIds,
                                       (const MethodInfo_2FB9470 *)Method_System_Linq_Enumerable_Reverse_int___);
      if ( this )
      {
        klass = this->klass;
        v31 = this;
        v32 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
          {
            --v32;
            p_offset += 4;
            if ( !v32 )
              goto LABEL_22;
          }
          v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_22:
          v34 = sub_1C65D04(this, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
        }
        v36 = (*(__int64 (__fastcall **)(FieldMotionManager_o *, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
        if ( !v36 )
          sub_1C13F80(0LL, v35);
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
            v40 = sub_1C65D04(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
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
            v44 = sub_1C65D04(v36, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
          }
          v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
          if ( !v28 )
            sub_1C13F80(v45, v46);
          v47 = v45;
          v48 = System_Collections_Generic_List_int___Contains(
                  v28,
                  v45,
                  (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v48 )
            v48 = System_Collections_Generic_List_int___Remove(
                    v28,
                    v47,
                    (const MethodInfo_36116A4 *)Method_System_Collections_Generic_List_int__Remove__);
          items = v28->fields._items;
          v51 = Method_System_Collections_Generic_List_int__Add__;
          ++v28->fields._version;
          if ( !items )
            sub_1C13F80(v48, v49);
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v28,
              v47,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v28->fields._size = size + 1;
            items->m_Items[size + 1] = v47;
          }
        }
        v53 = *(_QWORD *)v36;
        v54 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
        {
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
          {
            --v54;
            v55 += 4;
            if ( !v54 )
              goto LABEL_49;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_49:
          v56 = sub_1C65D04(v36, System_IDisposable_TypeInfo, 0LL);
        }
        this = (FieldMotionManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v36, *(_QWORD *)(v56 + 8));
        if ( v28 )
          return System_Collections_Generic_List_int___ToArray(
                   v28,
                   (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_55:
    sub_1C13F80(this, stageEnt);
  }
  v20 = Method_System_Array_Empty_int___;
  v21 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v21 )
  {
    sub_1C65C5C(Method_System_Array_Empty_int___);
    v21 = v20[7];
  }
  v22 = *(_QWORD *)(v21 + 16);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C65C00(inited);
  if ( !*(_DWORD *)(v22 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v22);
  v23 = *(_QWORD *)(v20[7] + 16LL);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C65C00(inited);
  return **(System_Int32_array ***)(v23 + 184);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager__GetEnemyStage(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FieldMotionManager___c_c *v7; // x0
  System_Func_object__object__o *_9__15_0; // x20
  Il2CppObject *v9; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4BB79FD & 1) == 0 )
  {
    sub_1C13D24(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method);
    sub_1C13D24(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, v5);
    sub_1C13D24(&FieldMotionManager___c_TypeInfo, v6);
    byte_4BB79FD = 1;
  }
  v7 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v7 = FieldMotionManager___c_TypeInfo;
  }
  _9__15_0 = (System_Func_object__object__o *)v7->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FieldMotionManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__15_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__15_0, v9, Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__15_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__15_0,
      (int64_t)_9__15_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !this )
    sub_1C13F80(v7, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__15_0,
                               (const MethodInfo_2FDCA04 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Func_object__object__o *v18; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4BB79FE & 1) == 0 )
  {
    sub_1C13D24(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, name);
    sub_1C13D24(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__, v7);
    sub_1C13D24(&FieldMotionManager___c__DisplayClass16_0_TypeInfo, v8);
    byte_4BB79FE = 1;
  }
  v9 = sub_1C13F70(FieldMotionManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C13F80(v10, v11);
  *(_QWORD *)(v9 + 16) = name;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)name, v12, v13, v14, v15, v16, v17);
  v18 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
  System_Func_object__object____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v18,
                               (const MethodInfo_2FDCA04 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FieldMotionManager___c_c *v7; // x0
  System_Func_object__object__o *_9__14_0; // x20
  Il2CppObject *v9; // x21
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4BB79FC & 1) == 0 )
  {
    sub_1C13D24(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method);
    sub_1C13D24(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, v5);
    sub_1C13D24(&FieldMotionManager___c_TypeInfo, v6);
    byte_4BB79FC = 1;
  }
  v7 = FieldMotionManager___c_TypeInfo;
  if ( !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v7 = FieldMotionManager___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__object__o *)v7->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FieldMotionManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__14_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__14_0, v9, Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__14_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
      (int64_t)_9__14_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !this )
    sub_1C13F80(v7, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__14_0,
                               (const MethodInfo_2FDCA04 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  System_Func_object__object__o *v14; // x20
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_4BB7A00 & 1) == 0 )
  {
    sub_1C13D24(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type);
    sub_1C13D24(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__, v9);
    sub_1C13D24(&FieldMotionManager___c__DisplayClass18_0_TypeInfo, v10);
    byte_4BB7A00 = 1;
  }
  v11 = sub_1C13F70(FieldMotionManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C13F80(v12, v13);
  *(_DWORD *)(v11 + 16) = type;
  *(_DWORD *)(v11 + 20) = index;
  v14 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
  System_Func_object__object____ctor(
    v14,
    (Il2CppObject *)v11,
    Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__,
    0LL);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v14,
                               (const MethodInfo_2FDCA04 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  System_Func_object__object__o *v19; // x0
  __int64 *v20; // x8
  UnityEngine_Transform_o *result; // x0
  System_Func_object__object__o *_9__17_1; // x20
  Il2CppObject *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__17_1; // x0
  Il2CppObject *v33; // x21
  struct FieldMotionManager___c_StaticFields *v34; // x0

  if ( (byte_4BB79FF & 1) == 0 )
  {
    sub_1C13D24(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type);
    sub_1C13D24(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v7);
    sub_1C13D24(&Method_FieldMotionManager___c__GetTransform_b__17_1__, v8);
    sub_1C13D24(&Method_FieldMotionManager___c__GetTransform_b__17_3__, v9);
    sub_1C13D24(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__, v10);
    sub_1C13D24(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__, v11);
    sub_1C13D24(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__, v12);
    sub_1C13D24(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__, v13);
    sub_1C13D24(&FieldMotionManager___c__DisplayClass17_0_TypeInfo, v14);
    sub_1C13D24(&FieldMotionManager___c_TypeInfo, v15);
    byte_4BB79FF = 1;
  }
  v16 = sub_1C13F70(FieldMotionManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
LABEL_22:
    sub_1C13F80(v17, v18);
  *(_DWORD *)(v16 + 16) = index;
  switch ( type )
  {
    case 0:
      v19 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v20 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__;
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
      v23 = (Il2CppObject *)v17->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v23, Method_FieldMotionManager___c__GetTransform_b__17_1__, 0LL);
      v30 = (int64_t)_9__17_1;
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      static_fields->__9__17_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (PartyOrganizationUtility_o *)&static_fields->__9__17_1;
      goto LABEL_20;
    case 2:
      v19 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v20 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__;
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
      v33 = (Il2CppObject *)v17->static_fields->__9;
      _9__17_1 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__17_1, v33, Method_FieldMotionManager___c__GetTransform_b__17_3__, 0LL);
      v30 = (int64_t)_9__17_1;
      v34 = FieldMotionManager___c_TypeInfo->static_fields;
      v34->__9__17_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (PartyOrganizationUtility_o *)&v34->__9__17_3;
LABEL_20:
      sub_1C13CC8(p__9__17_1, v30, v24, v25, v26, v27, v28, v29);
LABEL_21:
      if ( !this )
        goto LABEL_22;
      goto LABEL_26;
    case 4:
      v19 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v20 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__;
      goto LABEL_25;
    case 5:
      v19 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v20 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__;
LABEL_25:
      _9__17_1 = v19;
      System_Func_object__object____ctor(v19, (Il2CppObject *)v16, *v20, 0LL);
LABEL_26:
      result = (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                            this,
                                            (System_Func_BattleFieldMotionComponent__T__o *)_9__17_1,
                                            (const MethodInfo_2FDCA04 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  if ( (byte_4BB79FA & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB79FA = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C13F80(this, method);
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
        sub_1C13F88(this, method);
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

  if ( (byte_4BB7A01 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, nowAction);
    byte_4BB7A01 = 1;
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
    v14 = (System_String_o *)sub_1C13D38(&StringLiteral_309/*" not found "*/);
    v15 = (System_String_o *)sub_1C13D38(&StringLiteral_277/*" in fieldFsm "*/);
    v16 = System_String__Concat_62979204(v14, v8, v15, 0LL);
    v17 = sub_1C13D38(&UnityEngine_UnityException_TypeInfo);
    v18 = (UnityEngine_UnityException_o *)sub_1C13F70(v17);
    UnityEngine_UnityException___ctor_70706448(v18, v16, 0LL);
    v19 = sub_1C13D38(&Method_FieldMotionManager_PlayBattleAction__);
    sub_1C13E4C(v18, v19);
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
    sub_1C13F88(MotionName, v6);
  MotionName = v13->m_Items[v10];
  if ( !MotionName )
LABEL_15:
    sub_1C13F80(MotionName, v6);
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
    sub_1C13F80(this, method);
  v10 = 1LL;
  v11 = 40LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    if ( v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      sub_1C13F88(this, method);
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v11) = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)((char *)fieldMotionArray + v11), 0LL, v2, v3, v4, v5, v6, v7);
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
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  unsigned int v9; // w9
  __int64 v10; // x23
  UnityEngine_Object_o *v11; // x22
  struct BattleFieldMotionComponent_array *v12; // x8
  struct BattleFieldMotionComponent_array *v14; // x8
  Il2CppObject *Fsm; // x0
  struct BattleFieldMotionComponent_array *v16; // x8

  v6 = this;
  if ( (byte_4BB7A02 & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionExtensions_Call_PlayMakerFSM___, str);
    this = (FieldMotionManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB7A02 = 1;
  }
  fieldMotionArray = v6->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_24;
  v9 = fieldMotionArray->max_length - 1;
  if ( (v9 & 0x80000000) != 0 )
    return 0;
  while ( 1 )
  {
    if ( v9 >= fieldMotionArray->max_length )
      goto LABEL_25;
    v10 = v9;
    v11 = (UnityEngine_Object_o *)fieldMotionArray->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = v6->fields.fieldMotionArray;
      if ( !v12 )
        goto LABEL_24;
      if ( (unsigned int)v10 >= v12->max_length )
        goto LABEL_25;
      this = (FieldMotionManager_o *)v12->m_Items[v10];
      if ( !this )
        goto LABEL_24;
      this = (FieldMotionManager_o *)BattleFieldMotionComponent__checkMotionEvent(
                                       (BattleFieldMotionComponent_o *)this,
                                       str,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    v9 = v10 - 1;
    if ( (int)v10 - 1 < 0 )
      return 0;
    fieldMotionArray = v6->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_24;
  }
  v14 = v6->fields.fieldMotionArray;
  if ( !v14 )
    goto LABEL_24;
  if ( (unsigned int)v10 >= v14->max_length )
    goto LABEL_25;
  this = (FieldMotionManager_o *)v14->m_Items[v10];
  if ( !this
    || (Fsm = (Il2CppObject *)BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)this, 0LL),
        ActionExtensions__Call_object_(
          (System_Action_T__o *)callbackBeforeSend,
          Fsm,
          (const MethodInfo_2EE1C78 *)Method_ActionExtensions_Call_PlayMakerFSM___),
        (v16 = v6->fields.fieldMotionArray) == 0LL) )
  {
LABEL_24:
    sub_1C13F80(this, str);
  }
  if ( (unsigned int)v10 >= v16->max_length )
LABEL_25:
    sub_1C13F88(this, str);
  this = (FieldMotionManager_o *)v16->m_Items[v10];
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
  if ( (byte_4BB7A03 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, str);
    byte_4BB7A03 = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_1C13F80(this, str);
  v6 = fieldMotionArray->max_length - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      if ( v6 >= fieldMotionArray->max_length )
LABEL_18:
        sub_1C13F88(this, str);
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

  if ( (byte_4BB7A04 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, nowAction);
    byte_4BB7A04 = 1;
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
          sub_1C13F88(MotionName, v8);
        MotionName = v15->m_Items[v12];
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion(MotionName, active, 0LL);
          return;
        }
      }
LABEL_17:
      sub_1C13F80(MotionName, v8);
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
  if ( (byte_4BB79F6 & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_1C13D24(&Method_System_Array_Empty_int___, motionIds);
    byte_4BB79F6 = 1;
    if ( klass )
    {
LABEL_3:
      if ( v10 )
        goto LABEL_4;
LABEL_15:
      sub_1C13F80(this, motionIds);
    }
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C65C5C(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C65C00(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  this = *(FieldMotionManager_o **)(v11[7] + 16LL);
  if ( (BYTE5(this[7].fields.retentionFieldMotionArray) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_1C65C00(inited);
  klass = (struct System_Int32_array *)this[4].fields.retentionFieldMotionArray->obj.klass;
  if ( !v10 )
    goto LABEL_15;
LABEL_4:
  v10->fields.baseMotionIds = klass;
  sub_1C13CC8(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FieldMotionManager___c_c *v9; // x0
  System_Func_object__object__o *_9__13_0; // x21
  Il2CppObject *v11; // x22
  struct FieldMotionManager___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *LastNotNullObject_object; // x20

  if ( (byte_4BB79FB & 1) == 0 )
  {
    sub_1C13D24(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, flg);
    sub_1C13D24(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&Method_FieldMotionManager___c__SetTacticBg_b__13_0__, v7);
    sub_1C13D24(&FieldMotionManager___c_TypeInfo, v8);
    byte_4BB79FB = 1;
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
    _9__13_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__13_0, v11, Method_FieldMotionManager___c__SetTacticBg_b__13_0__, 0LL);
    static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__13_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !this )
    goto LABEL_16;
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__13_0,
                               (const MethodInfo_2FDCA04 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
    sub_1C13F80(v9, flg);
  }
}


void __fastcall FieldMotionManager__SetVariables___Il2CppFullySharedGenericType_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
        const MethodInfo_2FDDA0C *method)
{
  long double v4; // q0
  unsigned __int64 StatusReg; // x21
  _QWORD *monitor; // x19
  __int64 v9; // x8
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
  __int64 v21; // x1
  __int64 v22; // x0
  __int16 v23; // w8
  __int64 v24; // x22
  __int64 v25; // x8
  int v26; // w9
  char *v27; // x24
  System_Collections_Generic_List_object__o *v28; // x26
  PlayMakerFSM_o *Fsm; // x0
  __int64 v30; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v32; // x25
  unsigned __int64 i; // x23
  UnityEngine_Object_o *v34; // x26
  __int64 v35; // x27
  System_Type_o *TypeFromHandle; // x27
  System_Type_o *v37; // x0
  __int64 v38; // x27
  PlayMakerFSM_o *v39; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **p_klass; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_String_c **v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  __int64 v52; // x27
  System_Type_o *v53; // x27
  System_Type_o *v54; // x0
  __int64 v55; // x27
  HutongGames_PlayMaker_FsmGameObject_o *v56; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  UnityEngine_GameObject_c **v61; // x0
  UnityEngine_GameObject_o *v62; // x1
  __int64 v63; // x27
  System_Type_o *v64; // x27
  System_Type_o *v65; // x0
  long double v66; // q0
  __int64 v67; // x9
  PlayMakerFSM_o *v68; // x26
  __int64 v69; // x8
  __int64 v70; // x0
  __int64 v71; // x27
  System_Type_o *v72; // x27
  System_Type_o *v73; // x0
  long double v74; // q0
  __int64 v75; // x9
  PlayMakerFSM_o *v76; // x26
  __int64 v77; // x8
  __int64 v78; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v79; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v80; // x3
  System_String_o *v81; // x27
  __int64 v82; // [xsp+0h] [xbp-40h] BYREF
  __int64 v83; // [xsp+8h] [xbp-38h]
  __int64 v84; // [xsp+10h] [xbp-30h]
  unsigned __int64 v85; // [xsp+18h] [xbp-28h]
  __int64 v86; // [xsp+20h] [xbp-20h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+28h] [xbp-18h] BYREF
  System_String_o *v88; // [xsp+30h] [xbp-10h]
  __int64 v89; // [xsp+38h] [xbp-8h]
  System_RuntimeTypeHandle_o v90; // 0:w0.4
  System_RuntimeTypeHandle_o v91; // 0:w0.4
  System_RuntimeTypeHandle_o v92; // 0:w0.4
  System_RuntimeTypeHandle_o v93; // 0:w0.4
  System_RuntimeTypeHandle_o v94; // 0:w0.4
  System_RuntimeTypeHandle_o v95; // 0:w0.4
  System_RuntimeTypeHandle_o v96; // 0:w0.4
  System_RuntimeTypeHandle_o v97; // 0:w0.4

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = value.monitor;
  v89 = *(_QWORD *)(StatusReg + 40);
  klass = value.klass;
  v9 = *((_QWORD *)value.monitor + 7);
  if ( !v9 )
  {
    sub_1C13D24(&bool_var, variableName);
    sub_1C13D24(&bool_TypeInfo, v10);
    sub_1C13D24(&UnityEngine_GameObject_var, v11);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v12);
    sub_1C13D24(&int_var, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v16);
    sub_1C13D24(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v17);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v18);
    sub_1C13D24(&string_var, v19);
    sub_1C13D24(&string_TypeInfo, v20);
    sub_1C13D24(&System_Type_TypeInfo, v21);
    v9 = monitor[7];
    if ( !v9 )
    {
      sub_1C65C5C();
      v9 = monitor[7];
    }
  }
  v22 = *(_QWORD *)(v9 + 8);
  v23 = *(_WORD *)(v22 + 309);
  v24 = *(unsigned int *)(v22 + 252);
  if ( (v23 & 1) != 0 )
  {
    v26 = *(_DWORD *)(v22 + 252);
  }
  else
  {
    v25 = sub_1C65C00(v4);
    v22 = *(_QWORD *)(monitor[7] + 8LL);
    v26 = *(_DWORD *)(v25 + 252);
    v23 = *(_WORD *)(v22 + 309);
  }
  v84 = (__int64)&v82 - (((unsigned int)(v26 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v85 = StatusReg;
  if ( (v23 & 1) == 0 )
    v22 = sub_1C65C00(v4);
  v83 = (__int64)&v82 - (((unsigned int)(*(_DWORD *)(v22 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  v27 = (char *)&v82 - ((v24 + 15) & 0x1FFFFFFF0LL);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v28
    || (v86 = v24,
        System_Collections_Generic_List_object___AddRange(
          v28,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v28,
                                   (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_85:
    sub_1C13F80(Fsm, v30);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v32 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C13F88(Fsm, v30);
      v34 = (UnityEngine_Object_o *)*((_QWORD *)&v32->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        v35 = *(_QWORD *)monitor[7];
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v90.fields.value = v35;
        TypeFromHandle = System_Type__GetTypeFromHandle(v90, 0LL);
        v91.fields.value = (int)string_var;
        v37 = System_Type__GetTypeFromHandle(v91, 0LL);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v37, 0LL);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v34 )
            goto LABEL_85;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v34, 0LL);
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
            v38 = monitor[7];
            v39 = Fsm;
            if ( *(int *)(*(_QWORD *)(v38 + 8) + 40LL) >= 0 )
              p_klass = &klass;
            else
              p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
            memcpy(v27, p_klass, v86);
            v44 = (System_String_c **)j_il2cpp_value_box_0(*(_QWORD *)(v38 + 8), v27, v41, v42, v43);
            if ( v44 )
            {
              if ( *v44 == string_TypeInfo )
                v51 = (int64_t)v44;
              else
                v51 = 0LL;
            }
            else
            {
              v51 = 0LL;
            }
            v39->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v51;
            sub_1C13CC8((PartyOrganizationUtility_o *)&v39->fields.addEventHandlers, v51, v45, v46, v47, v48, v49, v50);
          }
        }
        else
        {
          v52 = *(_QWORD *)monitor[7];
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v92.fields.value = v52;
          v53 = System_Type__GetTypeFromHandle(v92, 0LL);
          v93.fields.value = (int)UnityEngine_GameObject_var;
          v54 = System_Type__GetTypeFromHandle(v93, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v53, v54, 0LL);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v34 )
              goto LABEL_85;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v34, 0LL);
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
              v55 = monitor[7];
              v56 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              if ( *(int *)(*(_QWORD *)(v55 + 8) + 40LL) >= 0 )
                v57 = &klass;
              else
                v57 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
              memcpy(v27, v57, v86);
              v61 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(*(_QWORD *)(v55 + 8), v27, v58, v59, v60);
              if ( v61 )
              {
                if ( *v61 == UnityEngine_GameObject_TypeInfo )
                  v62 = (UnityEngine_GameObject_o *)v61;
                else
                  v62 = 0LL;
              }
              else
              {
                v62 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v56, v62, 0LL);
            }
          }
          else
          {
            v63 = *(_QWORD *)monitor[7];
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v94.fields.value = v63;
            v64 = System_Type__GetTypeFromHandle(v94, 0LL);
            v95.fields.value = (int)int_var;
            v65 = System_Type__GetTypeFromHandle(v95, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v64, v65, 0LL);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v34 )
                goto LABEL_85;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v34, 0LL);
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
                v67 = monitor[7];
                v68 = Fsm;
                v69 = *(_QWORD *)(v67 + 8);
                if ( (*(_BYTE *)(v69 + 309) & 1) != 0 )
                {
                  v70 = *(_QWORD *)(v67 + 8);
                }
                else
                {
                  LODWORD(v70) = sub_1C65C00(v66);
                  v67 = monitor[7];
                  v69 = *(_QWORD *)(v67 + 8);
                }
                if ( *(int *)(v69 + 40) >= 0 )
                  v79 = &klass;
                else
                  v79 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                sub_1C1478C(v70, *(_QWORD *)(v67 + 16), v84, v79);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v88, 0LL);
                LODWORD(v68->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v71 = *(_QWORD *)monitor[7];
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v96.fields.value = v71;
              v72 = System_Type__GetTypeFromHandle(v96, 0LL);
              v97.fields.value = (int)bool_var;
              v73 = System_Type__GetTypeFromHandle(v97, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v72, v73, 0LL);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v34 )
                  goto LABEL_85;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v34, 0LL);
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
                  v75 = monitor[7];
                  v76 = Fsm;
                  v77 = *(_QWORD *)(v75 + 8);
                  if ( (*(_BYTE *)(v77 + 309) & 1) != 0 )
                  {
                    v78 = *(_QWORD *)(v75 + 8);
                  }
                  else
                  {
                    LODWORD(v78) = sub_1C65C00(v74);
                    v75 = monitor[7];
                    v77 = *(_QWORD *)(v75 + 8);
                  }
                  if ( *(int *)(v77 + 40) >= 0 )
                    v80 = &klass;
                  else
                    v80 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                  sub_1C1478C(v78, *(_QWORD *)(v75 + 16), v83, v80);
                  v81 = v88;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v81, 0LL);
                  LOBYTE(v76->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v32->fields.m_CancellationTokenSource;
    }
  }
}


void __fastcall FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_2FDCB24 *method)
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
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  PlayMakerFSM_o *v32; // x22
  System_String_c **v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  Il2CppType *v41; // x23
  System_Type_o *v42; // x23
  System_Type_o *v43; // x0
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  HutongGames_PlayMaker_FsmGameObject_o *v47; // x22
  UnityEngine_GameObject_c **v48; // x0
  UnityEngine_GameObject_o *v49; // x1
  Il2CppType *v50; // x23
  System_Type_o *v51; // x23
  System_Type_o *v52; // x0
  PlayMakerFSM_o *v53; // x22
  System_String_o *v54; // x0
  Il2CppType *v55; // x23
  System_Type_o *v56; // x23
  System_Type_o *v57; // x0
  PlayMakerFSM_o *v58; // x22
  System_String_o *v59; // x0
  char v60[4]; // [xsp+4h] [xbp-6Ch] BYREF
  char v61[4]; // [xsp+8h] [xbp-68h] BYREF
  char v62[4]; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v63; // 0:w0.4
  System_RuntimeTypeHandle_o v64; // 0:w0.4
  System_RuntimeTypeHandle_o v65; // 0:w0.4
  System_RuntimeTypeHandle_o v66; // 0:w0.4
  System_RuntimeTypeHandle_o v67; // 0:w0.4
  System_RuntimeTypeHandle_o v68; // 0:w0.4
  System_RuntimeTypeHandle_o v69; // 0:w0.4
  System_RuntimeTypeHandle_o v70; // 0:w0.4

  v62[0] = value;
  if ( !method->rgctx_data )
  {
    sub_1C13D24(&bool_var, variableName);
    sub_1C13D24(&bool_TypeInfo, v7);
    sub_1C13D24(&UnityEngine_GameObject_var, v8);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v9);
    sub_1C13D24(&int_var, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v14);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v15);
    sub_1C13D24(&string_var, v16);
    sub_1C13D24(&string_TypeInfo, v17);
    sub_1C13D24(&System_Type_TypeInfo, v18);
    if ( !method->rgctx_data )
      sub_1C65C5C();
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v19
    || (System_Collections_Generic_List_object___AddRange(
          v19,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v19,
                                   (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1C13F80(Fsm, v21);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v23 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C13F88(Fsm, v21);
      v25 = (UnityEngine_Object_o *)*((_QWORD *)&v23->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v63.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v63, 0LL);
        v64.fields.value = (int)string_var;
        v28 = System_Type__GetTypeFromHandle(v64, 0LL);
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
            v32 = Fsm;
            v61[0] = v62[0];
            v33 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v61, v29, v30, v31);
            if ( v33 )
            {
              if ( *v33 == string_TypeInfo )
                v40 = (int64_t)v33;
              else
                v40 = 0LL;
            }
            else
            {
              v40 = 0LL;
            }
            v32->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v40;
            sub_1C13CC8((PartyOrganizationUtility_o *)&v32->fields.addEventHandlers, v40, v34, v35, v36, v37, v38, v39);
          }
        }
        else
        {
          v41 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v65.fields.value = (int)v41;
          v42 = System_Type__GetTypeFromHandle(v65, 0LL);
          v66.fields.value = (int)UnityEngine_GameObject_var;
          v43 = System_Type__GetTypeFromHandle(v66, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v42, v43, 0LL);
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
              v47 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v60[0] = v62[0];
              v48 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, v60, v44, v45, v46);
              if ( v48 )
              {
                if ( *v48 == UnityEngine_GameObject_TypeInfo )
                  v49 = (UnityEngine_GameObject_o *)v48;
                else
                  v49 = 0LL;
              }
              else
              {
                v49 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v47, v49, 0LL);
            }
          }
          else
          {
            v50 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v67.fields.value = (int)v50;
            v51 = System_Type__GetTypeFromHandle(v67, 0LL);
            v68.fields.value = (int)int_var;
            v52 = System_Type__GetTypeFromHandle(v68, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v51, v52, 0LL);
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
                v53 = Fsm;
                if ( !bool_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                v54 = System_Boolean__ToString((bool)v62, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v54, 0LL);
                LODWORD(v53->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v55 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v69.fields.value = (int)v55;
              v56 = System_Type__GetTypeFromHandle(v69, 0LL);
              v70.fields.value = (int)bool_var;
              v57 = System_Type__GetTypeFromHandle(v70, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v56, v57, 0LL);
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
                  v58 = Fsm;
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  v59 = System_Boolean__ToString((bool)v62, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v59, 0LL);
                  LOBYTE(v58->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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


void __fastcall FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_2FDD03C *method)
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
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  PlayMakerFSM_o *v32; // x22
  System_String_c **v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  Il2CppType *v41; // x23
  System_Type_o *v42; // x23
  System_Type_o *v43; // x0
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  HutongGames_PlayMaker_FsmGameObject_o *v47; // x22
  UnityEngine_GameObject_c **v48; // x0
  UnityEngine_GameObject_o *v49; // x1
  Il2CppType *v50; // x23
  System_Type_o *v51; // x23
  System_Type_o *v52; // x0
  PlayMakerFSM_o *v53; // x22
  System_String_o *v54; // x0
  Il2CppType *v55; // x23
  System_Type_o *v56; // x23
  System_Type_o *v57; // x0
  PlayMakerFSM_o *v58; // x22
  System_String_o *v59; // x23
  int32_t v60; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v61; // [xsp+8h] [xbp-68h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeTypeHandle_o v63; // 0:w0.4
  System_RuntimeTypeHandle_o v64; // 0:w0.4
  System_RuntimeTypeHandle_o v65; // 0:w0.4
  System_RuntimeTypeHandle_o v66; // 0:w0.4
  System_RuntimeTypeHandle_o v67; // 0:w0.4
  System_RuntimeTypeHandle_o v68; // 0:w0.4
  System_RuntimeTypeHandle_o v69; // 0:w0.4
  System_RuntimeTypeHandle_o v70; // 0:w0.4

  v62 = value;
  if ( !method->rgctx_data )
  {
    sub_1C13D24(&bool_var, variableName);
    sub_1C13D24(&bool_TypeInfo, v7);
    sub_1C13D24(&UnityEngine_GameObject_var, v8);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v9);
    sub_1C13D24(&int_var, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v14);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v15);
    sub_1C13D24(&string_var, v16);
    sub_1C13D24(&string_TypeInfo, v17);
    sub_1C13D24(&System_Type_TypeInfo, v18);
    if ( !method->rgctx_data )
      sub_1C65C5C();
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v19
    || (System_Collections_Generic_List_object___AddRange(
          v19,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v19,
                                   (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_62:
    sub_1C13F80(Fsm, v21);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v23 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C13F88(Fsm, v21);
      v25 = (UnityEngine_Object_o *)*((_QWORD *)&v23->fields.fsm + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v63.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v63, 0LL);
        v64.fields.value = (int)string_var;
        v28 = System_Type__GetTypeFromHandle(v64, 0LL);
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
            v32 = Fsm;
            v61 = v62;
            v33 = (System_String_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v61, v29, v30, v31);
            if ( v33 )
            {
              if ( *v33 == string_TypeInfo )
                v40 = (int64_t)v33;
              else
                v40 = 0LL;
            }
            else
            {
              v40 = 0LL;
            }
            v32->fields.addEventHandlers = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)v40;
            sub_1C13CC8((PartyOrganizationUtility_o *)&v32->fields.addEventHandlers, v40, v34, v35, v36, v37, v38, v39);
          }
        }
        else
        {
          v41 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v65.fields.value = (int)v41;
          v42 = System_Type__GetTypeFromHandle(v65, 0LL);
          v66.fields.value = (int)UnityEngine_GameObject_var;
          v43 = System_Type__GetTypeFromHandle(v66, 0LL);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v42, v43, 0LL);
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
              v47 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v60 = v62;
              v48 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(method->rgctx_data->_1_T, &v60, v44, v45, v46);
              if ( v48 )
              {
                if ( *v48 == UnityEngine_GameObject_TypeInfo )
                  v49 = (UnityEngine_GameObject_o *)v48;
                else
                  v49 = 0LL;
              }
              else
              {
                v49 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v47, v49, 0LL);
            }
          }
          else
          {
            v50 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v67.fields.value = (int)v50;
            v51 = System_Type__GetTypeFromHandle(v67, 0LL);
            v68.fields.value = (int)int_var;
            v52 = System_Type__GetTypeFromHandle(v68, 0LL);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v51, v52, 0LL);
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
                v53 = Fsm;
                v54 = System_Int32__ToString((int32_t)&v62, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v54, 0LL);
                LODWORD(v53->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v55 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v69.fields.value = (int)v55;
              v56 = System_Type__GetTypeFromHandle(v69, 0LL);
              v70.fields.value = (int)bool_var;
              v57 = System_Type__GetTypeFromHandle(v70, 0LL);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v56, v57, 0LL);
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
                  v58 = Fsm;
                  v59 = System_Int32__ToString((int32_t)&v62, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v59, 0LL);
                  LOBYTE(v58->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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
        const MethodInfo_2FDD544 *method)
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *v36; // x1
  Il2CppType *v37; // x24
  System_Type_o *v38; // x24
  System_Type_o *v39; // x0
  Il2CppObject *v40; // x1
  Il2CppType *v41; // x24
  System_Type_o *v42; // x24
  System_Type_o *v43; // x0
  _DWORD *v44; // x23
  System_String_o *v45; // x0
  Il2CppType *v46; // x24
  System_Type_o *v47; // x24
  System_Type_o *v48; // x0
  _BYTE *v49; // x23
  System_String_o *v50; // x24
  System_RuntimeTypeHandle_o v51; // 0:w0.4
  System_RuntimeTypeHandle_o v52; // 0:w0.4
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4
  System_RuntimeTypeHandle_o v55; // 0:w0.4
  System_RuntimeTypeHandle_o v56; // 0:w0.4
  System_RuntimeTypeHandle_o v57; // 0:w0.4
  System_RuntimeTypeHandle_o v58; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1C13D24(&bool_var, variableName);
    sub_1C13D24(&bool_TypeInfo, v8);
    sub_1C13D24(&UnityEngine_GameObject_var, v9);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v10);
    sub_1C13D24(&int_var, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v14);
    sub_1C13D24(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v15);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v16);
    sub_1C13D24(&string_var, v17);
    sub_1C13D24(&string_TypeInfo, v18);
    sub_1C13D24(&System_Type_TypeInfo, v19);
    if ( !method->rgctx_data )
      sub_1C65C5C();
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v20
    || (System_Collections_Generic_List_object___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = System_Collections_Generic_List_object___ToArray(
                 v20,
                 (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_64:
    sub_1C13F80(Fsm, v22);
  }
  v23 = *((_QWORD *)Fsm + 3);
  v24 = Fsm;
  if ( (int)v23 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v23; ++i )
    {
      if ( i >= (unsigned int)v23 )
        sub_1C13F88(Fsm, v22);
      v26 = (UnityEngine_Object_o *)v24[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = (void *)UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v51.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v51, 0LL);
        v52.fields.value = (int)string_var;
        v29 = System_Type__GetTypeFromHandle(v52, 0LL);
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
                v36 = value;
              else
                v36 = 0LL;
            }
            else
            {
              v36 = 0LL;
            }
            *((_QWORD *)Fsm + 7) = v36;
            sub_1C13CC8((PartyOrganizationUtility_o *)((char *)Fsm + 56), (int64_t)v36, v30, v31, v32, v33, v34, v35);
          }
        }
        else
        {
          v37 = method->rgctx_data->_0_T;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v53.fields.value = (int)v37;
          v38 = System_Type__GetTypeFromHandle(v53, 0LL);
          v54.fields.value = (int)UnityEngine_GameObject_var;
          v39 = System_Type__GetTypeFromHandle(v54, 0LL);
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
            Fsm = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                    variableName,
                    0LL);
            if ( Fsm )
            {
              if ( value )
              {
                if ( (UnityEngine_GameObject_c *)value->klass == UnityEngine_GameObject_TypeInfo )
                  v40 = value;
                else
                  v40 = 0LL;
              }
              else
              {
                v40 = 0LL;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                (UnityEngine_GameObject_o *)v40,
                0LL);
            }
          }
          else
          {
            v41 = method->rgctx_data->_0_T;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v55.fields.value = (int)v41;
            v42 = System_Type__GetTypeFromHandle(v55, 0LL);
            v56.fields.value = (int)int_var;
            v43 = System_Type__GetTypeFromHandle(v56, 0LL);
            Fsm = (void *)System_Type__op_Equality(v42, v43, 0LL);
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
                v44 = Fsm;
                v45 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                           value,
                                           value->klass->vtable[4].methodPtr);
                Fsm = (void *)System_Int32__Parse(v45, 0LL);
                v44[14] = (_DWORD)Fsm;
              }
            }
            else
            {
              v46 = method->rgctx_data->_0_T;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v57.fields.value = (int)v46;
              v47 = System_Type__GetTypeFromHandle(v57, 0LL);
              v58.fields.value = (int)bool_var;
              v48 = System_Type__GetTypeFromHandle(v58, 0LL);
              Fsm = (void *)System_Type__op_Equality(v47, v48, 0LL);
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
                  v49 = Fsm;
                  v50 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                             value,
                                             value->klass->vtable[4].methodPtr);
                  if ( !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  Fsm = (void *)System_Boolean__Parse(v50, 0LL);
                  v49[56] = (unsigned __int8)Fsm & 1;
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
  System_Func_T__TResult__o *v19; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v23; // x19
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // x1
  __int64 v28; // x19
  unsigned __int64 i; // x28
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x21
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  int64_t v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x0
  __int64 v47; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x29
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x22
  System_Func_object__bool__o *v50; // x23
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x21
  Il2CppClass **v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x0

  if ( (byte_4BB79F8 & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleDataDefine_FieldMotionPath__, stageEnt);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_int__string___, v8);
    sub_1C13D24(&System_Func_int__string__TypeInfo, v9);
    sub_1C13D24(&System_Func_BattleFieldMotionComponent__bool__TypeInfo, v10);
    sub_1C13D24(&System_IDisposable_TypeInfo, v11);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_string__TypeInfo, v12);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_string__TypeInfo, v13);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C13D24(&Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__, v15);
    sub_1C13D24(&FieldMotionManager___c__DisplayClass8_0_TypeInfo, v16);
    byte_4BB79F8 = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v17);
  v19 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v19, 0LL, Method_BattleDataDefine_FieldMotionPath__, 0LL);
  v20 = System_Linq_Enumerable__Select_int__object_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v19,
          (const MethodInfo_2FBE434 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v20 )
    sub_1C13F80(0LL, v21);
  klass = v20->klass;
  v23 = v20;
  v24 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C65D04(v20, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v23,
          *(_QWORD *)(p_method + 8));
  if ( !v28 )
    sub_1C13F80(0LL, v27);
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
      v33 = sub_1C65D04(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v28, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = sub_1C13F70(FieldMotionManager___c__DisplayClass8_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v34, 0LL);
    v35 = *(_QWORD *)v28;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v37 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_23;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_23:
      v38 = sub_1C65D04(v28, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v28, *(_QWORD *)(v38 + 8));
    if ( !v34 )
      sub_1C13F80(v39, v39);
    *(_QWORD *)(v34 + 16) = v39;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v34 + 16), v39, v40, v41, v42, v43, v44, v45);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_1C13F80(v46, v47);
    if ( (__int64)i >= (int)fieldMotionArray->max_length )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v50 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v50,
      (Il2CppObject *)v34,
      Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__,
      0LL);
    v51 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v50,
            (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v59 = (int64_t)v51;
    if ( v51 )
    {
      v51 = (Il2CppObject *)sub_1C13E60(v51, fieldMotionArray->obj.klass->_1.element_class);
      if ( !v51 )
      {
        v65 = sub_1C13FA4(0LL);
        sub_1C13E4C(v65, 0LL);
      }
    }
    if ( i >= fieldMotionArray->max_length )
      sub_1C13F88(v51, v52);
    v60 = &fieldMotionArray->obj.klass + i;
    v60[4] = (Il2CppClass *)v59;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v60 + 4), v59, v53, v54, v55, v56, v57, v58);
  }
  v61 = *(_QWORD *)v28;
  v62 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_36;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_36:
    v64 = sub_1C65D04(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v64)(v28, *(_QWORD *)(v64 + 8));
}


void __fastcall FieldMotionManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB7A05 & 1) == 0 )
  {
    sub_1C13D24(&FieldMotionManager___c_TypeInfo, v1);
    byte_4BB7A05 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(FieldMotionManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FieldMotionManager___c_TypeInfo->static_fields->__9 = (struct FieldMotionManager___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)FieldMotionManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetPlayerStage_b__14_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C13F80(this, 0LL);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C13F80(this, 0LL);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C13F80(this, 0LL);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___SetTacticBg_b__13_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C13F80(this, 0LL);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C13F80(this, 0LL);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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

  if ( (byte_4BB7A06 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, x);
    byte_4BB7A06 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_1C13F80(v5, v6);
  return BasicHelper__EqualExceptNullOrEmpty(x->fields._AssetName_k__BackingField, this->fields.targetName, 0LL);
}