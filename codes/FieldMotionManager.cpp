void __fastcall FieldMotionManager___ctor(
        FieldMotionManager_o *this,
        BattleFieldMotionComponent_array *fieldMotions,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  _QWORD **v17; // x23
  __int64 v18; // x22
  __int16 v19; // w8
  __int64 v20; // x22
  __int64 v21; // x22
  __int64 v22; // x22
  struct System_Int32_array **v23; // x8
  struct System_Int32_array *v24; // x1
  FieldMotionManager_Fields *p_fields; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattleFieldMotionComponent_o *v32; // x0
  __int64 v33; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v35; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v37; // x26
  UnityEngine_Object_o *v38; // x23
  struct BattleFieldMotionComponent_array *v39; // x8
  struct BattleFieldMotionComponent_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0

  if ( (byte_42E69A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)fieldMotions, (_DWORD)perf, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E69A4 = 1;
  }
  v17 = (_QWORD **)Method_System_Array_Empty_int___;
  v18 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v19 = *(_WORD *)(v18 + 306);
  if ( (v19 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v19 = *(_WORD *)(v18 + 306);
  }
  if ( (v19 & 0x400) != 0 )
  {
    v20 = *v17[6];
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      sub_AF52C4(*v17[6]);
    if ( !*(_DWORD *)(v20 + 224) )
    {
      v21 = *v17[6];
      if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
        sub_AF52C4(*v17[6]);
      j_il2cpp_runtime_class_init_0(v21);
    }
  }
  v22 = *v17[6];
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AF52C4(*v17[6]);
  v23 = *(struct System_Int32_array ***)(v22 + 184);
  v24 = *v23;
  this->fields.baseMotionIds = *v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseMotionIds,
    (System_Int32_array **)v24,
    (System_String_array **)perf,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)fieldMotions,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_27:
    sub_B5D69C(v32, v33);
  v35 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v37 = v35 - 4;
    if ( v35 - 4 >= (int)max_length )
      break;
    if ( v37 >= max_length )
      goto LABEL_29;
    v38 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v35);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v32 = (BattleFieldMotionComponent_o *)UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
    if ( ((unsigned __int8)v32 & 1) != 0 )
    {
      v39 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_27;
      if ( v37 >= v39->max_length )
      {
LABEL_29:
        v47 = sub_B5D6C8(v32);
        sub_B5D668(v47, 0LL);
      }
      v32 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v39->obj.klass + v35);
      if ( !v32 )
        goto LABEL_27;
      BattleFieldMotionComponent__setPerf(v32, perf, 0LL);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v35;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_27;
  }
  v40 = (struct BattleFieldMotionComponent_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotions,
                                                     (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleFieldMotionComponent___);
  this->fields.retentionFieldMotionArray = v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.retentionFieldMotionArray,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager__FindLastNotNullObject_Transform_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_1CC2B3C *method)
{
  __int64 v3; // x3
  FieldMotionManager_o *v6; // x21
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v9; // w23
  __int64 v10; // x24
  UnityEngine_Object_o *v11; // x22
  struct BattleFieldMotionComponent_array *v12; // x8
  UnityEngine_Object_o *v13; // x22
  __int64 v15; // x0

  v6 = this;
  if ( (byte_42EB36C & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)getObjectFunc, (_DWORD)method, v3);
    byte_42EB36C = 1;
  }
  fieldMotionArray = v6->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_20:
    sub_B5D69C(this, getObjectFunc);
  max_length = fieldMotionArray->max_length;
  if ( (int)(max_length - 1) < 0 )
    return 0LL;
  v9 = max_length - 2;
  v10 = (int)(max_length - 1) + 4LL;
  while ( 1 )
  {
    if ( v10 - 4 >= (unsigned __int64)fieldMotionArray->max_length )
    {
LABEL_23:
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
    }
    v11 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v10);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = v6->fields.fieldMotionArray;
      if ( !v12 )
        goto LABEL_20;
      if ( v10 - 4 >= (unsigned __int64)v12->max_length )
        goto LABEL_23;
      if ( !getObjectFunc )
        goto LABEL_20;
      v13 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_Func_BattleFieldMotionComponent__T__o *, _QWORD))method->rgctx_data->_0_System_Func_BattleFieldMotionComponent__T__Invoke->methodPointer)(
                                      getObjectFunc,
                                      *((_QWORD *)&v12->obj.klass + v10));
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return (UnityEngine_Transform_o *)v13;
    }
    if ( (v9 & 0x80000000) != 0 )
      return 0LL;
    fieldMotionArray = v6->fields.fieldMotionArray;
    --v9;
    --v10;
    if ( !fieldMotionArray )
      goto LABEL_20;
  }
}


System_Int32_array *__fastcall FieldMotionManager__GetEnableFieldMotionIds(
        FieldMotionManager_o *this,
        StageEntity_o *stageEnt,
        BattleData_o *data,
        const MethodInfo *method)
{
  FieldMotionManager_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  _QWORD **v43; // x20
  __int64 v44; // x19
  __int16 v45; // w8
  __int64 v46; // x19
  __int64 v47; // x19
  __int64 v48; // x19
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_IEnumerable_T__o *baseMotionIds; // x21
  System_Collections_Generic_List_int__o *v53; // x19
  System_Collections_Generic_IEnumerable_TSource__o *CurWaveEnemyDeckMotionIds; // x0
  __int64 v55; // x3
  FieldMotionManager_c *klass; // x8
  FieldMotionManager_o *v57; // x20
  unsigned __int64 v58; // x10
  int32_t *p_offset; // x11
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x3
  __int64 v63; // x20
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x3
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  int32_t v75; // w21
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0

  v6 = this;
  if ( (byte_42E69A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)stageEnt, (_DWORD)data, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Reverse_int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11, v12);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v37, v38, v39);
    this = (FieldMotionManager_o *)sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v40, v41, v42);
    byte_42E69A6 = 1;
  }
  if ( !stageEnt )
    goto LABEL_54;
  if ( !StageEntity__IsDisableFieldMotion(stageEnt, 0LL) )
  {
    WaveFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)StageEntity__GetWaveFieldMotionIds(
                                                                                stageEnt,
                                                                                0LL,
                                                                                0LL);
    if ( WaveFieldMotionIds )
    {
      v51 = System_Linq_Enumerable__Reverse_int_(
              WaveFieldMotionIds,
              (const MethodInfo_1CAFB98 *)Method_System_Linq_Enumerable_Reverse_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v51,
               (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    baseMotionIds = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.baseMotionIds;
    v53 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50870440(
      v53,
      baseMotionIds,
      (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( data )
    {
      CurWaveEnemyDeckMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__GetCurWaveEnemyDeckMotionIds(
                                                                                         data,
                                                                                         0LL);
      this = (FieldMotionManager_o *)System_Linq_Enumerable__Reverse_int_(
                                       CurWaveEnemyDeckMotionIds,
                                       (const MethodInfo_1CAFB98 *)Method_System_Linq_Enumerable_Reverse_int___);
      if ( this )
      {
        klass = this->klass;
        v57 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v58 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
          {
            ++v58;
            p_offset += 4;
            if ( v58 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_25;
          }
          v60 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_25:
          v60 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v55);
        }
        v63 = (*(__int64 (__fastcall **)(FieldMotionManager_o *, _QWORD))v60)(v57, *(_QWORD *)(v60 + 8));
        if ( !v63 )
          sub_B5D69C(0LL, v61);
        while ( 1 )
        {
          v64 = *(_QWORD *)v63;
          if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
          {
            v65 = 0LL;
            v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v66 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v65;
              v66 += 4;
              if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
                goto LABEL_32;
            }
            v67 = v64 + 16LL * *v66 + 312;
          }
          else
          {
LABEL_32:
            v67 = sub_AF54C0(v63, System_Collections_IEnumerator_TypeInfo, 0LL, v62);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8)) & 1) == 0 )
            break;
          v69 = *(_QWORD *)v63;
          if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
          {
            v70 = 0LL;
            v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_int__c **)v71 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
            {
              ++v70;
              v71 += 4;
              if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
                goto LABEL_39;
            }
            v72 = v69 + 16LL * *v71 + 312;
          }
          else
          {
LABEL_39:
            v72 = sub_AF54C0(v63, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v68);
          }
          v73 = (*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v63, *(_QWORD *)(v72 + 8));
          if ( !v53 )
            sub_B5D69C(v73, v74);
          v75 = v73;
          if ( System_Collections_Generic_List_int___Contains(
                 v53,
                 v73,
                 (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            System_Collections_Generic_List_int___Remove(
              v53,
              v75,
              (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
          }
          System_Collections_Generic_List_int___Add(
            v53,
            v75,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        v76 = *(_QWORD *)v63;
        if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
        {
          v77 = 0LL;
          v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
          {
            ++v77;
            v78 += 4;
            if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
              goto LABEL_49;
          }
          v79 = v76 + 16LL * *v78 + 312;
        }
        else
        {
LABEL_49:
          v79 = sub_AF54C0(v63, System_IDisposable_TypeInfo, 0LL, v68);
        }
        this = (FieldMotionManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v63, *(_QWORD *)(v79 + 8));
        if ( v53 )
          return System_Collections_Generic_List_int___ToArray(
                   v53,
                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_54:
    sub_B5D69C(this, stageEnt);
  }
  v43 = (_QWORD **)Method_System_Array_Empty_int___;
  v44 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v45 = *(_WORD *)(v44 + 306);
  if ( (v45 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v45 = *(_WORD *)(v44 + 306);
  }
  if ( (v45 & 0x400) != 0 )
  {
    v46 = *v43[6];
    if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
      sub_AF52C4(*v43[6]);
    if ( !*(_DWORD *)(v46 + 224) )
    {
      v47 = *v43[6];
      if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
        sub_AF52C4(*v43[6]);
      j_il2cpp_runtime_class_init_0(v47);
    }
  }
  v48 = *v43[6];
  if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
    sub_AF52C4(*v43[6]);
  return **(System_Int32_array ***)(v48 + 184);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager__GetEnemyStage(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  FieldMotionManager___c_c *v20; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__15_0; // x20
  Il2CppObject *v23; // x21
  struct FieldMotionManager___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_42E69AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_FieldMotionManager___c__GetEnemyStage_b__15_0__, v14, v15, v16);
    sub_B5D5C4(&FieldMotionManager___c_TypeInfo, v17, v18, v19);
    byte_42E69AA = 1;
  }
  v20 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v20 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__15_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__15_0,
      v23,
      Method_FieldMotionManager___c__GetEnemyStage_b__15_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v24 = FieldMotionManager___c_TypeInfo->static_fields;
    v24->__9__15_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__15_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v24->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !this )
    sub_B5D69C(v20, method);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)_9__15_0,
                                                              (const MethodInfo_1CC2B3C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_Transform, 0LL, 0LL) )
    return LastNotNullObject_Transform;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v30; // x20
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_42E69AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__, v15, v16, v17);
    sub_B5D5C4(&FieldMotionManager___c__DisplayClass16_0_TypeInfo, v18, v19, v20);
    byte_42E69AB = 1;
  }
  v21 = sub_B5D694(FieldMotionManager___c__DisplayClass16_0_TypeInfo);
  FieldMotionManager___c__DisplayClass16_0___ctor((FieldMotionManager___c__DisplayClass16_0_o *)v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  *(_QWORD *)(v21 + 16) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)name, v24, v25, v26, v27, v28, v29);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v30,
    (Il2CppObject *)v21,
    Method_FieldMotionManager___c__DisplayClass16_0__GetGameObject_b__0__,
    (const MethodInfo_2C3041C *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)v30,
                                                              (const MethodInfo_1CC2B3C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_Transform, 0LL, 0LL) )
    return LastNotNullObject_Transform;
  else
    return 0LL;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager__GetPlayerStage(
        FieldMotionManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  FieldMotionManager___c_c *v20; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__14_0; // x20
  Il2CppObject *v23; // x21
  struct FieldMotionManager___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_42E69A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_FieldMotionManager___c__GetPlayerStage_b__14_0__, v14, v15, v16);
    sub_B5D5C4(&FieldMotionManager___c_TypeInfo, v17, v18, v19);
    byte_42E69A9 = 1;
  }
  v20 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v20 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__14_0,
      v23,
      Method_FieldMotionManager___c__GetPlayerStage_b__14_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v24 = FieldMotionManager___c_TypeInfo->static_fields;
    v24->__9__14_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__14_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v24->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !this )
    sub_B5D69C(v20, method);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)_9__14_0,
                                                              (const MethodInfo_1CC2B3C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_Transform, 0LL, 0LL) )
    return LastNotNullObject_Transform;
  else
    return 0LL;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager__GetTargetTransform(
        FieldMotionManager_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  FieldMotionManager___c__DisplayClass18_0_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v25; // x20
  UnityEngine_Transform_o *LastNotNullObject_Transform; // x19

  if ( (byte_42E69AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, type, index, method);
    sub_B5D5C4(&Method_System_Func_BattleFieldMotionComponent__Transform___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__, v16, v17, v18);
    sub_B5D5C4(&FieldMotionManager___c__DisplayClass18_0_TypeInfo, v19, v20, v21);
    byte_42E69AD = 1;
  }
  v22 = (FieldMotionManager___c__DisplayClass18_0_o *)sub_B5D694(FieldMotionManager___c__DisplayClass18_0_TypeInfo);
  FieldMotionManager___c__DisplayClass18_0___ctor(v22, 0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  v22->fields.type = type;
  v22->fields.index = index;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v25,
    (Il2CppObject *)v22,
    Method_FieldMotionManager___c__DisplayClass18_0__GetTargetTransform_b__0__,
    (const MethodInfo_2C3041C *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
  LastNotNullObject_Transform = FieldMotionManager__FindLastNotNullObject_Transform_(
                                  this,
                                  (System_Func_BattleFieldMotionComponent__T__o *)v25,
                                  (const MethodInfo_1CC2B3C *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_Transform, 0LL, 0LL) )
    return LastNotNullObject_Transform;
  else
    return 0LL;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager__GetTransform(
        FieldMotionManager_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  FieldMotionManager___c__DisplayClass17_0_o *v37; // x22
  FieldMotionManager___c_c *v38; // x0
  __int64 v39; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v40; // x0
  __int64 *v41; // x8
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__17_1; // x20
  Il2CppObject *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct FieldMotionManager___c_StaticFields *v51; // x0
  BattleServantConfConponent_o *p__9__17_1; // x0
  struct FieldMotionManager___c_StaticFields *v53; // x8
  Il2CppObject *v54; // x21
  struct FieldMotionManager___c_StaticFields *v55; // x0
  UnityEngine_Transform_o *result; // x0

  if ( (byte_42E69AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, type, index, method);
    sub_B5D5C4(&Method_System_Func_BattleFieldMotionComponent__Transform___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_FieldMotionManager___c__GetTransform_b__17_1__, v13, v14, v15);
    sub_B5D5C4(&Method_FieldMotionManager___c__GetTransform_b__17_3__, v16, v17, v18);
    sub_B5D5C4(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__, v19, v20, v21);
    sub_B5D5C4(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__, v22, v23, v24);
    sub_B5D5C4(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__, v25, v26, v27);
    sub_B5D5C4(&Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__, v28, v29, v30);
    sub_B5D5C4(&FieldMotionManager___c__DisplayClass17_0_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&FieldMotionManager___c_TypeInfo, v34, v35, v36);
    byte_42E69AC = 1;
  }
  v37 = (FieldMotionManager___c__DisplayClass17_0_o *)sub_B5D694(FieldMotionManager___c__DisplayClass17_0_TypeInfo);
  FieldMotionManager___c__DisplayClass17_0___ctor(v37, 0LL);
  if ( !v37 )
LABEL_26:
    sub_B5D69C(v38, v39);
  v37->fields.index = index;
  switch ( type )
  {
    case 0:
      v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v41 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__0__;
      goto LABEL_28;
    case 1:
      v38 = FieldMotionManager___c_TypeInfo;
      if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v38 = FieldMotionManager___c_TypeInfo;
      }
      static_fields = v38->static_fields;
      _9__17_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__17_1;
      if ( _9__17_1 )
        goto LABEL_25;
      if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__17_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__17_1,
        v44,
        Method_FieldMotionManager___c__GetTransform_b__17_1__,
        (const MethodInfo_2C3041C *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
      v51 = FieldMotionManager___c_TypeInfo->static_fields;
      v51->__9__17_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (BattleServantConfConponent_o *)&v51->__9__17_1;
      goto LABEL_24;
    case 2:
      v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v41 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__2__;
      goto LABEL_28;
    case 3:
      v38 = FieldMotionManager___c_TypeInfo;
      if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v38 = FieldMotionManager___c_TypeInfo;
      }
      v53 = v38->static_fields;
      _9__17_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v53->__9__17_3;
      if ( _9__17_1 )
        goto LABEL_25;
      if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v53 = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)v53->__9;
      _9__17_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__17_1,
        v54,
        Method_FieldMotionManager___c__GetTransform_b__17_3__,
        (const MethodInfo_2C3041C *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
      v55 = FieldMotionManager___c_TypeInfo->static_fields;
      v55->__9__17_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__17_1;
      p__9__17_1 = (BattleServantConfConponent_o *)&v55->__9__17_3;
LABEL_24:
      sub_B5D560(p__9__17_1, (System_Int32_array **)_9__17_1, v45, v46, v47, v48, v49, v50);
LABEL_25:
      if ( !this )
        goto LABEL_26;
      goto LABEL_29;
    case 4:
      v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v41 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__4__;
      goto LABEL_28;
    case 5:
      v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v41 = &Method_FieldMotionManager___c__DisplayClass17_0__GetTransform_b__5__;
LABEL_28:
      _9__17_1 = v40;
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v40,
        (Il2CppObject *)v37,
        *v41,
        (const MethodInfo_2C3041C *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
LABEL_29:
      result = FieldMotionManager__FindLastNotNullObject_Transform_(
                 this,
                 (System_Func_BattleFieldMotionComponent__T__o *)_9__17_1,
                 (const MethodInfo_1CC2B3C *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


bool __fastcall FieldMotionManager__IsStep(FieldMotionManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FieldMotionManager_o *v4; // x19
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  char v6; // w21
  __int64 v7; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x24
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x9
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42E69A7 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E69A7 = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_16:
    sub_B5D69C(this, method);
  v6 = 0;
  v7 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v9 = v7 - 4;
    if ( v7 - 4 >= (int)max_length )
      return v6 & 1;
    if ( v9 >= max_length )
      goto LABEL_18;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    fieldMotionArray = v4->fields.fieldMotionArray;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !fieldMotionArray )
        goto LABEL_16;
      if ( v9 >= fieldMotionArray->max_length )
      {
LABEL_18:
        v13 = sub_B5D6C8(this);
        sub_B5D668(v13, 0LL);
      }
      v11 = *((_QWORD *)&fieldMotionArray->obj.klass + v7);
      if ( !v11 )
        goto LABEL_16;
      v6 |= *(_BYTE *)(v11 + 176) != 0;
    }
    ++v7;
    if ( !fieldMotionArray )
      goto LABEL_16;
  }
}


void __fastcall FieldMotionManager__PlayBattleAction(
        FieldMotionManager_o *this,
        BattleActionData_o *nowAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *MotionName; // x0
  __int64 v7; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  System_String_o *v10; // x20
  signed int v11; // w24
  il2cpp_array_size_t v12; // w26
  __int64 v13; // x23
  __int64 v14; // x27
  UnityEngine_Object_o *v15; // x22
  struct BattleFieldMotionComponent_array *v16; // x8
  struct BattleFieldMotionComponent_array *v17; // x8
  __int64 v18; // x0
  System_String_o *v19; // x19
  System_String_o *v20; // x0
  System_String_o *v21; // x19
  __int64 v22; // x0
  UnityEngine_UnityException_o *v23; // x20
  __int64 v24; // x0
  BattleActionData_o *badata; // [xsp+8h] [xbp-58h]

  if ( (byte_42E69AE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)nowAction, (_DWORD)method, v3);
    byte_42E69AE = 1;
  }
  badata = nowAction;
  MotionName = BattleFieldMotionComponent__GetMotionName(nowAction, 0LL);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_17;
  max_length = fieldMotionArray->max_length;
  v10 = MotionName;
  v11 = max_length - 1;
  if ( (int)(max_length - 1) < 0 )
  {
LABEL_23:
    v19 = (System_String_o *)sub_B5D5C8(&StringLiteral_246/*" not found "*/);
    v20 = (System_String_o *)sub_B5D5C8(&StringLiteral_223/*" in fieldFsm "*/);
    v21 = System_String__Concat_44580072(v19, v10, v20, 0LL);
    v22 = sub_B5D5C8(&UnityEngine_UnityException_TypeInfo);
    v23 = (UnityEngine_UnityException_o *)sub_B5D694(v22);
    UnityEngine_UnityException___ctor_51032828(v23, v21, 0LL);
    v24 = sub_B5D5C8(&Method_FieldMotionManager_PlayBattleAction__);
    sub_B5D668(v23, v24);
  }
  v12 = max_length - 2;
  v13 = 0LL;
  v14 = 8LL * v11 + 32;
  while ( 1 )
  {
    if ( v11 + v13 >= (unsigned __int64)fieldMotionArray->max_length )
      goto LABEL_22;
    v15 = *(UnityEngine_Object_o **)((char *)&fieldMotionArray->obj.klass + 8 * v13 + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    MotionName = (System_String_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)MotionName & 1) != 0 )
    {
      v16 = this->fields.fieldMotionArray;
      if ( !v16 )
        goto LABEL_17;
      if ( v11 + v13 >= (unsigned __int64)v16->max_length )
        goto LABEL_22;
      MotionName = *(System_String_o **)((char *)&v16->obj.klass + 8 * v13 + v14);
      if ( !MotionName )
        goto LABEL_17;
      MotionName = (System_String_o *)BattleFieldMotionComponent__checkMotionEvent(
                                        (BattleFieldMotionComponent_o *)MotionName,
                                        v10,
                                        0LL);
      if ( ((unsigned __int8)MotionName & 1) != 0 )
        break;
    }
    if ( (int)(v12 + v13) < 0 )
      goto LABEL_23;
    fieldMotionArray = this->fields.fieldMotionArray;
    --v13;
    if ( !fieldMotionArray )
      goto LABEL_17;
  }
  v17 = this->fields.fieldMotionArray;
  if ( !v17 )
    goto LABEL_17;
  if ( (unsigned int)(v11 + v13) >= v17->max_length )
  {
LABEL_22:
    v18 = sub_B5D6C8(MotionName);
    sub_B5D668(v18, 0LL);
  }
  MotionName = (System_String_o *)*((_QWORD *)&v17->m_Items[v11] + v13);
  if ( !MotionName )
LABEL_17:
    sub_B5D69C(MotionName, v7);
  BattleFieldMotionComponent__playBattleActionData((BattleFieldMotionComponent_o *)MotionName, badata, v10, 0LL);
}


void __fastcall FieldMotionManager__ResetFieldMotionArray(FieldMotionManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  unsigned __int64 max_length; // x9
  __int64 v13; // x0

  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_6:
    sub_B5D69C(this, method);
  v10 = 1LL;
  v11 = 40LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    if ( v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
    {
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
    }
    *(Il2CppClass **)((char *)&fieldMotionArray->obj.klass + v11) = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)((char *)fieldMotionArray + v11), 0LL, v2, v3, v4, v5, v6, v7);
    fieldMotionArray = this->fields.fieldMotionArray;
    ++v10;
    v11 += 8LL;
    if ( !fieldMotionArray )
      goto LABEL_6;
  }
}


void __fastcall FieldMotionManager__SendEvent(
        FieldMotionManager_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FieldMotionManager_o *v5; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v8; // w23
  il2cpp_array_size_t v9; // w25
  __int64 v10; // x22
  __int64 v11; // x26
  UnityEngine_Object_o *v12; // x21
  struct BattleFieldMotionComponent_array *v13; // x8
  struct BattleFieldMotionComponent_array *v14; // x8
  __int64 v15; // x0

  v5 = this;
  if ( (byte_42E69AF & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    byte_42E69AF = 1;
  }
  fieldMotionArray = v5->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_17;
  max_length = fieldMotionArray->max_length;
  v8 = max_length - 1;
  if ( (int)(max_length - 1) >= 0 )
  {
    v9 = max_length - 2;
    v10 = 0LL;
    v11 = 8LL * (int)v8 + 32;
    while ( 1 )
    {
      if ( (int)v8 + v10 >= (unsigned __int64)fieldMotionArray->max_length )
        goto LABEL_23;
      v12 = *(UnityEngine_Object_o **)((char *)&fieldMotionArray->obj.klass + 8 * v10 + v11);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v13 = v5->fields.fieldMotionArray;
        if ( !v13 )
          goto LABEL_17;
        if ( (int)v8 + v10 >= (unsigned __int64)v13->max_length )
          goto LABEL_23;
        this = *(FieldMotionManager_o **)((char *)&v13->obj.klass + 8 * v10 + v11);
        if ( !this )
          goto LABEL_17;
        this = (FieldMotionManager_o *)BattleFieldMotionComponent__checkMotionEvent(
                                         (BattleFieldMotionComponent_o *)this,
                                         str,
                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      if ( (int)(v9 + v10) < 0 )
        return;
      fieldMotionArray = v5->fields.fieldMotionArray;
      --v10;
      if ( !fieldMotionArray )
        goto LABEL_17;
    }
    v14 = v5->fields.fieldMotionArray;
    if ( v14 )
    {
      if ( v8 + (unsigned int)v10 >= v14->max_length )
      {
LABEL_23:
        v15 = sub_B5D6C8(this);
        sub_B5D668(v15, 0LL);
      }
      this = (FieldMotionManager_o *)*((_QWORD *)&v14->m_Items[v8] + v10);
      if ( this )
      {
        BattleFieldMotionComponent__sendEvent((BattleFieldMotionComponent_o *)this, str, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B5D69C(this, str);
  }
}


void __fastcall FieldMotionManager__SendEvent2ActiveFM(
        FieldMotionManager_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FieldMotionManager_o *v5; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v8; // w22
  __int64 v9; // x23
  UnityEngine_Object_o *v10; // x21
  struct BattleFieldMotionComponent_array *v11; // x8
  __int64 v12; // x0

  v5 = this;
  if ( (byte_42E69B0 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    byte_42E69B0 = 1;
  }
  fieldMotionArray = v5->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_17:
    sub_B5D69C(this, str);
  max_length = fieldMotionArray->max_length;
  if ( (int)(max_length - 1) >= 0 )
  {
    v8 = max_length - 2;
    v9 = (int)(max_length - 1) + 4LL;
    while ( 1 )
    {
      if ( v9 - 4 >= (unsigned __int64)fieldMotionArray->max_length )
      {
LABEL_20:
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      v10 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v9);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = v5->fields.fieldMotionArray;
        if ( !v11 )
          goto LABEL_17;
        if ( v9 - 4 >= (unsigned __int64)v11->max_length )
          goto LABEL_20;
        this = (FieldMotionManager_o *)*((_QWORD *)&v11->obj.klass + v9);
        if ( !this )
          goto LABEL_17;
        if ( LOBYTE(this[4].fields.retentionFieldMotionArray) )
          break;
      }
      if ( (v8 & 0x80000000) != 0 )
        return;
      fieldMotionArray = v5->fields.fieldMotionArray;
      --v8;
      --v9;
      if ( !fieldMotionArray )
        goto LABEL_17;
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
  System_String_o *MotionName; // x0
  __int64 v7; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  signed int v10; // w24
  il2cpp_array_size_t v11; // w26
  System_String_o *v12; // x21
  __int64 v13; // x23
  __int64 v14; // x27
  UnityEngine_Object_o *v15; // x22
  struct BattleFieldMotionComponent_array *v16; // x8
  struct BattleFieldMotionComponent_array *v17; // x8
  __int64 v18; // x0

  if ( (byte_42E69B1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)nowAction, active, method);
    byte_42E69B1 = 1;
  }
  if ( nowAction )
  {
    MotionName = BattleFieldMotionComponent__GetMotionName(nowAction, 0LL);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_18;
    max_length = fieldMotionArray->max_length;
    v10 = max_length - 1;
    if ( (int)(max_length - 1) >= 0 )
    {
      v11 = max_length - 2;
      v12 = MotionName;
      v13 = 0LL;
      v14 = 8LL * v10 + 32;
      while ( 1 )
      {
        if ( v10 + v13 >= (unsigned __int64)fieldMotionArray->max_length )
          goto LABEL_24;
        v15 = *(UnityEngine_Object_o **)((char *)&fieldMotionArray->obj.klass + 8 * v13 + v14);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        MotionName = (System_String_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
        if ( ((unsigned __int8)MotionName & 1) != 0 )
        {
          v16 = this->fields.fieldMotionArray;
          if ( !v16 )
            goto LABEL_18;
          if ( v10 + v13 >= (unsigned __int64)v16->max_length )
            goto LABEL_24;
          MotionName = *(System_String_o **)((char *)&v16->obj.klass + 8 * v13 + v14);
          if ( !MotionName )
            goto LABEL_18;
          MotionName = (System_String_o *)BattleFieldMotionComponent__checkMotionEvent(
                                            (BattleFieldMotionComponent_o *)MotionName,
                                            v12,
                                            0LL);
          if ( ((unsigned __int8)MotionName & 1) != 0 )
            break;
        }
        if ( (int)(v11 + v13) < 0 )
          return;
        fieldMotionArray = this->fields.fieldMotionArray;
        --v13;
        if ( !fieldMotionArray )
          goto LABEL_18;
      }
      v17 = this->fields.fieldMotionArray;
      if ( v17 )
      {
        if ( (unsigned int)(v10 + v13) >= v17->max_length )
        {
LABEL_24:
          v18 = sub_B5D6C8(MotionName);
          sub_B5D668(v18, 0LL);
        }
        MotionName = (System_String_o *)*((_QWORD *)&v17->m_Items[v10] + v13);
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion((BattleFieldMotionComponent_o *)MotionName, active, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B5D69C(MotionName, v7);
    }
  }
}


void __fastcall FieldMotionManager__SetBaseFieldMotionIds(
        FieldMotionManager_o *this,
        System_Int32_array *motionIds,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v8; // x20
  FieldMotionManager_o *v9; // x19
  _QWORD **v10; // x21
  __int64 v11; // x20
  __int16 v12; // w8
  __int64 v13; // x20
  __int64 v14; // x20
  __int64 v15; // x20

  v8 = (System_Int32_array **)motionIds;
  v9 = this;
  if ( (byte_42E69A3 & 1) != 0 )
  {
    if ( motionIds )
      goto LABEL_3;
  }
  else
  {
    this = (FieldMotionManager_o *)sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)motionIds, (_DWORD)method, v3);
    byte_42E69A3 = 1;
    if ( v8 )
    {
LABEL_3:
      if ( v9 )
        goto LABEL_4;
LABEL_18:
      sub_B5D69C(this, motionIds);
    }
  }
  v10 = (_QWORD **)Method_System_Array_Empty_int___;
  v11 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v12 = *(_WORD *)(v11 + 306);
  if ( (v12 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v12 = *(_WORD *)(v11 + 306);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = *v10[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      this = (FieldMotionManager_o *)sub_AF52C4(*v10[6]);
    if ( !*(_DWORD *)(v13 + 224) )
    {
      v14 = *v10[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_AF52C4(*v10[6]);
      j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = *v10[6];
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    this = (FieldMotionManager_o *)sub_AF52C4(*v10[6]);
  v8 = **(System_Int32_array ****)(v15 + 184);
  if ( !v9 )
    goto LABEL_18;
LABEL_4:
  v9->fields.baseMotionIds = (struct System_Int32_array *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.baseMotionIds,
    v8,
    (System_String_array **)method,
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  FieldMotionManager___c_c *v21; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__13_0; // x21
  Il2CppObject *v24; // x22
  struct FieldMotionManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *LastNotNullObject_Transform; // x20

  if ( (byte_42E69A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_FieldMotionManager___c__SetTacticBg_b__13_0__, v15, v16, v17);
    sub_B5D5C4(&FieldMotionManager___c_TypeInfo, v18, v19, v20);
    byte_42E69A8 = 1;
  }
  v21 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v21 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__13_0,
      v24,
      Method_FieldMotionManager___c__SetTacticBg_b__13_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v25 = FieldMotionManager___c_TypeInfo->static_fields;
    v25->__9__13_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !this )
    goto LABEL_19;
  LastNotNullObject_Transform = (UnityEngine_Object_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                          this,
                                                          (System_Func_BattleFieldMotionComponent__T__o *)_9__13_0,
                                                          (const MethodInfo_1CC2B3C *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = (FieldMotionManager___c_c *)UnityEngine_Object__op_Inequality(LastNotNullObject_Transform, 0LL, 0LL);
  if ( ((unsigned __int8)v21 & 1) != 0 )
  {
    if ( LastNotNullObject_Transform )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LastNotNullObject_Transform, flg, 0LL);
      return;
    }
LABEL_19:
    sub_B5D69C(v21, flg);
  }
}


void __fastcall FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_1CC2C90 *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x22
  PlayMakerFSM_o *fsmTemplate; // x0
  __int64 v45; // x1
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x8
  PlayMakerFSM_o *v47; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v49; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v52; // x0
  PlayMakerFSM_o *v53; // x22
  Il2CppClass *_1_T; // x23
  __int64 v55; // x0
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  Il2CppType *v63; // x23
  System_Type_o *v64; // x23
  System_Type_o *v65; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v66; // x22
  Il2CppClass *v67; // x23
  __int64 v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  Il2CppType *v70; // x23
  System_Type_o *v71; // x23
  System_Type_o *v72; // x0
  PlayMakerFSM_o *v73; // x22
  System_String_o *v74; // x0
  Il2CppType *v75; // x23
  System_Type_o *v76; // x23
  System_Type_o *v77; // x0
  PlayMakerFSM_o *v78; // x22
  System_String_o *v79; // x23
  __int64 v80; // x0
  char v81[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v82[4]; // [xsp+8h] [xbp-58h] BYREF
  char v83[4]; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeTypeHandle_o v84; // 0:w0.4
  System_RuntimeTypeHandle_o v85; // 0:w0.4
  System_RuntimeTypeHandle_o v86; // 0:w0.4
  System_RuntimeTypeHandle_o v87; // 0:w0.4
  System_RuntimeTypeHandle_o v88; // 0:w0.4
  System_RuntimeTypeHandle_o v89; // 0:w0.4
  System_RuntimeTypeHandle_o v90; // 0:w0.4
  System_RuntimeTypeHandle_o v91; // 0:w0.4

  v83[0] = value;
  if ( (byte_42EB36D & 1) == 0 )
  {
    sub_B5D5C4(&bool_var, (_DWORD)variableName, value, method);
    sub_B5D5C4(&bool_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_GameObject_var, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&int_var, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&string_var, v34, v35, v36);
    sub_B5D5C4(&string_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&System_Type_TypeInfo, v40, v41, v42);
    byte_42EB36D = 1;
  }
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v43
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v43,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (fsmTemplate = (PlayMakerFSM_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v43,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_61:
    sub_B5D69C(fsmTemplate, v45);
  }
  fsm = fsmTemplate->fields.fsm;
  v47 = fsmTemplate;
  if ( (int)fsm >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)fsm; ++i )
    {
      if ( i >= (unsigned int)fsm )
      {
        v80 = sub_B5D6C8(fsmTemplate);
        sub_B5D668(v80, 0LL);
      }
      v49 = (UnityEngine_Object_o *)*((_QWORD *)&v47->fields.fsmTemplate + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsmTemplate = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v49, 0LL, 0LL);
      if ( ((unsigned __int8)fsmTemplate & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v84.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v84, 0LL);
        v85.fields.value = (int)string_var;
        v52 = System_Type__GetTypeFromHandle(v85, 0LL);
        fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v52, 0LL);
        if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
        {
          if ( !v49 )
            goto LABEL_61;
          fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v49, 0LL);
          if ( !fsmTemplate )
            goto LABEL_61;
          fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
          if ( !fsmTemplate )
            goto LABEL_61;
          fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
          if ( !fsmTemplate )
            goto LABEL_61;
          fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                            (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                            variableName,
                                            0LL);
          if ( fsmTemplate )
          {
            v53 = fsmTemplate;
            v82[0] = v83[0];
            _1_T = method->rgctx_data->_1_T;
            if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
              sub_AF52C4(method->rgctx_data->_1_T);
            v55 = j_il2cpp_value_box_0(_1_T, v82);
            v56 = (System_Int32_array **)sub_B5D684(v55, string_TypeInfo);
            v53[1].klass = (PlayMakerFSM_c *)v56;
            sub_B5D560((BattleServantConfConponent_o *)&v53[1], v56, v57, v58, v59, v60, v61, v62);
          }
        }
        else
        {
          v63 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v86.fields.value = (int)v63;
          v64 = System_Type__GetTypeFromHandle(v86, 0LL);
          v87.fields.value = (int)UnityEngine_GameObject_var;
          v65 = System_Type__GetTypeFromHandle(v87, 0LL);
          fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v64, v65, 0LL);
          if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
          {
            if ( !v49 )
              goto LABEL_61;
            fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v49, 0LL);
            if ( !fsmTemplate )
              goto LABEL_61;
            fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
            if ( !fsmTemplate )
              goto LABEL_61;
            fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
            if ( !fsmTemplate )
              goto LABEL_61;
            fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                              variableName,
                                              0LL);
            if ( fsmTemplate )
            {
              v66 = (HutongGames_PlayMaker_FsmGameObject_o *)fsmTemplate;
              v81[0] = v83[0];
              v67 = method->rgctx_data->_1_T;
              if ( (BYTE2(v67->vtable[0].methodPtr) & 1) == 0 )
                sub_AF52C4(method->rgctx_data->_1_T);
              v68 = j_il2cpp_value_box_0(v67, v81);
              v69 = (UnityEngine_GameObject_o *)sub_B5D684(v68, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v66, v69, 0LL);
            }
          }
          else
          {
            v70 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v88.fields.value = (int)v70;
            v71 = System_Type__GetTypeFromHandle(v88, 0LL);
            v89.fields.value = (int)int_var;
            v72 = System_Type__GetTypeFromHandle(v89, 0LL);
            fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v71, v72, 0LL);
            if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
            {
              if ( !v49 )
                goto LABEL_61;
              fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v49, 0LL);
              if ( !fsmTemplate )
                goto LABEL_61;
              fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
              if ( !fsmTemplate )
                goto LABEL_61;
              fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
              if ( !fsmTemplate )
                goto LABEL_61;
              fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                                variableName,
                                                0LL);
              if ( fsmTemplate )
              {
                v73 = fsmTemplate;
                v74 = System_Boolean__ToString((bool)v83, 0LL);
                fsmTemplate = (PlayMakerFSM_o *)System_Int32__Parse(v74, 0LL);
                LODWORD(v73[1].klass) = (_DWORD)fsmTemplate;
              }
            }
            else
            {
              v75 = method->rgctx_data->_0_T;
              if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Type_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              }
              v90.fields.value = (int)v75;
              v76 = System_Type__GetTypeFromHandle(v90, 0LL);
              v91.fields.value = (int)bool_var;
              v77 = System_Type__GetTypeFromHandle(v91, 0LL);
              fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v76, v77, 0LL);
              if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
              {
                if ( !v49 )
                  goto LABEL_61;
                fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v49, 0LL);
                if ( !fsmTemplate )
                  goto LABEL_61;
                fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
                if ( !fsmTemplate )
                  goto LABEL_61;
                fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
                if ( !fsmTemplate )
                  goto LABEL_61;
                fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                                  (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                                  variableName,
                                                  0LL);
                if ( fsmTemplate )
                {
                  v78 = fsmTemplate;
                  v79 = System_Boolean__ToString((bool)v83, 0LL);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  fsmTemplate = (PlayMakerFSM_o *)System_Boolean__Parse(v79, 0LL);
                  LOBYTE(v78[1].klass) = (unsigned __int8)fsmTemplate & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(fsm) = v47->fields.fsm;
    }
  }
}


void __fastcall FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_1CC31D4 *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x22
  PlayMakerFSM_o *fsmTemplate; // x0
  __int64 v45; // x1
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x8
  PlayMakerFSM_o *v47; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v49; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v52; // x0
  PlayMakerFSM_o *v53; // x22
  Il2CppClass *_1_T; // x23
  __int64 v55; // x0
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  Il2CppType *v63; // x23
  System_Type_o *v64; // x23
  System_Type_o *v65; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v66; // x22
  Il2CppClass *v67; // x23
  __int64 v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  Il2CppType *v70; // x23
  System_Type_o *v71; // x23
  System_Type_o *v72; // x0
  PlayMakerFSM_o *v73; // x22
  System_String_o *v74; // x0
  Il2CppType *v75; // x23
  System_Type_o *v76; // x23
  System_Type_o *v77; // x0
  PlayMakerFSM_o *v78; // x22
  System_String_o *v79; // x23
  __int64 v80; // x0
  int32_t v81; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v82; // [xsp+8h] [xbp-58h] BYREF
  int32_t v83; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeTypeHandle_o v84; // 0:w0.4
  System_RuntimeTypeHandle_o v85; // 0:w0.4
  System_RuntimeTypeHandle_o v86; // 0:w0.4
  System_RuntimeTypeHandle_o v87; // 0:w0.4
  System_RuntimeTypeHandle_o v88; // 0:w0.4
  System_RuntimeTypeHandle_o v89; // 0:w0.4
  System_RuntimeTypeHandle_o v90; // 0:w0.4
  System_RuntimeTypeHandle_o v91; // 0:w0.4

  v83 = value;
  if ( (byte_42EB36E & 1) == 0 )
  {
    sub_B5D5C4(&bool_var, (_DWORD)variableName, value, method);
    sub_B5D5C4(&bool_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_GameObject_var, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&int_var, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&string_var, v34, v35, v36);
    sub_B5D5C4(&string_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&System_Type_TypeInfo, v40, v41, v42);
    byte_42EB36E = 1;
  }
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v43
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v43,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (fsmTemplate = (PlayMakerFSM_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v43,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_61:
    sub_B5D69C(fsmTemplate, v45);
  }
  fsm = fsmTemplate->fields.fsm;
  v47 = fsmTemplate;
  if ( (int)fsm >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)fsm; ++i )
    {
      if ( i >= (unsigned int)fsm )
      {
        v80 = sub_B5D6C8(fsmTemplate);
        sub_B5D668(v80, 0LL);
      }
      v49 = (UnityEngine_Object_o *)*((_QWORD *)&v47->fields.fsmTemplate + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsmTemplate = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v49, 0LL, 0LL);
      if ( ((unsigned __int8)fsmTemplate & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v84.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v84, 0LL);
        v85.fields.value = (int)string_var;
        v52 = System_Type__GetTypeFromHandle(v85, 0LL);
        fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v52, 0LL);
        if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
        {
          if ( !v49 )
            goto LABEL_61;
          fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v49, 0LL);
          if ( !fsmTemplate )
            goto LABEL_61;
          fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
          if ( !fsmTemplate )
            goto LABEL_61;
          fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
          if ( !fsmTemplate )
            goto LABEL_61;
          fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                            (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                            variableName,
                                            0LL);
          if ( fsmTemplate )
          {
            v53 = fsmTemplate;
            v82 = v83;
            _1_T = method->rgctx_data->_1_T;
            if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
              sub_AF52C4(method->rgctx_data->_1_T);
            v55 = j_il2cpp_value_box_0(_1_T, &v82);
            v56 = (System_Int32_array **)sub_B5D684(v55, string_TypeInfo);
            v53[1].klass = (PlayMakerFSM_c *)v56;
            sub_B5D560((BattleServantConfConponent_o *)&v53[1], v56, v57, v58, v59, v60, v61, v62);
          }
        }
        else
        {
          v63 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v86.fields.value = (int)v63;
          v64 = System_Type__GetTypeFromHandle(v86, 0LL);
          v87.fields.value = (int)UnityEngine_GameObject_var;
          v65 = System_Type__GetTypeFromHandle(v87, 0LL);
          fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v64, v65, 0LL);
          if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
          {
            if ( !v49 )
              goto LABEL_61;
            fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v49, 0LL);
            if ( !fsmTemplate )
              goto LABEL_61;
            fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
            if ( !fsmTemplate )
              goto LABEL_61;
            fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
            if ( !fsmTemplate )
              goto LABEL_61;
            fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                              variableName,
                                              0LL);
            if ( fsmTemplate )
            {
              v66 = (HutongGames_PlayMaker_FsmGameObject_o *)fsmTemplate;
              v81 = v83;
              v67 = method->rgctx_data->_1_T;
              if ( (BYTE2(v67->vtable[0].methodPtr) & 1) == 0 )
                sub_AF52C4(method->rgctx_data->_1_T);
              v68 = j_il2cpp_value_box_0(v67, &v81);
              v69 = (UnityEngine_GameObject_o *)sub_B5D684(v68, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v66, v69, 0LL);
            }
          }
          else
          {
            v70 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v88.fields.value = (int)v70;
            v71 = System_Type__GetTypeFromHandle(v88, 0LL);
            v89.fields.value = (int)int_var;
            v72 = System_Type__GetTypeFromHandle(v89, 0LL);
            fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v71, v72, 0LL);
            if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
            {
              if ( !v49 )
                goto LABEL_61;
              fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v49, 0LL);
              if ( !fsmTemplate )
                goto LABEL_61;
              fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
              if ( !fsmTemplate )
                goto LABEL_61;
              fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
              if ( !fsmTemplate )
                goto LABEL_61;
              fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                                variableName,
                                                0LL);
              if ( fsmTemplate )
              {
                v73 = fsmTemplate;
                v74 = System_Int32__ToString((int32_t)&v83, 0LL);
                fsmTemplate = (PlayMakerFSM_o *)System_Int32__Parse(v74, 0LL);
                LODWORD(v73[1].klass) = (_DWORD)fsmTemplate;
              }
            }
            else
            {
              v75 = method->rgctx_data->_0_T;
              if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Type_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              }
              v90.fields.value = (int)v75;
              v76 = System_Type__GetTypeFromHandle(v90, 0LL);
              v91.fields.value = (int)bool_var;
              v77 = System_Type__GetTypeFromHandle(v91, 0LL);
              fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v76, v77, 0LL);
              if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
              {
                if ( !v49 )
                  goto LABEL_61;
                fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v49, 0LL);
                if ( !fsmTemplate )
                  goto LABEL_61;
                fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
                if ( !fsmTemplate )
                  goto LABEL_61;
                fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
                if ( !fsmTemplate )
                  goto LABEL_61;
                fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                                  (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                                  variableName,
                                                  0LL);
                if ( fsmTemplate )
                {
                  v78 = fsmTemplate;
                  v79 = System_Int32__ToString((int32_t)&v83, 0LL);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  fsmTemplate = (PlayMakerFSM_o *)System_Boolean__Parse(v79, 0LL);
                  LOBYTE(v78[1].klass) = (unsigned __int8)fsmTemplate & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(fsm) = v47->fields.fsm;
    }
  }
}


void __fastcall FieldMotionManager__SetVariables_string_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        System_String_o *value,
        const MethodInfo_1CC3714 *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  PlayMakerFSM_o *fsmTemplate; // x0
  __int64 v46; // x1
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x8
  PlayMakerFSM_o *v48; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v50; // x23
  Il2CppType *_0_T; // x24
  System_Type_o *TypeFromHandle; // x24
  System_Type_o *v53; // x0
  PlayMakerFSM_o *v54; // x23
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  Il2CppType *v62; // x24
  System_Type_o *v63; // x24
  System_Type_o *v64; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v65; // x23
  UnityEngine_GameObject_o *v66; // x0
  Il2CppType *v67; // x24
  System_Type_o *v68; // x24
  System_Type_o *v69; // x0
  PlayMakerFSM_o *v70; // x23
  System_String_o *v71; // x0
  Il2CppType *v72; // x24
  System_Type_o *v73; // x24
  System_Type_o *v74; // x0
  PlayMakerFSM_o *v75; // x23
  System_String_o *v76; // x24
  __int64 v77; // x0
  System_RuntimeTypeHandle_o v78; // 0:w0.4
  System_RuntimeTypeHandle_o v79; // 0:w0.4
  System_RuntimeTypeHandle_o v80; // 0:w0.4
  System_RuntimeTypeHandle_o v81; // 0:w0.4
  System_RuntimeTypeHandle_o v82; // 0:w0.4
  System_RuntimeTypeHandle_o v83; // 0:w0.4
  System_RuntimeTypeHandle_o v84; // 0:w0.4
  System_RuntimeTypeHandle_o v85; // 0:w0.4

  if ( (byte_42EB36F & 1) == 0 )
  {
    sub_B5D5C4(&bool_var, (_DWORD)variableName, (_DWORD)value, method);
    sub_B5D5C4(&bool_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_GameObject_var, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int_var, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&string_var, v35, v36, v37);
    sub_B5D5C4(&string_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Type_TypeInfo, v41, v42, v43);
    byte_42EB36F = 1;
  }
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v44
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.retentionFieldMotionArray,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        (fsmTemplate = (PlayMakerFSM_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_59:
    sub_B5D69C(fsmTemplate, v46);
  }
  fsm = fsmTemplate->fields.fsm;
  v48 = fsmTemplate;
  if ( (int)fsm >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)fsm; ++i )
    {
      if ( i >= (unsigned int)fsm )
      {
        v77 = sub_B5D6C8(fsmTemplate);
        sub_B5D668(v77, 0LL);
      }
      v50 = (UnityEngine_Object_o *)*((_QWORD *)&v48->fields.fsmTemplate + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsmTemplate = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v50, 0LL, 0LL);
      if ( ((unsigned __int8)fsmTemplate & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v78.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v78, 0LL);
        v79.fields.value = (int)string_var;
        v53 = System_Type__GetTypeFromHandle(v79, 0LL);
        fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v53, 0LL);
        if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
        {
          if ( !v50 )
            goto LABEL_59;
          fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v50, 0LL);
          if ( !fsmTemplate )
            goto LABEL_59;
          fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
          if ( !fsmTemplate )
            goto LABEL_59;
          fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
          if ( !fsmTemplate )
            goto LABEL_59;
          fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                            (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                            variableName,
                                            0LL);
          if ( fsmTemplate )
          {
            v54 = fsmTemplate;
            v55 = (System_Int32_array **)sub_B5D684(value, string_TypeInfo);
            v54[1].klass = (PlayMakerFSM_c *)v55;
            sub_B5D560((BattleServantConfConponent_o *)&v54[1], v55, v56, v57, v58, v59, v60, v61);
          }
        }
        else
        {
          v62 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v80.fields.value = (int)v62;
          v63 = System_Type__GetTypeFromHandle(v80, 0LL);
          v81.fields.value = (int)UnityEngine_GameObject_var;
          v64 = System_Type__GetTypeFromHandle(v81, 0LL);
          fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v63, v64, 0LL);
          if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
          {
            if ( !v50 )
              goto LABEL_59;
            fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v50, 0LL);
            if ( !fsmTemplate )
              goto LABEL_59;
            fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
            if ( !fsmTemplate )
              goto LABEL_59;
            fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
            if ( !fsmTemplate )
              goto LABEL_59;
            fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                              variableName,
                                              0LL);
            if ( fsmTemplate )
            {
              v65 = (HutongGames_PlayMaker_FsmGameObject_o *)fsmTemplate;
              v66 = (UnityEngine_GameObject_o *)sub_B5D684(value, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v65, v66, 0LL);
            }
          }
          else
          {
            v67 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v82.fields.value = (int)v67;
            v68 = System_Type__GetTypeFromHandle(v82, 0LL);
            v83.fields.value = (int)int_var;
            v69 = System_Type__GetTypeFromHandle(v83, 0LL);
            fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v68, v69, 0LL);
            if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
            {
              if ( !v50 )
                goto LABEL_59;
              fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v50, 0LL);
              if ( !fsmTemplate )
                goto LABEL_59;
              fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
              if ( !fsmTemplate )
                goto LABEL_59;
              fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
              if ( !fsmTemplate )
                goto LABEL_59;
              fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                                variableName,
                                                0LL);
              if ( fsmTemplate )
              {
                if ( !value )
                  goto LABEL_59;
                v70 = fsmTemplate;
                v71 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                           value,
                                           value->klass->vtable._4_CompareTo.methodPtr);
                fsmTemplate = (PlayMakerFSM_o *)System_Int32__Parse(v71, 0LL);
                LODWORD(v70[1].klass) = (_DWORD)fsmTemplate;
              }
            }
            else
            {
              v72 = method->rgctx_data->_0_T;
              if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Type_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              }
              v84.fields.value = (int)v72;
              v73 = System_Type__GetTypeFromHandle(v84, 0LL);
              v85.fields.value = (int)bool_var;
              v74 = System_Type__GetTypeFromHandle(v85, 0LL);
              fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v73, v74, 0LL);
              if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
              {
                if ( !v50 )
                  goto LABEL_59;
                fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v50, 0LL);
                if ( !fsmTemplate )
                  goto LABEL_59;
                fsmTemplate = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsmTemplate, 0LL);
                if ( !fsmTemplate )
                  goto LABEL_59;
                fsmTemplate = (PlayMakerFSM_o *)fsmTemplate[1].fields.fsmTemplate;
                if ( !fsmTemplate )
                  goto LABEL_59;
                fsmTemplate = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                                  (HutongGames_PlayMaker_FsmVariables_o *)fsmTemplate,
                                                  variableName,
                                                  0LL);
                if ( fsmTemplate )
                {
                  if ( !value )
                    goto LABEL_59;
                  v75 = fsmTemplate;
                  v76 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                             value,
                                             value->klass->vtable._4_CompareTo.methodPtr);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  fsmTemplate = (PlayMakerFSM_o *)System_Boolean__Parse(v76, 0LL);
                  LOBYTE(v75[1].klass) = (unsigned __int8)fsmTemplate & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(fsm) = v48->fields.fsm;
    }
  }
}


void __fastcall FieldMotionManager__SwitchUniqueFieldMotion(
        FieldMotionManager_o *this,
        StageEntity_o *stageEnt,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_TSource__o *EnableFieldMotionIds; // x19
  System_Func_int__BattleActionData_SideEffectData__o *v45; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x3
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v50; // x19
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v54; // x1
  __int64 v55; // x3
  __int64 v56; // x19
  unsigned __int64 i; // x24
  __int64 v58; // x21
  __int64 v59; // x3
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x3
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x28
  System_Collections_Generic_IEnumerable_TSource__o *retentionFieldMotionArray; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v76; // x23
  WarBoardData_SquareRangeSearch_o *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x21
  Il2CppClass **v85; // x0
  __int64 v86; // x8
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  __int64 v90; // x8
  unsigned __int64 v91; // x10
  int *v92; // x11
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0

  if ( (byte_42E69A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleDataDefine_FieldMotionPath__, (_DWORD)stageEnt, (_DWORD)data, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__string___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_BattleFieldMotionComponent__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_int__string___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_int__string__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Func_BattleFieldMotionComponent__bool__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_string__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_string__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__, v37, v38, v39);
    sub_B5D5C4(&FieldMotionManager___c__DisplayClass8_0_TypeInfo, v40, v41, v42);
    byte_42E69A5 = 1;
  }
  FieldMotionManager__ResetFieldMotionArray(this, (const MethodInfo *)stageEnt);
  EnableFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)FieldMotionManager__GetEnableFieldMotionIds(
                                                                                this,
                                                                                stageEnt,
                                                                                data,
                                                                                v43);
  v45 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__string__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v45,
    0LL,
    Method_BattleDataDefine_FieldMotionPath__,
    (const MethodInfo_2C29938 *)Method_System_Func_int__string___ctor__);
  v46 = System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
          EnableFieldMotionIds,
          (System_Func_TSource__TResult__o *)v45,
          (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v46 )
    sub_B5D69C(0LL, v47);
  klass = v46->klass;
  v50 = v46;
  if ( *(_WORD *)&v46->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v51;
      p_offset += 4;
      if ( v51 >= *(unsigned __int16 *)&v46->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v46, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL, v48);
  }
  v56 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v50,
          *(_QWORD *)(p_method + 8));
  if ( !v56 )
    sub_B5D69C(0LL, v54);
  for ( i = 1LL; ; ++i )
  {
    v86 = *(_QWORD *)v56;
    if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
    {
      v87 = 0LL;
      v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v88 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v87;
        v88 += 4;
        if ( v87 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
          goto LABEL_29;
      }
      v89 = v86 + 16LL * *v88 + 312;
    }
    else
    {
LABEL_29:
      v89 = sub_AF54C0(v56, System_Collections_IEnumerator_TypeInfo, 0LL, v55);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v56, *(_QWORD *)(v89 + 8)) & 1) == 0 )
      break;
    v58 = sub_B5D694(FieldMotionManager___c__DisplayClass8_0_TypeInfo);
    FieldMotionManager___c__DisplayClass8_0___ctor((FieldMotionManager___c__DisplayClass8_0_o *)v58, 0LL);
    v60 = *(_QWORD *)v56;
    if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
    {
      v61 = 0LL;
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v62 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v61;
        v62 += 4;
        if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
          goto LABEL_16;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_16:
      v63 = sub_AF54C0(v56, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL, v59);
    }
    v64 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v56, *(_QWORD *)(v63 + 8));
    if ( !v58 )
      sub_B5D69C(v64, v64);
    *(_QWORD *)(v58 + 16) = v64;
    sub_B5D560((BattleServantConfConponent_o *)(v58 + 16), v64, v65, v66, v67, v68, v69, v70);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      sub_B5D69C(v71, v72);
    if ( (__int64)i >= (int)fieldMotionArray->max_length )
      break;
    retentionFieldMotionArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.retentionFieldMotionArray;
    v76 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleFieldMotionComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v76,
      (Il2CppObject *)v58,
      Method_FieldMotionManager___c__DisplayClass8_0__SwitchUniqueFieldMotion_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleFieldMotionComponent__bool___ctor__);
    v77 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            retentionFieldMotionArray,
            (System_Func_TSource__bool__o *)v76,
            (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldMotionComponent___);
    v84 = (System_Int32_array **)v77;
    if ( v77 )
    {
      v77 = (WarBoardData_SquareRangeSearch_o *)sub_B5D684(v77, fieldMotionArray->obj.klass->_1.element_class);
      if ( !v77 )
      {
        v95 = sub_B5D6BC();
        sub_B5D668(v95, 0LL);
      }
    }
    if ( i >= fieldMotionArray->max_length )
    {
      v94 = sub_B5D6C8(v77);
      sub_B5D668(v94, 0LL);
    }
    v85 = &fieldMotionArray->obj.klass + i;
    v85[4] = (Il2CppClass *)v84;
    sub_B5D560((BattleServantConfConponent_o *)(v85 + 4), v84, v78, v79, v80, v81, v82, v83);
  }
  v90 = *(_QWORD *)v56;
  if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
  {
    v91 = 0LL;
    v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v92 - 1) != System_IDisposable_TypeInfo )
    {
      ++v91;
      v92 += 4;
      if ( v91 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
        goto LABEL_36;
    }
    v93 = v90 + 16LL * *v92 + 312;
  }
  else
  {
LABEL_36:
    v93 = sub_AF54C0(v56, System_IDisposable_TypeInfo, 0LL, v73);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v93)(v56, *(_QWORD *)(v93 + 8));
}


void __fastcall FieldMotionManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct FieldMotionManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E56C7 & 1) == 0 )
  {
    sub_B5D5C4(&FieldMotionManager___c_TypeInfo, v1, v2, v3);
    byte_42E56C7 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(FieldMotionManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = FieldMotionManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FieldMotionManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetPlayerStage_b__14_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B5D69C(this, 0LL);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B5D69C(this, 0LL);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__17_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B5D69C(this, 0LL);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___SetTacticBg_b__13_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B5D69C(this, 0LL);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B5D69C(this, 0LL);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass17_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass17_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E56C8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E56C8 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( !v6 )
    return 0;
  if ( !x )
    sub_B5D69C(v6, v7);
  return BasicHelper__EqualExceptNullOrEmpty(x->fields._AssetName_k__BackingField, this->fields.targetName, 0LL);
}