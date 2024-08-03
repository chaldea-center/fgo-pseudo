void __fastcall ServantBattlePointMaster___ctor(ServantBattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCA3B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__, method);
    byte_49FCA3B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    506,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
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
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_object__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  ServantBattlePointMaster___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v27; // x21
  struct ServantBattlePointMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  ServantBattlePointMaster___c_c *v34; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v37; // x21
  struct ServantBattlePointMaster___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_49FCA3A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___, v7);
    sub_1B640C8(&System_Func_ServantBattlePointEntity__bool__TypeInfo, v8);
    sub_1B640C8(&System_Func_ServantBattlePointEntity__int__TypeInfo, v9);
    sub_1B640C8(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__, v10);
    sub_1B640C8(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__, v11);
    sub_1B640C8(&Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__, v12);
    sub_1B640C8(&ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo, v13);
    sub_1B640C8(&ServantBattlePointMaster___c_TypeInfo, v14);
    byte_49FCA3A = 1;
  }
  v15 = sub_1B64314(ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo, *(_QWORD *)&svtId, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1B64324(v16);
  *(_DWORD *)(v15 + 16) = svtId;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___);
  v20 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ServantBattlePointEntity__bool__TypeInfo, v18, v19);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
  v24 = ServantBattlePointMaster___c_TypeInfo;
  v25 = v21;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v24 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v24->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = ServantBattlePointMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_ServantBattlePointEntity__int__TypeInfo, v22, v23);
    System_Func_object__int____ctor(
      _9__0_1,
      v27,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__,
      0LL);
    static_fields = ServantBattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v29, v30);
  }
  v31 = System_Linq_Enumerable__OrderBy_object__int_(
          v25,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
  v34 = ServantBattlePointMaster___c_TypeInfo;
  v35 = v31;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v34 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__int__o *)v34->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ServantBattlePointMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_1B64314(System_Func_ServantBattlePointEntity__int__TypeInfo, v32, v33);
    System_Func_object__int____ctor(
      _9__0_2,
      v37,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__,
      0LL);
    v38 = ServantBattlePointMaster___c_TypeInfo->static_fields;
    v38->__9__0_2 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->__9__0_2, (int32_t)_9__0_2, v39, v40);
  }
  return (System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                                 v35,
                                                                                 (System_Func_TSource__TKey__o *)_9__0_2,
                                                                                 (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
}


// local variable allocation has failed, the output may be wrong!
ServantBattlePointEntity_o *__fastcall ServantBattlePointMaster__GetEntity(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCA3C & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCA3C = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return (ServantBattlePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
}


bool __fastcall ServantBattlePointMaster__TryGetEntity(
        ServantBattlePointMaster_o *this,
        ServantBattlePointEntity_o **entity,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FCA3D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__,
      entity);
    byte_49FCA3D = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
}


void __fastcall ServantBattlePointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCA3E & 1) == 0 )
  {
    sub_1B640C8(&ServantBattlePointMaster___c_TypeInfo, v1);
    byte_49FCA3E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantBattlePointMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantBattlePointMaster___c_TypeInfo->static_fields->__9 = (struct ServantBattlePointMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantBattlePointMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return entity->fields.svtId;
}


int32_t __fastcall ServantBattlePointMaster___c___GetBattlePointEntities_b__0_2(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return entity->fields.svtId == this->fields.svtId;
}