void __fastcall OtherUserGameMaster___ctor(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB615C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__, method);
    byte_4AB615C = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    64,
    (const MethodInfo_3163EFC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  void *list; // x0
  __int64 v13; // x1
  int v14; // w22
  int32_t v15; // w23
  Il2CppObject *v16; // x24
  __int64 methodPtr_low; // x10
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4AB615D & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, friendCode);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v9);
    sub_1BAB41C(&OtherUserGameEntity_TypeInfo, v10);
    byte_4AB615D = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  if ( friendCode )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v14 = (int)list;
      v15 = 0;
      while ( 1 )
      {
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v15,
                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v16 = (Il2CppObject *)list;
          methodPtr_low = LOBYTE(OtherUserGameEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
            && *(OtherUserGameEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == OtherUserGameEntity_TypeInfo )
          {
            list = (void *)System_String__Equals_62056444(friendCode, *((System_String_o **)list + 5), 0LL);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v11 )
                break;
              items = v11->fields._items;
              v21 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
              ++v11->fields._version;
              if ( !items )
                break;
              size = v11->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v11,
                  v16,
                  *(const MethodInfo_354D8BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v11->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v16;
                sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
              }
            }
          }
        }
        if ( v14 == ++v15 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1BAB678(list, v13);
    }
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_20;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int64_t v15; // x22
  int32_t v16; // w23
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  System_Int64_array *v21; // x19

  if ( (byte_4AB615E & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1BAB41C(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1BAB41C(&NetworkManager_TypeInfo, v8);
    sub_1BAB41C(&OtherUserGameEntity_TypeInfo, v9);
    sub_1BAB41C(&OtherUserNewManager_TypeInfo, v10);
    byte_4AB615E = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_1BAB668(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_353509C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v15 = (int64_t)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(OtherUserGameEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (OtherUserGameEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == OtherUserGameEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v15 )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v11,
              v15,
              *(const MethodInfo_35358F0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size] = v15;
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1BAB678(list, v12);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_23;
  v21 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_35373A8 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__SetOld_40801292(v21, 0LL);
}