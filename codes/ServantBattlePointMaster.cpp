void __fastcall ServantBattlePointMaster___ctor(ServantBattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB63A7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__, method);
    byte_4AB63A7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    506,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
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
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__bool__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  ServantBattlePointMaster___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v24; // x21
  struct ServantBattlePointMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  ServantBattlePointMaster___c_c *v29; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v32; // x21
  struct ServantBattlePointMaster___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3

  if ( (byte_4AB63A6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___, *(_QWORD *)&svtId);
    sub_1BAB41C(&Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___, v5);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___, v6);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___, v7);
    sub_1BAB41C(&System_Func_ServantBattlePointEntity__bool__TypeInfo, v8);
    sub_1BAB41C(&System_Func_ServantBattlePointEntity__int__TypeInfo, v9);
    sub_1BAB41C(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__, v10);
    sub_1BAB41C(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__, v11);
    sub_1BAB41C(&Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__, v12);
    sub_1BAB41C(&ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo, v13);
    sub_1BAB41C(&ServantBattlePointMaster___c_TypeInfo, v14);
    byte_4AB63A6 = 1;
  }
  v15 = sub_1BAB668(ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BAB678(v16, v17);
  *(_DWORD *)(v15 + 16) = svtId;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2EED82C *)Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___);
  v19 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_ServantBattlePointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__Where_object_(
          v18,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
  v21 = ServantBattlePointMaster___c_TypeInfo;
  v22 = v20;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v21 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v21->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ServantBattlePointMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BAB668(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v24,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__,
      0LL);
    static_fields = ServantBattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v26, v27);
  }
  v28 = System_Linq_Enumerable__OrderBy_object__int_(
          v22,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_2EEDCCC *)Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
  v29 = ServantBattlePointMaster___c_TypeInfo;
  v30 = v28;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v29 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__int__o *)v29->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = ServantBattlePointMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_1BAB668(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_2,
      v32,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__,
      0LL);
    v33 = ServantBattlePointMaster___c_TypeInfo->static_fields;
    v33->__9__0_2 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_2;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v33->__9__0_2, (int32_t)_9__0_2, v34, v35);
  }
  return (System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                                 v30,
                                                                                 (System_Func_TSource__TKey__o *)_9__0_2,
                                                                                 (const MethodInfo_2EFC580 *)Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
}


// local variable allocation has failed, the output may be wrong!
ServantBattlePointEntity_o *__fastcall ServantBattlePointMaster__GetEntity(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB63A8 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4AB63A8 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return (ServantBattlePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31640E8 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
}


bool __fastcall ServantBattlePointMaster__TryGetEntity(
        ServantBattlePointMaster_o *this,
        ServantBattlePointEntity_o **entity,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB63A9 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__,
      entity);
    byte_4AB63A9 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
}


void __fastcall ServantBattlePointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB63AA & 1) == 0 )
  {
    sub_1BAB41C(&ServantBattlePointMaster___c_TypeInfo, v1);
    byte_4AB63AA = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(ServantBattlePointMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBattlePointMaster___c_TypeInfo->static_fields->__9 = (struct ServantBattlePointMaster___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)ServantBattlePointMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1BAB678(this, 0LL);
  return entity->fields.svtId;
}


int32_t __fastcall ServantBattlePointMaster___c___GetBattlePointEntities_b__0_2(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BAB678(this, 0LL);
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
    sub_1BAB678(this, 0LL);
  return entity->fields.svtId == this->fields.svtId;
}