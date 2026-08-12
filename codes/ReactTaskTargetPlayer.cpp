void ReactTaskTargetPlayer___ctor(ReactTaskTargetPlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ReactTaskTarget___ctor((ReactTaskTarget_o *)this, 0, v2);
}


BattleServantData_array *ReactTaskTargetPlayer__TargetServants(
        ReactTaskTargetPlayer_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v5; // x1
  ReactTaskTargetPlayer___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__0_0; // x20
  Il2CppObject *v10; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_5973CDC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__);
    this = (ReactTaskTargetPlayer_o *)sub_2213A60(&ReactTaskTargetPlayer___c_TypeInfo);
    byte_5973CDC = 1;
  }
  if ( !data )
    sub_2213CDC(this, data);
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0);
  v6 = ReactTaskTargetPlayer___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !*(&ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo, v5);
    v6 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__0_0 = (System_Func_object__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__0_0, v10, Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, 0);
    v11 = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    v11->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__0_0, (int32_t)_9__0_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v18,
                                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973CDD & 1) == 0 )
  {
    sub_2213A60(&ReactTaskTargetPlayer___c_TypeInfo);
    byte_5973CDD = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ReactTaskTargetPlayer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ReactTaskTargetPlayer___c_TypeInfo->static_fields->__9 = (struct ReactTaskTargetPlayer___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ReactTaskTargetPlayer___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ReactTaskTargetPlayer___c___ctor(ReactTaskTargetPlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ReactTaskTargetPlayer___c___TargetServants_b__0_0(
        ReactTaskTargetPlayer___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (ReactTaskTargetPlayer___c_o *)BattleServantData__get_AiStateManager(svt, 0)) == 0 )
    sub_2213CDC(this, svt);
  return *((_BYTE *)this + 56);
}