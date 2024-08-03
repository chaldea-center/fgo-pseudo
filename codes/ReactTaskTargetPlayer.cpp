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
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  ReactTaskTargetPlayer___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__bool__o *_9__0_0; // x20
  Il2CppObject *v14; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_49FEFF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, data);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, v6);
    this = (ReactTaskTargetPlayer_o *)sub_1B640C8(&ReactTaskTargetPlayer___c_TypeInfo, v7);
    byte_49FEFF9 = 1;
  }
  if ( !data )
    sub_1B64324(this);
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  v11 = ReactTaskTargetPlayer___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo);
    v11 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v11->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ReactTaskTargetPlayer___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v9, v10);
    System_Func_object__bool____ctor(_9__0_0, v14, Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, 0LL);
    static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v18,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void __fastcall ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEFFA & 1) == 0 )
  {
    sub_1B640C8(&ReactTaskTargetPlayer___c_TypeInfo, v1);
    byte_49FEFFA = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ReactTaskTargetPlayer___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ReactTaskTargetPlayer___c_TypeInfo->static_fields->__9 = (struct ReactTaskTargetPlayer___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ReactTaskTargetPlayer___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return (bool)this[3].monitor;
}