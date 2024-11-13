void __fastcall OtherUserGameMaster___ctor(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16610 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__, method, v2);
    byte_4B16610 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    64,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long___ctor__);
}


OtherUserGameEntity_array *__fastcall OtherUserGameMaster__GetFriendCodeList(
        OtherUserGameMaster_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  void *list; // x0
  __int64 v20; // x1
  int v21; // w22
  int32_t v22; // w23
  Il2CppObject *v23; // x24
  __int64 methodPtr_low; // x10
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4B16611 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, friendCode, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&OtherUserGameEntity_TypeInfo, v16, v17);
    byte_4B16611 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_OtherUserGameEntity__TypeInfo,
                                                       friendCode,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  if ( friendCode )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v21 = (int)list;
      v22 = 0;
      while ( 1 )
      {
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 v22,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v23 = (Il2CppObject *)list;
          methodPtr_low = LOBYTE(OtherUserGameEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
            && *(OtherUserGameEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == OtherUserGameEntity_TypeInfo )
          {
            list = (void *)System_String__Equals_62409536(friendCode, *((System_String_o **)list + 5), 0LL);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v18 )
                break;
              items = v18->fields._items;
              v32 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
              ++v18->fields._version;
              if ( !items )
                break;
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v18,
                  v23,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v18->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v23;
                sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v23, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
        if ( v21 == ++v22 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1BCAA3C(list, v20);
    }
  }
LABEL_18:
  if ( !v18 )
    goto LABEL_20;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v18,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


void __fastcall OtherUserGameMaster__continueDeviceOtherUser(OtherUserGameMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_long__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  int32_t Count; // w21
  int64_t v26; // x22
  int32_t v27; // w23
  __int64 methodPtr_low; // x10
  struct System_Int64_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  __int64 v32; // x1
  System_Int64_array *v33; // x19

  if ( (byte_4B16612 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&OtherUserGameEntity_TypeInfo, v17, v18);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v19, v20);
    byte_4B16612 = 1;
  }
  v21 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v21,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v26 = (int64_t)list;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v27,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(OtherUserGameEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (OtherUserGameEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == OtherUserGameEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v26 )
        {
          if ( !v21 )
            break;
          items = v21->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v21->fields._version;
          if ( !items )
            break;
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v21,
              v26,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = size + 1;
            items->m_Items[size] = v26;
          }
        }
      }
      if ( Count == ++v27 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1BCAA3C(list, v22);
  }
LABEL_19:
  if ( !v21 )
    goto LABEL_23;
  v33 = System_Collections_Generic_List_long___ToArray(
          v21,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v32);
  OtherUserNewManager__SetOld_41141724(v33, 0LL);
}