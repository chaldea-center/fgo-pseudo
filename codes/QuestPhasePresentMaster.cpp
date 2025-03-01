void __fastcall QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDCF4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__, method);
    byte_4BFDCF4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    494,
    (const MethodInfo_327D914 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *__fastcall QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BFDCF5 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4BFDCF5 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_327FC38 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestPhasePresentEntity__o *__fastcall QuestPhasePresentMaster__GetList(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4BFDCF3 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v5);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo, v6);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo, v10);
    byte_4BFDCF3 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2E388(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3216144 *)Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2E388(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C8010C(Enumerator, System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v32 = v24;
    if ( !v24 )
      sub_1C2E388(0LL, v25);
    if ( *(_DWORD *)(v24 + 16) == questId )
    {
      if ( !v11 )
        sub_1C2E388(v24, v25);
      items = v11->fields._items;
      v34 = Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C2E388(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v36 + 4), v32, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_29:
    v40 = sub_1C8010C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_QuestPhasePresentEntity__o *)v11;
}


bool __fastcall QuestPhasePresentMaster__IsContainEntityFromPhase(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **presentEnt,
        int32_t questId,
        int32_t currentPhase,
        const MethodInfo *method)
{
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
  __int64 v27; // x22
  System_Collections_Generic_IEnumerable_TSource__o *List; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  QuestPhasePresentMaster___c_c *v38; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v40; // x23
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  System_Func_object__bool__o *v49; // x21
  Il2CppObject *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x20
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  GiftEntity_array *GiftListById; // x0
  QuestPhasePresentMaster___c_c *v65; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x21
  System_Func_object__bool__o *_9__0_2; // x22
  Il2CppObject *v68; // x23
  struct QuestPhasePresentMaster___c_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x21
  System_Func_object__bool__o *v78; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BFDCF2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_GiftDetailMaster___, presentEnt);
    sub_1C2E12C(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_1C2E12C(&DataManager_TypeInfo, v10);
    sub_1C2E12C(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__, v11);
    sub_1C2E12C(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___, v12);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___, v13);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v14);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_GiftEntity___, v15);
    sub_1C2E12C(&System_Func_GiftEntity__bool__TypeInfo, v16);
    sub_1C2E12C(&System_Func_QuestPhasePresentEntity__int__TypeInfo, v17);
    sub_1C2E12C(&System_Func_QuestPhasePresentEntity__bool__TypeInfo, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__, v19);
    sub_1C2E12C(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__, v20);
    sub_1C2E12C(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__, v21);
    sub_1C2E12C(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__, v22);
    sub_1C2E12C(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo, v23);
    sub_1C2E12C(&Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__, v24);
    sub_1C2E12C(&QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo, v25);
    sub_1C2E12C(&QuestPhasePresentMaster___c_TypeInfo, v26);
    byte_4BFDCF2 = 1;
  }
  entity = 0LL;
  v27 = sub_1C2E378(QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_36;
  *(_DWORD *)(v27 + 16) = currentPhase;
  *presentEnt = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)presentEnt, 0LL, v30, v31, v32, v33, v34, v35);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhasePresentMaster__GetList(this, questId, v36);
  if ( !List )
    goto LABEL_36;
  v37 = List;
  if ( SLODWORD(List[1].monitor) < 1 )
    return 0;
  v38 = QuestPhasePresentMaster___c_TypeInfo;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v38 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v38->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C2E378(System_Func_QuestPhasePresentEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v40,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
      0LL);
    static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v42, v43, v44, v45, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v37,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2FFB4B4 *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
  v49 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_QuestPhasePresentEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v49,
    (Il2CppObject *)v27,
    Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
    0LL);
  v50 = System_Linq_Enumerable__FirstOrDefault_object__50289116(
          v48,
          (System_Func_TSource__bool__o *)v49,
          (const MethodInfo_2FF59DC *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
  *presentEnt = (QuestPhasePresentEntity_o *)v50;
  sub_1C2E0D0((PartyOrganizationUtility_o *)presentEnt, (int64_t)v50, v51, v52, v53, v54, v55, v56);
  if ( !*presentEnt )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)List,
          &entity,
          (*presentEnt)->fields.giftId,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return 1;
  v57 = sub_1C2E378(QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v57, 0LL);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)entity;
  if ( !entity )
    goto LABEL_36;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
                                                                (GiftDetailEntity_o *)entity,
                                                                0LL);
  if ( !v57 )
    goto LABEL_36;
  *(_QWORD *)(v57 + 16) = List;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v57 + 16), (int64_t)List, v58, v59, v60, v61, v62, v63);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v57 + 16), 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)List, (*presentEnt)->fields.giftId, 0LL);
  v65 = QuestPhasePresentMaster___c_TypeInfo;
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v65 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__bool__o *)v65->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v68 = (Il2CppObject *)v65->static_fields->__9;
    _9__0_2 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_2,
      v68,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__,
      0LL);
    v69 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    v69->__9__0_2 = (struct System_Func_GiftEntity__bool__o *)_9__0_2;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v69->__9__0_2, (int64_t)_9__0_2, v70, v71, v72, v73, v74, v75);
  }
  v76 = System_Linq_Enumerable__Where_object_(
          v66,
          (System_Func_TSource__bool__o *)_9__0_2,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v76,
                                                               (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  v78 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_GiftEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v78,
    (Il2CppObject *)v57,
    Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__,
    0LL);
  v79 = System_Linq_Enumerable__Where_object_(
          v77,
          (System_Func_TSource__bool__o *)v78,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                v79,
                                                                (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  if ( !List )
LABEL_36:
    sub_1C2E388(List, v29);
  if ( List[1].monitor )
    return 1;
  *presentEnt = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)presentEnt, 0LL, v80, v81, v82, v83, v84, v85);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhasePresentMaster__TryGetEntity(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BFDCF6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__, entity);
    byte_4BFDCF6 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void __fastcall QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFDCF7 & 1) == 0 )
  {
    sub_1C2E12C(&QuestPhasePresentMaster___c_TypeInfo, v1);
    byte_4BFDCF7 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(QuestPhasePresentMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhasePresentMaster___c_TypeInfo->static_fields->__9 = (struct QuestPhasePresentMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall QuestPhasePresentMaster___c___ctor(QuestPhasePresentMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_0(
        QuestPhasePresentMaster___c_o *this,
        QuestPhasePresentEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.phase;
}


bool __fastcall QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_2(
        QuestPhasePresentMaster___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C2E388(this, 0LL);
  return ent->fields.type != 15;
}


void __fastcall QuestPhasePresentMaster___c__DisplayClass0_0___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhasePresentMaster___c__DisplayClass0_0___IsContainEntityFromPhase_b__1(
        QuestPhasePresentMaster___c__DisplayClass0_0_o *this,
        QuestPhasePresentEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.phase > this->fields.currentPhase;
}


void __fastcall QuestPhasePresentMaster___c__DisplayClass0_1___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhasePresentMaster___c__DisplayClass0_1___IsContainEntityFromPhase_b__3(
        QuestPhasePresentMaster___c__DisplayClass0_1_o *this,
        GiftEntity_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Int32_array *itemList; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_4BFDCF8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_int____77760784, info);
    sub_1C2E12C(&System_Func_int__bool__TypeInfo, v5);
    sub_1C2E12C(&Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__, v6);
    sub_1C2E12C(&QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo, v7);
    byte_4BFDCF8 = 1;
  }
  v8 = sub_1C2E378(QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C2E388(v9, v10);
  *(_QWORD *)(v8 + 16) = info;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)info, v11, v12, v13, v14, v15, v16);
  itemList = this->fields.itemList;
  v18 = (System_Func_int__bool__o *)sub_1C2E378(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__,
    0LL);
  return !BasicHelper__Any_int__50053052(
            itemList,
            (System_Func_T__bool__o *)v18,
            (const MethodInfo_2FBBFBC *)Method_BasicHelper_Any_int____77760784);
}


void __fastcall QuestPhasePresentMaster___c__DisplayClass0_2___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhasePresentMaster___c__DisplayClass0_2___IsContainEntityFromPhase_b__4(
        QuestPhasePresentMaster___c__DisplayClass0_2_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct GiftEntity_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C2E388(this, x);
  return info->fields.objectId == x;
}