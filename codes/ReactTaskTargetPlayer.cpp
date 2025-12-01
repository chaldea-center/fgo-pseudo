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
  ReactTaskTargetPlayer___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__bool__o *_9__0_0; // x20
  Il2CppObject *v8; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4CCA6FD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C713B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C713B0(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__);
    this = (ReactTaskTargetPlayer_o *)sub_1C713B0(&ReactTaskTargetPlayer___c_TypeInfo);
    byte_4CCA6FD = 1;
  }
  if ( !data )
    sub_1C71608(this, data);
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0);
  v5 = ReactTaskTargetPlayer___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo);
    v5 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v5->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ReactTaskTargetPlayer___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__0_0, v8, Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, 0);
    static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCA6FE & 1) == 0 )
  {
    sub_1C713B0(&ReactTaskTargetPlayer___c_TypeInfo);
    byte_4CCA6FE = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ReactTaskTargetPlayer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ReactTaskTargetPlayer___c_TypeInfo->static_fields->__9 = (struct ReactTaskTargetPlayer___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ReactTaskTargetPlayer___c_TypeInfo->static_fields,
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
    sub_1C71608(this, svt);
  return (bool)this[3].monitor;
}