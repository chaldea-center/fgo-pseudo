void __fastcall GachaAdjustAddMaster___ctor(GachaAdjustAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7D08 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__, method);
    byte_4BC7D08 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    39,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__);
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

  if ( (byte_4BC7D09 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4BC7D09 = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0LL);
  return (GachaAdjustAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_324D130 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__);
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

  if ( (byte_4BC7D0A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__, entity);
    byte_4BC7D0A = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x0
  struct System_Object_array *items; // x9
  _QWORD *v45; // x10
  __int64 size; // x11
  Il2CppClass **v47; // x9
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0

  if ( (byte_4BC7D06 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__,
      gachaAdjustAddList);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v9);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo, v14);
    byte_4BC7D06 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__);
  *gachaAdjustAddList = (System_Collections_Generic_List_GachaAdjustAddEntity__o *)v15;
  sub_1C1AB78((PartyOrganizationUtility_o *)gachaAdjustAddList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
            Enumerator,
            *(_QWORD *)(v33 + 8));
    v42 = (Il2CppObject *)v34;
    if ( !v34 )
      sub_1C1AE30(0LL, v35);
    if ( type && *(_DWORD *)(v34 + 16) == id && *(_DWORD *)(v34 + 20) == type )
    {
      v43 = (System_Collections_Generic_List_object__o *)*gachaAdjustAddList;
      if ( !*gachaAdjustAddList )
        sub_1C1AE30(0LL, v35);
      items = v43->fields._items;
      v45 = Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__;
      ++v43->fields._version;
      if ( !items )
        sub_1C1AE30(v43, v35);
      size = v43->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          v42,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v43->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v42;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v42, v36, v37, v38, v39, v40, v41);
      }
    }
  }
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_31;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_31:
    v51 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *Master_object; // x20
  Il2CppObject *v30; // x21
  const MethodInfo *v31; // x4
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  System_Collections_ICollection_o *ListById; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  _BOOL8 IsServantEquip; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_int__o *v44; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v47; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_GachaAdjustAddEntity__o *gachaAdjustAddList; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4BC7D07 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_GiftMaster___, svtEquipIdList);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__get_Current__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4BC7D07 = 1;
  }
  gachaAdjustAddList = 0LL;
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  entity = 0LL;
  v22 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  *svtEquipIdList = v22;
  sub_1C1AB78((PartyOrganizationUtility_o *)svtEquipIdList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_GiftMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( GachaAdjustAddMaster__TryGetGachaAdjustAddList(this, &gachaAdjustAddList, id, 2, v31) )
  {
    if ( !gachaAdjustAddList )
      sub_1C1AE30(0LL, v32);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_object__o *)gachaAdjustAddList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__);
    v56 = v53;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__);
      if ( !v33 )
        break;
      if ( !v56.fields._current )
        sub_1C1AE30(v33, v34);
      if ( !Master_object )
        sub_1C1AE30(v33, v34);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(
                                                       (GiftMaster_o *)Master_object,
                                                       (int32_t)v56.fields._current[1].monitor,
                                                       v35);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1C1AE30(IsNullOrEmpty, v38);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v53,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v55 = v53;
        while ( 1 )
        {
          v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v39 )
            break;
          if ( !v55.fields._current )
            sub_1C1AE30(v39, v40);
          if ( HIDWORD(v55.fields._current[1].klass) == 1 )
          {
            if ( !v30 )
              sub_1C1AE30(v39, v40);
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                   &entity,
                   (int32_t)v55.fields._current[1].monitor,
                   (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
            {
              if ( !entity )
                sub_1C1AE30(0LL, v41);
              IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
              if ( IsServantEquip )
              {
                if ( !entity )
                  sub_1C1AE30(IsServantEquip, v43);
                v44 = *svtEquipIdList;
                klass = entity[1].klass;
                monitor = entity[1].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v58.fields.currentCryptoKey = klass;
                *(_QWORD *)&v58.fields.fakeValue = monitor;
                v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v58, 0LL);
                if ( !v44 )
                  sub_1C1AE30(v47, (unsigned int)v47);
                items = v44->fields._items;
                v49 = Method_System_Collections_Generic_List_int__Add__;
                ++v44->fields._version;
                if ( !items )
                  sub_1C1AE30(v47, (unsigned int)v47);
                size = v44->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v44,
                    v47,
                    *(const MethodInfo_361F86C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                }
                else
                {
                  v44->fields._size = size + 1;
                  items->m_Items[size + 1] = v47;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__);
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtEquipIdList, 0LL);
  }
  else
  {
    return 0;
  }
}