void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21FDF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__, method);
    byte_4C21FDF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    291,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_array *__fastcall EventPointUpperMaster__GetEntitiesFromEventId(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int32_t v13; // w22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C21FE0 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v9);
    byte_4C21FE0 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v13,
                      (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( !list )
      goto LABEL_18;
    v11 = list;
    if ( *(_DWORD *)(list + 32) == eventId )
    {
      if ( !v10 )
        goto LABEL_18;
      items = v10->fields._items;
      v21 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)list,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v11;
        sub_1C3B708((PartyOrganizationUtility_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
      }
    }
    list = (int64_t)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1C3B9C0(list, v11);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v10,
                                          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_o *__fastcall EventPointUpperMaster__GetEntity(
        EventPointUpperMaster_o *this,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C21FDD & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_4C21FDD = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_329F900 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointUpperMaster__TryGetEntity(
        EventPointUpperMaster_o *this,
        EventPointUpperEntity_o **entity,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C21FDE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__, entity);
    byte_4C21FDE = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_array *__fastcall EventPointUpperMaster__getList(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  int64_t v13; // x1
  int64_t list; // x0
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4C21FE1 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v11);
    byte_4C21FE1 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v15 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v15 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v15,
                      (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( list )
    {
      v13 = list;
      if ( *(_DWORD *)(list + 32) == eventId && *(_DWORD *)(list + 28) == groupId )
      {
        if ( !v12 )
          goto LABEL_19;
        items = v12->fields._items;
        v23 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v13;
          sub_1C3B708((PartyOrganizationUtility_o *)(v25 + 4), v13, v16, v17, v18, v19, v20, v21);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v12 )
LABEL_19:
    sub_1C3B9C0(list, v13);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventPointUpperMaster__getPointUpper(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t Value; // w19
  const MethodInfo *v10; // x3
  EventPointUpperEntity_array *List; // x0
  __int64 v12; // x1
  EventPointUpperEntity_array *v13; // x20
  const MethodInfo *v14; // x2
  __int64 v15; // x8
  EventPointUpperReleaseMaster_o *v16; // x21
  unsigned __int64 v17; // x24
  EventPointUpperEntity_o *v18; // x23
  char v19; // w25
  EventPointUpperEntity_o *v20; // x22

  if ( (byte_4C21FE2 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_8758/*"MdcStr:Dc Crc Error"*/, v8);
    byte_4C21FE2 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8758/*"MdcStr:Dc Crc Error"*/, 0LL);
  List = EventPointUpperMaster__getList(this, eventId, groupId, v10);
  if ( !List )
    goto LABEL_23;
  v13 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    List = (EventPointUpperEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (EventPointUpperEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)List,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
      v15 = *(_QWORD *)&v13->max_length;
      if ( (int)v15 >= 1 )
      {
        v16 = (EventPointUpperReleaseMaster_o *)List;
        v17 = 0LL;
        v18 = 0LL;
        v19 = 1;
        do
        {
          if ( v17 >= (unsigned int)v15 )
            sub_1C3B9C8(List, v12);
          v20 = v13->m_Items[v17];
          if ( !v18 )
            goto LABEL_12;
          if ( !v20 )
            goto LABEL_23;
          if ( v18->fields.priority < v20->fields.priority )
          {
LABEL_12:
            if ( !v16 )
              goto LABEL_23;
            List = (EventPointUpperEntity_array *)EventPointUpperReleaseMaster__IsOpen(v16, v13->m_Items[v17], v14);
            LODWORD(v15) = v13->max_length;
            if ( ((unsigned __int8)List & 1) != 0 )
              v18 = v20;
            v19 &= (unsigned __int8)List;
          }
          ++v17;
        }
        while ( (__int64)v17 < (int)v15 );
        if ( v18 )
        {
          if ( (v19 & 1) == 0 )
            return v18->fields.value;
        }
        else if ( (v19 & 1) == 0 )
        {
          return Value;
        }
      }
      return 0;
    }
LABEL_23:
    sub_1C3B9C0(List, v12);
  }
  return Value;
}