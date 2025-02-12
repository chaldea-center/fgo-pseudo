void __fastcall EventUiValueMaster___ctor(EventUiValueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB48E5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventUiValueMaster__EventUiValueEntity__string___ctor__, method);
    byte_4BB48E5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    277,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventUiValueMaster__EventUiValueEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventUiValueEntity_array *__fastcall EventUiValueMaster__getList(
        EventUiValueMaster_o *this,
        int32_t objectId,
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

  if ( (byte_4BB48E6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventUiValueEntity__get_Count__, *(_QWORD *)&objectId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventUiValueEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventUiValueEntity__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventUiValueEntity__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventUiValueEntity___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_EventUiValueEntity__TypeInfo, v9);
    byte_4BB48E6 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventUiValueEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventUiValueEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventUiValueEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v13,
                      (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventUiValueEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( *(_DWORD *)(list + 16) == objectId )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_EventUiValueEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1C13F80(list, v11);
  return (EventUiValueEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventUiValueEntity__ToArray__);
}