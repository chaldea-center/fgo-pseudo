void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D2AE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__, method);
    byte_4B1D2AE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    385,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
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
  __int64 v17; // x2
  Il2CppObject *v18; // x25
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v22; // w23
  __int64 v23; // x20
  int64_t v24; // x21
  System_String_o *RestTime; // x21
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B1D2B3 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_13323/*"TIME_REST_TIMEOVER"*/, v11);
    byte_4B1D2B3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
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
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
      if ( Item )
      {
        v18 = Item;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          byte_4B165D1 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( list[7].fields.items[4].klass == (System_Collections_Generic_IList_T__c *)v18[1].klass
          && LODWORD(v18[1].monitor) == eventId )
        {
          break;
        }
      }
      if ( Count == ++v15 )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v14;
    }
    klass = v18[2].klass;
    if ( !klass )
LABEL_35:
      sub_1BCB254(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= namespaze )
          sub_1BCB25C(list, *(_QWORD *)&eventId, v17);
        v23 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v22);
        if ( !v23 )
          goto LABEL_35;
        if ( *(_DWORD *)(v23 + 20) )
        {
          v24 = *(unsigned int *)(v23 + 28);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(v24, 0LL);
          list = (System_Collections_ObjectModel_Collection_T__o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_13323/*"TIME_REST_TIMEOVER"*/,
                                                                     0LL);
          if ( !RestTime )
            goto LABEL_35;
          list = (System_Collections_ObjectModel_Collection_T__o *)System_String__Equals_62485728(
                                                                     RestTime,
                                                                     (System_String_o *)list,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_35;
            items = v14->fields._items;
            v28 = Method_System_Collections_Generic_List_ExpeditionInfo__Add__;
            ++v14->fields._version;
            if ( !items )
              goto LABEL_35;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v23,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v23;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 4), v23, v17, v26);
            }
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v22 >= namespaze )
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

  if ( (byte_4B1D2AF & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__,
      userId);
    byte_4B1D2AF = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_32CC8B8 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4B1D2B1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_UserEventExpeditionEntity__UserEventExpeditionEntity___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___, v3);
    sub_1BCAFF8(&System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__TypeInfo, v4);
    sub_1BCAFF8(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, v5);
    sub_1BCAFF8(&UserEventExpeditionMaster___c_TypeInfo, v6);
    byte_4B1D2B1 = 1;
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
    _9__3_0 = (System_Func_object__object__o *)sub_1BCB244(System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v10, Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__o *)_9__3_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_304EFCC *)Method_System_Linq_Enumerable_Select_UserEventExpeditionEntity__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v14,
                                                                           (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
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
  __int64 v14; // x2
  Il2CppObject *v15; // x25
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v18; // w10

  if ( (byte_4B1D2B2 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B1D2B2 = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
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
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          byte_4B165D1 = 1;
        }
        result = (ExpeditionInfo_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (ExpeditionInfo_o *)NetworkManager_TypeInfo;
        }
        if ( *(Il2CppClass **)(*(_QWORD *)&result[5].fields.startedAt + 64LL) == v15[1].klass
          && LODWORD(v15[1].monitor) == eventId )
        {
          break;
        }
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
    klass = v15[2].klass;
    if ( !klass )
LABEL_27:
      sub_1BCB254(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( namespaze == v18 )
          sub_1BCB25C(result, *(_QWORD *)&eventId, v14);
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v18);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx == idx )
          return result;
        if ( namespaze == ++v18 )
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

  if ( (byte_4B1D2B0 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__,
      entity);
    byte_4B1D2B0 = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1D2B4 & 1) == 0 )
  {
    sub_1BCAFF8(&UserEventExpeditionMaster___c_TypeInfo, v1);
    byte_4B1D2B4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(UserEventExpeditionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventExpeditionMaster___c_TypeInfo->static_fields->__9 = (struct UserEventExpeditionMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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