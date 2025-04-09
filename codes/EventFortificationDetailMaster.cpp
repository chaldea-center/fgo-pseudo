void __fastcall EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAE10 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__,
      method);
    byte_49BAE10 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    392,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_49BAE12 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__getEntitys_EventFortificationDetailEntity___,
      v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___, v9);
    sub_1B4CF90(&System_Func_EventFortificationDetailEntity__bool__TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__, v12);
    sub_1B4CF90(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo, v13);
    byte_49BAE12 = 1;
  }
  v14 = sub_1B4D1DC(EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = eventId,
        *(_DWORD *)(v14 + 20) = idx,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v16);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v14 + 24) = MasterData_object;
  sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 24), (int32_t)MasterData_object, v18, v19);
  v20 = sub_1B4D0C4(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                    + 2
                    * *((unsigned __int16 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__getEntitys_EventFortificationDetailEntity___
                      + 40)));
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(EventFortificationDetailMaster_o *, __int64))(v20 + 8))(
                                                               this,
                                                               v20);
  v22 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventFortificationDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    0LL);
  v23 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v23,
                                                   (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
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

  if ( (byte_49BAE11 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49BAE11 = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_31A2454 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
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

  if ( (byte_49BAE13 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__,
      entity);
    byte_49BAE13 = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  CommonReleaseMaster_o *v23; // x23
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x24
  __int64 monitor_high; // x1
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0

  if ( (byte_49BAE14 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__,
      entities);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v10);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo, v11);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v15);
    sub_1B4CF90(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo, v16);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49BAE14 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v18;
  sub_1B4CF34((CGThumbnailListItem_o *)entities, (int32_t)v18, v19, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_42;
  v23 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_17;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_17:
      v33 = sub_1B9D724(
              Enumerator,
              System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo,
              0LL);
    }
    v34 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                            Enumerator,
                            *(_QWORD *)(v33 + 8));
    v38 = v34;
    if ( !v34 )
      sub_1B4D1EC(0LL, v35);
    if ( LODWORD(v34[1].klass) == evenId && HIDWORD(v34[1].klass) == idx )
    {
      monitor_high = HIDWORD(v34[2].monitor);
      if ( !(_DWORD)monitor_high )
        goto LABEL_25;
      if ( !v23 )
        sub_1B4D1EC(v34, monitor_high);
      if ( CommonReleaseMaster__IsOpen(v23, monitor_high, 0LL, 0, 0LL) )
      {
LABEL_25:
        v40 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1B4D1EC(0LL, monitor_high);
        items = v40->fields._items;
        v42 = Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__;
        ++v40->fields._version;
        if ( !items )
          sub_1B4D1EC(v40, monitor_high);
        size = v40->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            v38,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          v40->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v38;
          sub_1B4CF34((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v38, v36, v37);
        }
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_34;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_34:
    v48 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                               Enumerator,
                               *(_QWORD *)(v48 + 8));
  if ( !*entities )
LABEL_42:
    sub_1B4D1EC(Instance, v22);
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
    sub_1B4D1EC(this, x);
  }
  return 0;
}