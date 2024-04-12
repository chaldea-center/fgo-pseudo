void __fastcall WarMessageMaster___ctor(WarMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0C31 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
    byte_42B0C31 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    482,
    (const MethodInfo_23E268C *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarMessageEntity_o *__fastcall WarMessageMaster__GetEntity(
        WarMessageMaster_o *this,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B0C32 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
    sub_B52984(&WarMessageEntity_TypeInfo);
    byte_42B0C32 = 1;
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
           (const MethodInfo_23E2728 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
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
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  WarMessageEntity_o *v21; // x0
  __int64 v22; // x1
  WarMessageEntity_o *v23; // x22
  __int64 v24; // x9
  const MethodInfo *v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  WarMessageMaster___c_c *v32; // x0
  struct WarMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x20
  Il2CppObject *v35; // x21
  struct WarMessageMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_42B0C30 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
    sub_B52984(&Method_System_Func_WarMessageEntity__int___ctor__);
    sub_B52984(&System_Func_WarMessageEntity__int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarMessageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarMessageEntity__TypeInfo);
    sub_B52984(&Method_WarMessageMaster___c__GetValidMessageList_b__0_0__);
    sub_B52984(&WarMessageMaster___c_TypeInfo);
    sub_B52984(&WarMessageEntity_TypeInfo);
    byte_42B0C30 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
  if ( !list )
    sub_B52A5C(v7, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v16);
    }
    v21 = (WarMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                  Enumerator,
                                  *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_42;
    v24 = *(&WarMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (WarMessageEntity_c *)v21->klass->_2.typeHierarchy[v24 - 1] != WarMessageEntity_TypeInfo )
    {
      v21 = (WarMessageEntity_o *)sub_B52D50(v21);
LABEL_42:
      sub_B52A5C(v21, v22);
    }
    if ( v21->fields.warId == warId
      && WarMessageEntity__CheckCondition(v21, (const MethodInfo *)WarMessageEntity_TypeInfo) )
    {
      v26 = WarMessageEntity__CheckFrequencyCondition(v23, v25);
      if ( v26 )
      {
        if ( !v6 )
          sub_B52A5C(v26, v27);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarMessageEntity__Add__);
      }
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_30:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v16);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  v32 = WarMessageMaster___c_TypeInfo;
  if ( (BYTE3(WarMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageMaster___c_TypeInfo);
    v32 = WarMessageMaster___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = WarMessageMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v35,
      Method_WarMessageMaster___c__GetValidMessageList_b__0_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_WarMessageEntity__int___ctor__);
    v36 = WarMessageMaster___c_TypeInfo->static_fields;
    v36->__9__0_0 = (struct System_Func_WarMessageEntity__int__o *)_9__0_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v36->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
  return (System_Collections_Generic_List_WarMessageEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v43,
                                                                  (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
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

  if ( (byte_42B0C33 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
    sub_B52984(&WarMessageEntity_TypeInfo);
    byte_42B0C33 = 1;
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
           (const MethodInfo_23E2780 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
}


void __fastcall WarMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct WarMessageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD772 & 1) == 0 )
  {
    sub_B52984(&WarMessageMaster___c_TypeInfo);
    byte_42AD772 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = WarMessageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarMessageMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return v->fields.idx;
}