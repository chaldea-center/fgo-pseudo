void __fastcall EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44C2F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__, method);
    byte_4B44C2F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    172,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTutorialCondEntity_o *__fastcall EventTutorialCondMaster__GetEntity(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44C2D & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B44C2D = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_32E68F4 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialCondEntity__o *__fastcall EventTutorialCondMaster__GetEventTutorialCondEntity(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B44C32 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__,
      *(_QWORD *)&evId);
    sub_1BDB878(&System_IDisposable_TypeInfo, v9);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo, v10);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo, v14);
    byte_4B44C32 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventTutorialCondEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    v31 = v28;
    if ( v28 && *(_DWORD *)(v28 + 16) == evId && *(_DWORD *)(v28 + 20) == flgType && *(_DWORD *)(v28 + 24) == number )
    {
      if ( !v15 )
        sub_1BDBAD4(v28, v28);
      items = v15->fields._items;
      v33 = Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1BDBAD4(v28, v28);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v28,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v31;
        sub_1BDB81C((CGThumbnailListItem_o *)(v35 + 4), v31, v29, v30);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_EventTutorialCondEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialCondMaster__TryGetEntity(
        EventTutorialCondMaster_o *this,
        EventTutorialCondEntity_o **entity,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44C2E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__, entity);
    byte_4B44C2E = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialCondMaster__isEnableCondition(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t condType,
        System_Int32_array *condIds,
        int32_t condValue,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v15; // x4
  __int64 v16; // x8
  EventTutorialCondMaster_o *v17; // x22
  unsigned __int64 v18; // x24
  int32_t *v19; // x23
  const MethodInfo *v20; // x3
  EventTutorialCondMaster_o *v21; // x23
  unsigned __int64 v22; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v24; // x8
  unsigned __int64 v25; // x23
  int64_t v26; // x20
  int32_t v27; // w22
  TotalEventRaidEntity_o *v29; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B44C31 & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventRaidMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    this = (EventTutorialCondMaster_o *)sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    byte_4B44C31 = 1;
  }
  v29 = 0LL;
  entity = 0LL;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( condIds )
        {
          v16 = *(_QWORD *)&condIds->max_length;
          if ( (int)v16 >= 1 )
          {
            v17 = this;
            v18 = 0LL;
            while ( 1 )
            {
              if ( v18 >= (unsigned int)v16 )
                goto LABEL_43;
              if ( !MasterData_object )
                goto LABEL_42;
              v19 = &condIds->m_Items[v18 + 1];
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    (EventRaidMaster_o *)MasterData_object,
                                                    &entity,
                                                    eventId,
                                                    *v19,
                                                    v15);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v18 >= condIds->max_length )
                  goto LABEL_43;
                if ( !v17 )
                  goto LABEL_42;
                this = (EventTutorialCondMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                                      (TotalEventRaidMaster_o *)v17,
                                                      &v29,
                                                      eventId,
                                                      *v19,
                                                      0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !entity || !v29 )
                    goto LABEL_42;
                  if ( entity->fields.maxHp > v29->fields.totalDamage )
                  {
                    if ( v18 >= condIds->max_length )
                      goto LABEL_43;
                    this = (EventTutorialCondMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(
                                                          (EventRaidMaster_o *)MasterData_object,
                                                          eventId,
                                                          *v19,
                                                          v20);
                    if ( !this )
                      goto LABEL_42;
                    v21 = this;
                    if ( SLODWORD(this->fields._MasterName_k__BackingField) >= 1 )
                      break;
                  }
                }
              }
LABEL_28:
              LODWORD(v16) = condIds->max_length;
              if ( (__int64)++v18 >= (int)v16 )
                goto LABEL_39;
            }
            v22 = 0LL;
            while ( 1 )
            {
              this = (EventTutorialCondMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v22 >= LODWORD(v21->fields._MasterName_k__BackingField) )
                goto LABEL_43;
              if ( !this )
                goto LABEL_42;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *(&v21->fields.revision + v22),
                                                    0LL);
              if ( !this )
                goto LABEL_42;
              MasterName_k__BackingField = this[1].fields._MasterName_k__BackingField;
              if ( !MasterName_k__BackingField )
                goto LABEL_42;
              if ( *(_DWORD *)&MasterName_k__BackingField->fields._firstChar == 1 )
                break;
              if ( (__int64)++v22 >= SLODWORD(v21->fields._MasterName_k__BackingField) )
                goto LABEL_28;
            }
            LOBYTE(this) = 1;
            return (unsigned __int8)this & 1;
          }
LABEL_39:
          LOBYTE(this) = 0;
          return (unsigned __int8)this & 1;
        }
      }
    }
LABEL_42:
    sub_1BDBAD4(this, *(_QWORD *)&eventId);
  }
  if ( !condIds )
    goto LABEL_42;
  v24 = *(_QWORD *)&condIds->max_length;
  if ( (int)v24 < 1 )
    goto LABEL_39;
  v25 = 0LL;
  v26 = condValue;
  do
  {
    if ( v25 >= (unsigned int)v24 )
LABEL_43:
      sub_1BDBADC(this, *(_QWORD *)&eventId, *(_QWORD *)&condType);
    v27 = condIds->m_Items[v25 + 1];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v27, v26, 0, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    LODWORD(v24) = condIds->max_length;
    ++v25;
  }
  while ( (__int64)v25 < (int)v24 );
  return (unsigned __int8)this & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialCondMaster__isEnableExtCondition(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        EventTutorialEntity_o *baseEntity,
        const MethodInfo *method)
{
  EventTutorialCondMaster_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  bool isEnableCondition; // w23
  const MethodInfo *v26; // x4
  EventTutorialCondMaster_o *v27; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v28; // x19
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x5
  Il2CppObject *current; // x21
  bool v33; // w20
  bool v34; // w0
  int32_t klass; // w21
  bool Item; // w0
  bool v37; // w19
  int v38; // w20
  __int128 v40; // [xsp+0h] [xbp-C0h] BYREF
  __int128 v41; // [xsp+10h] [xbp-B0h]
  __int128 v42; // [xsp+20h] [xbp-A0h] BYREF
  __int128 v43; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+40h] [xbp-80h] BYREF

  v10 = this;
  if ( (byte_4B44C30 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, *(_QWORD *)&evId);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v14);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__, v23);
    this = (EventTutorialCondMaster_o *)sub_1BDB878(
                                          &Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__,
                                          v24);
    byte_4B44C30 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v42 = 0u;
  v43 = 0u;
  if ( !baseEntity )
    goto LABEL_21;
  isEnableCondition = EventTutorialCondMaster__isEnableCondition(
                        this,
                        baseEntity->fields.eventId,
                        baseEntity->fields.condType,
                        baseEntity->fields.condIds,
                        baseEntity->fields.condValue,
                        method);
  this = (EventTutorialCondMaster_o *)EventTutorialCondMaster__GetEventTutorialCondEntity(
                                        v10,
                                        evId,
                                        flgType,
                                        number,
                                        v26);
  if ( !this )
    goto LABEL_21;
  v27 = this;
  if ( !LODWORD(this->fields._MasterName_k__BackingField) )
    return isEnableCondition;
  v28 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v28,
    (const MethodInfo_332BDAC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !v28 )
LABEL_21:
    sub_1BDBAD4(this, *(_QWORD *)&evId);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    v28,
    0,
    isEnableCondition,
    (const MethodInfo_332C76C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)v27,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
  *(_OWORD *)&v44.fields._list = v40;
  v44.fields._current = (Il2CppObject *)v41;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    if ( !v29 )
      break;
    current = v44.fields._current;
    if ( !v44.fields._current )
      sub_1BDBAD4(v29, v30);
    v33 = EventTutorialCondMaster__isEnableCondition(
            (EventTutorialCondMaster_o *)v29,
            (int32_t)v44.fields._current[1].klass,
            HIDWORD(v44.fields._current[2].klass),
            (System_Int32_array *)v44.fields._current[2].monitor,
            0,
            v31);
    v34 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            v28,
            (int32_t)current[2].klass,
            (const MethodInfo_332C980 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    klass = (int32_t)current[2].klass;
    if ( v34 )
    {
      Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
               v28,
               klass,
               (const MethodInfo_332C6DC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v28,
        klass,
        v33 && Item,
        (const MethodInfo_332C76C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
    else
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v28,
        klass,
        v33,
        (const MethodInfo_332C76C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v40,
    v28,
    (const MethodInfo_332CB70 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v42 = v40;
  v43 = v41;
  while ( 1 )
  {
    v37 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v42,
            (const MethodInfo_348AF90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v37 )
      break;
    if ( BYTE4(v43) )
    {
      v38 = 9;
      goto LABEL_18;
    }
  }
  v38 = 10;
LABEL_18:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v42,
    (const MethodInfo_348B098 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v37 && v38 == 9;
}