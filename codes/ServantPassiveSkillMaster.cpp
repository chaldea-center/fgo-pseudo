void ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C27C9D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
    byte_4C27C9D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
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

  if ( (byte_4C27CA1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
    sub_1C2D490(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_1C2D490(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__);
    sub_1C2D490(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4C27CA1 = 1;
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
    _9__8_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__8_0,
      v9,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v7,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
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

  if ( (byte_4C27C9B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
    byte_4C27C9B = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_338C850 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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
  const MethodInfo *v37; // [xsp+8h] [xbp-78h]
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C27CA6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C27CA6 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !this->fields.list )
    goto LABEL_52;
  nowTime = (int64_t)Instance[7].klass;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v10);
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
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v19 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v22 = (ServantPassiveSkillEntity_o *)v20;
    if ( !v20 )
      sub_1C2D6EC(0, v21);
    if ( !v3 )
      sub_1C2D6EC(v20, v21);
    if ( !System_Collections_Generic_List_int___Contains(
            v3,
            *(_DWORD *)(v20 + 28),
            (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      isUse = ServantPassiveSkillEntity__isUse(v22, userIdNumber, 1, 0, 1, 0, -1, 1, nowTime, v37);
      if ( isUse )
      {
        if ( !Master_object )
          sub_1C2D6EC(isUse, v24);
        if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, v22->fields.skillId, 1, 0) )
        {
          if ( !entity )
            sub_1C2D6EC(0, v25);
          IsSetGroupId = SkillLvEntity__IsSetGroupId(entity, 0);
          if ( IsSetGroupId )
          {
            if ( !entity )
              sub_1C2D6EC(IsSetGroupId, v27);
            skillId = (unsigned int)entity->fields.skillId;
            items = v3->fields._items;
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++v3->fields._version;
            if ( !items )
              sub_1C2D6EC(IsSetGroupId, skillId);
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v3,
                skillId,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
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
    v35 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                               Enumerator,
                               *(_QWORD *)(v35 + 8));
  if ( !v3 )
LABEL_52:
    sub_1C2D6EC(Instance, v8);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v10; // x1
  System_Collections_ICollection_o *v11; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x23
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

  if ( (byte_4C27CA5 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_ItemEntity___);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EventItemUsedInfo__ItemEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_ItemEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventItemUsedInfo___);
    sub_1C2D490(&System_Func_EventItemUsedInfo__bool__TypeInfo);
    sub_1C2D490(&System_Func_EventItemUsedInfo__ItemEntity__TypeInfo);
    sub_1C2D490(&System_Func_ItemEntity__int__TypeInfo);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_ServantPassiveSkillMaster___c__GetItemLinkSkillIds_b__13_2__);
    sub_1C2D490(&Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__0__);
    sub_1C2D490(&Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__1__);
    sub_1C2D490(&ServantPassiveSkillMaster___c__DisplayClass13_0_TypeInfo);
    sub_1C2D490(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4C27CA5 = 1;
  }
  v8 = sub_1C2D6DC(ServantPassiveSkillMaster___c__DisplayClass13_0_TypeInfo);
  ServantPassiveSkillMaster___c__DisplayClass13_0___ctor((ServantPassiveSkillMaster___c__DisplayClass13_0_o *)v8, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
  if ( !Master_object )
    goto LABEL_23;
  v11 = (System_Collections_ICollection_o *)UserEventItemLinkSvtMaster__EnableEventItemUsedInfo(
                                              (UserEventItemLinkSvtMaster_o *)Master_object,
                                              nowTime,
                                              0);
  if ( BasicHelper__IsNullOrEmpty(v11, 0) )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v8 )
    goto LABEL_23;
  *(_QWORD *)(v8 + 24) = Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v8 + 24), (int32_t)Master_object, v13, v14);
  v15 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantTransformMaster___);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Master_object = (Il2CppObject *)ImageLimitCount__ConvertDispLimitCountForServer(dispLimitCount, 0);
  if ( !v15 )
LABEL_23:
    sub_1C2D6EC(Master_object, v10);
  v16 = ServantTransformMaster__GetBeforeTransformEntity(
          (ServantTransformMaster_o *)v15,
          svtId,
          (int32_t)Master_object,
          0);
  if ( v16 )
    svtId = v16->fields.befSvtId;
  *(_DWORD *)(v8 + 16) = svtId;
  v17 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventItemUsedInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v8,
    Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventItemUsedInfo___);
  v19 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_EventItemUsedInfo__ItemEntity__TypeInfo);
  System_Func_object__object____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__1__,
    0);
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v18,
                                                         (System_Func_TSource__TResult__o *)v19,
                                                         (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_EventItemUsedInfo__ItemEntity___);
  v21 = BasicHelper__ExcludeNull_object_(v20, (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_ItemEntity___);
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
    _9__13_2 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_ItemEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__13_2,
      v24,
      Method_ServantPassiveSkillMaster___c__GetItemLinkSkillIds_b__13_2__,
      0);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_2 = (struct System_Func_ItemEntity__int__o *)_9__13_2;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__13_2, (int32_t)_9__13_2, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__13_2,
                                                               (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_ItemEntity__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v28,
           (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4C27C9C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
    byte_4C27C9C = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
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
  if ( (byte_4C27CA2 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__);
    byte_4C27CA2 = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1C2D6EC(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  __int64 v23; // x1
  ServantEntity_o *v24; // x26
  const MethodInfo *v25; // x3
  int32_t v26; // w29
  int32_t ServantLimitCountSealAfter; // w25
  int32_t LimitCountByDispLimit; // w0
  const MethodInfo *v29; // x5
  BalanceConfig_c *v30; // x0
  __int64 v31; // x26
  bool v32; // w22
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x6
  ServantPassiveSkillEntity_array *UseEntityList; // x27
  unsigned __int64 v38; // x28
  unsigned int v39; // w25
  __int64 i; // x24
  System_Int32_array *v41; // x8
  System_String_array *v42; // x8
  System_String_array *v43; // x10
  System_Int32_array *v44; // x8
  unsigned __int64 max_length_low; // x9
  il2cpp_array_size_t max_length; // x10
  int v47; // w9
  System_String_array *v48; // x8
  unsigned __int64 v49; // x9
  System_String_o *v50; // x1
  Il2CppClass **v51; // x0
  const MethodInfo *v52; // x3
  System_String_array *v53; // x8
  unsigned __int64 v54; // x9
  System_String_o *v55; // x1
  Il2CppClass **v56; // x0
  System_String_array *v57; // x8
  const MethodInfo *v58; // x3
  System_String_array *v59; // x8
  System_Collections_ICollection_o *ItemLinkSkillIds; // x0
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

  if ( (byte_4C27CA4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27CA4 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_75;
  v24 = (ServantEntity_o *)Instance;
  IsServantEquip = SvtType__IsServantEquip(*((_DWORD *)&Instance->fields.lastFrameTime + 1), 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v76 = this;
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_75;
  v26 = limitCount;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 limitCount,
                                 v25);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, ServantLimitCountSealAfter, 0);
  ServantEntity__getClassSkillInfo(v24, idList, titleList, explanationList, LimitCountByDispLimit, v29);
  v30 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  v31 = sub_1C2D538(int___TypeInfo, (unsigned int)v30->static_fields->SvtPassiveSkillListMax);
  svtIda = svtId;
  v32 = IsServantEquip;
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    v76,
                    svtId,
                    userId,
                    svtLv,
                    v26,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    nowTime,
                    v75);
  v38 = 0;
  v39 = 0;
  for ( i = 32; ; i += 8 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v38 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_75;
    if ( v38 >= LODWORD(UseEntityList->max_length) )
      goto LABEL_76;
    Instance = (DataManager_o *)UseEntityList->m_Items[v38];
    v41 = *idList;
    if ( Instance )
    {
      if ( !v41 )
        goto LABEL_75;
      if ( v39 >= LODWORD(v41->max_length) )
        goto LABEL_76;
      v41->m_Items[v39] = HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v31 )
        goto LABEL_75;
      v42 = *titleList;
      if ( !*titleList )
        goto LABEL_75;
      v43 = *explanationList;
      if ( !*explanationList )
        goto LABEL_75;
      if ( v39 >= *(_DWORD *)(v31 + 24) || v39 >= LODWORD(v42->max_length) || v39 >= LODWORD(v43->max_length) )
        goto LABEL_76;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v31 + 4LL * (int)v39 + 32),
        &v42->m_Items[v39],
        &v43->m_Items[v39],
        0,
        v32,
        v36);
      if ( v38 != v39 )
      {
        v44 = *idList;
        if ( !*idList )
          goto LABEL_75;
        max_length_low = LODWORD(v44->max_length);
        goto LABEL_44;
      }
      goto LABEL_50;
    }
    if ( !v41 )
      goto LABEL_75;
    max_length = v41->max_length;
    if ( v38 >= (unsigned int)max_length )
      goto LABEL_76;
    v47 = v41->m_Items[v38];
    if ( v47 >= 1 )
    {
      if ( v38 != v39 )
      {
        if ( v39 >= (unsigned int)max_length )
          goto LABEL_76;
        v41->m_Items[v39] = v47;
        v48 = *titleList;
        if ( !*titleList )
          goto LABEL_75;
        v49 = LODWORD(v48->max_length);
        if ( v38 >= v49 || v39 >= (unsigned int)v49 )
          goto LABEL_76;
        v50 = v48->m_Items[v38];
        v51 = &v48->obj.klass + (int)v39;
        v51[4] = (Il2CppClass *)v50;
        sub_1C2D434((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v50, v33, v34);
        v53 = *explanationList;
        if ( !*explanationList )
          goto LABEL_75;
        v54 = LODWORD(v53->max_length);
        if ( v38 >= v54 || v39 >= (unsigned int)v54 )
LABEL_76:
          sub_1C2D6F4(Instance, v23, v33);
        v55 = v53->m_Items[v38];
        v56 = &v53->obj.klass + (int)v39;
        v56[4] = (Il2CppClass *)v55;
        sub_1C2D434((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v55, v33, v52);
        v44 = *idList;
        if ( !*idList )
          goto LABEL_75;
        max_length_low = LODWORD(v44->max_length);
        v32 = IsServantEquip;
LABEL_44:
        if ( v38 >= max_length_low )
          goto LABEL_76;
        v44->m_Items[v38] = 0;
        v57 = *titleList;
        if ( !*titleList )
          goto LABEL_75;
        if ( v38 >= LODWORD(v57->max_length) )
          goto LABEL_76;
        v57->m_Items[v38] = 0;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)v57 + i), 0, v33, v34);
        v59 = *explanationList;
        if ( !*explanationList )
          goto LABEL_75;
        if ( v38 >= LODWORD(v59->max_length) )
          goto LABEL_76;
        v59->m_Items[v38] = 0;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)v59 + i), 0, v33, v58);
      }
LABEL_50:
      ++v39;
    }
    ++v38;
  }
  ItemLinkSkillIds = (System_Collections_ICollection_o *)ServantPassiveSkillMaster__GetItemLinkSkillIds(
                                                           (ServantPassiveSkillMaster_o *)Instance,
                                                           svtIda,
                                                           dispLimitCount,
                                                           nowTime,
                                                           v35);
  if ( !isMySvt )
    goto LABEL_73;
  v62 = ItemLinkSkillIds;
  if ( BasicHelper__IsNullOrEmpty(ItemLinkSkillIds, 0) )
    goto LABEL_73;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v62 )
LABEL_75:
    sub_1C2D6EC(Instance, v23);
  monitor = v62[1].monitor;
  if ( (int)monitor < 1 )
  {
LABEL_73:
    if ( v39 )
      return;
LABEL_74:
    *idList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)idList, 0, v33, v61);
    *titleList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)titleList, 0, v71, v72);
    *explanationList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)explanationList, 0, v73, v74);
    return;
  }
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v65 = 0;
  v66 = v39;
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
                                  (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
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
      SkillEntity__GetEffectExplanation((SkillEntity_o *)entity, &v69->m_Items[v66], &v70->m_Items[v66], 0, v32, 0);
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
  if ( (byte_4C27C9E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27C9E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_63496112(v4, (System_String_o *)StringLiteral_1456/*":"*/, v5, 0);
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  v3 = svtId;
  if ( (byte_4C27CA0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    byte_4C27CA0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v12 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v14[4] = *(Il2CppClass **)&svtId;
            sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), svtId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, *(_QWORD *)&svtId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v7,
                                              (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
  __int64 v18; // x1
  __int64 v19; // x2
  ServantPassiveSkillEntity_array *v20; // x24
  unsigned int i; // w29
  Il2CppClass **v22; // x8
  ServantPassiveSkillEntity_o *v23; // x27
  const MethodInfo *v25; // [xsp+8h] [xbp-68h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v20 = EntityListFromIdNum;
    for ( i = LODWORD(EntityListFromIdNum->max_length) - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= LODWORD(v20->max_length) )
        sub_1C2D6F4(EntityListFromIdNum, v18, v19);
      v22 = &v20->obj.klass + i;
      v23 = (ServantPassiveSkillEntity_o *)v22[4];
      if ( !v23 )
        sub_1C2D6EC(EntityListFromIdNum, v18);
      EntityListFromIdNum = (ServantPassiveSkillEntity_array *)ServantPassiveSkillEntity__isUse(
                                                                 (ServantPassiveSkillEntity_o *)v22[4],
                                                                 userId,
                                                                 svtLv,
                                                                 limitCount,
                                                                 dispLimitCount,
                                                                 friendshipRank,
                                                                 beforeClearQuestId,
                                                                 isMySvt,
                                                                 nowTime,
                                                                 v25);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v23;
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
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  ServantPassiveSkillEntity_o *v24; // x19
  unsigned __int64 v25; // x29
  __int64 v27; // x0
  const MethodInfo *v28; // [xsp+18h] [xbp-88h]

  if ( (byte_4C27CA3 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&ServantPassiveSkillEntity___TypeInfo);
    byte_4C27CA3 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (unsigned int *)sub_1C2D538(
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
                  v28);
    if ( !v15 )
      sub_1C2D6EC(UseEntity, v21);
    v24 = UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_1C2D5CC(UseEntity, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
      if ( !UseEntity )
      {
        v27 = sub_1C2D710(0);
        sub_1C2D5B8(v27, 0);
      }
    }
    v25 = v19 - 1;
    if ( v25 >= v15[6] )
      sub_1C2D6F4(UseEntity, v21, v22);
    i->klass = (CGThumbnailListItem_c *)v24;
    sub_1C2D434(i, (int32_t)v24, v22, v23);
    v16 = v25 + 1;
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
  const MethodInfo *v25; // x3
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
  ServantPassiveSkillMaster___c_c *v38; // x8
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Comparison_T__o *_9__6_0; // x23
  Il2CppObject *v41; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_Dictionary_object__object__o *v45; // x23
  System_Object_array *v46; // x0
  __int64 v47; // x1
  int32_t monitor; // w2
  int v49; // w8
  ServantPassiveSkillMaster_o *v51; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C27C9F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
    sub_1C2D490(&System_Comparison_ServantPassiveSkillEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_1C2D490(&ServantPassiveSkillEntity_TypeInfo);
    sub_1C2D490(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__);
    sub_1C2D490(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4C27C9F = 1;
  }
  value = 0;
  memset(&v53, 0, sizeof(v53));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_344A4B0 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v51 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v5);
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
      v10 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v14 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1C2D6EC(0, v16);
    naturalAligment = ServantPassiveSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)naturalAligment
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * naturalAligment - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_1C2D9AC(v15);
LABEL_51:
      sub_1C2D6EC(v27, v23);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v15,
                                    *(_DWORD *)(v15 + 16),
                                    *(_DWORD *)(v15 + 20),
                                    v17);
    if ( !v4 )
      sub_1C2D6EC(PriorityKey, v21);
    v22 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v26 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v26;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v26,
        (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v27 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v28 = value[1].klass;
    v29 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v28 )
      sub_1C2D6EC(v27, v23);
    size = v27->fields._size;
    if ( (unsigned int)size >= LODWORD(v28->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        v18,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v28->_1.image + size;
      v27->fields._size = size + 1;
      v31[4] = v18;
      sub_1C2D434((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v18, v24, v25);
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
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_34:
    v35 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v35 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C2D6EC(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v52,
    v4,
    (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v36 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v53,
            (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    if ( !v36 )
      break;
    v38 = ServantPassiveSkillMaster___c_TypeInfo;
    current = v53.fields._current;
    if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v38 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v38->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = ServantPassiveSkillMaster___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__6_0, v41, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v43, v44);
    }
    if ( !current.fields.value )
      sub_1C2D6EC(v36, v37);
    System_Collections_Generic_List_object___Sort_58242632(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__6_0,
      (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v45 = (System_Collections_Generic_Dictionary_object__object__o *)v51->fields.listCache;
    v46 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v45 )
      sub_1C2D6EC(v46, v47);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v45,
      current.fields.key,
      &v46->obj,
      (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v49 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v49;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v53,
    (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_344A4B0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27CA8 & 1) == 0 )
  {
    sub_1C2D490(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4C27CA8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return x->fields.num > 9;
}


int32_t ServantPassiveSkillMaster___c___GetItemLinkSkillIds_b__13_2(
        ServantPassiveSkillMaster___c_o *this,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1C2D6EC(this, 0);
  return itemEntity->fields.value;
}


int32_t ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C2D6EC(this, a);
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
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C27CA9 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4C27CA9 = 1;
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
                                                                (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1C2D6EC(this, usedInfo);
  if ( LODWORD(entity[3].klass) == 40 )
    return (ItemEntity_o *)entity;
  else
    return 0;
}