void MissionNaviQuestMaster___ctor(MissionNaviQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970D9F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__);
    byte_5970D9F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    506,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *MissionNaviQuestMaster__EnumerateOwns(
        MissionNaviQuestMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_5970D9D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___);
    byte_5970D9D = 1;
  }
  return (System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *)System_Linq_Enumerable__OfType_object_(
                                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                                               (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_MissionNaviQuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviQuestEntity_o *MissionNaviQuestMaster__GetEntity(
        MissionNaviQuestMaster_o *this,
        int32_t id,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970DA0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__);
    byte_5970DA0 = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&questId);
  return (MissionNaviQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__GetEntity__);
}


MissionNaviQuestEntity_array *MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
        MissionNaviQuestMaster_o *this,
        int32_t naviQuestMasterId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_MissionNaviQuestEntity__o *v8; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  __int64 v11; // x1
  MissionNaviQuestMaster___c_c *v12; // x0
  struct MissionNaviQuestMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v15; // x21
  struct MissionNaviQuestMaster___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v23; // x0
  __int64 v24; // x1
  MissionNaviQuestMaster___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  struct MissionNaviQuestMaster___c_StaticFields *v27; // x9
  System_Func_object__int__o *_9__1_2; // x20
  Il2CppObject *v29; // x21
  struct MissionNaviQuestMaster___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_5970D9E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___);
    sub_2213A60(&System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo);
    sub_2213A60(&System_Func_MissionNaviQuestEntity__int__TypeInfo);
    sub_2213A60(&System_Func_MissionNaviQuestEntity__bool__TypeInfo);
    sub_2213A60(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__);
    sub_2213A60(&Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__);
    sub_2213A60(&Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__);
    sub_2213A60(&MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&MissionNaviQuestMaster___c_TypeInfo);
    byte_5970D9E = 1;
  }
  v5 = sub_2213CCC(MissionNaviQuestMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_DWORD *)(v5 + 16) = naviQuestMasterId;
  v8 = MissionNaviQuestMaster__EnumerateOwns(this, v7);
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MissionNaviQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_MissionNaviQuestMaster___c__DisplayClass1_0__GetOpenQuestByNaviQuestMasterId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_MissionNaviQuestEntity___);
  if ( System_Linq_Enumerable__Any_object_(
         v10,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_MissionNaviQuestEntity___) )
  {
    v12 = MissionNaviQuestMaster___c_TypeInfo;
    if ( !*(&MissionNaviQuestMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviQuestMaster___c_TypeInfo, v11);
      v12 = MissionNaviQuestMaster___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__1_1 = (System_Func_object__int__o *)static_fields->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !*(&v12->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v12, v11);
        static_fields = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__1_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MissionNaviQuestEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_1,
        v15,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_1__,
        0);
      v16 = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      v16->__9__1_1 = (struct System_Func_MissionNaviQuestEntity__int__o *)_9__1_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__1_1, (int32_t)_9__1_1, v17, v18, v19, v20, v21, v22);
    }
    v23 = System_Linq_Enumerable__GroupBy_object__int_(
            v10,
            (System_Func_TSource__TKey__o *)_9__1_1,
            (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_MissionNaviQuestEntity__int___);
    v25 = MissionNaviQuestMaster___c_TypeInfo;
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v23;
    if ( !*(&MissionNaviQuestMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviQuestMaster___c_TypeInfo, v24);
      v25 = MissionNaviQuestMaster___c_TypeInfo;
    }
    v27 = v25->static_fields;
    _9__1_2 = (System_Func_object__int__o *)v27->__9__1_2;
    if ( !_9__1_2 )
    {
      if ( !*(&v25->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v25, v24);
        v27 = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)v27->__9;
      _9__1_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_IGrouping_int__MissionNaviQuestEntity___int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_2,
        v29,
        Method_MissionNaviQuestMaster___c__GetOpenQuestByNaviQuestMasterId_b__1_2__,
        0);
      v30 = MissionNaviQuestMaster___c_TypeInfo->static_fields;
      v30->__9__1_2 = (struct System_Func_IGrouping_int__MissionNaviQuestEntity___int__o *)_9__1_2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->__9__1_2, (int32_t)_9__1_2, v31, v32, v33, v34, v35, v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v26,
                                                                 (System_Func_TSource__TKey__o *)_9__1_2,
                                                                 (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__MissionNaviQuestEntity___int___);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                 v37,
                                                                 (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_IGrouping_int__MissionNaviQuestEntity____);
  }
  return (MissionNaviQuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v10,
                                           (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_MissionNaviQuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool MissionNaviQuestMaster__TryGetEntity(
        MissionNaviQuestMaster_o *this,
        MissionNaviQuestEntity_o **entity,
        int32_t id,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970DA1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__);
    byte_5970DA1 = 1;
  }
  PK = (Il2CppObject *)MissionNaviQuestEntity__CreatePK(id, questId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_MissionNaviQuestMaster__MissionNaviQuestEntity__string__TryGetEntity__);
}


void MissionNaviQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970DA2 & 1) == 0 )
  {
    sub_2213A60(&MissionNaviQuestMaster___c_TypeInfo);
    byte_5970DA2 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MissionNaviQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionNaviQuestMaster___c_TypeInfo->static_fields->__9 = (struct MissionNaviQuestMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MissionNaviQuestMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MissionNaviQuestMaster___c___ctor(MissionNaviQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MissionNaviQuestMaster___c___GetOpenQuestByNaviQuestMasterId_b__1_1(
        MissionNaviQuestMaster___c_o *this,
        MissionNaviQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t MissionNaviQuestMaster___c___GetOpenQuestByNaviQuestMasterId_b__1_2(
        MissionNaviQuestMaster___c_o *this,
        System_Linq_IGrouping_int__MissionNaviQuestEntity__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__MissionNaviQuestEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5970DA3 & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c_o *)sub_2213A60(&System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo);
    byte_5970DA3 = 1;
  }
  if ( !group )
    sub_2213CDC(this, group);
  klass = group->klass;
  v5 = *(unsigned __int16 *)&group->klass->_2.rank;
  if ( *(_WORD *)&group->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__MissionNaviQuestEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_224BC3C(group, System_Linq_IGrouping_int__MissionNaviQuestEntity__TypeInfo, 0);
  }
  return (*(int32_t (__fastcall **)(System_Linq_IGrouping_int__MissionNaviQuestEntity__o *, _QWORD))v7)(
           group,
           *(_QWORD *)(v7 + 8));
}


void MissionNaviQuestMaster___c__DisplayClass1_0___ctor(
        MissionNaviQuestMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MissionNaviQuestMaster___c__DisplayClass1_0___GetOpenQuestByNaviQuestMasterId_b__0(
        MissionNaviQuestMaster___c__DisplayClass1_0_o *this,
        MissionNaviQuestEntity_o *x,
        const MethodInfo *method)
{
  MissionNaviQuestMaster___c__DisplayClass1_0_o *v4; // x20
  int32_t dispCondType; // w20
  int32_t dispTargetId; // w21
  int64_t dispTargetNum; // x19

  v4 = this;
  if ( (byte_5970DA4 & 1) == 0 )
  {
    this = (MissionNaviQuestMaster___c__DisplayClass1_0_o *)sub_2213A60(&CondType_TypeInfo);
    byte_5970DA4 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  if ( x->fields.id != v4->fields.naviQuestMasterId )
    return 0;
  dispCondType = x->fields.dispCondType;
  dispTargetId = x->fields.dispTargetId;
  dispTargetNum = x->fields.dispTargetNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, x);
  return CondType__IsOpen(dispCondType, dispTargetId, dispTargetNum, 0, 0, 0);
}