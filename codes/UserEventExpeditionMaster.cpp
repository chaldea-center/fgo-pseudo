void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD032 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__, method);
    byte_49FD032 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ExpeditionInfo__o *__fastcall UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t list; // x0
  int32_t Count; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x19
  int32_t v18; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x24
  __int64 methodPtr_low; // x10
  __int64 v22; // x1
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v26; // w23
  __int64 v27; // x20
  int64_t v28; // x21
  System_String_o *RestTime; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_49FD037 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&UserEventExpeditionEntity_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_13280/*"TIME_REST_TIMEOVER"*/, v12);
    byte_49FD037 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ExpeditionInfo__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_33;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = Item;
        methodPtr_low = LOBYTE(UserEventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = NetworkManager__get_UserId(0LL);
          if ( (Il2CppClass *)list == v20[1].klass && LODWORD(v20[1].monitor) == eventId )
            break;
        }
      }
      if ( Count == ++v18 )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v17;
    }
    klass = v20[2].klass;
    if ( !klass )
LABEL_33:
      sub_1B64324(list);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= namespaze )
          sub_1B6432C(list, v22);
        v27 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v26);
        if ( !v27 )
          goto LABEL_33;
        if ( *(_DWORD *)(v27 + 20) )
        {
          v28 = *(unsigned int *)(v27 + 28);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(v28, 0LL);
          list = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13280/*"TIME_REST_TIMEOVER"*/, 0LL);
          if ( !RestTime )
            goto LABEL_33;
          list = System_String__Equals_61383712(RestTime, (System_String_o *)list, 0LL);
          if ( (list & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_33;
            items = v17->fields._items;
            v33 = Method_System_Collections_Generic_List_ExpeditionInfo__Add__;
            ++v17->fields._version;
            if ( !items )
              goto LABEL_33;
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)v27,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v27;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), v27, v30, v31);
            }
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v26 >= namespaze )
          return (System_Collections_Generic_List_ExpeditionInfo__o *)v17;
      }
    }
  }
  return (System_Collections_Generic_List_ExpeditionInfo__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FD033 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__,
      userId);
    byte_49FD033 = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_30D41FC *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *__fastcall UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserEventExpeditionMaster___c_c *v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v11; // x21
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FD035 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___, v4);
    sub_1B640C8(&System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo, v5);
    sub_1B640C8(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, v6);
    sub_1B640C8(&UserEventExpeditionMaster___c_TypeInfo, v7);
    byte_49FD035 = 1;
  }
  v8 = UserEventExpeditionMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventExpeditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventExpeditionMaster___c_TypeInfo);
    v8 = UserEventExpeditionMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v8->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = UserEventExpeditionMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo,
                                                 method,
                                                 v2);
    System_Func_object__object____ctor(_9__3_0, v11, Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventExpeditionEntity__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v15,
                                                                           (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
}


// local variable allocation has failed, the output may be wrong!
ExpeditionInfo_o *__fastcall UserEventExpeditionMaster__GetExpeditionInfo(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ExpeditionInfo_o *result; // x0
  int32_t Count; // w0
  int32_t v12; // w22
  int32_t v13; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x24
  __int64 methodPtr_low; // x10
  __int64 v17; // x1
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v20; // w10

  if ( (byte_49FD036 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&UserEventExpeditionEntity_TypeInfo, v9);
    byte_49FD036 = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      result = (ExpeditionInfo_o *)this->fields.list;
      if ( !result )
        goto LABEL_25;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)result,
               v13,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        methodPtr_low = LOBYTE(UserEventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (ExpeditionInfo_o *)NetworkManager__get_UserId(0LL);
          if ( result == (ExpeditionInfo_o *)v15[1].klass && LODWORD(v15[1].monitor) == eventId )
            break;
        }
      }
      if ( v12 == ++v13 )
        return 0LL;
    }
    klass = v15[2].klass;
    if ( !klass )
LABEL_25:
      sub_1B64324(result);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( namespaze == v20 )
          sub_1B6432C(result, v17);
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v20);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx != idx )
        {
          ++v20;
          result = 0LL;
          if ( namespaze != v20 )
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

  if ( (byte_49FD034 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__,
      entity);
    byte_49FD034 = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD038 & 1) == 0 )
  {
    sub_1B640C8(&UserEventExpeditionMaster___c_TypeInfo, v1);
    byte_49FD038 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserEventExpeditionMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserEventExpeditionMaster___c_TypeInfo->static_fields->__9 = (struct UserEventExpeditionMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FD039 & 1) == 0 )
  {
    sub_1B640C8(&UserEventExpeditionEntity_TypeInfo, data);
    byte_49FD039 = 1;
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