void UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59716A9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
    byte_59716A9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    387,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
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
  Il2CppObject *v10; // x25
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v14; // w26
  __int64 v15; // x20
  int64_t v16; // x21
  System_String_o *RestTime; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_59716AE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_13995/*"TIME_REST_TIMEOVER"*/);
    byte_59716AE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
      if ( Item )
      {
        v10 = Item;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( list[7].fields.items[4].klass == (System_Collections_Generic_IList_T__c *)v10[1].klass
          && LODWORD(v10[1].monitor) == eventId )
        {
          break;
        }
      }
      if ( Count == ++v8 )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v7;
    }
    klass = v10[2].klass;
    if ( !klass )
LABEL_35:
      sub_2213CDC(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= namespaze )
          sub_2213CE4(list);
        v15 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v14);
        if ( !v15 )
          goto LABEL_35;
        if ( *(_DWORD *)(v15 + 20) )
        {
          v16 = *(unsigned int *)(v15 + 28);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&eventId);
          RestTime = LocalizationManager__GetRestTime(v16, 0);
          list = (System_Collections_ObjectModel_Collection_T__o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_13995/*"TIME_REST_TIMEOVER"*/,
                                                                     0);
          if ( !RestTime )
            goto LABEL_35;
          list = (System_Collections_ObjectModel_Collection_T__o *)System_String__Equals_75686512(
                                                                     RestTime,
                                                                     (System_String_o *)list,
                                                                     0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_35;
            items = v7->fields._items;
            v25 = Method_System_Collections_Generic_List_ExpeditionInfo__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_35;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v15,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v15;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), v15, v18, v19, v20, v21, v22, v23);
            }
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v14 >= namespaze )
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

  if ( (byte_59716AA & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
    byte_59716AA = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3F157EC *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
{
  UserEventExpeditionMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct UserEventExpeditionMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_59716AC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_UserEventExpeditionEntity__UserEventExpeditionEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
    sub_2213A60(&System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__TypeInfo);
    sub_2213A60(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__);
    sub_2213A60(&UserEventExpeditionMaster___c_TypeInfo);
    byte_59716AC = 1;
  }
  v3 = UserEventExpeditionMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&UserEventExpeditionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEventExpeditionMaster___c_TypeInfo, method);
    v3 = UserEventExpeditionMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__3_0 = (System_Func_object__object__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v7, Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, 0);
    v8 = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    v8->__9__3_0 = (struct System_Func_UserEventExpeditionEntity__UserEventExpeditionEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__3_0, (int32_t)_9__3_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_UserEventExpeditionEntity__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v15,
                                                                           (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
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
  Il2CppObject *v12; // x25
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v15; // w11

  if ( (byte_59716AD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59716AD = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserEventExpeditionEntity__get_Item__);
      if ( Item )
      {
        v12 = Item;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        result = (ExpeditionInfo_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          result = (ExpeditionInfo_o *)NetworkManager_TypeInfo;
        }
        if ( *(Il2CppClass **)(*(_QWORD *)&result[5].fields.startedAt + 64LL) == v12[1].klass
          && LODWORD(v12[1].monitor) == eventId )
        {
          break;
        }
      }
      if ( v9 == ++v10 )
        return 0;
    }
    klass = v12[2].klass;
    if ( !klass )
LABEL_27:
      sub_2213CDC(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( namespaze == v15 )
          sub_2213CE4(result);
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v15);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx == idx )
          return result;
        if ( (namespaze & ~(namespaze >> 31)) == ++v15 )
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

  if ( (byte_59716AB & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
    byte_59716AB = 1;
  }
  PK = (Il2CppObject *)UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59716AF & 1) == 0 )
  {
    sub_2213A60(&UserEventExpeditionMaster___c_TypeInfo);
    byte_59716AF = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserEventExpeditionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventExpeditionMaster___c_TypeInfo->static_fields->__9 = (struct UserEventExpeditionMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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