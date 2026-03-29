void ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D313CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
    byte_4D313CB = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantPassiveSkillEntity_array *ServantSkillList; // x0
  ServantPassiveSkillMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v9; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D313CF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
    sub_1C93AD4(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__);
    sub_1C93AD4(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4D313CF = 1;
  }
  ServantSkillList = ServantPassiveSkillMaster__getServantSkillList(this, svtId, method);
  v6 = ServantPassiveSkillMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantSkillList;
  if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v6 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__bool__o *)v6->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__8_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__8_0,
      v9,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v11, v12, v13, v14, v15, v16);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v7,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_o *ServantPassiveSkillMaster__GetEntity(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D313C9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
    byte_4D313C9 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_34681D4 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
}


System_Int32_array *ServantPassiveSkillMaster__GetEventBonusSkillIds(
        ServantPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v5; // x0
  int64_t userIdNumber; // x22
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int64_t nowTime; // x25
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  ServantPassiveSkillEntity_o *v22; // x23
  _BOOL8 isUse; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  _BOOL8 IsSetGroupId; // x0
  __int64 v27; // x1
  __int64 skillId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  const MethodInfo *v37; // [xsp+10h] [xbp-70h]
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D313D4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D313D4 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !this->fields.list )
    goto LABEL_52;
  nowTime = (int64_t)Instance[8].monitor;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v15 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_25;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_25:
      v19 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v22 = (ServantPassiveSkillEntity_o *)v20;
    if ( !v20 )
      sub_1C93D2C(0, v21);
    if ( !v3 )
      sub_1C93D2C(v20, v21);
    if ( !System_Collections_Generic_List_int___Contains(
            v3,
            *(_DWORD *)(v20 + 28),
            (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      isUse = ServantPassiveSkillEntity__isUse(v22, userIdNumber, 1, 0, 1, 0, -1, 1, nowTime, 0, v37);
      if ( isUse )
      {
        if ( !Master_object )
          sub_1C93D2C(isUse, v24);
        if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, v22->fields.skillId, 1, 0) )
        {
          if ( !entity )
            sub_1C93D2C(0, v25);
          IsSetGroupId = SkillLvEntity__IsSetGroupId(entity, 0);
          if ( IsSetGroupId )
          {
            if ( !entity )
              sub_1C93D2C(IsSetGroupId, v27);
            skillId = (unsigned int)entity->fields.skillId;
            items = v3->fields._items;
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++v3->fields._version;
            if ( !items )
              sub_1C93D2C(IsSetGroupId, skillId);
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v3,
                skillId,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = skillId;
            }
          }
        }
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_44;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_44:
    v35 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                               Enumerator,
                               *(_QWORD *)(v35 + 8));
  if ( !v3 )
LABEL_52:
    sub_1C93D2C(Instance, v8);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *ServantPassiveSkillMaster__GetItemLinkSkillIds(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        int64_t nowTime,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 klass_low; // x1
  EventItemUsedInfo_array *v10; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x23
  const MethodInfo *v14; // x3
  ServantTransformEntity_o *v15; // x0
  System_Collections_Generic_List_int__o *v16; // x22
  int max_length; // w8
  unsigned int v18; // w23
  EventItemUsedInfo_o *v19; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D313D3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D313D3 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  v10 = UserEventItemLinkSvtMaster__EnableEventItemUsedInfo((UserEventItemLinkSvtMaster_o *)Master_object, nowTime, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v10, 0) )
    return (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v12 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Master_object = (Il2CppObject *)ImageLimitCount__ConvertDispLimitCountForServer(dispLimitCount, 0);
  if ( !v13 )
    goto LABEL_35;
  v15 = ServantTransformMaster__GetBeforeTransformEntity(
          (ServantTransformMaster_o *)v13,
          svtId,
          (int32_t)Master_object,
          v14);
  if ( v15 )
    svtId = v15->fields.befSvtId;
  v16 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v10 )
LABEL_35:
    sub_1C93D2C(Master_object, klass_low);
  max_length = v10->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    do
    {
      if ( v18 >= max_length )
        sub_1C93D34(Master_object);
      v19 = v10->m_Items[v18];
      if ( !v19 )
        goto LABEL_35;
      if ( v19->fields.svtId == svtId )
      {
        if ( !v12 )
          goto LABEL_35;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                                          &entity,
                                          v19->fields.itemId,
                                          (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_35;
          if ( LODWORD(entity[3].klass) == 40 )
          {
            klass_low = LODWORD(entity[4].klass);
            if ( (int)klass_low >= 1 )
              goto LABEL_39;
          }
        }
        klass_low = (unsigned int)v19->fields.skillId;
        if ( (int)klass_low >= 1 )
        {
LABEL_39:
          if ( !v16 )
            goto LABEL_35;
          items = v16->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_35;
          size = v16->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              klass_low,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size] = klass_low;
          }
        }
      }
      max_length = v10->max_length;
    }
    while ( (int)++v18 < max_length );
  }
  if ( !v16 )
    goto LABEL_35;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantPassiveSkillMaster__TryGetEntity(
        ServantPassiveSkillMaster_o *this,
        ServantPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D313CA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
    byte_4D313CA = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
}


ServantPassiveSkillEntity_array *ServantPassiveSkillMaster__getEntityListFromIdNum(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantPassiveSkillMaster_o *v6; // x20
  Il2CppObject *PriorityKey; // x0
  __int64 v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4D313D0 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__);
    byte_4D313D0 = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1C93D2C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
  {
    return (ServantPassiveSkillEntity_array *)value;
  }
  else
  {
    return 0;
  }
}


void ServantPassiveSkillMaster__getPassiveSkillInfo(
        ServantPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        int64_t nowTime,
        bool isGrand,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  ServantEntity_o *v25; // x26
  int32_t v26; // w29
  int32_t ServantLimitCountSealAfter; // w25
  int32_t LimitCountByDispLimit; // w0
  BalanceConfig_c *v29; // x0
  __int64 v30; // x26
  bool v31; // w22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  const MethodInfo *v36; // x6
  System_String_o *v37; // x7
  ServantPassiveSkillEntity_array *UseEntityList; // x27
  unsigned __int64 v39; // x28
  unsigned int v40; // w25
  __int64 i; // x24
  System_Int32_array *v42; // x8
  System_String_array *v43; // x8
  System_String_array *v44; // x10
  System_Int32_array *v45; // x8
  unsigned __int64 max_length_low; // x9
  il2cpp_array_size_t max_length; // x10
  int v48; // w9
  System_String_array *v49; // x8
  unsigned __int64 v50; // x9
  System_String_o *v51; // x1
  Il2CppClass **v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_String_array *v59; // x8
  unsigned __int64 v60; // x9
  System_String_o *v61; // x1
  Il2CppClass **v62; // x0
  System_String_array *v63; // x8
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  System_String_array *v70; // x8
  System_Collections_ICollection_o *ItemLinkSkillIds; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  System_Collections_ICollection_o *v78; // x23
  void *monitor; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // x24
  unsigned __int64 v81; // x26
  unsigned int v82; // w27
  int32_t v83; // w25
  System_Int32_array *v84; // x9
  System_String_array *v85; // x9
  System_String_array *v86; // x10
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  const MethodInfo *v99; // [xsp+18h] [xbp-A8h]
  ServantPassiveSkillMaster_o *v100; // [xsp+28h] [xbp-98h]
  int32_t svtIda; // [xsp+50h] [xbp-70h]
  bool IsServantEquip; // [xsp+54h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4D313D2 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D313D2 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_75;
  v25 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v100 = this;
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_75;
  svtIda = svtId;
  v26 = limitCount;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 limitCount,
                                 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, ServantLimitCountSealAfter, 0);
  ServantEntity__getClassSkillInfo(v25, idList, titleList, explanationList, LimitCountByDispLimit, 0);
  v29 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  v30 = sub_1C93B7C(int___TypeInfo, (unsigned int)v29->static_fields->SvtPassiveSkillListMax);
  v31 = IsServantEquip;
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    v100,
                    svtId,
                    userId,
                    svtLv,
                    v26,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    nowTime,
                    isGrand,
                    v99);
  v39 = 0;
  v40 = 0;
  for ( i = 32; ; i += 8 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v39 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_75;
    if ( v39 >= LODWORD(UseEntityList->max_length) )
      goto LABEL_76;
    Instance = (DataManager_o *)UseEntityList->m_Items[v39];
    v42 = *idList;
    if ( Instance )
    {
      if ( !v42 )
        goto LABEL_75;
      if ( v40 >= LODWORD(v42->max_length) )
        goto LABEL_76;
      v42->m_Items[v40] = HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v30 )
        goto LABEL_75;
      v43 = *titleList;
      if ( !*titleList )
        goto LABEL_75;
      v44 = *explanationList;
      if ( !*explanationList )
        goto LABEL_75;
      if ( v40 >= *(_DWORD *)(v30 + 24) || v40 >= LODWORD(v43->max_length) || v40 >= LODWORD(v44->max_length) )
        goto LABEL_76;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v30 + 4LL * (int)v40 + 32),
        &v43->m_Items[v40],
        &v44->m_Items[v40],
        0,
        v31,
        v36);
      if ( v39 != v40 )
      {
        v45 = *idList;
        if ( !*idList )
          goto LABEL_75;
        max_length_low = LODWORD(v45->max_length);
        goto LABEL_44;
      }
      goto LABEL_50;
    }
    if ( !v42 )
      goto LABEL_75;
    max_length = v42->max_length;
    if ( v39 >= (unsigned int)max_length )
      goto LABEL_76;
    v48 = v42->m_Items[v39];
    if ( v48 >= 1 )
    {
      if ( v39 != v40 )
      {
        if ( v40 >= (unsigned int)max_length )
          goto LABEL_76;
        v42->m_Items[v40] = v48;
        v49 = *titleList;
        if ( !*titleList )
          goto LABEL_75;
        v50 = LODWORD(v49->max_length);
        if ( v39 >= v50 || v40 >= (unsigned int)v50 )
          goto LABEL_76;
        v51 = v49->m_Items[v39];
        v52 = &v49->obj.klass + (int)v40;
        v52[4] = (Il2CppClass *)v51;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v52 + 4), (int32_t)v51, v32, v33, v34, v35, (int64_t)v36, v37);
        v59 = *explanationList;
        if ( !*explanationList )
          goto LABEL_75;
        v60 = LODWORD(v59->max_length);
        if ( v39 >= v60 || v40 >= (unsigned int)v60 )
LABEL_76:
          sub_1C93D34(Instance);
        v61 = v59->m_Items[v39];
        v62 = &v59->obj.klass + (int)v40;
        v62[4] = (Il2CppClass *)v61;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v62 + 4), (int32_t)v61, v53, v54, v55, v56, v57, v58);
        v45 = *idList;
        if ( !*idList )
          goto LABEL_75;
        max_length_low = LODWORD(v45->max_length);
        v31 = IsServantEquip;
LABEL_44:
        if ( v39 >= max_length_low )
          goto LABEL_76;
        v45->m_Items[v39] = 0;
        v63 = *titleList;
        if ( !*titleList )
          goto LABEL_75;
        if ( v39 >= LODWORD(v63->max_length) )
          goto LABEL_76;
        v63->m_Items[v39] = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v63 + i), 0, v32, v33, v34, v35, (int64_t)v36, v37);
        v70 = *explanationList;
        if ( !*explanationList )
          goto LABEL_75;
        if ( v39 >= LODWORD(v70->max_length) )
          goto LABEL_76;
        v70->m_Items[v39] = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v70 + i), 0, v64, v65, v66, v67, v68, v69);
      }
LABEL_50:
      ++v40;
    }
    ++v39;
  }
  ItemLinkSkillIds = (System_Collections_ICollection_o *)ServantPassiveSkillMaster__GetItemLinkSkillIds(
                                                           (ServantPassiveSkillMaster_o *)Instance,
                                                           svtIda,
                                                           dispLimitCount,
                                                           nowTime,
                                                           (const MethodInfo *)v34);
  if ( !isMySvt )
    goto LABEL_73;
  v78 = ItemLinkSkillIds;
  if ( BasicHelper__IsNullOrEmpty(ItemLinkSkillIds, 0) )
    goto LABEL_73;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v78 )
LABEL_75:
    sub_1C93D2C(Instance, v24);
  monitor = v78[1].monitor;
  if ( (int)monitor < 1 )
  {
LABEL_73:
    if ( v40 )
      return;
LABEL_74:
    *idList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)idList, 0, v72, v73, v74, v75, v76, v77);
    *titleList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)titleList, 0, v87, v88, v89, v90, v91, v92);
    *explanationList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)explanationList, 0, v93, v94, v95, v96, v97, v98);
    return;
  }
  v80 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v81 = 0;
  v82 = v40;
  do
  {
    if ( v81 >= (unsigned int)monitor )
      goto LABEL_76;
    if ( !v80 )
      goto LABEL_75;
    v83 = *((_DWORD *)&v78[2].klass + v81);
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v80,
                                  &entity,
                                  v83,
                                  (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v84 = *idList;
      if ( !*idList )
        goto LABEL_75;
      if ( v82 >= LODWORD(v84->max_length) )
        goto LABEL_76;
      v84->m_Items[v82] = v83;
      v85 = *titleList;
      if ( !*titleList )
        goto LABEL_75;
      v86 = *explanationList;
      if ( !*explanationList )
        goto LABEL_75;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_75;
      if ( v82 >= LODWORD(v85->max_length) || v82 >= LODWORD(v86->max_length) )
        goto LABEL_76;
      SkillEntity__GetEffectExplanation((SkillEntity_o *)entity, &v85->m_Items[v82], &v86->m_Items[v82], 0, v31, 0);
      ++v82;
    }
    LODWORD(monitor) = v78[1].monitor;
    ++v81;
  }
  while ( (__int64)v81 < (int)monitor );
  if ( !v82 )
    goto LABEL_74;
}


System_String_o *ServantPassiveSkillMaster__getPriorityKey(
        ServantPassiveSkillMaster_o *this,
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
  if ( (byte_4D313CC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D313CC = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_64463988(v4, (System_String_o *)StringLiteral_1451/*":"*/, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
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
  if ( (byte_4D313CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    byte_4D313CE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
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
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v7,
                                              (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
}


ServantPassiveSkillEntity_o *ServantPassiveSkillMaster__getUseEntity(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        int64_t nowTime,
        bool isGrand,
        const MethodInfo *method)
{
  ServantPassiveSkillEntity_array *EntityListFromIdNum; // x0
  __int64 v18; // x1
  ServantPassiveSkillEntity_array *v19; // x24
  unsigned int i; // w29
  Il2CppClass **v21; // x8
  ServantPassiveSkillEntity_o *v22; // x27
  const MethodInfo *v24; // [xsp+10h] [xbp-70h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v19 = EntityListFromIdNum;
    for ( i = LODWORD(EntityListFromIdNum->max_length) - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= LODWORD(v19->max_length) )
        sub_1C93D34(EntityListFromIdNum);
      v21 = &v19->obj.klass + i;
      v22 = (ServantPassiveSkillEntity_o *)v21[4];
      if ( !v22 )
        sub_1C93D2C(EntityListFromIdNum, v18);
      EntityListFromIdNum = (ServantPassiveSkillEntity_array *)ServantPassiveSkillEntity__isUse(
                                                                 (ServantPassiveSkillEntity_o *)v21[4],
                                                                 userId,
                                                                 svtLv,
                                                                 limitCount,
                                                                 dispLimitCount,
                                                                 friendshipRank,
                                                                 beforeClearQuestId,
                                                                 isMySvt,
                                                                 nowTime,
                                                                 isGrand,
                                                                 v24);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v22;
    }
  }
  return 0;
}


ServantPassiveSkillEntity_array *ServantPassiveSkillMaster__getUseEntityList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        int64_t nowTime,
        bool isGrand,
        const MethodInfo *method)
{
  BalanceConfig_c *v14; // x0
  unsigned int *v15; // x27
  signed __int64 v16; // x19
  GrandQuestFolderBoardItem_o *i; // x23
  BalanceConfig_c *v18; // x0
  signed __int64 v19; // x29
  ServantPassiveSkillEntity_o *UseEntity; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  ServantPassiveSkillEntity_o *v28; // x19
  unsigned __int64 v29; // x29
  __int64 v31; // x0
  const MethodInfo *v32; // [xsp+20h] [xbp-90h]

  if ( (byte_4D313D1 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&ServantPassiveSkillEntity___TypeInfo);
    byte_4D313D1 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (unsigned int *)sub_1C93B7C(
                          ServantPassiveSkillEntity___TypeInfo,
                          (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
  v16 = 0;
  for ( i = (GrandQuestFolderBoardItem_o *)(v15 + 8); ; i = (GrandQuestFolderBoardItem_o *)((char *)i + 8) )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( v16 >= v18->static_fields->SvtPassiveSkillListMax )
      break;
    v19 = v16 + 1;
    UseEntity = ServantPassiveSkillMaster__getUseEntity(
                  this,
                  svtId,
                  (int)v16 + 1,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  friendshipRank,
                  beforeClearQuestId,
                  isMySvt,
                  nowTime,
                  isGrand,
                  v32);
    if ( !v15 )
      sub_1C93D2C(UseEntity, v21);
    v28 = UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_1C93C10(UseEntity, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
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
  return (ServantPassiveSkillEntity_array *)v15;
}


bool ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
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
  ServantPassiveSkillMaster___c_c *v42; // x8
  Il2CppObject *v43; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__6_0; // x23
  Il2CppObject *v46; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
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
  ServantPassiveSkillMaster_o *v60; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4D313CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
    sub_1C93AD4(&System_Comparison_ServantPassiveSkillEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_1C93AD4(&ServantPassiveSkillEntity_TypeInfo);
    sub_1C93AD4(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__);
    sub_1C93AD4(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4D313CD = 1;
  }
  value = 0;
  memset(&v62, 0, sizeof(v62));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_352ED30 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v60 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo )
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
      v14 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1C93D2C(0, v16);
    naturalAligment = ServantPassiveSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)naturalAligment
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * naturalAligment - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_1C940C8(v15);
LABEL_51:
      sub_1C93D2C(v31, v23);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v15,
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
            (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v30 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v30,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v30;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v30,
        (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v31 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v32 = value[1].klass;
    v33 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
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
    (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v40 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v62,
            (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    if ( !v40 )
      break;
    v42 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v62.fields._current.fields.key;
    v43 = v62.fields._current.fields.value;
    if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v42 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v42->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = ServantPassiveSkillMaster___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v42->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__6_0, v46, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0,
        (int32_t)_9__6_0,
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
      _9__6_0,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v54 = (System_Collections_Generic_Dictionary_object__object__o *)v60->fields.listCache;
    v55 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v43,
            (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v54 )
      sub_1C93D2C(v55, v56);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v54,
      key,
      &v55->obj,
      (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v43[1].monitor;
    v58 = HIDWORD(v43[1].monitor) + 1;
    LODWORD(v43[1].monitor) = 0;
    HIDWORD(v43[1].monitor) = v58;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v43[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v62,
    (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_352ED30 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D313D5 & 1) == 0 )
  {
    sub_1C93AD4(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4D313D5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantPassiveSkillMaster___c___ctor(ServantPassiveSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantPassiveSkillMaster___c___EnumerateSpecialSkillsBySvtId_b__8_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.num > 9;
}


int32_t ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C93D2C(this, a);
  return a->fields.priority - b->fields.priority;
}