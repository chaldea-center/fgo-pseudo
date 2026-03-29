void ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3143E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
    byte_4D3143E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    12,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *ServantSkillMaster__GetEntity(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D3143C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
    byte_4D3143C = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_34681D4 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantSkillMaster__TryGetEntity(
        ServantSkillMaster_o *this,
        ServantSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D3143D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
    byte_4D3143D = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *ServantSkillMaster__getEntityFromSkillId(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  ServantSkillEntity_o *result; // x0

  if ( (byte_4D31441 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
    byte_4D31441 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (ServantSkillEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v12,
                                         (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( result && result->fields.svtId == svtId && result->fields.num == num && result->fields.skillId == skillId )
        return result;
      if ( v11 == ++v12 )
        return 0;
    }
LABEL_14:
    sub_1C93D2C(list, *(_QWORD *)&svtId);
  }
  return 0;
}


ServantSkillEntity_array *ServantSkillMaster__getEntityListFromIdNum(
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
  if ( (byte_4D31444 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
    byte_4D31444 = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1C93D2C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
  {
    return (ServantSkillEntity_array *)value;
  }
  else
  {
    return 0;
  }
}


System_Collections_Generic_List_ServantSkillEntity__o *ServantSkillMaster__getEntityListFromSkillId(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4D31442 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    byte_4D31442 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( list )
      {
        v10 = list;
        if ( LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == num
          && HIDWORD(list[1].klass) == skillId )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v10;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v10, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v9;
    }
LABEL_18:
    sub_1C93D2C(list, v10);
  }
  return (System_Collections_Generic_List_ServantSkillEntity__o *)v9;
}


ServantSkillEntity_o *ServantSkillMaster__getLowPriorityEntity(
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
  if ( (byte_4D31445 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
    byte_4D31445 = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_13;
  PriorityKey = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                  PriorityKey,
                                  &value,
                                  (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)PriorityKey & 1) != 0 )
  {
    if ( !value )
      goto LABEL_13;
    if ( !LODWORD(value[1].monitor) )
      goto LABEL_14;
    PriorityKey = (Il2CppObject *)value[2].klass;
    if ( !PriorityKey )
LABEL_13:
      sub_1C93D2C(PriorityKey, v8);
    PriorityKey = (Il2CppObject *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)PriorityKey, 0, v9);
    if ( ((unsigned __int8)PriorityKey & 1) != 0 )
    {
      if ( value )
      {
        if ( LODWORD(value[1].monitor) )
          return (ServantSkillEntity_o *)value[2].klass;
LABEL_14:
        sub_1C93D34(PriorityKey);
      }
      goto LABEL_13;
    }
  }
  return 0;
}


System_String_o *ServantSkillMaster__getPriorityKey(
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
  if ( (byte_4D3143F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D3143F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_64463988(v4, (System_String_o *)StringLiteral_1451/*":"*/, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *ServantSkillMaster__getServantSkillList(
        ServantSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = svtId;
  if ( (byte_4D31443 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    byte_4D31443 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&svtId;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), svtId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C93D2C(list, *(_QWORD *)&svtId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


ServantSkillEntity_o *ServantSkillMaster__getUseEntity(
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
  il2cpp_array_size_t max_length; // x8
  ServantSkillEntity_array *v21; // x24
  unsigned int v22; // w29
  Il2CppClass **v23; // x8
  ServantSkillEntity_o *v24; // x28
  const MethodInfo *v26; // [xsp+0h] [xbp-70h]

  EntityListFromIdNum = ServantSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( !EntityListFromIdNum )
    return 0;
  max_length = EntityListFromIdNum->max_length;
  v21 = EntityListFromIdNum;
  v22 = max_length - 1;
  if ( (int)max_length - 1 < 0 )
    return 0;
  if ( v22 >= (unsigned int)max_length )
LABEL_9:
    sub_1C93D34(EntityListFromIdNum);
  while ( 1 )
  {
    v23 = &v21->obj.klass + v22;
    v24 = (ServantSkillEntity_o *)v23[4];
    if ( !v24 )
      sub_1C93D2C(EntityListFromIdNum, v18);
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
      return 0;
    if ( v22 >= LODWORD(v21->max_length) )
      goto LABEL_9;
  }
}


ServantSkillEntity_array *ServantSkillMaster__getUseEntityList(
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
  BalanceConfig_c *v14; // x0
  unsigned int *v15; // x27
  signed __int64 v16; // x19
  GrandQuestFolderBoardItem_o *i; // x20
  BalanceConfig_c *v18; // x0
  signed __int64 v19; // x29
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  ServantSkillEntity_o *v28; // x19
  unsigned __int64 v29; // x29
  __int64 v31; // x0
  const MethodInfo *v32; // [xsp+18h] [xbp-78h]
  int64_t v35; // [xsp+28h] [xbp-68h]

  if ( (byte_4D31446 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&ServantSkillEntity___TypeInfo);
    byte_4D31446 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (unsigned int *)sub_1C93B7C(
                          ServantSkillEntity___TypeInfo,
                          (unsigned int)v14->static_fields->SvtEquipSkillListMax);
  v16 = 0;
  for ( i = (GrandQuestFolderBoardItem_o *)(v15 + 8); ; i = (GrandQuestFolderBoardItem_o *)((char *)i + 8) )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( v16 >= v18->static_fields->SvtEquipSkillListMax )
      break;
    v19 = v16 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  this,
                  svtId,
                  (int)v16 + 1,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  beforeClearQuestId,
                  -1,
                  v35,
                  0,
                  v32);
    if ( !v15 )
      sub_1C93D2C(UseEntity, v21);
    v28 = UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_1C93C10(UseEntity, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
      if ( !UseEntity )
      {
        v31 = sub_1C93D50(0);
        sub_1C93BFC(v31, 0);
      }
    }
    v29 = v19 - 1;
    if ( v29 >= v15[6] )
      sub_1C93D34(UseEntity);
    i->klass = (GrandQuestFolderBoardItem_c *)v28;
    sub_1C93A78(i, (int32_t)v28, v22, v23, v24, v25, v26, v27);
    v16 = v29 + 1;
  }
  return (ServantSkillEntity_array *)v15;
}


bool ServantSkillMaster__preProcess(ServantSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x24
  System_Collections_Generic_List_object__o *v31; // x0
  Il2CppClass *v32; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  void **v35; // x8
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  _BOOL8 v40; // x0
  __int64 v41; // x1
  ServantSkillMaster___c_c *v42; // x8
  Il2CppObject *v43; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v46; // x24
  struct ServantSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_Collections_Generic_Dictionary_object__object__o *v54; // x23
  System_Object_array *v55; // x0
  __int64 v56; // x1
  int32_t monitor; // w2
  int v58; // w8
  ServantSkillMaster_o *v60; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4D31440 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__GetEnumerator__);
    sub_1C93AD4(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_1C93AD4(&ServantSkillEntity_TypeInfo);
    sub_1C93AD4(&Method_ServantSkillMaster___c__preProcess_b__5_0__);
    sub_1C93AD4(&ServantSkillMaster___c_TypeInfo);
    byte_4D31440 = 1;
  }
  value = 0;
  memset(&v62, 0, sizeof(v62));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_352ED30 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v60 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_17:
      v14 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1C93D2C(0, v16);
    naturalAligment = ServantSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)naturalAligment
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * naturalAligment - 8) != ServantSkillEntity_TypeInfo )
    {
      sub_1C940C8(v15);
LABEL_51:
      sub_1C93D2C(v31, v23);
    }
    PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(
                                    (ServantSkillMaster_o *)v15,
                                    *(_DWORD *)(v15 + 16),
                                    *(_DWORD *)(v15 + 20),
                                    v17);
    if ( !v4 )
      sub_1C93D2C(PriorityKey, v21);
    v22 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v30 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v30,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (Il2CppObject *)v30;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v30,
        (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    v31 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v32 = value[1].klass;
    v33 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v32 )
      sub_1C93D2C(v31, v23);
    size = v31->fields._size;
    if ( (unsigned int)size >= LODWORD(v32->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        v18,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->_1.image + size;
      v31->fields._size = size + 1;
      v35[4] = v18;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v18, v24, v25, v26, v27, v28, v29);
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_34;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_34:
    v39 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v39 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C93D2C(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v61,
    v4,
    (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v40 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v62,
            (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__);
    if ( !v40 )
      break;
    v42 = ServantSkillMaster___c_TypeInfo;
    key = v62.fields._current.fields.key;
    v43 = v62.fields._current.fields.value;
    if ( !ServantSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo);
      v42 = ServantSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v42->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = ServantSkillMaster___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v42->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v46, Method_ServantSkillMaster___c__preProcess_b__5_0__, 0);
      static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
        (int32_t)_9__5_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    if ( !v43 )
      sub_1C93D2C(v40, v41);
    System_Collections_Generic_List_object___Sort_59225184(
      (System_Collections_Generic_List_object__o *)v43,
      _9__5_0,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v54 = (System_Collections_Generic_Dictionary_object__object__o *)v60->fields.listCache;
    v55 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v43,
            (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v54 )
      sub_1C93D2C(v55, v56);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v54,
      key,
      &v55->obj,
      (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    monitor = (int32_t)v43[1].monitor;
    v58 = HIDWORD(v43[1].monitor) + 1;
    LODWORD(v43[1].monitor) = 0;
    HIDWORD(v43[1].monitor) = v58;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v43[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v62,
    (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_352ED30 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void ServantSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31447 & 1) == 0 )
  {
    sub_1C93AD4(&ServantSkillMaster___c_TypeInfo);
    byte_4D31447 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantSkillMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantSkillMaster___c___ctor(ServantSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantSkillMaster___c___preProcess_b__5_0(
        ServantSkillMaster___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C93D2C(this, a);
  return a->fields.priority - b->fields.priority;
}