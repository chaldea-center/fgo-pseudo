void __fastcall GachaAdjustAddMaster___ctor(GachaAdjustAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44CE1 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__, method);
    byte_4B44CE1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    39,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaAdjustAddEntity_o *__fastcall GachaAdjustAddMaster__GetEntity(
        GachaAdjustAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44CE2 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B44CE2 = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0LL);
  return (GachaAdjustAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_32E68F4 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__);
}


bool __fastcall GachaAdjustAddMaster__TryGetEntity(
        GachaAdjustAddMaster_o *this,
        GachaAdjustAddEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44CE3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__, entity);
    byte_4B44CE3 = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__);
}


bool __fastcall GachaAdjustAddMaster__TryGetGachaAdjustAddList(
        GachaAdjustAddMaster_o *this,
        System_Collections_Generic_List_GachaAdjustAddEntity__o **gachaAdjustAddList,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x8
  System_Collections_Generic_List_object__o *v35; // x0
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x9
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B44CDF & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__,
      gachaAdjustAddList);
    sub_1BDB878(&System_IDisposable_TypeInfo, v9);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo, v10);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo, v14);
    byte_4B44CDF = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__);
  *gachaAdjustAddList = (System_Collections_Generic_List_GachaAdjustAddEntity__o *)v15;
  sub_1BDB81C((CGThumbnailListItem_o *)gachaAdjustAddList, (int32_t)v15, v16, v17);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, v18);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
            Enumerator,
            *(_QWORD *)(v29 + 8));
    v34 = (Il2CppObject *)v30;
    if ( !v30 )
      sub_1BDBAD4(0LL, v31);
    if ( type && *(_DWORD *)(v30 + 16) == id && *(_DWORD *)(v30 + 20) == type )
    {
      v35 = (System_Collections_Generic_List_object__o *)*gachaAdjustAddList;
      if ( !*gachaAdjustAddList )
        sub_1BDBAD4(0LL, v31);
      items = v35->fields._items;
      v37 = Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__;
      ++v35->fields._version;
      if ( !items )
        sub_1BDBAD4(v35, v31);
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          v34,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v34;
        sub_1BDB81C((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v34, v32, v33);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*gachaAdjustAddList, 0LL);
}


bool __fastcall GachaAdjustAddMaster__TryGetPeriodLimitedSvtEquipIdList(
        GachaAdjustAddMaster_o *this,
        System_Collections_Generic_List_int__o **svtEquipIdList,
        int32_t id,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *Master_object; // x20
  Il2CppObject *v26; // x21
  const MethodInfo *v27; // x4
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  System_Collections_ICollection_o *ListById; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  _BOOL8 IsServantEquip; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_int__o *v40; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v43; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_GachaAdjustAddEntity__o *gachaAdjustAddList; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4B44CE0 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GiftMaster___, svtEquipIdList);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__get_Current__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4B44CE0 = 1;
  }
  gachaAdjustAddList = 0LL;
  memset(&v52, 0, sizeof(v52));
  memset(&v51, 0, sizeof(v51));
  entity = 0LL;
  v22 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  *svtEquipIdList = v22;
  sub_1BDB81C((CGThumbnailListItem_o *)svtEquipIdList, (int32_t)v22, v23, v24);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftMaster___);
  v26 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( GachaAdjustAddMaster__TryGetGachaAdjustAddList(this, &gachaAdjustAddList, id, 2, v27) )
  {
    if ( !gachaAdjustAddList )
      sub_1BDBAD4(0LL, v28);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      (System_Collections_Generic_List_object__o *)gachaAdjustAddList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__);
    v52 = v49;
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v52,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__);
      if ( !v29 )
        break;
      if ( !v52.fields._current )
        sub_1BDBAD4(v29, v30);
      if ( !Master_object )
        sub_1BDBAD4(v29, v30);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(
                                                       (GiftMaster_o *)Master_object,
                                                       (int32_t)v52.fields._current[1].monitor,
                                                       v31);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1BDBAD4(IsNullOrEmpty, v34);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v49,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v51 = v49;
        while ( 1 )
        {
          v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v51,
                  (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v35 )
            break;
          if ( !v51.fields._current )
            sub_1BDBAD4(v35, v36);
          if ( HIDWORD(v51.fields._current[1].klass) == 1 )
          {
            if ( !v26 )
              sub_1BDBAD4(v35, v36);
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v26,
                   &entity,
                   (int32_t)v51.fields._current[1].monitor,
                   (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
            {
              if ( !entity )
                sub_1BDBAD4(0LL, v37);
              IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
              if ( IsServantEquip )
              {
                if ( !entity )
                  sub_1BDBAD4(IsServantEquip, v39);
                v40 = *svtEquipIdList;
                klass = entity[1].klass;
                monitor = entity[1].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v54.fields.currentCryptoKey = klass;
                *(_QWORD *)&v54.fields.fakeValue = monitor;
                v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v54, 0LL);
                if ( !v40 )
                  sub_1BDBAD4(v43, (unsigned int)v43);
                items = v40->fields._items;
                v45 = Method_System_Collections_Generic_List_int__Add__;
                ++v40->fields._version;
                if ( !items )
                  sub_1BDBAD4(v43, (unsigned int)v43);
                size = v40->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v40,
                    v43,
                    *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                }
                else
                {
                  v40->fields._size = size + 1;
                  items->m_Items[size + 1] = v43;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v51,
          (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__);
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtEquipIdList, 0LL);
  }
  else
  {
    return 0;
  }
}