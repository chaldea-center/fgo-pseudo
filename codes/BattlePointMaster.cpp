void __fastcall BattlePointMaster___ctor(BattlePointMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__, method, v2);
    byte_4B15E8D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    504,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattlePointMaster__GetBattlePointIds(
        BattlePointMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BattlePointMaster___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v25; // x21
  struct BattlePointMaster___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  BattlePointMaster___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_int__int__o *_9__0_1; // x20
  Il2CppObject *v40; // x21
  struct BattlePointMaster___c_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B15E8C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_BattlePointEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_int__int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattlePointEntity__int___, v6, v7);
    sub_1BCA7E0(&System_Func_BattlePointEntity__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, v12, v13);
    sub_1BCA7E0(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, v14, v15);
    sub_1BCA7E0(&BattlePointMaster___c_TypeInfo, v16, v17);
    byte_4B15E8C = 1;
  }
  v18 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_BattlePointEntity___);
  v22 = BattlePointMaster___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo, v19);
    v22 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v22->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, v19);
      v22 = BattlePointMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattlePointEntity__int__TypeInfo, v19, v20, v21);
    System_Func_object__int____ctor(_9__0_0, v25, Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, 0LL);
    static_fields = BattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattlePointEntity__int__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v27, v28, v29, v30, v31, v32);
  }
  v33 = System_Linq_Enumerable__Select_object__int_(
          v23,
          (System_Func_TSource__TResult__o *)_9__0_0,
          (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
  v37 = BattlePointMaster___c_TypeInfo;
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo, v34);
    v37 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = v37->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37, v34);
      v37 = BattlePointMaster___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__0_1 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v34, v35, v36);
    System_Func_int__int____ctor(_9__0_1, v40, Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, 0LL);
    v41 = BattlePointMaster___c_TypeInfo->static_fields;
    v41->__9__0_1 = _9__0_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v41->__9__0_1, (int64_t)_9__0_1, v42, v43, v44, v45, v46, v47);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                            v38,
                                                            (System_Func_TSource__TKey__o *)_9__0_1,
                                                            (const MethodInfo_2F3B178 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
}


void __fastcall BattlePointMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15E8E & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePointMaster___c_TypeInfo, v1, v2);
    byte_4B15E8E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattlePointMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattlePointMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattlePointMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattlePointMaster___c___ctor(BattlePointMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattlePointMaster___c___GetBattlePointIds_b__0_0(
        BattlePointMaster___c_o *this,
        BattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.id;
}


int32_t __fastcall BattlePointMaster___c___GetBattlePointIds_b__0_1(
        BattlePointMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id;
}