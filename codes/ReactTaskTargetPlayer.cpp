void __fastcall ReactTaskTargetPlayer___ctor(ReactTaskTargetPlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ReactTaskTarget___ctor((ReactTaskTarget_o *)this, 0LL, v2);
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
  BattleServantData_array *FieldPlayerServantList; // x0
  ReactTaskTargetPlayer___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *_9__0_0; // x20
  Il2CppObject *v12; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_49BDCE5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, data);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_1B4CF90(&System_Func_BattleServantData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, v6);
    this = (ReactTaskTargetPlayer_o *)sub_1B4CF90(&ReactTaskTargetPlayer___c_TypeInfo, v7);
    byte_49BDCE5 = 1;
  }
  if ( !data )
    sub_1B4D1EC(this, data);
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  v9 = ReactTaskTargetPlayer___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo);
    v9 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v9->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ReactTaskTargetPlayer___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__0_0, v12, Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, 0LL);
    static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void __fastcall ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BDCE6 & 1) == 0 )
  {
    sub_1B4CF90(&ReactTaskTargetPlayer___c_TypeInfo, v1);
    byte_49BDCE6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ReactTaskTargetPlayer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ReactTaskTargetPlayer___c_TypeInfo->static_fields->__9 = (struct ReactTaskTargetPlayer___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ReactTaskTargetPlayer___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, svt);
  return (bool)this[3].monitor;
}