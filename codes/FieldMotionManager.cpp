void __fastcall FieldMotionManager___ctor(
        FieldMotionManager_o *this,
        BattleFieldMotionComponent_array *fieldMotions,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v7; // x1
  FieldMotionManager_Fields *p_fields; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x0
  __int64 v16; // x23
  unsigned __int64 max_length; // x8
  unsigned __int64 v18; // x25
  UnityEngine_Object_o *v19; // x22
  struct BattleFieldMotionComponent_array *v20; // x8
  struct BattleFieldMotionComponent_o *v21; // x0
  struct BattleFieldMotionComponent_o **p_defUniqueFieldMotion; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0

  if ( (byte_421321A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_BattleFieldMotionComponent___, fieldMotions);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421321A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)fieldMotions,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_16:
    sub_B0D97C(fieldMotionArray);
  v16 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v18 = v16 - 4;
    if ( v16 - 4 >= (int)max_length )
      break;
    if ( v18 >= max_length )
      goto LABEL_18;
    v19 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v16);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fieldMotionArray = (struct BattleFieldMotionComponent_array *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
    if ( ((unsigned __int8)fieldMotionArray & 1) != 0 )
    {
      v20 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_16;
      if ( v18 >= v20->max_length )
      {
LABEL_18:
        v36 = sub_B0D9A8(fieldMotionArray);
        sub_B0D948(v36, 0LL);
      }
      fieldMotionArray = (struct BattleFieldMotionComponent_array *)*((_QWORD *)&v20->obj.klass + v16);
      if ( !fieldMotionArray )
        goto LABEL_16;
      BattleFieldMotionComponent__setPerf((BattleFieldMotionComponent_o *)fieldMotionArray, perf, 0LL);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v16;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_16;
  }
  v21 = (struct BattleFieldMotionComponent_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                                 (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)fieldMotionArray,
                                                 1,
                                                 0LL,
                                                 (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_BattleFieldMotionComponent___);
  this->fields.defUniqueFieldMotion = v21;
  p_defUniqueFieldMotion = &this->fields.defUniqueFieldMotion;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_defUniqueFieldMotion,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Int32_array **)*(p_defUniqueFieldMotion - 1);
  p_defUniqueFieldMotion[1] = (struct BattleFieldMotionComponent_o *)v29;
  sub_B0D840((BattleServantConfConponent_o *)(p_defUniqueFieldMotion + 1), v29, v30, v31, v32, v33, v34, v35);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager__FindLastNotNullObject_Transform_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_1B612DC *method)
{
  FieldMotionManager_o *v5; // x21
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v8; // w23
  __int64 v9; // x24
  UnityEngine_Object_o *v10; // x22
  struct BattleFieldMotionComponent_array *v11; // x8
  UnityEngine_Object_o *v12; // x22
  __int64 v14; // x0

  v5 = this;
  if ( (byte_4216D68 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, getObjectFunc);
    byte_4216D68 = 1;
  }
  fieldMotionArray = v5->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_20:
    sub_B0D97C(this);
  max_length = fieldMotionArray->max_length;
  if ( (int)(max_length - 1) < 0 )
    return 0LL;
  v8 = max_length - 2;
  v9 = (int)(max_length - 1) + 4LL;
  while ( 1 )
  {
    if ( v9 - 4 >= (unsigned __int64)fieldMotionArray->max_length )
    {
LABEL_23:
      v14 = sub_B0D9A8(this);
      sub_B0D948(v14, 0LL);
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
        goto LABEL_20;
      if ( v9 - 4 >= (unsigned __int64)v11->max_length )
        goto LABEL_23;
      if ( !getObjectFunc )
        goto LABEL_20;
      v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_Func_BattleFieldMotionComponent__T__o *, _QWORD))method->rgctx_data->_0_System_Func_BattleFieldMotionComponent__T__Invoke->methodPointer)(
                                      getObjectFunc,
                                      *((_QWORD *)&v11->obj.klass + v9));
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return (UnityEngine_Transform_o *)v12;
    }
    if ( (v8 & 0x80000000) != 0 )
      return 0LL;
    fieldMotionArray = v5->fields.fieldMotionArray;
    --v8;
    --v9;
    if ( !fieldMotionArray )
      goto LABEL_20;
  }
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
  __int64 v8; // x1
  FieldMotionManager___c_c *v9; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__12_0; // x20
  Il2CppObject *v12; // x21
  struct FieldMotionManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_421321E & 1) == 0 )
  {
    sub_B0D8A4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method);
    sub_B0D8A4(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v4);
    sub_B0D8A4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_FieldMotionManager___c__GetEnemyStage_b__12_0__, v7);
    sub_B0D8A4(&FieldMotionManager___c_TypeInfo, v8);
    byte_421321E = 1;
  }
  v9 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v9 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                 System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__12_0,
      v12,
      Method_FieldMotionManager___c__GetEnemyStage_b__12_0__,
      (const MethodInfo_261A104 *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v13 = FieldMotionManager___c_TypeInfo->static_fields;
    v13->__9__12_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__12_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !this )
    sub_B0D97C(v9);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)_9__12_0,
                                                              (const MethodInfo_1B612DC *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v20; // x20
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_421321F & 1) == 0 )
  {
    sub_B0D8A4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, name);
    sub_B0D8A4(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_FieldMotionManager___c__DisplayClass13_0__GetGameObject_b__0__, v8);
    sub_B0D8A4(&FieldMotionManager___c__DisplayClass13_0_TypeInfo, v9);
    byte_421321F = 1;
  }
  v10 = sub_B0D974(FieldMotionManager___c__DisplayClass13_0_TypeInfo, name, method);
  FieldMotionManager___c__DisplayClass13_0___ctor((FieldMotionManager___c__DisplayClass13_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  *(_QWORD *)(v10 + 16) = name;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)name, v12, v13, v14, v15, v16, v17);
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                                                          v18,
                                                                                          v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v20,
    (Il2CppObject *)v10,
    Method_FieldMotionManager___c__DisplayClass13_0__GetGameObject_b__0__,
    (const MethodInfo_261A104 *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)v20,
                                                              (const MethodInfo_1B612DC *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FieldMotionManager___c_c *v9; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__11_0; // x20
  Il2CppObject *v12; // x21
  struct FieldMotionManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_421321D & 1) == 0 )
  {
    sub_B0D8A4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method);
    sub_B0D8A4(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v4);
    sub_B0D8A4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_FieldMotionManager___c__GetPlayerStage_b__11_0__, v7);
    sub_B0D8A4(&FieldMotionManager___c_TypeInfo, v8);
    byte_421321D = 1;
  }
  v9 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v9 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                 System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__11_0,
      v12,
      Method_FieldMotionManager___c__GetPlayerStage_b__11_0__,
      (const MethodInfo_261A104 *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v13 = FieldMotionManager___c_TypeInfo->static_fields;
    v13->__9__11_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__11_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !this )
    sub_B0D97C(v9);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)_9__11_0,
                                                              (const MethodInfo_1B612DC *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v11; // x1
  FieldMotionManager___c__DisplayClass15_0_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v16; // x20
  UnityEngine_Transform_o *LastNotNullObject_Transform; // x19

  if ( (byte_4213221 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Func_BattleFieldMotionComponent__Transform___ctor__, v7);
    sub_B0D8A4(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_FieldMotionManager___c__DisplayClass15_0__GetTargetTransform_b__0__, v10);
    sub_B0D8A4(&FieldMotionManager___c__DisplayClass15_0_TypeInfo, v11);
    byte_4213221 = 1;
  }
  v12 = (FieldMotionManager___c__DisplayClass15_0_o *)sub_B0D974(
                                                        FieldMotionManager___c__DisplayClass15_0_TypeInfo,
                                                        *(_QWORD *)&type,
                                                        *(_QWORD *)&index);
  FieldMotionManager___c__DisplayClass15_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  v12->fields.type = type;
  v12->fields.index = index;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                          v14,
                                                                                          v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_FieldMotionManager___c__DisplayClass15_0__GetTargetTransform_b__0__,
    (const MethodInfo_261A104 *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
  LastNotNullObject_Transform = FieldMotionManager__FindLastNotNullObject_Transform_(
                                  this,
                                  (System_Func_BattleFieldMotionComponent__T__o *)v16,
                                  (const MethodInfo_1B612DC *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  __int64 v16; // x1
  FieldMotionManager___c__DisplayClass14_0_o *v17; // x22
  FieldMotionManager___c_c *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v21; // x0
  __int64 *v22; // x8
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__14_1; // x20
  Il2CppObject *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct FieldMotionManager___c_StaticFields *v32; // x0
  BattleServantConfConponent_o *p__9__14_1; // x0
  struct FieldMotionManager___c_StaticFields *v34; // x8
  Il2CppObject *v35; // x21
  struct FieldMotionManager___c_StaticFields *v36; // x0
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4213220 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Func_BattleFieldMotionComponent__Transform___ctor__, v7);
    sub_B0D8A4(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v8);
    sub_B0D8A4(&Method_FieldMotionManager___c__GetTransform_b__14_1__, v9);
    sub_B0D8A4(&Method_FieldMotionManager___c__GetTransform_b__14_3__, v10);
    sub_B0D8A4(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__0__, v11);
    sub_B0D8A4(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__2__, v12);
    sub_B0D8A4(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__4__, v13);
    sub_B0D8A4(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__5__, v14);
    sub_B0D8A4(&FieldMotionManager___c__DisplayClass14_0_TypeInfo, v15);
    sub_B0D8A4(&FieldMotionManager___c_TypeInfo, v16);
    byte_4213220 = 1;
  }
  v17 = (FieldMotionManager___c__DisplayClass14_0_o *)sub_B0D974(
                                                        FieldMotionManager___c__DisplayClass14_0_TypeInfo,
                                                        *(_QWORD *)&type,
                                                        *(_QWORD *)&index);
  FieldMotionManager___c__DisplayClass14_0___ctor(v17, 0LL);
  if ( !v17 )
LABEL_26:
    sub_B0D97C(v18);
  v17->fields.index = index;
  switch ( type )
  {
    case 0:
      v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                              System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                              v19,
                                                                                              v20);
      v22 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__0__;
      goto LABEL_28;
    case 1:
      v18 = FieldMotionManager___c_TypeInfo;
      if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v18 = FieldMotionManager___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__14_1;
      if ( _9__14_1 )
        goto LABEL_25;
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                                   v19,
                                                                                                   v20);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__14_1,
        v25,
        Method_FieldMotionManager___c__GetTransform_b__14_1__,
        (const MethodInfo_261A104 *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
      v32 = FieldMotionManager___c_TypeInfo->static_fields;
      v32->__9__14_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__14_1;
      p__9__14_1 = (BattleServantConfConponent_o *)&v32->__9__14_1;
      goto LABEL_24;
    case 2:
      v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                              System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                              v19,
                                                                                              v20);
      v22 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__2__;
      goto LABEL_28;
    case 3:
      v18 = FieldMotionManager___c_TypeInfo;
      if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v18 = FieldMotionManager___c_TypeInfo;
      }
      v34 = v18->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v34->__9__14_3;
      if ( _9__14_1 )
        goto LABEL_25;
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v34 = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)v34->__9;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                                   v19,
                                                                                                   v20);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__14_1,
        v35,
        Method_FieldMotionManager___c__GetTransform_b__14_3__,
        (const MethodInfo_261A104 *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
      v36 = FieldMotionManager___c_TypeInfo->static_fields;
      v36->__9__14_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__14_1;
      p__9__14_1 = (BattleServantConfConponent_o *)&v36->__9__14_3;
LABEL_24:
      sub_B0D840(p__9__14_1, (System_Int32_array **)_9__14_1, v26, v27, v28, v29, v30, v31);
LABEL_25:
      if ( !this )
        goto LABEL_26;
      goto LABEL_29;
    case 4:
      v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                              System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                              v19,
                                                                                              v20);
      v22 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__4__;
      goto LABEL_28;
    case 5:
      v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                              System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                              v19,
                                                                                              v20);
      v22 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__5__;
LABEL_28:
      _9__14_1 = v21;
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v21,
        (Il2CppObject *)v17,
        *v22,
        (const MethodInfo_261A104 *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
LABEL_29:
      result = FieldMotionManager__FindLastNotNullObject_Transform_(
                 this,
                 (System_Func_BattleFieldMotionComponent__T__o *)_9__14_1,
                 (const MethodInfo_1B612DC *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  __int64 v5; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v7; // x24
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x9
  __int64 v11; // x0

  v2 = this;
  if ( (byte_421321B & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421321B = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_16:
    sub_B0D97C(this);
  v4 = 0;
  v5 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v7 = v5 - 4;
    if ( v5 - 4 >= (int)max_length )
      return v4 & 1;
    if ( v7 >= max_length )
      goto LABEL_18;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v5);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
    fieldMotionArray = v2->fields.fieldMotionArray;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !fieldMotionArray )
        goto LABEL_16;
      if ( v7 >= fieldMotionArray->max_length )
      {
LABEL_18:
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
      }
      v9 = *((_QWORD *)&fieldMotionArray->obj.klass + v5);
      if ( !v9 )
        goto LABEL_16;
      v4 |= *(_BYTE *)(v9 + 176) != 0;
    }
    ++v5;
    if ( !fieldMotionArray )
      goto LABEL_16;
  }
}


void __fastcall FieldMotionManager__PlayBattleAction(
        FieldMotionManager_o *this,
        BattleActionData_o *nowAction,
        const MethodInfo *method)
{
  System_String_o *MotionName; // x0
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  System_String_o *v8; // x20
  signed int v9; // w24
  il2cpp_array_size_t v10; // w26
  __int64 v11; // x23
  __int64 v12; // x27
  UnityEngine_Object_o *v13; // x22
  struct BattleFieldMotionComponent_array *v14; // x8
  struct BattleFieldMotionComponent_array *v15; // x8
  __int64 v16; // x0
  System_String_o *v17; // x19
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_UnityException_o *v23; // x20
  __int64 v24; // x0
  BattleActionData_o *badata; // [xsp+8h] [xbp-58h]

  if ( (byte_4213222 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, nowAction);
    byte_4213222 = 1;
  }
  badata = nowAction;
  MotionName = BattleFieldMotionComponent__GetMotionName(nowAction, 0LL);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_17;
  max_length = fieldMotionArray->max_length;
  v8 = MotionName;
  v9 = max_length - 1;
  if ( (int)(max_length - 1) < 0 )
  {
LABEL_23:
    v17 = (System_String_o *)sub_B0D8A8(&StringLiteral_245/*" not found "*/);
    v18 = (System_String_o *)sub_B0D8A8(&StringLiteral_222/*" in fieldFsm "*/);
    v19 = System_String__Concat_43852188(v17, v8, v18, 0LL);
    v20 = sub_B0D8A8(&UnityEngine_UnityException_TypeInfo);
    v23 = (UnityEngine_UnityException_o *)sub_B0D974(v20, v21, v22);
    UnityEngine_UnityException___ctor_50277352(v23, v19, 0LL);
    v24 = sub_B0D8A8(&Method_FieldMotionManager_PlayBattleAction__);
    sub_B0D948(v23, v24);
  }
  v10 = max_length - 2;
  v11 = 0LL;
  v12 = 8LL * v9 + 32;
  while ( 1 )
  {
    if ( v9 + v11 >= (unsigned __int64)fieldMotionArray->max_length )
      goto LABEL_22;
    v13 = *(UnityEngine_Object_o **)((char *)&fieldMotionArray->obj.klass + 8 * v11 + v12);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    MotionName = (System_String_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)MotionName & 1) != 0 )
    {
      v14 = this->fields.fieldMotionArray;
      if ( !v14 )
        goto LABEL_17;
      if ( v9 + v11 >= (unsigned __int64)v14->max_length )
        goto LABEL_22;
      MotionName = *(System_String_o **)((char *)&v14->obj.klass + 8 * v11 + v12);
      if ( !MotionName )
        goto LABEL_17;
      MotionName = (System_String_o *)BattleFieldMotionComponent__checkMotionEvent(
                                        (BattleFieldMotionComponent_o *)MotionName,
                                        v8,
                                        0LL);
      if ( ((unsigned __int8)MotionName & 1) != 0 )
        break;
    }
    if ( (int)(v10 + v11) < 0 )
      goto LABEL_23;
    fieldMotionArray = this->fields.fieldMotionArray;
    --v11;
    if ( !fieldMotionArray )
      goto LABEL_17;
  }
  v15 = this->fields.fieldMotionArray;
  if ( !v15 )
    goto LABEL_17;
  if ( (unsigned int)(v9 + v11) >= v15->max_length )
  {
LABEL_22:
    v16 = sub_B0D9A8(MotionName);
    sub_B0D948(v16, 0LL);
  }
  MotionName = (System_String_o *)*((_QWORD *)&v15->m_Items[v9] + v11);
  if ( !MotionName )
LABEL_17:
    sub_B0D97C(MotionName);
  BattleFieldMotionComponent__playBattleActionData((BattleFieldMotionComponent_o *)MotionName, badata, v8, 0LL);
}


void __fastcall FieldMotionManager__SendEvent(
        FieldMotionManager_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  FieldMotionManager_o *v4; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v7; // w23
  il2cpp_array_size_t v8; // w25
  __int64 v9; // x22
  __int64 v10; // x26
  UnityEngine_Object_o *v11; // x21
  struct BattleFieldMotionComponent_array *v12; // x8
  struct BattleFieldMotionComponent_array *v13; // x8
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4213223 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, str);
    byte_4213223 = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_17;
  max_length = fieldMotionArray->max_length;
  v7 = max_length - 1;
  if ( (int)(max_length - 1) >= 0 )
  {
    v8 = max_length - 2;
    v9 = 0LL;
    v10 = 8LL * (int)v7 + 32;
    while ( 1 )
    {
      if ( (int)v7 + v9 >= (unsigned __int64)fieldMotionArray->max_length )
        goto LABEL_23;
      v11 = *(UnityEngine_Object_o **)((char *)&fieldMotionArray->obj.klass + 8 * v9 + v10);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v4->fields.fieldMotionArray;
        if ( !v12 )
          goto LABEL_17;
        if ( (int)v7 + v9 >= (unsigned __int64)v12->max_length )
          goto LABEL_23;
        this = *(FieldMotionManager_o **)((char *)&v12->obj.klass + 8 * v9 + v10);
        if ( !this )
          goto LABEL_17;
        this = (FieldMotionManager_o *)BattleFieldMotionComponent__checkMotionEvent(
                                         (BattleFieldMotionComponent_o *)this,
                                         str,
                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      if ( (int)(v8 + v9) < 0 )
        return;
      fieldMotionArray = v4->fields.fieldMotionArray;
      --v9;
      if ( !fieldMotionArray )
        goto LABEL_17;
    }
    v13 = v4->fields.fieldMotionArray;
    if ( v13 )
    {
      if ( v7 + (unsigned int)v9 >= v13->max_length )
      {
LABEL_23:
        v14 = sub_B0D9A8(this);
        sub_B0D948(v14, 0LL);
      }
      this = (FieldMotionManager_o *)*((_QWORD *)&v13->m_Items[v7] + v9);
      if ( this )
      {
        BattleFieldMotionComponent__sendEvent((BattleFieldMotionComponent_o *)this, str, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B0D97C(this);
  }
}


void __fastcall FieldMotionManager__SendEvent2ActiveFM(
        FieldMotionManager_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  FieldMotionManager_o *v4; // x20
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v7; // w22
  __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  struct BattleFieldMotionComponent_array *v10; // x8
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4213224 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, str);
    byte_4213224 = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_17:
    sub_B0D97C(this);
  max_length = fieldMotionArray->max_length;
  if ( (int)(max_length - 1) >= 0 )
  {
    v7 = max_length - 2;
    v8 = (int)(max_length - 1) + 4LL;
    while ( 1 )
    {
      if ( v8 - 4 >= (unsigned __int64)fieldMotionArray->max_length )
      {
LABEL_20:
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
      }
      v9 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v8);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v10 = v4->fields.fieldMotionArray;
        if ( !v10 )
          goto LABEL_17;
        if ( v8 - 4 >= (unsigned __int64)v10->max_length )
          goto LABEL_20;
        this = (FieldMotionManager_o *)*((_QWORD *)&v10->obj.klass + v8);
        if ( !this )
          goto LABEL_17;
        if ( LOBYTE(this[4].fields.defUniqueFieldMotion) )
          break;
      }
      if ( (v7 & 0x80000000) != 0 )
        return;
      fieldMotionArray = v4->fields.fieldMotionArray;
      --v7;
      --v8;
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
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  signed int v9; // w24
  il2cpp_array_size_t v10; // w26
  System_String_o *v11; // x21
  __int64 v12; // x23
  __int64 v13; // x27
  UnityEngine_Object_o *v14; // x22
  struct BattleFieldMotionComponent_array *v15; // x8
  struct BattleFieldMotionComponent_array *v16; // x8
  __int64 v17; // x0

  if ( (byte_4213225 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, nowAction);
    byte_4213225 = 1;
  }
  if ( nowAction )
  {
    MotionName = BattleFieldMotionComponent__GetMotionName(nowAction, 0LL);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_18;
    max_length = fieldMotionArray->max_length;
    v9 = max_length - 1;
    if ( (int)(max_length - 1) >= 0 )
    {
      v10 = max_length - 2;
      v11 = MotionName;
      v12 = 0LL;
      v13 = 8LL * v9 + 32;
      while ( 1 )
      {
        if ( v9 + v12 >= (unsigned __int64)fieldMotionArray->max_length )
          goto LABEL_24;
        v14 = *(UnityEngine_Object_o **)((char *)&fieldMotionArray->obj.klass + 8 * v12 + v13);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        MotionName = (System_String_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)MotionName & 1) != 0 )
        {
          v15 = this->fields.fieldMotionArray;
          if ( !v15 )
            goto LABEL_18;
          if ( v9 + v12 >= (unsigned __int64)v15->max_length )
            goto LABEL_24;
          MotionName = *(System_String_o **)((char *)&v15->obj.klass + 8 * v12 + v13);
          if ( !MotionName )
            goto LABEL_18;
          MotionName = (System_String_o *)BattleFieldMotionComponent__checkMotionEvent(
                                            (BattleFieldMotionComponent_o *)MotionName,
                                            v11,
                                            0LL);
          if ( ((unsigned __int8)MotionName & 1) != 0 )
            break;
        }
        if ( (int)(v10 + v12) < 0 )
          return;
        fieldMotionArray = this->fields.fieldMotionArray;
        --v12;
        if ( !fieldMotionArray )
          goto LABEL_18;
      }
      v16 = this->fields.fieldMotionArray;
      if ( v16 )
      {
        if ( (unsigned int)(v9 + v12) >= v16->max_length )
        {
LABEL_24:
          v17 = sub_B0D9A8(MotionName);
          sub_B0D948(v17, 0LL);
        }
        MotionName = (System_String_o *)*((_QWORD *)&v16->m_Items[v9] + v12);
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion((BattleFieldMotionComponent_o *)MotionName, active, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B0D97C(MotionName);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetTacticBg(FieldMotionManager_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  FieldMotionManager___c_c *v10; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__10_0; // x21
  Il2CppObject *v13; // x22
  struct FieldMotionManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *LastNotNullObject_Transform; // x20

  if ( (byte_421321C & 1) == 0 )
  {
    sub_B0D8A4(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, flg);
    sub_B0D8A4(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_FieldMotionManager___c__SetTacticBg_b__10_0__, v8);
    sub_B0D8A4(&FieldMotionManager___c_TypeInfo, v9);
    byte_421321C = 1;
  }
  v10 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v10 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                 System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                                                                 flg,
                                                                                                 method);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__10_0,
      v13,
      Method_FieldMotionManager___c__SetTacticBg_b__10_0__,
      (const MethodInfo_261A104 *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v14 = FieldMotionManager___c_TypeInfo->static_fields;
    v14->__9__10_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__10_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !this )
    goto LABEL_19;
  LastNotNullObject_Transform = (UnityEngine_Object_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                          this,
                                                          (System_Func_BattleFieldMotionComponent__T__o *)_9__10_0,
                                                          (const MethodInfo_1B612DC *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (FieldMotionManager___c_c *)UnityEngine_Object__op_Inequality(LastNotNullObject_Transform, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( LastNotNullObject_Transform )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LastNotNullObject_Transform, flg, 0LL);
      return;
    }
LABEL_19:
    sub_B0D97C(v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_1B61430 *method)
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
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  PlayMakerFSM_o *fsmTemplate; // x0
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x8
  PlayMakerFSM_o *v23; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v25; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v28; // x0
  PlayMakerFSM_o *v29; // x22
  Il2CppClass *_1_T; // x23
  __int64 v31; // x0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  Il2CppType *v39; // x23
  System_Type_o *v40; // x23
  System_Type_o *v41; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v42; // x22
  Il2CppClass *v43; // x23
  __int64 v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  Il2CppType *v46; // x23
  System_Type_o *v47; // x23
  System_Type_o *v48; // x0
  PlayMakerFSM_o *v49; // x22
  System_String_o *v50; // x0
  Il2CppType *v51; // x23
  System_Type_o *v52; // x23
  System_Type_o *v53; // x0
  PlayMakerFSM_o *v54; // x22
  System_String_o *v55; // x23
  __int64 v56; // x0
  char v57[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v58[4]; // [xsp+8h] [xbp-58h] BYREF
  char v59[4]; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeTypeHandle_o v60; // 0:w0.4
  System_RuntimeTypeHandle_o v61; // 0:w0.4
  System_RuntimeTypeHandle_o v62; // 0:w0.4
  System_RuntimeTypeHandle_o v63; // 0:w0.4
  System_RuntimeTypeHandle_o v64; // 0:w0.4
  System_RuntimeTypeHandle_o v65; // 0:w0.4
  System_RuntimeTypeHandle_o v66; // 0:w0.4
  System_RuntimeTypeHandle_o v67; // 0:w0.4

  v59[0] = value;
  if ( (byte_4216D69 & 1) == 0 )
  {
    sub_B0D8A4(&bool_var, variableName);
    sub_B0D8A4(&bool_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_GameObject_var, v8);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v9);
    sub_B0D8A4(&int_var, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&string_var, v17);
    sub_B0D8A4(&string_TypeInfo, v18);
    sub_B0D8A4(&System_Type_TypeInfo, v19);
    byte_4216D69 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                                                                  variableName,
                                                                                                  value);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v20
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldMotionArray,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.defUniqueFieldMotion,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__),
        (fsmTemplate = (PlayMakerFSM_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_61:
    sub_B0D97C(fsmTemplate);
  }
  fsm = fsmTemplate->fields.fsm;
  v23 = fsmTemplate;
  if ( (int)fsm >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)fsm; ++i )
    {
      if ( i >= (unsigned int)fsm )
      {
        v56 = sub_B0D9A8(fsmTemplate);
        sub_B0D948(v56, 0LL);
      }
      v25 = (UnityEngine_Object_o *)*((_QWORD *)&v23->fields.fsmTemplate + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsmTemplate = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)fsmTemplate & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v60.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v60, 0LL);
        v61.fields.value = (int)string_var;
        v28 = System_Type__GetTypeFromHandle(v61, 0LL);
        fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v28, 0LL);
        if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_61;
          fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
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
            v29 = fsmTemplate;
            v58[0] = v59[0];
            _1_T = method->rgctx_data->_1_T;
            if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
              sub_AA65A4(method->rgctx_data->_1_T);
            v31 = j_il2cpp_value_box_0(_1_T, v58);
            v32 = (System_Int32_array **)sub_B0D964(v31, string_TypeInfo);
            v29[1].klass = (PlayMakerFSM_c *)v32;
            sub_B0D840((BattleServantConfConponent_o *)&v29[1], v32, v33, v34, v35, v36, v37, v38);
          }
        }
        else
        {
          v39 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v62.fields.value = (int)v39;
          v40 = System_Type__GetTypeFromHandle(v62, 0LL);
          v63.fields.value = (int)UnityEngine_GameObject_var;
          v41 = System_Type__GetTypeFromHandle(v63, 0LL);
          fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v40, v41, 0LL);
          if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_61;
            fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
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
              v42 = (HutongGames_PlayMaker_FsmGameObject_o *)fsmTemplate;
              v57[0] = v59[0];
              v43 = method->rgctx_data->_1_T;
              if ( (BYTE2(v43->vtable[0].methodPtr) & 1) == 0 )
                sub_AA65A4(method->rgctx_data->_1_T);
              v44 = j_il2cpp_value_box_0(v43, v57);
              v45 = (UnityEngine_GameObject_o *)sub_B0D964(v44, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v42, v45, 0LL);
            }
          }
          else
          {
            v46 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v64.fields.value = (int)v46;
            v47 = System_Type__GetTypeFromHandle(v64, 0LL);
            v65.fields.value = (int)int_var;
            v48 = System_Type__GetTypeFromHandle(v65, 0LL);
            fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v47, v48, 0LL);
            if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_61;
              fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
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
                v49 = fsmTemplate;
                v50 = System_Boolean__ToString((bool)v59, 0LL);
                fsmTemplate = (PlayMakerFSM_o *)System_Int32__Parse(v50, 0LL);
                LODWORD(v49[1].klass) = (_DWORD)fsmTemplate;
              }
            }
            else
            {
              v51 = method->rgctx_data->_0_T;
              if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Type_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              }
              v66.fields.value = (int)v51;
              v52 = System_Type__GetTypeFromHandle(v66, 0LL);
              v67.fields.value = (int)bool_var;
              v53 = System_Type__GetTypeFromHandle(v67, 0LL);
              fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v52, v53, 0LL);
              if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
              {
                if ( !v25 )
                  goto LABEL_61;
                fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
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
                  v54 = fsmTemplate;
                  v55 = System_Boolean__ToString((bool)v59, 0LL);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  fsmTemplate = (PlayMakerFSM_o *)System_Boolean__Parse(v55, 0LL);
                  LOBYTE(v54[1].klass) = (unsigned __int8)fsmTemplate & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(fsm) = v23->fields.fsm;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_1B61998 *method)
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
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  PlayMakerFSM_o *fsmTemplate; // x0
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x8
  PlayMakerFSM_o *v23; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v25; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v28; // x0
  PlayMakerFSM_o *v29; // x22
  Il2CppClass *_1_T; // x23
  __int64 v31; // x0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  Il2CppType *v39; // x23
  System_Type_o *v40; // x23
  System_Type_o *v41; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v42; // x22
  Il2CppClass *v43; // x23
  __int64 v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  Il2CppType *v46; // x23
  System_Type_o *v47; // x23
  System_Type_o *v48; // x0
  PlayMakerFSM_o *v49; // x22
  System_String_o *v50; // x0
  Il2CppType *v51; // x23
  System_Type_o *v52; // x23
  System_Type_o *v53; // x0
  PlayMakerFSM_o *v54; // x22
  System_String_o *v55; // x23
  __int64 v56; // x0
  int32_t v57; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v58; // [xsp+8h] [xbp-58h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeTypeHandle_o v60; // 0:w0.4
  System_RuntimeTypeHandle_o v61; // 0:w0.4
  System_RuntimeTypeHandle_o v62; // 0:w0.4
  System_RuntimeTypeHandle_o v63; // 0:w0.4
  System_RuntimeTypeHandle_o v64; // 0:w0.4
  System_RuntimeTypeHandle_o v65; // 0:w0.4
  System_RuntimeTypeHandle_o v66; // 0:w0.4
  System_RuntimeTypeHandle_o v67; // 0:w0.4

  v59 = value;
  if ( (byte_4216D6A & 1) == 0 )
  {
    sub_B0D8A4(&bool_var, variableName);
    sub_B0D8A4(&bool_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_GameObject_var, v8);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v9);
    sub_B0D8A4(&int_var, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&string_var, v17);
    sub_B0D8A4(&string_TypeInfo, v18);
    sub_B0D8A4(&System_Type_TypeInfo, v19);
    byte_4216D6A = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                                                                  variableName,
                                                                                                  *(_QWORD *)&value);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v20
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldMotionArray,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.defUniqueFieldMotion,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__),
        (fsmTemplate = (PlayMakerFSM_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_61:
    sub_B0D97C(fsmTemplate);
  }
  fsm = fsmTemplate->fields.fsm;
  v23 = fsmTemplate;
  if ( (int)fsm >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)fsm; ++i )
    {
      if ( i >= (unsigned int)fsm )
      {
        v56 = sub_B0D9A8(fsmTemplate);
        sub_B0D948(v56, 0LL);
      }
      v25 = (UnityEngine_Object_o *)*((_QWORD *)&v23->fields.fsmTemplate + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsmTemplate = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)fsmTemplate & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v60.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v60, 0LL);
        v61.fields.value = (int)string_var;
        v28 = System_Type__GetTypeFromHandle(v61, 0LL);
        fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v28, 0LL);
        if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_61;
          fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
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
            v29 = fsmTemplate;
            v58 = v59;
            _1_T = method->rgctx_data->_1_T;
            if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
              sub_AA65A4(method->rgctx_data->_1_T);
            v31 = j_il2cpp_value_box_0(_1_T, &v58);
            v32 = (System_Int32_array **)sub_B0D964(v31, string_TypeInfo);
            v29[1].klass = (PlayMakerFSM_c *)v32;
            sub_B0D840((BattleServantConfConponent_o *)&v29[1], v32, v33, v34, v35, v36, v37, v38);
          }
        }
        else
        {
          v39 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v62.fields.value = (int)v39;
          v40 = System_Type__GetTypeFromHandle(v62, 0LL);
          v63.fields.value = (int)UnityEngine_GameObject_var;
          v41 = System_Type__GetTypeFromHandle(v63, 0LL);
          fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v40, v41, 0LL);
          if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_61;
            fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
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
              v42 = (HutongGames_PlayMaker_FsmGameObject_o *)fsmTemplate;
              v57 = v59;
              v43 = method->rgctx_data->_1_T;
              if ( (BYTE2(v43->vtable[0].methodPtr) & 1) == 0 )
                sub_AA65A4(method->rgctx_data->_1_T);
              v44 = j_il2cpp_value_box_0(v43, &v57);
              v45 = (UnityEngine_GameObject_o *)sub_B0D964(v44, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v42, v45, 0LL);
            }
          }
          else
          {
            v46 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v64.fields.value = (int)v46;
            v47 = System_Type__GetTypeFromHandle(v64, 0LL);
            v65.fields.value = (int)int_var;
            v48 = System_Type__GetTypeFromHandle(v65, 0LL);
            fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v47, v48, 0LL);
            if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_61;
              fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
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
                v49 = fsmTemplate;
                v50 = System_Int32__ToString((int32_t)&v59, 0LL);
                fsmTemplate = (PlayMakerFSM_o *)System_Int32__Parse(v50, 0LL);
                LODWORD(v49[1].klass) = (_DWORD)fsmTemplate;
              }
            }
            else
            {
              v51 = method->rgctx_data->_0_T;
              if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Type_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              }
              v66.fields.value = (int)v51;
              v52 = System_Type__GetTypeFromHandle(v66, 0LL);
              v67.fields.value = (int)bool_var;
              v53 = System_Type__GetTypeFromHandle(v67, 0LL);
              fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v52, v53, 0LL);
              if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
              {
                if ( !v25 )
                  goto LABEL_61;
                fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v25, 0LL);
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
                  v54 = fsmTemplate;
                  v55 = System_Int32__ToString((int32_t)&v59, 0LL);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  fsmTemplate = (PlayMakerFSM_o *)System_Boolean__Parse(v55, 0LL);
                  LOBYTE(v54[1].klass) = (unsigned __int8)fsmTemplate & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(fsm) = v23->fields.fsm;
    }
  }
}


void __fastcall FieldMotionManager__SetVariables_string_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        System_String_o *value,
        const MethodInfo_1B61EFC *method)
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
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x23
  PlayMakerFSM_o *fsmTemplate; // x0
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x8
  PlayMakerFSM_o *v24; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v26; // x23
  Il2CppType *_0_T; // x24
  System_Type_o *TypeFromHandle; // x24
  System_Type_o *v29; // x0
  PlayMakerFSM_o *v30; // x23
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  Il2CppType *v38; // x24
  System_Type_o *v39; // x24
  System_Type_o *v40; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v41; // x23
  UnityEngine_GameObject_o *v42; // x0
  Il2CppType *v43; // x24
  System_Type_o *v44; // x24
  System_Type_o *v45; // x0
  PlayMakerFSM_o *v46; // x23
  System_String_o *v47; // x0
  Il2CppType *v48; // x24
  System_Type_o *v49; // x24
  System_Type_o *v50; // x0
  PlayMakerFSM_o *v51; // x23
  System_String_o *v52; // x24
  __int64 v53; // x0
  System_RuntimeTypeHandle_o v54; // 0:w0.4
  System_RuntimeTypeHandle_o v55; // 0:w0.4
  System_RuntimeTypeHandle_o v56; // 0:w0.4
  System_RuntimeTypeHandle_o v57; // 0:w0.4
  System_RuntimeTypeHandle_o v58; // 0:w0.4
  System_RuntimeTypeHandle_o v59; // 0:w0.4
  System_RuntimeTypeHandle_o v60; // 0:w0.4
  System_RuntimeTypeHandle_o v61; // 0:w0.4

  if ( (byte_4216D6B & 1) == 0 )
  {
    sub_B0D8A4(&bool_var, variableName);
    sub_B0D8A4(&bool_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_GameObject_var, v9);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v10);
    sub_B0D8A4(&int_var, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&string_var, v18);
    sub_B0D8A4(&string_TypeInfo, v19);
    sub_B0D8A4(&System_Type_TypeInfo, v20);
    byte_4216D6B = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                                                                  variableName,
                                                                                                  value);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v21
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldMotionArray,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.defUniqueFieldMotion,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__),
        (fsmTemplate = (PlayMakerFSM_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_59:
    sub_B0D97C(fsmTemplate);
  }
  fsm = fsmTemplate->fields.fsm;
  v24 = fsmTemplate;
  if ( (int)fsm >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)fsm; ++i )
    {
      if ( i >= (unsigned int)fsm )
      {
        v53 = sub_B0D9A8(fsmTemplate);
        sub_B0D948(v53, 0LL);
      }
      v26 = (UnityEngine_Object_o *)*((_QWORD *)&v24->fields.fsmTemplate + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsmTemplate = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
      if ( ((unsigned __int8)fsmTemplate & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v54.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v54, 0LL);
        v55.fields.value = (int)string_var;
        v29 = System_Type__GetTypeFromHandle(v55, 0LL);
        fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v29, 0LL);
        if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_59;
          fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v26, 0LL);
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
            v30 = fsmTemplate;
            v31 = (System_Int32_array **)sub_B0D964(value, string_TypeInfo);
            v30[1].klass = (PlayMakerFSM_c *)v31;
            sub_B0D840((BattleServantConfConponent_o *)&v30[1], v31, v32, v33, v34, v35, v36, v37);
          }
        }
        else
        {
          v38 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v56.fields.value = (int)v38;
          v39 = System_Type__GetTypeFromHandle(v56, 0LL);
          v57.fields.value = (int)UnityEngine_GameObject_var;
          v40 = System_Type__GetTypeFromHandle(v57, 0LL);
          fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v39, v40, 0LL);
          if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
          {
            if ( !v26 )
              goto LABEL_59;
            fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v26, 0LL);
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
              v41 = (HutongGames_PlayMaker_FsmGameObject_o *)fsmTemplate;
              v42 = (UnityEngine_GameObject_o *)sub_B0D964(value, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v41, v42, 0LL);
            }
          }
          else
          {
            v43 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v58.fields.value = (int)v43;
            v44 = System_Type__GetTypeFromHandle(v58, 0LL);
            v59.fields.value = (int)int_var;
            v45 = System_Type__GetTypeFromHandle(v59, 0LL);
            fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v44, v45, 0LL);
            if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
            {
              if ( !v26 )
                goto LABEL_59;
              fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v26, 0LL);
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
                v46 = fsmTemplate;
                v47 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                           value,
                                           value->klass->vtable._4_CompareTo.methodPtr);
                fsmTemplate = (PlayMakerFSM_o *)System_Int32__Parse(v47, 0LL);
                LODWORD(v46[1].klass) = (_DWORD)fsmTemplate;
              }
            }
            else
            {
              v48 = method->rgctx_data->_0_T;
              if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Type_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              }
              v60.fields.value = (int)v48;
              v49 = System_Type__GetTypeFromHandle(v60, 0LL);
              v61.fields.value = (int)bool_var;
              v50 = System_Type__GetTypeFromHandle(v61, 0LL);
              fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v49, v50, 0LL);
              if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
              {
                if ( !v26 )
                  goto LABEL_59;
                fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v26, 0LL);
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
                  v51 = fsmTemplate;
                  v52 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                             value,
                                             value->klass->vtable._4_CompareTo.methodPtr);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  fsmTemplate = (PlayMakerFSM_o *)System_Boolean__Parse(v52, 0LL);
                  LOBYTE(v51[1].klass) = (unsigned __int8)fsmTemplate & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(fsm) = v24->fields.fsm;
    }
  }
}


void __fastcall FieldMotionManager__SwitchUniqueFieldMotion(
        FieldMotionManager_o *this,
        bool isDisable,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x21
  FieldMotionManager_o *v9; // x19
  System_Int32_array **defUniqueFieldMotion; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  unsigned int *v18; // x24
  unsigned __int64 v19; // x22
  __int64 v20; // x23
  unsigned __int64 v21; // x8
  System_Int32_array **v22; // x21
  struct BattleFieldMotionComponent_array *retentionFieldMotionArray; // x9
  __int64 v24; // x0
  __int64 v25; // x0

  fieldMotionArray = this->fields.fieldMotionArray;
  v9 = this;
  if ( isDisable )
  {
    defUniqueFieldMotion = 0LL;
    if ( !fieldMotionArray )
      goto LABEL_20;
  }
  else
  {
    defUniqueFieldMotion = (System_Int32_array **)this->fields.defUniqueFieldMotion;
    if ( !fieldMotionArray )
      goto LABEL_20;
  }
  if ( defUniqueFieldMotion )
  {
    this = (FieldMotionManager_o *)sub_B0D964(defUniqueFieldMotion, fieldMotionArray->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_23:
      v25 = sub_B0D99C();
      sub_B0D948(v25, 0LL);
    }
  }
  if ( fieldMotionArray->max_length <= 1 )
  {
LABEL_22:
    v24 = sub_B0D9A8(this);
    sub_B0D948(v24, 0LL);
  }
  fieldMotionArray->m_Items[1] = (BattleFieldMotionComponent_o *)defUniqueFieldMotion;
  sub_B0D840(
    (BattleServantConfConponent_o *)&fieldMotionArray->m_Items[1],
    defUniqueFieldMotion,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = (unsigned int *)v9->fields.fieldMotionArray;
  if ( !v18 )
LABEL_20:
    sub_B0D97C(this);
  v19 = 1LL;
  v20 = 10LL;
  while ( 1 )
  {
    v21 = v18[6];
    if ( (__int64)v19 >= (int)v21 )
      break;
    if ( isDisable )
    {
      v22 = 0LL;
    }
    else
    {
      retentionFieldMotionArray = v9->fields.retentionFieldMotionArray;
      if ( !retentionFieldMotionArray )
        goto LABEL_20;
      if ( v19 >= retentionFieldMotionArray->max_length )
        goto LABEL_22;
      v22 = *(System_Int32_array ***)((char *)&retentionFieldMotionArray->obj.klass + v20 * 4);
      if ( v22 )
      {
        this = (FieldMotionManager_o *)sub_B0D964(
                                         *(Il2CppClass **)((char *)&retentionFieldMotionArray->obj.klass + v20 * 4),
                                         *(_QWORD *)(*(_QWORD *)v18 + 64LL));
        if ( !this )
          goto LABEL_23;
        v21 = v18[6];
      }
    }
    if ( v19 >= v21 )
      goto LABEL_22;
    *(_QWORD *)&v18[v20] = v22;
    sub_B0D840((BattleServantConfConponent_o *)&v18[v20], v22, v12, v13, v14, v15, v16, v17);
    v18 = (unsigned int *)v9->fields.fieldMotionArray;
    ++v19;
    v20 += 2LL;
    if ( !v18 )
      goto LABEL_20;
  }
}


void __fastcall FieldMotionManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct FieldMotionManager___c_StaticFields *static_fields; // x0

  if ( (byte_4210F44 & 1) == 0 )
  {
    sub_B0D8A4(&FieldMotionManager___c_TypeInfo, v1);
    byte_4210F44 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(FieldMotionManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = FieldMotionManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FieldMotionManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall FieldMotionManager___c___ctor(FieldMotionManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetEnemyStage_b__12_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetPlayerStage_b__11_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__14_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__14_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___SetTacticBg_b__10_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return comp->fields.tacticBg;
}


void __fastcall FieldMotionManager___c__DisplayClass13_0___ctor(
        FieldMotionManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c__DisplayClass13_0___GetGameObject_b__0(
        FieldMotionManager___c__DisplayClass13_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return BattleFieldMotionComponent__getGameObject(comp, this->fields.name, 0LL);
}


void __fastcall FieldMotionManager___c__DisplayClass14_0___ctor(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__0(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return BattleFieldMotionComponent__getEnemyTacticalTr(comp, this->fields.index, 0LL);
}


void __fastcall FieldMotionManager___c__DisplayClass15_0___ctor(
        FieldMotionManager___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass15_0___GetTargetTransform_b__0(
        FieldMotionManager___c__DisplayClass15_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B0D97C(this);
  return BattleFieldMotionComponent__GetTargetTr(comp, this->fields.type, this->fields.index, 0LL);
}