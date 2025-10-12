void UserEventCooltimeRewardMaster___ctor(UserEventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38780 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__);
    byte_4C38780 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    430,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__);
}


UserEventCooltimeRewardEntity_o *UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  UserEventCooltimeRewardEntity_o *v10; // x23
  int32_t v11; // w24
  const MethodInfo *v12; // x1
  UserEventCooltimeRewardEntity_o *v13; // x25
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0

  if ( (byte_4C38784 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__);
    byte_4C38784 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__);
      if ( !list )
        break;
      v13 = (UserEventCooltimeRewardEntity_o *)list;
      if ( LODWORD(list[1].klass) == eventId && HIDWORD(list[1].klass) == spotId )
      {
        EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                      (UserEventCooltimeRewardEntity_o *)list,
                                      v12);
        if ( EventCooltimeRewardEntity )
        {
          if ( EventCooltimeRewardEntity__IsOpen(EventCooltimeRewardEntity, 0) )
          {
            if ( v10 )
            {
              if ( v10->fields.lv < v13->fields.lv )
                v10 = v13;
            }
            else
            {
              v10 = v13;
            }
          }
        }
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_21:
    sub_1C32E7C(list);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *UserEventCooltimeRewardMaster__GetEntity(
        UserEventCooltimeRewardMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C38781 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__);
    byte_4C38781 = 1;
  }
  PK = (Il2CppObject *)UserEventCooltimeRewardEntity__CreatePK(userId, eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (UserEventCooltimeRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_339B2F0 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *UserEventCooltimeRewardMaster__GetEntityListByEventId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4C38783 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
    byte_4C38783 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__);
      if ( !list )
        break;
      v12 = list;
      if ( LODWORD(list[1].klass) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v12;
          sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v5;
    }
LABEL_16:
    sub_1C32E7C(list);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v5;
}


System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C38785 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
    byte_4C38785 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__);
      if ( list )
      {
        v14 = list;
        if ( LODWORD(list[1].klass) == eventId && HIDWORD(list[1].klass) == spotId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v14;
            sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
          }
        }
      }
      if ( v10 == ++v11 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v7;
    }
LABEL_17:
    sub_1C32E7C(list);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v7;
}


UserEventCooltimeRewardEntity_o *UserEventCooltimeRewardMaster__GetMaxLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventIdAndSpotId; // x0
  int size; // w8
  System_Collections_Generic_List_object__o *v9; // x19
  UserEventCooltimeRewardMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v12; // x21
  struct UserEventCooltimeRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C38786 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_UserEventCooltimeRewardEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Item__);
    sub_1C32C20(&Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__);
    sub_1C32C20(&UserEventCooltimeRewardMaster___c_TypeInfo);
    byte_4C38786 = 1;
  }
  EntityListByEventIdAndSpotId = UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
                                   this,
                                   eventId,
                                   spotId,
                                   method);
  if ( !EntityListByEventIdAndSpotId )
    sub_1C32E7C(0);
  size = EntityListByEventIdAndSpotId->fields._size;
  v9 = (System_Collections_Generic_List_object__o *)EntityListByEventIdAndSpotId;
  if ( size < 1 )
    return 0;
  if ( size != 1 )
  {
    v10 = UserEventCooltimeRewardMaster___c_TypeInfo;
    if ( !UserEventCooltimeRewardMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventCooltimeRewardMaster___c_TypeInfo);
      v10 = UserEventCooltimeRewardMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v10->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = UserEventCooltimeRewardMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_UserEventCooltimeRewardEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__6_0,
        v12,
        Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__,
        0);
      static_fields = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_UserEventCooltimeRewardEntity__o *)_9__6_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v14, v15);
    }
    System_Collections_Generic_List_object___Sort_58303104(
      v9,
      _9__6_0,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__);
  }
  return (UserEventCooltimeRewardEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v9,
                                              0,
                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
bool UserEventCooltimeRewardMaster__TryGetEntity(
        UserEventCooltimeRewardMaster_o *this,
        UserEventCooltimeRewardEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C38782 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__);
    byte_4C38782 = 1;
  }
  PK = (Il2CppObject *)UserEventCooltimeRewardEntity__CreatePK(
                         userId,
                         eventId,
                         spotId,
                         lv,
                         *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__);
}


void UserEventCooltimeRewardMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38787 & 1) == 0 )
  {
    sub_1C32C20(&UserEventCooltimeRewardMaster___c_TypeInfo);
    byte_4C38787 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(UserEventCooltimeRewardMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventCooltimeRewardMaster___c_TypeInfo->static_fields->__9 = (struct UserEventCooltimeRewardMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UserEventCooltimeRewardMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserEventCooltimeRewardMaster___c___ctor(UserEventCooltimeRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserEventCooltimeRewardMaster___c___GetMaxLevelEntity_b__6_0(
        UserEventCooltimeRewardMaster___c_o *this,
        UserEventCooltimeRewardEntity_o *a,
        UserEventCooltimeRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.lv - a->fields.lv;
}