void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BDAB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
    byte_4A5BDAB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ExpeditionInfo__o *__fastcall UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x24
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v15; // w23
  __int64 v16; // x20
  int64_t v17; // x21
  System_String_o *RestTime; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A5BDB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserEventExpeditionEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_13349/*"TIME_REST_TIMEOVER"*/);
    byte_4A5BDB0 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_33;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = Item;
        methodPtr_low = LOBYTE(UserEventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = NetworkManager__get_UserId(0LL);
          if ( (Il2CppClass *)list == v10[1].klass && LODWORD(v10[1].monitor) == eventId )
            break;
        }
      }
      if ( Count == ++v8 )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v7;
    }
    klass = v10[2].klass;
    if ( !klass )
LABEL_33:
      sub_1B8880C(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= namespaze )
          sub_1B88814(list, *(_QWORD *)&eventId);
        v16 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v15);
        if ( !v16 )
          goto LABEL_33;
        if ( *(_DWORD *)(v16 + 20) )
        {
          v17 = *(unsigned int *)(v16 + 28);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(v17, 0LL);
          list = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13349/*"TIME_REST_TIMEOVER"*/, 0LL);
          if ( !RestTime )
            goto LABEL_33;
          list = System_String__Equals_61715348(RestTime, (System_String_o *)list, 0LL);
          if ( (list & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_33;
            items = v7->fields._items;
            v22 = Method_System_Collections_Generic_List_ExpeditionInfo__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_33;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v16,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v16;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), v16, v19, v20);
            }
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v15 >= namespaze )
          return (System_Collections_Generic_List_ExpeditionInfo__o *)v7;
      }
    }
  }
  return (System_Collections_Generic_List_ExpeditionInfo__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BDAC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
    byte_4A5BDAC = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *__fastcall UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
{
  UserEventExpeditionMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v6; // x21
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A5BDAE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
    sub_1B885B0(&System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo);
    sub_1B885B0(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__);
    sub_1B885B0(&UserEventExpeditionMaster___c_TypeInfo);
    byte_4A5BDAE = 1;
  }
  v3 = UserEventExpeditionMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventExpeditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventExpeditionMaster___c_TypeInfo);
    v3 = UserEventExpeditionMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v3->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserEventExpeditionMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v6, Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventExpeditionEntity__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v10,
                                                                           (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
}


// local variable allocation has failed, the output may be wrong!
ExpeditionInfo_o *__fastcall UserEventExpeditionMaster__GetExpeditionInfo(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  ExpeditionInfo_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x24
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v16; // w10

  if ( (byte_4A5BDAF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserEventExpeditionEntity_TypeInfo);
    byte_4A5BDAF = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (ExpeditionInfo_o *)this->fields.list;
      if ( !result )
        goto LABEL_25;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)result,
               v10,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        methodPtr_low = LOBYTE(UserEventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (ExpeditionInfo_o *)NetworkManager__get_UserId(0LL);
          if ( result == (ExpeditionInfo_o *)v12[1].klass && LODWORD(v12[1].monitor) == eventId )
            break;
        }
      }
      if ( v9 == ++v10 )
        return 0LL;
    }
    klass = v12[2].klass;
    if ( !klass )
LABEL_25:
      sub_1B8880C(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( namespaze == v16 )
          sub_1B88814(result, *(_QWORD *)&eventId);
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v16);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx != idx )
        {
          ++v16;
          result = 0LL;
          if ( namespaze != v16 )
            continue;
        }
        return result;
      }
      goto LABEL_25;
    }
  }
  return 0LL;
}


bool __fastcall UserEventExpeditionMaster__TryGetEntity(
        UserEventExpeditionMaster_o *this,
        UserEventExpeditionEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BDAD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
    byte_4A5BDAD = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BDB1 & 1) == 0 )
  {
    sub_1B885B0(&UserEventExpeditionMaster___c_TypeInfo);
    byte_4A5BDB1 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserEventExpeditionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserEventExpeditionMaster___c_TypeInfo->static_fields->__9 = (struct UserEventExpeditionMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall UserEventExpeditionMaster___c___ctor(UserEventExpeditionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster___c___GetEntityList_b__3_0(
        UserEventExpeditionMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BDB2 & 1) == 0 )
  {
    sub_1B885B0(&UserEventExpeditionEntity_TypeInfo);
    byte_4A5BDB2 = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventExpeditionEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventExpeditionEntity_TypeInfo )
    return (UserEventExpeditionEntity_o *)data;
  return 0LL;
}