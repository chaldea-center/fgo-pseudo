void __fastcall ServantBattlePointMaster___ctor(ServantBattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CD22 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__, method);
    byte_4B1CD22 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    513,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *__fastcall ServantBattlePointMaster__GetBattlePointEntities(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  ServantBattlePointMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v23; // x21
  struct ServantBattlePointMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  ServantBattlePointMaster___c_c *v28; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v31; // x21
  struct ServantBattlePointMaster___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_4B1CD21 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___, v6);
    sub_1BCAFF8(&System_Func_ServantBattlePointEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&System_Func_ServantBattlePointEntity__int__TypeInfo, v8);
    sub_1BCAFF8(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__, v9);
    sub_1BCAFF8(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__, v10);
    sub_1BCAFF8(&Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__, v11);
    sub_1BCAFF8(&ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo, v12);
    sub_1BCAFF8(&ServantBattlePointMaster___c_TypeInfo, v13);
    byte_4B1CD21 = 1;
  }
  v14 = sub_1BCB244(ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCB254(v15, v16);
  *(_DWORD *)(v14 + 16) = svtId;
  list = this->fields.list;
  v18 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ServantBattlePointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
  v20 = ServantBattlePointMaster___c_TypeInfo;
  v21 = v19;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v20 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v20->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ServantBattlePointMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v23,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__,
      0LL);
    static_fields = ServantBattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v25, v26);
  }
  v27 = System_Linq_Enumerable__OrderBy_object__int_(
          v21,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_3046148 *)Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
  v28 = ServantBattlePointMaster___c_TypeInfo;
  v29 = v27;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v28 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__int__o *)v28->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = ServantBattlePointMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_1BCB244(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_2,
      v31,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__,
      0LL);
    v32 = ServantBattlePointMaster___c_TypeInfo->static_fields;
    v32->__9__0_2 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v32->__9__0_2, (int32_t)_9__0_2, v33, v34);
  }
  return (System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                                 v29,
                                                                                 (System_Func_TSource__TKey__o *)_9__0_2,
                                                                                 (const MethodInfo_305668C *)Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
}


// local variable allocation has failed, the output may be wrong!
ServantBattlePointEntity_o *__fastcall ServantBattlePointMaster__GetEntity(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CD23 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B1CD23 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return (ServantBattlePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
}


bool __fastcall ServantBattlePointMaster__TryGetEntity(
        ServantBattlePointMaster_o *this,
        ServantBattlePointEntity_o **entity,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1CD24 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__,
      entity);
    byte_4B1CD24 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
}


void __fastcall ServantBattlePointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CD25 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantBattlePointMaster___c_TypeInfo, v1);
    byte_4B1CD25 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantBattlePointMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBattlePointMaster___c_TypeInfo->static_fields->__9 = (struct ServantBattlePointMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantBattlePointMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
  return entity->fields.svtId;
}


int32_t __fastcall ServantBattlePointMaster___c___GetBattlePointEntities_b__0_2(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
  return entity->fields.svtId == this->fields.svtId;
}