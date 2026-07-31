void EventFortificationSvtMaster___ctor(EventFortificationSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938648 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
    byte_5938648 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    395,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationSvtEntity_o *EventFortificationSvtMaster__GetEntity(
        EventFortificationSvtMaster_o *this,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938649 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
    byte_5938649 = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationSvtEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventFortificationSvtMaster__TryGetEntity(
        EventFortificationSvtMaster_o *this,
        EventFortificationSvtEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593864A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
    byte_593864A = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
}


bool EventFortificationSvtMaster__TryGetEntityList(
        EventFortificationSvtMaster_o *this,
        System_Collections_Generic_List_EventFortificationSvtEntity__o **eventFortificationSvtList,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 IsOpen; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  const MethodInfo *v34; // x4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *v38; // x23
  __int64 v39; // x1
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Collections_Generic_IEnumerator_T__o *v49; // [xsp+18h] [xbp-48h]

  if ( (byte_593864B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventFortificationSvtEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593864B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventFortificationSvtEntity__GetEnumerator__);
  v49 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v12);
  for ( i = Enumerator; ; i = v49 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_11;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            i,
            *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v49 )
      sub_21FFECC(v18, v19);
    v26 = v49->klass;
    v27 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_19;
      }
      v29 = (__int64)&v26->vtable[*v28];
    }
    else
    {
LABEL_19:
      v29 = sub_2237E2C(v49, System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__TypeInfo, 0);
    }
    IsOpen = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
               v49,
               *(_QWORD *)(v29 + 8));
    v38 = (Il2CppObject *)IsOpen;
    if ( !IsOpen )
      sub_21FFECC(0, v31);
    if ( *(_DWORD *)(IsOpen + 16) == eventId )
    {
      v39 = *(unsigned int *)(IsOpen + 44);
      if ( !(_DWORD)v39 )
        goto LABEL_50;
      if ( !MasterData_object )
        sub_21FFECC(IsOpen, v39);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, v39, 0, 0, v34);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_50:
        if ( !v10
          || (items = v10->fields._items,
              v41 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__,
              ++v10->fields._version,
              !items) )
        {
          sub_21FFECC(IsOpen, v39);
        }
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v38,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v38;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v43 + 4),
            (int32_t)v38,
            v32,
            v33,
            (int32_t)v34,
            v35,
            v36,
            v37);
        }
      }
    }
  }
  if ( v49 )
  {
    v44 = v49->klass;
    v45 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_38;
      }
      v47 = (__int64)&v44->vtable[*v46];
    }
    else
    {
LABEL_38:
      v47 = sub_2237E2C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(v49, *(_QWORD *)(v47 + 8));
  }
  *eventFortificationSvtList = (System_Collections_Generic_List_EventFortificationSvtEntity__o *)v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)eventFortificationSvtList, (int32_t)v10, v20, v21, v22, v23, v24, v25);
  if ( !*eventFortificationSvtList )
LABEL_47:
    sub_21FFECC(Instance, v8);
  return (*eventFortificationSvtList)->fields._size > 0;
}