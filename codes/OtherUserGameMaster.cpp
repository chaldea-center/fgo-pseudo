void __fastcall OtherUserGameMaster___ctor(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4B19 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__, method);
    byte_4BB4B19 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    68,
    (const MethodInfo_323885C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
}


OtherUserGameEntity_array *__fastcall OtherUserGameMaster__GetFriendCodeList(
        OtherUserGameMaster_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  void *list; // x0
  __int64 v12; // x1
  int v13; // w22
  int32_t v14; // w23
  Il2CppObject *v15; // x24
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

  if ( (byte_4BB4B1A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__, friendCode);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v9);
    byte_4BB4B1A = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  if ( friendCode )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
    if ( (int)list >= 1 )
    {
      v13 = (int)list;
      v14 = 0;
      while ( 1 )
      {
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v14,
                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
        if ( list )
        {
          v15 = (Il2CppObject *)list;
          list = (void *)System_String__Equals_62976260(friendCode, *((System_String_o **)list + 5), 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v10 )
              break;
            items = v10->fields._items;
            v23 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v15,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v15;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v15, v16, v17, v18, v19, v20, v21);
            }
          }
        }
        if ( v13 == ++v14 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1C13F80(list, v12);
    }
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


void __fastcall OtherUserGameMaster__continueDeviceOtherUser(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_long__o *v10; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int32_t v14; // w22
  int64_t klass; // x23
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Int64_array *v19; // x19

  if ( (byte_4BB4B1B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1C13D24(&NetworkManager_TypeInfo, v8);
    sub_1C13D24(&OtherUserNewManager_TypeInfo, v9);
    byte_4BB4B1B = 1;
  }
  v10 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v11);
    byte_4BAF1E5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v14 = 0;
    klass = (int64_t)list[7].fields.items[4].klass;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
      if ( list && list->fields.items == (struct System_Collections_Generic_IList_T__o *)klass )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_long__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v10,
            klass,
            *(const MethodInfo_3615200 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size] = klass;
        }
      }
      if ( Count == ++v14 )
        goto LABEL_21;
    }
LABEL_25:
    sub_1C13F80(list, v11);
  }
LABEL_21:
  if ( !v10 )
    goto LABEL_25;
  v19 = System_Collections_Generic_List_long___ToArray(
          v10,
          (const MethodInfo_3616CB8 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__SetOld_41576428(v19, 0LL);
}