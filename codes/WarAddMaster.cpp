void WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57EA8 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
    byte_4C57EA8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    167,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
}


void WarAddMaster__CreateCache(WarAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o **p_type_idCache; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w21
  System_Collections_ObjectModel_Collection_T__o *v10; // x22
  System_Collections_Generic_Dictionary_int__object__o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x23
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 klass_low; // x10
  Il2CppClass **v18; // x8
  System_Collections_Generic_List_object__o *v19; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C57EAC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarAddEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarAddEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarAddEntity__TypeInfo);
    byte_4C57EAC = 1;
  }
  v19 = 0;
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__);
    this->fields.type_idCache = (struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o *)v3;
    p_type_idCache = &this->fields.type_idCache;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.type_idCache, (int32_t)v3, v5, v6);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_23:
      sub_1C3E7C0(list, v7);
    v9 = 0;
    while ( v9 < System_Collections_ObjectModel_Collection_object___get_Count(
                   list,
                   (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v9,
                                                                   (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
        if ( list )
        {
          v10 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_idCache;
          if ( *p_type_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    HIDWORD(v10->fields.items),
                    &value,
                    (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
            {
              v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo);
              System_Collections_Generic_Dictionary_int__object____ctor(
                v11,
                (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__);
              value = (Il2CppObject *)v11;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_idCache;
              if ( !*p_type_idCache )
                goto LABEL_23;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                HIDWORD(v10->fields.items),
                (Il2CppObject *)v11,
                (const MethodInfo_340C428 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)value,
                      (int32_t)v10->fields.items,
                      (Il2CppObject **)&v19,
                      (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
              {
                v14 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarAddEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v14,
                  (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarAddEntity___ctor__);
                list = (System_Collections_ObjectModel_Collection_T__o *)value;
                v19 = v14;
                if ( !value )
                  goto LABEL_23;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)value,
                  (int32_t)v10->fields.items,
                  (Il2CppObject *)v14,
                  (const MethodInfo_340C428 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)v19;
              if ( v19 )
              {
                items = v19->fields._items;
                v16 = Method_System_Collections_Generic_List_WarAddEntity__Add__;
                ++v19->fields._version;
                if ( items )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v10,
                      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v18 = &items->obj.klass + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v18[4] = (Il2CppClass *)v10;
                    sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v10, v12, v13);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v9;
                  if ( list )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_23;
    }
  }
}


void WarAddMaster__DeleteCache(WarAddMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o **p_type_idCache; // x19

  this->fields.type_idCache = 0;
  p_type_idCache = &this->fields.type_idCache;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.type_idCache, 0, v2, v3);
  *((_BYTE *)p_type_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarAddMaster__GetBGImageID(
        WarAddMaster_o *this,
        WarAddEntity_o **changeWarAdd,
        int32_t warId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int v5; // w23
  int32_t v6; // w21
  const MethodInfo *v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  NetworkManager_c **v11; // x20
  int32_t Count; // w24
  int64_t Time; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int64_t v16; // x26
  Il2CppObject *v17; // x29
  int32_t v18; // w27
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v20; // x28
  bool HasBGChange; // w0
  int32_t condType; // w8
  Il2CppObject *MasterData_object; // x29
  NetworkManager_c **v24; // x19
  int v25; // w21
  int32_t v26; // w20
  int32_t targetId; // w29
  int64_t value; // x23
  Il2CppObject *v30; // [xsp+8h] [xbp-88h]
  Il2CppObject *v31; // [xsp+8h] [xbp-88h]
  WarAddEntity_o **v32; // [xsp+10h] [xbp-80h]
  int32_t v33; // [xsp+1Ch] [xbp-74h]
  int priority; // [xsp+20h] [xbp-70h]
  int v35; // [xsp+24h] [xbp-6Ch]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v5 = beforeClearQuestId;
  v6 = warId;
  if ( (byte_4C57EAA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C57EAA = 1;
  }
  entity = 0;
  *changeWarAdd = 0;
  sub_1C3E508((CGThumbnailListItem_o *)changeWarAdd, 0, warId, *(const MethodInfo **)&beforeClearQuestId);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_50:
    sub_1C3E7C0(list, v9);
  v11 = &NetworkManager_TypeInfo;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Count < 1 )
  {
    v17 = 0;
    goto LABEL_47;
  }
  v16 = Time;
  v17 = 0;
  v18 = 0;
  priority = -1;
  v35 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_50;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               list,
                               v18,
                               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    if ( Item )
    {
      v20 = Item;
      if ( Item->fields.startedAt <= v16
        && Item->fields.endedAt > v16
        && Item->fields.warId == v6
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v9);
        if ( v5 >= 1 && HasBGChange && v20->fields.targetId == v5 && v20->fields.priority > priority )
        {
          condType = v20->fields.condType;
          if ( condType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsQuestClear_40371188(v5, -1, 0, 0) )
              goto LABEL_34;
            condType = v20->fields.condType;
          }
          if ( condType == 46 )
          {
            v30 = v17;
            list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_50;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)list,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !(*v11)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v11);
            if ( !byte_4C50AE2 )
            {
              sub_1C3E564(v11);
              byte_4C50AE2 = 1;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)*v11;
            if ( !(*v11)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(list);
              list = (System_Collections_ObjectModel_Collection_T__o *)*v11;
            }
            if ( !MasterData_object )
              goto LABEL_50;
            UserQuestMaster__TryGetEntity(
              (UserQuestMaster_o *)MasterData_object,
              &entity,
              (int64_t)list[7].fields.items[4].klass,
              v20->fields.targetId,
              0);
            v17 = v30;
            if ( entity )
            {
              if ( entity->fields.questPhase == v20->fields.value )
              {
LABEL_34:
                *changeWarAdd = v20;
                sub_1C3E508((CGThumbnailListItem_o *)changeWarAdd, (int32_t)v20, v14, v15);
                priority = v20->fields.priority;
                goto LABEL_42;
              }
            }
          }
        }
        if ( v20->fields.priority >= v35 )
        {
          v31 = v17;
          v32 = changeWarAdd;
          v33 = v6;
          v24 = v11;
          v25 = v5;
          v26 = v20->fields.condType;
          targetId = v20->fields.targetId;
          value = v20->fields.value;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(v26, targetId, value, 0, 0, 0) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              goto LABEL_50;
            v5 = v25;
            v11 = v24;
            v35 = v20->fields.priority;
            v6 = v33;
            changeWarAdd = v32;
            v17 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v18,
                    (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
          }
          else
          {
            v5 = v25;
            v6 = v33;
            v11 = v24;
            v17 = v31;
            changeWarAdd = v32;
          }
        }
      }
    }
LABEL_42:
    ++v18;
  }
  while ( Count != v18 );
  if ( priority > v35 )
  {
    if ( v17 )
      return HIDWORD(v17[1].monitor);
    return 0;
  }
LABEL_47:
  *changeWarAdd = 0;
  sub_1C3E508((CGThumbnailListItem_o *)changeWarAdd, 0, v14, v15);
  if ( !v17 )
    return 0;
  return HIDWORD(v17[1].monitor);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarAddEntity__o *WarAddMaster__GetCacheByTypeId(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *type_idCache; // x0
  Il2CppObject *v10; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C57EAD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__);
    byte_4C57EAD = 1;
  }
  value = 0;
  v10 = 0;
  WarAddMaster__CreateCache(this, *(const MethodInfo **)&type);
  type_idCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.type_idCache;
  if ( !type_idCache )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          type_idCache,
          type,
          &value,
          (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
    return 0;
  type_idCache = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_11:
    sub_1C3E7C0(type_idCache, v7);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)value,
         warId,
         &v10,
         (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_WarAddEntity__o *)v10;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *WarAddMaster__GetEntity(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C57EA6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
    sub_1C3E564(&WarAddEntity_TypeInfo);
    byte_4C57EA6 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_33B7A10 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t WarAddMaster__GetEventTowerBackGroundId(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t towerId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  WarAddEntity_o *v23; // x23
  WarAddEntity_c *v24; // x0
  int32_t overwriteId; // w21
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C57EAB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__GetEnumerator__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&WarAddEntity_TypeInfo);
    byte_4C57EAB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3E7C0(0, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarAddEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v23 = (WarAddEntity_o *)v20;
    if ( !v20 )
      sub_1C3E7C0(0, v21);
    if ( *(_DWORD *)(v20 + 16) == warId && *(_DWORD *)(v20 + 20) == type )
    {
      v24 = WarAddEntity_TypeInfo;
      if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
        v24 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v23, v24->static_fields->EVENT_TOWER_ID, 0, v22) == towerId )
      {
        overwriteId = v23->fields.overwriteId;
        goto LABEL_26;
      }
    }
  }
  overwriteId = 0;
LABEL_26:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_30:
    v29 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return overwriteId;
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *WarAddMaster__GetPrioredEntity(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t Time; // x19
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_WarAddEntity__o *CacheByTypeId; // x0
  System_Collections_Generic_List_object__o *v12; // x20
  Il2CppObject *v13; // x23
  int32_t v14; // w21
  int monitor; // w27
  Il2CppObject *v16; // x22
  int32_t items_high; // w24
  int32_t items; // w26
  int64_t klass_low; // x25
  int32_t v20; // w25
  int v21; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v23; // x26
  int32_t monitor_high; // w1
  int32_t v25; // w29
  int64_t v26; // x28
  bool IsOpen; // w0
  int32_t targetId; // [xsp+8h] [xbp-68h]
  int v30; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C57EA9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarAddEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C57EA9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !list )
    goto LABEL_39;
  if ( BYTE1(list[3].klass) )
  {
    CacheByTypeId = WarAddMaster__GetCacheByTypeId(this, type, warId, v10);
    if ( CacheByTypeId )
    {
      v12 = (System_Collections_Generic_List_object__o *)CacheByTypeId;
      if ( CacheByTypeId->fields._size >= 1 )
      {
        v13 = 0;
        v14 = 0;
        monitor = -1;
        while ( 1 )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                     v12,
                                                                     v14,
                                                                     (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
          if ( !list )
            break;
          v16 = (Il2CppObject *)list;
          if ( (__int64)list[2].monitor <= Time
            && (__int64)list[2].fields.items > Time
            && SLODWORD(list[1].klass) >= monitor )
          {
            items = (int32_t)list[1].fields.items;
            items_high = HIDWORD(list[1].fields.items);
            klass_low = SLODWORD(list[2].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsOpen(items, items_high, klass_low, 0, 0, 0) )
            {
              monitor = (int)v16[1].monitor;
              v13 = v16;
            }
          }
          if ( ++v14 >= v12->fields._size )
            return (WarAddEntity_o *)v13;
        }
        goto LABEL_39;
      }
    }
  }
  else if ( Count >= 1 )
  {
    v13 = 0;
    v20 = 0;
    v21 = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v20,
               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
      if ( Item )
      {
        v23 = Item;
        if ( (__int64)Item[3].monitor <= Time
          && (__int64)Item[4].klass > Time
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v21 )
        {
          v30 = v21;
          v25 = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          v26 = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor_high = targetId;
          }
          IsOpen = CondType__IsOpen(v25, monitor_high, v26, 0, 0, 0);
          v21 = v30;
          if ( IsOpen )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              break;
            v21 = (int)v23[1].monitor;
            v13 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v20,
                    (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
          }
        }
      }
      if ( Count == ++v20 )
        return (WarAddEntity_o *)v13;
    }
LABEL_39:
    sub_1C3E7C0(list, *(_QWORD *)&type);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarAddMaster__GetPrioredID(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v5; // w19
  WarAddEntity_o *PrioredEntity; // x0

  v5 = defVal;
  PrioredEntity = WarAddMaster__GetPrioredEntity(this, type, warId, *(const MethodInfo **)&defVal);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return v5;
}


System_String_o *WarAddMaster__GetPrioredStr(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  WarAddEntity_o *PrioredEntity; // x0

  v5 = defVal;
  PrioredEntity = WarAddMaster__GetPrioredEntity(this, type, warId, (const MethodInfo *)defVal);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return v5;
}


void WarAddMaster__OnListChangedImplementation(
        WarAddMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool WarAddMaster__TryGetEntity(
        WarAddMaster_o *this,
        WarAddEntity_o **entity,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C57EA7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
    sub_1C3E564(&WarAddEntity_TypeInfo);
    byte_4C57EA7 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}