void TotalEventRaidMaster___ctor(TotalEventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59393DC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
    byte_59393DC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    155,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaidEntity_o *TotalEventRaidMaster__GetEntity(
        TotalEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59393DA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
    byte_59393DA = 1;
  }
  PK = (Il2CppObject *)TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalEventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3EE2044 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool TotalEventRaidMaster__TryGetEntity(
        TotalEventRaidMaster_o *this,
        TotalEventRaidEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59393DB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
    byte_59393DB = 1;
  }
  PK = (Il2CppObject *)TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_TotalEventRaidEntity__o *TotalEventRaidMaster__TryGetEntityListFromDay(
        TotalEventRaidMaster_o *this,
        int32_t day,
        int64_t *maxHpSum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_TotalEventRaidEntity__c *v7; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int64_t v14; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *v17; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *v24; // x24
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  Il2CppObject *v29; // x24
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__o *v40; // x21
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  EventRaidEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v47; // [xsp+18h] [xbp-58h]

  if ( (byte_59393DD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_TotalEventRaidEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_TotalEventRaidEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59393DD = 1;
  }
  v7 = System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo;
  entity = 0;
  v47 = 0;
  *maxHpSum = 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v7);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_53:
    sub_21FFECC(Instance, v10);
  v14 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_TotalEventRaidEntity__GetEnumerator__);
  v47 = Enumerator;
  if ( !Enumerator )
LABEL_37:
    sub_21FFECC(Enumerator, v16);
  v17 = Enumerator;
  while ( 1 )
  {
    klass = v17->klass;
    v19 = *(unsigned __int16 *)&v17->klass->_2.rank;
    if ( *(_WORD *)&v17->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_13;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v21 = sub_2237E2C(v17, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            v17,
            *(_QWORD *)(v21 + 8));
    if ( (v22 & 1) == 0 )
      break;
    v24 = v47;
    if ( !v47 )
      sub_21FFECC(v22, v23);
    v25 = v47->klass;
    v26 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TotalEventRaidEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_TotalEventRaidEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_21;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_21:
      v28 = sub_2237E2C(v47, System_Collections_Generic_IEnumerator_TotalEventRaidEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                  v24,
                                                                  *(_QWORD *)(v28 + 8));
    v29 = (Il2CppObject *)Enumerator;
    if ( !Enumerator )
      sub_21FFECC(0, v16);
    if ( HIDWORD(Enumerator[1].klass) == day )
    {
      if ( !MasterData_object )
        sub_21FFECC(Enumerator, v16);
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)EventRaidMaster__TryGetEntity(
                                                                    (EventRaidMaster_o *)MasterData_object,
                                                                    &entity,
                                                                    (int32_t)Enumerator[1].klass,
                                                                    day,
                                                                    0);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
        if ( !entity )
          sub_21FFECC(0, v16);
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)EventRaidEntity__IsOpenTime(entity, v14, 0);
        if ( ((unsigned __int8)Enumerator & 1) != 0 )
        {
          if ( !v8
            || (items = v8->fields._items,
                v37 = Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__,
                ++v8->fields._version,
                !items) )
          {
            sub_21FFECC(Enumerator, v16);
          }
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              v29,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v39[4] = (Il2CppClass *)v29;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v29, v30, v31, v32, v33, v34, v35);
          }
          if ( !entity )
            sub_21FFECC(Enumerator, v16);
          *maxHpSum += entity->fields.maxHp;
        }
      }
    }
    v17 = v47;
    if ( !v47 )
      goto LABEL_37;
  }
  v40 = v47;
  if ( v47 )
  {
    v41 = v47->klass;
    v42 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_43;
      }
      v44 = (__int64)&v41->vtable[*v43];
    }
    else
    {
LABEL_43:
      v44 = sub_2237E2C(v47, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8));
  }
  return (System_Collections_Generic_List_TotalEventRaidEntity__o *)v8;
}