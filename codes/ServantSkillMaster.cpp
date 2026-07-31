void ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5939144 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
    byte_5939144 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    12,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
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

  if ( (byte_5939142 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
    byte_5939142 = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
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

  if ( (byte_5939143 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
    byte_5939143 = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
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

  if ( (byte_5939147 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
    byte_5939147 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
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
                                         (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( result && result->fields.svtId == svtId && result->fields.num == num && result->fields.skillId == skillId )
        return result;
      if ( v11 == ++v12 )
        return 0;
    }
LABEL_14:
    sub_21FFECC(list, *(_QWORD *)&svtId);
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
  if ( (byte_593914A & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
    byte_593914A = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_21FFECC(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_5939148 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    byte_5939148 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v10;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v10, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v9;
    }
LABEL_18:
    sub_21FFECC(list, v10);
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
  if ( (byte_593914B & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
    byte_593914B = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_13;
  PriorityKey = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                  PriorityKey,
                                  &value,
                                  (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)PriorityKey & 1) != 0 )
  {
    if ( !value )
      goto LABEL_13;
    if ( !LODWORD(value[1].monitor) )
      goto LABEL_14;
    PriorityKey = (Il2CppObject *)value[2].klass;
    if ( !PriorityKey )
LABEL_13:
      sub_21FFECC(PriorityKey, v8);
    PriorityKey = (Il2CppObject *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)PriorityKey, 0, v9);
    if ( ((unsigned __int8)PriorityKey & 1) != 0 )
    {
      if ( value )
      {
        if ( LODWORD(value[1].monitor) )
          return (ServantSkillEntity_o *)value[2].klass;
LABEL_14:
        sub_21FFED4(PriorityKey);
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

  v8 = svtId;
  v7 = num;
  if ( (byte_5939145 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1532/*":"*/);
    byte_5939145 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_75481624(v4, (System_String_o *)StringLiteral_1532/*":"*/, v5, 0);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = svtId;
  if ( (byte_5939149 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    byte_5939149 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&svtId;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), svtId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, *(_QWORD *)&svtId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
  int max_length; // w28
  ServantSkillEntity_array *v21; // x24
  Il2CppClass **v22; // x8
  ServantSkillEntity_o *v23; // x27
  const MethodInfo *v25; // [xsp+0h] [xbp-70h]

  EntityListFromIdNum = ServantSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( !EntityListFromIdNum )
    return 0;
  max_length = EntityListFromIdNum->max_length;
  v21 = EntityListFromIdNum;
  if ( max_length - 1 < 0 )
    return 0;
  while ( 1 )
  {
    if ( (unsigned int)--max_length >= LODWORD(v21->max_length) )
      sub_21FFED4(EntityListFromIdNum);
    v22 = &v21->obj.klass + (unsigned int)max_length;
    v23 = (ServantSkillEntity_o *)v22[4];
    if ( !v23 )
      sub_21FFECC(EntityListFromIdNum, v18);
    EntityListFromIdNum = (ServantSkillEntity_array *)ServantSkillEntity__isEnable(
                                                        (ServantSkillEntity_o *)v22[4],
                                                        finishEvent,
                                                        v19);
    if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
    {
      EntityListFromIdNum = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                          v23,
                                                          userId,
                                                          svtLv,
                                                          limitCount,
                                                          dispLimitCount,
                                                          beforeClearQuestId,
                                                          specificLimitCount,
                                                          userSvtId,
                                                          v25);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        break;
    }
    if ( max_length <= 0 )
      return 0;
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  unsigned int *v16; // x27
  signed __int64 v17; // x19
  MissionNaviTransitionBoardItem_o *i; // x20
  BalanceConfig_c *v19; // x0
  signed __int64 v20; // x29
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  MissionNaviTransitionBoardItem_c *v29; // x19
  __int64 v30; // x1
  unsigned __int64 v31; // x29
  __int64 v33; // x0
  const MethodInfo *v34; // [xsp+18h] [xbp-78h]
  int64_t v37; // [xsp+28h] [xbp-68h]

  if ( (byte_593914C & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&ServantSkillEntity___TypeInfo);
    byte_593914C = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    v14 = BalanceConfig_TypeInfo;
  }
  v16 = (unsigned int *)sub_21FFD10(
                          ServantSkillEntity___TypeInfo,
                          (unsigned int)v14->static_fields->SvtEquipSkillListMax);
  v17 = 0;
  for ( i = (MissionNaviTransitionBoardItem_o *)(v16 + 8); ; i = (MissionNaviTransitionBoardItem_o *)((char *)i + 8) )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
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
                  v37,
                  0,
                  v34);
    if ( !v16 )
      sub_21FFECC(UseEntity, v22);
    v29 = (MissionNaviTransitionBoardItem_c *)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_21FFDA4(UseEntity, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
      if ( !UseEntity )
      {
        v33 = sub_21FFEF0(0, v30);
        sub_21FFD90(v33, 0);
      }
    }
    v31 = v20 - 1;
    if ( v31 >= v16[6] )
      sub_21FFED4(UseEntity);
    i->klass = v29;
    sub_21FFBF4(i, (int32_t)v29, v23, v24, v25, v26, v27, v28);
    v17 = v31 + 1;
  }
  return (ServantSkillEntity_array *)v16;
}


bool ServantSkillMaster__preProcess(ServantSkillMaster_o *this, const MethodInfo *method)
{
  __int64 listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *v7; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__o *v12; // x21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x21
  __int64 naturalAligment; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_object__o *v33; // x23
  System_Collections_Generic_List_object__o *v34; // x0
  Il2CppClass *v35; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  void **v38; // x8
  ServantSkillMaster_o *v39; // x24
  System_Collections_Generic_IEnumerator_T__o *v40; // x22
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  ServantSkillMaster___c_c *v46; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  struct ServantSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v50; // x24
  struct ServantSkillMaster___c_StaticFields *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_Collections_Generic_Dictionary_object__object__o *v58; // x23
  System_Object_array *v59; // x0
  __int64 v60; // x1
  int32_t monitor; // w2
  int v62; // w8
  ServantSkillMaster_o *v64; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v68; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_5939146 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__GetEnumerator__);
    sub_21FFC50(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_21FFC50(&ServantSkillEntity_TypeInfo);
    sub_21FFC50(&Method_ServantSkillMaster___c__preProcess_b__5_0__);
    sub_21FFC50(&ServantSkillMaster___c_TypeInfo);
    byte_5939146 = 1;
  }
  listCache = (__int64)this->fields.listCache;
  value = 0;
  v68 = 0;
  memset(&v66, 0, sizeof(v66));
  if ( !listCache )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)listCache,
    (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  listCache = (__int64)this->fields.list;
  v64 = this;
  if ( !listCache )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__GetEnumerator__);
  v68 = Enumerator;
  v65.fields._dictionary = 0;
  *(_QWORD *)&v65.fields._version = &v68;
  if ( !Enumerator )
LABEL_33:
    sub_21FFECC(Enumerator, v6);
  v7 = Enumerator;
  while ( 1 )
  {
    klass = v7->klass;
    v9 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_2237E2C(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
                  v7,
                  *(_QWORD *)(v11 + 8));
    if ( (listCache & 1) == 0 )
      break;
    v12 = v68;
    if ( !v68 )
      sub_21FFECC(listCache, method);
    v13 = v68->klass;
    v14 = *(unsigned __int16 *)&v68->klass->_2.rank;
    if ( *(_WORD *)&v68->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_19:
      v16 = sub_2237E2C(v68, System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v12,
            *(_QWORD *)(v16 + 8));
    v21 = (Il2CppObject *)v17;
    if ( !v17 )
      sub_21FFECC(0, v18);
    naturalAligment = ServantSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)naturalAligment
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * naturalAligment - 8) != ServantSkillEntity_TypeInfo )
    {
      sub_220024C(v17, ServantSkillEntity_TypeInfo, v19);
LABEL_57:
      sub_21FFECC(v34, v26);
    }
    PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(
                                    (ServantSkillMaster_o *)v17,
                                    *(_DWORD *)(v17 + 16),
                                    *(_DWORD *)(v17 + 20),
                                    v20);
    if ( !v4 )
      sub_21FFECC(PriorityKey, v24);
    v25 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v33 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v33,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (Il2CppObject *)v33;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v25,
        (Il2CppObject *)v33,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    v34 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_57;
    v35 = value[1].klass;
    v36 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v35 )
      goto LABEL_57;
    size = v34->fields._size;
    if ( (unsigned int)size >= LODWORD(v35->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        v21,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &v35->_1.image + size;
      v34->fields._size = size + 1;
      v38[4] = v21;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v21, v27, v28, v29, v30, v31, v32);
    }
    v7 = v68;
    if ( !v68 )
      goto LABEL_33;
  }
  v39 = v64;
  v40 = v68;
  if ( v68 )
  {
    v41 = v68->klass;
    v42 = *(unsigned __int16 *)&v68->klass->_2.rank;
    if ( *(_WORD *)&v68->klass->_2.rank )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_39;
      }
      v44 = (__int64)&v41->vtable[*v43];
    }
    else
    {
LABEL_39:
      v44 = sub_2237E2C(v68, System_IDisposable_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                  v40,
                  *(_QWORD *)(v44 + 8));
  }
  if ( !v4 )
LABEL_63:
    sub_21FFECC(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v65,
    v4,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v66 = v65;
  v65.fields._dictionary = 0;
  *(_QWORD *)&v65.fields._version = &v66;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v66,
            (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__) )
  {
    v46 = ServantSkillMaster___c_TypeInfo;
    current = v66.fields._current;
    if ( !*(&ServantSkillMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo, v45);
      v46 = ServantSkillMaster___c_TypeInfo;
    }
    static_fields = v46->static_fields;
    _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !*(&v46->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v46, v45);
        static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v50, Method_ServantSkillMaster___c__preProcess_b__5_0__, 0);
      v51 = ServantSkillMaster___c_TypeInfo->static_fields;
      v51->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v51->__9__5_0, (int32_t)_9__5_0, v52, v53, v54, v55, v56, v57);
      v39 = v64;
    }
    if ( !current.fields.value )
      sub_21FFECC(v46, v45);
    System_Collections_Generic_List_object___Sort_71636404(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__5_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v58 = (System_Collections_Generic_Dictionary_object__object__o *)v39->fields.listCache;
    v59 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v58 )
      sub_21FFECC(v59, v60);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v58,
      current.fields.key,
      &v59->obj,
      (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v62 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v62;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v66,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void ServantSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593914D & 1) == 0 )
  {
    sub_21FFC50(&ServantSkillMaster___c_TypeInfo);
    byte_593914D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantSkillMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}