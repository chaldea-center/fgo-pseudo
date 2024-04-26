void __fastcall ReactTaskTargetPlayer___ctor(ReactTaskTargetPlayer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantData_array *__fastcall ReactTaskTargetPlayer__TargetServants(
        ReactTaskTargetPlayer_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  ReactTaskTargetPlayer___c_c *v5; // x8
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x20
  Il2CppObject *v8; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4350274 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B70694(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B70694(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B70694(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__);
    this = (ReactTaskTargetPlayer_o *)sub_B70694(&ReactTaskTargetPlayer___c_TypeInfo);
    byte_4350274 = 1;
  }
  if ( !data )
    sub_B7076C(this, data);
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v5 = ReactTaskTargetPlayer___c_TypeInfo;
  if ( (BYTE3(ReactTaskTargetPlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo);
    v5 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v8,
      Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleServantData__bool___ctor__);
    v9 = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    v9->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v9->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v16,
                                      (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void __fastcall ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x0

  if ( (byte_434F422 & 1) == 0 )
  {
    sub_B70694(&ReactTaskTargetPlayer___c_TypeInfo);
    byte_434F422 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ReactTaskTargetPlayer___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ReactTaskTargetPlayer___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, svt);
  return (bool)this[3].monitor;
}