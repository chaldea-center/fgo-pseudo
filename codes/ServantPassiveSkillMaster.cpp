void ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971290 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
    byte_5971290 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantPassiveSkillEntity_array *ServantSkillList; // x0
  __int64 v6; // x1
  ServantPassiveSkillMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v11; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5971294 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
    sub_2213A60(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_2213A60(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__);
    sub_2213A60(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_5971294 = 1;
  }
  ServantSkillList = ServantPassiveSkillMaster__getServantSkillList(this, svtId, method);
  v7 = ServantPassiveSkillMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantSkillList;
  if ( !*(&ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo, v6);
    v7 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__8_0,
      v11,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0);
    v12 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    v12->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__8_0, (int32_t)_9__8_0, v13, v14, v15, v16, v17, v18);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v8,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
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

  if ( (byte_597128E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
    byte_597128E = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
}


System_Int32_array *ServantPassiveSkillMaster__GetEventBonusSkillIds(
        ServantPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v7; // x0
  int64_t userIdNumber; // x21
  __int64 Instance; // x0
  __int64 v10; // x1
  int64_t nowTime; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 skillId; // x1
  System_Collections_Generic_IEnumerator_T__o *v14; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__o *v19; // x22
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  ServantPassiveSkillEntity_o *v26; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__o *v30; // x21
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  const MethodInfo *v36; // [xsp+10h] [xbp-80h]
  SkillLvEntity_o *entity; // [xsp+30h] [xbp-60h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+38h] [xbp-58h]

  if ( (byte_5971299 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5971299 = 1;
  }
  entity = 0;
  v38 = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    v7 = NetworkManager_TypeInfo;
  }
  userIdNumber = v7->static_fields->userIdNumber;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !this->fields.list )
    goto LABEL_59;
  nowTime = *(_QWORD *)(Instance + 136);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
LABEL_43:
    sub_2213CDC(Enumerator, skillId);
  v14 = Enumerator;
  while ( 1 )
  {
    klass = v14->klass;
    v16 = *(unsigned __int16 *)&v14->klass->_2.rank;
    if ( *(_WORD *)&v14->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_19;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_19:
      v18 = sub_224BC3C(v14, System_Collections_IEnumerator_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                 v14,
                 *(_QWORD *)(v18 + 8));
    if ( (Instance & 1) == 0 )
      break;
    v19 = v38;
    if ( !v38 )
      sub_2213CDC(Instance, v10);
    v20 = v38->klass;
    v21 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_27;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_27:
      v23 = sub_224BC3C(v38, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            v19,
            *(_QWORD *)(v23 + 8));
    v26 = (ServantPassiveSkillEntity_o *)v24;
    if ( !v24 )
      sub_2213CDC(0, v25);
    if ( !v3 )
      sub_2213CDC(v24, v25);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)System_Collections_Generic_List_int___Contains(
                                                                  v3,
                                                                  *(_DWORD *)(v24 + 28),
                                                                  (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)Enumerator & 1) == 0 )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)ServantPassiveSkillEntity__isUse(
                                                                    v26,
                                                                    userIdNumber,
                                                                    1,
                                                                    0,
                                                                    1,
                                                                    0,
                                                                    -1,
                                                                    1,
                                                                    nowTime,
                                                                    0,
                                                                    v36);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
        if ( !Master_object )
          sub_2213CDC(Enumerator, skillId);
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)SkillLvMaster__TryGetEntity(
                                                                      (SkillLvMaster_o *)Master_object,
                                                                      &entity,
                                                                      v26->fields.skillId,
                                                                      1,
                                                                      0);
        if ( ((unsigned __int8)Enumerator & 1) != 0 )
        {
          if ( !entity )
            sub_2213CDC(0, skillId);
          Enumerator = (System_Collections_Generic_IEnumerator_T__o *)SkillLvEntity__IsSetGroupId(entity, 0);
          if ( ((unsigned __int8)Enumerator & 1) != 0 )
          {
            if ( !entity )
              sub_2213CDC(Enumerator, skillId);
            items = v3->fields._items;
            skillId = (unsigned int)entity->fields.skillId;
            v28 = Method_System_Collections_Generic_List_int__Add__;
            ++v3->fields._version;
            if ( !items )
              sub_2213CDC(Enumerator, skillId);
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v3,
                skillId,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
    v14 = v38;
    if ( !v38 )
      goto LABEL_43;
  }
  v30 = v38;
  if ( v38 )
  {
    v31 = v38->klass;
    v32 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_49;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_49:
      v34 = sub_224BC3C(v38, System_IDisposable_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                 v30,
                 *(_QWORD *)(v34 + 8));
  }
  if ( !v3 )
LABEL_59:
    sub_2213CDC(Instance, v10);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantPassiveSkillMaster__GetItemLinkSkillIds(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        int64_t nowTime,
        const MethodInfo *method)
{
  int32_t befSvtId; // w19
  int v8; // w8
  Il2CppObject *Master_object; // x0
  __int64 klass_low; // x1
  EventItemUsedInfo_array *v11; // x20
  __int64 v12; // x1
  Il2CppObject *v14; // x21
  __int64 v15; // x1
  Il2CppObject *v16; // x23
  const MethodInfo *v17; // x3
  ServantTransformEntity_o *v18; // x0
  System_Collections_Generic_List_int__o *v19; // x22
  int max_length; // w8
  unsigned int v21; // w25
  EventItemUsedInfo_o *v22; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  befSvtId = svtId;
  if ( (byte_5971298 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971298 = 1;
  }
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  v11 = UserEventItemLinkSvtMaster__EnableEventItemUsedInfo((UserEventItemLinkSvtMaster_o *)Master_object, nowTime, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0) )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v15);
  Master_object = (Il2CppObject *)ImageLimitCount__ConvertDispLimitCountForServer(dispLimitCount, 0);
  if ( !v16 )
    goto LABEL_35;
  v18 = ServantTransformMaster__GetBeforeTransformEntity(
          (ServantTransformMaster_o *)v16,
          befSvtId,
          (int32_t)Master_object,
          v17);
  if ( v18 )
    befSvtId = v18->fields.befSvtId;
  v19 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v11 )
LABEL_35:
    sub_2213CDC(Master_object, klass_low);
  max_length = v11->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    do
    {
      if ( v21 >= max_length )
        sub_2213CE4(Master_object);
      v22 = v11->m_Items[v21];
      if ( !v22 )
        goto LABEL_35;
      if ( v22->fields.svtId == befSvtId )
      {
        if ( !v14 )
          goto LABEL_35;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                                          &entity,
                                          v22->fields.itemId,
                                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
        klass_low = (unsigned int)v22->fields.skillId;
        if ( (int)klass_low >= 1 )
        {
LABEL_39:
          if ( !v19 )
            goto LABEL_35;
          items = v19->fields._items;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++v19->fields._version;
          if ( !items )
            goto LABEL_35;
          size = v19->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v19,
              klass_low,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v19->fields._size = size + 1;
            items->m_Items[size] = klass_low;
          }
        }
      }
      max_length = v11->max_length;
    }
    while ( (int)++v21 < max_length );
  }
  if ( !v19 )
    goto LABEL_35;
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_597128F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
    byte_597128F = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
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
  if ( (byte_5971295 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__);
    byte_5971295 = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_2213CDC(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  __int64 v23; // x1
  ServantEntity_o *v24; // x26
  __int64 v25; // x1
  bool IsServantEquip; // w23
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  int32_t ServantLimitCountSealAfter; // w25
  int32_t LimitCountByDispLimit; // w0
  __int64 v31; // x1
  BalanceConfig_c *v32; // x0
  __int64 v33; // x26
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  const MethodInfo *v36; // x4
  int32_t v37; // w5
  const MethodInfo *v38; // x6
  bool v39; // w7
  ServantPassiveSkillEntity_array *UseEntityList; // x27
  unsigned __int64 v41; // x28
  unsigned int v42; // w25
  __int64 i; // x22
  System_Int32_array *v44; // x8
  System_String_array *v45; // x8
  System_String_array *v46; // x10
  System_Int32_array *v47; // x8
  char *v48; // x9
  System_String_array *v49; // x8
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_array *v56; // x8
  il2cpp_array_size_t max_length; // x10
  int v58; // w9
  char *v59; // x10
  System_String_array *v60; // x8
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v62; // x0
  System_String_o *v63; // x1
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_String_array *v70; // x8
  unsigned __int64 v71; // x9
  Il2CppClass **v72; // x0
  System_String_o *v73; // x1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Int32_array *v80; // x8
  char *v81; // x9
  System_String_array *v82; // x8
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  System_String_array *v89; // x8
  System_Collections_ICollection_o *ItemLinkSkillIds; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Collections_ICollection_o *v97; // x23
  __int64 v98; // x1
  void *monitor; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v100; // x24
  unsigned __int64 v101; // x22
  unsigned int v102; // w26
  int32_t v103; // w25
  System_Int32_array *v104; // x9
  char *v105; // x10
  System_String_array *v106; // x9
  System_String_array *v107; // x10
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  const MethodInfo *v120; // [xsp+18h] [xbp-A8h]
  bool v121; // [xsp+4Ch] [xbp-74h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_5971297 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971297 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_81;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_81;
  v24 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_81;
  v121 = IsServantEquip;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 limitCount,
                                 v27);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v28);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, ServantLimitCountSealAfter, 0);
  ServantEntity__getClassSkillInfo(v24, idList, titleList, explanationList, LimitCountByDispLimit, 0);
  v32 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v31);
    v32 = BalanceConfig_TypeInfo;
  }
  v33 = sub_2213B20(int___TypeInfo, (unsigned int)v32->static_fields->SvtPassiveSkillListMax);
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
                    isGrand,
                    v120);
  v41 = 0;
  v42 = 0;
  for ( i = 32; ; i += 8 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v41 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 44LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_81;
    if ( v41 >= LODWORD(UseEntityList->max_length) )
      goto LABEL_80;
    Instance = (DataManager_o *)UseEntityList->m_Items[v41];
    v44 = *idList;
    if ( Instance )
    {
      if ( !v44 )
        goto LABEL_81;
      if ( v42 >= LODWORD(v44->max_length) )
        goto LABEL_80;
      v44->m_Items[v42] = HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v33 )
        goto LABEL_81;
      v45 = *titleList;
      if ( !*titleList )
        goto LABEL_81;
      v46 = *explanationList;
      if ( !*explanationList )
        goto LABEL_81;
      if ( v42 >= *(_DWORD *)(v33 + 24) || v42 >= LODWORD(v45->max_length) || v42 >= LODWORD(v46->max_length) )
        goto LABEL_80;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v33 + 32 + 4LL * (int)v42),
        &v45->m_Items[v42],
        &v46->m_Items[v42],
        0,
        IsServantEquip,
        v38);
      if ( v41 != v42 )
      {
        v47 = *idList;
        if ( !*idList )
          goto LABEL_81;
        if ( v41 >= LODWORD(v47->max_length) )
          goto LABEL_80;
        v48 = (char *)v47 + 4 * v41;
        v49 = *titleList;
        *((_DWORD *)v48 + 8) = 0;
        if ( !v49 )
          goto LABEL_81;
        if ( v41 >= LODWORD(v49->max_length) )
          goto LABEL_80;
        v49->m_Items[v41] = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)((char *)v49 + i),
          0,
          v34,
          v35,
          (int32_t)v36,
          v37,
          (bool)v38,
          v39);
        v56 = *explanationList;
        if ( !*explanationList )
          goto LABEL_81;
        if ( v41 >= LODWORD(v56->max_length) )
          goto LABEL_80;
        v56->m_Items[v41] = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v56 + i), 0, v50, v51, v52, v53, v54, v55);
      }
      ++v42;
    }
    else
    {
      if ( !v44 )
        goto LABEL_81;
      max_length = v44->max_length;
      if ( v41 >= (unsigned int)max_length )
        goto LABEL_80;
      v58 = v44->m_Items[v41];
      if ( v58 >= 1 )
      {
        if ( v41 != v42 )
        {
          if ( v42 >= (unsigned int)max_length )
            goto LABEL_80;
          v59 = (char *)v44 + 4 * (int)v42;
          v60 = *titleList;
          *((_DWORD *)v59 + 8) = v58;
          if ( !v60 )
            goto LABEL_81;
          max_length_low = LODWORD(v60->max_length);
          if ( v41 >= max_length_low || v42 >= (unsigned int)max_length_low )
            goto LABEL_80;
          v62 = &v60->obj.klass + (int)v42;
          v63 = v60->m_Items[v41];
          v62[4] = (Il2CppClass *)v63;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v62 + 4),
            (int32_t)v63,
            v34,
            v35,
            (int32_t)v36,
            v37,
            (bool)v38,
            v39);
          v70 = *explanationList;
          if ( !*explanationList )
            goto LABEL_81;
          v71 = LODWORD(v70->max_length);
          if ( v41 >= v71 || v42 >= (unsigned int)v71 )
            goto LABEL_80;
          v72 = &v70->obj.klass + (int)v42;
          v73 = v70->m_Items[v41];
          v72[4] = (Il2CppClass *)v73;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v72 + 4), (int32_t)v73, v64, v65, v66, v67, v68, v69);
          v80 = *idList;
          if ( !*idList )
            goto LABEL_81;
          IsServantEquip = v121;
          if ( v41 >= LODWORD(v80->max_length) )
            goto LABEL_80;
          v81 = (char *)v80 + 4 * v41;
          v82 = *titleList;
          *((_DWORD *)v81 + 8) = 0;
          if ( !v82 )
            goto LABEL_81;
          if ( v41 >= LODWORD(v82->max_length) )
            goto LABEL_80;
          v82->m_Items[v41] = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v82 + i), 0, v74, v75, v76, v77, v78, v79);
          v89 = *explanationList;
          if ( !*explanationList )
            goto LABEL_81;
          if ( v41 >= LODWORD(v89->max_length) )
LABEL_80:
            sub_2213CE4(Instance);
          v89->m_Items[v41] = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v89 + i), 0, v83, v84, v85, v86, v87, v88);
        }
        ++v42;
      }
    }
    ++v41;
  }
  ItemLinkSkillIds = (System_Collections_ICollection_o *)ServantPassiveSkillMaster__GetItemLinkSkillIds(
                                                           (ServantPassiveSkillMaster_o *)Instance,
                                                           svtId,
                                                           dispLimitCount,
                                                           nowTime,
                                                           v36);
  if ( !isMySvt || (v97 = ItemLinkSkillIds, BasicHelper__IsNullOrEmpty(ItemLinkSkillIds, 0)) )
  {
LABEL_78:
    if ( v42 )
      return;
LABEL_79:
    *idList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, 0, v91, v92, v93, v94, v95, v96);
    *titleList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, 0, v108, v109, v110, v111, v112, v113);
    *explanationList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, 0, v114, v115, v116, v117, v118, v119);
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v98);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v97 )
LABEL_81:
    sub_2213CDC(Instance, v23);
  monitor = v97[1].monitor;
  if ( (int)monitor < 1 )
    goto LABEL_78;
  v100 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v101 = 0;
  v102 = v42;
  do
  {
    if ( v101 >= (unsigned int)monitor )
      goto LABEL_80;
    if ( !v100 )
      goto LABEL_81;
    v103 = *((_DWORD *)&v97[2].klass + v101);
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v100,
                                  &entity,
                                  v103,
                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v104 = *idList;
      if ( !*idList )
        goto LABEL_81;
      if ( v102 >= LODWORD(v104->max_length) )
        goto LABEL_80;
      v105 = (char *)v104 + 4 * (int)v102;
      v106 = *titleList;
      *((_DWORD *)v105 + 8) = v103;
      if ( !v106 )
        goto LABEL_81;
      v107 = *explanationList;
      if ( !*explanationList )
        goto LABEL_81;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_81;
      if ( v102 >= LODWORD(v106->max_length) || v102 >= LODWORD(v107->max_length) )
        goto LABEL_80;
      SkillEntity__GetEffectExplanation((SkillEntity_o *)entity, &v106->m_Items[v102], &v107->m_Items[v102], 0, v121, 0);
      ++v102;
    }
    LODWORD(monitor) = v97[1].monitor;
    ++v101;
  }
  while ( (__int64)v101 < (int)monitor );
  if ( !v102 )
    goto LABEL_79;
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

  v8 = svtId;
  v7 = num;
  if ( (byte_5971291 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971291 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_75694928(v4, (System_String_o *)StringLiteral_1533/*":"*/, v5, 0);
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
  if ( (byte_5971293 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    byte_5971293 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&svtId;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), svtId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(list, *(_QWORD *)&svtId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v7,
                                              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
  unsigned int max_length; // w29
  Il2CppClass **v21; // x8
  ServantPassiveSkillEntity_o *v22; // x26
  const MethodInfo *v24; // [xsp+10h] [xbp-70h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v19 = EntityListFromIdNum;
    max_length = EntityListFromIdNum->max_length;
    while ( (--max_length & 0x80000000) == 0 )
    {
      if ( max_length >= LODWORD(v19->max_length) )
        sub_2213CE4(EntityListFromIdNum);
      v21 = &v19->obj.klass + max_length;
      v22 = (ServantPassiveSkillEntity_o *)v21[4];
      if ( !v22 )
        sub_2213CDC(EntityListFromIdNum, v18);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  unsigned int *v16; // x27
  signed __int64 v17; // x19
  MissionNaviTransitionBoardItem_o *i; // x23
  BalanceConfig_c *v19; // x0
  signed __int64 v20; // x29
  ServantPassiveSkillEntity_o *UseEntity; // x0
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
  const MethodInfo *v34; // [xsp+20h] [xbp-90h]

  if ( (byte_5971296 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ServantPassiveSkillEntity___TypeInfo);
    byte_5971296 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    v14 = BalanceConfig_TypeInfo;
  }
  v16 = (unsigned int *)sub_2213B20(
                          ServantPassiveSkillEntity___TypeInfo,
                          (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
  v17 = 0;
  for ( i = (MissionNaviTransitionBoardItem_o *)(v16 + 8); ; i = (MissionNaviTransitionBoardItem_o *)((char *)i + 8) )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
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
                  isGrand,
                  v34);
    if ( !v16 )
      sub_2213CDC(UseEntity, v22);
    v29 = (MissionNaviTransitionBoardItem_c *)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_2213BB4(UseEntity, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
      if ( !UseEntity )
      {
        v33 = sub_2213D00(0, v30);
        sub_2213BA0(v33, 0);
      }
    }
    v31 = v20 - 1;
    if ( v31 >= v16[6] )
      sub_2213CE4(UseEntity);
    i->klass = v29;
    sub_2213A04(i, (int32_t)v29, v23, v24, v25, v26, v27, v28);
    v17 = v31 + 1;
  }
  return (ServantPassiveSkillEntity_array *)v16;
}


bool ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
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
  ServantPassiveSkillMaster_o *v39; // x24
  System_Collections_Generic_IEnumerator_T__o *v40; // x22
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  ServantPassiveSkillMaster___c_c *v46; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__6_0; // x23
  Il2CppObject *v50; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *v51; // x0
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
  ServantPassiveSkillMaster_o *v64; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v68; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_5971292 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_ServantPassiveSkillEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_2213A60(&ServantPassiveSkillEntity_TypeInfo);
    sub_2213A60(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__);
    sub_2213A60(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_5971292 = 1;
  }
  listCache = (__int64)this->fields.listCache;
  value = 0;
  v68 = 0;
  memset(&v66, 0, sizeof(v66));
  if ( !listCache )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)listCache,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (__int64)this->fields.list;
  v64 = this;
  if ( !listCache )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  v68 = Enumerator;
  v65.fields._dictionary = 0;
  *(_QWORD *)&v65.fields._version = &v68;
  if ( !Enumerator )
LABEL_33:
    sub_2213CDC(Enumerator, v6);
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
      v11 = sub_224BC3C(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
                  v7,
                  *(_QWORD *)(v11 + 8));
    if ( (listCache & 1) == 0 )
      break;
    v12 = v68;
    if ( !v68 )
      sub_2213CDC(listCache, method);
    v13 = v68->klass;
    v14 = *(unsigned __int16 *)&v68->klass->_2.rank;
    if ( *(_WORD *)&v68->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo )
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
      v16 = sub_224BC3C(v68, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v12,
            *(_QWORD *)(v16 + 8));
    v21 = (Il2CppObject *)v17;
    if ( !v17 )
      sub_2213CDC(0, v18);
    naturalAligment = ServantPassiveSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)naturalAligment
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * naturalAligment - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_221405C(v17, ServantPassiveSkillEntity_TypeInfo, v19);
LABEL_57:
      sub_2213CDC(v34, v26);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v17,
                                    *(_DWORD *)(v17 + 16),
                                    *(_DWORD *)(v17 + 20),
                                    v20);
    if ( !v4 )
      sub_2213CDC(PriorityKey, v24);
    v25 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v33,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v33;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v25,
        (Il2CppObject *)v33,
        (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v34 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_57;
    v35 = value[1].klass;
    v36 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v35 )
      goto LABEL_57;
    size = v34->fields._size;
    if ( (unsigned int)size >= LODWORD(v35->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        v21,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &v35->_1.image + size;
      v34->fields._size = size + 1;
      v38[4] = v21;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v21, v27, v28, v29, v30, v31, v32);
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
      v44 = sub_224BC3C(v68, System_IDisposable_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                  v40,
                  *(_QWORD *)(v44 + 8));
  }
  if ( !v4 )
LABEL_63:
    sub_2213CDC(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v65,
    v4,
    (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v66 = v65;
  v65.fields._dictionary = 0;
  *(_QWORD *)&v65.fields._version = &v66;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v66,
            (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__) )
  {
    v46 = ServantPassiveSkillMaster___c_TypeInfo;
    current = v66.fields._current;
    if ( !*(&ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo, v45);
      v46 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v46->static_fields;
    _9__6_0 = (System_Comparison_T__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !*(&v46->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v46, v45);
        static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__6_0, v50, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0);
      v51 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      v51->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v51->__9__6_0, (int32_t)_9__6_0, v52, v53, v54, v55, v56, v57);
      v39 = v64;
    }
    if ( !current.fields.value )
      sub_2213CDC(v46, v45);
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__6_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v58 = (System_Collections_Generic_Dictionary_object__object__o *)v39->fields.listCache;
    v59 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v58 )
      sub_2213CDC(v59, v60);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v58,
      current.fields.key,
      &v59->obj,
      (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v62 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v62;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v66,
    (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597129A & 1) == 0 )
  {
    sub_2213A60(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_597129A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return x->fields.num > 9;
}


int32_t ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.priority - b->fields.priority;
}