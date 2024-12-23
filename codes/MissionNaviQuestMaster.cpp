void __fastcall MissionNaviQuestMaster___ctor(MissionNaviQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66F62 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__, method);
    byte_4B66F62 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    501,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *__fastcall MissionNaviQuestMaster__EnumerateOwns(
        MissionNaviQuestMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B66F60 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___, method);
    byte_4B66F60 = 1;
  }
  return (System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                                               (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviQuestEntity_o *__fastcall MissionNaviQuestMaster__GetEntity(
        MissionNaviQuestMaster_o *this,
        int32_t id,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66F63 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B66F63 = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&questId);
  return (MissionNaviQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31FDB1C *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__);
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
  System_Func_object__bool__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  MissionNaviQuestMaster___c_c *v24; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v26; // x21
  struct MissionNaviQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v34; // x0
  MissionNaviQuestMaster___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Func_object__int__o *_9__1_2; // x20
  Il2CppObject *v38; // x21
  struct MissionNaviQuestMaster___c_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0

  if ( (byte_4B66F61 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___, *(_QWORD *)&naviQuestMasterId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___, v9);
    sub_1BE4ACC(&System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo, v10);
    sub_1BE4ACC(&System_Func_MissionNaviQuestEntity__int__TypeInfo, v11);
    sub_1BE4ACC(&System_Func_MissionNaviQuestEntity__bool__TypeInfo, v12);
    sub_1BE4ACC(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__, v13);
    sub_1BE4ACC(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__, v14);
    sub_1BE4ACC(&Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__, v15);
    sub_1BE4ACC(&MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo, v16);
    sub_1BE4ACC(&MissionNaviQuestMaster___c_TypeInfo, v17);
    byte_4B66F61 = 1;
  }
  v18 = sub_1BE4D18(MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1BE4D28(v19, v20);
  *(_DWORD *)(v18 + 16) = naviQuestMasterId;
  v21 = MissionNaviQuestMaster__EnumerateOwns(this, v20);
  v22 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_MissionNaviQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__,
    0LL);
  v23 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___);
  if ( System_Linq_Enumerable__Any_object_(
         v23,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___) )
  {
    v24 = MissionNaviQuestMaster___c_TypeInfo;
    if ( !MissionNaviQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviQuestMaster___c_TypeInfo);
      v24 = MissionNaviQuestMaster___c_TypeInfo;
    }
    _9__1_1 = (System_Func_object__int__o *)v24->static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = MissionNaviQuestMaster___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__1_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_MissionNaviQuestEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_1,
        v26,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__,
        0LL);
      static_fields = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_1 = (struct System_Func_MissionNaviQuestEntity__int__o *)_9__1_1;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__1_1,
        (int64_t)_9__1_1,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = System_Linq_Enumerable__GroupBy_object__int_(
            v23,
            (System_Func_TSource__TKey__o *)_9__1_1,
            (const MethodInfo_2F7D290 *)Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___);
    v35 = MissionNaviQuestMaster___c_TypeInfo;
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
    if ( !MissionNaviQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviQuestMaster___c_TypeInfo);
      v35 = MissionNaviQuestMaster___c_TypeInfo;
    }
    _9__1_2 = (System_Func_object__int__o *)v35->static_fields->__9__1_2;
    if ( !_9__1_2 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = MissionNaviQuestMaster___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v35->static_fields->__9;
      _9__1_2 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_2,
        v38,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__,
        0LL);
      v39 = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      v39->__9__1_2 = (struct System_Func_IGrouping_int__MissionNaviQuestEntity___int__o *)_9__1_2;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v39->__9__1_2, (int64_t)_9__1_2, v40, v41, v42, v43, v44, v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v36,
                                                                 (System_Func_TSource__TKey__o *)_9__1_2,
                                                                 (const MethodInfo_2F826FC *)Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 v46,
                                                                 (const MethodInfo_2F7B9A0 *)Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____);
  }
  return (MissionNaviQuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v23,
                                           (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___);
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

  if ( (byte_4B66F64 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__, entity);
    byte_4B66F64 = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__);
}


void __fastcall MissionNaviQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66F65 & 1) == 0 )
  {
    sub_1BE4ACC(&MissionNaviQuestMaster___c_TypeInfo, v1);
    byte_4B66F65 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(MissionNaviQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionNaviQuestMaster___c_TypeInfo->static_fields->__9 = (struct MissionNaviQuestMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)MissionNaviQuestMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
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

  if ( (byte_4B66F66 & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c_o *)sub_1BE4ACC(
                                             &System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo,
                                             group);
    byte_4B66F66 = 1;
  }
  if ( !group )
    sub_1BE4D28(this, group);
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
    p_method = sub_1C36AAC(group, System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo, 0LL);
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
  if ( (byte_4B66F67 & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c__DisplayClass1_0_o *)sub_1BE4ACC(&CondType_TypeInfo, x);
    byte_4B66F67 = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
  if ( x->fields.id != v4->fields.naviQuestMasterId )
    return 0;
  dispCondType = x->fields.dispCondType;
  dispTargetId = x->fields.dispTargetId;
  dispTargetNum = x->fields.dispTargetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(dispCondType, dispTargetId, dispTargetNum, 0, 0LL, 0LL);
}