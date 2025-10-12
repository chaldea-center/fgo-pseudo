void UserProfileMaster___ctor(UserProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C388DF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
    byte_4C388DF = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    102,
    (const MethodInfo_3396A70 *)Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
}


OtherUserGameEntity_array *UserProfileMaster__GetOtherUserList(UserProfileMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  int v6; // w22
  int32_t v7; // w23
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  DataManager_o *v13; // x1
  Il2CppClass **v14; // x0

  if ( (byte_4C388E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C32C20(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C388E1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v6 = (int)Instance;
    v7 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v7,
                                    (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__);
      if ( Instance )
      {
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      Instance->fields.m_CachedPtr,
                                      (const MethodInfo_3398D94 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
        if ( !v5 )
          break;
        items = v5->fields._items;
        v11 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        v13 = Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)Instance,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v13;
          sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C32E7C(Instance);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_18;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t UserProfileMaster__GetOtherUserSum(UserProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w21
  int32_t v6; // w20
  int32_t v7; // w22

  if ( (byte_4C388E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__);
    byte_4C388E0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
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
             (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__) )
      {
        ++v6;
      }
      if ( v5 == v7 )
        return v6;
    }
LABEL_13:
    sub_1C32E7C(list);
  }
  return 0;
}