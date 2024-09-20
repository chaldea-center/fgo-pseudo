void __fastcall OtherUserGameMaster___ctor(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B564 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
    byte_4A5B564 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    64,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
}


OtherUserGameEntity_array *__fastcall OtherUserGameMaster__GetFriendCodeList(
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
  __int64 methodPtr_low; // x10
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5B565 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_1B885B0(&OtherUserGameEntity_TypeInfo);
    byte_4A5B565 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  if ( friendCode )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v10 = (Il2CppObject *)list;
          methodPtr_low = LOBYTE(OtherUserGameEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
            && *(OtherUserGameEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == OtherUserGameEntity_TypeInfo )
          {
            list = (void *)System_String__Equals_61715348(friendCode, *((System_String_o **)list + 5), 0LL);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v5 )
                break;
              items = v5->fields._items;
              v15 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  v10,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
              }
              else
              {
                v17 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v17[4] = (Il2CppClass *)v10;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
              }
            }
          }
        }
        if ( v8 == ++v9 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1B8880C(list, v7);
    }
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_20;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


void __fastcall OtherUserGameMaster__continueDeviceOtherUser(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int64_t v7; // x22
  int32_t v8; // w23
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_Int64_array *v13; // x19

  if ( (byte_4A5B566 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OtherUserGameEntity_TypeInfo);
    sub_1B885B0(&OtherUserNewManager_TypeInfo);
    byte_4A5B566 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v7 = (int64_t)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(OtherUserGameEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (OtherUserGameEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == OtherUserGameEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v7 )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v11 = Method_System_Collections_Generic_List_long__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v3,
              v7,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = v7;
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1B8880C(list, v4);
  }
LABEL_19:
  if ( !v3 )
    goto LABEL_23;
  v13 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__SetOld_40408920(v13, 0LL);
}