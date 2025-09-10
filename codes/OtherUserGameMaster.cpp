void OtherUserGameMaster___ctor(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2786B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
    byte_4C2786B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    68,
    (const MethodInfo_3387FD0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4C2786C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    byte_4C2786C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  if ( friendCode )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
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
                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
        if ( list )
        {
          v10 = (Il2CppObject *)list;
          list = (void *)System_String__Equals_63493168(friendCode, *((System_String_o **)list + 5), 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v14 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v10,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v16[4] = (Il2CppClass *)v10;
              sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v10, v11, v12);
            }
          }
        }
        if ( v8 == ++v9 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1C2D6EC(list, v7);
    }
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_18;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


void OtherUserGameMaster__continueDeviceOtherUser(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int32_t v7; // w22
  int64_t klass; // x23
  struct System_Int64_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_Int64_array *v12; // x19

  if ( (byte_4C2786D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&OtherUserNewManager_TypeInfo);
    byte_4C2786D = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_OtherUserGameEntity__get_Item__);
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
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
    sub_1C2D6EC(list, v4);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_25;
  v12 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__SetOld_43154428(v12, 0);
}