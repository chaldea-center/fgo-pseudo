void __fastcall UserEventCooltimeRewardMaster___ctor(UserEventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E39 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__,
      method,
      v2);
    byte_4B16E39 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    424,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  UserEventCooltimeRewardEntity_o *v14; // x23
  int32_t v15; // w24
  UserEventCooltimeRewardEntity_o *v16; // x25
  __int64 methodPtr_low; // x10
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0

  if ( (byte_4B16E3D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&spotId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&UserEventCooltimeRewardEntity_TypeInfo, v9, v10);
    byte_4B16E3D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0LL;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v16 = (UserEventCooltimeRewardEntity_o *)list;
      methodPtr_low = LOBYTE(UserEventCooltimeRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list[1].klass) == eventId && HIDWORD(list[1].klass) == spotId )
      {
        EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                      (UserEventCooltimeRewardEntity_o *)list,
                                      *(const MethodInfo **)&eventId);
        if ( EventCooltimeRewardEntity )
        {
          if ( EventCooltimeRewardEntity__IsOpen(EventCooltimeRewardEntity, 0LL) )
          {
            if ( v14 )
            {
              if ( v14->fields.lv < v16->fields.lv )
                v14 = v16;
            }
            else
            {
              v14 = v16;
            }
          }
        }
      }
      if ( v13 == ++v15 )
        return v14;
    }
LABEL_23:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
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

  if ( (byte_4B16E3A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16E3A = 1;
  }
  PK = (Il2CppObject *)UserEventCooltimeRewardEntity__CreatePK(userId, eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (UserEventCooltimeRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x21
  int64_t v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B16E3C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&UserEventCooltimeRewardEntity_TypeInfo, v14, v15);
    byte_4B16E3C = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = (int64_t)list;
      methodPtr_low = LOBYTE(UserEventCooltimeRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list[1].klass) == eventId )
      {
        if ( !v16 )
          break;
        items = v16->fields._items;
        v30 = Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v17;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v17, v22, v23, v24, v25, v26, v27);
        }
      }
      if ( v20 == ++v21 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v16;
    }
LABEL_18:
    sub_1BCAA3C(list, v17);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v17; // x22
  int64_t v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16E3E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&spotId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&UserEventCooltimeRewardEntity_TypeInfo, v15, v16);
    byte_4B16E3E = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&spotId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = (int64_t)list;
        methodPtr_low = LOBYTE(UserEventCooltimeRewardEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventCooltimeRewardEntity_TypeInfo
          && LODWORD(list[1].klass) == eventId
          && HIDWORD(list[1].klass) == spotId )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v31 = Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v18;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v18, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v17;
    }
LABEL_19:
    sub_1BCAA3C(list, v18);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetMaxLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventIdAndSpotId; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  int size; // w8
  System_Collections_Generic_List_object__o *v22; // x19
  UserEventCooltimeRewardMaster___c_c *v23; // x0
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v25; // x21
  struct UserEventCooltimeRewardMaster___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B16E3F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserEventCooltimeRewardEntity__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&spotId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__, v13, v14);
    sub_1BCA7E0(&UserEventCooltimeRewardMaster___c_TypeInfo, v15, v16);
    byte_4B16E3F = 1;
  }
  EntityListByEventIdAndSpotId = UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
                                   this,
                                   eventId,
                                   spotId,
                                   method);
  if ( !EntityListByEventIdAndSpotId )
    sub_1BCAA3C(0LL, v18);
  size = EntityListByEventIdAndSpotId->fields._size;
  v22 = (System_Collections_Generic_List_object__o *)EntityListByEventIdAndSpotId;
  if ( size < 1 )
    return 0LL;
  if ( size != 1 )
  {
    v23 = UserEventCooltimeRewardMaster___c_TypeInfo;
    if ( !UserEventCooltimeRewardMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventCooltimeRewardMaster___c_TypeInfo, v18);
      v23 = UserEventCooltimeRewardMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v23->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23, v18);
        v23 = UserEventCooltimeRewardMaster___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                            System_Comparison_UserEventCooltimeRewardEntity__TypeInfo,
                                            v18,
                                            v19,
                                            v20);
      System_Comparison_object____ctor(
        _9__6_0,
        v25,
        Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__,
        0LL);
      static_fields = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_UserEventCooltimeRewardEntity__o *)_9__6_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__6_0,
        (int64_t)_9__6_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      v22,
      _9__6_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__);
  }
  return (UserEventCooltimeRewardEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v22,
                                              0,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Item__);
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

  if ( (byte_4B16E3B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16E3B = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__);
}


void __fastcall UserEventCooltimeRewardMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16E40 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventCooltimeRewardMaster___c_TypeInfo, v1, v2);
    byte_4B16E40 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserEventCooltimeRewardMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserEventCooltimeRewardMaster___c_TypeInfo->static_fields->__9 = (struct UserEventCooltimeRewardMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserEventCooltimeRewardMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.lv - a->fields.lv;
}