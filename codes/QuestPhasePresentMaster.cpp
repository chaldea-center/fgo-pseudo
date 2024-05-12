void __fastcall QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438FCF4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
    byte_438FCF4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    489,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *__fastcall QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438FCF5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
    byte_438FCF5 = 1;
  }
  PK = QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_21FBCE4 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestPhasePresentEntity__o *__fastcall QuestPhasePresentMaster__GetList(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_438FCF3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
    sub_B775C4(&QuestPhasePresentEntity_TypeInfo);
    byte_438FCF3 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_32;
    v20 = *(&QuestPhasePresentEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (QuestPhasePresentEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != QuestPhasePresentEntity_TypeInfo )
    {
      sub_B77990(v18);
LABEL_32:
      sub_B7769C(v18, v19);
    }
    if ( v18->fields.missionTargetId == questId )
    {
      if ( !v5 )
        sub_B7769C(v18, QuestPhasePresentEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v18,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__);
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return (System_Collections_Generic_List_QuestPhasePresentEntity__o *)v5;
}


bool __fastcall QuestPhasePresentMaster__IsContainEntityFromPhase(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **presentEnt,
        int32_t questId,
        int32_t currentPhase,
        const MethodInfo *method)
{
  QuestPhasePresentMaster___c__DisplayClass0_0_o *v9; // x20
  System_Collections_Generic_List_QuestPhasePresentEntity__o *List; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  QuestPhasePresentMaster___c_c *v20; // x0
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x22
  Il2CppObject *v23; // x23
  struct QuestPhasePresentMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x22
  QuestPhasePresentEntity_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_438FCF2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
    sub_B775C4(&Method_System_Func_QuestPhasePresentEntity__bool___ctor__);
    sub_B775C4(&Method_System_Func_QuestPhasePresentEntity__int___ctor__);
    sub_B775C4(&System_Func_QuestPhasePresentEntity__int__TypeInfo);
    sub_B775C4(&System_Func_QuestPhasePresentEntity__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__);
    sub_B775C4(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__);
    sub_B775C4(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__);
    sub_B775C4(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
    sub_B775C4(&QuestPhasePresentMaster___c_TypeInfo);
    byte_438FCF2 = 1;
  }
  v9 = (QuestPhasePresentMaster___c__DisplayClass0_0_o *)sub_B77694(QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
  QuestPhasePresentMaster___c__DisplayClass0_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.currentPhase = currentPhase,
        *presentEnt = 0LL,
        sub_B77560((BattleServantConfConponent_o *)presentEnt, 0LL, v12, v13, v14, v15, v16, v17),
        (List = QuestPhasePresentMaster__GetList(this, questId, v18)) == 0LL) )
  {
    sub_B7769C(List, v11);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  if ( List->fields._size < 1 )
    return 0;
  v20 = QuestPhasePresentMaster___c_TypeInfo;
  if ( (BYTE3(QuestPhasePresentMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v20 = QuestPhasePresentMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_QuestPhasePresentEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v23,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_QuestPhasePresentEntity__int___ctor__);
    v24 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    v24->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v24->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v19,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_QuestPhasePresentEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v9,
    Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
    (const MethodInfo_29E92C4 *)Method_System_Func_QuestPhasePresentEntity__bool___ctor__);
  v33 = (QuestPhasePresentEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       v31,
                                       (System_Func_TSource__bool__o *)v32,
                                       (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
  *presentEnt = v33;
  sub_B77560((BattleServantConfConponent_o *)presentEnt, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhasePresentMaster__TryGetEntity(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438FCF6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
    byte_438FCF6 = 1;
  }
  PK = QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void __fastcall QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B187 & 1) == 0 )
  {
    sub_B775C4(&QuestPhasePresentMaster___c_TypeInfo);
    byte_438B187 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(QuestPhasePresentMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestPhasePresentMaster___c___ctor(QuestPhasePresentMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_0(
        QuestPhasePresentMaster___c_o *this,
        QuestPhasePresentEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.phase;
}


void __fastcall QuestPhasePresentMaster___c__DisplayClass0_0___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhasePresentMaster___c__DisplayClass0_0___IsContainEntityFromPhase_b__1(
        QuestPhasePresentMaster___c__DisplayClass0_0_o *this,
        QuestPhasePresentEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.phase > this->fields.currentPhase;
}