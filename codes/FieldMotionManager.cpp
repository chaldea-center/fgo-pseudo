void FieldMotionManager___ctor(
        FieldMotionManager_o *this,
        BattleFieldMotionComponent_array *fieldMotions,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  struct System_Int32_array **v16; // x8
  struct System_Int32_array *v17; // x1
  FieldMotionManager_Fields *p_fields; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  BattleFieldMotionComponent_o *v25; // x0
  __int64 v26; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v28; // x26
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v30; // x27
  UnityEngine_Object_o *v31; // x23
  struct BattleFieldMotionComponent_array *v32; // x8
  System_Object_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_59742F8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742F8 = 1;
  }
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v8);
  if ( !*(_DWORD *)(v14 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v14, fieldMotions);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908(v8);
  v16 = *(struct System_Int32_array ***)(v15 + 184);
  v17 = *v16;
  this->fields.baseMotionIds = *v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseMotionIds,
    (int32_t)v17,
    (System_String_o *)perf,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)fieldMotions, v19, v20, v21, v22, v23, v24);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_23:
    sub_2213CDC(v25, v26);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    v25 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v31, 0, 0);
    if ( ((unsigned __int8)v25 & 1) != 0 )
    {
      v32 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_23;
      if ( v30 >= LODWORD(v32->max_length) )
LABEL_25:
        sub_2213CE4(v25);
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
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = (struct BattleFieldMotionComponent_array *)v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.retentionFieldMotionArray,
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
        const MethodInfo_38B3690 *method)
{
  FieldMotionManager_o *v4; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v7; // x8
  __int64 i; // x23
  struct BattleFieldMotionComponent_array *v9; // x8
  __int64 v10; // x24
  UnityEngine_Object_o *v11; // x21
  struct BattleFieldMotionComponent_array *v12; // x8
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x21

  v4 = this;
  if ( !method->rgctx_data )
  {
    this = (FieldMotionManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (FieldMotionManager_o *)sub_224B964();
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_21;
  v7 = (unsigned int)(LODWORD(fieldMotionArray->max_length) - 1);
  if ( (int)v7 >= 0 )
  {
    for ( i = v7 + 4; ; --i )
    {
      v9 = v4->fields.fieldMotionArray;
      if ( !v9 )
        break;
      v10 = i - 4;
      if ( i - 4 >= (unsigned __int64)LODWORD(v9->max_length) )
        goto LABEL_22;
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&v9->obj.klass + i);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, getObjectFunc);
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v4->fields.fieldMotionArray;
        if ( !v12 )
          break;
        if ( v10 >= (unsigned __int64)LODWORD(v12->max_length) )
LABEL_22:
          sub_2213CE4(this);
        if ( !getObjectFunc )
          break;
        v14 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))getObjectFunc->fields.invoke_impl)(
                                        getObjectFunc->fields.method_code,
                                        *((_QWORD *)&v12->obj.klass + i),
                                        getObjectFunc->fields.method);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return (Il2CppObject *)v14;
      }
      if ( v10 <= 0 )
        return 0;
    }
LABEL_21:
    sub_2213CDC(this, getObjectFunc);
  }
  return 0;
}


System_Int32_array *FieldMotionManager__GetEnableFieldMotionIds(
        FieldMotionManager_o *this,
        StageEntity_o *stageEnt,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 OverwriteMotionIds_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  __int64 v10; // x1
  long double v11; // q0
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x21
  System_Collections_Generic_List_int__o *v17; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CurWaveEnemyDeckMotionIds; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 i; // x20
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // [xsp+18h] [xbp-48h]

  if ( (byte_59742FA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_59742FA = 1;
  }
  OverwriteMotionIds_k__BackingField = (__int64)this->fields._OverwriteMotionIds_k__BackingField;
  if ( OverwriteMotionIds_k__BackingField )
    goto LABEL_4;
  if ( !stageEnt )
    goto LABEL_63;
  if ( !StageEntity__IsDisableFieldMotion(stageEnt, 0) )
  {
    OverwriteMotionIds_k__BackingField = (__int64)StageEntity__GetWaveFieldMotionIds(stageEnt, 0, 0);
    if ( OverwriteMotionIds_k__BackingField )
    {
LABEL_4:
      v8 = System_Linq_Enumerable__Reverse_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteMotionIds_k__BackingField,
             (const MethodInfo_3889D44 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v8,
               (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseMotionIds,
                                                           (const MethodInfo_3889D44 *)Method_System_Linq_Enumerable_Reverse_int___);
    v17 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71723804(
      v17,
      v16,
      (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0);
      OverwriteMotionIds_k__BackingField = (__int64)System_Linq_Enumerable__Reverse_int_(
                                                      CurWaveEnemyDeckMotionIds,
                                                      (const MethodInfo_3889D44 *)Method_System_Linq_Enumerable_Reverse_int___);
      if ( OverwriteMotionIds_k__BackingField )
      {
        v19 = *(_QWORD *)OverwriteMotionIds_k__BackingField;
        v20 = OverwriteMotionIds_k__BackingField;
        v21 = *(unsigned __int16 *)(*(_QWORD *)OverwriteMotionIds_k__BackingField + 302LL);
        if ( *(_WORD *)(*(_QWORD *)OverwriteMotionIds_k__BackingField + 302LL) )
        {
          v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_int__c **)v22 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
          {
            --v21;
            v22 += 4;
            if ( !v21 )
              goto LABEL_23;
          }
          v23 = v19 + 16LL * *v22 + 312;
        }
        else
        {
LABEL_23:
          v23 = sub_224BC3C(OverwriteMotionIds_k__BackingField, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
        v47 = v24;
        if ( !v24 )
          sub_2213CDC(v24, v25);
        for ( i = v24; ; i = v47 )
        {
          v27 = *(_QWORD *)i;
          v28 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
          if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
          {
            v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v28;
              v29 += 4;
              if ( !v28 )
                goto LABEL_31;
            }
            v30 = v27 + 16LL * *v29 + 312;
          }
          else
          {
LABEL_31:
            v30 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
          }
          OverwriteMotionIds_k__BackingField = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(i, *(_QWORD *)(v30 + 8));
          if ( (OverwriteMotionIds_k__BackingField & 1) == 0 )
            break;
          if ( !v47 )
            sub_2213CDC(OverwriteMotionIds_k__BackingField, stageEnt);
          v31 = *(_QWORD *)v47;
          v32 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
          {
            v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_int__c **)v33 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
            {
              --v32;
              v33 += 4;
              if ( !v32 )
                goto LABEL_39;
            }
            v34 = v31 + 16LL * *v33 + 312;
          }
          else
          {
LABEL_39:
            v34 = sub_224BC3C(v47, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
          }
          v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v47, *(_QWORD *)(v34 + 8));
          if ( !v17 )
            sub_2213CDC(v35, v36);
          v37 = v35;
          v38 = System_Collections_Generic_List_int___Contains(
                  v17,
                  v35,
                  (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v38 )
            v38 = System_Collections_Generic_List_int___Remove(
                    v17,
                    v37,
                    (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
          items = v17->fields._items;
          v41 = Method_System_Collections_Generic_List_int__Add__;
          ++v17->fields._version;
          if ( !items )
            sub_2213CDC(v38, v39);
          size = v17->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v17,
              v37,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = size + 1;
            items->m_Items[size] = v37;
          }
        }
        if ( v47 )
        {
          v43 = *(_QWORD *)v47;
          v44 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
          {
            v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
            {
              --v44;
              v45 += 4;
              if ( !v44 )
                goto LABEL_55;
            }
            v46 = v43 + 16LL * *v45 + 312;
          }
          else
          {
LABEL_55:
            v46 = sub_224BC3C(v47, System_IDisposable_TypeInfo, 0);
          }
          OverwriteMotionIds_k__BackingField = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(
                                                 v47,
                                                 *(_QWORD *)(v46 + 8));
        }
        if ( v17 )
          return System_Collections_Generic_List_int___ToArray(
                   v17,
                   (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_63:
    sub_2213CDC(OverwriteMotionIds_k__BackingField, stageEnt);
  }
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v11);
  if ( !*(_DWORD *)(v14 + 228) )
    *(__n128 *)&v11 = j_il2cpp_runtime_class_init_0(v14, v10);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908(v11);
  return **(System_Int32_array ***)(v15 + 184);
}


UnityEngine_GameObject_o *FieldMotionManager__GetEnemyStage(FieldMotionManager_o *this, const MethodInfo *method)
{
  FieldMotionManager___c_c *v3; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__21_0; // x20
  Il2CppObject *v6; // x21
  struct FieldMotionManager___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_59742FF & 1) == 0 )
  {
    sub_2213A60(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_2213A60(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_FieldMotionManager___c__GetEnemyStage_b__21_0__);
    sub_2213A60(&FieldMotionManager___c_TypeInfo);
    byte_59742FF = 1;
  }
  v3 = FieldMotionManager___c_TypeInfo;
  if ( !*(&FieldMotionManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, method);
    v3 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__21_0 = (System_Func_object__object__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__21_0, v6, Method_FieldMotionManager___c__GetEnemyStage_b__21_0__, 0);
    v7 = FieldMotionManager___c_TypeInfo->static_fields;
    v7->__9__21_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__21_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__21_0, (int32_t)_9__21_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !this )
    sub_2213CDC(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__21_0,
                               (const MethodInfo_38B3690 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
  int max_length; // w8
  unsigned __int64 v9; // x23
  struct BattleFieldMotionComponent_array *v10; // x8
  UnityEngine_Object_o *v11; // x22

  v6 = this;
  if ( (byte_59742FC & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742FC = 1;
  }
  fieldMotionArray = v6->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_19:
    sub_2213CDC(this, variableName);
  max_length = fieldMotionArray->max_length;
  v9 = (unsigned int)(max_length - 1);
  if ( max_length - 1 < 0 )
    return defaultValue;
  while ( 1 )
  {
    v10 = v6->fields.fieldMotionArray;
    if ( !v10 )
      goto LABEL_19;
    if ( v9 >= LODWORD(v10->max_length) )
      sub_2213CE4(this);
    v11 = (UnityEngine_Object_o *)v10->m_Items[v9];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, variableName);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Equality(v11, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v11 )
        goto LABEL_19;
      this = (FieldMotionManager_o *)BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v11, 0);
      if ( !this )
        goto LABEL_19;
      this = (FieldMotionManager_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( !this )
        goto LABEL_19;
      this = (FieldMotionManager_o *)*((_QWORD *)this + 11);
      if ( !this )
        goto LABEL_19;
      this = (FieldMotionManager_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       variableName,
                                       0);
      if ( this )
        return HutongGames_PlayMaker_FsmBool__get_Value((HutongGames_PlayMaker_FsmBool_o *)this, 0);
    }
    if ( (__int64)v9-- <= 0 )
      return defaultValue;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Func_object__object__o *v14; // x20
  __int64 v15; // x1
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_5974300 & 1) == 0 )
  {
    sub_2213A60(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_2213A60(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_FieldMotionManager___c__DisplayClass22_0__GetGameObject_b__0__);
    sub_2213A60(&FieldMotionManager___c__DisplayClass22_0_TypeInfo);
    byte_5974300 = 1;
  }
  v5 = sub_2213CCC(FieldMotionManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)name, v8, v9, v10, v11, v12, v13);
  v14 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
  System_Func_object__object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_FieldMotionManager___c__DisplayClass22_0__GetGameObject_b__0__,
    0);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v14,
                               (const MethodInfo_38B3690 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_object, 0, 0) )
    return (UnityEngine_GameObject_o *)LastNotNullObject_object;
  else
    return 0;
}


UnityEngine_GameObject_o *FieldMotionManager__GetPlayerStage(FieldMotionManager_o *this, const MethodInfo *method)
{
  FieldMotionManager___c_c *v3; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__20_0; // x20
  Il2CppObject *v6; // x21
  struct FieldMotionManager___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_59742FE & 1) == 0 )
  {
    sub_2213A60(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_2213A60(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_FieldMotionManager___c__GetPlayerStage_b__20_0__);
    sub_2213A60(&FieldMotionManager___c_TypeInfo);
    byte_59742FE = 1;
  }
  v3 = FieldMotionManager___c_TypeInfo;
  if ( !*(&FieldMotionManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, method);
    v3 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__20_0 = (System_Func_object__object__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__20_0, v6, Method_FieldMotionManager___c__GetPlayerStage_b__20_0__, 0);
    v7 = FieldMotionManager___c_TypeInfo->static_fields;
    v7->__9__20_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__20_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__20_0, (int32_t)_9__20_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !this )
    sub_2213CDC(v3, method);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__20_0,
                               (const MethodInfo_38B3690 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
  __int64 v11; // x1
  Il2CppObject *LastNotNullObject_object; // x19

  if ( (byte_5974302 & 1) == 0 )
  {
    sub_2213A60(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_2213A60(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_FieldMotionManager___c__DisplayClass24_0__GetTargetTransform_b__0__);
    sub_2213A60(&FieldMotionManager___c__DisplayClass24_0_TypeInfo);
    byte_5974302 = 1;
  }
  v7 = sub_2213CCC(FieldMotionManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_DWORD *)(v7 + 16) = type;
  *(_DWORD *)(v7 + 20) = index;
  v10 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
  System_Func_object__object____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_FieldMotionManager___c__DisplayClass24_0__GetTargetTransform_b__0__,
    0);
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)v10,
                               (const MethodInfo_38B3690 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
  __int64 v7; // x21
  FieldMotionManager___c_c *v8; // x0
  __int64 v9; // x1
  System_Func_object__object__o *v10; // x0
  intptr_t *v11; // x8
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__23_3; // x20
  Il2CppObject *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  struct FieldMotionManager___c_StaticFields *v22; // x0
  MissionNaviTransitionBoardItem_o *p__9__23_3; // x0
  struct FieldMotionManager___c_StaticFields *v25; // x8
  Il2CppObject *v26; // x21
  struct FieldMotionManager___c_StaticFields *v27; // x0

  if ( (byte_5974301 & 1) == 0 )
  {
    sub_2213A60(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_2213A60(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_2213A60(&Method_FieldMotionManager___c__GetTransform_b__23_1__);
    sub_2213A60(&Method_FieldMotionManager___c__GetTransform_b__23_3__);
    sub_2213A60(&Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__0__);
    sub_2213A60(&Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__2__);
    sub_2213A60(&Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__4__);
    sub_2213A60(&Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__5__);
    sub_2213A60(&FieldMotionManager___c__DisplayClass23_0_TypeInfo);
    sub_2213A60(&FieldMotionManager___c_TypeInfo);
    byte_5974301 = 1;
  }
  v7 = sub_2213CCC(FieldMotionManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
LABEL_29:
    sub_2213CDC(v8, v9);
  *(_DWORD *)(v7 + 16) = index;
  if ( type > 2 )
  {
    if ( type != 3 )
    {
      if ( type == 4 )
      {
        v10 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
        v11 = &Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__4__;
        goto LABEL_31;
      }
      if ( type == 5 )
      {
        v10 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
        v11 = &Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__5__;
        goto LABEL_31;
      }
      return 0;
    }
    v8 = FieldMotionManager___c_TypeInfo;
    if ( !*(&FieldMotionManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, v9);
      v8 = FieldMotionManager___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__23_3 = (System_Func_object__object__o *)static_fields->__9__23_3;
    if ( !_9__23_3 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v9);
        static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__23_3 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__23_3, v14, Method_FieldMotionManager___c__GetTransform_b__23_3__, 0);
      v21 = (int)_9__23_3;
      v22 = FieldMotionManager___c_TypeInfo->static_fields;
      v22->__9__23_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__23_3;
      p__9__23_3 = (MissionNaviTransitionBoardItem_o *)&v22->__9__23_3;
      goto LABEL_27;
    }
  }
  else
  {
    if ( !type )
    {
      v10 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__0__;
      goto LABEL_31;
    }
    if ( type != 1 )
    {
      if ( type == 2 )
      {
        v10 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
        v11 = &Method_FieldMotionManager___c__DisplayClass23_0__GetTransform_b__2__;
LABEL_31:
        _9__23_3 = v10;
        System_Func_object__object____ctor(v10, (Il2CppObject *)v7, *v11, 0);
        return (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                            this,
                                            (System_Func_BattleFieldMotionComponent__T__o *)_9__23_3,
                                            (const MethodInfo_38B3690 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
      }
      return 0;
    }
    v8 = FieldMotionManager___c_TypeInfo;
    if ( !*(&FieldMotionManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, v9);
      v8 = FieldMotionManager___c_TypeInfo;
    }
    v25 = v8->static_fields;
    _9__23_3 = (System_Func_object__object__o *)v25->__9__23_1;
    if ( !_9__23_3 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v9);
        v25 = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)v25->__9;
      _9__23_3 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_object__object____ctor(_9__23_3, v26, Method_FieldMotionManager___c__GetTransform_b__23_1__, 0);
      v21 = (int)_9__23_3;
      v27 = FieldMotionManager___c_TypeInfo->static_fields;
      v27->__9__23_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__23_3;
      p__9__23_3 = (MissionNaviTransitionBoardItem_o *)&v27->__9__23_1;
LABEL_27:
      sub_2213A04(p__9__23_3, v21, v15, v16, v17, v18, v19, v20);
    }
  }
  if ( !this )
    goto LABEL_29;
  return (UnityEngine_Transform_o *)FieldMotionManager__FindLastNotNullObject_object_(
                                      this,
                                      (System_Func_BattleFieldMotionComponent__T__o *)_9__23_3,
                                      (const MethodInfo_38B3690 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  if ( (byte_59742FB & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59742FB = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_15:
    sub_2213CDC(this, method);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
    fieldMotionArray = v2->fields.fieldMotionArray;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !fieldMotionArray )
        goto LABEL_15;
      if ( v7 >= LODWORD(fieldMotionArray->max_length) )
LABEL_17:
        sub_2213CE4(this);
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
  System_String_o *MotionName; // x0
  __int64 v6; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  System_String_o *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x23
  struct BattleFieldMotionComponent_array *v11; // x8
  __int64 v12; // x25
  UnityEngine_Object_o *v13; // x22
  struct BattleFieldMotionComponent_array *v14; // x8
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  System_String_o *v17; // x19
  __int64 v18; // x0
  UnityEngine_UnityException_o *v19; // x20
  __int64 v20; // x0
  struct BattleFieldMotionComponent_array *v21; // x8

  if ( (byte_5974303 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974303 = 1;
  }
  MotionName = BattleFieldMotionComponent__GetMotionName(nowAction, 0);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_21;
  v8 = MotionName;
  v9 = (unsigned int)(LODWORD(fieldMotionArray->max_length) - 1);
  if ( (int)v9 < 0 )
  {
LABEL_16:
    v15 = (System_String_o *)sub_2213A74(&StringLiteral_294/*" not found "*/);
    v16 = (System_String_o *)sub_2213A74(&StringLiteral_266/*" in fieldFsm "*/);
    v17 = System_String__Concat_75694928(v15, v8, v16, 0);
    v18 = sub_2213A74(&UnityEngine_UnityException_TypeInfo);
    v19 = (UnityEngine_UnityException_o *)sub_2213CCC(v18);
    UnityEngine_UnityException___ctor_83442876(v19, v17, 0);
    v20 = sub_2213A74(&Method_FieldMotionManager_PlayBattleAction__);
    sub_2213BA0(v19, v20);
  }
  v10 = v9 + 4;
  while ( 1 )
  {
    v11 = this->fields.fieldMotionArray;
    if ( !v11 )
      goto LABEL_21;
    v12 = v10 - 4;
    if ( v10 - 4 >= (unsigned __int64)LODWORD(v11->max_length) )
      goto LABEL_22;
    v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->obj.klass + v10);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    MotionName = (System_String_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
    if ( ((unsigned __int8)MotionName & 1) != 0 )
    {
      v14 = this->fields.fieldMotionArray;
      if ( !v14 )
        goto LABEL_21;
      if ( v12 >= (unsigned __int64)LODWORD(v14->max_length) )
        goto LABEL_22;
      MotionName = (System_String_o *)*((_QWORD *)&v14->obj.klass + v10);
      if ( !MotionName )
        goto LABEL_21;
      MotionName = (System_String_o *)BattleFieldMotionComponent__checkMotionEvent(
                                        (BattleFieldMotionComponent_o *)MotionName,
                                        v8,
                                        0);
      if ( ((unsigned __int8)MotionName & 1) != 0 )
        break;
    }
    --v10;
    if ( v12 <= 0 )
      goto LABEL_16;
  }
  v21 = this->fields.fieldMotionArray;
  if ( !v21 )
    goto LABEL_21;
  if ( (unsigned int)(v10 - 4) >= LODWORD(v21->max_length) )
LABEL_22:
    sub_2213CE4(MotionName);
  MotionName = (System_String_o *)*((_QWORD *)&v21->obj.klass + v10);
  if ( !MotionName )
LABEL_21:
    sub_2213CDC(MotionName, v6);
  BattleFieldMotionComponent__playBattleActionData((BattleFieldMotionComponent_o *)MotionName, nowAction, v8, 0);
}


void FieldMotionManager__ResetFieldMotionArray(FieldMotionManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  unsigned __int64 max_length_low; // x9

  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_6:
    sub_2213CDC(this, method);
  v10 = 1;
  v11 = 40;
  while ( 1 )
  {
    max_length_low = LODWORD(fieldMotionArray->max_length);
    if ( v10 >= (int)max_length_low )
      break;
    if ( v10 >= max_length_low )
      sub_2213CE4(this);
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v11) = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)fieldMotionArray + v11), 0, v2, v3, v4, v5, v6, v7);
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
  int max_length; // w8
  unsigned __int64 v9; // x23
  struct BattleFieldMotionComponent_array *v10; // x8
  UnityEngine_Object_o *v11; // x22
  struct BattleFieldMotionComponent_array *v12; // x8
  struct BattleFieldMotionComponent_array *v15; // x8
  Il2CppObject *Fsm; // x0
  struct BattleFieldMotionComponent_array *v17; // x8

  v6 = this;
  if ( (byte_5974304 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_PlayMakerFSM___);
    this = (FieldMotionManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974304 = 1;
  }
  fieldMotionArray = v6->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_24;
  max_length = fieldMotionArray->max_length;
  v9 = (unsigned int)(max_length - 1);
  if ( max_length - 1 < 0 )
    return 0;
  while ( 1 )
  {
    v10 = v6->fields.fieldMotionArray;
    if ( !v10 )
      goto LABEL_24;
    if ( v9 >= LODWORD(v10->max_length) )
      goto LABEL_25;
    v11 = (UnityEngine_Object_o *)v10->m_Items[v9];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, str);
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = v6->fields.fieldMotionArray;
      if ( !v12 )
        goto LABEL_24;
      if ( v9 >= LODWORD(v12->max_length) )
        goto LABEL_25;
      this = (FieldMotionManager_o *)v12->m_Items[v9];
      if ( !this )
        goto LABEL_24;
      this = (FieldMotionManager_o *)BattleFieldMotionComponent__checkMotionEvent(
                                       (BattleFieldMotionComponent_o *)this,
                                       str,
                                       0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    if ( (__int64)v9-- <= 0 )
      return 0;
  }
  v15 = v6->fields.fieldMotionArray;
  if ( !v15 )
    goto LABEL_24;
  if ( (unsigned int)v9 >= LODWORD(v15->max_length) )
    goto LABEL_25;
  this = (FieldMotionManager_o *)v15->m_Items[v9];
  if ( !this
    || (Fsm = (Il2CppObject *)BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)this, 0),
        ActionExtensions__Call_object_(
          (System_Action_T__o *)callbackBeforeSend,
          Fsm,
          (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_PlayMakerFSM___),
        (v17 = v6->fields.fieldMotionArray) == 0) )
  {
LABEL_24:
    sub_2213CDC(this, str);
  }
  if ( (unsigned int)v9 >= LODWORD(v17->max_length) )
LABEL_25:
    sub_2213CE4(this);
  this = (FieldMotionManager_o *)v17->m_Items[v9];
  if ( !this )
    goto LABEL_24;
  BattleFieldMotionComponent__sendEvent((BattleFieldMotionComponent_o *)this, str, 0);
  return 1;
}


void FieldMotionManager__SendEvent2ActiveFM(FieldMotionManager_o *this, System_String_o *str, const MethodInfo *method)
{
  FieldMotionManager_o *v4; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v6; // x8
  __int64 i; // x23
  struct BattleFieldMotionComponent_array *v8; // x8
  __int64 v9; // x24
  UnityEngine_Object_o *v10; // x21
  struct BattleFieldMotionComponent_array *v11; // x8

  v4 = this;
  if ( (byte_5974305 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974305 = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_18:
    sub_2213CDC(this, str);
  v6 = (unsigned int)(LODWORD(fieldMotionArray->max_length) - 1);
  if ( (int)v6 >= 0 )
  {
    for ( i = v6 + 4; ; --i )
    {
      v8 = v4->fields.fieldMotionArray;
      if ( !v8 )
        goto LABEL_18;
      v9 = i - 4;
      if ( i - 4 >= (unsigned __int64)LODWORD(v8->max_length) )
        goto LABEL_19;
      v10 = (UnityEngine_Object_o *)*((_QWORD *)&v8->obj.klass + i);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, str);
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = v4->fields.fieldMotionArray;
        if ( !v11 )
          goto LABEL_18;
        if ( v9 >= (unsigned __int64)LODWORD(v11->max_length) )
LABEL_19:
          sub_2213CE4(this);
        this = (FieldMotionManager_o *)*((_QWORD *)&v11->obj.klass + i);
        if ( !this )
          goto LABEL_18;
        if ( *((_BYTE *)this + 192) )
          break;
      }
      if ( v9 <= 0 )
        return;
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
  System_String_o *MotionName; // x0
  __int64 v8; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v10; // x8
  System_String_o *v11; // x21
  __int64 i; // x23
  struct BattleFieldMotionComponent_array *v13; // x8
  __int64 v14; // x25
  UnityEngine_Object_o *v15; // x22
  struct BattleFieldMotionComponent_array *v16; // x8
  struct BattleFieldMotionComponent_array *v17; // x8

  if ( (byte_5974306 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974306 = 1;
  }
  if ( nowAction )
  {
    MotionName = BattleFieldMotionComponent__GetMotionName(nowAction, 0);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_22;
    v10 = (unsigned int)(LODWORD(fieldMotionArray->max_length) - 1);
    if ( (int)v10 >= 0 )
    {
      v11 = MotionName;
      for ( i = v10 + 4; ; --i )
      {
        v13 = this->fields.fieldMotionArray;
        if ( !v13 )
          goto LABEL_22;
        v14 = i - 4;
        if ( i - 4 >= (unsigned __int64)LODWORD(v13->max_length) )
          goto LABEL_23;
        v15 = (UnityEngine_Object_o *)*((_QWORD *)&v13->obj.klass + i);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        MotionName = (System_String_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
        if ( ((unsigned __int8)MotionName & 1) != 0 )
        {
          v16 = this->fields.fieldMotionArray;
          if ( !v16 )
            goto LABEL_22;
          if ( v14 >= (unsigned __int64)LODWORD(v16->max_length) )
            goto LABEL_23;
          MotionName = (System_String_o *)*((_QWORD *)&v16->obj.klass + i);
          if ( !MotionName )
            goto LABEL_22;
          MotionName = (System_String_o *)BattleFieldMotionComponent__checkMotionEvent(
                                            (BattleFieldMotionComponent_o *)MotionName,
                                            v11,
                                            0);
          if ( ((unsigned __int8)MotionName & 1) != 0 )
            break;
        }
        if ( v14 <= 0 )
          return;
      }
      v17 = this->fields.fieldMotionArray;
      if ( v17 )
      {
        if ( (unsigned int)(i - 4) >= LODWORD(v17->max_length) )
LABEL_23:
          sub_2213CE4(MotionName);
        MotionName = (System_String_o *)*((_QWORD *)&v17->obj.klass + i);
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion((BattleFieldMotionComponent_o *)MotionName, active, 0);
          return;
        }
      }
LABEL_22:
      sub_2213CDC(MotionName, v8);
    }
  }
}


void FieldMotionManager__SetBaseFieldMotionIds(
        FieldMotionManager_o *this,
        System_Int32_array *motionIds,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  System_Int32_array *v9; // x20
  FieldMotionManager_o *v10; // x19
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0

  v9 = motionIds;
  v10 = this;
  if ( (byte_59742F7 & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_2213A60(&Method_System_Array_Empty_int___);
    byte_59742F7 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( v10 )
        goto LABEL_4;
LABEL_15:
      sub_2213CDC(this, motionIds);
    }
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  if ( !*(_DWORD *)(v13 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v13, motionIds);
  this = *(FieldMotionManager_o **)(v11[7] + 16LL);
  if ( (*(_WORD *)((char *)this + 309) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_224B908(v8);
  v9 = (System_Int32_array *)**((_QWORD **)this + 23);
  if ( !v10 )
    goto LABEL_15;
LABEL_4:
  v10->fields.baseMotionIds = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.baseMotionIds,
    (int32_t)v9,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OverwriteMotionIds_k__BackingField = motionIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteMotionIds_k__BackingField,
    (int32_t)motionIds,
    (System_String_o *)method,
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
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__19_0; // x21
  Il2CppObject *v8; // x22
  struct FieldMotionManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  Il2CppObject *LastNotNullObject_object; // x20

  if ( (byte_59742FD & 1) == 0 )
  {
    sub_2213A60(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_2213A60(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_FieldMotionManager___c__SetTacticBg_b__19_0__);
    sub_2213A60(&FieldMotionManager___c_TypeInfo);
    byte_59742FD = 1;
  }
  v5 = FieldMotionManager___c_TypeInfo;
  if ( !*(&FieldMotionManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo, flg);
    v5 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__19_0 = (System_Func_object__object__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, flg);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_object__object____ctor(_9__19_0, v8, Method_FieldMotionManager___c__SetTacticBg_b__19_0__, 0);
    v9 = FieldMotionManager___c_TypeInfo->static_fields;
    v9->__9__19_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__19_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__19_0, (int32_t)_9__19_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !this )
    goto LABEL_16;
  LastNotNullObject_object = FieldMotionManager__FindLastNotNullObject_object_(
                               this,
                               (System_Func_BattleFieldMotionComponent__T__o *)_9__19_0,
                               (const MethodInfo_38B3690 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
    sub_2213CDC(v5, flg);
  }
}


void FieldMotionManager__SetVariables___Il2CppFullySharedGenericType_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
        const MethodInfo_38B4544 *method)
{
  long double v4; // q0
  unsigned __int64 StatusReg; // x21
  void *monitor; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  size_t v11; // x22
  __int16 v12; // w8
  int v13; // w9
  char *v14; // x24
  System_Collections_Generic_List_object__o *v15; // x26
  PlayMakerFSM_o *Fsm; // x0
  __int64 v17; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v19; // x25
  unsigned __int64 i; // x23
  UnityEngine_Object_o *v21; // x26
  System_RuntimeTypeHandle_o v22; // x27
  System_Type_o *TypeFromHandle; // x27
  System_RuntimeTypeHandle_o v24; // x0
  System_Type_o *v25; // x0
  __int64 v26; // x27
  PlayMakerFSM_o *v27; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **p_klass; // x1
  struct PlayMakerFSM_AddEventHandlerDelegate_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct PlayMakerFSM_AddEventHandlerDelegate_o *v36; // x1
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
  System_RuntimeTypeHandle_o v47; // x0
  System_Type_o *v48; // x0
  long double v49; // q0
  __int64 v50; // x9
  PlayMakerFSM_o *v51; // x26
  __int64 v52; // x8
  __int64 v53; // x0
  System_RuntimeTypeHandle_o v54; // x27
  System_Type_o *v55; // x27
  System_RuntimeTypeHandle_o v56; // x0
  System_Type_o *v57; // x0
  long double v58; // q0
  __int64 v59; // x9
  PlayMakerFSM_o *v60; // x26
  __int64 v61; // x8
  __int64 v62; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v63; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v64; // x3
  __int64 v65; // x1
  System_String_o *v66; // x27
  __int64 v67; // [xsp+0h] [xbp-40h] BYREF
  char *v68; // [xsp+8h] [xbp-38h]
  char *v69; // [xsp+10h] [xbp-30h]
  unsigned __int64 v70; // [xsp+18h] [xbp-28h]
  size_t v71; // [xsp+20h] [xbp-20h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+28h] [xbp-18h] BYREF
  System_String_o *v73; // [xsp+30h] [xbp-10h]
  __int64 v74; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = value.monitor;
  v74 = *(_QWORD *)(StatusReg + 40);
  v9 = *((_QWORD *)value.monitor + 7);
  klass = value.klass;
  if ( !v9 )
  {
    sub_2213A60(&UnityEngine_GameObject_var);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    v9 = *((_QWORD *)monitor + 7);
    if ( !v9 )
    {
      sub_224B964();
      v9 = *((_QWORD *)monitor + 7);
    }
  }
  v10 = *(_QWORD *)(v9 + 8);
  v11 = *(unsigned int *)(v10 + 252);
  v12 = *(_WORD *)(v10 + 309);
  if ( (v12 & 1) != 0 )
  {
    v13 = *(_DWORD *)(v10 + 252);
  }
  else
  {
    v13 = *(_DWORD *)(sub_224B908(v4) + 252);
    v10 = *(_QWORD *)(*((_QWORD *)monitor + 7) + 8LL);
    v12 = *(_WORD *)(v10 + 309);
  }
  v69 = (char *)&v67 - (((unsigned int)(v13 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v12 & 1) == 0 )
    v10 = sub_224B908(v4);
  v68 = (char *)&v67 - (((unsigned int)(*(_DWORD *)(v10 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  v14 = (char *)&v67 - ((v11 + 15) & 0x1FFFFFFF0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v15
    || (v70 = StatusReg,
        v71 = v11,
        System_Collections_Generic_List_object___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v15,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_85:
    sub_2213CDC(Fsm, v17);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v19 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_2213CE4(Fsm);
      v21 = (UnityEngine_Object_o *)*((_QWORD *)&v19->fields.fsm + i);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v21, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        v22.fields.value = **((_QWORD **)monitor + 7);
        if ( !*(_DWORD *)(qword_59843E0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_59843E0, v17);
        TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0);
        v24.fields.value = qword_5984390 + 32;
        v25 = System_Type__GetTypeFromHandle(v24, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v25, 0);
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
            v26 = *((_QWORD *)monitor + 7);
            v27 = Fsm;
            if ( *(int *)(*(_QWORD *)(v26 + 8) + 40LL) >= 0 )
              p_klass = &klass;
            else
              p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
            memcpy(v14, p_klass, v71);
            v29 = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)j_il2cpp_value_box_0(*(_QWORD *)(v26 + 8), v14);
            if ( v29 )
            {
              if ( v29->klass == (PlayMakerFSM_AddEventHandlerDelegate_c *)qword_5984390 )
                v36 = v29;
              else
                v36 = 0;
            }
            else
            {
              v36 = 0;
            }
            v27->fields.addEventHandlers = v36;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v27->fields.addEventHandlers,
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
          if ( !*(_DWORD *)(qword_59843E0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_59843E0, v17);
          v38 = System_Type__GetTypeFromHandle(v37, 0);
          v39 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)UnityEngine_GameObject_var, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v38, v39, 0);
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
              v40 = *((_QWORD *)monitor + 7);
              v41 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              if ( *(int *)(*(_QWORD *)(v40 + 8) + 40LL) >= 0 )
                v42 = &klass;
              else
                v42 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
              memcpy(v14, v42, v71);
              v43 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(*(_QWORD *)(v40 + 8), v14);
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
            if ( !*(_DWORD *)(qword_59843E0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_59843E0, v17);
            v46 = System_Type__GetTypeFromHandle(v45, 0);
            v47.fields.value = qword_5984348 + 32;
            v48 = System_Type__GetTypeFromHandle(v47, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v46, v48, 0);
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
                v50 = *((_QWORD *)monitor + 7);
                v51 = Fsm;
                v52 = *(_QWORD *)(v50 + 8);
                if ( (*(_WORD *)(v52 + 309) & 1) != 0 )
                {
                  v53 = *(_QWORD *)(v50 + 8);
                }
                else
                {
                  LODWORD(v53) = sub_224B908(v49);
                  v50 = *((_QWORD *)monitor + 7);
                  v52 = *(_QWORD *)(v50 + 8);
                }
                if ( *(int *)(v52 + 40) >= 0 )
                  v63 = &klass;
                else
                  v63 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                sub_22146B4(v53, *(_QWORD *)(v50 + 16), (int)v69, v63);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v73, 0);
                LODWORD(v51->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v54.fields.value = **((_QWORD **)monitor + 7);
              if ( !*(_DWORD *)(qword_59843E0 + 228) )
                j_il2cpp_runtime_class_init_0(qword_59843E0, v17);
              v55 = System_Type__GetTypeFromHandle(v54, 0);
              v56.fields.value = qword_5984328 + 32;
              v57 = System_Type__GetTypeFromHandle(v56, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v55, v57, 0);
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
                  v59 = *((_QWORD *)monitor + 7);
                  v60 = Fsm;
                  v61 = *(_QWORD *)(v59 + 8);
                  if ( (*(_WORD *)(v61 + 309) & 1) != 0 )
                  {
                    v62 = *(_QWORD *)(v59 + 8);
                  }
                  else
                  {
                    LODWORD(v62) = sub_224B908(v58);
                    v59 = *((_QWORD *)monitor + 7);
                    v61 = *(_QWORD *)(v59 + 8);
                  }
                  if ( *(int *)(v61 + 40) >= 0 )
                    v64 = &klass;
                  else
                    v64 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
                  sub_22146B4(v62, *(_QWORD *)(v59 + 16), (int)v68, v64);
                  v66 = v73;
                  if ( !*(_DWORD *)(qword_5984328 + 228) )
                    j_il2cpp_runtime_class_init_0(qword_5984328, v65);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v66, 0);
                  LOBYTE(v60->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
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
        const MethodInfo_38B37B8 *method)
{
  const MethodInfo_38B37B8_RGCTXs *rgctx_data; // x8
  System_Collections_Generic_List_object__o *v8; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v10; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v12; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v14; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_RuntimeTypeHandle_o v17; // x0
  System_Type_o *v18; // x0
  PlayMakerFSM_o *v19; // x22
  Il2CppClass *_1_T; // x0
  struct PlayMakerFSM_AddEventHandlerDelegate_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct PlayMakerFSM_AddEventHandlerDelegate_o *v28; // x1
  Il2CppType *v29; // x23
  System_Type_o *v30; // x23
  System_Type_o *v31; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v32; // x22
  Il2CppClass *v33; // x0
  UnityEngine_GameObject_c **v34; // x0
  UnityEngine_GameObject_o *v35; // x1
  Il2CppType *v36; // x23
  System_Type_o *v37; // x23
  System_RuntimeTypeHandle_o v38; // x0
  System_Type_o *v39; // x0
  PlayMakerFSM_o *v40; // x22
  System_String_o *v41; // x0
  Il2CppType *v42; // x23
  System_Type_o *v43; // x23
  System_RuntimeTypeHandle_o v44; // x0
  System_Type_o *v45; // x0
  PlayMakerFSM_o *v46; // x22
  System_String_o *v47; // x0
  char v48[4]; // [xsp+4h] [xbp-6Ch] BYREF
  char v49[4]; // [xsp+8h] [xbp-68h] BYREF
  _BYTE v50[4]; // [xsp+Ch] [xbp-64h] BYREF

  rgctx_data = method->rgctx_data;
  v50[0] = value;
  if ( !rgctx_data )
  {
    sub_2213A60(&UnityEngine_GameObject_var);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_object___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v8,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_64:
    sub_2213CDC(Fsm, v10);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v12 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_2213CE4(Fsm);
      v14 = (UnityEngine_Object_o *)*((_QWORD *)&v12->fields.fsm + i);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v14, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !*(_DWORD *)(qword_59843E0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
        TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
        v17.fields.value = qword_5984390 + 32;
        v18 = System_Type__GetTypeFromHandle(v17, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v18, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_64;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
            v19 = Fsm;
            _1_T = method->rgctx_data->_1_T;
            v49[0] = v50[0];
            v21 = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)j_il2cpp_value_box_0(_1_T, v49);
            if ( v21 )
            {
              if ( v21->klass == (PlayMakerFSM_AddEventHandlerDelegate_c *)qword_5984390 )
                v28 = v21;
              else
                v28 = 0;
            }
            else
            {
              v28 = 0;
            }
            v19->fields.addEventHandlers = v28;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v19->fields.addEventHandlers,
              (int32_t)v28,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
          }
        }
        else
        {
          v29 = method->rgctx_data->_0_T;
          if ( !*(_DWORD *)(qword_59843E0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
          v30 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v29, 0);
          v31 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)UnityEngine_GameObject_var, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v30, v31, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_64;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
              v32 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v33 = method->rgctx_data->_1_T;
              v48[0] = v50[0];
              v34 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(v33, v48);
              if ( v34 )
              {
                if ( *v34 == UnityEngine_GameObject_TypeInfo )
                  v35 = (UnityEngine_GameObject_o *)v34;
                else
                  v35 = 0;
              }
              else
              {
                v35 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v32, v35, 0);
            }
          }
          else
          {
            v36 = method->rgctx_data->_0_T;
            if ( !*(_DWORD *)(qword_59843E0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
            v37 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v36, 0);
            v38.fields.value = qword_5984348 + 32;
            v39 = System_Type__GetTypeFromHandle(v38, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v37, v39, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v14 )
                goto LABEL_64;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
                v40 = Fsm;
                if ( !*(_DWORD *)(qword_5984328 + 228) )
                  j_il2cpp_runtime_class_init_0(qword_5984328, v10);
                v41 = System_Boolean__ToString((bool)v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v41, 0);
                LODWORD(v40->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v42 = method->rgctx_data->_0_T;
              if ( !*(_DWORD *)(qword_59843E0 + 228) )
                j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
              v43 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v42, 0);
              v44.fields.value = qword_5984328 + 32;
              v45 = System_Type__GetTypeFromHandle(v44, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v43, v45, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_64;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
                  v46 = Fsm;
                  if ( !*(_DWORD *)(qword_5984328 + 228) )
                    j_il2cpp_runtime_class_init_0(qword_5984328, v10);
                  v47 = System_Boolean__ToString((bool)v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v47, 0);
                  LOBYTE(v46->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
    }
  }
}


void FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_38B3C54 *method)
{
  const MethodInfo_38B3C54_RGCTXs *rgctx_data; // x8
  System_Collections_Generic_List_object__o *v8; // x22
  PlayMakerFSM_o *Fsm; // x0
  __int64 v10; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v12; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v14; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_RuntimeTypeHandle_o v17; // x0
  System_Type_o *v18; // x0
  PlayMakerFSM_o *v19; // x22
  Il2CppClass *_1_T; // x0
  struct PlayMakerFSM_AddEventHandlerDelegate_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct PlayMakerFSM_AddEventHandlerDelegate_o *v28; // x1
  Il2CppType *v29; // x23
  System_Type_o *v30; // x23
  System_Type_o *v31; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v32; // x22
  Il2CppClass *v33; // x0
  UnityEngine_GameObject_c **v34; // x0
  UnityEngine_GameObject_o *v35; // x1
  Il2CppType *v36; // x23
  System_Type_o *v37; // x23
  System_RuntimeTypeHandle_o v38; // x0
  System_Type_o *v39; // x0
  PlayMakerFSM_o *v40; // x22
  System_String_o *v41; // x0
  Il2CppType *v42; // x23
  System_Type_o *v43; // x23
  System_RuntimeTypeHandle_o v44; // x0
  System_Type_o *v45; // x0
  PlayMakerFSM_o *v46; // x22
  __int64 v47; // x1
  System_String_o *v48; // x23
  int32_t v49; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v50; // [xsp+8h] [xbp-68h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-64h] BYREF

  rgctx_data = method->rgctx_data;
  v51 = value;
  if ( !rgctx_data )
  {
    sub_2213A60(&UnityEngine_GameObject_var);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_object___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = (PlayMakerFSM_o *)System_Collections_Generic_List_object___ToArray(
                                   v8,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_62:
    sub_2213CDC(Fsm, v10);
  }
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v12 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_2213CE4(Fsm);
      v14 = (UnityEngine_Object_o *)*((_QWORD *)&v12->fields.fsm + i);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      Fsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v14, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !*(_DWORD *)(qword_59843E0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
        TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
        v17.fields.value = qword_5984390 + 32;
        v18 = System_Type__GetTypeFromHandle(v17, 0);
        Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v18, 0);
        if ( ((unsigned __int8)Fsm & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_62;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
            v19 = Fsm;
            _1_T = method->rgctx_data->_1_T;
            v50 = v51;
            v21 = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)j_il2cpp_value_box_0(_1_T, &v50);
            if ( v21 )
            {
              if ( v21->klass == (PlayMakerFSM_AddEventHandlerDelegate_c *)qword_5984390 )
                v28 = v21;
              else
                v28 = 0;
            }
            else
            {
              v28 = 0;
            }
            v19->fields.addEventHandlers = v28;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v19->fields.addEventHandlers,
              (int32_t)v28,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
          }
        }
        else
        {
          v29 = method->rgctx_data->_0_T;
          if ( !*(_DWORD *)(qword_59843E0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
          v30 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v29, 0);
          v31 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)UnityEngine_GameObject_var, 0);
          Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v30, v31, 0);
          if ( ((unsigned __int8)Fsm & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_62;
            Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
              v32 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
              v33 = method->rgctx_data->_1_T;
              v49 = v51;
              v34 = (UnityEngine_GameObject_c **)j_il2cpp_value_box_0(v33, &v49);
              if ( v34 )
              {
                if ( *v34 == UnityEngine_GameObject_TypeInfo )
                  v35 = (UnityEngine_GameObject_o *)v34;
                else
                  v35 = 0;
              }
              else
              {
                v35 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(v32, v35, 0);
            }
          }
          else
          {
            v36 = method->rgctx_data->_0_T;
            if ( !*(_DWORD *)(qword_59843E0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
            v37 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v36, 0);
            v38.fields.value = qword_5984348 + 32;
            v39 = System_Type__GetTypeFromHandle(v38, 0);
            Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v37, v39, 0);
            if ( ((unsigned __int8)Fsm & 1) != 0 )
            {
              if ( !v14 )
                goto LABEL_62;
              Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
                v40 = Fsm;
                v41 = System_Int32__ToString((int32_t)&v51, (const MethodInfo *)method->rgctx_data[1]._0_T);
                Fsm = (PlayMakerFSM_o *)System_Int32__Parse(v41, 0);
                LODWORD(v40->fields.addEventHandlers) = (_DWORD)Fsm;
              }
            }
            else
            {
              v42 = method->rgctx_data->_0_T;
              if ( !*(_DWORD *)(qword_59843E0 + 228) )
                j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
              v43 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v42, 0);
              v44.fields.value = qword_5984328 + 32;
              v45 = System_Type__GetTypeFromHandle(v44, 0);
              Fsm = (PlayMakerFSM_o *)System_Type__op_Equality(v43, v45, 0);
              if ( ((unsigned __int8)Fsm & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_62;
                Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0);
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
                  v46 = Fsm;
                  v48 = System_Int32__ToString((int32_t)&v51, (const MethodInfo *)method->rgctx_data[1]._0_T);
                  if ( !*(_DWORD *)(qword_5984328 + 228) )
                    j_il2cpp_runtime_class_init_0(qword_5984328, v47);
                  Fsm = (PlayMakerFSM_o *)System_Boolean__Parse(v48, 0);
                  LOBYTE(v46->fields.addEventHandlers) = (unsigned __int8)Fsm & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
    }
  }
}


void FieldMotionManager__SetVariables_object_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        Il2CppObject *value,
        const MethodInfo_38B40EC *method)
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
  System_RuntimeTypeHandle_o v17; // x0
  System_Type_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x1
  Il2CppType *v26; // x24
  System_Type_o *v27; // x24
  System_Type_o *v28; // x0
  Il2CppObject *v29; // x1
  Il2CppType *v30; // x24
  System_Type_o *v31; // x24
  System_RuntimeTypeHandle_o v32; // x0
  System_Type_o *v33; // x0
  _DWORD *v34; // x23
  System_String_o *v35; // x0
  Il2CppType *v36; // x24
  System_Type_o *v37; // x24
  System_RuntimeTypeHandle_o v38; // x0
  System_Type_o *v39; // x0
  _BYTE *v40; // x23
  __int64 v41; // x1
  System_String_o *v42; // x24

  if ( !method->rgctx_data )
  {
    sub_2213A60(&UnityEngine_GameObject_var);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_object___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (Fsm = System_Collections_Generic_List_object___ToArray(
                 v8,
                 (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0) )
  {
LABEL_64:
    sub_2213CDC(Fsm, v10);
  }
  v11 = *((_QWORD *)Fsm + 3);
  v12 = Fsm;
  if ( (int)v11 >= 1 )
  {
    for ( i = 0; (__int64)i < (int)v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        sub_2213CE4(Fsm);
      v14 = (UnityEngine_Object_o *)v12[i + 4];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      Fsm = (void *)UnityEngine_Object__op_Equality(v14, 0, 0);
      if ( ((unsigned __int8)Fsm & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( !*(_DWORD *)(qword_59843E0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
        TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
        v17.fields.value = qword_5984390 + 32;
        v18 = System_Type__GetTypeFromHandle(v17, 0);
        Fsm = (void *)System_Type__op_Equality(TypeFromHandle, v18, 0);
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
              if ( value->klass == (Il2CppClass *)qword_5984390 )
                v25 = value;
              else
                v25 = 0;
            }
            else
            {
              v25 = 0;
            }
            *((_QWORD *)Fsm + 7) = v25;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)Fsm + 56),
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
          if ( !*(_DWORD *)(qword_59843E0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
          v27 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v26, 0);
          v28 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)UnityEngine_GameObject_var, 0);
          Fsm = (void *)System_Type__op_Equality(v27, v28, 0);
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
                  v29 = value;
                else
                  v29 = 0;
              }
              else
              {
                v29 = 0;
              }
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                (UnityEngine_GameObject_o *)v29,
                0);
            }
          }
          else
          {
            v30 = method->rgctx_data->_0_T;
            if ( !*(_DWORD *)(qword_59843E0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
            v31 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v30, 0);
            v32.fields.value = qword_5984348 + 32;
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
              if ( !*(_DWORD *)(qword_59843E0 + 228) )
                j_il2cpp_runtime_class_init_0(qword_59843E0, v10);
              v37 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v36, 0);
              v38.fields.value = qword_5984328 + 32;
              v39 = System_Type__GetTypeFromHandle(v38, 0);
              Fsm = (void *)System_Type__op_Equality(v37, v39, 0);
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
                  v40 = Fsm;
                  v42 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                             value,
                                             value->klass->vtable[3].method);
                  if ( !*(_DWORD *)(qword_5984328 + 228) )
                    j_il2cpp_runtime_class_init_0(qword_5984328, v41);
                  Fsm = (void *)System_Boolean__Parse(v42, 0);
                  v40[56] = (unsigned __int8)Fsm & 1;
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
  System_Collections_Generic_IEnumerable_TSource__o *EnableFieldMotionIds; // x20
  System_Func_T__TResult__o *v9; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x20
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  unsigned __int64 i; // x29
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x0
  __int64 v40; // x1
  int *fieldMotionArray; // x26
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x21
  System_Func_object__bool__o *v43; // x22
  Il2CppObject *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *v51; // x20
  __int64 v52; // x1
  int *v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // [xsp+18h] [xbp-68h]

  if ( (byte_59742F9 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleDataDefine_FieldMotionPath__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_2213A60(&System_Func_int__string__TypeInfo);
    sub_2213A60(&System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_FieldMotionManager___c__DisplayClass13_0__SwitchUniqueFieldMotion_b__0__);
    sub_2213A60(&FieldMotionManager___c__DisplayClass13_0_TypeInfo);
    byte_59742F9 = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v7);
  v9 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v9, 0, Method_BattleDataDefine_FieldMotionPath__, 0);
  v10 = System_Linq_Enumerable__Select_int__object_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v9,
          (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v10 )
    sub_2213CDC(0, v11);
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
    v16 = sub_224BC3C(v10, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v16)(
          v13,
          *(_QWORD *)(v16 + 8));
  v59 = v17;
  if ( !v17 )
    sub_2213CDC(v17, v18);
  v19 = v17;
  for ( i = 1; ; ++i )
  {
    v21 = *(_QWORD *)v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_16:
      v24 = sub_224BC3C(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v19, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = sub_2213CCC(FieldMotionManager___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0);
    if ( !v59 )
      sub_2213CDC(v26, v27);
    v28 = *(_QWORD *)v59;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v30 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_24;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_24:
      v31 = sub_224BC3C(v59, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v59, *(_QWORD *)(v31 + 8));
    if ( !v25 )
      sub_2213CDC(v32, v32);
    *(_QWORD *)(v25 + 16) = v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 16), v32, v33, v34, v35, v36, v37, v38);
    fieldMotionArray = (int *)this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_2213CDC(v39, v40);
    if ( (__int64)i >= fieldMotionArray[6] )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v43 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v43,
      (Il2CppObject *)v25,
      Method_FieldMotionManager___c__DisplayClass13_0__SwitchUniqueFieldMotion_b__0__,
      0);
    v44 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v51 = v44;
    if ( v44 )
    {
      v44 = (Il2CppObject *)sub_2213BB4(v44, *(_QWORD *)(*(_QWORD *)fieldMotionArray + 64LL));
      if ( !v44 )
      {
        v58 = sub_2213D00(0, v52);
        sub_2213BA0(v58, 0);
      }
    }
    if ( i >= (unsigned int)fieldMotionArray[6] )
      sub_2213CE4(v44);
    v53 = &fieldMotionArray[2 * i];
    *((_QWORD *)v53 + 4) = v51;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 8), (int32_t)v51, v45, v46, v47, v48, v49, v50);
    v19 = v59;
  }
  if ( v59 )
  {
    v54 = *(_QWORD *)v59;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_39;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_39:
      v57 = sub_224BC3C(v59, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v57)(v59, *(_QWORD *)(v57 + 8));
  }
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OverwriteMotionIds_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteMotionIds_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FieldMotionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974307 & 1) == 0 )
  {
    sub_2213A60(&FieldMotionManager___c_TypeInfo);
    byte_5974307 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FieldMotionManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FieldMotionManager___c_TypeInfo->static_fields->__9 = (struct FieldMotionManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FieldMotionManager___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *FieldMotionManager___c___GetPlayerStage_b__20_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_2213CDC(this, 0);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *FieldMotionManager___c___GetTransform_b__23_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_2213CDC(this, 0);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *FieldMotionManager___c___GetTransform_b__23_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_2213CDC(this, 0);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *FieldMotionManager___c___SetTacticBg_b__19_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_2213CDC(this, 0);
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

  if ( (byte_5974308 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974308 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_2213CDC(v5, v6);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass23_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass23_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_2213CDC(this, 0);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass23_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass23_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_2213CDC(this, 0);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0);
}


UnityEngine_Transform_o *FieldMotionManager___c__DisplayClass23_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass23_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return BattleFieldMotionComponent__GetTargetTr(comp, this->fields.type, this->fields.index, 0);
}