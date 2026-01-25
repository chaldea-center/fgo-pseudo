void EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE84B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
    byte_4CEE84B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    172,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTutorialCondEntity_o *EventTutorialCondMaster__GetEntity(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE849 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
    byte_4CEE849 = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3432DB4 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialCondEntity__o *EventTutorialCondMaster__GetEventTutorialCondEntity(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4CEE84E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
    byte_4CEE84E = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_EventTutorialCondEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v17 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventTutorialCondEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_16:
      v21 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_EventTutorialCondEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    v29 = v22;
    if ( v22 && *(_DWORD *)(v22 + 16) == evId && *(_DWORD *)(v22 + 20) == flgType && *(_DWORD *)(v22 + 24) == number )
    {
      if ( !v9 )
        sub_1C7BD40(v22, v22);
      items = v9->fields._items;
      v31 = Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C7BD40(v22, v22);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v22,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 4), v29, v23, v24, v25, v26, v27, v28);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_31;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_31:
    v37 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_EventTutorialCondEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool EventTutorialCondMaster__TryGetEntity(
        EventTutorialCondMaster_o *this,
        EventTutorialCondEntity_o **entity,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE84A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
    byte_4CEE84A = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventTutorialCondMaster__isEnableCondition(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t condType,
        System_Int32_array *condIds,
        int32_t condValue,
        const MethodInfo *method)
{
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v11; // x4
  il2cpp_array_size_t max_length; // x8
  EventTutorialCondMaster_o *v13; // x22
  unsigned __int64 v14; // x24
  int32_t *v15; // x23
  const MethodInfo *v16; // x3
  EventTutorialCondMaster_o *v17; // x23
  unsigned __int64 v18; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  il2cpp_array_size_t v20; // x8
  unsigned __int64 v21; // x23
  int64_t v22; // x20
  int32_t v23; // w22
  TotalEventRaidEntity_o *v25; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEE84D & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventTutorialCondMaster_o *)sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CEE84D = 1;
  }
  v25 = 0;
  entity = 0;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( condIds )
        {
          max_length = condIds->max_length;
          if ( (int)max_length >= 1 )
          {
            v13 = this;
            v14 = 0;
            while ( 1 )
            {
              if ( v14 >= (unsigned int)max_length )
                goto LABEL_43;
              if ( !MasterData_object )
                goto LABEL_42;
              v15 = &condIds->m_Items[v14];
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    (EventRaidMaster_o *)MasterData_object,
                                                    &entity,
                                                    eventId,
                                                    *v15,
                                                    v11);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v14 >= LODWORD(condIds->max_length) )
                  goto LABEL_43;
                if ( !v13 )
                  goto LABEL_42;
                this = (EventTutorialCondMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                                      (TotalEventRaidMaster_o *)v13,
                                                      &v25,
                                                      eventId,
                                                      *v15,
                                                      0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !entity || !v25 )
                    goto LABEL_42;
                  if ( entity->fields.maxHp > v25->fields.totalDamage )
                  {
                    if ( v14 >= LODWORD(condIds->max_length) )
                      goto LABEL_43;
                    this = (EventTutorialCondMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(
                                                          (EventRaidMaster_o *)MasterData_object,
                                                          eventId,
                                                          *v15,
                                                          v16);
                    if ( !this )
                      goto LABEL_42;
                    v17 = this;
                    if ( SLODWORD(this->fields._MasterName_k__BackingField) >= 1 )
                      break;
                  }
                }
              }
LABEL_28:
              LODWORD(max_length) = condIds->max_length;
              if ( (__int64)++v14 >= (int)max_length )
                goto LABEL_39;
            }
            v18 = 0;
            while ( 1 )
            {
              this = (EventTutorialCondMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v18 >= LODWORD(v17->fields._MasterName_k__BackingField) )
                goto LABEL_43;
              if ( !this )
                goto LABEL_42;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *(&v17->fields.revision + v18),
                                                    0);
              if ( !this )
                goto LABEL_42;
              MasterName_k__BackingField = this[1].fields._MasterName_k__BackingField;
              if ( !MasterName_k__BackingField )
                goto LABEL_42;
              if ( *(_DWORD *)&MasterName_k__BackingField->fields._firstChar == 1 )
                break;
              if ( (__int64)++v18 >= SLODWORD(v17->fields._MasterName_k__BackingField) )
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
    sub_1C7BD40(this, *(_QWORD *)&eventId);
  }
  if ( !condIds )
    goto LABEL_42;
  v20 = condIds->max_length;
  if ( (int)v20 < 1 )
    goto LABEL_39;
  v21 = 0;
  v22 = condValue;
  do
  {
    if ( v21 >= (unsigned int)v20 )
LABEL_43:
      sub_1C7BD48(this);
    v23 = condIds->m_Items[v21];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v23, v22, 0, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    LODWORD(v20) = condIds->max_length;
    ++v21;
  }
  while ( (__int64)v21 < (int)v20 );
  return (unsigned __int8)this & 1;
}


// local variable allocation has failed, the output may be wrong!
bool EventTutorialCondMaster__isEnableExtCondition(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        EventTutorialEntity_o *baseEntity,
        const MethodInfo *method)
{
  EventTutorialCondMaster_o *v10; // x22
  bool isEnableCondition; // w23
  const MethodInfo *v12; // x4
  EventTutorialCondMaster_o *v13; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  Il2CppObject *current; // x21
  bool v19; // w20
  bool v20; // w0
  int32_t klass; // w21
  bool Item; // w0
  bool v23; // w19
  int v24; // w20
  __int128 v26; // [xsp+0h] [xbp-C0h] BYREF
  __int128 v27; // [xsp+10h] [xbp-B0h]
  __int128 v28; // [xsp+20h] [xbp-A0h] BYREF
  __int128 v29; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+40h] [xbp-80h] BYREF

  v10 = this;
  if ( (byte_4CEE84C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
    this = (EventTutorialCondMaster_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__);
    byte_4CEE84C = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v28 = 0u;
  v29 = 0u;
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
                                        v12);
  if ( !this )
    goto LABEL_21;
  v13 = this;
  if ( !LODWORD(this->fields._MasterName_k__BackingField) )
    return isEnableCondition;
  v14 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v14,
    (const MethodInfo_34784DC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !v14 )
LABEL_21:
    sub_1C7BD40(this, *(_QWORD *)&evId);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    v14,
    0,
    isEnableCondition,
    (const MethodInfo_3478E9C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)v13,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
  *(_OWORD *)&v30.fields._list = v26;
  v30.fields._current = (Il2CppObject *)v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1C7BD40(v15, v16);
    v19 = EventTutorialCondMaster__isEnableCondition(
            (EventTutorialCondMaster_o *)v15,
            (int32_t)v30.fields._current[1].klass,
            HIDWORD(v30.fields._current[2].klass),
            (System_Int32_array *)v30.fields._current[2].monitor,
            0,
            v17);
    v20 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            v14,
            (int32_t)current[2].klass,
            (const MethodInfo_34790B0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    klass = (int32_t)current[2].klass;
    if ( v20 )
    {
      Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
               v14,
               klass,
               (const MethodInfo_3478E0C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v14,
        klass,
        v19 && Item,
        (const MethodInfo_3478E9C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
    else
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v14,
        klass,
        v19,
        (const MethodInfo_3478E9C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v26,
    v14,
    (const MethodInfo_34792A0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v28 = v26;
  v29 = v27;
  while ( 1 )
  {
    v23 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v28,
            (const MethodInfo_35DF088 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v23 )
      break;
    if ( BYTE4(v29) )
    {
      v24 = 9;
      goto LABEL_18;
    }
  }
  v24 = 10;
LABEL_18:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v28,
    (const MethodInfo_35DF190 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v23 && v24 == 9;
}