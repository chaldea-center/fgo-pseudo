void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22C59 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__, method);
    byte_4C22C59 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    385,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v14; // x19
  int32_t v15; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x25
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v21; // w23
  int64_t v22; // x20
  int64_t v23; // x21
  System_String_o *RestTime; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4C22C5E & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_13643/*"The derived sequence particle at ({0}, {1}) is not a valid restriction of the base all particle at ({2}, {3}) according to Sequence:All -- RecurseUnordered."*/, v11);
    byte_4C22C5E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_35;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v15,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
      if ( Item )
      {
        v17 = Item;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          byte_4C1C955 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( list[7].fields.items[4].klass == (System_Collections_Generic_IList_T__c *)v17[1].klass
          && LODWORD(v17[1].monitor) == eventId )
        {
          break;
        }
      }
      if ( Count == ++v15 )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v14;
    }
    klass = v17[2].klass;
    if ( !klass )
LABEL_35:
      sub_1C3B9C0(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= namespaze )
          sub_1C3B9C8(list, *(_QWORD *)&eventId);
        v22 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v21);
        if ( !v22 )
          goto LABEL_35;
        if ( *(_DWORD *)(v22 + 20) )
        {
          v23 = *(unsigned int *)(v22 + 28);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(v23, 0LL);
          list = (System_Collections_ObjectModel_Collection_T__o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_13643/*"The derived sequence particle at ({0}, {1}) is not a valid restriction of the base all particle at ({2}, {3}) according to Sequence:All -- RecurseUnordered."*/,
                                                                     0LL);
          if ( !RestTime )
            goto LABEL_35;
          list = (System_Collections_ObjectModel_Collection_T__o *)System_String__Equals_63376928(
                                                                     RestTime,
                                                                     (System_String_o *)list,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_35;
            items = v14->fields._items;
            v32 = Method_System_Collections_Generic_List_ExpeditionInfo__Add__;
            ++v14->fields._version;
            if ( !items )
              goto LABEL_35;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v22,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v22;
              sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 4), v22, v25, v26, v27, v28, v29, v30);
            }
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v21 >= namespaze )
          return (System_Collections_Generic_List_ExpeditionInfo__o *)v14;
      }
    }
  }
  return (System_Collections_Generic_List_ExpeditionInfo__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22C5A & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__,
      userId);
    byte_4C22C5A = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_329F900 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v10; // x21
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4C22C5C & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_UserEventExpeditionEntity__UserEventExpeditionEntity___, method);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___, v3);
    sub_1C3B764(&System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__TypeInfo, v4);
    sub_1C3B764(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, v5);
    sub_1C3B764(&UserEventExpeditionMaster___c_TypeInfo, v6);
    byte_4C22C5C = 1;
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
    _9__3_0 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v10, Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__o *)_9__3_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_3022A9C *)Method_System_Linq_Enumerable_Select_UserEventExpeditionEntity__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v18,
                                                                           (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
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
  ExpeditionInfo_o *result; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x25
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v17; // w10

  if ( (byte_4C22C5D & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C22C5D = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      result = (ExpeditionInfo_o *)this->fields.list;
      if ( !result )
        goto LABEL_27;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)result,
               v12,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
      if ( Item )
      {
        v14 = Item;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          byte_4C1C955 = 1;
        }
        result = (ExpeditionInfo_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (ExpeditionInfo_o *)NetworkManager_TypeInfo;
        }
        if ( *(Il2CppClass **)(*(_QWORD *)&result[5].fields.startedAt + 64LL) == v14[1].klass
          && LODWORD(v14[1].monitor) == eventId )
        {
          break;
        }
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
    klass = v14[2].klass;
    if ( !klass )
LABEL_27:
      sub_1C3B9C0(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( namespaze == v17 )
          sub_1C3B9C8(result, *(_QWORD *)&eventId);
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v17);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx == idx )
          return result;
        if ( namespaze == ++v17 )
          return 0LL;
      }
      goto LABEL_27;
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

  if ( (byte_4C22C5B & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__,
      entity);
    byte_4C22C5B = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C22C5F & 1) == 0 )
  {
    sub_1C3B764(&UserEventExpeditionMaster___c_TypeInfo, v1);
    byte_4C22C5F = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(UserEventExpeditionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventExpeditionMaster___c_TypeInfo->static_fields->__9 = (struct UserEventExpeditionMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall UserEventExpeditionMaster___c___ctor(UserEventExpeditionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster___c___GetEntityList_b__3_0(
        UserEventExpeditionMaster___c_o *this,
        UserEventExpeditionEntity_o *data,
        const MethodInfo *method)
{
  return data;
}