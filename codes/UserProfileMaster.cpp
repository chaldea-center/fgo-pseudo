void __fastcall UserProfileMaster___ctor(UserProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6AD7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__, method);
    byte_4AB6AD7 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    98,
    (const MethodInfo_3163EFC *)Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
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
  __int64 v11; // x1
  void *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v15; // x20
  int v16; // w22
  int32_t v17; // w23
  __int64 methodPtr_low; // x10
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass *v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_4AB6AD9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BAB41C(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v4);
    sub_1BAB41C(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BAB41C(&UserProfileEntity_TypeInfo, v11);
    byte_4AB6AD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_20;
  Instance = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                       (System_Collections_ObjectModel_Collection_T__o *)Instance,
                       (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v16 = (int)Instance;
    v17 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v17,
                   (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        methodPtr_low = LOBYTE(UserProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserProfileEntity_TypeInfo )
        {
          if ( !MasterData_object )
            break;
          Instance = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       *((_QWORD *)Instance + 2),
                       (const MethodInfo_3163F3C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
          if ( !v15 )
            break;
          items = v15->fields._items;
          v22 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          v24 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)Instance,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v25[4] = v24;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1BAB678(Instance, v13);
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_20;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v15,
                                        (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t __fastcall UserProfileMaster__GetOtherUserSum(UserProfileMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w20
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4AB6AD8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BAB41C(&UserProfileEntity_TypeInfo, v4);
    byte_4AB6AD8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserProfileEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserProfileEntity_TypeInfo )
        {
          ++v8;
        }
      }
      if ( v7 == ++v9 )
        return v8;
    }
LABEL_15:
    sub_1BAB678(list, method);
  }
  return 0;
}