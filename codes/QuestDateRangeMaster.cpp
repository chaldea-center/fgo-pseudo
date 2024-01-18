void __fastcall QuestDateRangeMaster___ctor(QuestDateRangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186E51 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__, method);
    byte_4186E51 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    282,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestDateRangeEntity_o *__fastcall QuestDateRangeMaster__GetEntity(
        QuestDateRangeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186E4F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4186E4F = 1;
  }
  PK = QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (QuestDateRangeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestDateRangeEntity__o *__fastcall QuestDateRangeMaster__GetQuestDateRangeEntityList(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  __int64 v18; // x1
  void *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x10
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  struct QuestDateRangeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v41; // x21
  struct QuestDateRangeMaster___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_4186E52 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questDateRangeId);
    sub_B2C35C(&Method_System_Comparison_QuestDateRangeEntity___ctor__, v5);
    sub_B2C35C(&System_Comparison_QuestDateRangeEntity__TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo, v13);
    sub_B2C35C(&QuestDateRangeEntity_TypeInfo, v14);
    sub_B2C35C(&Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__, v15);
    sub_B2C35C(&QuestDateRangeMaster___c_TypeInfo, v16);
    byte_4186E52 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v31 + 8));
    if ( !v32 )
      goto LABEL_41;
    v34 = *(&QuestDateRangeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v34
      || (QuestDateRangeEntity_c *)v32->klass->_2.typeHierarchy[v34 - 1] != QuestDateRangeEntity_TypeInfo )
    {
      v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v32);
LABEL_41:
      sub_B2C434(v32, v33);
    }
    if ( v32->fields.missionTargetId == questDateRangeId )
    {
      if ( !v17 )
        sub_B2C434(v32, QuestDateRangeEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v17,
        v32,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__);
    }
  }
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_28:
    v38 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
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
    v41 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_QuestDateRangeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v41,
      Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_QuestDateRangeEntity___ctor__);
    v42 = QuestDateRangeMaster___c_TypeInfo->static_fields;
    v42->__9__3_0 = (struct System_Comparison_QuestDateRangeEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v42->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !v17 )
LABEL_43:
    sub_B2C434(list, v18);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__);
  return (System_Collections_Generic_List_QuestDateRangeEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestDateRangeMaster__IsPeriodFromOpenedToClosed(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x9
  bool v26; // w20
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int v32; // [xsp+0h] [xbp-40h]

  if ( (byte_4186E53 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questDateRangeId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&QuestDateRangeEntity_TypeInfo, v10);
    byte_4186E53 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&questDateRangeId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_36;
    v25 = *(&QuestDateRangeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) < (unsigned int)v25
      || *(QuestDateRangeEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v25 - 8) != QuestDateRangeEntity_TypeInfo )
    {
      v23 = (_DWORD *)sub_B2C728(v23);
LABEL_36:
      sub_B2C434(v23, v24);
    }
    if ( v23[4] == questDateRangeId && (int)v23[6] <= nowTime && (int)v23[7] > nowTime )
    {
      v32 = 79;
      v26 = 1;
      goto LABEL_26;
    }
  }
  v26 = 0;
  v32 = 77;
LABEL_26:
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_30:
    v30 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( v32 == 77 )
    return 0;
  return v26;
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

  if ( (byte_4186E50 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__, entity);
    byte_4186E50 = 1;
  }
  PK = QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__);
}


void __fastcall QuestDateRangeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestDateRangeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41852F7 & 1) == 0 )
  {
    sub_B2C35C(&QuestDateRangeMaster___c_TypeInfo, v1);
    byte_41852F7 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestDateRangeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestDateRangeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestDateRangeMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.idx - b->fields.idx;
}