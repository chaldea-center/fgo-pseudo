void __fastcall UserEventCooltimeRewardMaster___ctor(UserEventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02D7D & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__,
      method);
    byte_4B02D7D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    430,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  UserEventCooltimeRewardEntity_o *v11; // x23
  int32_t v12; // w24
  UserEventCooltimeRewardEntity_o *v13; // x25
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0

  if ( (byte_4B02D81 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__, v7);
    byte_4B02D81 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__);
      if ( !list )
        break;
      v13 = (UserEventCooltimeRewardEntity_o *)list;
      if ( LODWORD(list[1].klass) == eventId && HIDWORD(list[1].klass) == spotId )
      {
        EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                      (UserEventCooltimeRewardEntity_o *)list,
                                      *(const MethodInfo **)&eventId);
        if ( EventCooltimeRewardEntity )
        {
          if ( EventCooltimeRewardEntity__IsOpen(EventCooltimeRewardEntity, 0LL) )
          {
            if ( v11 )
            {
              if ( v11->fields.lv < v13->fields.lv )
                v11 = v13;
            }
            else
            {
              v11 = v13;
            }
          }
        }
      }
      if ( v10 == ++v12 )
        return v11;
    }
LABEL_21:
    sub_1BC3264(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetEntity(
        UserEventCooltimeRewardMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02D7E & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__,
      userId);
    byte_4B02D7E = 1;
  }
  PK = (Il2CppObject *)UserEventCooltimeRewardEntity__CreatePK(userId, eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (UserEventCooltimeRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_32B3B28 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B02D80 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo, v8);
    byte_4B02D80 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      if ( LODWORD(list[1].klass) == eventId )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v10;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v10, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v9;
    }
LABEL_16:
    sub_1BC3264(list, v10);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4B02D82 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo, v10);
    byte_4B02D82 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserEventCooltimeRewardEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( LODWORD(list[1].klass) == eventId && HIDWORD(list[1].klass) == spotId )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v12, v17, v18);
          }
        }
      }
      if ( v15 == ++v16 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v11;
    }
LABEL_17:
    sub_1BC3264(list, v12);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetMaxLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventIdAndSpotId; // x0
  __int64 v13; // x1
  int size; // w8
  System_Collections_Generic_List_object__o *v15; // x19
  UserEventCooltimeRewardMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v18; // x21
  struct UserEventCooltimeRewardMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B02D83 & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_UserEventCooltimeRewardEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Item__, v9);
    sub_1BC3008(&Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__, v10);
    sub_1BC3008(&UserEventCooltimeRewardMaster___c_TypeInfo, v11);
    byte_4B02D83 = 1;
  }
  EntityListByEventIdAndSpotId = UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
                                   this,
                                   eventId,
                                   spotId,
                                   method);
  if ( !EntityListByEventIdAndSpotId )
    sub_1BC3264(0LL, v13);
  size = EntityListByEventIdAndSpotId->fields._size;
  v15 = (System_Collections_Generic_List_object__o *)EntityListByEventIdAndSpotId;
  if ( size < 1 )
    return 0LL;
  if ( size != 1 )
  {
    v16 = UserEventCooltimeRewardMaster___c_TypeInfo;
    if ( !UserEventCooltimeRewardMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventCooltimeRewardMaster___c_TypeInfo);
      v16 = UserEventCooltimeRewardMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v16->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = UserEventCooltimeRewardMaster___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_UserEventCooltimeRewardEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__6_0,
        v18,
        Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__,
        0LL);
      static_fields = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_UserEventCooltimeRewardEntity__o *)_9__6_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v20, v21);
    }
    System_Collections_Generic_List_object___Sort_57288964(
      v15,
      _9__6_0,
      (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__);
  }
  return (UserEventCooltimeRewardEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v15,
                                              0,
                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventCooltimeRewardMaster__TryGetEntity(
        UserEventCooltimeRewardMaster_o *this,
        UserEventCooltimeRewardEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B02D7F & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__,
      entity);
    byte_4B02D7F = 1;
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
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__);
}


void __fastcall UserEventCooltimeRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B02D84 & 1) == 0 )
  {
    sub_1BC3008(&UserEventCooltimeRewardMaster___c_TypeInfo, v1);
    byte_4B02D84 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(UserEventCooltimeRewardMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventCooltimeRewardMaster___c_TypeInfo->static_fields->__9 = (struct UserEventCooltimeRewardMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)UserEventCooltimeRewardMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall UserEventCooltimeRewardMaster___c___ctor(
        UserEventCooltimeRewardMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserEventCooltimeRewardMaster___c___GetMaxLevelEntity_b__6_0(
        UserEventCooltimeRewardMaster___c_o *this,
        UserEventCooltimeRewardEntity_o *a,
        UserEventCooltimeRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BC3264(this, a);
  return b->fields.lv - a->fields.lv;
}