void OtherUserGameMaster___ctor(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43565 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
    byte_4C43565 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    68,
    (const MethodInfo_33A12D8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
}


OtherUserGameEntity_array *OtherUserGameMaster__GetFriendCodeList(
        OtherUserGameMaster_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  void *list; // x0
  int v7; // w22
  int32_t v8; // w23
  Il2CppObject *v9; // x24
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C43566 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    byte_4C43566 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  if ( friendCode )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
    if ( (int)list >= 1 )
    {
      v7 = (int)list;
      v8 = 0;
      while ( 1 )
      {
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v8,
                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
        if ( list )
        {
          v9 = (Il2CppObject *)list;
          list = (void *)System_String__Equals_63596960(friendCode, *((System_String_o **)list + 5), 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v13 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v9,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v15 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v15[4] = (Il2CppClass *)v9;
              sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
            }
          }
        }
        if ( v7 == ++v8 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1C372B4(list);
    }
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_18;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


void OtherUserGameMaster__continueDeviceOtherUser(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int32_t v6; // w22
  int64_t klass; // x23
  struct System_Int64_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  System_Int64_array *v11; // x19

  if ( (byte_4C43567 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&OtherUserNewManager_TypeInfo);
    byte_4C43567 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v6 = 0;
    klass = (int64_t)list[7].fields.items[4].klass;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
      if ( list && list->fields.items == (struct System_Collections_Generic_IList_T__o *)klass )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        v9 = Method_System_Collections_Generic_List_long__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v3,
            klass,
            *(const MethodInfo_378B058 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = klass;
        }
      }
      if ( Count == ++v6 )
        goto LABEL_21;
    }
LABEL_25:
    sub_1C372B4(list);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_25;
  v11 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__SetOld_43389132(v11, 0);
}