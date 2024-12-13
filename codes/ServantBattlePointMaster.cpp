void __fastcall ServantBattlePointMaster___ctor(ServantBattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37810 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__, method);
    byte_4B37810 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    506,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  ServantBattlePointMaster___c_c *v33; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v36; // x21
  struct ServantBattlePointMaster___c_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B3780F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___, *(_QWORD *)&svtId);
    sub_1BD3458(&Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___, v6);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___, v7);
    sub_1BD3458(&System_Func_ServantBattlePointEntity__bool__TypeInfo, v8);
    sub_1BD3458(&System_Func_ServantBattlePointEntity__int__TypeInfo, v9);
    sub_1BD3458(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__, v10);
    sub_1BD3458(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__, v11);
    sub_1BD3458(&Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__, v12);
    sub_1BD3458(&ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo, v13);
    sub_1BD3458(&ServantBattlePointMaster___c_TypeInfo, v14);
    byte_4B3780F = 1;
  }
  v15 = sub_1BD36A4(ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BD36B4(v16, v17);
  *(_DWORD *)(v15 + 16) = svtId;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F5A2A0 *)Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___);
  v19 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_ServantBattlePointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__Where_object_(
          v18,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
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
    _9__0_1 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v24,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__,
      0LL);
    static_fields = ServantBattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__0_1, (int64_t)_9__0_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__OrderBy_object__int_(
          v22,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_2F5A740 *)Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
  v33 = ServantBattlePointMaster___c_TypeInfo;
  v34 = v32;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo);
    v33 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__int__o *)v33->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = ServantBattlePointMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_ServantBattlePointEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_2,
      v36,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__,
      0LL);
    v37 = ServantBattlePointMaster___c_TypeInfo->static_fields;
    v37->__9__0_2 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_2;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v37->__9__0_2, (int64_t)_9__0_2, v38, v39, v40, v41, v42, v43);
  }
  return (System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                                 v34,
                                                                                 (System_Func_TSource__TKey__o *)_9__0_2,
                                                                                 (const MethodInfo_2F6A248 *)Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
}


// local variable allocation has failed, the output may be wrong!
ServantBattlePointEntity_o *__fastcall ServantBattlePointMaster__GetEntity(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B37811 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B37811 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return (ServantBattlePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31D2248 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
}


bool __fastcall ServantBattlePointMaster__TryGetEntity(
        ServantBattlePointMaster_o *this,
        ServantBattlePointEntity_o **entity,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B37812 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__,
      entity);
    byte_4B37812 = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
}


void __fastcall ServantBattlePointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B37813 & 1) == 0 )
  {
    sub_1BD3458(&ServantBattlePointMaster___c_TypeInfo, v1);
    byte_4B37813 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(ServantBattlePointMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBattlePointMaster___c_TypeInfo->static_fields->__9 = (struct ServantBattlePointMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)ServantBattlePointMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return entity->fields.svtId;
}


int32_t __fastcall ServantBattlePointMaster___c___GetBattlePointEntities_b__0_2(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BD36B4(this, 0LL);
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
    sub_1BD36B4(this, 0LL);
  return entity->fields.svtId == this->fields.svtId;
}