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
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  ReactTaskTargetPlayer___c_c *v10; // x8
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x20
  Il2CppObject *v13; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4186100 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, data);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, v7);
    this = (ReactTaskTargetPlayer_o *)sub_B2C35C(&ReactTaskTargetPlayer___c_TypeInfo, v8);
    byte_4186100 = 1;
  }
  if ( !data )
    sub_B2C434(this, data);
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v10 = ReactTaskTargetPlayer___c_TypeInfo;
  if ( (BYTE3(ReactTaskTargetPlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo);
    v10 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v13,
      Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
    v14 = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    v14->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v14->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v21,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void __fastcall ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x0

  if ( (byte_4185641 & 1) == 0 )
  {
    sub_B2C35C(&ReactTaskTargetPlayer___c_TypeInfo, v1);
    byte_4185641 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ReactTaskTargetPlayer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ReactTaskTargetPlayer___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, svt);
  return (bool)this[3].monitor;
}