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
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  ReactTaskTargetPlayer___c_c *v12; // x8
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x20
  Il2CppObject *v15; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4212F0B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, data);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, v7);
    this = (ReactTaskTargetPlayer_o *)sub_B0D8A4(&ReactTaskTargetPlayer___c_TypeInfo, v8);
    byte_4212F0B = 1;
  }
  if ( !data )
    sub_B0D97C(this);
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v12 = ReactTaskTargetPlayer___c_TypeInfo;
  if ( (BYTE3(ReactTaskTargetPlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo);
    v12 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_BattleServantData__bool__TypeInfo,
                                                                                   v9,
                                                                                   v10);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v15,
      Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
    v16 = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    v16->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v16->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v23,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void __fastcall ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x0

  if ( (byte_4212512 & 1) == 0 )
  {
    sub_B0D8A4(&ReactTaskTargetPlayer___c_TypeInfo, v1);
    byte_4212512 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ReactTaskTargetPlayer___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ReactTaskTargetPlayer___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  if ( !svt || (this = (ReactTaskTargetPlayer___c_o *)BattleServantData__get_AiStateManager(svt, 0LL)) == 0LL )
    sub_B0D97C(this);
  return (bool)this[3].monitor;
}