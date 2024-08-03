void __fastcall EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC5CD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__, method);
    byte_49FC5CD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    168,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
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

  if ( (byte_49FC5CB & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FC5CB = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D41FC *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
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
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_49FC5D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&evId);
    sub_1B640C8(&EventTutorialCondEntity_TypeInfo, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo, v15);
    byte_49FC5D0 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo,
                                                       *(_QWORD *)&evId,
                                                       *(_QWORD *)&flgType);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v30 = v27;
    if ( v27 )
    {
      methodPtr_low = LOBYTE(EventTutorialCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
        || *(EventTutorialCondEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != EventTutorialCondEntity_TypeInfo )
      {
        sub_1B645E4(v27);
LABEL_37:
        sub_1B64324(v27);
      }
      if ( *(_DWORD *)(v27 + 16) == evId && *(_DWORD *)(v27 + 20) == flgType && *(_DWORD *)(v27 + 24) == number )
      {
        if ( !v16 )
          goto LABEL_37;
        items = v16->fields._items;
        v33 = Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          sub_1B64324(v27);
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)v27,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v30;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), v30, v28, v29);
        }
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
        goto LABEL_33;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_33:
    v39 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_EventTutorialCondEntity__o *)v16;
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

  if ( (byte_49FC5CC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__, entity);
    byte_49FC5CC = 1;
  }
  PK = (Il2CppObject *)EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
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

  if ( (byte_49FC5CF & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaidMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    this = (EventTutorialCondMaster_o *)sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    byte_49FC5CF = 1;
  }
  v29 = 0LL;
  entity = 0LL;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
              this = (EventTutorialCondMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v22 >= LODWORD(v21->fields._MasterName_k__BackingField) )
                goto LABEL_43;
              if ( !this )
                goto LABEL_42;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *((_DWORD *)&v21->fields.list + v22),
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
    sub_1B64324(this);
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
      sub_1B6432C(this, *(_QWORD *)&eventId);
    v27 = condIds->m_Items[v25 + 1];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v27, v26, 0, 0LL);
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
  __int64 v27; // x1
  __int64 v28; // x2
  EventTutorialCondMaster_o *v29; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v30; // x19
  _BOOL8 v31; // x0
  const MethodInfo *v32; // x5
  Il2CppObject *current; // x21
  bool v34; // w20
  bool v35; // w0
  int32_t klass; // w21
  bool Item; // w0
  bool v38; // w19
  int v39; // w20
  __int128 v41; // [xsp+0h] [xbp-C0h] BYREF
  __int128 v42; // [xsp+10h] [xbp-B0h]
  __int128 v43; // [xsp+20h] [xbp-A0h] BYREF
  __int128 v44; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+40h] [xbp-80h] BYREF

  v10 = this;
  if ( (byte_49FC5CE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, *(_QWORD *)&evId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v14);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__, v23);
    this = (EventTutorialCondMaster_o *)sub_1B640C8(
                                          &Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__,
                                          v24);
    byte_49FC5CE = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v43 = 0u;
  v44 = 0u;
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
  v29 = this;
  if ( !LODWORD(this->fields._MasterName_k__BackingField) )
    return isEnableCondition;
  v30 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v27,
                                                                v28);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v30,
    (const MethodInfo_3114728 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !v30 )
LABEL_21:
    sub_1B64324(this);
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    v30,
    0,
    isEnableCondition,
    (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)v29,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
  *(_OWORD *)&v45.fields._list = v41;
  v45.fields._current = (Il2CppObject *)v42;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_1B64324(v31);
    v34 = EventTutorialCondMaster__isEnableCondition(
            (EventTutorialCondMaster_o *)v31,
            (int32_t)v45.fields._current[1].klass,
            HIDWORD(v45.fields._current[2].klass),
            (System_Int32_array *)v45.fields._current[2].monitor,
            0,
            v32);
    v35 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            v30,
            (int32_t)current[2].klass,
            (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    klass = (int32_t)current[2].klass;
    if ( v35 )
    {
      Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
               v30,
               klass,
               (const MethodInfo_3115058 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v30,
        klass,
        v34 && Item,
        (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
    else
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v30,
        klass,
        v34,
        (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v41,
    v30,
    (const MethodInfo_31154EC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v43 = v41;
  v44 = v42;
  while ( 1 )
  {
    v38 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v43,
            (const MethodInfo_326716C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v38 )
      break;
    if ( BYTE4(v44) )
    {
      v39 = 9;
      goto LABEL_18;
    }
  }
  v39 = 10;
LABEL_18:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v43,
    (const MethodInfo_3267274 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v38 && v39 == 9;
}