void ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C383A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
    byte_4C383A0 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
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
  const MethodInfo *v12; // x3

  if ( (byte_4C383A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
    sub_1C32C20(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_1C32C20(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__);
    sub_1C32C20(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4C383A4 = 1;
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
    _9__8_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__8_0,
      v9,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v7,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
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

  if ( (byte_4C3839E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
    byte_4C3839E = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_339B2F0 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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
  int64_t nowTime; // x25
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  ServantPassiveSkillEntity_o *v19; // x23
  _BOOL8 isUse; // x0
  _BOOL8 IsSetGroupId; // x0
  int32_t skillId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  const MethodInfo *v31; // [xsp+8h] [xbp-78h]
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C383A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C383A9 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !this->fields.list )
    goto LABEL_52;
  nowTime = (int64_t)Instance[7].klass;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_18;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v13 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_25;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_25:
      v17 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v19 = (ServantPassiveSkillEntity_o *)v18;
    if ( !v18 )
      sub_1C32E7C(0);
    if ( !v3 )
      sub_1C32E7C(v18);
    if ( !System_Collections_Generic_List_int___Contains(
            v3,
            *(_DWORD *)(v18 + 28),
            (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      isUse = ServantPassiveSkillEntity__isUse(v19, userIdNumber, 1, 0, 1, 0, -1, 1, nowTime, v31);
      if ( isUse )
      {
        if ( !Master_object )
          sub_1C32E7C(isUse);
        if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, v19->fields.skillId, 1, 0) )
        {
          if ( !entity )
            sub_1C32E7C(0);
          IsSetGroupId = SkillLvEntity__IsSetGroupId(entity, 0);
          if ( IsSetGroupId )
          {
            if ( !entity )
              sub_1C32E7C(IsSetGroupId);
            skillId = entity->fields.skillId;
            items = v3->fields._items;
            v24 = Method_System_Collections_Generic_List_int__Add__;
            ++v3->fields._version;
            if ( !items )
              sub_1C32E7C(IsSetGroupId);
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v3,
                skillId,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
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
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_44;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_44:
    v29 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                               Enumerator,
                               *(_QWORD *)(v29 + 8));
  if ( !v3 )
LABEL_52:
    sub_1C32E7C(Instance);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *ServantPassiveSkillMaster__GetItemLinkSkillIds(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v8; // x21
  Il2CppObject *Master_object; // x0
  System_Collections_ICollection_o *v10; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x23
  const MethodInfo *v15; // x3
  ServantTransformEntity_o *v16; // x0
  System_Func_object__bool__o *v17; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__object__o *v19; // x20
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x19
  ServantPassiveSkillMaster___c_c *v22; // x8
  System_Func_object__int__o *_9__13_2; // x20
  Il2CppObject *v24; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4C383A8 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_ItemEntity___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_EventItemUsedInfo__ItemEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_ItemEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventItemUsedInfo___);
    sub_1C32C20(&System_Func_EventItemUsedInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_EventItemUsedInfo__ItemEntity__TypeInfo);
    sub_1C32C20(&System_Func_ItemEntity__int__TypeInfo);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_ServantPassiveSkillMaster___c__GetItemLinkSkillIds_b__13_2__);
    sub_1C32C20(&Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__0__);
    sub_1C32C20(&Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__1__);
    sub_1C32C20(&ServantPassiveSkillMaster___c__DisplayClass13_0_TypeInfo);
    sub_1C32C20(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4C383A8 = 1;
  }
  v8 = sub_1C32E6C(ServantPassiveSkillMaster___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
  if ( !Master_object )
    goto LABEL_23;
  v10 = (System_Collections_ICollection_o *)UserEventItemLinkSvtMaster__EnableEventItemUsedInfo(
                                              (UserEventItemLinkSvtMaster_o *)Master_object,
                                              nowTime,
                                              0);
  if ( BasicHelper__IsNullOrEmpty(v10, 0) )
    return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v8 )
    goto LABEL_23;
  *(_QWORD *)(v8 + 24) = Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 24), (int32_t)Master_object, v12, v13);
  v14 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantTransformMaster___);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Master_object = (Il2CppObject *)ImageLimitCount__ConvertDispLimitCountForServer(dispLimitCount, 0);
  if ( !v14 )
LABEL_23:
    sub_1C32E7C(Master_object);
  v16 = ServantTransformMaster__GetBeforeTransformEntity(
          (ServantTransformMaster_o *)v14,
          svtId,
          (int32_t)Master_object,
          v15);
  if ( v16 )
    svtId = v16->fields.befSvtId;
  *(_DWORD *)(v8 + 16) = svtId;
  v17 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventItemUsedInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v8,
    Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventItemUsedInfo___);
  v19 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_EventItemUsedInfo__ItemEntity__TypeInfo);
  System_Func_object__object____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__1__,
    0);
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v18,
                                                         (System_Func_TSource__TResult__o *)v19,
                                                         (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_EventItemUsedInfo__ItemEntity___);
  v21 = BasicHelper__ExcludeNull_object_(v20, (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_ItemEntity___);
  v22 = ServantPassiveSkillMaster___c_TypeInfo;
  if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v22 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__int__o *)v22->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__13_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_ItemEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__13_2,
      v24,
      Method_ServantPassiveSkillMaster___c__GetItemLinkSkillIds_b__13_2__,
      0);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_2 = (struct System_Func_ItemEntity__int__o *)_9__13_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__13_2, (int32_t)_9__13_2, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__13_2,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_ItemEntity__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v28,
           (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4C3839F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
    byte_4C3839F = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
}


ServantPassiveSkillEntity_array *ServantPassiveSkillMaster__getEntityListFromIdNum(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantPassiveSkillMaster_o *v6; // x20
  Il2CppObject *PriorityKey; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C383A5 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__);
    byte_4C383A5 = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1C32E7C(PriorityKey);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  ServantEntity_o *v23; // x26
  int32_t v24; // w29
  int32_t ServantLimitCountSealAfter; // w25
  int32_t LimitCountByDispLimit; // w0
  BalanceConfig_c *v27; // x0
  __int64 v28; // x26
  bool v29; // w22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x4
  const MethodInfo *v33; // x6
  ServantPassiveSkillEntity_array *UseEntityList; // x27
  unsigned __int64 v35; // x28
  unsigned int v36; // w25
  __int64 i; // x24
  System_Int32_array *v38; // x8
  System_String_array *v39; // x8
  System_String_array *v40; // x10
  System_Int32_array *v41; // x8
  unsigned __int64 max_length_low; // x9
  il2cpp_array_size_t max_length; // x10
  int v44; // w9
  System_String_array *v45; // x8
  unsigned __int64 v46; // x9
  System_String_o *v47; // x1
  Il2CppClass **v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_String_array *v51; // x8
  unsigned __int64 v52; // x9
  System_String_o *v53; // x1
  Il2CppClass **v54; // x0
  System_String_array *v55; // x8
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_String_array *v58; // x8
  System_Collections_ICollection_o *ItemLinkSkillIds; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Collections_ICollection_o *v62; // x23
  void *monitor; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x24
  unsigned __int64 v65; // x26
  unsigned int v66; // w27
  int32_t v67; // w25
  System_Int32_array *v68; // x9
  System_String_array *v69; // x9
  System_String_array *v70; // x10
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // [xsp+10h] [xbp-A0h]
  ServantPassiveSkillMaster_o *v76; // [xsp+20h] [xbp-90h]
  int32_t svtIda; // [xsp+34h] [xbp-7Ch]
  bool IsServantEquip; // [xsp+44h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C383A7 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C383A7 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_75;
  v23 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v76 = this;
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_75;
  v24 = limitCount;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 limitCount,
                                 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, ServantLimitCountSealAfter, 0);
  ServantEntity__getClassSkillInfo(v23, idList, titleList, explanationList, LimitCountByDispLimit, 0);
  v27 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  v28 = sub_1C32CC8(int___TypeInfo, (unsigned int)v27->static_fields->SvtPassiveSkillListMax);
  svtIda = svtId;
  v29 = IsServantEquip;
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    v76,
                    svtId,
                    userId,
                    svtLv,
                    v24,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    nowTime,
                    v75);
  v35 = 0;
  v36 = 0;
  for ( i = 32; ; i += 8 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v35 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_75;
    if ( v35 >= LODWORD(UseEntityList->max_length) )
      goto LABEL_76;
    Instance = (DataManager_o *)UseEntityList->m_Items[v35];
    v38 = *idList;
    if ( Instance )
    {
      if ( !v38 )
        goto LABEL_75;
      if ( v36 >= LODWORD(v38->max_length) )
        goto LABEL_76;
      v38->m_Items[v36] = HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v28 )
        goto LABEL_75;
      v39 = *titleList;
      if ( !*titleList )
        goto LABEL_75;
      v40 = *explanationList;
      if ( !*explanationList )
        goto LABEL_75;
      if ( v36 >= *(_DWORD *)(v28 + 24) || v36 >= LODWORD(v39->max_length) || v36 >= LODWORD(v40->max_length) )
        goto LABEL_76;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v28 + 4LL * (int)v36 + 32),
        &v39->m_Items[v36],
        &v40->m_Items[v36],
        0,
        v29,
        v33);
      if ( v35 != v36 )
      {
        v41 = *idList;
        if ( !*idList )
          goto LABEL_75;
        max_length_low = LODWORD(v41->max_length);
        goto LABEL_44;
      }
      goto LABEL_50;
    }
    if ( !v38 )
      goto LABEL_75;
    max_length = v38->max_length;
    if ( v35 >= (unsigned int)max_length )
      goto LABEL_76;
    v44 = v38->m_Items[v35];
    if ( v44 >= 1 )
    {
      if ( v35 != v36 )
      {
        if ( v36 >= (unsigned int)max_length )
          goto LABEL_76;
        v38->m_Items[v36] = v44;
        v45 = *titleList;
        if ( !*titleList )
          goto LABEL_75;
        v46 = LODWORD(v45->max_length);
        if ( v35 >= v46 || v36 >= (unsigned int)v46 )
          goto LABEL_76;
        v47 = v45->m_Items[v35];
        v48 = &v45->obj.klass + (int)v36;
        v48[4] = (Il2CppClass *)v47;
        sub_1C32BC4((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v47, v30, v31);
        v51 = *explanationList;
        if ( !*explanationList )
          goto LABEL_75;
        v52 = LODWORD(v51->max_length);
        if ( v35 >= v52 || v36 >= (unsigned int)v52 )
LABEL_76:
          sub_1C32E84(Instance);
        v53 = v51->m_Items[v35];
        v54 = &v51->obj.klass + (int)v36;
        v54[4] = (Il2CppClass *)v53;
        sub_1C32BC4((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v53, v49, v50);
        v41 = *idList;
        if ( !*idList )
          goto LABEL_75;
        max_length_low = LODWORD(v41->max_length);
        v29 = IsServantEquip;
LABEL_44:
        if ( v35 >= max_length_low )
          goto LABEL_76;
        v41->m_Items[v35] = 0;
        v55 = *titleList;
        if ( !*titleList )
          goto LABEL_75;
        if ( v35 >= LODWORD(v55->max_length) )
          goto LABEL_76;
        v55->m_Items[v35] = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)((char *)v55 + i), 0, v30, v31);
        v58 = *explanationList;
        if ( !*explanationList )
          goto LABEL_75;
        if ( v35 >= LODWORD(v58->max_length) )
          goto LABEL_76;
        v58->m_Items[v35] = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)((char *)v58 + i), 0, v56, v57);
      }
LABEL_50:
      ++v36;
    }
    ++v35;
  }
  ItemLinkSkillIds = (System_Collections_ICollection_o *)ServantPassiveSkillMaster__GetItemLinkSkillIds(
                                                           (ServantPassiveSkillMaster_o *)Instance,
                                                           svtIda,
                                                           dispLimitCount,
                                                           nowTime,
                                                           v32);
  if ( !isMySvt )
    goto LABEL_73;
  v62 = ItemLinkSkillIds;
  if ( BasicHelper__IsNullOrEmpty(ItemLinkSkillIds, 0) )
    goto LABEL_73;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v62 )
LABEL_75:
    sub_1C32E7C(Instance);
  monitor = v62[1].monitor;
  if ( (int)monitor < 1 )
  {
LABEL_73:
    if ( v36 )
      return;
LABEL_74:
    *idList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)idList, 0, v60, v61);
    *titleList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)titleList, 0, v71, v72);
    *explanationList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)explanationList, 0, v73, v74);
    return;
  }
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v65 = 0;
  v66 = v36;
  do
  {
    if ( v65 >= (unsigned int)monitor )
      goto LABEL_76;
    if ( !v64 )
      goto LABEL_75;
    v67 = *((_DWORD *)&v62[2].klass + v65);
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v64,
                                  &entity,
                                  v67,
                                  (const MethodInfo_3396884 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v68 = *idList;
      if ( !*idList )
        goto LABEL_75;
      if ( v66 >= LODWORD(v68->max_length) )
        goto LABEL_76;
      v68->m_Items[v66] = v67;
      v69 = *titleList;
      if ( !*titleList )
        goto LABEL_75;
      v70 = *explanationList;
      if ( !*explanationList )
        goto LABEL_75;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_75;
      if ( v66 >= LODWORD(v69->max_length) || v66 >= LODWORD(v70->max_length) )
        goto LABEL_76;
      SkillEntity__GetEffectExplanation((SkillEntity_o *)entity, &v69->m_Items[v66], &v70->m_Items[v66], 0, v29, 0);
      ++v66;
    }
    LODWORD(monitor) = v62[1].monitor;
    ++v65;
  }
  while ( (__int64)v65 < (int)monitor );
  if ( !v66 )
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
  if ( (byte_4C383A1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C383A1 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_63556792(v4, (System_String_o *)StringLiteral_1457/*":"*/, v5, 0);
}


ServantPassiveSkillEntity_array *ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C383A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    byte_4C383A3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
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
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( LODWORD(list->fields.items) == svtId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v11;
            sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C32E7C(list);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v7,
                                              (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
        const MethodInfo *method)
{
  ServantPassiveSkillEntity_array *EntityListFromIdNum; // x0
  ServantPassiveSkillEntity_array *v18; // x24
  unsigned int i; // w29
  Il2CppClass **v20; // x8
  ServantPassiveSkillEntity_o *v21; // x27
  const MethodInfo *v23; // [xsp+8h] [xbp-68h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v18 = EntityListFromIdNum;
    for ( i = LODWORD(EntityListFromIdNum->max_length) - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= LODWORD(v18->max_length) )
        sub_1C32E84(EntityListFromIdNum);
      v20 = &v18->obj.klass + i;
      v21 = (ServantPassiveSkillEntity_o *)v20[4];
      if ( !v21 )
        sub_1C32E7C(EntityListFromIdNum);
      EntityListFromIdNum = (ServantPassiveSkillEntity_array *)ServantPassiveSkillEntity__isUse(
                                                                 (ServantPassiveSkillEntity_o *)v20[4],
                                                                 userId,
                                                                 svtLv,
                                                                 limitCount,
                                                                 dispLimitCount,
                                                                 friendshipRank,
                                                                 beforeClearQuestId,
                                                                 isMySvt,
                                                                 nowTime,
                                                                 v23);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v21;
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
        const MethodInfo *method)
{
  BalanceConfig_c *v14; // x0
  unsigned int *v15; // x27
  signed __int64 v16; // x19
  CGThumbnailListItem_o *i; // x22
  BalanceConfig_c *v18; // x0
  signed __int64 v19; // x29
  ServantPassiveSkillEntity_o *UseEntity; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ServantPassiveSkillEntity_o *v23; // x19
  unsigned __int64 v24; // x29
  __int64 v26; // x0
  const MethodInfo *v27; // [xsp+18h] [xbp-88h]

  if ( (byte_4C383A6 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&ServantPassiveSkillEntity___TypeInfo);
    byte_4C383A6 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (unsigned int *)sub_1C32CC8(
                          ServantPassiveSkillEntity___TypeInfo,
                          (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
  v16 = 0;
  for ( i = (CGThumbnailListItem_o *)(v15 + 8); ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
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
                  v27);
    if ( !v15 )
      sub_1C32E7C(UseEntity);
    v23 = UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_1C32D5C(UseEntity, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
      if ( !UseEntity )
      {
        v26 = sub_1C32EA0(0);
        sub_1C32D48(v26, 0);
      }
    }
    v24 = v19 - 1;
    if ( v24 >= v15[6] )
      sub_1C32E84(UseEntity);
    i->klass = (CGThumbnailListItem_c *)v23;
    sub_1C32BC4(i, (int32_t)v23, v21, v22);
    v16 = v24 + 1;
  }
  return (ServantPassiveSkillEntity_array *)v15;
}


bool ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *PriorityKey; // x0
  Il2CppObject *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x24
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppClass *v24; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  void **v27; // x8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  _BOOL8 v32; // x0
  ServantPassiveSkillMaster___c_c *v33; // x8
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Comparison_T__o *_9__6_0; // x23
  Il2CppObject *v36; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_Dictionary_object__object__o *v40; // x23
  System_Object_array *v41; // x0
  int32_t monitor; // w2
  int v43; // w8
  ServantPassiveSkillMaster_o *v45; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C383A2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
    sub_1C32C20(&System_Comparison_ServantPassiveSkillEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_1C32C20(&ServantPassiveSkillEntity_TypeInfo);
    sub_1C32C20(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__);
    sub_1C32C20(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4C383A2 = 1;
  }
  value = 0;
  memset(&v47, 0, sizeof(v47));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3458F50 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v45 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    v16 = (Il2CppObject *)v14;
    if ( !v14 )
      sub_1C32E7C(0);
    naturalAligment = ServantPassiveSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)naturalAligment
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * naturalAligment - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_1C3313C(v14);
LABEL_51:
      sub_1C32E7C(v23);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v14,
                                    *(_DWORD *)(v14 + 16),
                                    *(_DWORD *)(v14 + 20),
                                    v15);
    if ( !v4 )
      sub_1C32E7C(PriorityKey);
    v19 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v22 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v22,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v22;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v19,
        (Il2CppObject *)v22,
        (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v23 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v24 = value[1].klass;
    v25 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v24 )
      sub_1C32E7C(v23);
    size = v23->fields._size;
    if ( (unsigned int)size >= LODWORD(v24->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        v16,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &v24->_1.image + size;
      v23->fields._size = size + 1;
      v27[4] = v16;
      sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v16, v20, v21);
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_34:
    v31 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v31 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C32E7C(listCache);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v46,
    v4,
    (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v32 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v47,
            (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    if ( !v32 )
      break;
    v33 = ServantPassiveSkillMaster___c_TypeInfo;
    current = v47.fields._current;
    if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v33 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v33->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ServantPassiveSkillMaster___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__6_0, v36, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v38, v39);
    }
    if ( !current.fields.value )
      sub_1C32E7C(v32);
    System_Collections_Generic_List_object___Sort_58303104(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__6_0,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v40 = (System_Collections_Generic_Dictionary_object__object__o *)v45->fields.listCache;
    v41 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v40 )
      sub_1C32E7C(v41);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v40,
      current.fields.key,
      &v41->obj,
      (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v43 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v43;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v47,
    (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_3458F50 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C383AA & 1) == 0 )
  {
    sub_1C32C20(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4C383AA = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return x->fields.num > 9;
}


int32_t ServantPassiveSkillMaster___c___GetItemLinkSkillIds_b__13_2(
        ServantPassiveSkillMaster___c_o *this,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1C32E7C(this);
  return itemEntity->fields.value;
}


int32_t ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  return a->fields.priority - b->fields.priority;
}


void ServantPassiveSkillMaster___c__DisplayClass13_0___ctor(
        ServantPassiveSkillMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantPassiveSkillMaster___c__DisplayClass13_0___GetItemLinkSkillIds_b__0(
        ServantPassiveSkillMaster___c__DisplayClass13_0_o *this,
        EventItemUsedInfo_o *usedInfo,
        const MethodInfo *method)
{
  if ( !usedInfo )
    sub_1C32E7C(this);
  return usedInfo->fields.svtId == this->fields.baseSvtId;
}


ItemEntity_o *ServantPassiveSkillMaster___c__DisplayClass13_0___GetItemLinkSkillIds_b__1(
        ServantPassiveSkillMaster___c__DisplayClass13_0_o *this,
        EventItemUsedInfo_o *usedInfo,
        const MethodInfo *method)
{
  ServantPassiveSkillMaster___c__DisplayClass13_0_o *v4; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C383AB & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4C383AB = 1;
  }
  entity = 0;
  if ( !usedInfo )
    goto LABEL_12;
  this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)v4->fields.itemMaster;
  if ( !this )
    goto LABEL_12;
  this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                &entity,
                                                                usedInfo->fields.itemId,
                                                                (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1C32E7C(this);
  if ( LODWORD(entity[3].klass) == 40 )
    return (ItemEntity_o *)entity;
  else
    return 0;
}