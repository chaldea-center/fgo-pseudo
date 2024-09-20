void __fastcall ServantBattlePointMaster___ctor(ServantBattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B7AA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
    byte_4A5B7AA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    506,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  ServantBattlePointMaster___c_c *v19; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v22; // x21
  struct ServantBattlePointMaster___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A5B7A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
    sub_1B885B0(&System_Func_ServantBattlePointEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_ServantBattlePointEntity__int__TypeInfo);
    sub_1B885B0(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__);
    sub_1B885B0(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__);
    sub_1B885B0(&Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__);
    sub_1B885B0(&ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&ServantBattlePointMaster___c_TypeInfo);
    byte_4A5B7A9 = 1;
  }
  v5 = sub_1B887FC(ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___);
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ServantBattlePointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
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
    _9__0_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v14,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__,
      0LL);
    static_fields = ServantBattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v16, v17);
  }
  v18 = System_Linq_Enumerable__OrderBy_object__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
  v19 = ServantBattlePointMaster___c_TypeInfo;
  v20 = v18;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v19 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__int__o *)v19->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ServantBattlePointMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_2,
      v22,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__,
      0LL);
    v23 = ServantBattlePointMaster___c_TypeInfo->static_fields;
    v23->__9__0_2 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->__9__0_2, (int32_t)_9__0_2, v24, v25);
  }
  return (System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                                 v20,
                                                                                 (System_Func_TSource__TKey__o *)_9__0_2,
                                                                                 (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
}


ServantBattlePointEntity_o *__fastcall ServantBattlePointMaster__GetEntity(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B7AB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
    byte_4A5B7AB = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return (ServantBattlePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
}


bool __fastcall ServantBattlePointMaster__TryGetEntity(
        ServantBattlePointMaster_o *this,
        ServantBattlePointEntity_o **entity,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B7AC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
    byte_4A5B7AC = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
}


void __fastcall ServantBattlePointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B7AD & 1) == 0 )
  {
    sub_1B885B0(&ServantBattlePointMaster___c_TypeInfo);
    byte_4A5B7AD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantBattlePointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantBattlePointMaster___c_TypeInfo->static_fields->__9 = (struct ServantBattlePointMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantBattlePointMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return entity->fields.svtId;
}


int32_t __fastcall ServantBattlePointMaster___c___GetBattlePointEntities_b__0_2(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return entity->fields.svtId == this->fields.svtId;
}