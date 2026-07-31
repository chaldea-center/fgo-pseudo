void GachaAdjustAddMaster___ctor(GachaAdjustAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938A3B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__);
    byte_5938A3B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    39,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string___ctor__);
}


GachaAdjustAddEntity_o *GachaAdjustAddMaster__GetEntity(
        GachaAdjustAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938A3C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__);
    byte_5938A3C = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0);
  return (GachaAdjustAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3EE2044 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__GetEntity__);
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

  if ( (byte_5938A3D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__);
    byte_5938A3D = 1;
  }
  PK = (Il2CppObject *)GachaAdjustAddEntity__CreatePK(id, type, giftId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_GachaAdjustAddMaster__GachaAdjustAddEntity__string__TryGetEntity__);
}


bool GachaAdjustAddMaster__TryGetGachaAdjustAddList(
        GachaAdjustAddMaster_o *this,
        System_Collections_Generic_List_GachaAdjustAddEntity__o **gachaAdjustAddList,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *v38; // x1
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Collections_Generic_IEnumerator_T__o *v49; // [xsp+18h] [xbp-48h]

  if ( (byte_5938A39 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo);
    byte_5938A39 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GachaAdjustAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GachaAdjustAddEntity___ctor__);
  *gachaAdjustAddList = (System_Collections_Generic_List_GachaAdjustAddEntity__o *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)gachaAdjustAddList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v16);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_GachaAdjustAddEntity__GetEnumerator__);
  v49 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v19);
  for ( i = Enumerator; ; i = v49 )
  {
    klass = i->klass;
    v22 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_10;
      }
      v24 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v24 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            i,
            *(_QWORD *)(v24 + 8));
    if ( (v25 & 1) == 0 )
      break;
    if ( !v49 )
      sub_21FFECC(v25, v26);
    v27 = v49->klass;
    v28 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_18;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_18:
      v30 = sub_2237E2C(v49, System_Collections_Generic_IEnumerator_GachaAdjustAddEntity__TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            v49,
            *(_QWORD *)(v30 + 8));
    v38 = (Il2CppObject *)v31;
    if ( !v31 )
      sub_21FFECC(0, 0);
    if ( type && *(_DWORD *)(v31 + 16) == id && *(_DWORD *)(v31 + 20) == type )
    {
      v39 = (System_Collections_Generic_List_object__o *)*gachaAdjustAddList;
      if ( !*gachaAdjustAddList
        || (items = v39->fields._items,
            v41 = Method_System_Collections_Generic_List_GachaAdjustAddEntity__Add__,
            ++v39->fields._version,
            !items) )
      {
        sub_21FFECC(v39, v38);
      }
      size = v39->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          v38,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v39->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v38;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v38, v32, v33, v34, v35, v36, v37);
      }
    }
  }
  if ( v49 )
  {
    v44 = v49->klass;
    v45 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_36;
      }
      v47 = (__int64)&v44->vtable[*v46];
    }
    else
    {
LABEL_36:
      v47 = sub_2237E2C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(v49, *(_QWORD *)(v47 + 8));
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*gachaAdjustAddList, 0);
}


bool GachaAdjustAddMaster__TryGetPeriodLimitedSvtEquipIdList(
        GachaAdjustAddMaster_o *this,
        System_Collections_Generic_List_int__o **svtEquipIdList,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  Il2CppObject *Master_object; // x20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x4
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_Collections_ICollection_o *ListById; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  _BOOL8 IsServantEquip; // x0
  __int64 v31; // x1
  Il2CppClass *klass; // x23
  void *monitor; // x24
  System_Collections_Generic_List_int__o *v34; // x22
  __int64 v35; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_GachaAdjustAddEntity__o *gachaAdjustAddList; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_5938A3A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5938A3A = 1;
  }
  gachaAdjustAddList = 0;
  memset(&v44, 0, sizeof(v44));
  entity = 0;
  memset(&v43, 0, sizeof(v43));
  v7 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  *svtEquipIdList = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)svtEquipIdList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( GachaAdjustAddMaster__TryGetGachaAdjustAddList(this, &gachaAdjustAddList, id, 2, v17) )
  {
    if ( !gachaAdjustAddList )
      sub_21FFECC(0, v18);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)gachaAdjustAddList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GachaAdjustAddEntity__GetEnumerator__);
    v44 = v41;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__MoveNext__);
      if ( !v19 )
        break;
      if ( !v44.fields._current )
        sub_21FFECC(v19, v20);
      if ( !Master_object )
        sub_21FFECC(v19, v20);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(
                                                       (GiftMaster_o *)Master_object,
                                                       (int32_t)v44.fields._current[1].monitor,
                                                       0);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ListById, 0);
      if ( !IsNullOrEmpty )
      {
        if ( !ListById )
          sub_21FFECC(IsNullOrEmpty, v23);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v41,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v43 = v41;
        v41.fields._list = 0;
        *(_QWORD *)&v41.fields._index = &v43;
        while ( 1 )
        {
          v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v43,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v24 )
            break;
          current = v43.fields._current;
          if ( !v43.fields._current )
            sub_21FFECC(v24, v25);
          v27 = GiftEntity__checkGiftType((GiftEntity_o *)v43.fields._current, 1, 0);
          if ( v27 )
          {
            if ( !v16 )
              sub_21FFECC(v27, v28);
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                   &entity,
                   (int32_t)current[1].monitor,
                   (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
            {
              if ( !entity )
                sub_21FFECC(0, v29);
              IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0);
              if ( IsServantEquip )
              {
                if ( !entity )
                  sub_21FFECC(IsServantEquip, v31);
                klass = entity[1].klass;
                monitor = entity[1].monitor;
                v34 = *svtEquipIdList;
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
                *(_QWORD *)&v46.fields.currentCryptoKey = klass;
                *(_QWORD *)&v46.fields.fakeValue = monitor;
                v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v46, 0);
                if ( !v34
                  || (items = v34->fields._items,
                      v37 = Method_System_Collections_Generic_List_int__Add__,
                      ++v34->fields._version,
                      !items) )
                {
                  sub_21FFECC(v35, (unsigned int)v35);
                }
                size = v34->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v34,
                    v35,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                }
                else
                {
                  v34->fields._size = size + 1;
                  items->m_Items[size] = v35;
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v43,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GachaAdjustAddEntity__Dispose__);
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtEquipIdList, 0);
  }
  else
  {
    return 0;
  }
}