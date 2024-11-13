void __fastcall MissionNaviQuestMaster___ctor(MissionNaviQuestMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1658B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__, method, v2);
    byte_4B1658B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    497,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *__fastcall MissionNaviQuestMaster__EnumerateOwns(
        MissionNaviQuestMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16589 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___, method, v2);
    byte_4B16589 = 1;
  }
  return (System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviQuestEntity_o *__fastcall MissionNaviQuestMaster__GetEntity(
        MissionNaviQuestMaster_o *this,
        int32_t id,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1658C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&questId);
    byte_4B1658C = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&questId);
  return (MissionNaviQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviQuestEntity_array *__fastcall MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
        MissionNaviQuestMaster_o *this,
        int32_t naviQuestMasterId,
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x21
  __int64 v33; // x0
  const MethodInfo *v34; // x1
  System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Func_object__bool__o *v39; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  MissionNaviQuestMaster___c_c *v44; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v46; // x21
  struct MissionNaviQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  MissionNaviQuestMaster___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x19
  System_Func_object__int__o *_9__1_2; // x20
  Il2CppObject *v61; // x21
  struct MissionNaviQuestMaster___c_StaticFields *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0

  if ( (byte_4B1658A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___, *(_QWORD *)&naviQuestMasterId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___, v8, v9);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___, v14, v15);
    sub_1BCA7E0(&System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_MissionNaviQuestEntity__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_MissionNaviQuestEntity__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__, v22, v23);
    sub_1BCA7E0(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__, v24, v25);
    sub_1BCA7E0(&Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__, v26, v27);
    sub_1BCA7E0(&MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&MissionNaviQuestMaster___c_TypeInfo, v30, v31);
    byte_4B1658A = 1;
  }
  v32 = sub_1BCAA2C(MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&naviQuestMasterId, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    sub_1BCAA3C(v33, v34);
  *(_DWORD *)(v32 + 16) = naviQuestMasterId;
  v35 = MissionNaviQuestMaster__EnumerateOwns(this, v34);
  v39 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_MissionNaviQuestEntity__bool__TypeInfo, v36, v37, v38);
  System_Func_object__bool____ctor(
    v39,
    (Il2CppObject *)v32,
    Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__,
    0LL);
  v40 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___);
  if ( System_Linq_Enumerable__Any_object_(
         v40,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___) )
  {
    v44 = MissionNaviQuestMaster___c_TypeInfo;
    if ( !MissionNaviQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviQuestMaster___c_TypeInfo, v41);
      v44 = MissionNaviQuestMaster___c_TypeInfo;
    }
    _9__1_1 = (System_Func_object__int__o *)v44->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44, v41);
        v44 = MissionNaviQuestMaster___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__1_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_MissionNaviQuestEntity__int__TypeInfo,
                                                v41,
                                                v42,
                                                v43);
      System_Func_object__int____ctor(
        _9__1_1,
        v46,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__,
        0LL);
      static_fields = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_1 = (struct System_Func_MissionNaviQuestEntity__int__o *)_9__1_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__1_1,
        (int64_t)_9__1_1,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    v54 = System_Linq_Enumerable__GroupBy_object__int_(
            v40,
            (System_Func_TSource__TKey__o *)_9__1_1,
            (const MethodInfo_2F36458 *)Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___);
    v58 = MissionNaviQuestMaster___c_TypeInfo;
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v54;
    if ( !MissionNaviQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviQuestMaster___c_TypeInfo, v55);
      v58 = MissionNaviQuestMaster___c_TypeInfo;
    }
    _9__1_2 = (System_Func_object__int__o *)v58->static_fields->__9__1_2;
    if ( !_9__1_2 )
    {
      if ( !v58->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v58, v55);
        v58 = MissionNaviQuestMaster___c_TypeInfo;
      }
      v61 = (Il2CppObject *)v58->static_fields->__9;
      _9__1_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo,
                                                v55,
                                                v56,
                                                v57);
      System_Func_object__int____ctor(
        _9__1_2,
        v61,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__,
        0LL);
      v62 = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      v62->__9__1_2 = (struct System_Func_IGrouping_int__MissionNaviQuestEntity___int__o *)_9__1_2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v62->__9__1_2, (int64_t)_9__1_2, v63, v64, v65, v66, v67, v68);
    }
    v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v59,
                                                                 (System_Func_TSource__TKey__o *)_9__1_2,
                                                                 (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___);
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 v69,
                                                                 (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____);
  }
  return (MissionNaviQuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v40,
                                           (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionNaviQuestMaster__TryGetEntity(
        MissionNaviQuestMaster_o *this,
        MissionNaviQuestEntity_o **entity,
        int32_t id,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1658D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B1658D = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__);
}


void __fastcall MissionNaviQuestMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1658E & 1) == 0 )
  {
    sub_1BCA7E0(&MissionNaviQuestMaster___c_TypeInfo, v1, v2);
    byte_4B1658E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MissionNaviQuestMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MissionNaviQuestMaster___c_TypeInfo->static_fields->__9 = (struct MissionNaviQuestMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MissionNaviQuestMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MissionNaviQuestMaster___c___ctor(MissionNaviQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MissionNaviQuestMaster___c___GetOpenQuestByNaviQuestMasterId_b__1_1(
        MissionNaviQuestMaster___c_o *this,
        MissionNaviQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall MissionNaviQuestMaster___c___GetOpenQuestByNaviQuestMasterId_b__1_2(
        MissionNaviQuestMaster___c_o *this,
        System_Linq_IGrouping_int__MissionNaviQuestEntity__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__MissionNaviQuestEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B1658F & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c_o *)sub_1BCA7E0(
                                             &System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo,
                                             group,
                                             method);
    byte_4B1658F = 1;
  }
  if ( !group )
    sub_1BCAA3C(this, group);
  klass = group->klass;
  v5 = *(unsigned __int16 *)(&group->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&group->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__MissionNaviQuestEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(group, System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__MissionNaviQuestEntity__o *, _QWORD))p_method)(
           group,
           *(_QWORD *)(p_method + 8));
}


void __fastcall MissionNaviQuestMaster___c__DisplayClass1_0___ctor(
        MissionNaviQuestMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionNaviQuestMaster___c__DisplayClass1_0___GetOpenQuestByNaviQuestMasterId_b__0(
        MissionNaviQuestMaster___c__DisplayClass1_0_o *this,
        MissionNaviQuestEntity_o *x,
        const MethodInfo *method)
{
  MissionNaviQuestMaster___c__DisplayClass1_0_o *v4; // x20
  int32_t dispTargetId; // w20
  int32_t dispCondType; // w21
  int64_t dispTargetNum; // x19

  v4 = this;
  if ( (byte_4B16590 & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c__DisplayClass1_0_o *)sub_1BCA7E0(&CondType_TypeInfo, x, method);
    byte_4B16590 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  if ( x->fields.id != v4->fields.naviQuestMasterId )
    return 0;
  dispCondType = x->fields.dispCondType;
  dispTargetId = x->fields.dispTargetId;
  dispTargetNum = x->fields.dispTargetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, x);
  return CondType__IsOpen(dispCondType, dispTargetId, dispTargetNum, 0, 0LL, 0LL);
}