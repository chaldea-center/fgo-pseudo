void __fastcall MissionNaviQuestMaster___ctor(MissionNaviQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC78E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__, method);
    byte_49FC78E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    497,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *__fastcall MissionNaviQuestMaster__EnumerateOwns(
        MissionNaviQuestMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC78C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___, method);
    byte_49FC78C = 1;
  }
  return (System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviQuestEntity_o *__fastcall MissionNaviQuestMaster__GetEntity(
        MissionNaviQuestMaster_o *this,
        int32_t id,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC78F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49FC78F = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&questId);
  return (MissionNaviQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviQuestEntity_array *__fastcall MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
        MissionNaviQuestMaster_o *this,
        int32_t naviQuestMasterId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_object__bool__o *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  MissionNaviQuestMaster___c_c *v28; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v30; // x21
  struct MissionNaviQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  MissionNaviQuestMaster___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_object__int__o *_9__1_2; // x20
  Il2CppObject *v40; // x21
  struct MissionNaviQuestMaster___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_49FC78D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___, *(_QWORD *)&naviQuestMasterId);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___, v9);
    sub_1B640C8(&System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo, v10);
    sub_1B640C8(&System_Func_MissionNaviQuestEntity__int__TypeInfo, v11);
    sub_1B640C8(&System_Func_MissionNaviQuestEntity__bool__TypeInfo, v12);
    sub_1B640C8(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__, v13);
    sub_1B640C8(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__, v14);
    sub_1B640C8(&Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__, v15);
    sub_1B640C8(&MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo, v16);
    sub_1B640C8(&MissionNaviQuestMaster___c_TypeInfo, v17);
    byte_49FC78D = 1;
  }
  v18 = sub_1B64314(MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&naviQuestMasterId, method);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1B64324(v19);
  *(_DWORD *)(v18 + 16) = naviQuestMasterId;
  v21 = MissionNaviQuestMaster__EnumerateOwns(this, v20);
  v24 = (System_Func_object__bool__o *)sub_1B64314(System_Func_MissionNaviQuestEntity__bool__TypeInfo, v22, v23);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v18,
    Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___);
  if ( System_Linq_Enumerable__Any_object_(
         v25,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___) )
  {
    v28 = MissionNaviQuestMaster___c_TypeInfo;
    if ( !MissionNaviQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviQuestMaster___c_TypeInfo);
      v28 = MissionNaviQuestMaster___c_TypeInfo;
    }
    _9__1_1 = (System_Func_object__int__o *)v28->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = MissionNaviQuestMaster___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__1_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_MissionNaviQuestEntity__int__TypeInfo, v26, v27);
      System_Func_object__int____ctor(
        _9__1_1,
        v30,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__,
        0LL);
      static_fields = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_1 = (struct System_Func_MissionNaviQuestEntity__int__o *)_9__1_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_1, (int32_t)_9__1_1, v32, v33);
    }
    v34 = System_Linq_Enumerable__GroupBy_object__int_(
            v25,
            (System_Func_TSource__TKey__o *)_9__1_1,
            (const MethodInfo_2E5E184 *)Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___);
    v37 = MissionNaviQuestMaster___c_TypeInfo;
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
    if ( !MissionNaviQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviQuestMaster___c_TypeInfo);
      v37 = MissionNaviQuestMaster___c_TypeInfo;
    }
    _9__1_2 = (System_Func_object__int__o *)v37->static_fields->__9__1_2;
    if ( !_9__1_2 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = MissionNaviQuestMaster___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v37->static_fields->__9;
      _9__1_2 = (System_Func_object__int__o *)sub_1B64314(
                                                System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo,
                                                v35,
                                                v36);
      System_Func_object__int____ctor(
        _9__1_2,
        v40,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__,
        0LL);
      v41 = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      v41->__9__1_2 = (struct System_Func_IGrouping_int__MissionNaviQuestEntity___int__o *)_9__1_2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v41->__9__1_2, (int32_t)_9__1_2, v42, v43);
    }
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v38,
                                                                 (System_Func_TSource__TKey__o *)_9__1_2,
                                                                 (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___);
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 v44,
                                                                 (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____);
  }
  return (MissionNaviQuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v25,
                                           (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___);
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

  if ( (byte_49FC790 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__, entity);
    byte_49FC790 = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__);
}


void __fastcall MissionNaviQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC791 & 1) == 0 )
  {
    sub_1B640C8(&MissionNaviQuestMaster___c_TypeInfo, v1);
    byte_49FC791 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MissionNaviQuestMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MissionNaviQuestMaster___c_TypeInfo->static_fields->__9 = (struct MissionNaviQuestMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)MissionNaviQuestMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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

  if ( (byte_49FC792 & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c_o *)sub_1B640C8(
                                             &System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo,
                                             group);
    byte_49FC792 = 1;
  }
  if ( !group )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(group, System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo, 0LL);
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
  if ( (byte_49FC793 & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c__DisplayClass1_0_o *)sub_1B640C8(&CondType_TypeInfo, x);
    byte_49FC793 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  if ( x->fields.id != v4->fields.naviQuestMasterId )
    return 0;
  dispCondType = x->fields.dispCondType;
  dispTargetId = x->fields.dispTargetId;
  dispTargetNum = x->fields.dispTargetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(dispCondType, dispTargetId, dispTargetNum, 0, 0LL);
}