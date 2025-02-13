void __fastcall ServantBattlePointMaster___ctor(ServantBattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCBE1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
    byte_4BDCBE1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    510,
    (const MethodInfo_325E55C *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *__fastcall ServantBattlePointMaster__GetBattlePointEntities(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  ServantBattlePointMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v14; // x21
  struct ServantBattlePointMaster___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x0
  ServantBattlePointMaster___c_c *v23; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v26; // x21
  struct ServantBattlePointMaster___c_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BDCBE0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
    sub_1C21E38(&System_Func_ServantBattlePointEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_ServantBattlePointEntity__int__TypeInfo);
    sub_1C21E38(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__);
    sub_1C21E38(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__);
    sub_1C21E38(&Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__);
    sub_1C21E38(&ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&ServantBattlePointMaster___c_TypeInfo);
    byte_4BDCBE0 = 1;
  }
  v5 = sub_1C22084(ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___);
  v9 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ServantBattlePointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
  v11 = ServantBattlePointMaster___c_TypeInfo;
  v12 = v10;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v11 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v11->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantBattlePointMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v14,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__,
      0LL);
    static_fields = ServantBattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_1, (int64_t)_9__0_1, v16, v17, v18, v19, v20, v21);
  }
  v22 = System_Linq_Enumerable__OrderBy_object__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
  v23 = ServantBattlePointMaster___c_TypeInfo;
  v24 = v22;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v23 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__int__o *)v23->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ServantBattlePointMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_1C22084(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_2,
      v26,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__,
      0LL);
    v27 = ServantBattlePointMaster___c_TypeInfo->static_fields;
    v27->__9__0_2 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v27->__9__0_2, (int64_t)_9__0_2, v28, v29, v30, v31, v32, v33);
  }
  return (System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                                 v24,
                                                                                 (System_Func_TSource__TKey__o *)_9__0_2,
                                                                                 (const MethodInfo_2FE8C78 *)Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
}


ServantBattlePointEntity_o *__fastcall ServantBattlePointMaster__GetEntity(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDCBE2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
    byte_4BDCBE2 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return (ServantBattlePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3260880 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
}


bool __fastcall ServantBattlePointMaster__TryGetEntity(
        ServantBattlePointMaster_o *this,
        ServantBattlePointEntity_o **entity,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDCBE3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
    byte_4BDCBE3 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
}


void __fastcall ServantBattlePointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDCBE4 & 1) == 0 )
  {
    sub_1C21E38(&ServantBattlePointMaster___c_TypeInfo);
    byte_4BDCBE4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ServantBattlePointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantBattlePointMaster___c_TypeInfo->static_fields->__9 = (struct ServantBattlePointMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantBattlePointMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantBattlePointMaster___c___ctor(ServantBattlePointMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantBattlePointMaster___c___GetBattlePointEntities_b__0_1(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C22094(this, 0LL);
  return entity->fields.svtId;
}


int32_t __fastcall ServantBattlePointMaster___c___GetBattlePointEntities_b__0_2(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C22094(this, 0LL);
  return entity->fields.battlePointId;
}


void __fastcall ServantBattlePointMaster___c__DisplayClass0_0___ctor(
        ServantBattlePointMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantBattlePointMaster___c__DisplayClass0_0___GetBattlePointEntities_b__0(
        ServantBattlePointMaster___c__DisplayClass0_0_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C22094(this, 0LL);
  return entity->fields.svtId == this->fields.svtId;
}