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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ReactTaskTargetPlayer___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__bool__o *_9__0_0; // x20
  Il2CppObject *v19; // x21
  struct ReactTaskTargetPlayer___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_4B18ECB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, data, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4, v5);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, v8, v9);
    this = (ReactTaskTargetPlayer_o *)sub_1BCA7E0(&ReactTaskTargetPlayer___c_TypeInfo, v10, v11);
    byte_4B18ECB = 1;
  }
  if ( !data )
    sub_1BCAA3C(this, data);
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  v16 = ReactTaskTargetPlayer___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldPlayerServantList;
  if ( !ReactTaskTargetPlayer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ReactTaskTargetPlayer___c_TypeInfo, v13);
    v16 = ReactTaskTargetPlayer___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v16->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v13);
      v16 = ReactTaskTargetPlayer___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v13, v14, v15);
    System_Func_object__bool____ctor(_9__0_0, v19, Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, 0LL);
    static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v27,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void __fastcall ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18ECC & 1) == 0 )
  {
    sub_1BCA7E0(&ReactTaskTargetPlayer___c_TypeInfo, v1, v2);
    byte_4B18ECC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ReactTaskTargetPlayer___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ReactTaskTargetPlayer___c_TypeInfo->static_fields->__9 = (struct ReactTaskTargetPlayer___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ReactTaskTargetPlayer___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, svt);
  return (bool)this[3].monitor;
}