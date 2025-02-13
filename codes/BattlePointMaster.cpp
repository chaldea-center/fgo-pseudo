void __fastcall BattlePointMaster___ctor(BattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC1C9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
    byte_4BDC1C9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    508,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattlePointMaster__GetBattlePointIds(
        BattlePointMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TResult__o *v3; // x0
  BattlePointMaster___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v7; // x21
  struct BattlePointMaster___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  BattlePointMaster___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_int__int__o *_9__0_1; // x20
  Il2CppObject *v19; // x21
  struct BattlePointMaster___c_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BDC1C8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_BattlePointEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
    sub_1C21E38(&System_Func_BattlePointEntity__int__TypeInfo);
    sub_1C21E38(&System_Func_int__int__TypeInfo);
    sub_1C21E38(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__);
    sub_1C21E38(&Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__);
    sub_1C21E38(&BattlePointMaster___c_TypeInfo);
    byte_4BDC1C8 = 1;
  }
  v3 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_BattlePointEntity___);
  v4 = BattlePointMaster___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v4 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v4->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattlePointMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v7, Method_BattlePointMaster___c__GetBattlePointIds_b__0_0__, 0LL);
    static_fields = BattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattlePointEntity__int__o *)_9__0_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Select_object__int_(
          v5,
          (System_Func_TSource__TResult__o *)_9__0_0,
          (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_BattlePointEntity__int___);
  v16 = BattlePointMaster___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !BattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePointMaster___c_TypeInfo);
    v16 = BattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = v16->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattlePointMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__0_1 = (System_Func_int__int__o *)sub_1C22084(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__0_1, v19, Method_BattlePointMaster___c__GetBattlePointIds_b__0_1__, 0LL);
    v20 = BattlePointMaster___c_TypeInfo->static_fields;
    v20->__9__0_1 = _9__0_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v20->__9__0_1, (int64_t)_9__0_1, v21, v22, v23, v24, v25, v26);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                            v17,
                                                            (System_Func_TSource__TKey__o *)_9__0_1,
                                                            (const MethodInfo_2FD8CC0 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
}


void __fastcall BattlePointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC1CA & 1) == 0 )
  {
    sub_1C21E38(&BattlePointMaster___c_TypeInfo);
    byte_4BDC1CA = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattlePointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattlePointMaster___c_TypeInfo->static_fields->__9 = (struct BattlePointMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattlePointMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return entity->fields.id;
}


int32_t __fastcall BattlePointMaster___c___GetBattlePointIds_b__0_1(
        BattlePointMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id;
}