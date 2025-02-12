void __fastcall ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB501D & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo, v4);
    byte_4BB501D = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    12,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
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

  if ( (byte_4BB501B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_4BB501B = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_323D0DC *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
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

  if ( (byte_4BB501C & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__, entity);
    byte_4BB501C = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
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

  if ( (byte_4BB5020 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__, v9);
    byte_4BB5020 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
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
                                         (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( result && result->fields.svtId == svtId && result->fields.num == num && result->fields.skillId == skillId )
        return result;
      if ( v12 == ++v13 )
        return 0LL;
    }
LABEL_14:
    sub_1C13F80(list, *(_QWORD *)&svtId);
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
  if ( (byte_4BB5023 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1C13D24(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId);
    byte_4BB5023 = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1C13F80(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
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
  int64_t v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w24
  int32_t v18; // w25
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4BB5021 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v11);
    sub_1C13D24(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v12);
    byte_4BB5021 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
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
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( list )
      {
        v14 = (int64_t)list;
        if ( LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == num
          && HIDWORD(list[1].klass) == skillId )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v26 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v14;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 4), v14, v19, v20, v21, v22, v23, v24);
          }
        }
      }
      if ( v17 == ++v18 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v13;
    }
LABEL_18:
    sub_1C13F80(list, v14);
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
  if ( (byte_4BB5024 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1C13D24(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId);
    byte_4BB5024 = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_13;
  PriorityKey = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                  PriorityKey,
                                  &value,
                                  (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)PriorityKey & 1) != 0 )
  {
    if ( !value )
      goto LABEL_13;
    if ( !LODWORD(value[1].monitor) )
      goto LABEL_14;
    PriorityKey = (Il2CppObject *)value[2].klass;
    if ( !PriorityKey )
LABEL_13:
      sub_1C13F80(PriorityKey, v8);
    PriorityKey = (Il2CppObject *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)PriorityKey, 0, v9);
    if ( ((unsigned __int8)PriorityKey & 1) != 0 )
    {
      if ( value )
      {
        if ( LODWORD(value[1].monitor) )
          return (ServantSkillEntity_o *)value[2].klass;
LABEL_14:
        sub_1C13F88(PriorityKey, v8);
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
  if ( (byte_4BB501E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1545/*"99:99:99"*/, *(_QWORD *)&svtId);
    byte_4BB501E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62979204(v4, (System_String_o *)StringLiteral_1545/*"99:99:99"*/, v5, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v3 = svtId;
  if ( (byte_4BB5022 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v9);
    byte_4BB5022 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
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
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v21 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v23[4] = *(Il2CppClass **)&svtId;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), *(int64_t *)&svtId, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C13F80(list, *(_QWORD *)&svtId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v12,
                                       (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
    sub_1C13F88(EntityListFromIdNum, v18);
  while ( 1 )
  {
    v23 = &v21->obj.klass + v22;
    v24 = (ServantSkillEntity_o *)v23[4];
    if ( !v24 )
      sub_1C13F80(EntityListFromIdNum, v18);
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
  PartyOrganizationUtility_o *i; // x20
  BalanceConfig_c *v19; // x0
  signed __int64 v20; // x29
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x19
  unsigned __int64 v30; // x29
  __int64 v32; // x0
  const MethodInfo *v33; // [xsp+18h] [xbp-78h]
  int64_t v36; // [xsp+28h] [xbp-68h]

  if ( (byte_4BB5025 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C13D24(&ServantSkillEntity___TypeInfo, v14);
    byte_4BB5025 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantSkillEntity_array *)sub_1C13DCC(
                                      ServantSkillEntity___TypeInfo,
                                      (unsigned int)v15->static_fields->SvtEquipSkillListMax);
  v17 = 0LL;
  for ( i = (PartyOrganizationUtility_o *)v16->m_Items; ; i = (PartyOrganizationUtility_o *)((char *)i + 8) )
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
                  v36,
                  0,
                  v33);
    if ( !v16 )
      sub_1C13F80(UseEntity, v22);
    v29 = (int64_t)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_1C13E60(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v32 = sub_1C13FA4(0LL);
        sub_1C13E4C(v32, 0LL);
      }
    }
    v30 = v20 - 1;
    if ( v30 >= v16->max_length )
      sub_1C13F88(UseEntity, v22);
    i->klass = (PartyOrganizationUtility_c *)v29;
    sub_1C13CC8(i, v29, v23, v24, v25, v26, v27, v28);
    v17 = v30 + 1;
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
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_object__o *v56; // x24
  System_Collections_Generic_List_object__o *v57; // x0
  Il2CppClass *v58; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  void **v61; // x8
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  _BOOL8 v66; // x0
  __int64 v67; // x1
  ServantSkillMaster___c_c *v68; // x8
  Il2CppObject *v69; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v72; // x24
  struct ServantSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_Dictionary_object__object__o *v80; // x23
  System_Object_array *v81; // x0
  __int64 v82; // x1
  int32_t monitor; // w2
  int v84; // w8
  ServantSkillMaster_o *v86; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v87; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v88; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BB501F & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__GetEnumerator__, method);
    sub_1C13D24(&System_Comparison_ServantSkillEntity__TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__, v10);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo, v11);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__,
      v12);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__,
      v13);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__,
      v14);
    sub_1C13D24(&System_IDisposable_TypeInfo, v15);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo, v16);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v24);
    sub_1C13D24(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v25);
    sub_1C13D24(&ServantSkillEntity_TypeInfo, v26);
    sub_1C13D24(&Method_ServantSkillMaster___c__preProcess_b__5_0__, v27);
    sub_1C13D24(&ServantSkillMaster___c_TypeInfo, v28);
    byte_4BB501F = 1;
  }
  value = 0LL;
  memset(&v88, 0, sizeof(v88));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_32F2B38 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v86 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v31);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v40 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillEntity__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v44 = (Il2CppObject *)v41;
    if ( !v41 )
      sub_1C13F80(0LL, v42);
    methodPtr_low = LOBYTE(ServantSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantSkillEntity_TypeInfo )
    {
      sub_1C14240(v41);
LABEL_51:
      sub_1C13F80(v57, v49);
    }
    PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(
                                    (ServantSkillMaster_o *)v41,
                                    *(_DWORD *)(v41 + 16),
                                    *(_DWORD *)(v41 + 20),
                                    v43);
    if ( !v30 )
      sub_1C13F80(PriorityKey, v47);
    v48 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v30,
            PriorityKey,
            &value,
            (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v56 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v56,
        (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (Il2CppObject *)v56;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v30,
        v48,
        (Il2CppObject *)v56,
        (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    v57 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v58 = value[1].klass;
    v59 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v58 )
      sub_1C13F80(v57, v49);
    size = v57->fields._size;
    if ( (unsigned int)size >= LODWORD(v58->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v57,
        v44,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->_1.image + size;
      v57->fields._size = size + 1;
      v61[4] = v44;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v44, v50, v51, v52, v53, v54, v55);
    }
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_34;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_34:
    v65 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v65 + 8));
  if ( !v30 )
LABEL_57:
    sub_1C13F80(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v87,
    v30,
    (const MethodInfo_32F2DE0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v66 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v88,
            (const MethodInfo_33EFDF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__);
    if ( !v66 )
      break;
    v68 = ServantSkillMaster___c_TypeInfo;
    key = v88.fields._current.fields.key;
    v69 = v88.fields._current.fields.value;
    if ( !ServantSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo);
      v68 = ServantSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v68->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        v68 = ServantSkillMaster___c_TypeInfo;
      }
      v72 = (Il2CppObject *)v68->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v72, Method_ServantSkillMaster___c__preProcess_b__5_0__, 0LL);
      static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    if ( !v69 )
      sub_1C13F80(v66, v67);
    System_Collections_Generic_List_object___Sort_56814736(
      (System_Collections_Generic_List_object__o *)v69,
      _9__5_0,
      (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v80 = (System_Collections_Generic_Dictionary_object__object__o *)v86->fields.listCache;
    v81 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v69,
            (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v80 )
      sub_1C13F80(v81, v82);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v80,
      key,
      &v81->obj,
      (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    monitor = (int32_t)v69[1].monitor;
    v84 = HIDWORD(v69[1].monitor) + 1;
    LODWORD(v69[1].monitor) = 0;
    HIDWORD(v69[1].monitor) = v84;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v69[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v88,
    (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v30,
    (const MethodInfo_32F2B38 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB5026 & 1) == 0 )
  {
    sub_1C13D24(&ServantSkillMaster___c_TypeInfo, v1);
    byte_4BB5026 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ServantSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ServantSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, a);
  return a->fields.priority - b->fields.priority;
}