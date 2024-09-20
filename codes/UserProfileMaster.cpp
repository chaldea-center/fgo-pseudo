void __fastcall UserProfileMaster___ctor(UserProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BED5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
    byte_4A5BED5 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    98,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserProfileMaster__UserProfileEntity__long___ctor__);
}


OtherUserGameEntity_array *__fastcall UserProfileMaster__GetOtherUserList(
        UserProfileMaster_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  int v7; // w22
  int32_t v8; // w23
  __int64 methodPtr_low; // x10
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass *v15; // x1
  Il2CppClass **v16; // x0

  if ( (byte_4A5BED7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1B885B0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserProfileEntity_TypeInfo);
    byte_4A5BED7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_20;
  Instance = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                       (System_Collections_ObjectModel_Collection_T__o *)Instance,
                       (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v7 = (int)Instance;
    v8 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v8,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                       (const MethodInfo_311DAE0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
          if ( !v6 )
            break;
          items = v6->fields._items;
          v13 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          v15 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)Instance,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v16[4] = v15;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1B8880C(Instance, v4);
  }
LABEL_18:
  if ( !v6 )
    goto LABEL_20;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t __fastcall UserProfileMaster__GetOtherUserSum(UserProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w21
  int32_t v6; // w20
  int32_t v7; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BED6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserProfileEntity_TypeInfo);
    byte_4A5BED6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v7,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserProfileEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserProfileEntity_TypeInfo )
        {
          ++v6;
        }
      }
      if ( v5 == ++v7 )
        return v6;
    }
LABEL_15:
    sub_1B8880C(list, method);
  }
  return 0;
}