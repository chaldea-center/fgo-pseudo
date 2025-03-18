void __fastcall UserProfileMaster___ctor(UserProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22D8C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__, method);
    byte_4C22D8C = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    102,
    (const MethodInfo_329B080 *)Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
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
  int64_t Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  int v15; // w22
  int32_t v16; // w23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  int64_t v26; // x1
  Il2CppClass **v27; // x0

  if ( (byte_4C22D8E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C22D8E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_18;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v15 = Instance;
    v16 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v16,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__);
      if ( Instance )
      {
        if ( !MasterData_object )
          break;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              *(_QWORD *)(Instance + 16),
                              (const MethodInfo_329D3A4 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
        if ( !v14 )
          break;
        items = v14->fields._items;
        v24 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        v26 = Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)Instance,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1C3B708((PartyOrganizationUtility_o *)(v27 + 4), v26, v17, v18, v19, v20, v21, v22);
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C3B9C0(Instance, v12);
  }
LABEL_16:
  if ( !v14 )
    goto LABEL_18;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v14,
                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t __fastcall UserProfileMaster__GetOtherUserSum(UserProfileMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v6; // w21
  int32_t v7; // w20
  int32_t v8; // w22

  if ( (byte_4C22D8D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__, v3);
    byte_4C22D8D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Count__);
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
             (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserProfileEntity__get_Item__) )
      {
        ++v7;
      }
      if ( v6 == v8 )
        return v7;
    }
LABEL_13:
    sub_1C3B9C0(list, method);
  }
  return 0;
}