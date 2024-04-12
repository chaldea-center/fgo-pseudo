void __fastcall QuestDateRangeMaster___ctor(QuestDateRangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B01A4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__);
    byte_42B01A4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    283,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestDateRangeEntity_o *__fastcall QuestDateRangeMaster__GetEntity(
        QuestDateRangeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B01A2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__);
    byte_42B01A2 = 1;
  }
  PK = QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (QuestDateRangeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestDateRangeEntity__o *__fastcall QuestDateRangeMaster__GetQuestDateRangeEntityList(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  void *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  struct QuestDateRangeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v29; // x21
  struct QuestDateRangeMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_42B01A5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_QuestDateRangeEntity___ctor__);
    sub_B52984(&System_Comparison_QuestDateRangeEntity__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo);
    sub_B52984(&QuestDateRangeEntity_TypeInfo);
    sub_B52984(&Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__);
    sub_B52984(&QuestDateRangeMaster___c_TypeInfo);
    byte_42B01A5 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
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
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_41;
    v22 = *(&QuestDateRangeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (QuestDateRangeEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != QuestDateRangeEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_41:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.missionTargetId == questDateRangeId )
    {
      if ( !v5 )
        sub_B52A5C(v20, QuestDateRangeEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  list = QuestDateRangeMaster___c_TypeInfo;
  if ( (BYTE3(QuestDateRangeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestDateRangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestDateRangeMaster___c_TypeInfo);
    list = QuestDateRangeMaster___c_TypeInfo;
  }
  static_fields = (struct QuestDateRangeMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = QuestDateRangeMaster___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_QuestDateRangeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v29,
      Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_QuestDateRangeEntity___ctor__);
    v30 = QuestDateRangeMaster___c_TypeInfo->static_fields;
    v30->__9__3_0 = (struct System_Comparison_QuestDateRangeEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v30->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v5 )
LABEL_43:
    sub_B52A5C(list, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__);
  return (System_Collections_Generic_List_QuestDateRangeEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestDateRangeMaster__IsPeriodFromOpenedToClosed(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x9
  bool v22; // w20
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  int v28; // [xsp+0h] [xbp-40h]

  if ( (byte_42B01A6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&QuestDateRangeEntity_TypeInfo);
    byte_42B01A6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&questDateRangeId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
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
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
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
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_36;
    v21 = *(&QuestDateRangeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v21
      || *(QuestDateRangeEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v21 - 8) != QuestDateRangeEntity_TypeInfo )
    {
      v19 = (_DWORD *)sub_B52D50(v19);
LABEL_36:
      sub_B52A5C(v19, v20);
    }
    if ( v19[4] == questDateRangeId && (int)v19[6] <= nowTime && (int)v19[7] > nowTime )
    {
      v28 = 79;
      v22 = 1;
      goto LABEL_26;
    }
  }
  v22 = 0;
  v28 = 77;
LABEL_26:
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_30:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( v28 == 77 )
    return 0;
  return v22;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestDateRangeMaster__TryGetEntity(
        QuestDateRangeMaster_o *this,
        QuestDateRangeEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B01A3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__);
    byte_42B01A3 = 1;
  }
  PK = QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__);
}


void __fastcall QuestDateRangeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF249 & 1) == 0 )
  {
    sub_B52984(&QuestDateRangeMaster___c_TypeInfo);
    byte_42AF249 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestDateRangeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestDateRangeMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestDateRangeMaster___c___ctor(QuestDateRangeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestDateRangeMaster___c___GetQuestDateRangeEntityList_b__3_0(
        QuestDateRangeMaster___c_o *this,
        QuestDateRangeEntity_o *a,
        QuestDateRangeEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.idx - b->fields.idx;
}