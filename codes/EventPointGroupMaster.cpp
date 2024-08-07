void __fastcall EventPointGroupMaster___ctor(EventPointGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEBAA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__, method);
    byte_49FEBAA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    152,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *__fastcall EventPointGroupMaster__GetEntity(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FEBA8 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FEBA8 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&groupId);
  return (EventPointGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_30D6AF0 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  __int64 v12; // x8
  System_Int32_array *v13; // x23
  unsigned __int64 v14; // x24
  int32_t iconId; // w8
  const MethodInfo *v16; // x5
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_49FEBAD & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&int___TypeInfo, v9);
    this = (EventPointGroupMaster_o *)sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FEBAD = 1;
  }
  entity = 0LL;
  if ( !groupIds )
    goto LABEL_20;
  this = (EventPointGroupMaster_o *)sub_1B64AA8(int___TypeInfo, groupIds->max_length);
  v12 = *(_QWORD *)&groupIds->max_length;
  v13 = (System_Int32_array *)this;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( v14 < (unsigned int)v12 )
    {
      this = (EventPointGroupMaster_o *)EventPointGroupMaster__TryGetEntity(
                                          v8,
                                          &entity,
                                          eventId,
                                          groupIds->m_Items[v14 + 1],
                                          v11);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v13 )
          goto LABEL_20;
        if ( v14 >= v13->max_length )
          break;
        iconId = entity->fields.iconId;
      }
      else
      {
        if ( !v13 )
          goto LABEL_20;
        if ( v14 >= v13->max_length )
          break;
        iconId = 0;
      }
      v13->m_Items[v14 + 1] = iconId;
      LODWORD(v12) = groupIds->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_16;
    }
    sub_1B64C64(this, *(_QWORD *)&eventId);
  }
LABEL_16:
  this = (EventPointGroupMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointGroupMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___)) == 0LL )
  {
LABEL_20:
    sub_1B64C5C(this, *(_QWORD *)&eventId);
  }
  EventPointGroupAddMaster__GetTermedIconIds((EventPointGroupAddMaster_o *)this, eventId, termId, groupIds, v13, v16);
  return v13;
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

  if ( (byte_49FEBA9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__, entity);
    byte_49FEBA9 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *__fastcall EventPointGroupMaster__getEntity(
        EventPointGroupMaster_o *this,
        int32_t event_id,
        int32_t group_id,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v17; // [xsp+8h] [xbp-48h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FEBAB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_getEntityFromKey_EventPointGroupEntity___, *(_QWORD *)&event_id);
    sub_1B64A00(&int_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_1546/*":"*/, v9);
    byte_49FEBAB = 1;
  }
  v18 = event_id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, *(_QWORD *)&group_id, method, v4);
  v17 = group_id;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
  v15 = System_String__Concat_61396148(v10, (Il2CppObject *)StringLiteral_1546/*":"*/, v14, 0LL);
  return (EventPointGroupEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                      (DataMasterBase_o *)this,
                                      v15,
                                      (const MethodInfo_2E3C458 *)Method_DataMasterBase_getEntityFromKey_EventPointGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_array *__fastcall EventPointGroupMaster__getEntityList(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FEBAC & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&EventPointGroupEntity_TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventPointGroupEntity__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_EventPointGroupEntity__TypeInfo, v10);
    byte_49FEBAC = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      methodPtr_low = LOBYTE(EventPointGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventPointGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointGroupEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v20 = Method_System_Collections_Generic_List_EventPointGroupEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64C5C(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (EventPointGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
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
    sub_1B64C5C(0LL, v4);
  return EntityList->max_length;
}