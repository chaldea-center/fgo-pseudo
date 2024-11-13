void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E60 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__,
      method,
      v2);
    byte_4B16E60 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ExpeditionInfo__o *__fastcall UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
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
  int64_t list; // x0
  int32_t Count; // w22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x19
  int32_t v27; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v29; // x24
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v34; // w23
  int64_t v35; // x20
  int64_t v36; // x21
  System_String_o *RestTime; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0

  if ( (byte_4B16E65 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserEventExpeditionEntity_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_13512/*"TIME_REST_TIMEOVER"*/, v19, v20);
    byte_4B16E65 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ExpeditionInfo__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_33;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v27,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v29 = Item;
        methodPtr_low = LOBYTE(UserEventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          list = NetworkManager__get_UserId(0LL);
          if ( (Il2CppClass *)list == v29[1].klass && LODWORD(v29[1].monitor) == eventId )
            break;
        }
      }
      if ( Count == ++v27 )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v26;
    }
    klass = v29[2].klass;
    if ( !klass )
LABEL_33:
      sub_1BCAA3C(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        if ( v34 >= namespaze )
          sub_1BCAA44(list, *(_QWORD *)&eventId);
        v35 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v34);
        if ( !v35 )
          goto LABEL_33;
        if ( *(_DWORD *)(v35 + 20) )
        {
          v36 = *(unsigned int *)(v35 + 28);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&eventId);
          RestTime = LocalizationManager__GetRestTime(v36, 0LL);
          list = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13512/*"TIME_REST_TIMEOVER"*/, 0LL);
          if ( !RestTime )
            goto LABEL_33;
          list = System_String__Equals_62409536(RestTime, (System_String_o *)list, 0LL);
          if ( (list & 1) != 0 )
          {
            if ( !v26 )
              goto LABEL_33;
            items = v26->fields._items;
            v45 = Method_System_Collections_Generic_List_ExpeditionInfo__Add__;
            ++v26->fields._version;
            if ( !items )
              goto LABEL_33;
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                (Il2CppObject *)v35,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v35;
              sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v35, v38, v39, v40, v41, v42, v43);
            }
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v34 >= namespaze )
          return (System_Collections_Generic_List_ExpeditionInfo__o *)v26;
      }
    }
  }
  return (System_Collections_Generic_List_ExpeditionInfo__o *)v26;
}


// local variable allocation has failed, the output may be wrong!
UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16E61 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16E61 = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *__fastcall UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
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
  UserEventExpeditionMaster___c_c *v13; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v16; // x21
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B16E63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___, v5, v6);
    sub_1BCA7E0(&System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, v9, v10);
    sub_1BCA7E0(&UserEventExpeditionMaster___c_TypeInfo, v11, v12);
    byte_4B16E63 = 1;
  }
  v13 = UserEventExpeditionMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventExpeditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventExpeditionMaster___c_TypeInfo, method);
    v13 = UserEventExpeditionMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v13->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = UserEventExpeditionMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__object____ctor(_9__3_0, v16, Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventExpeditionEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v24,
                                                                           (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
}


// local variable allocation has failed, the output may be wrong!
ExpeditionInfo_o *__fastcall UserEventExpeditionMaster__GetExpeditionInfo(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ExpeditionInfo_o *result; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x24
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v22; // w10

  if ( (byte_4B16E64 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&idx);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UserEventExpeditionEntity_TypeInfo, v11, v12);
    byte_4B16E64 = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      result = (ExpeditionInfo_o *)this->fields.list;
      if ( !result )
        goto LABEL_25;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)result,
               v16,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        methodPtr_low = LOBYTE(UserEventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          result = (ExpeditionInfo_o *)NetworkManager__get_UserId(0LL);
          if ( result == (ExpeditionInfo_o *)v18[1].klass && LODWORD(v18[1].monitor) == eventId )
            break;
        }
      }
      if ( v15 == ++v16 )
        return 0LL;
    }
    klass = v18[2].klass;
    if ( !klass )
LABEL_25:
      sub_1BCAA3C(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( namespaze == v22 )
          sub_1BCAA44(result, *(_QWORD *)&eventId);
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v22);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx != idx )
        {
          ++v22;
          result = 0LL;
          if ( namespaze != v22 )
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

  if ( (byte_4B16E62 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16E62 = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16E66 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventExpeditionMaster___c_TypeInfo, v1, v2);
    byte_4B16E66 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserEventExpeditionMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserEventExpeditionMaster___c_TypeInfo->static_fields->__9 = (struct UserEventExpeditionMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B16E67 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventExpeditionEntity_TypeInfo, data, method);
    byte_4B16E67 = 1;
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