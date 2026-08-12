void OtherUserGameMaster___ctor(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970E52 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
    byte_5970E52 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    68,
    (const MethodInfo_3F10D40 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
}


OtherUserGameEntity_array *OtherUserGameMaster__GetFriendCodeList(
        OtherUserGameMaster_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  void *list; // x0
  __int64 v7; // x1
  int v8; // w22
  int32_t v9; // w23
  Il2CppObject *v10; // x24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5970E53 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    byte_5970E53 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  if ( friendCode )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
    if ( (int)list >= 1 )
    {
      v8 = (int)list;
      v9 = 0;
      while ( 1 )
      {
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v9,
                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
        if ( list )
        {
          v10 = (Il2CppObject *)list;
          list = (void *)System_String__Equals_75686512(friendCode, *((System_String_o **)list + 5), 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v18 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v10,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v10;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
            }
          }
        }
        if ( v8 == ++v9 )
          goto LABEL_16;
      }
LABEL_18:
      sub_2213CDC(list, v7);
    }
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_18;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


void OtherUserGameMaster__continueDeviceOtherUser(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int32_t v7; // w23
  int64_t klass; // x22
  struct System_Int64_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  __int64 v12; // x1
  System_Int64_array *v13; // x19

  if ( (byte_5970E54 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    byte_5970E54 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v7 = 0;
    klass = (int64_t)list[7].fields.items[4].klass;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
      if ( list && list->fields.items == (struct System_Collections_Generic_IList_T__o *)klass )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_long__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v3,
            klass,
            *(const MethodInfo_446C29C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = klass;
        }
      }
      if ( Count == ++v7 )
        goto LABEL_21;
    }
LABEL_25:
    sub_2213CDC(list, v4);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_25;
  v13 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v12);
  OtherUserNewManager__SetOld_50403824(v13, 0);
}