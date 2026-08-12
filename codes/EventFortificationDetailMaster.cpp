void EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59707EB & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
    byte_59707EB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    394,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
}


EventFortificationDetailEntity_array *EventFortificationDetailMaster__GetEntitiesByOpend(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_59707ED & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
    sub_2213A60(&System_Func_EventFortificationDetailEntity__bool__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__);
    sub_2213A60(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
    byte_59707ED = 1;
  }
  v7 = sub_2213CCC(EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = eventId,
        *(_DWORD *)(v7 + 20) = idx,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v9);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v7 + 24) = MasterData_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)MasterData_object, v11, v12, v13, v14, v15, v16);
  list = this->fields.list;
  v18 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventFortificationDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v19,
                                                   (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationDetailEntity_o *EventFortificationDetailMaster__GetEntity(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59707EC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
    byte_59707EC = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_3F157EC *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventFortificationDetailMaster__TryGetEntity(
        EventFortificationDetailMaster_o *this,
        EventFortificationDetailEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59707EE & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
    byte_59707EE = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
}


bool EventFortificationDetailMaster__TryGetEntityList(
        EventFortificationDetailMaster_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o **entities,
        int32_t evenId,
        int32_t idx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 Instance; // x0
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v19; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int *p_offset; // x10
  __int64 v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  const MethodInfo *v35; // x4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *v39; // x23
  __int64 monitor_high; // x1
  System_Collections_Generic_List_object__o *v41; // x0
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x8
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  System_Collections_Generic_IEnumerator_T__o *v51; // [xsp+18h] [xbp-48h]

  if ( (byte_59707EF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59707EF = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)entities, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  v19 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__);
  v51 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v21);
  for ( i = Enumerator; ; i = v51 )
  {
    klass = i->klass;
    v24 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_11;
      }
      v26 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v26 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                 i,
                 *(_QWORD *)(v26 + 8));
    if ( (Instance & 1) == 0 )
      break;
    if ( !v51 )
      sub_2213CDC(Instance, v17);
    v27 = v51->klass;
    v28 = *(unsigned __int16 *)&v51->klass->_2.rank;
    if ( *(_WORD *)&v51->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_19;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_19:
      v30 = sub_224BC3C(v51, System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo, 0);
    }
    v31 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                            v51,
                            *(_QWORD *)(v30 + 8));
    v39 = v31;
    if ( !v31 )
      sub_2213CDC(0, v32);
    if ( LODWORD(v31[1].klass) == evenId && HIDWORD(v31[1].klass) == idx )
    {
      monitor_high = HIDWORD(v31[2].monitor);
      if ( !(_DWORD)monitor_high )
        goto LABEL_27;
      if ( !v19 )
        sub_2213CDC(v31, monitor_high);
      if ( CommonReleaseMaster__IsOpen(v19, monitor_high, 0, 0, v35) )
      {
LABEL_27:
        v41 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities
          || (items = v41->fields._items,
              v43 = Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__,
              ++v41->fields._version,
              !items) )
        {
          sub_2213CDC(v41, monitor_high);
        }
        size = v41->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v41,
            v39,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v41->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v39;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v45 + 4),
            (int32_t)v39,
            v33,
            v34,
            (int32_t)v35,
            v36,
            v37,
            v38);
        }
      }
    }
  }
  if ( v51 )
  {
    v46 = v51->klass;
    v47 = *(unsigned __int16 *)&v51->klass->_2.rank;
    if ( *(_WORD *)&v51->klass->_2.rank )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_39;
      }
      v49 = (__int64)&v46->vtable[*v48];
    }
    else
    {
LABEL_39:
      v49 = sub_224BC3C(v51, System_IDisposable_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                 v51,
                 *(_QWORD *)(v49 + 8));
  }
  if ( !*entities )
LABEL_48:
    sub_2213CDC(Instance, v17);
  return (*entities)->fields._size > 0;
}


void EventFortificationDetailMaster___c__DisplayClass2_0___ctor(
        EventFortificationDetailMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventFortificationDetailMaster___c__DisplayClass2_0___GetEntitiesByOpend_b__0(
        EventFortificationDetailMaster___c__DisplayClass2_0_o *this,
        EventFortificationDetailEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !x )
    goto LABEL_7;
  if ( x->fields.eventId == this->fields.eventId && x->fields.fortificationIdx == this->fields.idx )
  {
    this = (EventFortificationDetailMaster___c__DisplayClass2_0_o *)this->fields.commonReleaseMaster;
    if ( this )
      return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, x->fields.commonReleaseId, 0, 0, v3);
LABEL_7:
    sub_2213CDC(this, x);
  }
  return 0;
}