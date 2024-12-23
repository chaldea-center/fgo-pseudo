void __fastcall GachaAdjustAddMaster___ctor(GachaAdjustAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E21 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__, method);
    byte_4B66E21 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    39,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__);
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

  if ( (byte_4B66E22 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B66E22 = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0LL);
  return (GachaAdjustAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31FDB1C *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__);
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

  if ( (byte_4B66E23 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__, entity);
    byte_4B66E23 = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__);
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
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *v43; // x8
  GachaAdjustAddEntity_c *v44; // x1
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v46; // x0
  struct System_Object_array *items; // x9
  _QWORD *v48; // x10
  __int64 size; // x11
  Il2CppClass **v50; // x9
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0

  if ( (byte_4B66E1F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, gachaAdjustAddList);
    sub_1BE4ACC(&GachaAdjustAddEntity_TypeInfo, v9);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v10);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo, v15);
    byte_4B66E1F = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__);
  *gachaAdjustAddList = (System_Collections_Generic_List_GachaAdjustAddEntity__o *)v16;
  sub_1BE4A70((PartyOrganizationUtility_o *)gachaAdjustAddList, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v23);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                            Enumerator,
                            *(_QWORD *)(v34 + 8));
    v43 = v35;
    if ( !v35 )
      goto LABEL_37;
    v44 = GachaAdjustAddEntity_TypeInfo;
    methodPtr_low = LOBYTE(GachaAdjustAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v35->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (GachaAdjustAddEntity_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaAdjustAddEntity_TypeInfo )
    {
      sub_1BE4FE8(v35);
LABEL_37:
      sub_1BE4D28(v35, v36);
    }
    if ( type && LODWORD(v35[1].klass) == id && HIDWORD(v35[1].klass) == type )
    {
      v46 = (System_Collections_Generic_List_object__o *)*gachaAdjustAddList;
      if ( !*gachaAdjustAddList )
        sub_1BE4D28(0LL, GachaAdjustAddEntity_TypeInfo);
      items = v46->fields._items;
      v48 = Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__;
      ++v46->fields._version;
      if ( !items )
        sub_1BE4D28(v46, v44);
      size = v46->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v46,
          v43,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v46->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v43;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v43, v37, v38, v39, v40, v41, v42);
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_33;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_33:
    v54 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
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

  if ( (byte_4B66E20 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_GiftMaster___, svtEquipIdList);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__get_Current__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4B66E20 = 1;
  }
  gachaAdjustAddList = 0LL;
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  entity = 0LL;
  v22 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  *svtEquipIdList = v22;
  sub_1BE4A70((PartyOrganizationUtility_o *)svtEquipIdList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GiftMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( GachaAdjustAddMaster__TryGetGachaAdjustAddList(this, &gachaAdjustAddList, id, 2, v31) )
  {
    if ( !gachaAdjustAddList )
      sub_1BE4D28(0LL, v32);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_object__o *)gachaAdjustAddList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__);
    v56 = v53;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__);
      if ( !v33 )
        break;
      if ( !v56.fields._current )
        sub_1BE4D28(v33, v34);
      if ( !Master_object )
        sub_1BE4D28(v33, v34);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(
                                                       (GiftMaster_o *)Master_object,
                                                       (int32_t)v56.fields._current[1].monitor,
                                                       v35);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_1BE4D28(IsNullOrEmpty, v38);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v53,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v55 = v53;
        while ( 1 )
        {
          v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v39 )
            break;
          if ( !v55.fields._current )
            sub_1BE4D28(v39, v40);
          if ( HIDWORD(v55.fields._current[1].klass) == 1 )
          {
            if ( !v30 )
              sub_1BE4D28(v39, v40);
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                   &entity,
                   (int32_t)v55.fields._current[1].monitor,
                   (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
            {
              if ( !entity )
                sub_1BE4D28(0LL, v41);
              IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
              if ( IsServantEquip )
              {
                if ( !entity )
                  sub_1BE4D28(IsServantEquip, v43);
                v44 = *svtEquipIdList;
                klass = entity[1].klass;
                monitor = entity[1].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v58.fields.currentCryptoKey = klass;
                *(_QWORD *)&v58.fields.fakeValue = monitor;
                v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v58, 0LL);
                if ( !v44 )
                  sub_1BE4D28(v47, (unsigned int)v47);
                items = v44->fields._items;
                v49 = Method_System_Collections_Generic_List_int__Add__;
                ++v44->fields._version;
                if ( !items )
                  sub_1BE4D28(v47, (unsigned int)v47);
                size = v44->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v44,
                    v47,
                    *(const MethodInfo_35CF200 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
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
          (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__);
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtEquipIdList, 0LL);
  }
  else
  {
    return 0;
  }
}