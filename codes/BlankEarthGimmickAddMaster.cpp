void __fastcall BlankEarthGimmickAddMaster___ctor(BlankEarthGimmickAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15EAB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string___ctor__,
      method,
      v2);
    byte_4B15EAB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    516,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickAddEntity_o *__fastcall BlankEarthGimmickAddMaster__GetEntity(
        BlankEarthGimmickAddMaster_o *this,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15EAC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__GetEntity__,
      *(_QWORD *)&blankEarthSpotId,
      *(_QWORD *)&priority);
    byte_4B15EAC = 1;
  }
  PK = (Il2CppObject *)BlankEarthGimmickAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&overwriteType);
  return (BlankEarthGimmickAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31B3198 *)Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickAddEntity_o *__fastcall BlankEarthGimmickAddMaster__GetPrioredAvailableEntity(
        BlankEarthGimmickAddMaster_o *this,
        int32_t type,
        int32_t blankEarthSpotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Func_object__bool__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  BlankEarthGimmickAddMaster___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  System_Func_object__int__o *_9__4_1; // x21
  Il2CppObject *v46; // x22
  struct BlankEarthGimmickAddMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Func_object__bool__o *v58; // x21

  if ( (byte_4B15EAF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthGimmickAddEntity___,
      *(_QWORD *)&type,
      *(_QWORD *)&blankEarthSpotId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_BlankEarthGimmickAddEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_BlankEarthGimmickAddEntity__int___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BlankEarthGimmickAddEntity___, v15, v16);
    sub_1BCA7E0(&System_Func_BlankEarthGimmickAddEntity__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Func_BlankEarthGimmickAddEntity__int__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_BlankEarthGimmickAddMaster___c__GetPrioredAvailableEntity_b__4_1__, v21, v22);
    sub_1BCA7E0(&Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__0__, v23, v24);
    sub_1BCA7E0(&Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__2__, v25, v26);
    sub_1BCA7E0(&BlankEarthGimmickAddMaster___c__DisplayClass4_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&BlankEarthGimmickAddMaster___c_TypeInfo, v29, v30);
    byte_4B15EAF = 1;
  }
  v31 = sub_1BCAA2C(
          BlankEarthGimmickAddMaster___c__DisplayClass4_0_TypeInfo,
          *(_QWORD *)&type,
          *(_QWORD *)&blankEarthSpotId,
          *(_QWORD *)&beforeClearQuestId);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    sub_1BCAA3C(v32, v33);
  *(_DWORD *)(v31 + 20) = type;
  *(_DWORD *)(v31 + 24) = beforeClearQuestId;
  *(_DWORD *)(v31 + 16) = blankEarthSpotId;
  *(_BYTE *)(v31 + 28) = isCheckResetFlag;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_BlankEarthGimmickAddEntity___);
  v38 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_BlankEarthGimmickAddEntity__bool__TypeInfo,
                                         v35,
                                         v36,
                                         v37);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v31,
    Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__0__,
    0LL);
  v39 = System_Linq_Enumerable__Where_object_(
          v34,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BlankEarthGimmickAddEntity___);
  v43 = BlankEarthGimmickAddMaster___c_TypeInfo;
  v44 = v39;
  if ( !BlankEarthGimmickAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthGimmickAddMaster___c_TypeInfo, v40);
    v43 = BlankEarthGimmickAddMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v43->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43, v40);
      v43 = BlankEarthGimmickAddMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_BlankEarthGimmickAddEntity__int__TypeInfo,
                                              v40,
                                              v41,
                                              v42);
    System_Func_object__int____ctor(
      _9__4_1,
      v46,
      Method_BlankEarthGimmickAddMaster___c__GetPrioredAvailableEntity_b__4_1__,
      0LL);
    static_fields = BlankEarthGimmickAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_BlankEarthGimmickAddEntity__int__o *)_9__4_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_1, (int64_t)_9__4_1, v48, v49, v50, v51, v52, v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v44,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthGimmickAddEntity__int___);
  v58 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_BlankEarthGimmickAddEntity__bool__TypeInfo,
                                         v55,
                                         v56,
                                         v57);
  System_Func_object__bool____ctor(
    v58,
    (Il2CppObject *)v31,
    Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__2__,
    0LL);
  return (BlankEarthGimmickAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                           v54,
                                           (System_Func_TSource__bool__o *)v58,
                                           (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthGimmickAddEntity___);
}


bool __fastcall BlankEarthGimmickAddMaster__HasAnyRecord(BlankEarthGimmickAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4B15EAE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    byte_4B15EAE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthGimmickAddMaster__TryGetEntity(
        BlankEarthGimmickAddMaster_o *this,
        BlankEarthGimmickAddEntity_o **entity,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15EAD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&blankEarthSpotId);
    byte_4B15EAD = 1;
  }
  PK = (Il2CppObject *)BlankEarthGimmickAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__TryGetEntity__);
}


void __fastcall BlankEarthGimmickAddMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15EB0 & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthGimmickAddMaster___c_TypeInfo, v1, v2);
    byte_4B15EB0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BlankEarthGimmickAddMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BlankEarthGimmickAddMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthGimmickAddMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BlankEarthGimmickAddMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BlankEarthGimmickAddMaster___c___ctor(BlankEarthGimmickAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthGimmickAddMaster___c___GetPrioredAvailableEntity_b__4_1(
        BlankEarthGimmickAddMaster___c_o *this,
        BlankEarthGimmickAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return -x->fields.priority;
}


void __fastcall BlankEarthGimmickAddMaster___c__DisplayClass4_0___ctor(
        BlankEarthGimmickAddMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthGimmickAddMaster___c__DisplayClass4_0___GetPrioredAvailableEntity_b__0(
        BlankEarthGimmickAddMaster___c__DisplayClass4_0_o *this,
        BlankEarthGimmickAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.gimmickId == this->fields.blankEarthSpotId && x->fields.overwriteType == this->fields.typeAsInt;
}


bool __fastcall BlankEarthGimmickAddMaster___c__DisplayClass4_0___GetPrioredAvailableEntity_b__2(
        BlankEarthGimmickAddMaster___c__DisplayClass4_0_o *this,
        BlankEarthGimmickAddEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BlankEarthGimmickAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, v3);
}