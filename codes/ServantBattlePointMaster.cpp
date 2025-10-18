void ServantBattlePointMaster___ctor(ServantBattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C437F6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
    byte_4C437F6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    513,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *ServantBattlePointMaster__GetBattlePointEntities(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  ServantBattlePointMaster___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v13; // x21
  struct ServantBattlePointMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  ServantBattlePointMaster___c_c *v18; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v21; // x21
  struct ServantBattlePointMaster___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C437F5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
    sub_1C37058(&System_Func_ServantBattlePointEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_ServantBattlePointEntity__int__TypeInfo);
    sub_1C37058(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__);
    sub_1C37058(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__);
    sub_1C37058(&Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__);
    sub_1C37058(&ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&ServantBattlePointMaster___c_TypeInfo);
    byte_4C437F5 = 1;
  }
  v5 = sub_1C372A4(ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = svtId;
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ServantBattlePointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
  v10 = ServantBattlePointMaster___c_TypeInfo;
  v11 = v9;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v10 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v10->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ServantBattlePointMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v13,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__,
      0);
    static_fields = ServantBattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderBy_object__int_(
          v11,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
  v18 = ServantBattlePointMaster___c_TypeInfo;
  v19 = v17;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v18 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__int__o *)v18->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = ServantBattlePointMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_2,
      v21,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__,
      0);
    v22 = ServantBattlePointMaster___c_TypeInfo->static_fields;
    v22->__9__0_2 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v22->__9__0_2, (int32_t)_9__0_2, v23, v24);
  }
  return (System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                                 v19,
                                                                                 (System_Func_TSource__TKey__o *)_9__0_2,
                                                                                 (const MethodInfo_3126458 *)Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
}


ServantBattlePointEntity_o *ServantBattlePointMaster__GetEntity(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C437F7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
    byte_4C437F7 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0);
  return (ServantBattlePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33A5B58 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
}


bool ServantBattlePointMaster__TryGetEntity(
        ServantBattlePointMaster_o *this,
        ServantBattlePointEntity_o **entity,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C437F8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
    byte_4C437F8 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
}


void ServantBattlePointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C437F9 & 1) == 0 )
  {
    sub_1C37058(&ServantBattlePointMaster___c_TypeInfo);
    byte_4C437F9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantBattlePointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantBattlePointMaster___c_TypeInfo->static_fields->__9 = (struct ServantBattlePointMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantBattlePointMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantBattlePointMaster___c___ctor(ServantBattlePointMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantBattlePointMaster___c___GetBattlePointEntities_b__0_1(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.svtId;
}


int32_t ServantBattlePointMaster___c___GetBattlePointEntities_b__0_2(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.battlePointId;
}


void ServantBattlePointMaster___c__DisplayClass0_0___ctor(
        ServantBattlePointMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantBattlePointMaster___c__DisplayClass0_0___GetBattlePointEntities_b__0(
        ServantBattlePointMaster___c__DisplayClass0_0_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.svtId == this->fields.svtId;
}