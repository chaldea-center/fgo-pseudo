void __fastcall EventPointGroupMaster___ctor(EventPointGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
    byte_4A5B1E1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    152,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *__fastcall EventPointGroupMaster__GetEntity(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B1DF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
    byte_4A5B1DF = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&groupId);
  return (EventPointGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventPointGroupMaster__GetTermedIconIds(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        const MethodInfo *method)
{
  EventPointGroupMaster_o *v8; // x22
  const MethodInfo *v9; // x4
  __int64 v10; // x8
  System_Int32_array *v11; // x23
  unsigned __int64 v12; // x24
  int32_t iconId; // w8
  const MethodInfo *v14; // x5
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4A5B1E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
    sub_1B885B0(&int___TypeInfo);
    this = (EventPointGroupMaster_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B1E4 = 1;
  }
  entity = 0LL;
  if ( !groupIds )
    goto LABEL_20;
  this = (EventPointGroupMaster_o *)sub_1B88658(int___TypeInfo, groupIds->max_length);
  v10 = *(_QWORD *)&groupIds->max_length;
  v11 = (System_Int32_array *)this;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)v10 )
    {
      this = (EventPointGroupMaster_o *)EventPointGroupMaster__TryGetEntity(
                                          v8,
                                          &entity,
                                          eventId,
                                          groupIds->m_Items[v12 + 1],
                                          v9);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v11 )
          goto LABEL_20;
        if ( v12 >= v11->max_length )
          break;
        iconId = entity->fields.iconId;
      }
      else
      {
        if ( !v11 )
          goto LABEL_20;
        if ( v12 >= v11->max_length )
          break;
        iconId = 0;
      }
      v11->m_Items[v12 + 1] = iconId;
      LODWORD(v10) = groupIds->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        goto LABEL_16;
    }
    sub_1B88814(this, *(_QWORD *)&eventId);
  }
LABEL_16:
  this = (EventPointGroupMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointGroupMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___)) == 0LL )
  {
LABEL_20:
    sub_1B8880C(this, *(_QWORD *)&eventId);
  }
  EventPointGroupAddMaster__GetTermedIconIds((EventPointGroupAddMaster_o *)this, eventId, termId, groupIds, v11, v14);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupMaster__TryGetEntity(
        EventPointGroupMaster_o *this,
        EventPointGroupEntity_o **entity,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B1E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
    byte_4A5B1E0 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *__fastcall EventPointGroupMaster__getEntity(
        EventPointGroupMaster_o *this,
        int32_t event_id,
        int32_t group_id,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t v15; // [xsp+8h] [xbp-48h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5B1E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_getEntityFromKey_EventPointGroupEntity___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B1E2 = 1;
  }
  v16 = event_id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, *(_QWORD *)&group_id, method, v4);
  v15 = group_id;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
  v13 = System_String__Concat_61718044(v8, (Il2CppObject *)StringLiteral_1544/*":"*/, v12, 0LL);
  return (EventPointGroupEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                      (DataMasterBase_o *)this,
                                      v13,
                                      (const MethodInfo_2E80080 *)Method_DataMasterBase_getEntityFromKey_EventPointGroupEntity___);
}


EventPointGroupEntity_array *__fastcall EventPointGroupMaster__getEntityList(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B1E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventPointGroupEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointGroupEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
    byte_4A5B1E3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      methodPtr_low = LOBYTE(EventPointGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventPointGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointGroupEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_EventPointGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (EventPointGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
}


int32_t __fastcall EventPointGroupMaster__getEventJoinGroupNum(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventPointGroupEntity_array *EntityList; // x0
  __int64 v4; // x1

  EntityList = EventPointGroupMaster__getEntityList(this, eventId, method);
  if ( !EntityList )
    sub_1B8880C(0LL, v4);
  return EntityList->max_length;
}