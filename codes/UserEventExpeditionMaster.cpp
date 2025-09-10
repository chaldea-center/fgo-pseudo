void UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C280A5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
    byte_4C280A5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    385,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ExpeditionInfo__o *UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w23
  Il2CppObject *Item; // x0
  __int64 v10; // x2
  Il2CppObject *v11; // x25
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v15; // w23
  __int64 v16; // x20
  int64_t v17; // x21
  System_String_o *RestTime; // x21
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C280AA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13435/*"TIME_REST_TIMEOVER"*/);
    byte_4C280AA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_35;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
      if ( Item )
      {
        v11 = Item;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( list[7].fields.items[4].klass == (System_Collections_Generic_IList_T__c *)v11[1].klass
          && LODWORD(v11[1].monitor) == eventId )
        {
          break;
        }
      }
      if ( Count == ++v8 )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v7;
    }
    klass = v11[2].klass;
    if ( !klass )
LABEL_35:
      sub_1C2D6EC(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= namespaze )
          sub_1C2D6F4(list, *(_QWORD *)&eventId, v10);
        v16 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v15);
        if ( !v16 )
          goto LABEL_35;
        if ( *(_DWORD *)(v16 + 20) )
        {
          v17 = *(unsigned int *)(v16 + 28);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(v17, 0);
          list = (System_Collections_ObjectModel_Collection_T__o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_13435/*"TIME_REST_TIMEOVER"*/,
                                                                     0);
          if ( !RestTime )
            goto LABEL_35;
          list = (System_Collections_ObjectModel_Collection_T__o *)System_String__Equals_63493168(
                                                                     RestTime,
                                                                     (System_String_o *)list,
                                                                     0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_35;
            items = v7->fields._items;
            v21 = Method_System_Collections_Generic_List_ExpeditionInfo__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_35;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v16,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v16;
              sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), v16, v10, v19);
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
UserEventExpeditionEntity_o *UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C280A6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
    byte_4C280A6 = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_338C850 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
{
  UserEventExpeditionMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v6; // x21
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C280A8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_UserEventExpeditionEntity__UserEventExpeditionEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
    sub_1C2D490(&System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__TypeInfo);
    sub_1C2D490(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__);
    sub_1C2D490(&UserEventExpeditionMaster___c_TypeInfo);
    byte_4C280A8 = 1;
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
    _9__3_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v6, Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, 0);
    static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__o *)_9__3_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_UserEventExpeditionEntity__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v10,
                                                                           (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
}


// local variable allocation has failed, the output may be wrong!
ExpeditionInfo_o *UserEventExpeditionMaster__GetExpeditionInfo(
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
  __int64 v12; // x2
  Il2CppObject *v13; // x25
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v16; // w10

  if ( (byte_4C280A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C280A9 = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (ExpeditionInfo_o *)this->fields.list;
      if ( !result )
        goto LABEL_27;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)result,
               v10,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
      if ( Item )
      {
        v13 = Item;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        result = (ExpeditionInfo_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (ExpeditionInfo_o *)NetworkManager_TypeInfo;
        }
        if ( *(Il2CppClass **)(*(_QWORD *)&result[5].fields.startedAt + 64LL) == v13[1].klass
          && LODWORD(v13[1].monitor) == eventId )
        {
          break;
        }
      }
      if ( v9 == ++v10 )
        return 0;
    }
    klass = v13[2].klass;
    if ( !klass )
LABEL_27:
      sub_1C2D6EC(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( namespaze == v16 )
          sub_1C2D6F4(result, *(_QWORD *)&eventId, v12);
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v16);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx == idx )
          return result;
        if ( namespaze == ++v16 )
          return 0;
      }
      goto LABEL_27;
    }
  }
  return 0;
}


bool UserEventExpeditionMaster__TryGetEntity(
        UserEventExpeditionMaster_o *this,
        UserEventExpeditionEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C280A7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
    byte_4C280A7 = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C280AB & 1) == 0 )
  {
    sub_1C2D490(&UserEventExpeditionMaster___c_TypeInfo);
    byte_4C280AB = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(UserEventExpeditionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventExpeditionMaster___c_TypeInfo->static_fields->__9 = (struct UserEventExpeditionMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserEventExpeditionMaster___c___ctor(UserEventExpeditionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserEventExpeditionEntity_o *UserEventExpeditionMaster___c___GetEntityList_b__3_0(
        UserEventExpeditionMaster___c_o *this,
        UserEventExpeditionEntity_o *data,
        const MethodInfo *method)
{
  return data;
}