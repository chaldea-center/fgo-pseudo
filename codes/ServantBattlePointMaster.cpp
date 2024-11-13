void __fastcall ServantBattlePointMaster___ctor(ServantBattlePointMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1685B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__, method, v2);
    byte_4B1685B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    506,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *__fastcall ServantBattlePointMaster__GetBattlePointEntities(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Func_object__bool__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  ServantBattlePointMaster___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v41; // x21
  struct ServantBattlePointMaster___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  ServantBattlePointMaster___c_c *v53; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v54; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v56; // x21
  struct ServantBattlePointMaster___c_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B1685A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___, v10, v11);
    sub_1BCA7E0(&System_Func_ServantBattlePointEntity__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Func_ServantBattlePointEntity__int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__, v16, v17);
    sub_1BCA7E0(&Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__, v18, v19);
    sub_1BCA7E0(&Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__, v20, v21);
    sub_1BCA7E0(&ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&ServantBattlePointMaster___c_TypeInfo, v24, v25);
    byte_4B1685A = 1;
  }
  v26 = sub_1BCAA2C(ServantBattlePointMaster___c__DisplayClass0_0_TypeInfo, *(_QWORD *)&svtId, method, v3);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    sub_1BCAA3C(v27, v28);
  *(_DWORD *)(v26 + 16) = svtId;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_ServantBattlePointEntity___);
  v33 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ServantBattlePointEntity__bool__TypeInfo, v30, v31, v32);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v26,
    Method_ServantBattlePointMaster___c__DisplayClass0_0__GetBattlePointEntities_b__0__,
    0LL);
  v34 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ServantBattlePointEntity___);
  v38 = ServantBattlePointMaster___c_TypeInfo;
  v39 = v34;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo, v35);
    v38 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v38->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38, v35);
      v38 = ServantBattlePointMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_ServantBattlePointEntity__int__TypeInfo,
                                              v35,
                                              v36,
                                              v37);
    System_Func_object__int____ctor(
      _9__0_1,
      v41,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_1__,
      0LL);
    static_fields = ServantBattlePointMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_1, (int64_t)_9__0_1, v43, v44, v45, v46, v47, v48);
  }
  v49 = System_Linq_Enumerable__OrderBy_object__int_(
          v39,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_ServantBattlePointEntity__int___);
  v53 = ServantBattlePointMaster___c_TypeInfo;
  v54 = v49;
  if ( !ServantBattlePointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBattlePointMaster___c_TypeInfo, v50);
    v53 = ServantBattlePointMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__int__o *)v53->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53, v50);
      v53 = ServantBattlePointMaster___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v53->static_fields->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_ServantBattlePointEntity__int__TypeInfo,
                                              v50,
                                              v51,
                                              v52);
    System_Func_object__int____ctor(
      _9__0_2,
      v56,
      Method_ServantBattlePointMaster___c__GetBattlePointEntities_b__0_2__,
      0LL);
    v57 = ServantBattlePointMaster___c_TypeInfo->static_fields;
    v57->__9__0_2 = (struct System_Func_ServantBattlePointEntity__int__o *)_9__0_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v57->__9__0_2, (int64_t)_9__0_2, v58, v59, v60, v61, v62, v63);
  }
  return (System_Collections_Generic_IEnumerable_ServantBattlePointEntity__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                                 v54,
                                                                                 (System_Func_TSource__TKey__o *)_9__0_2,
                                                                                 (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_ServantBattlePointEntity__int___);
}


// local variable allocation has failed, the output may be wrong!
ServantBattlePointEntity_o *__fastcall ServantBattlePointMaster__GetEntity(
        ServantBattlePointMaster_o *this,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1685C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&battlePointId);
    byte_4B1685C = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return (ServantBattlePointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantBattlePointMaster__TryGetEntity(
        ServantBattlePointMaster_o *this,
        ServantBattlePointEntity_o **entity,
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1685D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B1685D = 1;
  }
  PK = (Il2CppObject *)ServantBattlePointEntity__CreatePK(svtId, battlePointId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantBattlePointMaster__ServantBattlePointEntity__string__TryGetEntity__);
}


void __fastcall ServantBattlePointMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1685E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantBattlePointMaster___c_TypeInfo, v1, v2);
    byte_4B1685E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantBattlePointMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantBattlePointMaster___c_TypeInfo->static_fields->__9 = (struct ServantBattlePointMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantBattlePointMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.svtId;
}


int32_t __fastcall ServantBattlePointMaster___c___GetBattlePointEntities_b__0_2(
        ServantBattlePointMaster___c_o *this,
        ServantBattlePointEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.svtId == this->fields.svtId;
}