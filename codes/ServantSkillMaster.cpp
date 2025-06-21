void __fastcall ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1CF29 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo, v4);
    byte_4B1CF29 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    12,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
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

  if ( (byte_4B1CF27 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_4B1CF27 = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
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

  if ( (byte_4B1CF28 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__, entity);
    byte_4B1CF28 = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24
  ServantSkillEntity_o *result; // x0

  if ( (byte_4B1CF2C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__, v9);
    byte_4B1CF2C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (ServantSkillEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v13,
                                         (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( result && result->fields.svtId == svtId && result->fields.num == num && result->fields.skillId == skillId )
        return result;
      if ( v12 == ++v13 )
        return 0LL;
    }
LABEL_14:
    sub_1BCB254(list, *(_QWORD *)&svtId);
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
  if ( (byte_4B1CF2F & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1BCAFF8(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId);
    byte_4B1CF2F = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1BCB254(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x23
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w24
  int32_t v18; // w25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B1CF2D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v12);
    byte_4B1CF2D = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( list )
      {
        v14 = list;
        if ( LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == num
          && HIDWORD(list[1].klass) == skillId )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v14, v19, v20);
          }
        }
      }
      if ( v17 == ++v18 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v13;
    }
LABEL_18:
    sub_1BCB254(list, v14);
  }
  return (System_Collections_Generic_List_ServantSkillEntity__o *)v13;
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
  if ( (byte_4B1CF30 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1BCAFF8(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId);
    byte_4B1CF30 = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_13;
  PriorityKey = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                  PriorityKey,
                                  &value,
                                  (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)PriorityKey & 1) != 0 )
  {
    if ( !value )
      goto LABEL_13;
    if ( !LODWORD(value[1].monitor) )
      goto LABEL_14;
    PriorityKey = (Il2CppObject *)value[2].klass;
    if ( !PriorityKey )
LABEL_13:
      sub_1BCB254(PriorityKey, v8);
    PriorityKey = (Il2CppObject *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)PriorityKey, 0, v9);
    if ( ((unsigned __int8)PriorityKey & 1) != 0 )
    {
      if ( value )
      {
        if ( LODWORD(value[1].monitor) )
          return (ServantSkillEntity_o *)value[2].klass;
LABEL_14:
        sub_1BCB25C(PriorityKey, v8, v9);
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
  if ( (byte_4B1CF2A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, *(_QWORD *)&svtId);
    byte_4B1CF2A = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62488672(v4, (System_String_o *)StringLiteral_1448/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getServantSkillList(
        ServantSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  v3 = svtId;
  if ( (byte_4B1CF2E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v9);
    byte_4B1CF2E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v17 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v19[4] = *(Il2CppClass **)&svtId;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), svtId, v14, v15);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(list, *(_QWORD *)&svtId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v12,
                                       (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
    sub_1BCB25C(EntityListFromIdNum, v18, v19);
  while ( 1 )
  {
    v23 = &v21->obj.klass + v22;
    v24 = (ServantSkillEntity_o *)v23[4];
    if ( !v24 )
      sub_1BCB254(EntityListFromIdNum, v18);
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
  BalanceConfig_c *v15; // x0
  ServantSkillEntity_array *v16; // x27
  signed __int64 v17; // x19
  CGThumbnailListItem_o *i; // x20
  BalanceConfig_c *v19; // x0
  signed __int64 v20; // x29
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  ServantSkillEntity_o *v25; // x19
  unsigned __int64 v26; // x29
  __int64 v28; // x0
  const MethodInfo *v29; // [xsp+18h] [xbp-78h]
  int64_t v32; // [xsp+28h] [xbp-68h]

  if ( (byte_4B1CF31 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&ServantSkillEntity___TypeInfo, v14);
    byte_4B1CF31 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantSkillEntity_array *)sub_1BCB0A0(
                                      ServantSkillEntity___TypeInfo,
                                      (unsigned int)v15->static_fields->SvtEquipSkillListMax);
  v17 = 0LL;
  for ( i = (CGThumbnailListItem_o *)v16->m_Items; ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    if ( v17 >= v19->static_fields->SvtEquipSkillListMax )
      break;
    v20 = v17 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  this,
                  svtId,
                  (int)v17 + 1,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  beforeClearQuestId,
                  -1,
                  v32,
                  0,
                  v29);
    if ( !v16 )
      sub_1BCB254(UseEntity, v22);
    v25 = UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_1BCB134(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v28 = sub_1BCB278(0LL);
        sub_1BCB120(v28, 0LL);
      }
    }
    v26 = v20 - 1;
    if ( v26 >= v16->max_length )
      sub_1BCB25C(UseEntity, v22, v23);
    i->klass = (CGThumbnailListItem_c *)v25;
    sub_1BCAF9C(i, (int32_t)v25, v23, v24);
    v17 = v26 + 1;
  }
  return v16;
}


bool __fastcall ServantSkillMaster__preProcess(ServantSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x23
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_List_object__o *v52; // x24
  System_Collections_Generic_List_object__o *v53; // x0
  Il2CppClass *v54; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  void **v57; // x8
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  _BOOL8 v62; // x0
  __int64 v63; // x1
  ServantSkillMaster___c_c *v64; // x8
  Il2CppObject *v65; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v68; // x24
  struct ServantSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Collections_Generic_Dictionary_object__object__o *v72; // x23
  System_Object_array *v73; // x0
  __int64 v74; // x1
  int32_t monitor; // w2
  int v76; // w8
  ServantSkillMaster_o *v78; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B1CF2B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__GetEnumerator__, method);
    sub_1BCAFF8(&System_Comparison_ServantSkillEntity__TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__, v10);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo, v11);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__,
      v12);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__,
      v13);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__,
      v14);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v15);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo, v16);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v24);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v25);
    sub_1BCAFF8(&ServantSkillEntity_TypeInfo, v26);
    sub_1BCAFF8(&Method_ServantSkillMaster___c__preProcess_b__5_0__, v27);
    sub_1BCAFF8(&ServantSkillMaster___c_TypeInfo, v28);
    byte_4B1CF2B = 1;
  }
  value = 0LL;
  memset(&v80, 0, sizeof(v80));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v78 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_17;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_17:
      v40 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v44 = (Il2CppObject *)v41;
    if ( !v41 )
      sub_1BCB254(0LL, v42);
    methodPtr_low = LOBYTE(ServantSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantSkillEntity_TypeInfo )
    {
      sub_1BCB514(v41);
LABEL_51:
      sub_1BCB254(v53, v49);
    }
    PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(
                                    (ServantSkillMaster_o *)v41,
                                    *(_DWORD *)(v41 + 16),
                                    *(_DWORD *)(v41 + 20),
                                    v43);
    if ( !v30 )
      sub_1BCB254(PriorityKey, v47);
    v48 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v30,
            PriorityKey,
            &value,
            (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v52 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (Il2CppObject *)v52;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v30,
        v48,
        (Il2CppObject *)v52,
        (const MethodInfo_3385D64 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    v53 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v54 = value[1].klass;
    v55 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v54 )
      sub_1BCB254(v53, v49);
    size = v53->fields._size;
    if ( (unsigned int)size >= LODWORD(v54->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v53,
        v44,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->_1.image + size;
      v53->fields._size = size + 1;
      v57[4] = v44;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v44, v50, v51);
    }
  }
  v58 = Enumerator->klass;
  v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_34;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_34:
    v61 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v61 + 8));
  if ( !v30 )
LABEL_57:
    sub_1BCB254(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v79,
    v30,
    (const MethodInfo_33861A8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v80 = v79;
  while ( 1 )
  {
    v62 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v80,
            (const MethodInfo_348120C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__);
    if ( !v62 )
      break;
    v64 = ServantSkillMaster___c_TypeInfo;
    key = v80.fields._current.fields.key;
    v65 = v80.fields._current.fields.value;
    if ( !ServantSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo);
      v64 = ServantSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v64->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = ServantSkillMaster___c_TypeInfo;
      }
      v68 = (Il2CppObject *)v64->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v68, Method_ServantSkillMaster___c__preProcess_b__5_0__, 0LL);
      static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v70, v71);
    }
    if ( !v65 )
      sub_1BCB254(v62, v63);
    System_Collections_Generic_List_object___Sort_57390740(
      (System_Collections_Generic_List_object__o *)v65,
      _9__5_0,
      (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v72 = (System_Collections_Generic_Dictionary_object__object__o *)v78->fields.listCache;
    v73 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v65,
            (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v72 )
      sub_1BCB254(v73, v74);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v72,
      key,
      &v73->obj,
      (const MethodInfo_3385D64 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    monitor = (int32_t)v65[1].monitor;
    v76 = HIDWORD(v65[1].monitor) + 1;
    LODWORD(v65[1].monitor) = 0;
    HIDWORD(v65[1].monitor) = v76;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v65[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v80,
    (const MethodInfo_348132C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v30,
    (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CF32 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantSkillMaster___c_TypeInfo, v1);
    byte_4B1CF32 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantSkillMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}