void __fastcall EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B109 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
    byte_4A5B109 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    386,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
}


EventFortificationDetailEntity_array *__fastcall EventFortificationDetailMaster__GetEntitiesByOpend(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4A5B10B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
    sub_1B885B0(&System_Func_EventFortificationDetailEntity__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__);
    sub_1B885B0(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
    byte_4A5B10B = 1;
  }
  v7 = sub_1B887FC(EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = eventId,
        *(_DWORD *)(v7 + 20) = idx,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v9);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v7 + 24) = MasterData_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)MasterData_object, v11, v12);
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___);
  v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventFortificationDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          Entitys_object,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v15,
                                                   (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
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

  if ( (byte_4A5B10A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
    byte_4A5B10A = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_311DC8C *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
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

  if ( (byte_4A5B10C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
    byte_4A5B10C = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationDetailMaster__TryGetEntityList(
        EventFortificationDetailMaster_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o **entities,
        int32_t evenId,
        int32_t idx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  CommonReleaseMaster_o *v14; // x23
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x24
  __int64 methodPtr_low; // x10
  __int64 monitor_high; // x1
  System_Collections_Generic_List_object__o *v32; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4A5B10D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventFortificationDetailEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B10D = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)entities, (int32_t)v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_44;
  v14 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_17:
      v24 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25
      || (methodPtr_low = LOBYTE(EventFortificationDetailEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v25->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationDetailEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationDetailEntity_TypeInfo )
    {
      sub_1B8880C(v25, v26);
    }
    if ( LODWORD(v25[1].klass) == evenId && HIDWORD(v25[1].klass) == idx )
    {
      monitor_high = HIDWORD(v25[2].monitor);
      if ( !(_DWORD)monitor_high )
        goto LABEL_27;
      if ( !v14 )
        sub_1B8880C(v25, monitor_high);
      if ( CommonReleaseMaster__IsOpen(v14, monitor_high, 0LL, 0, 0LL) )
      {
LABEL_27:
        v32 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1B8880C(0LL, monitor_high);
        items = v32->fields._items;
        v34 = Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__;
        ++v32->fields._version;
        if ( !items )
          sub_1B8880C(v32, monitor_high);
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            v29,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v32->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v29;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v29, v27, v28);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_36;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_36:
    v40 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                               Enumerator,
                               *(_QWORD *)(v40 + 8));
  if ( !*entities )
LABEL_44:
    sub_1B8880C(Instance, v13);
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
    sub_1B8880C(this, x);
  }
  return 0;
}