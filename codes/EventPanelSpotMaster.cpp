void __fastcall EventPanelSpotMaster___ctor(EventPanelSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21FB1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__, method);
    byte_4C21FB1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    349,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPanelSpotEntity_array *__fastcall EventPanelSpotMaster__GetEntityList(
        EventPanelSpotMaster_o *this,
        int32_t eventId,
        int32_t mapId,
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
  int v15; // w23
  int32_t v16; // w24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C21FB2 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo, v11);
    byte_4C21FB2 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = list;
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v16,
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__);
      if ( list )
      {
        v13 = list;
        if ( *(_DWORD *)(list + 20) == eventId && *(_DWORD *)(list + 24) == mapId )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v13;
            sub_1C3B708((PartyOrganizationUtility_o *)(v26 + 4), v13, v17, v18, v19, v20, v21, v22);
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C3B9C0(list, v13);
  }
LABEL_16:
  if ( !v12 )
    goto LABEL_18;
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v12,
                                         (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPanelSpotEntity_array *__fastcall EventPanelSpotMaster__GetEntityListFromEventId(
        EventPanelSpotMaster_o *this,
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
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C21FB3 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo, v9);
    byte_4C21FB3 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = list;
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( *(_DWORD *)(list + 20) == eventId )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v22 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v11;
            sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C3B9C0(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}