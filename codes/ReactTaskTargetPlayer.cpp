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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4BB745C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, data);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4);
    sub_1C13D24(&System_Func_BattleServantData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, v6);
    this = (ReactTaskTargetPlayer_o *)sub_1C13D24(&ReactTaskTargetPlayer___c_TypeInfo, v7);
    byte_4BB745C = 1;
  }
  if ( !data )
    sub_1C13F80(this, data);
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
    _9__0_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__0_0, v12, Method_ReactTaskTargetPlayer___c__TargetServants_b__0_0__, 0LL);
    static_fields = ReactTaskTargetPlayer___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__bool__o *)_9__0_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v20,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


void __fastcall ReactTaskTargetPlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB745D & 1) == 0 )
  {
    sub_1C13D24(&ReactTaskTargetPlayer___c_TypeInfo, v1);
    byte_4BB745D = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ReactTaskTargetPlayer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ReactTaskTargetPlayer___c_TypeInfo->static_fields->__9 = (struct ReactTaskTargetPlayer___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ReactTaskTargetPlayer___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, svt);
  return (bool)this[3].monitor;
}