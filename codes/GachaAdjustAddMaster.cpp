void GachaAdjustAddMaster___ctor(GachaAdjustAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2754D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__);
    byte_4C2754D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    39,
    (const MethodInfo_338A52C *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__);
}


GachaAdjustAddEntity_o *GachaAdjustAddMaster__GetEntity(
        GachaAdjustAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2754E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__);
    byte_4C2754E = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0);
  return (GachaAdjustAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_338C850 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__);
}


bool GachaAdjustAddMaster__TryGetEntity(
        GachaAdjustAddMaster_o *this,
        GachaAdjustAddEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2754F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__);
    byte_4C2754F = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__);
}


bool GachaAdjustAddMaster__TryGetGachaAdjustAddList(
        GachaAdjustAddMaster_o *this,
        System_Collections_Generic_List_GachaAdjustAddEntity__o **gachaAdjustAddList,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x8
  System_Collections_Generic_List_object__o *v29; // x0
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x9
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4C2754B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo);
    byte_4C2754B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__);
  *gachaAdjustAddList = (System_Collections_Generic_List_GachaAdjustAddEntity__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)gachaAdjustAddList, (int32_t)v9, v10, v11);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v19 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8))
        & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_16:
      v23 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v28 = (Il2CppObject *)v24;
    if ( !v24 )
      sub_1C2D6EC(0, v25);
    if ( type && *(_DWORD *)(v24 + 16) == id && *(_DWORD *)(v24 + 20) == type )
    {
      v29 = (System_Collections_Generic_List_object__o *)*gachaAdjustAddList;
      if ( !*gachaAdjustAddList )
        sub_1C2D6EC(0, v25);
      items = v29->fields._items;
      v31 = Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__;
      ++v29->fields._version;
      if ( !items )
        sub_1C2D6EC(v29, v25);
      size = v29->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          v28,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v28;
        sub_1C2D434((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v28, v26, v27);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_31;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_31:
    v37 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*gachaAdjustAddList, 0);
}


bool GachaAdjustAddMaster__TryGetPeriodLimitedSvtEquipIdList(
        GachaAdjustAddMaster_o *this,
        System_Collections_Generic_List_int__o **svtEquipIdList,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Master_object; // x20
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x4
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_ICollection_o *ListById; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  _BOOL8 IsServantEquip; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_int__o *v25; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v28; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_GachaAdjustAddEntity__o *gachaAdjustAddList; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4C2754C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2754C = 1;
  }
  gachaAdjustAddList = 0;
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, sizeof(v36));
  entity = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  *svtEquipIdList = v7;
  sub_1C2D434((CGThumbnailListItem_o *)svtEquipIdList, (int32_t)v7, v8, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( GachaAdjustAddMaster__TryGetGachaAdjustAddList(this, &gachaAdjustAddList, id, 2, v12) )
  {
    if ( !gachaAdjustAddList )
      sub_1C2D6EC(0, v13);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)gachaAdjustAddList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__);
    v37 = v34;
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__);
      if ( !v14 )
        break;
      if ( !v37.fields._current )
        sub_1C2D6EC(v14, v15);
      if ( !Master_object )
        sub_1C2D6EC(v14, v15);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(
                                                       (GiftMaster_o *)Master_object,
                                                       (int32_t)v37.fields._current[1].monitor,
                                                       v16);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1C2D6EC(IsNullOrEmpty, v19);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v34,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v36 = v34;
        while ( 1 )
        {
          v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v36,
                  (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v20 )
            break;
          if ( !v36.fields._current )
            sub_1C2D6EC(v20, v21);
          if ( HIDWORD(v36.fields._current[1].klass) == 1 )
          {
            if ( !v11 )
              sub_1C2D6EC(v20, v21);
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
                   &entity,
                   (int32_t)v36.fields._current[1].monitor,
                   (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
            {
              if ( !entity )
                sub_1C2D6EC(0, v22);
              IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0);
              if ( IsServantEquip )
              {
                if ( !entity )
                  sub_1C2D6EC(IsServantEquip, v24);
                v25 = *svtEquipIdList;
                klass = entity[1].klass;
                monitor = entity[1].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v39.fields.currentCryptoKey = klass;
                *(_QWORD *)&v39.fields.fakeValue = monitor;
                v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v39, 0);
                if ( !v25 )
                  sub_1C2D6EC(v28, (unsigned int)v28);
                items = v25->fields._items;
                v30 = Method_System_Collections_Generic_List_int__Add__;
                ++v25->fields._version;
                if ( !items )
                  sub_1C2D6EC(v28, (unsigned int)v28);
                size = v25->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v25,
                    v28,
                    *(const MethodInfo_376CB60 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v25->fields._size = size + 1;
                  items->m_Items[size] = v28;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v36,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__);
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtEquipIdList, 0);
  }
  else
  {
    return 0;
  }
}