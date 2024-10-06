void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70ABA & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__, method);
    byte_4A70ABA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
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
  System_Collections_Generic_List_object__o *v15; // x19
  int32_t v16; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x24
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v23; // w23
  __int64 v24; // x20
  int64_t v25; // x21
  System_String_o *RestTime; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4A70ABF & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__, v7);
    sub_1B90010(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo, v8);
    sub_1B90010(&LocalizationManager_TypeInfo, v9);
    sub_1B90010(&NetworkManager_TypeInfo, v10);
    sub_1B90010(&UserEventExpeditionEntity_TypeInfo, v11);
    sub_1B90010(&StringLiteral_13374/*"TIME_REST_TIMEOVER"*/, v12);
    byte_4A70ABF = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_33;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v16,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        methodPtr_low = LOBYTE(UserEventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = NetworkManager__get_UserId(0LL);
          if ( (Il2CppClass *)list == v18[1].klass && LODWORD(v18[1].monitor) == eventId )
            break;
        }
      }
      if ( Count == ++v16 )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v15;
    }
    klass = v18[2].klass;
    if ( !klass )
LABEL_33:
      sub_1B9026C(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= namespaze )
          sub_1B90274(list, *(_QWORD *)&eventId);
        v24 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v23);
        if ( !v24 )
          goto LABEL_33;
        if ( *(_DWORD *)(v24 + 20) )
        {
          v25 = *(unsigned int *)(v24 + 28);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(v25, 0LL);
          list = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13374/*"TIME_REST_TIMEOVER"*/, 0LL);
          if ( !RestTime )
            goto LABEL_33;
          list = System_String__Equals_61795408(RestTime, (System_String_o *)list, 0LL);
          if ( (list & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_33;
            items = v15->fields._items;
            v30 = Method_System_Collections_Generic_List_ExpeditionInfo__Add__;
            ++v15->fields._version;
            if ( !items )
              goto LABEL_33;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                (Il2CppObject *)v24,
                *(const MethodInfo_35109C0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v24;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v32 + 4), v24, v27, v28);
            }
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v23 >= namespaze )
          return (System_Collections_Generic_List_ExpeditionInfo__o *)v15;
      }
    }
  }
  return (System_Collections_Generic_List_ExpeditionInfo__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A70ABB & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__,
      userId);
    byte_4A70ABB = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_312C900 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *__fastcall UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserEventExpeditionMaster___c_c *v7; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v10; // x21
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4A70ABD & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___, method);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___, v3);
    sub_1B90010(&System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo, v4);
    sub_1B90010(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, v5);
    sub_1B90010(&UserEventExpeditionMaster___c_TypeInfo, v6);
    byte_4A70ABD = 1;
  }
  v7 = UserEventExpeditionMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventExpeditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventExpeditionMaster___c_TypeInfo);
    v7 = UserEventExpeditionMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v7->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = UserEventExpeditionMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B9025C(System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v10, Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventExpeditionEntity__o *)_9__3_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2EBED8C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v14,
                                                                           (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
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
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v19; // w10

  if ( (byte_4A70ABE & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B90010(&NetworkManager_TypeInfo, v8);
    sub_1B90010(&UserEventExpeditionEntity_TypeInfo, v9);
    byte_4A70ABE = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      sub_1B9026C(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( namespaze == v19 )
          sub_1B90274(result, *(_QWORD *)&eventId);
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v19);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx != idx )
        {
          ++v19;
          result = 0LL;
          if ( namespaze != v19 )
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

  if ( (byte_4A70ABC & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__,
      entity);
    byte_4A70ABC = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A70AC0 & 1) == 0 )
  {
    sub_1B90010(&UserEventExpeditionMaster___c_TypeInfo, v1);
    byte_4A70AC0 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(UserEventExpeditionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventExpeditionMaster___c_TypeInfo->static_fields->__9 = (struct UserEventExpeditionMaster___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A70AC1 & 1) == 0 )
  {
    sub_1B90010(&UserEventExpeditionEntity_TypeInfo, data);
    byte_4A70AC1 = 1;
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