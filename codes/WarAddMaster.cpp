void __fastcall WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D5E0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__, method);
    byte_4B1D5E0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    167,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
}


void __fastcall WarAddMaster__CreateCache(WarAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_int__object__o *v15; // x21
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o **p_type_idCache; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v21; // w21
  System_Collections_ObjectModel_Collection_T__o *v22; // x22
  System_Collections_Generic_Dictionary_int__object__o *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x23
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 klass_low; // x10
  Il2CppClass **v30; // x8
  System_Collections_Generic_List_object__o *v31; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1D5E4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__, v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__,
      v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__, v9);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarAddEntity__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarAddEntity___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_WarAddEntity__TypeInfo, v14);
    byte_4B1D5E4 = 1;
  }
  v31 = 0LL;
  value = 0LL;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v15,
      (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__);
    this->fields.type_idCache = (struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o *)v15;
    p_type_idCache = &this->fields.type_idCache;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.type_idCache, (int32_t)v15, v17, v18);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_23:
      sub_1BCB254(list, v19);
    v21 = 0;
    while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v21,
                                                                   (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
        if ( list )
        {
          v22 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_idCache;
          if ( *p_type_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    HIDWORD(v22->fields.items),
                    &value,
                    (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
            {
              v23 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo);
              System_Collections_Generic_Dictionary_int__object____ctor(
                v23,
                (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__);
              value = (Il2CppObject *)v23;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_idCache;
              if ( !*p_type_idCache )
                goto LABEL_23;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                HIDWORD(v22->fields.items),
                (Il2CppObject *)v23,
                (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)value,
                      (int32_t)v22->fields.items,
                      (Il2CppObject **)&v31,
                      (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
              {
                v26 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_WarAddEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v26,
                  (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_WarAddEntity___ctor__);
                list = (System_Collections_ObjectModel_Collection_T__o *)value;
                v31 = v26;
                if ( !value )
                  goto LABEL_23;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)value,
                  (int32_t)v22->fields.items,
                  (Il2CppObject *)v26,
                  (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)v31;
              if ( v31 )
              {
                items = v31->fields._items;
                v28 = Method_System_Collections_Generic_List_WarAddEntity__Add__;
                ++v31->fields._version;
                if ( items )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v22,
                      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v30 = &items->obj.klass + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v30[4] = (Il2CppClass *)v22;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v22, v24, v25);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v21;
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


void __fastcall WarAddMaster__DeleteCache(WarAddMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o **p_type_idCache; // x19

  this->fields.type_idCache = 0LL;
  p_type_idCache = &this->fields.type_idCache;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.type_idCache, 0, v2, v3);
  *((_BYTE *)p_type_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetBGImageID(
        WarAddMaster_o *this,
        WarAddEntity_o **changeWarAdd,
        int32_t warId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int v5; // w23
  int32_t v6; // w21
  CGThumbnailListItem_o *v7; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  NetworkManager_c **v16; // x20
  int32_t Count; // w24
  int64_t Time; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int64_t v21; // x26
  Il2CppObject *v22; // x29
  int32_t v23; // w27
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v25; // x28
  bool HasBGChange; // w0
  int32_t condType; // w8
  Il2CppObject *MasterData_object; // x29
  NetworkManager_c **v29; // x19
  int v30; // w21
  int32_t v31; // w20
  int32_t targetId; // w29
  int64_t value; // x23
  Il2CppObject *v35; // [xsp+8h] [xbp-88h]
  Il2CppObject *v36; // [xsp+8h] [xbp-88h]
  CGThumbnailListItem_o *v37; // [xsp+10h] [xbp-80h]
  int32_t v38; // [xsp+1Ch] [xbp-74h]
  int priority; // [xsp+20h] [xbp-70h]
  int v40; // [xsp+24h] [xbp-6Ch]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v5 = beforeClearQuestId;
  v6 = warId;
  v7 = (CGThumbnailListItem_o *)changeWarAdd;
  if ( (byte_4B1D5E2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__, changeWarAdd);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__, v9);
    sub_1BCAFF8(&CondType_TypeInfo, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v11);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B1D5E2 = 1;
  }
  entity = 0LL;
  v7->klass = 0LL;
  sub_1BCAF9C(v7, 0, warId, *(const MethodInfo **)&beforeClearQuestId);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_50:
    sub_1BCB254(list, v14);
  v16 = &NetworkManager_TypeInfo;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v22 = 0LL;
    goto LABEL_47;
  }
  v21 = Time;
  v22 = 0LL;
  v23 = 0;
  priority = -1;
  v40 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_50;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               list,
                               v23,
                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    if ( Item )
    {
      v25 = Item;
      if ( Item->fields.startedAt <= v21
        && Item->fields.endedAt > v21
        && Item->fields.warId == v6
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v14);
        if ( v5 >= 1 && HasBGChange && v25->fields.targetId == v5 && v25->fields.priority > priority )
        {
          condType = v25->fields.condType;
          if ( condType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsQuestClear_39516796(v5, -1, 0, 0LL) )
              goto LABEL_34;
            condType = v25->fields.condType;
          }
          if ( condType == 46 )
          {
            v35 = v22;
            list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_50;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)list,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !(*v16)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v16);
            if ( !byte_4B165D1 )
            {
              sub_1BCAFF8(v16, v14);
              byte_4B165D1 = 1;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)*v16;
            if ( !(*v16)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(list);
              list = (System_Collections_ObjectModel_Collection_T__o *)*v16;
            }
            if ( !MasterData_object )
              goto LABEL_50;
            UserQuestMaster__TryGetEntity(
              (UserQuestMaster_o *)MasterData_object,
              &entity,
              (int64_t)list[7].fields.items[4].klass,
              v25->fields.targetId,
              0LL);
            v22 = v35;
            if ( entity )
            {
              if ( entity->fields.questPhase == v25->fields.value )
              {
LABEL_34:
                v7->klass = (CGThumbnailListItem_c *)v25;
                sub_1BCAF9C(v7, (int32_t)v25, v19, v20);
                priority = v25->fields.priority;
                goto LABEL_42;
              }
            }
          }
        }
        if ( v25->fields.priority >= v40 )
        {
          v36 = v22;
          v37 = v7;
          v38 = v6;
          v29 = v16;
          v30 = v5;
          v31 = v25->fields.condType;
          targetId = v25->fields.targetId;
          value = v25->fields.value;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(v31, targetId, value, 0, 0LL, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              goto LABEL_50;
            v5 = v30;
            v16 = v29;
            v40 = v25->fields.priority;
            v6 = v38;
            v7 = v37;
            v22 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v23,
                    (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
          }
          else
          {
            v5 = v30;
            v6 = v38;
            v16 = v29;
            v22 = v36;
            v7 = v37;
          }
        }
      }
    }
LABEL_42:
    ++v23;
  }
  while ( Count != v23 );
  if ( priority > v40 )
  {
    if ( v22 )
      return HIDWORD(v22[1].monitor);
    return 0;
  }
LABEL_47:
  v7->klass = 0LL;
  sub_1BCAF9C(v7, 0, v19, v20);
  if ( !v22 )
    return 0;
  return HIDWORD(v22[1].monitor);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarAddEntity__o *__fastcall WarAddMaster__GetCacheByTypeId(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *type_idCache; // x0
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1D5E5 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__,
      *(_QWORD *)&type);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__, v7);
    byte_4B1D5E5 = 1;
  }
  value = 0LL;
  v11 = 0LL;
  WarAddMaster__CreateCache(this, *(const MethodInfo **)&type);
  type_idCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.type_idCache;
  if ( !type_idCache )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          type_idCache,
          type,
          &value,
          (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
    return 0LL;
  type_idCache = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_11:
    sub_1BCB254(type_idCache, v8);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)value,
         warId,
         &v11,
         (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_WarAddEntity__o *)v11;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *__fastcall WarAddMaster__GetEntity(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4B1D5DE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__, *(_QWORD *)&warId);
    sub_1BCAFF8(&WarAddEntity_TypeInfo, v9);
    byte_4B1D5DE = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_32CC8B8 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetEventTowerBackGroundId(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  WarAddEntity_o *v27; // x23
  WarAddEntity_c *v28; // x0
  int32_t overwriteId; // w21
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B1D5E3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__GetEnumerator__, *(_QWORD *)&warId);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BCAFF8(&WarAddEntity_TypeInfo, v12);
    byte_4B1D5E3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarAddEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v27 = (WarAddEntity_o *)v24;
    if ( !v24 )
      sub_1BCB254(0LL, v25);
    if ( *(_DWORD *)(v24 + 16) == warId && *(_DWORD *)(v24 + 20) == type )
    {
      v28 = WarAddEntity_TypeInfo;
      if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
        v28 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v27, v28->static_fields->EVENT_TOWER_ID, 0, v26) == towerId )
      {
        overwriteId = v27->fields.overwriteId;
        goto LABEL_26;
      }
    }
  }
  overwriteId = 0;
LABEL_26:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_30;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_30:
    v33 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return overwriteId;
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *__fastcall WarAddMaster__GetPrioredEntity(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t Time; // x19
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_WarAddEntity__o *CacheByTypeId; // x0
  System_Collections_Generic_List_object__o *v18; // x20
  Il2CppObject *v19; // x23
  int32_t v20; // w21
  int monitor; // w27
  Il2CppObject *v22; // x22
  int32_t items_high; // w24
  int32_t items; // w26
  int64_t klass_low; // x25
  int32_t v26; // w25
  int v27; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v29; // x26
  int32_t monitor_high; // w1
  int32_t v31; // w29
  int64_t v32; // x28
  bool IsOpen; // w0
  int32_t targetId; // [xsp+8h] [xbp-68h]
  int v36; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B1D5E1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__, *(_QWORD *)&type);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__, v7);
    sub_1BCAFF8(&CondType_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarAddEntity__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarAddEntity__get_Item__, v10);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    byte_4B1D5E1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !list )
    goto LABEL_39;
  if ( BYTE1(list[3].klass) )
  {
    CacheByTypeId = WarAddMaster__GetCacheByTypeId(this, type, warId, v16);
    if ( CacheByTypeId )
    {
      v18 = (System_Collections_Generic_List_object__o *)CacheByTypeId;
      if ( CacheByTypeId->fields._size >= 1 )
      {
        v19 = 0LL;
        v20 = 0;
        monitor = -1;
        while ( 1 )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                     v18,
                                                                     v20,
                                                                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
          if ( !list )
            break;
          v22 = (Il2CppObject *)list;
          if ( (__int64)list[2].monitor <= Time
            && (__int64)list[2].fields.items > Time
            && SLODWORD(list[1].klass) >= monitor )
          {
            items = (int32_t)list[1].fields.items;
            items_high = HIDWORD(list[1].fields.items);
            klass_low = SLODWORD(list[2].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsOpen(items, items_high, klass_low, 0, 0LL, 0LL) )
            {
              monitor = (int)v22[1].monitor;
              v19 = v22;
            }
          }
          if ( ++v20 >= v18->fields._size )
            return (WarAddEntity_o *)v19;
        }
        goto LABEL_39;
      }
    }
  }
  else if ( Count >= 1 )
  {
    v19 = 0LL;
    v26 = 0;
    v27 = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v26,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
      if ( Item )
      {
        v29 = Item;
        if ( (__int64)Item[3].monitor <= Time
          && (__int64)Item[4].klass > Time
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v27 )
        {
          v36 = v27;
          v31 = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          v32 = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor_high = targetId;
          }
          IsOpen = CondType__IsOpen(v31, monitor_high, v32, 0, 0LL, 0LL);
          v27 = v36;
          if ( IsOpen )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              break;
            v27 = (int)v29[1].monitor;
            v19 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v26,
                    (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
          }
        }
      }
      if ( Count == ++v26 )
        return (WarAddEntity_o *)v19;
    }
LABEL_39:
    sub_1BCB254(list, *(_QWORD *)&type);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetPrioredID(
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


System_String_o *__fastcall WarAddMaster__GetPrioredStr(
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


void __fastcall WarAddMaster__OnListChangedImplementation(
        WarAddMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarAddMaster__TryGetEntity(
        WarAddMaster_o *this,
        WarAddEntity_o **entity,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4B1D5DF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__, entity);
    sub_1BCAFF8(&WarAddEntity_TypeInfo, v11);
    byte_4B1D5DF = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}