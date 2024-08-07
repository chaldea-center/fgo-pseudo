void __fastcall UserEventFortificationMaster___ctor(UserEventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF755 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__,
      method);
    byte_49FF755 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    384,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventFortificationEntity_o *__fastcall UserEventFortificationMaster__GetEntity(
        UserEventFortificationMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t fortificationIdx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF756 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__,
      userId);
    byte_49FF756 = 1;
  }
  PK = (Il2CppObject *)UserEventFortificationEntity__CreatePK(
                         userId,
                         eventId,
                         fortificationIdx,
                         *(const MethodInfo **)&fortificationIdx);
  return (UserEventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_30D6AF0 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventFortificationMaster__GetFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t workIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w21
  int32_t v11; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FF75B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&workIndex);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&UserEventFortificationEntity_TypeInfo, v6);
    byte_49FF75B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserEventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventFortificationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventFortificationEntity_TypeInfo
          && (!workIndex || HIDWORD(Item[1].monitor) == workIndex) )
        {
          v10 += HIDWORD(Item[2].klass);
        }
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_17:
    sub_1B64C5C(list, *(_QWORD *)&workIndex);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventFortificationMaster__GetTotalFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *EntityList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_UserEventFortificationEntity__o *v10; // x8
  int32_t v11; // w20
  int32_t v12; // w21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF75C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v6);
    sub_1B64A00(&UserEventFortificationEntity_TypeInfo, v7);
    byte_49FF75C = 1;
  }
  userEventFortificationList = 0LL;
  EntityList = (System_Collections_ObjectModel_Collection_T__o *)UserEventFortificationMaster__TryGetEntityList(
                                                                   this,
                                                                   &userEventFortificationList,
                                                                   eventId,
                                                                   v3);
  if ( ((unsigned __int8)EntityList & 1) == 0 )
    return 0;
  v10 = userEventFortificationList;
  if ( !userEventFortificationList )
LABEL_13:
    sub_1B64C5C(EntityList, v9);
  v11 = 0;
  v12 = 0;
  while ( v12 < v10->fields._size )
  {
    EntityList = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( EntityList )
    {
      EntityList = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                       EntityList,
                                                                       v12,
                                                                       (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( EntityList )
      {
        methodPtr_low = LOBYTE(UserEventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(EntityList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventFortificationEntity_c *)EntityList->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventFortificationEntity_TypeInfo )
        {
          v11 += HIDWORD(EntityList[1].monitor);
        }
      }
      v10 = userEventFortificationList;
      ++v12;
      if ( userEventFortificationList )
        continue;
    }
    goto LABEL_13;
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventFortificationMaster__TryGetEntity(
        UserEventFortificationMaster_o *this,
        UserEventFortificationEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t fortificationIdx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF757 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__,
      entity);
    byte_49FF757 = 1;
  }
  PK = (Il2CppObject *)UserEventFortificationEntity__CreatePK(
                         userId,
                         eventId,
                         fortificationIdx,
                         *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
}


bool __fastcall UserEventFortificationMaster__TryGetEntityList(
        UserEventFortificationMaster_o *this,
        System_Collections_Generic_List_UserEventFortificationEntity__o **userEventFortificationList,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x21
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3

  if ( (byte_49FF758 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      userEventFortificationList);
    sub_1B64A00(&System_IDisposable_TypeInfo, v7);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__, v12);
    sub_1B64A00(&System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo, v13);
    sub_1B64A00(&UserEventFortificationEntity_TypeInfo, v14);
    byte_49FF758 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v18);
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
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v27 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    v32 = v28;
    if ( !v28
      || (methodPtr_low = LOBYTE(UserEventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) < (unsigned int)methodPtr_low)
      || *(UserEventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * methodPtr_low - 8) != UserEventFortificationEntity_TypeInfo )
    {
      sub_1B64C5C(v28, v29);
    }
    if ( *(_DWORD *)(v28 + 24) == eventId )
    {
      if ( !v15 )
        sub_1B64C5C(v28, v29);
      items = v15->fields._items;
      v35 = Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B64C5C(v28, v29);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v28,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v32;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v37 + 4), v32, v30, v31);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_31;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_31:
    v41 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  *userEventFortificationList = (System_Collections_Generic_List_UserEventFortificationEntity__o *)v15;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)userEventFortificationList, (int32_t)v15, v42, v43);
  if ( !*userEventFortificationList )
LABEL_38:
    sub_1B64C5C(list, v16);
  return (*userEventFortificationList)->fields._size > 0;
}


bool __fastcall UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
        UserEventFortificationMaster_o *this,
        int32_t *fortificationIdx,
        int32_t *position,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x11
  __int64 v29; // x9
  int v30; // w10
  int v31; // w11
  __int64 v32; // x12
  bool v33; // w23
  int v34; // w25
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_49FF759 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, fortificationIdx);
    sub_1B64A00(&System_IDisposable_TypeInfo, v11);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B64A00(&UserEventFortificationEntity_TypeInfo, v14);
    byte_49FF759 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64C5C(0LL, fortificationIdx);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v16);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      v33 = 0;
      v34 = 8;
      goto LABEL_31;
    }
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    if ( v26 )
    {
      methodPtr_low = LOBYTE(UserEventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) >= (unsigned int)methodPtr_low
        && *(UserEventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) == UserEventFortificationEntity_TypeInfo )
      {
        continue;
      }
    }
    sub_1B64C5C(v26, v27);
    if ( *(_DWORD *)(v26 + 24) == eventId )
    {
      v29 = *(_QWORD *)(v26 + 40);
      if ( !v29 )
        sub_1B64C5C(v26, v27);
      v30 = *(_DWORD *)(v29 + 24);
      if ( v30 >= 1 )
        break;
    }
  }
  v31 = 0;
  while ( 1 )
  {
    if ( v30 == v31 )
      sub_1B64C64(v26, v27);
    v32 = *(_QWORD *)(v29 + 8LL * v31 + 32);
    if ( !v32 )
      sub_1B64C5C(v26, v27);
    if ( *(_QWORD *)(v32 + 32) == userSvtId )
      break;
    if ( v30 == ++v31 )
      goto LABEL_5;
  }
  v33 = 1;
  v34 = 7;
  *fortificationIdx = *(_DWORD *)(v26 + 28);
  *position = *(_DWORD *)(v32 + 16);
LABEL_31:
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_35;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_35:
    v38 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( (v34 | 8) == 8 )
  {
    v33 = 0;
    *fortificationIdx = 0;
    *position = 0;
  }
  return v33;
}


bool __fastcall UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
        UserEventFortificationMaster_o *this,
        System_String_o **fortificationName,
        System_String_o **fortificationDetailName,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x5
  bool FortificationIdxAndPositionBySvtId; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  int32_t v21; // w23
  EventFortificationEntity_o *Entity; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  EventFortificationDetailEntity_o *v25; // x21
  System_String_o *name; // x1
  System_String_o *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t position[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF75A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, fortificationName);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventFortificationMaster___, v11);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B64A00(&StringLiteral_1/*""*/, v13);
    byte_49FF75A = 1;
  }
  *(_QWORD *)position = 0LL;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)fortificationName,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)fortificationDetailName,
    eventId);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)fortificationDetailName, (int32_t)StringLiteral_1/*""*/, v14, v15);
  FortificationIdxAndPositionBySvtId = UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
                                         this,
                                         &position[1],
                                         position,
                                         eventId,
                                         userSvtId,
                                         v16);
  result = 0;
  if ( FortificationIdxAndPositionBySvtId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventFortificationMaster___)) == 0LL
      || (v21 = position[1],
          Entity = EventFortificationMaster__GetEntity(
                     (EventFortificationMaster_o *)Instance,
                     eventId,
                     position[1],
                     0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___)) == 0LL )
    {
      sub_1B64C5C(Instance, v20);
    }
    v25 = EventFortificationDetailMaster__GetEntity(
            (EventFortificationDetailMaster_o *)Instance,
            eventId,
            v21,
            position[0],
            0LL);
    result = 0;
    if ( Entity )
    {
      if ( v25 )
      {
        name = Entity->fields.name;
        *fortificationName = name;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)fortificationName, (int32_t)name, v23, v24);
        v27 = v25->fields.name;
        *fortificationDetailName = v27;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)fortificationDetailName, (int32_t)v27, v28, v29);
        return 1;
      }
    }
  }
  return result;
}