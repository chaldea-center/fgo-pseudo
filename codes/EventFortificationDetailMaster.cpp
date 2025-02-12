void __fastcall EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB467A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__,
      method);
    byte_4BB467A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    390,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
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
  __int64 v14; // x20
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__bool__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_4BB467C & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__getEntitys_EventFortificationDetailEntity___,
      v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___, v9);
    sub_1C13D24(&System_Func_EventFortificationDetailEntity__bool__TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C13D24(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__, v12);
    sub_1C13D24(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo, v13);
    byte_4BB467C = 1;
  }
  v14 = sub_1C13F70(EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = eventId,
        *(_DWORD *)(v14 + 20) = idx,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
    sub_1C13F80(Instance, v16);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v14 + 24) = MasterData_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)MasterData_object, v18, v19, v20, v21, v22, v23);
  v24 = sub_1C13E58(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                    + 2
                    * *((unsigned __int16 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__getEntitys_EventFortificationDetailEntity___
                      + 40)));
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(EventFortificationDetailMaster_o *, __int64))(v24 + 8))(
                                                               this,
                                                               v24);
  v26 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_EventFortificationDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          v25,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v27,
                                                   (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationDetailEntity_o *__fastcall EventFortificationDetailMaster__GetEntity(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB467B & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BB467B = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_323D0DC *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_4BB467D & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__,
      entity);
    byte_4BB467D = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  CommonReleaseMaster_o *v27; // x23
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Il2CppObject *v46; // x24
  __int64 monitor_high; // x1
  System_Collections_Generic_List_object__o *v48; // x0
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0

  if ( (byte_4BB467E & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__,
      entities);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1C13D24(&System_IDisposable_TypeInfo, v10);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo, v11);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v15);
    sub_1C13D24(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4BB467E = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v18;
  sub_1C13CC8((PartyOrganizationUtility_o *)entities, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_42;
  v27 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        p_offset += 4;
        if ( !v31 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__c **)v36 - 1) != System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_17;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_17:
      v37 = sub_1C65D04(
              Enumerator,
              System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo,
              0LL);
    }
    v38 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                            Enumerator,
                            *(_QWORD *)(v37 + 8));
    v46 = v38;
    if ( !v38 )
      sub_1C13F80(0LL, v39);
    if ( LODWORD(v38[1].klass) == evenId && HIDWORD(v38[1].klass) == idx )
    {
      monitor_high = HIDWORD(v38[2].monitor);
      if ( !(_DWORD)monitor_high )
        goto LABEL_25;
      if ( !v27 )
        sub_1C13F80(v38, monitor_high);
      if ( CommonReleaseMaster__IsOpen(v27, monitor_high, 0LL, 0, 0LL) )
      {
LABEL_25:
        v48 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1C13F80(0LL, monitor_high);
        items = v48->fields._items;
        v50 = Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__;
        ++v48->fields._version;
        if ( !items )
          sub_1C13F80(v48, monitor_high);
        size = v48->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v48,
            v46,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &items->obj.klass + size;
          v48->fields._size = size + 1;
          v52[4] = (Il2CppClass *)v46;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v46, v40, v41, v42, v43, v44, v45);
        }
      }
    }
  }
  v53 = Enumerator->klass;
  v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_34;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_34:
    v56 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                               Enumerator,
                               *(_QWORD *)(v56 + 8));
  if ( !*entities )
LABEL_42:
    sub_1C13F80(Instance, v26);
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
    sub_1C13F80(this, x);
  }
  return 0;
}