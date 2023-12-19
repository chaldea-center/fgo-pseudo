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
  __int64 v15; // x1
  __int64 v16; // x2
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x0
  __int64 v18; // x23
  unsigned __int64 max_length; // x8
  unsigned __int64 v20; // x25
  UnityEngine_Object_o *v21; // x22
  struct BattleFieldMotionComponent_array *v22; // x8
  BattleFieldMotionComponent_o *v23; // x0
  struct BattleFieldMotionComponent_o *v24; // x0
  struct BattleFieldMotionComponent_o **p_defUniqueFieldMotion; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40F8E61 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_BattleFieldMotionComponent___, fieldMotions);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F8E61 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldMotionArray = fieldMotions;
  p_fields = &this->fields;
  sub_B16F98(
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
    sub_B170D4();
  v18 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v20 = v18 - 4;
    if ( v18 - 4 >= (int)max_length )
      break;
    if ( v20 >= max_length )
      goto LABEL_18;
    v21 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v18);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fieldMotionArray = (struct BattleFieldMotionComponent_array *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
    if ( ((unsigned __int8)fieldMotionArray & 1) != 0 )
    {
      v22 = p_fields->fieldMotionArray;
      if ( !p_fields->fieldMotionArray )
        goto LABEL_16;
      if ( v20 >= v22->max_length )
      {
LABEL_18:
        sub_B17100(fieldMotionArray, v15, v16);
        sub_B170A0();
      }
      v23 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v22->obj.klass + v18);
      if ( !v23 )
        goto LABEL_16;
      BattleFieldMotionComponent__setPerf(v23, perf, 0LL);
    }
    fieldMotionArray = p_fields->fieldMotionArray;
    ++v18;
    if ( !p_fields->fieldMotionArray )
      goto LABEL_16;
  }
  v24 = (struct BattleFieldMotionComponent_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                                 (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)fieldMotionArray,
                                                 1,
                                                 0LL,
                                                 (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_BattleFieldMotionComponent___);
  this->fields.defUniqueFieldMotion = v24;
  p_defUniqueFieldMotion = &this->fields.defUniqueFieldMotion;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_defUniqueFieldMotion,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Int32_array **)*(p_defUniqueFieldMotion - 1);
  p_defUniqueFieldMotion[1] = (struct BattleFieldMotionComponent_o *)v32;
  sub_B16F98((BattleServantConfConponent_o *)(p_defUniqueFieldMotion + 1), v32, v33, v34, v35, v36, v37, v38);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager__FindLastNotNullObject_Transform_(
        FieldMotionManager_o *this,
        System_Func_BattleFieldMotionComponent__T__o *getObjectFunc,
        const MethodInfo_19CFC14 *method)
{
  FieldMotionManager_o *v5; // x21
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v8; // w23
  __int64 v9; // x24
  UnityEngine_Object_o *v10; // x22
  struct BattleFieldMotionComponent_array *v11; // x8
  UnityEngine_Object_o *v12; // x22

  v5 = this;
  if ( (byte_40FB004 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, getObjectFunc);
    byte_40FB004 = 1;
  }
  fieldMotionArray = v5->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_20:
    sub_B170D4();
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
      sub_B17100(this, getObjectFunc, method);
      sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  FieldMotionManager___c_c *v11; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__12_0; // x20
  Il2CppObject *v14; // x21
  struct FieldMotionManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_40F8E65 & 1) == 0 )
  {
    sub_B16FFC(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method);
    sub_B16FFC(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v6);
    sub_B16FFC(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_FieldMotionManager___c__GetEnemyStage_b__12_0__, v9);
    sub_B16FFC(&FieldMotionManager___c_TypeInfo, v10);
    byte_40F8E65 = 1;
  }
  v11 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v11 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                 System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__12_0,
      v14,
      Method_FieldMotionManager___c__GetEnemyStage_b__12_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v15 = FieldMotionManager___c_TypeInfo->static_fields;
    v15->__9__12_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !this )
    sub_B170D4();
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)_9__12_0,
                                                              (const MethodInfo_19CFC14 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v23; // x20
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_40F8E66 & 1) == 0 )
  {
    sub_B16FFC(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, name);
    sub_B16FFC(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v7);
    sub_B16FFC(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_FieldMotionManager___c__DisplayClass13_0__GetGameObject_b__0__, v10);
    sub_B16FFC(&FieldMotionManager___c__DisplayClass13_0_TypeInfo, v11);
    byte_40F8E66 = 1;
  }
  v12 = sub_B170CC(FieldMotionManager___c__DisplayClass13_0_TypeInfo, name, method, v3, v4);
  FieldMotionManager___c__DisplayClass13_0___ctor((FieldMotionManager___c__DisplayClass13_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)name, v13, v14, v15, v16, v17, v18);
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                                                          v19,
                                                                                          v20,
                                                                                          v21,
                                                                                          v22);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_FieldMotionManager___c__DisplayClass13_0__GetGameObject_b__0__,
    (const MethodInfo_2B6C28C *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)v23,
                                                              (const MethodInfo_19CFC14 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  FieldMotionManager___c_c *v11; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__11_0; // x20
  Il2CppObject *v14; // x21
  struct FieldMotionManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x19

  if ( (byte_40F8E64 & 1) == 0 )
  {
    sub_B16FFC(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, method);
    sub_B16FFC(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v6);
    sub_B16FFC(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_FieldMotionManager___c__GetPlayerStage_b__11_0__, v9);
    sub_B16FFC(&FieldMotionManager___c_TypeInfo, v10);
    byte_40F8E64 = 1;
  }
  v11 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v11 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                 System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__11_0,
      v14,
      Method_FieldMotionManager___c__GetPlayerStage_b__11_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v15 = FieldMotionManager___c_TypeInfo->static_fields;
    v15->__9__11_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__11_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !this )
    sub_B170D4();
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)_9__11_0,
                                                              (const MethodInfo_19CFC14 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  FieldMotionManager___c__DisplayClass15_0_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v18; // x20
  UnityEngine_Transform_o *LastNotNullObject_Transform; // x19

  if ( (byte_40F8E68 & 1) == 0 )
  {
    sub_B16FFC(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Func_BattleFieldMotionComponent__Transform___ctor__, v8);
    sub_B16FFC(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_FieldMotionManager___c__DisplayClass15_0__GetTargetTransform_b__0__, v11);
    sub_B16FFC(&FieldMotionManager___c__DisplayClass15_0_TypeInfo, v12);
    byte_40F8E68 = 1;
  }
  v13 = (FieldMotionManager___c__DisplayClass15_0_o *)sub_B170CC(
                                                        FieldMotionManager___c__DisplayClass15_0_TypeInfo,
                                                        *(_QWORD *)&type,
                                                        *(_QWORD *)&index,
                                                        method,
                                                        v4);
  FieldMotionManager___c__DisplayClass15_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.type = type;
  v13->fields.index = index;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                          v14,
                                                                                          v15,
                                                                                          v16,
                                                                                          v17);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_FieldMotionManager___c__DisplayClass15_0__GetTargetTransform_b__0__,
    (const MethodInfo_2B6C28C *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
  LastNotNullObject_Transform = FieldMotionManager__FindLastNotNullObject_Transform_(
                                  this,
                                  (System_Func_BattleFieldMotionComponent__T__o *)v18,
                                  (const MethodInfo_19CFC14 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  __int64 v4; // x4
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
  FieldMotionManager___c__DisplayClass14_0_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v23; // x0
  __int64 *v24; // x8
  FieldMotionManager___c_c *v25; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__14_1; // x20
  Il2CppObject *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct FieldMotionManager___c_StaticFields *v35; // x0
  BattleServantConfConponent_o *p__9__14_1; // x0
  FieldMotionManager___c_c *v37; // x0
  struct FieldMotionManager___c_StaticFields *v38; // x8
  Il2CppObject *v39; // x21
  struct FieldMotionManager___c_StaticFields *v40; // x0
  UnityEngine_Transform_o *result; // x0

  if ( (byte_40F8E67 & 1) == 0 )
  {
    sub_B16FFC(&Method_FieldMotionManager_FindLastNotNullObject_Transform___, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Func_BattleFieldMotionComponent__Transform___ctor__, v8);
    sub_B16FFC(&System_Func_BattleFieldMotionComponent__Transform__TypeInfo, v9);
    sub_B16FFC(&Method_FieldMotionManager___c__GetTransform_b__14_1__, v10);
    sub_B16FFC(&Method_FieldMotionManager___c__GetTransform_b__14_3__, v11);
    sub_B16FFC(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__0__, v12);
    sub_B16FFC(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__2__, v13);
    sub_B16FFC(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__4__, v14);
    sub_B16FFC(&Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__5__, v15);
    sub_B16FFC(&FieldMotionManager___c__DisplayClass14_0_TypeInfo, v16);
    sub_B16FFC(&FieldMotionManager___c_TypeInfo, v17);
    byte_40F8E67 = 1;
  }
  v18 = (FieldMotionManager___c__DisplayClass14_0_o *)sub_B170CC(
                                                        FieldMotionManager___c__DisplayClass14_0_TypeInfo,
                                                        *(_QWORD *)&type,
                                                        *(_QWORD *)&index,
                                                        method,
                                                        v4);
  FieldMotionManager___c__DisplayClass14_0___ctor(v18, 0LL);
  if ( !v18 )
LABEL_26:
    sub_B170D4();
  v18->fields.index = index;
  switch ( type )
  {
    case 0:
      v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                              System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                              v19,
                                                                                              v20,
                                                                                              v21,
                                                                                              v22);
      v24 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__0__;
      goto LABEL_28;
    case 1:
      v25 = FieldMotionManager___c_TypeInfo;
      if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v25 = FieldMotionManager___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__14_1;
      if ( _9__14_1 )
        goto LABEL_25;
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                                   v19,
                                                                                                   v20,
                                                                                                   v21,
                                                                                                   v22);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__14_1,
        v28,
        Method_FieldMotionManager___c__GetTransform_b__14_1__,
        (const MethodInfo_2B6C28C *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
      v35 = FieldMotionManager___c_TypeInfo->static_fields;
      v35->__9__14_1 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__14_1;
      p__9__14_1 = (BattleServantConfConponent_o *)&v35->__9__14_1;
      goto LABEL_24;
    case 2:
      v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                              System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                              v19,
                                                                                              v20,
                                                                                              v21,
                                                                                              v22);
      v24 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__2__;
      goto LABEL_28;
    case 3:
      v37 = FieldMotionManager___c_TypeInfo;
      if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
        v37 = FieldMotionManager___c_TypeInfo;
      }
      v38 = v37->static_fields;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v38->__9__14_3;
      if ( _9__14_1 )
        goto LABEL_25;
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v38 = FieldMotionManager___c_TypeInfo->static_fields;
      }
      v39 = (Il2CppObject *)v38->__9;
      _9__14_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                                   v19,
                                                                                                   v20,
                                                                                                   v21,
                                                                                                   v22);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__14_1,
        v39,
        Method_FieldMotionManager___c__GetTransform_b__14_3__,
        (const MethodInfo_2B6C28C *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
      v40 = FieldMotionManager___c_TypeInfo->static_fields;
      v40->__9__14_3 = (struct System_Func_BattleFieldMotionComponent__Transform__o *)_9__14_1;
      p__9__14_1 = (BattleServantConfConponent_o *)&v40->__9__14_3;
LABEL_24:
      sub_B16F98(p__9__14_1, (System_Int32_array **)_9__14_1, v29, v30, v31, v32, v33, v34);
LABEL_25:
      if ( !this )
        goto LABEL_26;
      goto LABEL_29;
    case 4:
      v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                              System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                              v19,
                                                                                              v20,
                                                                                              v21,
                                                                                              v22);
      v24 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__4__;
      goto LABEL_28;
    case 5:
      v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                              System_Func_BattleFieldMotionComponent__Transform__TypeInfo,
                                                                                              v19,
                                                                                              v20,
                                                                                              v21,
                                                                                              v22);
      v24 = &Method_FieldMotionManager___c__DisplayClass14_0__GetTransform_b__5__;
LABEL_28:
      _9__14_1 = v23;
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v23,
        (Il2CppObject *)v18,
        *v24,
        (const MethodInfo_2B6C28C *)Method_System_Func_BattleFieldMotionComponent__Transform___ctor__);
LABEL_29:
      result = FieldMotionManager__FindLastNotNullObject_Transform_(
                 this,
                 (System_Func_BattleFieldMotionComponent__T__o *)_9__14_1,
                 (const MethodInfo_19CFC14 *)Method_FieldMotionManager_FindLastNotNullObject_Transform___);
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
  __int64 v6; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x9

  v3 = this;
  if ( (byte_40F8E62 & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8E62 = 1;
  }
  fieldMotionArray = v3->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_16:
    sub_B170D4();
  v5 = 0;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = fieldMotionArray->max_length;
    v8 = v6 - 4;
    if ( v6 - 4 >= (int)max_length )
      return v5 & 1;
    if ( v8 >= max_length )
      goto LABEL_18;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&fieldMotionArray->obj.klass + v6);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (FieldMotionManager_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    fieldMotionArray = v3->fields.fieldMotionArray;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !fieldMotionArray )
        goto LABEL_16;
      if ( v8 >= fieldMotionArray->max_length )
      {
LABEL_18:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v10 = *((_QWORD *)&fieldMotionArray->obj.klass + v6);
      if ( !v10 )
        goto LABEL_16;
      v5 |= *(_BYTE *)(v10 + 176) != 0;
    }
    ++v6;
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
  __int64 v7; // x2
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  System_String_o *v10; // x20
  signed int v11; // w24
  il2cpp_array_size_t v12; // w26
  __int64 v13; // x23
  __int64 v14; // x27
  UnityEngine_Object_o *v15; // x22
  struct BattleFieldMotionComponent_array *v16; // x8
  BattleFieldMotionComponent_o *v17; // x0
  struct BattleFieldMotionComponent_array *v18; // x8
  BattleFieldMotionComponent_o *v19; // x0
  System_String_o *v20; // x19
  __int64 v21; // x1
  System_String_o *v22; // x0
  System_String_o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UnityEngine_UnityException_o *v30; // x0
  __int64 v31; // x1
  BattleActionData_o *badata; // [xsp+8h] [xbp-58h]

  if ( (byte_40F8E69 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, nowAction);
    byte_40F8E69 = 1;
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
    v20 = (System_String_o *)sub_B17000(&StringLiteral_242, v6);
    v22 = (System_String_o *)sub_B17000(&StringLiteral_219, v21);
    v23 = System_String__Concat_43746016(v20, v10, v22, 0LL);
    v25 = sub_B17000(&UnityEngine_UnityException_TypeInfo, v24);
    v30 = (UnityEngine_UnityException_o *)sub_B170CC(v25, v26, v27, v28, v29);
    UnityEngine_UnityException___ctor_49532044(v30, v23, 0LL);
    sub_B17000(&Method_FieldMotionManager_PlayBattleAction__, v31);
    sub_B170A0();
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
      v17 = *(BattleFieldMotionComponent_o **)((char *)&v16->obj.klass + 8 * v13 + v14);
      if ( !v17 )
        goto LABEL_17;
      MotionName = (System_String_o *)BattleFieldMotionComponent__checkMotionEvent(v17, v10, 0LL);
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
  v18 = this->fields.fieldMotionArray;
  if ( !v18 )
    goto LABEL_17;
  if ( (unsigned int)(v11 + v13) >= v18->max_length )
  {
LABEL_22:
    sub_B17100(MotionName, v6, v7);
    sub_B170A0();
  }
  v19 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v18->m_Items[v11] + v13);
  if ( !v19 )
LABEL_17:
    sub_B170D4();
  BattleFieldMotionComponent__playBattleActionData(v19, badata, v10, 0LL);
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
  BattleFieldMotionComponent_o *v13; // x0
  struct BattleFieldMotionComponent_array *v14; // x8
  BattleFieldMotionComponent_o *v15; // x0

  v4 = this;
  if ( (byte_40F8E6A & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, str);
    byte_40F8E6A = 1;
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
        v13 = *(BattleFieldMotionComponent_o **)((char *)&v12->obj.klass + 8 * v9 + v10);
        if ( !v13 )
          goto LABEL_17;
        this = (FieldMotionManager_o *)BattleFieldMotionComponent__checkMotionEvent(v13, str, 0LL);
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
    v14 = v4->fields.fieldMotionArray;
    if ( v14 )
    {
      if ( v7 + (unsigned int)v9 >= v14->max_length )
      {
LABEL_23:
        sub_B17100(this, str, method);
        sub_B170A0();
      }
      v15 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v14->m_Items[v7] + v9);
      if ( v15 )
      {
        BattleFieldMotionComponent__sendEvent(v15, str, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B170D4();
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

  v4 = this;
  if ( (byte_40F8E6B & 1) == 0 )
  {
    this = (FieldMotionManager_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, str);
    byte_40F8E6B = 1;
  }
  fieldMotionArray = v4->fields.fieldMotionArray;
  if ( !fieldMotionArray )
LABEL_17:
    sub_B170D4();
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
        sub_B17100(this, str, method);
        sub_B170A0();
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
  __int64 v8; // x2
  struct BattleFieldMotionComponent_array *fieldMotionArray; // x8
  il2cpp_array_size_t max_length; // w9
  signed int v11; // w24
  il2cpp_array_size_t v12; // w26
  System_String_o *v13; // x21
  __int64 v14; // x23
  __int64 v15; // x27
  UnityEngine_Object_o *v16; // x22
  struct BattleFieldMotionComponent_array *v17; // x8
  BattleFieldMotionComponent_o *v18; // x0
  struct BattleFieldMotionComponent_array *v19; // x8
  BattleFieldMotionComponent_o *v20; // x0

  if ( (byte_40F8E6C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, nowAction);
    byte_40F8E6C = 1;
  }
  if ( nowAction )
  {
    MotionName = BattleFieldMotionComponent__GetMotionName(nowAction, 0LL);
    fieldMotionArray = this->fields.fieldMotionArray;
    if ( !fieldMotionArray )
      goto LABEL_18;
    max_length = fieldMotionArray->max_length;
    v11 = max_length - 1;
    if ( (int)(max_length - 1) >= 0 )
    {
      v12 = max_length - 2;
      v13 = MotionName;
      v14 = 0LL;
      v15 = 8LL * v11 + 32;
      while ( 1 )
      {
        if ( v11 + v14 >= (unsigned __int64)fieldMotionArray->max_length )
          goto LABEL_24;
        v16 = *(UnityEngine_Object_o **)((char *)&fieldMotionArray->obj.klass + 8 * v14 + v15);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        MotionName = (System_String_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
        if ( ((unsigned __int8)MotionName & 1) != 0 )
        {
          v17 = this->fields.fieldMotionArray;
          if ( !v17 )
            goto LABEL_18;
          if ( v11 + v14 >= (unsigned __int64)v17->max_length )
            goto LABEL_24;
          v18 = *(BattleFieldMotionComponent_o **)((char *)&v17->obj.klass + 8 * v14 + v15);
          if ( !v18 )
            goto LABEL_18;
          MotionName = (System_String_o *)BattleFieldMotionComponent__checkMotionEvent(v18, v13, 0LL);
          if ( ((unsigned __int8)MotionName & 1) != 0 )
            break;
        }
        if ( (int)(v12 + v14) < 0 )
          return;
        fieldMotionArray = this->fields.fieldMotionArray;
        --v14;
        if ( !fieldMotionArray )
          goto LABEL_18;
      }
      v19 = this->fields.fieldMotionArray;
      if ( v19 )
      {
        if ( (unsigned int)(v11 + v14) >= v19->max_length )
        {
LABEL_24:
          sub_B17100(MotionName, v7, v8);
          sub_B170A0();
        }
        v20 = (BattleFieldMotionComponent_o *)*((_QWORD *)&v19->m_Items[v11] + v14);
        if ( v20 )
        {
          BattleFieldMotionComponent__SetActiveMotion(v20, active, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetTacticBg(FieldMotionManager_o *this, bool flg, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  FieldMotionManager___c_c *v12; // x0
  struct FieldMotionManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__10_0; // x21
  Il2CppObject *v15; // x22
  struct FieldMotionManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *LastNotNullObject_Transform; // x20

  if ( (byte_40F8E63 & 1) == 0 )
  {
    sub_B16FFC(&Method_FieldMotionManager_FindLastNotNullObject_GameObject___, flg);
    sub_B16FFC(&Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__, v7);
    sub_B16FFC(&System_Func_BattleFieldMotionComponent__GameObject__TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_FieldMotionManager___c__SetTacticBg_b__10_0__, v10);
    sub_B16FFC(&FieldMotionManager___c_TypeInfo, v11);
    byte_40F8E63 = 1;
  }
  v12 = FieldMotionManager___c_TypeInfo;
  if ( (BYTE3(FieldMotionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FieldMotionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FieldMotionManager___c_TypeInfo);
    v12 = FieldMotionManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = FieldMotionManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                 System_Func_BattleFieldMotionComponent__GameObject__TypeInfo,
                                                                                                 flg,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__10_0,
      v15,
      Method_FieldMotionManager___c__SetTacticBg_b__10_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_BattleFieldMotionComponent__GameObject___ctor__);
    v16 = FieldMotionManager___c_TypeInfo->static_fields;
    v16->__9__10_0 = (struct System_Func_BattleFieldMotionComponent__GameObject__o *)_9__10_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !this )
    goto LABEL_19;
  LastNotNullObject_Transform = (UnityEngine_GameObject_o *)FieldMotionManager__FindLastNotNullObject_Transform_(
                                                              this,
                                                              (System_Func_BattleFieldMotionComponent__T__o *)_9__10_0,
                                                              (const MethodInfo_19CFC14 *)Method_FieldMotionManager_FindLastNotNullObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)LastNotNullObject_Transform, 0LL, 0LL) )
  {
    if ( LastNotNullObject_Transform )
    {
      UnityEngine_GameObject__SetActive(LastNotNullObject_Transform, flg, 0LL);
      return;
    }
LABEL_19:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetVariables_bool_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        bool value,
        const MethodInfo_19CFD68 *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  HutongGames_PlayMaker_FsmGameObject_o *FsmString; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  struct System_String_o *name; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v26; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v28; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v31; // x0
  PlayMakerFSM_o *Fsm; // x0
  HutongGames_PlayMaker_Fsm_o *v33; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v35; // x22
  Il2CppClass *_1_T; // x23
  __int64 v37; // x0
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  Il2CppType *v45; // x23
  System_Type_o *v46; // x23
  System_Type_o *v47; // x0
  PlayMakerFSM_o *v48; // x0
  HutongGames_PlayMaker_Fsm_o *v49; // x0
  HutongGames_PlayMaker_FsmVariables_o *v50; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v51; // x22
  Il2CppClass *v52; // x23
  __int64 v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  Il2CppType *v55; // x23
  System_Type_o *v56; // x23
  System_Type_o *v57; // x0
  PlayMakerFSM_o *v58; // x0
  HutongGames_PlayMaker_Fsm_o *v59; // x0
  HutongGames_PlayMaker_FsmVariables_o *v60; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v61; // x22
  System_String_o *v62; // x0
  Il2CppType *v63; // x23
  System_Type_o *v64; // x23
  System_Type_o *v65; // x0
  PlayMakerFSM_o *v66; // x0
  HutongGames_PlayMaker_Fsm_o *v67; // x0
  HutongGames_PlayMaker_FsmVariables_o *v68; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v69; // x22
  System_String_o *v70; // x23
  char v71[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v72[4]; // [xsp+8h] [xbp-58h] BYREF
  char v73[4]; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeTypeHandle_o v74; // 0:w0.4
  System_RuntimeTypeHandle_o v75; // 0:w0.4
  System_RuntimeTypeHandle_o v76; // 0:w0.4
  System_RuntimeTypeHandle_o v77; // 0:w0.4
  System_RuntimeTypeHandle_o v78; // 0:w0.4
  System_RuntimeTypeHandle_o v79; // 0:w0.4
  System_RuntimeTypeHandle_o v80; // 0:w0.4
  System_RuntimeTypeHandle_o v81; // 0:w0.4

  v73[0] = value;
  if ( (byte_40FB005 & 1) == 0 )
  {
    sub_B16FFC(&bool_var, variableName);
    sub_B16FFC(&bool_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_GameObject_var, v9);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v10);
    sub_B16FFC(&int_var, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&string_var, v18);
    sub_B16FFC(&string_TypeInfo, v19);
    sub_B16FFC(&System_Type_TypeInfo, v20);
    byte_40FB005 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                                                                  variableName,
                                                                                                  value,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v21
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldMotionArray,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.defUniqueFieldMotion,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__),
        (FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_61:
    sub_B170D4();
  }
  name = FsmString->fields.name;
  v26 = FsmString;
  if ( (int)name >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)name; ++i )
    {
      if ( i >= (unsigned int)name )
      {
        sub_B17100(FsmString, v23, v24);
        sub_B170A0();
      }
      v28 = (UnityEngine_Object_o *)*((_QWORD *)&v26->fields.tooltip + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)FsmString & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v74.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v74, 0LL);
        v75.fields.value = (int)string_var;
        v31 = System_Type__GetTypeFromHandle(v75, 0LL);
        if ( System_Type__op_Equality(TypeFromHandle, v31, 0LL) )
        {
          if ( !v28 )
            goto LABEL_61;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v28, 0LL);
          if ( !Fsm )
            goto LABEL_61;
          v33 = PlayMakerFSM__get_Fsm(Fsm, 0LL);
          if ( !v33 )
            goto LABEL_61;
          variables = v33->fields.variables;
          if ( !variables )
            goto LABEL_61;
          FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                                                 variables,
                                                                 variableName,
                                                                 0LL);
          if ( FsmString )
          {
            v35 = FsmString;
            v72[0] = v73[0];
            _1_T = method->rgctx_data->_1_T;
            if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
              sub_AAFCFC(method->rgctx_data->_1_T);
            v37 = j_il2cpp_value_box_0(_1_T, v72);
            v38 = (System_Int32_array **)sub_B170BC(v37, string_TypeInfo);
            v35->fields.OnChange = (struct System_Action_o *)v38;
            sub_B16F98((BattleServantConfConponent_o *)&v35->fields.OnChange, v38, v39, v40, v41, v42, v43, v44);
          }
        }
        else
        {
          v45 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v76.fields.value = (int)v45;
          v46 = System_Type__GetTypeFromHandle(v76, 0LL);
          v77.fields.value = (int)UnityEngine_GameObject_var;
          v47 = System_Type__GetTypeFromHandle(v77, 0LL);
          if ( System_Type__op_Equality(v46, v47, 0LL) )
          {
            if ( !v28 )
              goto LABEL_61;
            v48 = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v28, 0LL);
            if ( !v48 )
              goto LABEL_61;
            v49 = PlayMakerFSM__get_Fsm(v48, 0LL);
            if ( !v49 )
              goto LABEL_61;
            v50 = v49->fields.variables;
            if ( !v50 )
              goto LABEL_61;
            FsmString = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v50, variableName, 0LL);
            if ( FsmString )
            {
              v51 = FsmString;
              v71[0] = v73[0];
              v52 = method->rgctx_data->_1_T;
              if ( (BYTE2(v52->vtable[0].methodPtr) & 1) == 0 )
                sub_AAFCFC(method->rgctx_data->_1_T);
              v53 = j_il2cpp_value_box_0(v52, v71);
              v54 = (UnityEngine_GameObject_o *)sub_B170BC(v53, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v51, v54, 0LL);
            }
          }
          else
          {
            v55 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v78.fields.value = (int)v55;
            v56 = System_Type__GetTypeFromHandle(v78, 0LL);
            v79.fields.value = (int)int_var;
            v57 = System_Type__GetTypeFromHandle(v79, 0LL);
            if ( System_Type__op_Equality(v56, v57, 0LL) )
            {
              if ( !v28 )
                goto LABEL_61;
              v58 = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v28, 0LL);
              if ( !v58 )
                goto LABEL_61;
              v59 = PlayMakerFSM__get_Fsm(v58, 0LL);
              if ( !v59 )
                goto LABEL_61;
              v60 = v59->fields.variables;
              if ( !v60 )
                goto LABEL_61;
              FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                                     v60,
                                                                     variableName,
                                                                     0LL);
              if ( FsmString )
              {
                v61 = FsmString;
                v62 = System_Boolean__ToString((bool)v73, 0LL);
                FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Int32__Parse(v62, 0LL);
                LODWORD(v61->fields.OnChange) = (_DWORD)FsmString;
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
              v80.fields.value = (int)v63;
              v64 = System_Type__GetTypeFromHandle(v80, 0LL);
              v81.fields.value = (int)bool_var;
              v65 = System_Type__GetTypeFromHandle(v81, 0LL);
              FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Type__op_Equality(v64, v65, 0LL);
              if ( ((unsigned __int8)FsmString & 1) != 0 )
              {
                if ( !v28 )
                  goto LABEL_61;
                v66 = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v28, 0LL);
                if ( !v66 )
                  goto LABEL_61;
                v67 = PlayMakerFSM__get_Fsm(v66, 0LL);
                if ( !v67 )
                  goto LABEL_61;
                v68 = v67->fields.variables;
                if ( !v68 )
                  goto LABEL_61;
                FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                                                       v68,
                                                                       variableName,
                                                                       0LL);
                if ( FsmString )
                {
                  v69 = FsmString;
                  v70 = System_Boolean__ToString((bool)v73, 0LL);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Boolean__Parse(v70, 0LL);
                  LOBYTE(v69->fields.OnChange) = (unsigned __int8)FsmString & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(name) = v26->fields.name;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldMotionManager__SetVariables_int_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        int32_t value,
        const MethodInfo_19D02D0 *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  HutongGames_PlayMaker_FsmGameObject_o *FsmString; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  struct System_String_o *name; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v26; // x21
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v28; // x22
  Il2CppType *_0_T; // x23
  System_Type_o *TypeFromHandle; // x23
  System_Type_o *v31; // x0
  PlayMakerFSM_o *Fsm; // x0
  HutongGames_PlayMaker_Fsm_o *v33; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v35; // x22
  Il2CppClass *_1_T; // x23
  __int64 v37; // x0
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  Il2CppType *v45; // x23
  System_Type_o *v46; // x23
  System_Type_o *v47; // x0
  PlayMakerFSM_o *v48; // x0
  HutongGames_PlayMaker_Fsm_o *v49; // x0
  HutongGames_PlayMaker_FsmVariables_o *v50; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v51; // x22
  Il2CppClass *v52; // x23
  __int64 v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  Il2CppType *v55; // x23
  System_Type_o *v56; // x23
  System_Type_o *v57; // x0
  PlayMakerFSM_o *v58; // x0
  HutongGames_PlayMaker_Fsm_o *v59; // x0
  HutongGames_PlayMaker_FsmVariables_o *v60; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v61; // x22
  System_String_o *v62; // x0
  Il2CppType *v63; // x23
  System_Type_o *v64; // x23
  System_Type_o *v65; // x0
  PlayMakerFSM_o *v66; // x0
  HutongGames_PlayMaker_Fsm_o *v67; // x0
  HutongGames_PlayMaker_FsmVariables_o *v68; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v69; // x22
  System_String_o *v70; // x23
  int32_t v71; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v72; // [xsp+8h] [xbp-58h] BYREF
  int32_t v73; // [xsp+Ch] [xbp-54h] BYREF
  System_RuntimeTypeHandle_o v74; // 0:w0.4
  System_RuntimeTypeHandle_o v75; // 0:w0.4
  System_RuntimeTypeHandle_o v76; // 0:w0.4
  System_RuntimeTypeHandle_o v77; // 0:w0.4
  System_RuntimeTypeHandle_o v78; // 0:w0.4
  System_RuntimeTypeHandle_o v79; // 0:w0.4
  System_RuntimeTypeHandle_o v80; // 0:w0.4
  System_RuntimeTypeHandle_o v81; // 0:w0.4

  v73 = value;
  if ( (byte_40FB006 & 1) == 0 )
  {
    sub_B16FFC(&bool_var, variableName);
    sub_B16FFC(&bool_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_GameObject_var, v9);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v10);
    sub_B16FFC(&int_var, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&string_var, v18);
    sub_B16FFC(&string_TypeInfo, v19);
    sub_B16FFC(&System_Type_TypeInfo, v20);
    byte_40FB006 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                                                                  variableName,
                                                                                                  *(_QWORD *)&value,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v21
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldMotionArray,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.defUniqueFieldMotion,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__),
        (FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_61:
    sub_B170D4();
  }
  name = FsmString->fields.name;
  v26 = FsmString;
  if ( (int)name >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)name; ++i )
    {
      if ( i >= (unsigned int)name )
      {
        sub_B17100(FsmString, v23, v24);
        sub_B170A0();
      }
      v28 = (UnityEngine_Object_o *)*((_QWORD *)&v26->fields.tooltip + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)FsmString & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v74.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v74, 0LL);
        v75.fields.value = (int)string_var;
        v31 = System_Type__GetTypeFromHandle(v75, 0LL);
        if ( System_Type__op_Equality(TypeFromHandle, v31, 0LL) )
        {
          if ( !v28 )
            goto LABEL_61;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v28, 0LL);
          if ( !Fsm )
            goto LABEL_61;
          v33 = PlayMakerFSM__get_Fsm(Fsm, 0LL);
          if ( !v33 )
            goto LABEL_61;
          variables = v33->fields.variables;
          if ( !variables )
            goto LABEL_61;
          FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                                                 variables,
                                                                 variableName,
                                                                 0LL);
          if ( FsmString )
          {
            v35 = FsmString;
            v72 = v73;
            _1_T = method->rgctx_data->_1_T;
            if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
              sub_AAFCFC(method->rgctx_data->_1_T);
            v37 = j_il2cpp_value_box_0(_1_T, &v72);
            v38 = (System_Int32_array **)sub_B170BC(v37, string_TypeInfo);
            v35->fields.OnChange = (struct System_Action_o *)v38;
            sub_B16F98((BattleServantConfConponent_o *)&v35->fields.OnChange, v38, v39, v40, v41, v42, v43, v44);
          }
        }
        else
        {
          v45 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v76.fields.value = (int)v45;
          v46 = System_Type__GetTypeFromHandle(v76, 0LL);
          v77.fields.value = (int)UnityEngine_GameObject_var;
          v47 = System_Type__GetTypeFromHandle(v77, 0LL);
          if ( System_Type__op_Equality(v46, v47, 0LL) )
          {
            if ( !v28 )
              goto LABEL_61;
            v48 = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v28, 0LL);
            if ( !v48 )
              goto LABEL_61;
            v49 = PlayMakerFSM__get_Fsm(v48, 0LL);
            if ( !v49 )
              goto LABEL_61;
            v50 = v49->fields.variables;
            if ( !v50 )
              goto LABEL_61;
            FsmString = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v50, variableName, 0LL);
            if ( FsmString )
            {
              v51 = FsmString;
              v71 = v73;
              v52 = method->rgctx_data->_1_T;
              if ( (BYTE2(v52->vtable[0].methodPtr) & 1) == 0 )
                sub_AAFCFC(method->rgctx_data->_1_T);
              v53 = j_il2cpp_value_box_0(v52, &v71);
              v54 = (UnityEngine_GameObject_o *)sub_B170BC(v53, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v51, v54, 0LL);
            }
          }
          else
          {
            v55 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v78.fields.value = (int)v55;
            v56 = System_Type__GetTypeFromHandle(v78, 0LL);
            v79.fields.value = (int)int_var;
            v57 = System_Type__GetTypeFromHandle(v79, 0LL);
            if ( System_Type__op_Equality(v56, v57, 0LL) )
            {
              if ( !v28 )
                goto LABEL_61;
              v58 = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v28, 0LL);
              if ( !v58 )
                goto LABEL_61;
              v59 = PlayMakerFSM__get_Fsm(v58, 0LL);
              if ( !v59 )
                goto LABEL_61;
              v60 = v59->fields.variables;
              if ( !v60 )
                goto LABEL_61;
              FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                                     v60,
                                                                     variableName,
                                                                     0LL);
              if ( FsmString )
              {
                v61 = FsmString;
                v62 = System_Int32__ToString((int32_t)&v73, 0LL);
                FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Int32__Parse(v62, 0LL);
                LODWORD(v61->fields.OnChange) = (_DWORD)FsmString;
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
              v80.fields.value = (int)v63;
              v64 = System_Type__GetTypeFromHandle(v80, 0LL);
              v81.fields.value = (int)bool_var;
              v65 = System_Type__GetTypeFromHandle(v81, 0LL);
              FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Type__op_Equality(v64, v65, 0LL);
              if ( ((unsigned __int8)FsmString & 1) != 0 )
              {
                if ( !v28 )
                  goto LABEL_61;
                v66 = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v28, 0LL);
                if ( !v66 )
                  goto LABEL_61;
                v67 = PlayMakerFSM__get_Fsm(v66, 0LL);
                if ( !v67 )
                  goto LABEL_61;
                v68 = v67->fields.variables;
                if ( !v68 )
                  goto LABEL_61;
                FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                                                       v68,
                                                                       variableName,
                                                                       0LL);
                if ( FsmString )
                {
                  v69 = FsmString;
                  v70 = System_Int32__ToString((int32_t)&v73, 0LL);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Boolean__Parse(v70, 0LL);
                  LOBYTE(v69->fields.OnChange) = (unsigned __int8)FsmString & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(name) = v26->fields.name;
    }
  }
}


void __fastcall FieldMotionManager__SetVariables_string_(
        FieldMotionManager_o *this,
        System_String_o *variableName,
        System_String_o *value,
        const MethodInfo_19D0834 *method)
{
  __int64 v4; // x4
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
  __int64 v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x23
  HutongGames_PlayMaker_FsmGameObject_o *FsmString; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  struct System_String_o *name; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v27; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v29; // x23
  Il2CppType *_0_T; // x24
  System_Type_o *TypeFromHandle; // x24
  System_Type_o *v32; // x0
  PlayMakerFSM_o *Fsm; // x0
  HutongGames_PlayMaker_Fsm_o *v34; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v36; // x23
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  Il2CppType *v44; // x24
  System_Type_o *v45; // x24
  System_Type_o *v46; // x0
  PlayMakerFSM_o *v47; // x0
  HutongGames_PlayMaker_Fsm_o *v48; // x0
  HutongGames_PlayMaker_FsmVariables_o *v49; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v50; // x23
  UnityEngine_GameObject_o *v51; // x0
  Il2CppType *v52; // x24
  System_Type_o *v53; // x24
  System_Type_o *v54; // x0
  PlayMakerFSM_o *v55; // x0
  HutongGames_PlayMaker_Fsm_o *v56; // x0
  HutongGames_PlayMaker_FsmVariables_o *v57; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v58; // x23
  System_String_o *v59; // x0
  Il2CppType *v60; // x24
  System_Type_o *v61; // x24
  System_Type_o *v62; // x0
  PlayMakerFSM_o *v63; // x0
  HutongGames_PlayMaker_Fsm_o *v64; // x0
  HutongGames_PlayMaker_FsmVariables_o *v65; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v66; // x23
  System_String_o *v67; // x24
  System_RuntimeTypeHandle_o v68; // 0:w0.4
  System_RuntimeTypeHandle_o v69; // 0:w0.4
  System_RuntimeTypeHandle_o v70; // 0:w0.4
  System_RuntimeTypeHandle_o v71; // 0:w0.4
  System_RuntimeTypeHandle_o v72; // 0:w0.4
  System_RuntimeTypeHandle_o v73; // 0:w0.4
  System_RuntimeTypeHandle_o v74; // 0:w0.4
  System_RuntimeTypeHandle_o v75; // 0:w0.4

  if ( (byte_40FB007 & 1) == 0 )
  {
    sub_B16FFC(&bool_var, variableName);
    sub_B16FFC(&bool_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_GameObject_var, v10);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v11);
    sub_B16FFC(&int_var, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&string_var, v19);
    sub_B16FFC(&string_TypeInfo, v20);
    sub_B16FFC(&System_Type_TypeInfo, v21);
    byte_40FB007 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleFieldMotionComponent__TypeInfo,
                                                                                                  variableName,
                                                                                                  value,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent___ctor__);
  if ( !v22
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldMotionArray,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__AddRange__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.defUniqueFieldMotion,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__Add__),
        (FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleFieldMotionComponent__ToArray__)) == 0LL) )
  {
LABEL_59:
    sub_B170D4();
  }
  name = FsmString->fields.name;
  v27 = FsmString;
  if ( (int)name >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)name; ++i )
    {
      if ( i >= (unsigned int)name )
      {
        sub_B17100(FsmString, v24, v25);
        sub_B170A0();
      }
      v29 = (UnityEngine_Object_o *)*((_QWORD *)&v27->fields.tooltip + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)FsmString & 1) == 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Type_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        }
        v68.fields.value = (int)_0_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v68, 0LL);
        v69.fields.value = (int)string_var;
        v32 = System_Type__GetTypeFromHandle(v69, 0LL);
        if ( System_Type__op_Equality(TypeFromHandle, v32, 0LL) )
        {
          if ( !v29 )
            goto LABEL_59;
          Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v29, 0LL);
          if ( !Fsm )
            goto LABEL_59;
          v34 = PlayMakerFSM__get_Fsm(Fsm, 0LL);
          if ( !v34 )
            goto LABEL_59;
          variables = v34->fields.variables;
          if ( !variables )
            goto LABEL_59;
          FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                                                 variables,
                                                                 variableName,
                                                                 0LL);
          if ( FsmString )
          {
            v36 = FsmString;
            v37 = (System_Int32_array **)sub_B170BC(value, string_TypeInfo);
            v36->fields.OnChange = (struct System_Action_o *)v37;
            sub_B16F98((BattleServantConfConponent_o *)&v36->fields.OnChange, v37, v38, v39, v40, v41, v42, v43);
          }
        }
        else
        {
          v44 = method->rgctx_data->_0_T;
          if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Type_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          }
          v70.fields.value = (int)v44;
          v45 = System_Type__GetTypeFromHandle(v70, 0LL);
          v71.fields.value = (int)UnityEngine_GameObject_var;
          v46 = System_Type__GetTypeFromHandle(v71, 0LL);
          if ( System_Type__op_Equality(v45, v46, 0LL) )
          {
            if ( !v29 )
              goto LABEL_59;
            v47 = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v29, 0LL);
            if ( !v47 )
              goto LABEL_59;
            v48 = PlayMakerFSM__get_Fsm(v47, 0LL);
            if ( !v48 )
              goto LABEL_59;
            v49 = v48->fields.variables;
            if ( !v49 )
              goto LABEL_59;
            FsmString = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v49, variableName, 0LL);
            if ( FsmString )
            {
              v50 = FsmString;
              v51 = (UnityEngine_GameObject_o *)sub_B170BC(value, UnityEngine_GameObject_TypeInfo);
              HutongGames_PlayMaker_FsmGameObject__set_Value(v50, v51, 0LL);
            }
          }
          else
          {
            v52 = method->rgctx_data->_0_T;
            if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Type_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            }
            v72.fields.value = (int)v52;
            v53 = System_Type__GetTypeFromHandle(v72, 0LL);
            v73.fields.value = (int)int_var;
            v54 = System_Type__GetTypeFromHandle(v73, 0LL);
            if ( System_Type__op_Equality(v53, v54, 0LL) )
            {
              if ( !v29 )
                goto LABEL_59;
              v55 = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v29, 0LL);
              if ( !v55 )
                goto LABEL_59;
              v56 = PlayMakerFSM__get_Fsm(v55, 0LL);
              if ( !v56 )
                goto LABEL_59;
              v57 = v56->fields.variables;
              if ( !v57 )
                goto LABEL_59;
              FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                                     v57,
                                                                     variableName,
                                                                     0LL);
              if ( FsmString )
              {
                if ( !value )
                  goto LABEL_59;
                v58 = FsmString;
                v59 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                           value,
                                           value->klass->vtable._4_CompareTo.methodPtr);
                FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Int32__Parse(v59, 0LL);
                LODWORD(v58->fields.OnChange) = (_DWORD)FsmString;
              }
            }
            else
            {
              v60 = method->rgctx_data->_0_T;
              if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Type_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              }
              v74.fields.value = (int)v60;
              v61 = System_Type__GetTypeFromHandle(v74, 0LL);
              v75.fields.value = (int)bool_var;
              v62 = System_Type__GetTypeFromHandle(v75, 0LL);
              FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Type__op_Equality(v61, v62, 0LL);
              if ( ((unsigned __int8)FsmString & 1) != 0 )
              {
                if ( !v29 )
                  goto LABEL_59;
                v63 = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)v29, 0LL);
                if ( !v63 )
                  goto LABEL_59;
                v64 = PlayMakerFSM__get_Fsm(v63, 0LL);
                if ( !v64 )
                  goto LABEL_59;
                v65 = v64->fields.variables;
                if ( !v65 )
                  goto LABEL_59;
                FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                                                       v65,
                                                                       variableName,
                                                                       0LL);
                if ( FsmString )
                {
                  if ( !value )
                    goto LABEL_59;
                  v66 = FsmString;
                  v67 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                             value,
                                             value->klass->vtable._4_CompareTo.methodPtr);
                  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                  FsmString = (HutongGames_PlayMaker_FsmGameObject_o *)System_Boolean__Parse(v67, 0LL);
                  LOBYTE(v66->fields.OnChange) = (unsigned __int8)FsmString & 1;
                }
              }
            }
          }
        }
      }
      LODWORD(name) = v27->fields.name;
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
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  unsigned int *v17; // x24
  unsigned __int64 v18; // x22
  __int64 v19; // x23
  unsigned __int64 v20; // x8
  System_Int32_array **v21; // x21
  struct BattleFieldMotionComponent_array *retentionFieldMotionArray; // x9

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
    this = (FieldMotionManager_o *)sub_B170BC(defUniqueFieldMotion, fieldMotionArray->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_23:
      sub_B170F4(this);
      sub_B170A0();
    }
  }
  if ( fieldMotionArray->max_length <= 1 )
  {
LABEL_22:
    sub_B17100(this, isDisable, method);
    sub_B170A0();
  }
  fieldMotionArray->m_Items[1] = (BattleFieldMotionComponent_o *)defUniqueFieldMotion;
  sub_B16F98(
    (BattleServantConfConponent_o *)&fieldMotionArray->m_Items[1],
    defUniqueFieldMotion,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = (unsigned int *)v9->fields.fieldMotionArray;
  if ( !v17 )
LABEL_20:
    sub_B170D4();
  v18 = 1LL;
  v19 = 10LL;
  while ( 1 )
  {
    v20 = v17[6];
    if ( (__int64)v18 >= (int)v20 )
      break;
    if ( isDisable )
    {
      v21 = 0LL;
    }
    else
    {
      retentionFieldMotionArray = v9->fields.retentionFieldMotionArray;
      if ( !retentionFieldMotionArray )
        goto LABEL_20;
      if ( v18 >= retentionFieldMotionArray->max_length )
        goto LABEL_22;
      v21 = *(System_Int32_array ***)((char *)&retentionFieldMotionArray->obj.klass + v19 * 4);
      if ( v21 )
      {
        this = (FieldMotionManager_o *)sub_B170BC(
                                         *(Il2CppClass **)((char *)&retentionFieldMotionArray->obj.klass + v19 * 4),
                                         *(_QWORD *)(*(_QWORD *)v17 + 64LL));
        if ( !this )
          goto LABEL_23;
        v20 = v17[6];
      }
    }
    if ( v18 >= v20 )
      goto LABEL_22;
    *(_QWORD *)&v17[v19] = v21;
    sub_B16F98((BattleServantConfConponent_o *)&v17[v19], v21, (System_String_array **)method, v12, v13, v14, v15, v16);
    v17 = (unsigned int *)v9->fields.fieldMotionArray;
    ++v18;
    v19 += 2LL;
    if ( !v17 )
      goto LABEL_20;
  }
}


void __fastcall FieldMotionManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68B5 & 1) == 0 )
  {
    sub_B16FFC(&FieldMotionManager___c_TypeInfo, v1);
    byte_40F68B5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(FieldMotionManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)FieldMotionManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return comp->fields.enemyStage;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___GetPlayerStage_b__11_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B170D4();
  return comp->fields.playerStage;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__14_1(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B170D4();
  return comp->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c___GetTransform_b__14_3(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B170D4();
  return comp->fields.pop_playerTr;
}


UnityEngine_GameObject_o *__fastcall FieldMotionManager___c___SetTacticBg_b__10_0(
        FieldMotionManager___c_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return BattleFieldMotionComponent__getEnemyPopPoint(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__2(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B170D4();
  return BattleFieldMotionComponent__getPlayerPopTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__4(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B170D4();
  return BattleFieldMotionComponent__getPlayerTacticalTr(comp, this->fields.index, 0LL);
}


UnityEngine_Transform_o *__fastcall FieldMotionManager___c__DisplayClass14_0___GetTransform_b__5(
        FieldMotionManager___c__DisplayClass14_0_o *this,
        BattleFieldMotionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_B170D4();
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
    sub_B170D4();
  return BattleFieldMotionComponent__GetTargetTr(comp, this->fields.type, this->fields.index, 0LL);
}