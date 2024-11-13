void __fastcall EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16198 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__,
      method,
      v2);
    byte_4B16198 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    386,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationDetailEntity_array *__fastcall EventFortificationDetailMaster__GetEntitiesByOpend(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x22
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Func_object__bool__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_4B1619A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId, *(_QWORD *)&idx);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___, v11, v12);
    sub_1BCA7E0(&System_Func_EventFortificationDetailEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__, v17, v18);
    sub_1BCA7E0(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo, v19, v20);
    byte_4B1619A = 1;
  }
  v21 = sub_1BCAA2C(
          EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&idx,
          method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21
    || (*(_DWORD *)(v21 + 16) = eventId,
        *(_DWORD *)(v21 + 20) = idx,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v23);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v21 + 24) = MasterData_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)MasterData_object, v25, v26, v27, v28, v29, v30);
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_EventFortificationDetailEntity___);
  v35 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_EventFortificationDetailEntity__bool__TypeInfo,
                                         v32,
                                         v33,
                                         v34);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v21,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    0LL);
  v36 = System_Linq_Enumerable__Where_object_(
          Entitys_object,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v36,
                                                   (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
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

  if ( (byte_4B16199 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&idx);
    byte_4B16199 = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_31B3198 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
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

  if ( (byte_4B1619B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B1619B = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationDetailMaster__TryGetEntityList(
        EventFortificationDetailMaster_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o **entities,
        int32_t evenId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Instance; // x0
  __int64 v37; // x1
  CommonReleaseMaster_o *v38; // x23
  __int64 v39; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  Il2CppObject *v57; // x24
  __int64 methodPtr_low; // x10
  __int64 monitor_high; // x1
  System_Collections_Generic_List_object__o *v60; // x0
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x8
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0

  if ( (byte_4B1619C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      entities,
      *(_QWORD *)&evenId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9, v10);
    sub_1BCA7E0(&EventFortificationDetailEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B1619C = 1;
  }
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo,
                                                       entities,
                                                       *(_QWORD *)&evenId,
                                                       *(_QWORD *)&idx);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)entities, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_44;
  v38 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v39);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v42;
        p_offset += 4;
        if ( !v42 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v45 = Enumerator->klass;
    v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_17;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_17:
      v48 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v49 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                            Enumerator,
                            *(_QWORD *)(v48 + 8));
    v57 = v49;
    if ( !v49
      || (methodPtr_low = LOBYTE(EventFortificationDetailEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v49->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationDetailEntity_c *)v49->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationDetailEntity_TypeInfo )
    {
      sub_1BCAA3C(v49, v50);
    }
    if ( LODWORD(v49[1].klass) == evenId && HIDWORD(v49[1].klass) == idx )
    {
      monitor_high = HIDWORD(v49[2].monitor);
      if ( !(_DWORD)monitor_high )
        goto LABEL_27;
      if ( !v38 )
        sub_1BCAA3C(v49, monitor_high);
      if ( CommonReleaseMaster__IsOpen(v38, monitor_high, 0LL, 0, 0LL) )
      {
LABEL_27:
        v60 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1BCAA3C(0LL, monitor_high);
        items = v60->fields._items;
        v62 = Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__;
        ++v60->fields._version;
        if ( !items )
          sub_1BCAA3C(v60, monitor_high);
        size = v60->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v60,
            v57,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &items->obj.klass + size;
          v60->fields._size = size + 1;
          v64[4] = (Il2CppClass *)v57;
          sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v57, v51, v52, v53, v54, v55, v56);
        }
      }
    }
  }
  v65 = Enumerator->klass;
  v66 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_36;
    }
    v68 = (__int64)&v65->vtable[*v67].method;
  }
  else
  {
LABEL_36:
    v68 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
                               Enumerator,
                               *(_QWORD *)(v68 + 8));
  if ( !*entities )
LABEL_44:
    sub_1BCAA3C(Instance, v37);
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
    sub_1BCAA3C(this, x);
  }
  return 0;
}