void __fastcall ReactTaskTargetPlayer___ctor(ReactTaskTargetPlayer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantData_array *__fastcall ReactTaskTargetPlayer__TargetServants(
        ReactTaskTargetPlayer_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
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
  System_Collections_Generic_IEnumerable_TSource__o *FieldPlayerServantList; // x19
  ReactTaskTargetPlayer___c_c *v21; // x8
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x20
  Il2CppObject *v24; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E6F8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, v14, v15, v16);
    this = (ReactTaskTargetPlayer_o *)sub_B5D5C4(&ReactTaskTargetPlayer___c_TypeInfo, v17, v18, v19);
    byte_42E6F8D = 1;
  }
  if ( !data )
    sub_B5D69C(this, data);
  FieldPlayerServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldPlayerServantList(
                                                                                  data,
                                                                                  0LL);
  v21 = ReactTaskTargetPlayer___c_TypeInfo;
  if ( (BYTE3(ReactTaskTargetPlayer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo);
    v21 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v24,
      Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
    v25 = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    v25->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          FieldPlayerServantList,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v32,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void __fastcall ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F36 & 1) == 0 )
  {
    sub_B5D5C4(&ReactTaskTargetPlayer___c_TypeInfo, v1, v2, v3);
    byte_42E7F36 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ReactTaskTargetPlayer___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)ReactTaskTargetPlayer___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, svt);
  return (bool)this[3].monitor;
}