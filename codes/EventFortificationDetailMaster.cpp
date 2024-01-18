void __fastcall EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A3DF & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__,
      method);
    byte_418A3DF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    384,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationDetailEntity_array *__fastcall EventFortificationDetailMaster__GetEntitiesByOpend(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x22
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_418A3E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___, v9);
    sub_B2C35C(&Method_System_Func_EventFortificationDetailEntity__bool___ctor__, v10);
    sub_B2C35C(&System_Func_EventFortificationDetailEntity__bool__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__, v13);
    sub_B2C35C(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo, v14);
    byte_418A3E1 = 1;
  }
  v15 = sub_B2C42C(EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
  EventFortificationDetailMaster___c__DisplayClass2_0___ctor(
    (EventFortificationDetailMaster___c__DisplayClass2_0_o *)v15,
    0LL);
  if ( !v15
    || (*(_DWORD *)(v15 + 16) = eventId,
        *(_DWORD *)(v15 + 20) = idx,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v17);
  }
  MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v15 + 24) = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v15 + 24),
    MasterData_WarQuestSelectionMaster,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventFortificationDetailEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v15,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_EventFortificationDetailEntity__bool___ctor__);
  v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v27,
                                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationDetailEntity_o *__fastcall EventFortificationDetailMaster__GetEntity(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A3E0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A3E0 = 1;
  }
  PK = EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_24E4520 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationDetailMaster__TryGetEntity(
        EventFortificationDetailMaster_o *this,
        EventFortificationDetailEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A3E2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__,
      entity);
    byte_418A3E2 = 1;
  }
  PK = EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationDetailMaster__TryGetEntityList(
        EventFortificationDetailMaster_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o **entities,
        int32_t evenId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  CommonReleaseMaster_o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x0
  __int64 v42; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x24
  __int64 v44; // x10
  __int64 klass_high; // x1
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_418A3E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entities);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_B2C35C(&EventFortificationDetailEntity_TypeInfo, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v16);
    sub_B2C35C(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418A3E3 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v19;
  sub_B2C2F8((BattleServantConfConponent_o *)entities, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_40;
  v28 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v29);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v30);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_17:
      v40 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v36);
    }
    v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41
      || (v44 = *(&EventFortificationDetailEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v41->klass->_2.bitflags2 + 1) < (unsigned int)v44)
      || (EventFortificationDetailEntity_c *)v41->klass->_2.typeHierarchy[v44 - 1] != EventFortificationDetailEntity_TypeInfo )
    {
      sub_B2C434(v41, v42);
    }
    if ( v41->fields.missionTargetId == evenId && v41->fields.missionConditionDetailId == idx )
    {
      klass_high = HIDWORD(v41[1].klass);
      if ( !(_DWORD)klass_high )
        goto LABEL_27;
      if ( !v28 )
        sub_B2C434(v41, klass_high);
      if ( CommonReleaseMaster__IsOpen(v28, klass_high, 0LL, 0, 0LL) )
      {
LABEL_27:
        if ( !*entities )
          sub_B2C434(0LL, klass_high);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entities,
          v43,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__);
      }
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_33:
    v49 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v36);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                                Enumerator,
                                *(_QWORD *)(v49 + 8));
  if ( !*entities )
LABEL_40:
    sub_B2C434(Instance, v27);
  return (*entities)->fields._size > 0;
}


void __fastcall EventFortificationDetailMaster___c__DisplayClass2_0___ctor(
        EventFortificationDetailMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventFortificationDetailMaster___c__DisplayClass2_0___GetEntitiesByOpend_b__0(
        EventFortificationDetailMaster___c__DisplayClass2_0_o *this,
        EventFortificationDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    goto LABEL_7;
  if ( x->fields.eventId == this->fields.eventId && x->fields.fortificationIdx == this->fields.idx )
  {
    this = (EventFortificationDetailMaster___c__DisplayClass2_0_o *)this->fields.commonReleaseMaster;
    if ( this )
      return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, x->fields.commonReleaseId, 0LL, 0, 0LL);
LABEL_7:
    sub_B2C434(this, x);
  }
  return 0;
}