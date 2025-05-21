void __fastcall MissionNaviQuestMaster___ctor(MissionNaviQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44E6D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__, method);
    byte_4B44E6D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    504,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *__fastcall MissionNaviQuestMaster__EnumerateOwns(
        MissionNaviQuestMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B44E6B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___, method);
    byte_4B44E6B = 1;
  }
  return (System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                                               (const MethodInfo_305F06C *)Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviQuestEntity_o *__fastcall MissionNaviQuestMaster__GetEntity(
        MissionNaviQuestMaster_o *this,
        int32_t id,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44E6E & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B44E6E = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&questId);
  return (MissionNaviQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32E68F4 *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__);
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v30; // x0
  MissionNaviQuestMaster___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_object__int__o *_9__1_2; // x20
  Il2CppObject *v34; // x21
  struct MissionNaviQuestMaster___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_4B44E6C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___, *(_QWORD *)&naviQuestMasterId);
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___, v9);
    sub_1BDB878(&System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo, v10);
    sub_1BDB878(&System_Func_MissionNaviQuestEntity__int__TypeInfo, v11);
    sub_1BDB878(&System_Func_MissionNaviQuestEntity__bool__TypeInfo, v12);
    sub_1BDB878(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__, v13);
    sub_1BDB878(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__, v14);
    sub_1BDB878(&Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__, v15);
    sub_1BDB878(&MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo, v16);
    sub_1BDB878(&MissionNaviQuestMaster___c_TypeInfo, v17);
    byte_4B44E6C = 1;
  }
  v18 = sub_1BDBAC4(MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1BDBAD4(v19, v20);
  *(_DWORD *)(v18 + 16) = naviQuestMasterId;
  v21 = MissionNaviQuestMaster__EnumerateOwns(this, v20);
  v22 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_MissionNaviQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__,
    0LL);
  v23 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___);
  if ( System_Linq_Enumerable__Any_object_(
         v23,
         (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___) )
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
      _9__1_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_MissionNaviQuestEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_1,
        v26,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__,
        0LL);
      static_fields = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_1 = (struct System_Func_MissionNaviQuestEntity__int__o *)_9__1_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__1_1, (int32_t)_9__1_1, v28, v29);
    }
    v30 = System_Linq_Enumerable__GroupBy_object__int_(
            v23,
            (System_Func_TSource__TKey__o *)_9__1_1,
            (const MethodInfo_305A268 *)Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___);
    v31 = MissionNaviQuestMaster___c_TypeInfo;
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
    if ( !MissionNaviQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviQuestMaster___c_TypeInfo);
      v31 = MissionNaviQuestMaster___c_TypeInfo;
    }
    _9__1_2 = (System_Func_object__int__o *)v31->static_fields->__9__1_2;
    if ( !_9__1_2 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = MissionNaviQuestMaster___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__1_2 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_2,
        v34,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__,
        0LL);
      v35 = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      v35->__9__1_2 = (struct System_Func_IGrouping_int__MissionNaviQuestEntity___int__o *)_9__1_2;
      sub_1BDB81C((CGThumbnailListItem_o *)&v35->__9__1_2, (int32_t)_9__1_2, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v32,
                                                                 (System_Func_TSource__TKey__o *)_9__1_2,
                                                                 (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 v38,
                                                                 (const MethodInfo_3058594 *)Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____);
  }
  return (MissionNaviQuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v23,
                                           (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___);
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

  if ( (byte_4B44E6F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__, entity);
    byte_4B44E6F = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__);
}


void __fastcall MissionNaviQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44E70 & 1) == 0 )
  {
    sub_1BDB878(&MissionNaviQuestMaster___c_TypeInfo, v1);
    byte_4B44E70 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(MissionNaviQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionNaviQuestMaster___c_TypeInfo->static_fields->__9 = (struct MissionNaviQuestMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)MissionNaviQuestMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, 0LL);
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

  if ( (byte_4B44E71 & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c_o *)sub_1BDB878(
                                             &System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo,
                                             group);
    byte_4B44E71 = 1;
  }
  if ( !group )
    sub_1BDBAD4(this, group);
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
    p_method = sub_1C2C00C(group, System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo, 0LL);
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
  if ( (byte_4B44E72 & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c__DisplayClass1_0_o *)sub_1BDB878(&CondType_TypeInfo, x);
    byte_4B44E72 = 1;
  }
  if ( !x )
    sub_1BDBAD4(this, x);
  if ( x->fields.id != v4->fields.naviQuestMasterId )
    return 0;
  dispCondType = x->fields.dispCondType;
  dispTargetId = x->fields.dispTargetId;
  dispTargetNum = x->fields.dispTargetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(dispCondType, dispTargetId, dispTargetNum, 0, 0LL, 0LL);
}