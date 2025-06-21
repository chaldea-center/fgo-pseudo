void __fastcall UserProfileMaster___ctor(UserProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D3E1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__, method);
    byte_4B1D3E1 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    102,
    (const MethodInfo_32C8038 *)Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
}


OtherUserGameEntity_array *__fastcall UserProfileMaster__GetOtherUserList(
        UserProfileMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  int v15; // w22
  int32_t v16; // w23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_4B1D3E3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1D3E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                       (System_Collections_ObjectModel_Collection_T__o *)Instance,
                       (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v15 = (int)Instance;
    v16 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v16,
                   (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__);
      if ( Instance )
      {
        if ( !MasterData_object )
          break;
        Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     *((_QWORD *)Instance + 2),
                     (const MethodInfo_32CA35C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
        if ( !v14 )
          break;
        items = v14->fields._items;
        v20 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        v22 = (Il2CppClass *)Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)Instance,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v23[4] = v22;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1BCB254(Instance, v12);
  }
LABEL_16:
  if ( !v14 )
    goto LABEL_18;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v14,
                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t __fastcall UserProfileMaster__GetOtherUserSum(UserProfileMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v6; // w21
  int32_t v7; // w20
  int32_t v8; // w22

  if ( (byte_4B1D3E2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__, v3);
    byte_4B1D3E2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
  if ( Count >= 1 )
  {
    v6 = Count;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      if ( System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8++,
             (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__) )
      {
        ++v7;
      }
      if ( v6 == v8 )
        return v7;
    }
LABEL_13:
    sub_1BCB254(list, method);
  }
  return 0;
}