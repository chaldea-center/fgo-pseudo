void __fastcall ReactTaskTargetPlayer___ctor(ReactTaskTargetPlayer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantData_array *__fastcall ReactTaskTargetPlayer__TargetServants(
        ReactTaskTargetPlayer_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  ReactTaskTargetPlayer___c_c *v14; // x8
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x20
  Il2CppObject *v17; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_40F82A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, data);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_B16FFC(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, v7);
    sub_B16FFC(&ReactTaskTargetPlayer___c_TypeInfo, v8);
    byte_40F82A9 = 1;
  }
  if ( !data )
    sub_B170D4();
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v14 = ReactTaskTargetPlayer___c_TypeInfo;
  if ( (BYTE3(ReactTaskTargetPlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo);
    v14 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_BattleServantData__bool__TypeInfo,
                                                                                   v9,
                                                                                   v10,
                                                                                   v11,
                                                                                   v12);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v17,
      Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
    v18 = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    v18->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v25,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void __fastcall ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F740F & 1) == 0 )
  {
    sub_B16FFC(&ReactTaskTargetPlayer___c_TypeInfo, v1);
    byte_40F740F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ReactTaskTargetPlayer___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ReactTaskTargetPlayer___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ReactTaskTargetPlayer___c___ctor(ReactTaskTargetPlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ReactTaskTargetPlayer___c___TargetServants_b__0_0(
        ReactTaskTargetPlayer___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  AiStateManager_o *AiStateManager; // x0

  if ( !svt || (AiStateManager = BattleServantData__get_AiStateManager(svt, 0LL)) == 0LL )
    sub_B170D4();
  return AiStateManager->fields._IsSetAiState_k__BackingField;
}