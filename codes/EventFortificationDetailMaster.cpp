void __fastcall EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B286D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
    byte_42B286D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    385,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
}


EventFortificationDetailEntity_array *__fastcall EventFortificationDetailMaster__GetEntitiesByOpend(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x22
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_42B286F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
    sub_B52984(&Method_System_Func_EventFortificationDetailEntity__bool___ctor__);
    sub_B52984(&System_Func_EventFortificationDetailEntity__bool__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__);
    sub_B52984(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
    byte_42B286F = 1;
  }
  v7 = sub_B52A54(EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
  EventFortificationDetailMaster___c__DisplayClass2_0___ctor(
    (EventFortificationDetailMaster___c__DisplayClass2_0_o *)v7,
    0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = eventId,
        *(_DWORD *)(v7 + 20) = idx,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(Instance, v9);
  }
  MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v7 + 24) = MasterData_WarQuestSelectionMaster;
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 24),
    MasterData_WarQuestSelectionMaster,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1A4FA58 *)Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___);
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventFortificationDetailEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_EventFortificationDetailEntity__bool___ctor__);
  v19 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v19,
                                                   (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
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

  if ( (byte_42B286E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
    byte_42B286E = 1;
  }
  PK = EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_23E2728 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
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

  if ( (byte_42B2870 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
    byte_42B2870 = 1;
  }
  PK = EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationDetailMaster__TryGetEntityList(
        EventFortificationDetailMaster_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o **entities,
        int32_t evenId,
        int32_t idx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  CommonReleaseMaster_o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x0
  __int64 v32; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x24
  __int64 v34; // x10
  __int64 klass_high; // x1
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0

  if ( (byte_42B2871 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&EventFortificationDetailEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2871 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v9;
  sub_B52920((BattleServantConfConponent_o *)entities, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_40;
  v18 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_17:
      v30 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v26);
    }
    v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31
      || (v34 = *(&EventFortificationDetailEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v34)
      || (EventFortificationDetailEntity_c *)v31->klass->_2.typeHierarchy[v34 - 1] != EventFortificationDetailEntity_TypeInfo )
    {
      sub_B52A5C(v31, v32);
    }
    if ( v31->fields.missionTargetId == evenId && v31->fields.missionConditionDetailId == idx )
    {
      klass_high = HIDWORD(v31[1].klass);
      if ( !(_DWORD)klass_high )
        goto LABEL_27;
      if ( !v18 )
        sub_B52A5C(v31, klass_high);
      if ( CommonReleaseMaster__IsOpen(v18, klass_high, 0LL, 0, 0LL) )
      {
LABEL_27:
        if ( !*entities )
          sub_B52A5C(0LL, klass_high);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entities,
          v33,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__);
      }
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_33:
    v39 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v26);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                Enumerator,
                                *(_QWORD *)(v39 + 8));
  if ( !*entities )
LABEL_40:
    sub_B52A5C(Instance, v17);
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
    sub_B52A5C(this, x);
  }
  return 0;
}