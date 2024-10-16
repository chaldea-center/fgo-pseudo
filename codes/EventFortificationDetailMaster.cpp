void __fastcall EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5CF7 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__,
      method);
    byte_4AB5CF7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    386,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
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
  __int64 v14; // x22
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  System_Func_object__bool__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4AB5CF9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___, v7);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___, v8);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___, v9);
    sub_1BAB41C(&System_Func_EventFortificationDetailEntity__bool__TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__, v12);
    sub_1BAB41C(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo, v13);
    byte_4AB5CF9 = 1;
  }
  v14 = sub_1BAB668(EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = eventId,
        *(_DWORD *)(v14 + 20) = idx,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
    sub_1BAB678(Instance, v16);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v14 + 24) = MasterData_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)MasterData_object, v18, v19);
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2EC5E5C *)Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___);
  v21 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_EventFortificationDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    0LL);
  v22 = System_Linq_Enumerable__Where_object_(
          Entitys_object,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v22,
                                                   (const MethodInfo_2EFD0EC *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
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

  if ( (byte_4AB5CF8 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4AB5CF8 = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_31640E8 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
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

  if ( (byte_4AB5CFA & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__,
      entity);
    byte_4AB5CFA = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  CommonReleaseMaster_o *v24; // x23
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x24
  __int64 methodPtr_low; // x10
  __int64 monitor_high; // x1
  System_Collections_Generic_List_object__o *v42; // x0
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0

  if ( (byte_4AB5CFB & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entities);
    sub_1BAB41C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1BAB41C(&EventFortificationDetailEntity_TypeInfo, v10);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v11);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v16);
    sub_1BAB41C(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo, v17);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4AB5CFB = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v19;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)entities, (int32_t)v19, v20, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_44;
  v24 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_17;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_17:
      v34 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                            Enumerator,
                            *(_QWORD *)(v34 + 8));
    v39 = v35;
    if ( !v35
      || (methodPtr_low = LOBYTE(EventFortificationDetailEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v35->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationDetailEntity_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationDetailEntity_TypeInfo )
    {
      sub_1BAB678(v35, v36);
    }
    if ( LODWORD(v35[1].klass) == evenId && HIDWORD(v35[1].klass) == idx )
    {
      monitor_high = HIDWORD(v35[2].monitor);
      if ( !(_DWORD)monitor_high )
        goto LABEL_27;
      if ( !v24 )
        sub_1BAB678(v35, monitor_high);
      if ( CommonReleaseMaster__IsOpen(v24, monitor_high, 0LL, 0, 0LL) )
      {
LABEL_27:
        v42 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1BAB678(0LL, monitor_high);
        items = v42->fields._items;
        v44 = Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__;
        ++v42->fields._version;
        if ( !items )
          sub_1BAB678(v42, monitor_high);
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v42,
            v39,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v42->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v39;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v39, v37, v38);
        }
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_36;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_36:
    v50 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                               Enumerator,
                               *(_QWORD *)(v50 + 8));
  if ( !*entities )
LABEL_44:
    sub_1BAB678(Instance, v23);
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
    sub_1BAB678(this, x);
  }
  return 0;
}