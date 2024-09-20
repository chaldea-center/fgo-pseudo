void __fastcall UserEventFortificationMaster___ctor(UserEventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BDB5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
    byte_4A5BDB5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    384,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string___ctor__);
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

  if ( (byte_4A5BDB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
    byte_4A5BDB6 = 1;
  }
  PK = (Il2CppObject *)UserEventFortificationEntity__CreatePK(
                         userId,
                         eventId,
                         fortificationIdx,
                         *(const MethodInfo **)&fortificationIdx);
  return (UserEventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventFortificationMaster__GetFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t workIndex,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BDBB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserEventFortificationEntity_TypeInfo);
    byte_4A5BDBB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserEventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventFortificationEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventFortificationEntity_TypeInfo
          && (!workIndex || HIDWORD(Item[1].monitor) == workIndex) )
        {
          v8 += HIDWORD(Item[2].klass);
        }
      }
      if ( v7 == ++v9 )
        return v8;
    }
LABEL_17:
    sub_1B8880C(list, *(_QWORD *)&workIndex);
  }
  return 0;
}


int32_t __fastcall UserEventFortificationMaster__GetTotalFortificationRewardNum(
        UserEventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_ObjectModel_Collection_T__o *EntityList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_UserEventFortificationEntity__o *v8; // x8
  int32_t v9; // w20
  int32_t v10; // w21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5BDBC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__);
    sub_1B885B0(&UserEventFortificationEntity_TypeInfo);
    byte_4A5BDBC = 1;
  }
  userEventFortificationList = 0LL;
  EntityList = (System_Collections_ObjectModel_Collection_T__o *)UserEventFortificationMaster__TryGetEntityList(
                                                                   this,
                                                                   &userEventFortificationList,
                                                                   eventId,
                                                                   v3);
  if ( ((unsigned __int8)EntityList & 1) == 0 )
    return 0;
  v8 = userEventFortificationList;
  if ( !userEventFortificationList )
LABEL_13:
    sub_1B8880C(EntityList, v7);
  v9 = 0;
  v10 = 0;
  while ( v10 < v8->fields._size )
  {
    EntityList = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( EntityList )
    {
      EntityList = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                       EntityList,
                                                                       v10,
                                                                       (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( EntityList )
      {
        methodPtr_low = LOBYTE(UserEventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(EntityList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventFortificationEntity_c *)EntityList->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventFortificationEntity_TypeInfo )
        {
          v9 += HIDWORD(EntityList[1].monitor);
        }
      }
      v8 = userEventFortificationList;
      ++v10;
      if ( userEventFortificationList )
        continue;
    }
    goto LABEL_13;
  }
  return v9;
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

  if ( (byte_4A5BDB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
    byte_4A5BDB7 = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventFortificationMaster__UserEventFortificationEntity__string__TryGetEntity__);
}


bool __fastcall UserEventFortificationMaster__TryGetEntityList(
        UserEventFortificationMaster_o *this,
        System_Collections_Generic_List_UserEventFortificationEntity__o **userEventFortificationList,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3

  if ( (byte_4A5BDB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventFortificationEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
    sub_1B885B0(&UserEventFortificationEntity_TypeInfo);
    byte_4A5BDB8 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventFortificationEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20
      || (methodPtr_low = LOBYTE(UserEventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low)
      || *(UserEventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != UserEventFortificationEntity_TypeInfo )
    {
      sub_1B8880C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 24) == eventId )
    {
      if ( !v7 )
        sub_1B8880C(v20, v21);
      items = v7->fields._items;
      v27 = Method_System_Collections_Generic_List_UserEventFortificationEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), v24, v22, v23);
      }
    }
  }
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
        goto LABEL_31;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_31:
    v33 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  *userEventFortificationList = (System_Collections_Generic_List_UserEventFortificationEntity__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)userEventFortificationList, (int32_t)v7, v34, v35);
  if ( !*userEventFortificationList )
LABEL_38:
    sub_1B8880C(list, v8);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x11
  __int64 v25; // x9
  int v26; // w10
  int v27; // w11
  __int64 v28; // x12
  bool v29; // w23
  int v30; // w25
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5BDB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UserEventFortificationEntity_TypeInfo);
    byte_4A5BDB9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, fortificationIdx);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v12);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      v29 = 0;
      v30 = 8;
      goto LABEL_31;
    }
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( v22 )
    {
      methodPtr_low = LOBYTE(UserEventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 304LL) >= (unsigned int)methodPtr_low
        && *(UserEventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * methodPtr_low - 8) == UserEventFortificationEntity_TypeInfo )
      {
        continue;
      }
    }
    sub_1B8880C(v22, v23);
    if ( *(_DWORD *)(v22 + 24) == eventId )
    {
      v25 = *(_QWORD *)(v22 + 40);
      if ( !v25 )
        sub_1B8880C(v22, v23);
      v26 = *(_DWORD *)(v25 + 24);
      if ( v26 >= 1 )
        break;
    }
  }
  v27 = 0;
  while ( 1 )
  {
    if ( v26 == v27 )
      sub_1B88814(v22, v23);
    v28 = *(_QWORD *)(v25 + 8LL * v27 + 32);
    if ( !v28 )
      sub_1B8880C(v22, v23);
    if ( *(_QWORD *)(v28 + 32) == userSvtId )
      break;
    if ( v26 == ++v27 )
      goto LABEL_5;
  }
  v29 = 1;
  v30 = 7;
  *fortificationIdx = *(_DWORD *)(v22 + 28);
  *position = *(_DWORD *)(v28 + 16);
LABEL_31:
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_35;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_35:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  if ( (v30 | 8) == 8 )
  {
    v29 = 0;
    *fortificationIdx = 0;
    *position = 0;
  }
  return v29;
}


bool __fastcall UserEventFortificationMaster__TryGetFortificationNameTextBySvtId(
        UserEventFortificationMaster_o *this,
        System_String_o **fortificationName,
        System_String_o **fortificationDetailName,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x5
  bool FortificationIdxAndPositionBySvtId; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  int32_t v18; // w23
  EventFortificationEntity_o *Entity; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  EventFortificationDetailEntity_o *v22; // x21
  System_String_o *name; // x1
  System_String_o *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t position[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5BDBA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BDBA = 1;
  }
  *(_QWORD *)position = 0LL;
  *fortificationName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)fortificationName,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)fortificationDetailName,
    eventId);
  *fortificationDetailName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)fortificationDetailName, (int32_t)StringLiteral_1/*""*/, v11, v12);
  FortificationIdxAndPositionBySvtId = UserEventFortificationMaster__TryGetFortificationIdxAndPositionBySvtId(
                                         this,
                                         &position[1],
                                         position,
                                         eventId,
                                         userSvtId,
                                         v13);
  result = 0;
  if ( FortificationIdxAndPositionBySvtId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationMaster___)) == 0LL
      || (v18 = position[1],
          Entity = EventFortificationMaster__GetEntity(
                     (EventFortificationMaster_o *)Instance,
                     eventId,
                     position[1],
                     0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v17);
    }
    v22 = EventFortificationDetailMaster__GetEntity(
            (EventFortificationDetailMaster_o *)Instance,
            eventId,
            v18,
            position[0],
            0LL);
    result = 0;
    if ( Entity )
    {
      if ( v22 )
      {
        name = Entity->fields.name;
        *fortificationName = name;
        sub_1B88554((ServantStatusBattleListViewItem_o *)fortificationName, (int32_t)name, v20, v21);
        v24 = v22->fields.name;
        *fortificationDetailName = v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)fortificationDetailName, (int32_t)v24, v25, v26);
        return 1;
      }
    }
  }
  return result;
}