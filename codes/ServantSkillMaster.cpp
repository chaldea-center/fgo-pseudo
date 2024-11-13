void __fastcall ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B16B03 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo, v7, v8);
    byte_4B16B03 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    12,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall ServantSkillMaster__GetEntity(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16B01 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    byte_4B16B01 = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillMaster__TryGetEntity(
        ServantSkillMaster_o *this,
        ServantSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16B02 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16B02 = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall ServantSkillMaster__getEntityFromSkillId(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  ServantSkillEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16B06 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&ServantSkillEntity_TypeInfo, v11, v12);
    byte_4B16B06 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (ServantSkillEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v16,
                                         (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(ServantSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantSkillEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSkillEntity_TypeInfo
          && result->fields.svtId == svtId
          && result->fields.num == num
          && result->fields.skillId == skillId )
        {
          return result;
        }
      }
      if ( v15 == ++v16 )
        return 0LL;
    }
LABEL_16:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getEntityListFromIdNum(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantSkillMaster_o *v6; // x20
  Il2CppObject *PriorityKey; // x0
  __int64 v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4B16B09 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId,
                                     *(_QWORD *)&num);
    byte_4B16B09 = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1BCAA3C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
  {
    return (ServantSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantSkillEntity__o *__fastcall ServantSkillMaster__getEntityListFromSkillId(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v19; // x23
  int64_t v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v23; // w24
  int32_t v24; // w25
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4B16B07 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantSkillEntity_TypeInfo, v17, v18);
    byte_4B16B07 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&num,
                                                       *(_QWORD *)&skillId);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v24,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = (int64_t)list;
        methodPtr_low = LOBYTE(ServantSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == num
          && HIDWORD(list[1].klass) == skillId )
        {
          if ( !v19 )
            break;
          items = v19->fields._items;
          v33 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v19->fields._version;
          if ( !items )
            break;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v20;
            sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), v20, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      if ( v23 == ++v24 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v19;
    }
LABEL_20:
    sub_1BCAA3C(list, v20);
  }
  return (System_Collections_Generic_List_ServantSkillEntity__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall ServantSkillMaster__getLowPriorityEntity(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantSkillMaster_o *v6; // x20
  Il2CppObject *PriorityKey; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4B16B0A & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId,
                                     *(_QWORD *)&num);
    byte_4B16B0A = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_13;
  PriorityKey = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                  PriorityKey,
                                  &value,
                                  (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)PriorityKey & 1) != 0 )
  {
    if ( !value )
      goto LABEL_13;
    if ( !LODWORD(value[1].monitor) )
      goto LABEL_14;
    PriorityKey = (Il2CppObject *)value[2].klass;
    if ( !PriorityKey )
LABEL_13:
      sub_1BCAA3C(PriorityKey, v8);
    PriorityKey = (Il2CppObject *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)PriorityKey, 0, v9);
    if ( ((unsigned __int8)PriorityKey & 1) != 0 )
    {
      if ( value )
      {
        if ( LODWORD(value[1].monitor) )
          return (ServantSkillEntity_o *)value[2].klass;
LABEL_14:
        sub_1BCAA44(PriorityKey, v8);
      }
      goto LABEL_13;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSkillMaster__getPriorityKey(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  v8 = svtId;
  if ( (byte_4B16B04 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, *(_QWORD *)&svtId, *(_QWORD *)&num);
    byte_4B16B04 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62412480(v4, (System_String_o *)StringLiteral_1541/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getServantSkillList(
        ServantSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  v3 = svtId;
  if ( (byte_4B16B08 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantSkillEntity_TypeInfo, v15, v16);
    byte_4B16B08 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        methodPtr_low = LOBYTE(ServantSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v32 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v34[4] = *(Il2CppClass **)&svtId;
            sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), *(int64_t *)&svtId, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
LABEL_17:
  if ( !v22 )
    goto LABEL_19;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v22,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


ServantSkillEntity_o *__fastcall ServantSkillMaster__getUseEntity(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t specificLimitCount,
        int64_t userSvtId,
        bool finishEvent,
        const MethodInfo *method)
{
  ServantSkillEntity_array *EntityListFromIdNum; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x8
  ServantSkillEntity_array *v21; // x24
  unsigned int v22; // w29
  Il2CppClass **v23; // x8
  ServantSkillEntity_o *v24; // x28
  const MethodInfo *v26; // [xsp+0h] [xbp-70h]

  EntityListFromIdNum = ServantSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( !EntityListFromIdNum )
    return 0LL;
  v20 = *(_QWORD *)&EntityListFromIdNum->max_length;
  v21 = EntityListFromIdNum;
  v22 = v20 - 1;
  if ( (int)v20 - 1 < 0 )
    return 0LL;
  if ( v22 >= (unsigned int)v20 )
LABEL_9:
    sub_1BCAA44(EntityListFromIdNum, v18);
  while ( 1 )
  {
    v23 = &v21->obj.klass + v22;
    v24 = (ServantSkillEntity_o *)v23[4];
    if ( !v24 )
      sub_1BCAA3C(EntityListFromIdNum, v18);
    EntityListFromIdNum = (ServantSkillEntity_array *)ServantSkillEntity__isEnable(
                                                        (ServantSkillEntity_o *)v23[4],
                                                        finishEvent,
                                                        v19);
    if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
    {
      EntityListFromIdNum = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                          v24,
                                                          userId,
                                                          svtLv,
                                                          limitCount,
                                                          dispLimitCount,
                                                          beforeClearQuestId,
                                                          specificLimitCount,
                                                          userSvtId,
                                                          v26);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v24;
    }
    if ( (--v22 & 0x80000000) != 0 )
      return 0LL;
    if ( v22 >= v21->max_length )
      goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getUseEntityList(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x2
  BalanceConfig_c *v16; // x0
  __int64 v17; // x1
  ServantSkillEntity_array *v18; // x27
  signed __int64 v19; // x19
  PartyOrganizationUtility_o *i; // x20
  BalanceConfig_c *v21; // x0
  signed __int64 v22; // x29
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x19
  unsigned __int64 v32; // x29
  __int64 v34; // x0
  const MethodInfo *v35; // [xsp+18h] [xbp-78h]
  int64_t v38; // [xsp+28h] [xbp-68h]

  if ( (byte_4B16B0B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, userId);
    sub_1BCA7E0(&ServantSkillEntity___TypeInfo, v14, v15);
    byte_4B16B0B = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    v16 = BalanceConfig_TypeInfo;
  }
  v18 = (ServantSkillEntity_array *)sub_1BCA888(
                                      ServantSkillEntity___TypeInfo,
                                      (unsigned int)v16->static_fields->SvtEquipSkillListMax);
  v19 = 0LL;
  for ( i = (PartyOrganizationUtility_o *)v18->m_Items; ; i = (PartyOrganizationUtility_o *)((char *)i + 8) )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( v19 >= v21->static_fields->SvtEquipSkillListMax )
      break;
    v22 = v19 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  this,
                  svtId,
                  (int)v19 + 1,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  beforeClearQuestId,
                  -1,
                  v38,
                  0,
                  v35);
    if ( !v18 )
      sub_1BCAA3C(UseEntity, v24);
    v31 = (int64_t)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_1BCA91C(UseEntity, v18->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v34 = sub_1BCAA60(0LL);
        sub_1BCA908(v34, 0LL);
      }
    }
    v32 = v22 - 1;
    if ( v32 >= v18->max_length )
      sub_1BCAA44(UseEntity, v24);
    i->klass = (PartyOrganizationUtility_c *)v31;
    sub_1BCA784(i, v31, v25, v26, v27, v28, v29, v30);
    v19 = v32 + 1;
  }
  return v18;
}


bool __fastcall ServantSkillMaster__preProcess(ServantSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_Dictionary_object__object__o *v60; // x20
  __int64 v61; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v77; // x1
  Il2CppObject *v78; // x23
  __int64 v79; // x1
  int64_t v80; // x2
  __int64 v81; // x3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_List_object__o *v86; // x24
  System_Collections_Generic_List_object__o *v87; // x0
  Il2CppClass *v88; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  void **v91; // x8
  System_Collections_Generic_IEnumerator_T__c *v92; // x8
  __int64 v93; // x9
  int32_t *v94; // x10
  __int64 v95; // x0
  _BOOL8 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  ServantSkillMaster___c_c *v100; // x8
  Il2CppObject *v101; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v104; // x24
  struct ServantSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  System_Collections_Generic_Dictionary_object__object__o *v112; // x23
  System_Object_array *v113; // x0
  __int64 v114; // x1
  int32_t monitor; // w2
  int v116; // w8
  ServantSkillMaster_o *v118; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v119; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v120; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B16B05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_Comparison_ServantSkillEntity__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo, v20, v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__,
      v26,
      v27);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v48, v49);
    sub_1BCA7E0(&ServantSkillEntity_TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_ServantSkillMaster___c__preProcess_b__5_0__, v52, v53);
    sub_1BCA7E0(&ServantSkillMaster___c_TypeInfo, v54, v55);
    byte_4B16B05 = 1;
  }
  value = 0LL;
  memset(&v120, 0, sizeof(v120));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v60 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo,
                                                                     v57,
                                                                     v58,
                                                                     v59);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v60,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v118 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v61);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v64;
        p_offset += 4;
        if ( !v64 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v67 = Enumerator->klass;
    v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v69 = &v67->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v69 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v68;
        v69 += 4;
        if ( !v68 )
          goto LABEL_17;
      }
      v70 = (__int64)&v67->vtable[*v69].method;
    }
    else
    {
LABEL_17:
      v70 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
            Enumerator,
            *(_QWORD *)(v70 + 8));
    v74 = (Il2CppObject *)v71;
    if ( !v71 )
      sub_1BCAA3C(0LL, v72);
    methodPtr_low = LOBYTE(ServantSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v71 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v71 + 200LL) + 8 * methodPtr_low - 8) != ServantSkillEntity_TypeInfo )
    {
      sub_1BCACFC(v71);
LABEL_51:
      sub_1BCAA3C(v87, v79);
    }
    PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(
                                    (ServantSkillMaster_o *)v71,
                                    *(_DWORD *)(v71 + 16),
                                    *(_DWORD *)(v71 + 20),
                                    v73);
    if ( !v60 )
      sub_1BCAA3C(PriorityKey, v77);
    v78 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v60,
            PriorityKey,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v86 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                           v79,
                                                           v80,
                                                           v81);
      System_Collections_Generic_List_object____ctor(
        v86,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (Il2CppObject *)v86;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v60,
        v78,
        (Il2CppObject *)v86,
        (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    v87 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v88 = value[1].klass;
    v89 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v88 )
      sub_1BCAA3C(v87, v79);
    size = v87->fields._size;
    if ( (unsigned int)size >= LODWORD(v88->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v87,
        v74,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v88->_1.image + size;
      v87->fields._size = size + 1;
      v91[4] = v74;
      sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v74, v80, v81, v82, v83, v84, v85);
    }
  }
  v92 = Enumerator->klass;
  v93 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v94 = &v92->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_34;
    }
    v95 = (__int64)&v92->vtable[*v94].method;
  }
  else
  {
LABEL_34:
    v95 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v95)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v95 + 8));
  if ( !v60 )
LABEL_57:
    sub_1BCAA3C(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v119,
    v60,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v120 = v119;
  while ( 1 )
  {
    v96 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v120,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__);
    if ( !v96 )
      break;
    v100 = ServantSkillMaster___c_TypeInfo;
    key = v120.fields._current.fields.key;
    v101 = v120.fields._current.fields.value;
    if ( !ServantSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo, v97);
      v100 = ServantSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v100->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100, v97);
        v100 = ServantSkillMaster___c_TypeInfo;
      }
      v104 = (Il2CppObject *)v100->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantSkillEntity__TypeInfo, v97, v98, v99);
      System_Comparison_object____ctor(_9__5_0, v104, Method_ServantSkillMaster___c__preProcess_b__5_0__, 0LL);
      static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
    }
    if ( !v101 )
      sub_1BCAA3C(v96, v97);
    System_Collections_Generic_List_object___Sort_56244000(
      (System_Collections_Generic_List_object__o *)v101,
      _9__5_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v112 = (System_Collections_Generic_Dictionary_object__object__o *)v118->fields.listCache;
    v113 = System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)v101,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v112 )
      sub_1BCAA3C(v113, v114);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v112,
      key,
      &v113->obj,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    monitor = (int32_t)v101[1].monitor;
    v116 = HIDWORD(v101[1].monitor) + 1;
    LODWORD(v101[1].monitor) = 0;
    HIDWORD(v101[1].monitor) = v116;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v101[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v120,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v60,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantSkillMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16B0C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSkillMaster___c_TypeInfo, v1, v2);
    byte_4B16B0C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantSkillMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ServantSkillMaster___c___ctor(ServantSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantSkillMaster___c___preProcess_b__5_0(
        ServantSkillMaster___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}