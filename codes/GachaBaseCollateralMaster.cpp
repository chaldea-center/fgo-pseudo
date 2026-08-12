void GachaBaseCollateralMaster___ctor(GachaBaseCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970BFB & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__);
    byte_5970BFB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    41,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string___ctor__);
}


GachaBaseCollateralEntity_o *GachaBaseCollateralMaster__GetEntity(
        GachaBaseCollateralMaster_o *this,
        int32_t gachaId,
        int32_t type,
        int32_t giftId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970BFC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__);
    byte_5970BFC = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0);
  return (GachaBaseCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3F157EC *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__GetEntity__);
}


bool GachaBaseCollateralMaster__TryGetEntity(
        GachaBaseCollateralMaster_o *this,
        GachaBaseCollateralEntity_o **entity,
        int32_t gachaId,
        int32_t type,
        int32_t giftId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970BFD & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__);
    byte_5970BFD = 1;
  }
  PK = (Il2CppObject *)GachaBaseCollateralEntity__CreatePK(gachaId, type, giftId, idx, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_GachaBaseCollateralMaster__GachaBaseCollateralEntity__string__TryGetEntity__);
}


bool GachaBaseCollateralMaster__TryGetPeriodLimitedSvtIdList(
        GachaBaseCollateralMaster_o *this,
        System_Collections_Generic_List_int__o **svtIdList,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  GiftMaster_o *v18; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *v21; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *v28; // x22
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  const MethodInfo *v33; // x2
  System_Collections_ICollection_o *ListById; // x22
  __int128 v35; // q0
  _BOOL8 v36; // x0
  __int64 monitor_low; // x1
  System_Collections_Generic_List_int__o *v38; // x0
  struct System_Int32_array *items; // x9
  _QWORD *v40; // x8
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__o *v42; // x20
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v49; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_IEnumerator_T__o **v50; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v52; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_5970BFA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970BFA = 1;
  }
  v52 = 0;
  memset(&v51, 0, sizeof(v51));
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  *svtIdList = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)svtIdList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(Master_object, v16);
  v18 = (GiftMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_GachaBaseCollateralEntity__GetEnumerator__);
  v52 = Enumerator;
  v49 = 0;
  v50 = &v52;
  if ( !Enumerator )
LABEL_51:
    sub_2213CDC(Enumerator, v20);
  v21 = Enumerator;
  while ( 1 )
  {
    klass = v21->klass;
    v23 = *(unsigned __int16 *)&v21->klass->_2.rank;
    if ( *(_WORD *)&v21->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_12;
      }
      v25 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v25 = sub_224BC3C(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            v21,
            *(_QWORD *)(v25 + 8));
    if ( (v26 & 1) == 0 )
      break;
    v28 = v52;
    if ( !v52 )
      sub_2213CDC(v26, v27);
    v29 = v52->klass;
    v30 = *(unsigned __int16 *)&v52->klass->_2.rank;
    if ( *(_WORD *)&v52->klass->_2.rank )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_20;
      }
      v32 = (__int64)&v29->vtable[*v31];
    }
    else
    {
LABEL_20:
      v32 = sub_224BC3C(v52, System_Collections_Generic_IEnumerator_GachaBaseCollateralEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                  v28,
                                                                  *(_QWORD *)(v32 + 8));
    if ( !Enumerator )
      sub_2213CDC(0, v20);
    if ( LODWORD(Enumerator[1].klass) == gachaId )
    {
      if ( !v18 )
        sub_2213CDC(Enumerator, v20);
      ListById = (System_Collections_ICollection_o *)GiftMaster__GetListById(v18, (int32_t)Enumerator[1].monitor, v33);
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)BasicHelper__IsNullOrEmpty(ListById, 0);
      if ( ((unsigned __int8)Enumerator & 1) == 0 )
      {
        if ( !ListById )
          sub_2213CDC(Enumerator, v20);
        System_Collections_Generic_List_object___GetEnumerator(
          &v48,
          (System_Collections_Generic_List_object__o *)ListById,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
        v35 = *(_OWORD *)&v48.fields._list;
        v48.fields._list = 0;
        *(_QWORD *)&v48.fields._index = &v51;
        *(_OWORD *)&v51.fields._list = v35;
        v51.fields._current = v48.fields._current;
        while ( 1 )
        {
          v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v51,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
          if ( !v36 )
            break;
          if ( !v51.fields._current )
            sub_2213CDC(v36, monitor_low);
          if ( HIDWORD(v51.fields._current[1].klass) == 1 )
          {
            v38 = *svtIdList;
            if ( !*svtIdList
              || (items = v38->fields._items,
                  monitor_low = LODWORD(v51.fields._current[1].monitor),
                  v40 = Method_System_Collections_Generic_List_int__Add__,
                  ++v38->fields._version,
                  !items) )
            {
              sub_2213CDC(v38, monitor_low);
            }
            size = v38->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v38,
                monitor_low,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v38->fields._size = size + 1;
              items->m_Items[size] = monitor_low;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v51,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
      }
    }
    v21 = v52;
    if ( !v52 )
      goto LABEL_51;
  }
  v42 = *v50;
  if ( *v50 )
  {
    v43 = v42->klass;
    v44 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_46;
      }
      v46 = (__int64)&v43->vtable[*v45];
    }
    else
    {
LABEL_46:
      v46 = sub_224BC3C(*v50, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
  }
  if ( v49 )
    sub_2213CD4(v49);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*svtIdList, 0);
}