void __fastcall ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5B976 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
    byte_4A5B976 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    12,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
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

  if ( (byte_4A5B974 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
    byte_4A5B974 = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
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

  if ( (byte_4A5B975 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
    byte_4A5B975 = 1;
  }
  PK = (Il2CppObject *)ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall ServantSkillMaster__getEntityFromSkillId(
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B979 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&ServantSkillEntity_TypeInfo);
    byte_4A5B979 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                         (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_16:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


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
  if ( (byte_4A5B97C & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
    byte_4A5B97C = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1B8880C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
  {
    return (ServantSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


System_Collections_Generic_List_ServantSkillEntity__o *__fastcall ServantSkillMaster__getEntityListFromSkillId(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5B97A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_1B885B0(&ServantSkillEntity_TypeInfo);
    byte_4A5B97A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = list;
        methodPtr_low = LOBYTE(ServantSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == num
          && HIDWORD(list[1].klass) == skillId )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v10;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v10, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v9;
    }
LABEL_20:
    sub_1B8880C(list, v10);
  }
  return (System_Collections_Generic_List_ServantSkillEntity__o *)v9;
}


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
  if ( (byte_4A5B97D & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
    byte_4A5B97D = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_13;
  PriorityKey = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
                                  PriorityKey,
                                  &value,
                                  (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)PriorityKey & 1) != 0 )
  {
    if ( !value )
      goto LABEL_13;
    if ( !LODWORD(value[1].monitor) )
      goto LABEL_14;
    PriorityKey = (Il2CppObject *)value[2].klass;
    if ( !PriorityKey )
LABEL_13:
      sub_1B8880C(PriorityKey, v8);
    PriorityKey = (Il2CppObject *)ServantSkillEntity__isEnable((ServantSkillEntity_o *)PriorityKey, 0, v9);
    if ( ((unsigned __int8)PriorityKey & 1) != 0 )
    {
      if ( value )
      {
        if ( LODWORD(value[1].monitor) )
          return (ServantSkillEntity_o *)value[2].klass;
LABEL_14:
        sub_1B88814(PriorityKey, v8);
      }
      goto LABEL_13;
    }
  }
  return 0LL;
}


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
  if ( (byte_4A5B977 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B977 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61718292(v4, (System_String_o *)StringLiteral_1544/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getServantSkillList(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = svtId;
  if ( (byte_4A5B97B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_1B885B0(&ServantSkillEntity_TypeInfo);
    byte_4A5B97B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        methodPtr_low = LOBYTE(ServantSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = *(Il2CppClass **)&svtId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), svtId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
    sub_1B88814(EntityListFromIdNum, v18);
  while ( 1 )
  {
    v23 = &v21->obj.klass + v22;
    v24 = (ServantSkillEntity_o *)v23[4];
    if ( !v24 )
      sub_1B8880C(EntityListFromIdNum, v18);
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
  BalanceConfig_c *v14; // x0
  ServantSkillEntity_array *v15; // x27
  signed __int64 v16; // x19
  ServantStatusBattleListViewItem_o *i; // x20
  BalanceConfig_c *v18; // x0
  signed __int64 v19; // x29
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  ServantStatusBattleListViewItem_c *v24; // x19
  unsigned __int64 v25; // x29
  __int64 v27; // x0
  const MethodInfo *v28; // [xsp+18h] [xbp-78h]
  int64_t v31; // [xsp+28h] [xbp-68h]

  if ( (byte_4A5B97E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ServantSkillEntity___TypeInfo);
    byte_4A5B97E = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (ServantSkillEntity_array *)sub_1B88658(
                                      ServantSkillEntity___TypeInfo,
                                      (unsigned int)v14->static_fields->SvtEquipSkillListMax);
  v16 = 0LL;
  for ( i = (ServantStatusBattleListViewItem_o *)v15->m_Items; ; i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
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
                  v31,
                  0,
                  v28);
    if ( !v15 )
      sub_1B8880C(UseEntity, v21);
    v24 = (ServantStatusBattleListViewItem_c *)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_1B886EC(UseEntity, v15->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v27 = sub_1B88830(0LL);
        sub_1B886D8(v27, 0LL);
      }
    }
    v25 = v19 - 1;
    if ( v25 >= v15->max_length )
      sub_1B88814(UseEntity, v21);
    i->klass = v24;
    sub_1B88554(i, (int32_t)v24, v22, v23);
    v16 = v25 + 1;
  }
  return v15;
}


bool __fastcall ServantSkillMaster__preProcess(ServantSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_object__o *v26; // x24
  System_Collections_Generic_List_object__o *v27; // x0
  Il2CppClass *v28; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  void **v31; // x8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  ServantSkillMaster___c_c *v38; // x8
  Il2CppObject *v39; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v42; // x24
  struct ServantSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_Dictionary_object__object__o *v46; // x23
  System_Object_array *v47; // x0
  __int64 v48; // x1
  int32_t monitor; // w2
  int v50; // w8
  ServantSkillMaster_o *v52; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A5B978 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_1B885B0(&ServantSkillEntity_TypeInfo);
    sub_1B885B0(&Method_ServantSkillMaster___c__preProcess_b__5_0__);
    sub_1B885B0(&ServantSkillMaster___c_TypeInfo);
    byte_4A5B978 = 1;
  }
  value = 0LL;
  memset(&v54, 0, sizeof(v54));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v52 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_17:
      v14 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1B8880C(0LL, v16);
    methodPtr_low = LOBYTE(ServantSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * methodPtr_low - 8) != ServantSkillEntity_TypeInfo )
    {
      sub_1B88ACC(v15);
LABEL_51:
      sub_1B8880C(v27, v23);
    }
    PriorityKey = (Il2CppObject *)ServantSkillMaster__getPriorityKey(
                                    (ServantSkillMaster_o *)v15,
                                    *(_DWORD *)(v15 + 16),
                                    *(_DWORD *)(v15 + 20),
                                    v17);
    if ( !v4 )
      sub_1B8880C(PriorityKey, v21);
    v22 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (Il2CppObject *)v26;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v26,
        (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    v27 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v28 = value[1].klass;
    v29 = Method_System_Collections_Generic_List_ServantSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v28 )
      sub_1B8880C(v27, v23);
    size = v27->fields._size;
    if ( (unsigned int)size >= LODWORD(v28->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        v18,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v28->_1.image + size;
      v27->fields._size = size + 1;
      v31[4] = v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v18, v24, v25);
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_34:
    v35 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v35 + 8));
  if ( !v4 )
LABEL_57:
    sub_1B8880C(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v53,
    v4,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v36 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v54,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__);
    if ( !v36 )
      break;
    v38 = ServantSkillMaster___c_TypeInfo;
    key = v54.fields._current.fields.key;
    v39 = v54.fields._current.fields.value;
    if ( !ServantSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo);
      v38 = ServantSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v38->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = ServantSkillMaster___c_TypeInfo;
      }
      v42 = (Il2CppObject *)v38->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v42, Method_ServantSkillMaster___c__preProcess_b__5_0__, 0LL);
      static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v44, v45);
    }
    if ( !v39 )
      sub_1B8880C(v36, v37);
    System_Collections_Generic_List_object___Sort_55571192(
      (System_Collections_Generic_List_object__o *)v39,
      _9__5_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v46 = (System_Collections_Generic_Dictionary_object__object__o *)v52->fields.listCache;
    v47 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v39,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v46 )
      sub_1B8880C(v47, v48);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v46,
      key,
      &v47->obj,
      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    monitor = (int32_t)v39[1].monitor;
    v50 = HIDWORD(v39[1].monitor) + 1;
    LODWORD(v39[1].monitor) = 0;
    HIDWORD(v39[1].monitor) = v50;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v39[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v54,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B97F & 1) == 0 )
  {
    sub_1B885B0(&ServantSkillMaster___c_TypeInfo);
    byte_4A5B97F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ServantSkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return a->fields.priority - b->fields.priority;
}