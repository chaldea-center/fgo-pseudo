void GachaAdjustAddMaster___ctor(GachaAdjustAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CBDF & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__);
    byte_4D2CBDF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    39,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__);
}


GachaAdjustAddEntity_o *GachaAdjustAddMaster__GetEntity(
        GachaAdjustAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2CBE0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__);
    byte_4D2CBE0 = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0);
  return (GachaAdjustAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_345FF78 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__);
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

  if ( (byte_4D2CBE1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__);
    byte_4D2CBE1 = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject *v36; // x8
  System_Collections_Generic_List_object__o *v37; // x0
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  Il2CppClass **v41; // x9
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4D2CBDD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo);
    byte_4D2CBDD = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__);
  *gachaAdjustAddList = (System_Collections_Generic_List_GachaAdjustAddEntity__o *)v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)gachaAdjustAddList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v16);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      v23 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v23 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8))
        & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_16:
      v27 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    v36 = (Il2CppObject *)v28;
    if ( !v28 )
      sub_1C942F0(0, v29);
    if ( type && *(_DWORD *)(v28 + 16) == id && *(_DWORD *)(v28 + 20) == type )
    {
      v37 = (System_Collections_Generic_List_object__o *)*gachaAdjustAddList;
      if ( !*gachaAdjustAddList )
        sub_1C942F0(0, v29);
      items = v37->fields._items;
      v39 = Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__;
      ++v37->fields._version;
      if ( !items )
        sub_1C942F0(v37, v29);
      size = v37->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          v36,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v37->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v36;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v36, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_31;
    }
    v45 = (__int64)&v42->vtable[*v44];
  }
  else
  {
LABEL_31:
    v45 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Master_object; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x4
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_ICollection_o *ListById; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  _BOOL8 IsServantEquip; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_int__o *v31; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v34; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_GachaAdjustAddEntity__o *gachaAdjustAddList; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4D2CBDE & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2CBDE = 1;
  }
  gachaAdjustAddList = 0;
  memset(&v43, 0, sizeof(v43));
  memset(&v42, 0, sizeof(v42));
  entity = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  *svtEquipIdList = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)svtEquipIdList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GiftMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( GachaAdjustAddMaster__TryGetGachaAdjustAddList(this, &gachaAdjustAddList, id, 2, v16) )
  {
    if ( !gachaAdjustAddList )
      sub_1C942F0(0, v17);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      (System_Collections_Generic_List_object__o *)gachaAdjustAddList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__);
    v43 = v40;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__);
      if ( !v18 )
        break;
      if ( !v43.fields._current )
        sub_1C942F0(v18, v19);
      if ( !Master_object )
        sub_1C942F0(v18, v19);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(
                                                       (GiftMaster_o *)Master_object,
                                                       (int32_t)v43.fields._current[1].monitor,
                                                       0);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1C942F0(IsNullOrEmpty, v22);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v40,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v42 = v40;
        while ( 1 )
        {
          v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v42,
                  (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v23 )
            break;
          current = v42.fields._current;
          if ( !v42.fields._current )
            sub_1C942F0(v23, v24);
          v26 = GiftEntity__checkGiftType((GiftEntity_o *)v42.fields._current, 1, 0);
          if ( v26 )
          {
            if ( !v15 )
              sub_1C942F0(v26, v27);
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                   &entity,
                   (int32_t)current[1].monitor,
                   (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
            {
              if ( !entity )
                sub_1C942F0(0, v28);
              IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0);
              if ( IsServantEquip )
              {
                if ( !entity )
                  sub_1C942F0(IsServantEquip, v30);
                v31 = *svtEquipIdList;
                klass = entity[1].klass;
                monitor = entity[1].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v45.fields.currentCryptoKey = klass;
                *(_QWORD *)&v45.fields.fakeValue = monitor;
                v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v45, 0);
                if ( !v31 )
                  sub_1C942F0(v34, (unsigned int)v34);
                items = v31->fields._items;
                v36 = Method_System_Collections_Generic_List_int__Add__;
                ++v31->fields._version;
                if ( !items )
                  sub_1C942F0(v34, (unsigned int)v34);
                size = v31->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v31,
                    v34,
                    *(const MethodInfo_384DE10 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v31->fields._size = size + 1;
                  items->m_Items[size] = v34;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__);
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtEquipIdList, 0);
  }
  else
  {
    return 0;
  }
}