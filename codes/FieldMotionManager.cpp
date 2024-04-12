void __fastcall FieldMotionManager___ctor(
        FieldMotionManager_o *this,
        BattleFieldMotionComponent_array *fieldMotions,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  FieldMotionManager_Fields *p_fields; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
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

  if ( (byte_42AE996 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_BattleFieldMotionComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE996 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)fieldMotions,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_16:
    sub_B52A5C(fieldMotionArray, v14);
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
        v36 = sub_B52A88(fieldMotionArray);
        sub_B52A28(v36, 0LL);
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
                                                 (const MethodInfo_1A43FCC *)Method_BasicHelper_IndexValue_BattleFieldMotionComponent___);
  this->fields.defUniqueFieldMotion = v21;
  p_defUniqueFieldMotion = &this->fields.defUniqueFieldMotion;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)(p_defUniqueFieldMotion + 1), v29, v30, v31, v32, v33, v34, v35);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager__FindLastNotNullObject_Transform_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_1B798EC *method)
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
  if ( (byte_42B1FAF & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1FAF = 1;
  }
  fieldMotionArray = v5->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_20:
    sub_B52A5C(this, getObjectFunc);
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
      v14 = sub_B52A88(this);
      sub_B52A28(v14, 0LL);
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
  FieldMotionManager___c_c *v3; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__12_0; // x20
  Il2CppObject *v6; // x21
  struct FieldMotionManager___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_42AE99A & 1) == 0 )
  {
    sub_B52984(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_B52984(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    sub_B52984(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_FieldMotionManager___c__GetEnemyStage_b__12_0__);
    sub_B52984(&FieldMotionManager___c_TypeInfo);
    byte_42AE99A = 1;
  }
  v3 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v3 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__12_0,
      v6,
      Method_FieldMotionManager___c__GetEnemyStage_b__12_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v7 = FieldMotionManager___c_TypeInfo->static_fields;
    v7->__9__12_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__12_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v7->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !this )
    sub_B52A5C(v3, method);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)_9__12_0,
                                                              (const MethodInfo_1B798EC *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v14; // x20
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_42AE99B & 1) == 0 )
  {
    sub_B52984(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_B52984(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    sub_B52984(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_FieldMotionManager___c__DisplayClass13_0__GetGameObject_b__0__);
    sub_B52984(&FieldMotionManager___c__DisplayClass13_0_TypeInfo);
    byte_42AE99B = 1;
  }
  v5 = sub_B52A54(FieldMotionManager___c__DisplayClass13_0_TypeInfo);
  FieldMotionManager___c__DisplayClass13_0___ctor((FieldMotionManager___c__DisplayClass13_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = name;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)name, v8, v9, v10, v11, v12, v13);
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_FieldMotionManager___c__DisplayClass13_0__GetGameObject_b__0__,
    (const MethodInfo_2BCA808 *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)v14,
                                                              (const MethodInfo_1B798EC *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  FieldMotionManager___c_c *v3; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__11_0; // x20
  Il2CppObject *v6; // x21
  struct FieldMotionManager___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_42AE999 & 1) == 0 )
  {
    sub_B52984(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_B52984(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    sub_B52984(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_FieldMotionManager___c__GetPlayerStage_b__11_0__);
    sub_B52984(&FieldMotionManager___c_TypeInfo);
    byte_42AE999 = 1;
  }
  v3 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v3 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__11_0,
      v6,
      Method_FieldMotionManager___c__GetPlayerStage_b__11_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v7 = FieldMotionManager___c_TypeInfo->static_fields;
    v7->__9__11_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__11_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v7->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !this )
    sub_B52A5C(v3, method);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)_9__11_0,
                                                              (const MethodInfo_1B798EC *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  FieldMotionManager___c__DisplayClass15_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v10; // x20
  UnityEngine_Transform_o *LastNotNullObject_Transform; // x19

  if ( (byte_42AE99D & 1) == 0 )
  {
    sub_B52984(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_B52984(&Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
    sub_B52984(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_FieldMotionManager___c__DisplayClass15_0__GetTargetTransform_b__0__);
    sub_B52984(&FieldMotionManager___c__DisplayClass15_0_TypeInfo);
    byte_42AE99D = 1;
  }
  v7 = (FieldMotionManager___c__DisplayClass15_0_o *)sub_B52A54(FieldMotionManager___c__DisplayClass15_0_TypeInfo);
  FieldMotionManager___c__DisplayClass15_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.type = type;
  v7->fields.index = index;
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_FieldMotionManager___c__DisplayClass15_0__GetTargetTransform_b__0__,
    (const MethodInfo_2BCA808 *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
  LastNotNullObject_Transform = FieldMotionManager__FindLastNotNullObject_Transform_(
                                  this,
                                  (System_Func_BattleFieldMotionComponent__T__o *)v10,
                                  (const MethodInfo_1B798EC *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  FieldMotionManager___c__DisplayClass14_0_o *v7; // x22
  FieldMotionManager___c_c *v8; // x0
  __int64 v9; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v10; // x0
  __int64 *v11; // x8
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__14_1; // x20
  Il2CppObject *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct FieldMotionManager___c_StaticFields *v21; // x0
  BattleServantConfConponent_o *p__9__14_1; // x0
  struct FieldMotionManager___c_StaticFields *v23; // x8
  Il2CppObject *v24; // x21
  struct FieldMotionManager___c_StaticFields *v25; // x0
  UnityEngine_Transform_o *result; // x0

  if ( (byte_42AE99C & 1) == 0 )
  {
    sub_B52984(&Method_FieldMotionManager_FindLastNotNullObject_Transform___);
    sub_B52984(&Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
    sub_B52984(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
    sub_B52984(&Method_FieldMotionManager___c__GetTransform_b__14_1__);
    sub_B52984(&Method_FieldMotionManager___c__GetTransform_b__14_3__);
    sub_B52984(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__0__);
    sub_B52984(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__2__);
    sub_B52984(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__4__);
    sub_B52984(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__5__);
    sub_B52984(&FieldMotionManager___c__DisplayClass14_0_TypeInfo);
    sub_B52984(&FieldMotionManager___c_TypeInfo);
    byte_42AE99C = 1;
  }
  v7 = (FieldMotionManager___c__DisplayClass14_0_o *)sub_B52A54(FieldMotionManager___c__DisplayClass14_0_TypeInfo);
  FieldMotionManager___c__DisplayClass14_0___ctor(v7, 0LL);
  if ( !v7 )
LABEL_26:
    sub_B52A5C(v8, v9);
  v7->fields.index = index;
  switch ( type )
  {
    case 0:
      v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__0__;
      goto LABEL_28;
    case 1:
      v8 = FieldMotionManager___c_TypeInfo;
      if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      static_fields = v8->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__14_1;
      if ( _9__14_1 )
        goto LABEL_25;
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__14_1,
        v14,
        Method_FieldMotionManager___c__GetTransform_b__14_1__,
        (const MethodInfo_2BCA808 *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
      v21 = FieldMotionManager___c_TypeInfo->static_fields;
      v21->__9__14_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__14_1;
      p__9__14_1 = (BattleServantConfConponent_o *)&v21->__9__14_1;
      goto LABEL_24;
    case 2:
      v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__2__;
      goto LABEL_28;
    case 3:
      v8 = FieldMotionManager___c_TypeInfo;
      if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v8 = FieldMotionManager___c_TypeInfo;
      }
      v23 = v8->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v23->__9__14_3;
      if ( _9__14_1 )
        goto LABEL_25;
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v23 = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)v23->__9;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__14_1,
        v24,
        Method_FieldMotionManager___c__GetTransform_b__14_3__,
        (const MethodInfo_2BCA808 *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
      v25 = FieldMotionManager___c_TypeInfo->static_fields;
      v25->__9__14_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__14_1;
      p__9__14_1 = (BattleServantConfConponent_o *)&v25->__9__14_3;
LABEL_24:
      sub_B52920(p__9__14_1, (System_Int32_array **)_9__14_1, v15, v16, v17, v18, v19, v20);
LABEL_25:
      if ( !this )
        goto LABEL_26;
      goto LABEL_29;
    case 4:
      v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__4__;
      goto LABEL_28;
    case 5:
      v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__Transform__TypeInfo);
      v11 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__5__;
LABEL_28:
      _9__14_1 = v10;
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v10,
        (Il2CppObject *)v7,
        *v11,
        (const MethodInfo_2BCA808 *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
LABEL_29:
      result = FieldMotionManager__FindLastNotNullObject_Transform_(
                 this,
                 (System_Func_BattleFieldMotionComponent__T__o *)_9__14_1,
                 (const MethodInfo_1B798EC *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  if ( (byte_42AE997 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE997 = 1;
  }
  fieldMotionArray = v2->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_16:
    sub_B52A5C(this, method);
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
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
  __int64 v6; // x1
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  System_String_o *v9; // x20
  signed int v10; // w24
  il2cpp_array_size_t v11; // w26
  __int64 v12; // x23
  __int64 v13; // x27
  UnityEngine_Object_o *v14; // x22
  struct BattleFieldMotionComponent_array *v15; // x8
  struct BattleFieldMotionComponent_array *v16; // x8
  __int64 v17; // x0
  System_String_o *v18; // x19
  System_String_o *v19; // x0
  System_String_o *v20; // x19
  __int64 v21; // x0
  UnityEngine_UnityException_o *v22; // x20
  __int64 v23; // x0
  BattleActionData_o *badata; // [xsp+8h] [xbp-58h]

  if ( (byte_42AE99E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE99E = 1;
  }
  badata = nowAction;
  MotionName = BattleFieldMotionComponent__GetMotionName(nowAction, 0LL);
  fieldMotionArray = this->fields.fieldMotionArray;
  if ( !fieldMotionArray )
    goto LABEL_17;
  max_length = fieldMotionArray->max_length;
  v9 = MotionName;
  v10 = max_length - 1;
  if ( (int)(max_length - 1) < 0 )
  {
LABEL_23:
    v18 = (System_String_o *)sub_B52988(&StringLiteral_247/*" not found "*/);
    v19 = (System_String_o *)sub_B52988(&StringLiteral_224/*" in fieldFsm "*/);
    v20 = System_String__Concat_44570600(v18, v9, v19, 0LL);
    v21 = sub_B52988(&UnityEngine_UnityException_TypeInfo);
    v22 = (UnityEngine_UnityException_o *)sub_B52A54(v21);
    UnityEngine_UnityException___ctor_50855544(v22, v20, 0LL);
    v23 = sub_B52988(&Method_FieldMotionManager_PlayBattleAction__);
    sub_B52A28(v22, v23);
  }
  v11 = max_length - 2;
  v12 = 0LL;
  v13 = 8LL * v10 + 32;
  while ( 1 )
  {
    if ( v10 + v12 >= (unsigned __int64)fieldMotionArray->max_length )
      goto LABEL_22;
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
        goto LABEL_17;
      if ( v10 + v12 >= (unsigned __int64)v15->max_length )
        goto LABEL_22;
      MotionName = *(System_String_o **)((char *)&v15->obj.klass + 8 * v12 + v13);
      if ( !MotionName )
        goto LABEL_17;
      MotionName = (System_String_o *)BattleFieldMotionComponent__checkMotionEvent(
                                        (BattleFieldMotionComponent_o *)MotionName,
                                        v9,
                                        0LL);
      if ( ((unsigned __int8)MotionName & 1) != 0 )
        break;
    }
    if ( (int)(v11 + v12) < 0 )
      goto LABEL_23;
    fieldMotionArray = this->fields.fieldMotionArray;
    --v12;
    if ( !fieldMotionArray )
      goto LABEL_17;
  }
  v16 = this->fields.fieldMotionArray;
  if ( !v16 )
    goto LABEL_17;
  if ( (unsigned int)(v10 + v12) >= v16->max_length )
  {
LABEL_22:
    v17 = sub_B52A88(MotionName);
    sub_B52A28(v17, 0LL);
  }
  MotionName = (System_String_o *)*((_QWORD *)&v16->m_Items[v10] + v12);
  if ( !MotionName )
LABEL_17:
    sub_B52A5C(MotionName, v6);
  BattleFieldMotionComponent__playBattleActionData((BattleFieldMotionComponent_o *)MotionName, badata, v9, 0LL);
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
  if ( (byte_42AE99F & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE99F = 1;
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
        v14 = sub_B52A88(this);
        sub_B52A28(v14, 0LL);
      }
      this = (FieldMotionManager_o *)*((_QWORD *)&v13->m_Items[v7] + v9);
      if ( this )
      {
        BattleFieldMotionComponent__sendEvent((BattleFieldMotionComponent_o *)this, str, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B52A5C(this, str);
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
  if ( (byte_42AE9A0 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE9A0 = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_17:
    sub_B52A5C(this, str);
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
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

  if ( (byte_42AE9A1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE9A1 = 1;
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
          v18 = sub_B52A88(MotionName);
          sub_B52A28(v18, 0LL);
        }
        MotionName = (System_String_o *)*((_QWORD *)&v17->m_Items[v10] + v13);
        if ( MotionName )
        {
          BattleFieldMotionComponent__SetActiveMotion((BattleFieldMotionComponent_o *)MotionName, active, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B52A5C(MotionName, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetTacticBg(FieldMotionManager_o *this, bool flg, const MethodInfo *method)
{
  FieldMotionManager___c_c *v5; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__10_0; // x21
  Il2CppObject *v8; // x22
  struct FieldMotionManager___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *LastNotNullObject_Transform; // x20

  if ( (byte_42AE998 & 1) == 0 )
  {
    sub_B52984(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
    sub_B52984(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    sub_B52984(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_FieldMotionManager___c__SetTacticBg_b__10_0__);
    sub_B52984(&FieldMotionManager___c_TypeInfo);
    byte_42AE998 = 1;
  }
  v5 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v5 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleFieldMotionComponent__GameObject__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__10_0,
      v8,
      Method_FieldMotionManager___c__SetTacticBg_b__10_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v9 = FieldMotionManager___c_TypeInfo->static_fields;
    v9->__9__10_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__10_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v9->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !this )
    goto LABEL_19;
  LastNotNullObject_Transform = (UnityEngine_Object_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                          this,
                                                          (System_Func_BattleFieldMotionComponent__T__o *)_9__10_0,
                                                          (const MethodInfo_1B798EC *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (FieldMotionManager___c_c *)UnityEngine_Object__op_Inequality(LastNotNullObject_Transform, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    if ( LastNotNullObject_Transform )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LastNotNullObject_Transform, flg, 0LL);
      return;
    }
LABEL_19:
    sub_B52A5C(v5, flg);
  }
}


void __fastcall FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_1B79A40 *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  PlayMakerFSM_o *fsmTemplate; // x0
  __int64 v9; // x1
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x8
  PlayMakerFSM_o *v11; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v13; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v16; // x0
  PlayMakerFSM_o *v17; // x22
  Il2CppClass *_1_T; // x23
  __int64 v19; // x0
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppType *v27; // x23
  System_Type_o *v28; // x23
  System_Type_o *v29; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v30; // x22
  Il2CppClass *v31; // x23
  __int64 v32; // x0
  UnityEngine_GameObject_o *v33; // x0
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
  __int64 v44; // x0
  char v45[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v46[4]; // [xsp+8h] [xbp-58h] BYREF
  char v47[4]; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeTypeHandle_o v48; // 0:w0.4
  System_RuntimeTypeHandle_o v49; // 0:w0.4
  System_RuntimeTypeHandle_o v50; // 0:w0.4
  System_RuntimeTypeHandle_o v51; // 0:w0.4
  System_RuntimeTypeHandle_o v52; // 0:w0.4
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4
  System_RuntimeTypeHandle_o v55; // 0:w0.4

  v47[0] = value;
  if ( (byte_42B1FB0 & 1) == 0 )
  {
    sub_B52984(&bool_var);
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&UnityEngine_GameObject_var);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&int_var);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&string_var);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&System_Type_TypeInfo);
    byte_42B1FB0 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldMotionArray,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.defUniqueFieldMotion,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__),
        (fsmTemplate = (PlayMakerFSM_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_61:
    sub_B52A5C(fsmTemplate, v9);
  }
  fsm = fsmTemplate->fields.fsm;
  v11 = fsmTemplate;
  if ( (int)fsm >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)fsm; ++i )
    {
      if ( i >= (unsigned int)fsm )
      {
        v44 = sub_B52A88(fsmTemplate);
        sub_B52A28(v44, 0LL);
      }
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsmTemplate + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsmTemplate = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)fsmTemplate & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v48.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v48, 0LL);
        v49.fields.value = (int)string_var;
        v16 = System_Type__GetTypeFromHandle(v49, 0LL);
        fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v16, 0LL);
        if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_61;
          fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
            v17 = fsmTemplate;
            v46[0] = v47[0];
            _1_T = method->rgctx_data->_1_T;
            if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
              sub_AEB684(method->rgctx_data->_1_T);
            v19 = j_il2cpp_value_box_0(_1_T, v46);
            v20 = (System_Int32_array **)sub_B52A44(v19, string_TypeInfo);
            v17[1].klass = (PlayMakerFSM_c *)v20;
            sub_B52920((BattleServantConfConponent_o *)&v17[1], v20, v21, v22, v23, v24, v25, v26);
          }
        }
        else
        {
          v27 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v50.fields.value = (int)v27;
          v28 = System_Type__GetTypeFromHandle(v50, 0LL);
          v51.fields.value = (int)UnityEngine_GameObject_var;
          v29 = System_Type__GetTypeFromHandle(v51, 0LL);
          fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v28, v29, 0LL);
          if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_61;
            fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
              v30 = (HutongGames_PlayMaker_FsmGameObject_o *)fsmTemplate;
              v45[0] = v47[0];
              v31 = method->rgctx_data->_1_T;
              if ( (BYTE2(v31->vtable[0].methodPtr) & 1) == 0 )
                sub_AEB684(method->rgctx_data->_1_T);
              v32 = j_il2cpp_value_box_0(v31, v45);
              v33 = (UnityEngine_GameObject_o *)sub_B52A44(v32, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v30, v33, 0LL);
            }
          }
          else
          {
            v34 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v52.fields.value = (int)v34;
            v35 = System_Type__GetTypeFromHandle(v52, 0LL);
            v53.fields.value = (int)int_var;
            v36 = System_Type__GetTypeFromHandle(v53, 0LL);
            fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v35, v36, 0LL);
            if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_61;
              fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
                v37 = fsmTemplate;
                v38 = System_Boolean__ToString((bool)v47, 0LL);
                fsmTemplate = (PlayMakerFSM_o *)System_Int32__Parse(v38, 0LL);
                LODWORD(v37[1].klass) = (_DWORD)fsmTemplate;
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
              v54.fields.value = (int)v39;
              v40 = System_Type__GetTypeFromHandle(v54, 0LL);
              v55.fields.value = (int)bool_var;
              v41 = System_Type__GetTypeFromHandle(v55, 0LL);
              fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v40, v41, 0LL);
              if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_61;
                fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
                  v42 = fsmTemplate;
                  v43 = System_Boolean__ToString((bool)v47, 0LL);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  fsmTemplate = (PlayMakerFSM_o *)System_Boolean__Parse(v43, 0LL);
                  LOBYTE(v42[1].klass) = (unsigned __int8)fsmTemplate & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(fsm) = v11->fields.fsm;
    }
  }
}


void __fastcall FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_1B79FA8 *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  PlayMakerFSM_o *fsmTemplate; // x0
  __int64 v9; // x1
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x8
  PlayMakerFSM_o *v11; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v13; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v16; // x0
  PlayMakerFSM_o *v17; // x22
  Il2CppClass *_1_T; // x23
  __int64 v19; // x0
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppType *v27; // x23
  System_Type_o *v28; // x23
  System_Type_o *v29; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v30; // x22
  Il2CppClass *v31; // x23
  __int64 v32; // x0
  UnityEngine_GameObject_o *v33; // x0
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
  __int64 v44; // x0
  int32_t v45; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v46; // [xsp+8h] [xbp-58h] BYREF
  int32_t v47; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeTypeHandle_o v48; // 0:w0.4
  System_RuntimeTypeHandle_o v49; // 0:w0.4
  System_RuntimeTypeHandle_o v50; // 0:w0.4
  System_RuntimeTypeHandle_o v51; // 0:w0.4
  System_RuntimeTypeHandle_o v52; // 0:w0.4
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4
  System_RuntimeTypeHandle_o v55; // 0:w0.4

  v47 = value;
  if ( (byte_42B1FB1 & 1) == 0 )
  {
    sub_B52984(&bool_var);
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&UnityEngine_GameObject_var);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&int_var);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&string_var);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&System_Type_TypeInfo);
    byte_42B1FB1 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v7
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldMotionArray,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.defUniqueFieldMotion,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__),
        (fsmTemplate = (PlayMakerFSM_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_61:
    sub_B52A5C(fsmTemplate, v9);
  }
  fsm = fsmTemplate->fields.fsm;
  v11 = fsmTemplate;
  if ( (int)fsm >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)fsm; ++i )
    {
      if ( i >= (unsigned int)fsm )
      {
        v44 = sub_B52A88(fsmTemplate);
        sub_B52A28(v44, 0LL);
      }
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields.fsmTemplate + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsmTemplate = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)fsmTemplate & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v48.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v48, 0LL);
        v49.fields.value = (int)string_var;
        v16 = System_Type__GetTypeFromHandle(v49, 0LL);
        fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v16, 0LL);
        if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_61;
          fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
            v17 = fsmTemplate;
            v46 = v47;
            _1_T = method->rgctx_data->_1_T;
            if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
              sub_AEB684(method->rgctx_data->_1_T);
            v19 = j_il2cpp_value_box_0(_1_T, &v46);
            v20 = (System_Int32_array **)sub_B52A44(v19, string_TypeInfo);
            v17[1].klass = (PlayMakerFSM_c *)v20;
            sub_B52920((BattleServantConfConponent_o *)&v17[1], v20, v21, v22, v23, v24, v25, v26);
          }
        }
        else
        {
          v27 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v50.fields.value = (int)v27;
          v28 = System_Type__GetTypeFromHandle(v50, 0LL);
          v51.fields.value = (int)UnityEngine_GameObject_var;
          v29 = System_Type__GetTypeFromHandle(v51, 0LL);
          fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v28, v29, 0LL);
          if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_61;
            fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
              v30 = (HutongGames_PlayMaker_FsmGameObject_o *)fsmTemplate;
              v45 = v47;
              v31 = method->rgctx_data->_1_T;
              if ( (BYTE2(v31->vtable[0].methodPtr) & 1) == 0 )
                sub_AEB684(method->rgctx_data->_1_T);
              v32 = j_il2cpp_value_box_0(v31, &v45);
              v33 = (UnityEngine_GameObject_o *)sub_B52A44(v32, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v30, v33, 0LL);
            }
          }
          else
          {
            v34 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v52.fields.value = (int)v34;
            v35 = System_Type__GetTypeFromHandle(v52, 0LL);
            v53.fields.value = (int)int_var;
            v36 = System_Type__GetTypeFromHandle(v53, 0LL);
            fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v35, v36, 0LL);
            if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_61;
              fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
                v37 = fsmTemplate;
                v38 = System_Int32__ToString((int32_t)&v47, 0LL);
                fsmTemplate = (PlayMakerFSM_o *)System_Int32__Parse(v38, 0LL);
                LODWORD(v37[1].klass) = (_DWORD)fsmTemplate;
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
              v54.fields.value = (int)v39;
              v40 = System_Type__GetTypeFromHandle(v54, 0LL);
              v55.fields.value = (int)bool_var;
              v41 = System_Type__GetTypeFromHandle(v55, 0LL);
              fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v40, v41, 0LL);
              if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_61;
                fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v13, 0LL);
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
                  v42 = fsmTemplate;
                  v43 = System_Int32__ToString((int32_t)&v47, 0LL);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  fsmTemplate = (PlayMakerFSM_o *)System_Boolean__Parse(v43, 0LL);
                  LOBYTE(v42[1].klass) = (unsigned __int8)fsmTemplate & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(fsm) = v11->fields.fsm;
    }
  }
}


void __fastcall FieldMotionManager__SetVariables_string_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        System_String_o *value,
        const MethodInfo_1B7A50C *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  PlayMakerFSM_o *fsmTemplate; // x0
  __int64 v10; // x1
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x8
  PlayMakerFSM_o *v12; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v14; // x23
  Il2CppType *_0_T; // x24
  System_Type_o *TypeFromHandle; // x24
  System_Type_o *v17; // x0
  PlayMakerFSM_o *v18; // x23
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  Il2CppType *v26; // x24
  System_Type_o *v27; // x24
  System_Type_o *v28; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v29; // x23
  UnityEngine_GameObject_o *v30; // x0
  Il2CppType *v31; // x24
  System_Type_o *v32; // x24
  System_Type_o *v33; // x0
  PlayMakerFSM_o *v34; // x23
  System_String_o *v35; // x0
  Il2CppType *v36; // x24
  System_Type_o *v37; // x24
  System_Type_o *v38; // x0
  PlayMakerFSM_o *v39; // x23
  System_String_o *v40; // x24
  __int64 v41; // x0
  System_RuntimeTypeHandle_o v42; // 0:w0.4
  System_RuntimeTypeHandle_o v43; // 0:w0.4
  System_RuntimeTypeHandle_o v44; // 0:w0.4
  System_RuntimeTypeHandle_o v45; // 0:w0.4
  System_RuntimeTypeHandle_o v46; // 0:w0.4
  System_RuntimeTypeHandle_o v47; // 0:w0.4
  System_RuntimeTypeHandle_o v48; // 0:w0.4
  System_RuntimeTypeHandle_o v49; // 0:w0.4

  if ( (byte_42B1FB2 & 1) == 0 )
  {
    sub_B52984(&bool_var);
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&UnityEngine_GameObject_var);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&int_var);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&string_var);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&System_Type_TypeInfo);
    byte_42B1FB2 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldMotionArray,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.defUniqueFieldMotion,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__),
        (fsmTemplate = (PlayMakerFSM_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_59:
    sub_B52A5C(fsmTemplate, v10);
  }
  fsm = fsmTemplate->fields.fsm;
  v12 = fsmTemplate;
  if ( (int)fsm >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)fsm; ++i )
    {
      if ( i >= (unsigned int)fsm )
      {
        v41 = sub_B52A88(fsmTemplate);
        sub_B52A28(v41, 0LL);
      }
      v14 = (UnityEngine_Object_o *)*((_QWORD *)&v12->fields.fsmTemplate + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsmTemplate = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)fsmTemplate & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v42.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v42, 0LL);
        v43.fields.value = (int)string_var;
        v17 = System_Type__GetTypeFromHandle(v43, 0LL);
        fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(TypeFromHandle, v17, 0LL);
        if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_59;
          fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0LL);
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
            v18 = fsmTemplate;
            v19 = (System_Int32_array **)sub_B52A44(value, string_TypeInfo);
            v18[1].klass = (PlayMakerFSM_c *)v19;
            sub_B52920((BattleServantConfConponent_o *)&v18[1], v19, v20, v21, v22, v23, v24, v25);
          }
        }
        else
        {
          v26 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v44.fields.value = (int)v26;
          v27 = System_Type__GetTypeFromHandle(v44, 0LL);
          v45.fields.value = (int)UnityEngine_GameObject_var;
          v28 = System_Type__GetTypeFromHandle(v45, 0LL);
          fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v27, v28, 0LL);
          if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_59;
            fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0LL);
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
              v29 = (HutongGames_PlayMaker_FsmGameObject_o *)fsmTemplate;
              v30 = (UnityEngine_GameObject_o *)sub_B52A44(value, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v29, v30, 0LL);
            }
          }
          else
          {
            v31 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v46.fields.value = (int)v31;
            v32 = System_Type__GetTypeFromHandle(v46, 0LL);
            v47.fields.value = (int)int_var;
            v33 = System_Type__GetTypeFromHandle(v47, 0LL);
            fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v32, v33, 0LL);
            if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
            {
              if ( !v14 )
                goto LABEL_59;
              fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0LL);
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
                v34 = fsmTemplate;
                v35 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                           value,
                                           value->klass->vtable._4_CompareTo.methodPtr);
                fsmTemplate = (PlayMakerFSM_o *)System_Int32__Parse(v35, 0LL);
                LODWORD(v34[1].klass) = (_DWORD)fsmTemplate;
              }
            }
            else
            {
              v36 = method->rgctx_data->_0_T;
              if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Type_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              }
              v48.fields.value = (int)v36;
              v37 = System_Type__GetTypeFromHandle(v48, 0LL);
              v49.fields.value = (int)bool_var;
              v38 = System_Type__GetTypeFromHandle(v49, 0LL);
              fsmTemplate = (PlayMakerFSM_o *)System_Type__op_Equality(v37, v38, 0LL);
              if ( ((unsigned __int8)fsmTemplate & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_59;
                fsmTemplate = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v14, 0LL);
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
                  v39 = fsmTemplate;
                  v40 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                             value,
                                             value->klass->vtable._4_CompareTo.methodPtr);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  fsmTemplate = (PlayMakerFSM_o *)System_Boolean__Parse(v40, 0LL);
                  LOBYTE(v39[1].klass) = (unsigned __int8)fsmTemplate & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(fsm) = v12->fields.fsm;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
    this = (FieldMotionManager_o *)sub_B52A44(defUniqueFieldMotion, fieldMotionArray->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_23:
      v25 = sub_B52A7C();
      sub_B52A28(v25, 0LL);
    }
  }
  if ( fieldMotionArray->max_length <= 1 )
  {
LABEL_22:
    v24 = sub_B52A88(this);
    sub_B52A28(v24, 0LL);
  }
  fieldMotionArray->m_Items[1] = (BattleFieldMotionComponent_o *)defUniqueFieldMotion;
  sub_B52920(
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
    sub_B52A5C(this, isDisable);
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
        this = (FieldMotionManager_o *)sub_B52A44(
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
    sub_B52920((BattleServantConfConponent_o *)&v18[v20], v22, v12, v13, v14, v15, v16, v17);
    v18 = (unsigned int *)v9->fields.fieldMotionArray;
    ++v19;
    v20 += 2LL;
    if ( !v18 )
      goto LABEL_20;
  }
}


void __fastcall FieldMotionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct FieldMotionManager___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE10 & 1) == 0 )
  {
    sub_B52984(&FieldMotionManager___c_TypeInfo);
    byte_42ACE10 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(FieldMotionManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = FieldMotionManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FieldMotionManager___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetPlayerStage_b__11_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B52A5C(this, 0LL);
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__14_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B52A5C(this, 0LL);
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__14_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B52A5C(this, 0LL);
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___SetTacticBg_b__10_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B52A5C(this, 0LL);
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B52A5C(this, 0LL);
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return BattleFieldMotionComponent__GetTargetTr(comp, this->fields.type, this->fields.index, 0LL);
}