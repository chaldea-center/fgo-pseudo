void __fastcall WarMessageMaster___ctor(WarMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43526C4 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
    byte_43526C4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    483,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarMessageEntity_o *__fastcall WarMessageMaster__GetEntity(
        WarMessageMaster_o *this,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_43526C5 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
    sub_B70694(&WarMessageEntity_TypeInfo);
    byte_43526C5 = 1;
  }
  if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  }
  PK = WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&idx);
  return DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
           PK,
           (const MethodInfo_21C0890 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarMessageEntity__o *__fastcall WarMessageMaster__GetValidMessageList(
        WarMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  WarMessageEntity_o *v19; // x0
  __int64 v20; // x1
  WarMessageEntity_o *v21; // x22
  __int64 v22; // x9
  const MethodInfo *v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  WarMessageMaster___c_c *v30; // x0
  struct WarMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x20
  Il2CppObject *v33; // x21
  struct WarMessageMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0

  if ( (byte_43526C3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
    sub_B70694(&Method_System_Func_WarMessageEntity__int___ctor__);
    sub_B70694(&System_Func_WarMessageEntity__int__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarMessageEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarMessageEntity__TypeInfo);
    sub_B70694(&Method_WarMessageMaster___c__GetValidMessageList_b__0_0__);
    sub_B70694(&WarMessageMaster___c_TypeInfo);
    sub_B70694(&WarMessageEntity_TypeInfo);
    byte_43526C3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
  if ( !list )
    sub_B7076C(v7, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (WarMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                  Enumerator,
                                  *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_42;
    v22 = *(&WarMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (WarMessageEntity_c *)v19->klass->_2.typeHierarchy[v22 - 1] != WarMessageEntity_TypeInfo )
    {
      v19 = (WarMessageEntity_o *)sub_B70A60(v19);
LABEL_42:
      sub_B7076C(v19, v20);
    }
    if ( v19->fields.warId == warId
      && WarMessageEntity__CheckCondition(v19, (const MethodInfo *)WarMessageEntity_TypeInfo) )
    {
      v24 = WarMessageEntity__CheckFrequencyCondition(v21, v23);
      if ( v24 )
      {
        if ( !v6 )
          sub_B7076C(v24, v25);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarMessageEntity__Add__);
      }
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  v30 = WarMessageMaster___c_TypeInfo;
  if ( (BYTE3(WarMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageMaster___c_TypeInfo);
    v30 = WarMessageMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = WarMessageMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_WarMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v33,
      Method_WarMessageMaster___c__GetValidMessageList_b__0_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_WarMessageEntity__int___ctor__);
    v34 = WarMessageMaster___c_TypeInfo->static_fields;
    v34->__9__0_0 = (struct System_Func_WarMessageEntity__int__o *)_9__0_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v34->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_1CBFB4C *)Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
  return (System_Collections_Generic_List_WarMessageEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v41,
                                                                  (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarMessageMaster__TryGetEntity(
        WarMessageMaster_o *this,
        WarMessageEntity_o **entity,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_43526C6 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
    sub_B70694(&WarMessageEntity_TypeInfo);
    byte_43526C6 = 1;
  }
  if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  }
  PK = WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&warId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
}


void __fastcall WarMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FCB6 & 1) == 0 )
  {
    sub_B70694(&WarMessageMaster___c_TypeInfo);
    byte_434FCB6 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarMessageMaster___c___ctor(WarMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarMessageMaster___c___GetValidMessageList_b__0_0(
        WarMessageMaster___c_o *this,
        WarMessageEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B7076C(this, 0LL);
  return v->fields.idx;
}