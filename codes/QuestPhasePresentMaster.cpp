void __fastcall QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16752 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__, method, v2);
    byte_4B16752 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    490,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *__fastcall QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16753 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    byte_4B16753 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestPhasePresentEntity__o *__fastcall QuestPhasePresentMaster__GetList(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
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
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x8
  QuestPhasePresentEntity_c *v42; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v45; // x10
  __int64 size; // x11
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0

  if ( (byte_4B16751 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&QuestPhasePresentEntity_TypeInfo, v18, v19);
    byte_4B16751 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v41 = v33;
    if ( !v33 )
      goto LABEL_35;
    v42 = QuestPhasePresentEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestPhasePresentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestPhasePresentEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != QuestPhasePresentEntity_TypeInfo )
    {
      sub_1BCACFC(v33);
LABEL_35:
      sub_1BCAA3C(v33, v34);
    }
    if ( *(_DWORD *)(v33 + 16) == questId )
    {
      if ( !v20 )
        sub_1BCAA3C(v33, QuestPhasePresentEntity_TypeInfo);
      items = v20->fields._items;
      v45 = Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BCAA3C(v33, v42);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v33,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v41;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v41, v35, v36, v37, v38, v39, v40);
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
    v51 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_QuestPhasePresentEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhasePresentMaster__IsContainEntityFromPhase(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **presentEnt,
        int32_t questId,
        int32_t currentPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x22
  System_Collections_Generic_IEnumerable_TSource__o *List; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x2
  __int64 v55; // x2
  __int64 v56; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x20
  QuestPhasePresentMaster___c_c *v58; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v60; // x23
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x20
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Func_object__bool__o *v72; // x21
  Il2CppObject *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x20
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x1
  GiftEntity_array *GiftListById; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  QuestPhasePresentMaster___c_c *v96; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x21
  System_Func_object__bool__o *_9__0_2; // x22
  Il2CppObject *v99; // x23
  struct QuestPhasePresentMaster___c_StaticFields *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x21
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  System_Func_object__bool__o *v112; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B16750 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftDetailMaster___, presentEnt, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GiftEntity___, v21, v22);
    sub_1BCA7E0(&System_Func_GiftEntity__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_QuestPhasePresentEntity__int__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Func_QuestPhasePresentEntity__bool__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__, v31, v32);
    sub_1BCA7E0(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__, v33, v34);
    sub_1BCA7E0(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__, v35, v36);
    sub_1BCA7E0(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__, v39, v40);
    sub_1BCA7E0(&QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo, v41, v42);
    sub_1BCA7E0(&QuestPhasePresentMaster___c_TypeInfo, v43, v44);
    byte_4B16750 = 1;
  }
  entity = 0LL;
  v45 = sub_1BCAA2C(
          QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo,
          presentEnt,
          *(_QWORD *)&questId,
          *(_QWORD *)&currentPhase);
  System_Object___ctor((Il2CppObject *)v45, 0LL);
  if ( !v45 )
    goto LABEL_36;
  *(_DWORD *)(v45 + 16) = currentPhase;
  *presentEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)presentEnt, 0LL, v48, v49, v50, v51, v52, v53);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhasePresentMaster__GetList(this, questId, v54);
  if ( !List )
    goto LABEL_36;
  v57 = List;
  if ( SLODWORD(List[1].monitor) < 1 )
    return 0;
  v58 = QuestPhasePresentMaster___c_TypeInfo;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo, v47);
    v58 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v58->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58, v47);
      v58 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v58->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_QuestPhasePresentEntity__int__TypeInfo,
                                              v47,
                                              v55,
                                              v56);
    System_Func_object__int____ctor(
      _9__0_0,
      v60,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
      0LL);
    static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v62, v63, v64, v65, v66, v67);
  }
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v57,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
  v72 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestPhasePresentEntity__bool__TypeInfo, v69, v70, v71);
  System_Func_object__bool____ctor(
    v72,
    (Il2CppObject *)v45,
    Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
    0LL);
  v73 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          v68,
          (System_Func_TSource__bool__o *)v72,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
  *presentEnt = (QuestPhasePresentEntity_o *)v73;
  sub_1BCA784((PartyOrganizationUtility_o *)presentEnt, (int64_t)v73, v74, v75, v76, v77, v78, v79);
  if ( !*presentEnt )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v80);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)List,
          &entity,
          (*presentEnt)->fields.giftId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return 1;
  v84 = sub_1BCAA2C(QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo, v81, v82, v83);
  System_Object___ctor((Il2CppObject *)v84, 0LL);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)entity;
  if ( !entity )
    goto LABEL_36;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
                                                                (GiftDetailEntity_o *)entity,
                                                                0LL);
  if ( !v84 )
    goto LABEL_36;
  *(_QWORD *)(v84 + 16) = List;
  sub_1BCA784((PartyOrganizationUtility_o *)(v84 + 16), (int64_t)List, v85, v86, v87, v88, v89, v90);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v84 + 16), 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v91);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)List, (*presentEnt)->fields.giftId, 0LL);
  v96 = QuestPhasePresentMaster___c_TypeInfo;
  v97 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo, v93);
    v96 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__bool__o *)v96->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96, v93);
      v96 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v99 = (Il2CppObject *)v96->static_fields->__9;
    _9__0_2 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GiftEntity__bool__TypeInfo, v93, v94, v95);
    System_Func_object__bool____ctor(
      _9__0_2,
      v99,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__,
      0LL);
    v100 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    v100->__9__0_2 = (struct System_Func_GiftEntity__bool__o *)_9__0_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v100->__9__0_2, (int64_t)_9__0_2, v101, v102, v103, v104, v105, v106);
  }
  v107 = System_Linq_Enumerable__Where_object_(
           v97,
           (System_Func_TSource__bool__o *)_9__0_2,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v108 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                v107,
                                                                (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  v112 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GiftEntity__bool__TypeInfo, v109, v110, v111);
  System_Func_object__bool____ctor(
    v112,
    (Il2CppObject *)v84,
    Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__,
    0LL);
  v113 = System_Linq_Enumerable__Where_object_(
           v108,
           (System_Func_TSource__bool__o *)v112,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                v113,
                                                                (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  if ( !List )
LABEL_36:
    sub_1BCAA3C(List, v47);
  if ( List[1].monitor )
    return 1;
  *presentEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)presentEnt, 0LL, v114, v115, v116, v117, v118, v119);
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

  if ( (byte_4B16754 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B16754 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void __fastcall QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16755 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestPhasePresentMaster___c_TypeInfo, v1, v2);
    byte_4B16755 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestPhasePresentMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestPhasePresentMaster___c_TypeInfo->static_fields->__9 = (struct QuestPhasePresentMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.phase;
}


bool __fastcall QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_2(
        QuestPhasePresentMaster___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Int32_array *itemList; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_int__bool__o *v25; // x20

  if ( (byte_4B16756 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, info, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__, v8, v9);
    sub_1BCA7E0(&QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo, v10, v11);
    byte_4B16756 = 1;
  }
  v12 = sub_1BCAA2C(QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo, info, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = info;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)info, v15, v16, v17, v18, v19, v20);
  itemList = this->fields.itemList;
  v25 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v22, v23, v24);
  System_Func_int__bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__,
    0LL);
  return !BasicHelper__Any_int__49273364(
            itemList,
            (System_Func_T__bool__o *)v25,
            (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
}


void __fastcall QuestPhasePresentMaster___c__DisplayClass0_2___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhasePresentMaster___c__DisplayClass0_2___IsContainEntityFromPhase_b__4(
        QuestPhasePresentMaster___c__DisplayClass0_2_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct GiftEntity_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return info->fields.objectId == x;
}