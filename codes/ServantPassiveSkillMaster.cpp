void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BB7A2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo, v4);
    byte_49BB7A2 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3257168 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v5;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *__fastcall ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantPassiveSkillEntity_array *ServantSkillList; // x0
  ServantPassiveSkillMaster___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v12; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_49BB7A6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, *(_QWORD *)&svtId);
    sub_1B4CF90(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__, v6);
    sub_1B4CF90(&ServantPassiveSkillMaster___c_TypeInfo, v7);
    byte_49BB7A6 = 1;
  }
  ServantSkillList = ServantPassiveSkillMaster__getServantSkillList(this, svtId, method);
  v9 = ServantPassiveSkillMaster___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantSkillList;
  if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v9 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__bool__o *)v9->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__8_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__8_0,
      v12,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0LL);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v14, v15);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v10,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_o *__fastcall ServantPassiveSkillMaster__GetEntity(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB7A0 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49BB7A0 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31A2454 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
}


System_Int32_array *__fastcall ServantPassiveSkillMaster__GetEventBonusSkillIds(
        ServantPassiveSkillMaster_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v15; // x19
  __int64 v16; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v18; // x0
  int64_t userIdNumber; // x22
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  int64_t nowTime; // x25
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  ServantPassiveSkillEntity_o *v35; // x23
  _BOOL8 isUse; // x0
  __int64 v37; // x1
  __int64 v38; // x1
  _BOOL8 IsSetGroupId; // x0
  __int64 v40; // x1
  __int64 skillId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  const MethodInfo *v50; // [xsp+8h] [xbp-78h]
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49BB7AB & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B4CF90(&NetworkManager_TypeInfo, v13);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v14);
    byte_49BB7AB = 1;
  }
  entity = 0LL;
  v15 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v16);
    byte_49B57A5 = 1;
  }
  v18 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager_TypeInfo;
  }
  userIdNumber = v18->static_fields->userIdNumber;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !this->fields.list )
    goto LABEL_52;
  nowTime = (int64_t)Instance[6].monitor;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_18;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_18:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_25;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_25:
      v32 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v35 = (ServantPassiveSkillEntity_o *)v33;
    if ( !v33 )
      sub_1B4D1EC(0LL, v34);
    if ( !v15 )
      sub_1B4D1EC(v33, v34);
    if ( !System_Collections_Generic_List_int___Contains(
            v15,
            *(_DWORD *)(v33 + 28),
            (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      isUse = ServantPassiveSkillEntity__isUse(v35, userIdNumber, 1, 0, 1, 0, -1, 1, nowTime, v50);
      if ( isUse )
      {
        if ( !Master_object )
          sub_1B4D1EC(isUse, v37);
        if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, v35->fields.skillId, 1, 0LL) )
        {
          if ( !entity )
            sub_1B4D1EC(0LL, v38);
          IsSetGroupId = SkillLvEntity__IsSetGroupId(entity, 0LL);
          if ( IsSetGroupId )
          {
            if ( !entity )
              sub_1B4D1EC(IsSetGroupId, v40);
            skillId = (unsigned int)entity->fields.skillId;
            items = v15->fields._items;
            v43 = Method_System_Collections_Generic_List_int__Add__;
            ++v15->fields._version;
            if ( !items )
              sub_1B4D1EC(IsSetGroupId, skillId);
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v15,
                skillId,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v15->fields._size = size + 1;
              items->m_Items[size + 1] = skillId;
            }
          }
        }
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_44;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_44:
    v48 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                               Enumerator,
                               *(_QWORD *)(v48 + 8));
  if ( !v15 )
LABEL_52:
    sub_1B4D1EC(Instance, v21);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantPassiveSkillMaster__GetItemLinkSkillIds(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        int64_t nowTime,
        const MethodInfo *method)
{
  int32_t befSvtId; // w19
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
  __int64 v26; // x21
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  System_Collections_ICollection_o *v29; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x23
  const MethodInfo *v34; // x3
  ServantTransformEntity_o *v35; // x0
  System_Func_object__bool__o *v36; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  System_Func_object__object__o *v38; // x20
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  System_Collections_Generic_IEnumerable_T__o *v40; // x19
  ServantPassiveSkillMaster___c_c *v41; // x8
  System_Func_object__int__o *_9__13_2; // x20
  Il2CppObject *v43; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  befSvtId = svtId;
  if ( (byte_49BB7AA & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_ExcludeNull_ItemEntity___, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantTransformMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___, v10);
    sub_1B4CF90(&DataManager_TypeInfo, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_EventItemUsedInfo__ItemEntity___, v12);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_ItemEntity__int___, v13);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v14);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_EventItemUsedInfo___, v15);
    sub_1B4CF90(&System_Func_EventItemUsedInfo__bool__TypeInfo, v16);
    sub_1B4CF90(&System_Func_EventItemUsedInfo__ItemEntity__TypeInfo, v17);
    sub_1B4CF90(&System_Func_ItemEntity__int__TypeInfo, v18);
    sub_1B4CF90(&ImageLimitCount_TypeInfo, v19);
    sub_1B4CF90(&int___TypeInfo, v20);
    sub_1B4CF90(&Method_ServantPassiveSkillMaster___c__GetItemLinkSkillIds_b__13_2__, v21);
    sub_1B4CF90(&Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__0__, v22);
    sub_1B4CF90(&Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__1__, v23);
    sub_1B4CF90(&ServantPassiveSkillMaster___c__DisplayClass13_0_TypeInfo, v24);
    sub_1B4CF90(&ServantPassiveSkillMaster___c_TypeInfo, v25);
    byte_49BB7AA = 1;
  }
  v26 = sub_1B4D1DC(ServantPassiveSkillMaster___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
  if ( !Master_object )
    goto LABEL_23;
  v29 = (System_Collections_ICollection_o *)UserEventItemLinkSvtMaster__EnableEventItemUsedInfo(
                                              (UserEventItemLinkSvtMaster_o *)Master_object,
                                              nowTime,
                                              0LL);
  if ( BasicHelper__IsNullOrEmpty(v29, 0LL) )
    return (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v26 )
    goto LABEL_23;
  *(_QWORD *)(v26 + 24) = Master_object;
  sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 24), (int32_t)Master_object, v31, v32);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Master_object = (Il2CppObject *)ImageLimitCount__ConvertDispLimitCountForServer(dispLimitCount, 0LL);
  if ( !v33 )
LABEL_23:
    sub_1B4D1EC(Master_object, v28);
  v35 = ServantTransformMaster__GetBeforeTransformEntity(
          (ServantTransformMaster_o *)v33,
          befSvtId,
          (int32_t)Master_object,
          v34);
  if ( v35 )
    befSvtId = v35->fields.befSvtId;
  *(_DWORD *)(v26 + 16) = befSvtId;
  v36 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventItemUsedInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v26,
    Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__0__,
    0LL);
  v37 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (System_Func_TSource__bool__o *)v36,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_EventItemUsedInfo___);
  v38 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_EventItemUsedInfo__ItemEntity__TypeInfo);
  System_Func_object__object____ctor(
    v38,
    (Il2CppObject *)v26,
    Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__1__,
    0LL);
  v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v37,
                                                         (System_Func_TSource__TResult__o *)v38,
                                                         (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_EventItemUsedInfo__ItemEntity___);
  v40 = BasicHelper__ExcludeNull_object_(v39, (const MethodInfo_2EECDE8 *)Method_BasicHelper_ExcludeNull_ItemEntity___);
  v41 = ServantPassiveSkillMaster___c_TypeInfo;
  if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v41 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__int__o *)v41->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__13_2 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_ItemEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__13_2,
      v43,
      Method_ServantPassiveSkillMaster___c__GetItemLinkSkillIds_b__13_2__,
      0LL);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_2 = (struct System_Func_ItemEntity__int__o *)_9__13_2;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__13_2, (int32_t)_9__13_2, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                                               (System_Func_TSource__TResult__o *)_9__13_2,
                                                               (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_ItemEntity__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v47,
           (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantPassiveSkillMaster__TryGetEntity(
        ServantPassiveSkillMaster_o *this,
        ServantPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB7A1 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_49BB7A1 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getEntityListFromIdNum(
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
  if ( (byte_49BB7A7 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_1B4CF90(
                                            &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__,
                                            *(_QWORD *)&svtId);
    byte_49BB7A7 = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1B4D1EC(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
  {
    return (ServantPassiveSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


void __fastcall ServantPassiveSkillMaster__getPassiveSkillInfo(
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  ServantEntity_o *v31; // x26
  BalanceConfig_c *v32; // x0
  __int64 v33; // x26
  bool v34; // w22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x6
  ServantPassiveSkillEntity_array *UseEntityList; // x27
  unsigned __int64 v40; // x23
  unsigned int v41; // w25
  __int64 i; // x29
  System_Int32_array *v43; // x8
  System_String_array *v44; // x8
  System_String_array *v45; // x10
  System_Int32_array *v46; // x8
  unsigned __int64 max_length; // x9
  __int64 v48; // x10
  int v49; // w9
  System_String_array *v50; // x8
  unsigned __int64 v51; // x9
  System_String_o *v52; // x1
  Il2CppClass **v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_String_array *v56; // x8
  unsigned __int64 v57; // x9
  System_String_o *v58; // x1
  Il2CppClass **v59; // x0
  System_String_array *v60; // x8
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_String_array *v63; // x8
  System_Collections_ICollection_o *ItemLinkSkillIds; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_ICollection_o *v67; // x23
  void *monitor; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x24
  unsigned __int64 v70; // x26
  unsigned int v71; // w27
  int32_t v72; // w25
  System_Int32_array *v73; // x9
  System_String_array *v74; // x9
  System_String_array *v75; // x10
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // [xsp+10h] [xbp-90h]
  int32_t svtIda; // [xsp+30h] [xbp-70h]
  bool IsServantEquip; // [xsp+34h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49BB7A9 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, idList);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillMaster___, v23);
    sub_1B4CF90(&DataManager_TypeInfo, v24);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v26);
    sub_1B4CF90(&int___TypeInfo, v27);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_49BB7A9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_70;
  svtIda = svtId;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_70;
  v31 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v31, idList, titleList, explanationList, 0LL);
  v32 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  v33 = sub_1B4D038(int___TypeInfo, (unsigned int)v32->static_fields->SvtPassiveSkillListMax);
  v34 = IsServantEquip;
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    this,
                    svtId,
                    userId,
                    svtLv,
                    limitCount,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    nowTime,
                    v80);
  v40 = 0LL;
  v41 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v40 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_70;
    if ( v40 >= UseEntityList->max_length )
      goto LABEL_71;
    Instance = (DataManager_o *)UseEntityList->m_Items[v40];
    v43 = *idList;
    if ( Instance )
    {
      if ( !v43 )
        goto LABEL_70;
      if ( v41 >= v43->max_length )
        goto LABEL_71;
      v43->m_Items[v41 + 1] = HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v33 )
        goto LABEL_70;
      v44 = *titleList;
      if ( !*titleList )
        goto LABEL_70;
      v45 = *explanationList;
      if ( !*explanationList )
        goto LABEL_70;
      if ( v41 >= *(_DWORD *)(v33 + 24) || v41 >= v44->max_length || v41 >= v45->max_length )
        goto LABEL_71;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v33 + 4LL * (int)v41 + 32),
        &v44->m_Items[v41],
        &v45->m_Items[v41],
        0,
        v34,
        v38);
      if ( v40 != v41 )
      {
        v46 = *idList;
        if ( !*idList )
          goto LABEL_70;
        max_length = v46->max_length;
        goto LABEL_39;
      }
      goto LABEL_45;
    }
    if ( !v43 )
      goto LABEL_70;
    v48 = *(_QWORD *)&v43->max_length;
    if ( v40 >= (unsigned int)v48 )
      goto LABEL_71;
    v49 = v43->m_Items[v40 + 1];
    if ( v49 >= 1 )
    {
      if ( v40 != v41 )
      {
        if ( v41 >= (unsigned int)v48 )
          goto LABEL_71;
        v43->m_Items[v41 + 1] = v49;
        v50 = *titleList;
        if ( !*titleList )
          goto LABEL_70;
        v51 = v50->max_length;
        if ( v40 >= v51 || v41 >= (unsigned int)v51 )
          goto LABEL_71;
        v52 = v50->m_Items[v40];
        v53 = &v50->obj.klass + (int)v41;
        v53[4] = (Il2CppClass *)v52;
        sub_1B4CF34((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v52, v35, v36);
        v56 = *explanationList;
        if ( !*explanationList )
          goto LABEL_70;
        v57 = v56->max_length;
        if ( v40 >= v57 || v41 >= (unsigned int)v57 )
LABEL_71:
          sub_1B4D1F4(Instance, v30);
        v58 = v56->m_Items[v40];
        v59 = &v56->obj.klass + (int)v41;
        v59[4] = (Il2CppClass *)v58;
        sub_1B4CF34((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v58, v54, v55);
        v46 = *idList;
        if ( !*idList )
          goto LABEL_70;
        max_length = v46->max_length;
        v34 = IsServantEquip;
LABEL_39:
        if ( v40 >= max_length )
          goto LABEL_71;
        v46->m_Items[v40 + 1] = 0;
        v60 = *titleList;
        if ( !*titleList )
          goto LABEL_70;
        if ( v40 >= v60->max_length )
          goto LABEL_71;
        v60->m_Items[v40] = 0LL;
        sub_1B4CF34((CGThumbnailListItem_o *)((char *)v60 + i), 0, v35, v36);
        v63 = *explanationList;
        if ( !*explanationList )
          goto LABEL_70;
        if ( v40 >= v63->max_length )
          goto LABEL_71;
        v63->m_Items[v40] = 0LL;
        sub_1B4CF34((CGThumbnailListItem_o *)((char *)v63 + i), 0, v61, v62);
      }
LABEL_45:
      ++v41;
    }
    ++v40;
  }
  ItemLinkSkillIds = (System_Collections_ICollection_o *)ServantPassiveSkillMaster__GetItemLinkSkillIds(
                                                           (ServantPassiveSkillMaster_o *)Instance,
                                                           svtIda,
                                                           dispLimitCount,
                                                           nowTime,
                                                           v37);
  if ( !isMySvt )
    goto LABEL_68;
  v67 = ItemLinkSkillIds;
  if ( BasicHelper__IsNullOrEmpty(ItemLinkSkillIds, 0LL) )
    goto LABEL_68;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v67 )
LABEL_70:
    sub_1B4D1EC(Instance, v30);
  monitor = v67[1].monitor;
  if ( (int)monitor < 1 )
  {
LABEL_68:
    if ( v41 )
      return;
LABEL_69:
    *idList = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)idList, 0, v65, v66);
    *titleList = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)titleList, 0, v76, v77);
    *explanationList = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)explanationList, 0, v78, v79);
    return;
  }
  v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v70 = 0LL;
  v71 = v41;
  do
  {
    if ( v70 >= (unsigned int)monitor )
      goto LABEL_71;
    if ( !v69 )
      goto LABEL_70;
    v72 = *((_DWORD *)&v67[2].klass + v70);
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v69,
                                  &entity,
                                  v72,
                                  (const MethodInfo_319D9E8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v73 = *idList;
      if ( !*idList )
        goto LABEL_70;
      if ( v71 >= v73->max_length )
        goto LABEL_71;
      v73->m_Items[v71 + 1] = v72;
      v74 = *titleList;
      if ( !*titleList )
        goto LABEL_70;
      v75 = *explanationList;
      if ( !*explanationList )
        goto LABEL_70;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_70;
      if ( v71 >= v74->max_length || v71 >= v75->max_length )
        goto LABEL_71;
      SkillEntity__GetEffectExplanation((SkillEntity_o *)entity, &v74->m_Items[v71], &v75->m_Items[v71], 0, v34, 0LL);
      ++v71;
    }
    LODWORD(monitor) = v67[1].monitor;
    ++v70;
  }
  while ( (__int64)v70 < (int)monitor );
  if ( !v71 )
    goto LABEL_69;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillMaster__getPriorityKey(
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
  if ( (byte_49BB7A3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1468/*":"*/, *(_QWORD *)&svtId);
    byte_49BB7A3 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61131716(v4, (System_String_o *)StringLiteral_1468/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
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
  if ( (byte_49BB7A5 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v9);
    byte_49BB7A5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
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
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v17 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v19[4] = *(Il2CppClass **)&svtId;
            sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 4), svtId, v14, v15);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B4D1EC(list, *(_QWORD *)&svtId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v12,
                                              (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
}


ServantPassiveSkillEntity_o *__fastcall ServantPassiveSkillMaster__getUseEntity(
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
  ServantPassiveSkillEntity_array *v19; // x24
  unsigned int i; // w29
  Il2CppClass **v21; // x8
  ServantPassiveSkillEntity_o *v22; // x27
  const MethodInfo *v24; // [xsp+8h] [xbp-68h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v19 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v19->max_length )
        sub_1B4D1F4(EntityListFromIdNum, v18);
      v21 = &v19->obj.klass + i;
      v22 = (ServantPassiveSkillEntity_o *)v21[4];
      if ( !v22 )
        sub_1B4D1EC(EntityListFromIdNum, v18);
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
                                                                 v24);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v22;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getUseEntityList(
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
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  ServantPassiveSkillEntity_array *v16; // x27
  signed __int64 v17; // x19
  CGThumbnailListItem_o *i; // x22
  BalanceConfig_c *v19; // x0
  signed __int64 v20; // x29
  ServantPassiveSkillEntity_o *UseEntity; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ServantPassiveSkillEntity_o *v25; // x19
  unsigned __int64 v26; // x29
  __int64 v28; // x0
  const MethodInfo *v29; // [xsp+18h] [xbp-88h]

  if ( (byte_49BB7A8 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B4CF90(&ServantPassiveSkillEntity___TypeInfo, v14);
    byte_49BB7A8 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantPassiveSkillEntity_array *)sub_1B4D038(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v15->static_fields->SvtPassiveSkillListMax);
  v17 = 0LL;
  for ( i = (CGThumbnailListItem_o *)v16->m_Items; ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    if ( v17 >= v19->static_fields->SvtPassiveSkillListMax )
      break;
    v20 = v17 + 1;
    UseEntity = ServantPassiveSkillMaster__getUseEntity(
                  this,
                  svtId,
                  (int)v17 + 1,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  friendshipRank,
                  beforeClearQuestId,
                  isMySvt,
                  nowTime,
                  v29);
    if ( !v16 )
      sub_1B4D1EC(UseEntity, v22);
    v25 = UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_1B4D0CC(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v28 = sub_1B4D210(0LL);
        sub_1B4D0B8(v28, 0LL);
      }
    }
    v26 = v20 - 1;
    if ( v26 >= v16->max_length )
      sub_1B4D1F4(UseEntity, v22);
    i->klass = (CGThumbnailListItem_c *)v25;
    sub_1B4CF34(i, (int32_t)v25, v23, v24);
    v17 = v26 + 1;
  }
  return v16;
}


bool __fastcall ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
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
  ServantPassiveSkillMaster___c_c *v64; // x8
  Il2CppObject *v65; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__6_0; // x23
  Il2CppObject *v68; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Collections_Generic_Dictionary_object__object__o *v72; // x23
  System_Object_array *v73; // x0
  __int64 v74; // x1
  int32_t monitor; // w2
  int v76; // w8
  ServantPassiveSkillMaster_o *v78; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_49BB7A4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__, method);
    sub_1B4CF90(&System_Comparison_ServantPassiveSkillEntity__TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__, v5);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__,
      v6);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__,
      v7);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__, v10);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo, v11);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__,
      v12);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__,
      v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__,
      v14);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v15);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, v16);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__, v18);
    sub_1B4CF90(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__,
      v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v24);
    sub_1B4CF90(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v25);
    sub_1B4CF90(&ServantPassiveSkillEntity_TypeInfo, v26);
    sub_1B4CF90(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, v27);
    sub_1B4CF90(&ServantPassiveSkillMaster___c_TypeInfo, v28);
    byte_49BB7A4 = 1;
  }
  value = 0LL;
  memset(&v80, 0, sizeof(v80));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3257CA0 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_3257168 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v78 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v31);
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
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo )
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
      v40 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v44 = (Il2CppObject *)v41;
    if ( !v41 )
      sub_1B4D1EC(0LL, v42);
    methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_1B4D4AC(v41);
LABEL_51:
      sub_1B4D1EC(v53, v49);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v41,
                                    *(_DWORD *)(v41 + 16),
                                    *(_DWORD *)(v41 + 20),
                                    v43);
    if ( !v30 )
      sub_1B4D1EC(PriorityKey, v47);
    v48 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v30,
            PriorityKey,
            &value,
            (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v52 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v52;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v30,
        v48,
        (Il2CppObject *)v52,
        (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v53 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v54 = value[1].klass;
    v55 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v54 )
      sub_1B4D1EC(v53, v49);
    size = v53->fields._size;
    if ( (unsigned int)size >= LODWORD(v54->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v53,
        v44,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->_1.image + size;
      v53->fields._size = size + 1;
      v57[4] = v44;
      sub_1B4CF34((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v44, v50, v51);
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
    v61 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v61 + 8));
  if ( !v30 )
LABEL_57:
    sub_1B4D1EC(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v79,
    v30,
    (const MethodInfo_3257F48 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v80 = v79;
  while ( 1 )
  {
    v62 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v80,
            (const MethodInfo_3352894 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    if ( !v62 )
      break;
    v64 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v80.fields._current.fields.key;
    v65 = v80.fields._current.fields.value;
    if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v64 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v64->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = ServantPassiveSkillMaster___c_TypeInfo;
      }
      v68 = (Il2CppObject *)v64->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__6_0, v68, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0LL);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v70, v71);
    }
    if ( !v65 )
      sub_1B4D1EC(v62, v63);
    System_Collections_Generic_List_object___Sort_56106144(
      (System_Collections_Generic_List_object__o *)v65,
      _9__6_0,
      (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v72 = (System_Collections_Generic_Dictionary_object__object__o *)v78->fields.listCache;
    v73 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v65,
            (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v72 )
      sub_1B4D1EC(v73, v74);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v72,
      key,
      &v73->obj,
      (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v65[1].monitor;
    v76 = HIDWORD(v65[1].monitor) + 1;
    LODWORD(v65[1].monitor) = 0;
    HIDWORD(v65[1].monitor) = v76;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v65[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v80,
    (const MethodInfo_33529B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v30,
    (const MethodInfo_3257CA0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB7AC & 1) == 0 )
  {
    sub_1B4CF90(&ServantPassiveSkillMaster___c_TypeInfo, v1);
    byte_49BB7AC = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantPassiveSkillMaster___c___ctor(ServantPassiveSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantPassiveSkillMaster___c___EnumerateSpecialSkillsBySvtId_b__8_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.num > 9;
}


int32_t __fastcall ServantPassiveSkillMaster___c___GetItemLinkSkillIds_b__13_2(
        ServantPassiveSkillMaster___c_o *this,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1B4D1EC(this, 0LL);
  return itemEntity->fields.value;
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.priority - b->fields.priority;
}


void __fastcall ServantPassiveSkillMaster___c__DisplayClass13_0___ctor(
        ServantPassiveSkillMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantPassiveSkillMaster___c__DisplayClass13_0___GetItemLinkSkillIds_b__0(
        ServantPassiveSkillMaster___c__DisplayClass13_0_o *this,
        EventItemUsedInfo_o *usedInfo,
        const MethodInfo *method)
{
  if ( !usedInfo )
    sub_1B4D1EC(this, 0LL);
  return usedInfo->fields.svtId == this->fields.baseSvtId;
}


ItemEntity_o *__fastcall ServantPassiveSkillMaster___c__DisplayClass13_0___GetItemLinkSkillIds_b__1(
        ServantPassiveSkillMaster___c__DisplayClass13_0_o *this,
        EventItemUsedInfo_o *usedInfo,
        const MethodInfo *method)
{
  ServantPassiveSkillMaster___c__DisplayClass13_0_o *v4; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49BB7AD & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)sub_1B4CF90(
                                                                  &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__,
                                                                  usedInfo);
    byte_49BB7AD = 1;
  }
  entity = 0LL;
  if ( !usedInfo )
    goto LABEL_12;
  this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)v4->fields.itemMaster;
  if ( !this )
    goto LABEL_12;
  this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                &entity,
                                                                usedInfo->fields.itemId,
                                                                (const MethodInfo_319D9E8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_12:
    sub_1B4D1EC(this, usedInfo);
  if ( LODWORD(entity[3].klass) == 40 )
    return (ItemEntity_o *)entity;
  else
    return 0LL;
}