void UserProfileMaster___ctor(UserProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF56F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
    byte_4CEF56F = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    102,
    (const MethodInfo_342E534 *)Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
}


OtherUserGameEntity_array *UserProfileMaster__GetOtherUserList(UserProfileMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  DataManager_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4CEF571 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF571 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v7 = (int)Instance;
    v8 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v8,
                                    (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__);
      if ( Instance )
      {
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      Instance->fields.m_CachedPtr,
                                      (const MethodInfo_3430858 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
        if ( !v6 )
          break;
        items = v6->fields._items;
        v16 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        v18 = Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)Instance,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C7BD40(Instance, v4);
  }
LABEL_16:
  if ( !v6 )
    goto LABEL_18;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t UserProfileMaster__GetOtherUserSum(UserProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w21
  int32_t v6; // w20
  int32_t v7; // w22

  if ( (byte_4CEF570 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__);
    byte_4CEF570 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      if ( System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v7++,
             (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__) )
      {
        ++v6;
      }
      if ( v5 == v7 )
        return v6;
    }
LABEL_13:
    sub_1C7BD40(list, method);
  }
  return 0;
}