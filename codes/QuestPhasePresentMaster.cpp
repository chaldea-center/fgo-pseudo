void QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEDA7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
    byte_4CEEDA7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    497,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEDA8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
    byte_4CEEDA8 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3432DB4 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestPhasePresentEntity__o *QuestPhasePresentMaster__GetList(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4CEEDA6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
    byte_4CEEDA6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      sub_1C7BD40(0, v19);
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      if ( !v5 )
        sub_1C7BD40(v18, v19);
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C7BD40(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_29:
    v34 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_QuestPhasePresentEntity__o *)v5;
}


bool QuestPhasePresentMaster__IsContainEntityFromPhase(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **presentEnt,
        int32_t questId,
        int32_t currentPhase,
        const MethodInfo *method)
{
  __int64 v9; // x22
  System_Collections_Generic_IEnumerable_TSource__o *List; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  QuestPhasePresentMaster___c_c *v20; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v22; // x23
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_object__bool__o *v31; // x21
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  GiftEntity_array *GiftListById; // x0
  QuestPhasePresentMaster___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  System_Func_object__bool__o *_9__0_2; // x22
  Il2CppObject *v50; // x23
  struct QuestPhasePresentMaster___c_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x21
  System_Func_object__bool__o *v60; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEEDA5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C7BAE8(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_QuestPhasePresentEntity__int__TypeInfo);
    sub_1C7BAE8(&System_Func_QuestPhasePresentEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__);
    sub_1C7BAE8(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__);
    sub_1C7BAE8(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__);
    sub_1C7BAE8(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__);
    sub_1C7BAE8(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C7BAE8(&Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__);
    sub_1C7BAE8(&QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
    sub_1C7BAE8(&QuestPhasePresentMaster___c_TypeInfo);
    byte_4CEEDA5 = 1;
  }
  entity = 0;
  v9 = sub_1C7BD34(QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_DWORD *)(v9 + 16) = currentPhase;
  *presentEnt = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)presentEnt, 0, v12, v13, v14, v15, v16, v17);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhasePresentMaster__GetList(this, questId, v18);
  if ( !List )
    goto LABEL_36;
  v19 = List;
  if ( SLODWORD(List[1].monitor) < 1 )
    return 0;
  v20 = QuestPhasePresentMaster___c_TypeInfo;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v20 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v20->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_QuestPhasePresentEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v22,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
      0);
    static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_319EF58 *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
  v31 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestPhasePresentEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v9,
    Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
    0);
  v32 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
          v30,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
  *presentEnt = (QuestPhasePresentEntity_o *)v32;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)presentEnt, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  if ( !*presentEnt )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)List,
          &entity,
          (*presentEnt)->fields.giftId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return 1;
  v39 = sub_1C7BD34(QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v39, 0);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)entity;
  if ( !entity )
    goto LABEL_36;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
                                                                (GiftDetailEntity_o *)entity,
                                                                0);
  if ( !v39 )
    goto LABEL_36;
  *(_QWORD *)(v39 + 16) = List;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v39 + 16), (int32_t)List, v40, v41, v42, v43, v44, v45);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v39 + 16), 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)List, (*presentEnt)->fields.giftId, 0);
  v47 = QuestPhasePresentMaster___c_TypeInfo;
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v47 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__bool__o *)v47->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v47->static_fields->__9;
    _9__0_2 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_2,
      v50,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__,
      0);
    v51 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    v51->__9__0_2 = (struct System_Func_GiftEntity__bool__o *)_9__0_2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v51->__9__0_2, (int32_t)_9__0_2, v52, v53, v54, v55, v56, v57);
  }
  v58 = System_Linq_Enumerable__Where_object_(
          v48,
          (System_Func_TSource__bool__o *)_9__0_2,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v58,
                                                               (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  v60 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_GiftEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v60,
    (Il2CppObject *)v39,
    Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__,
    0);
  v61 = System_Linq_Enumerable__Where_object_(
          v59,
          (System_Func_TSource__bool__o *)v60,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                v61,
                                                                (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  if ( !List )
LABEL_36:
    sub_1C7BD40(List, v11);
  if ( List[1].monitor )
    return 1;
  *presentEnt = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)presentEnt, 0, v62, v63, v64, v65, v66, v67);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestPhasePresentMaster__TryGetEntity(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEDA9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
    byte_4CEEDA9 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEEDAA & 1) == 0 )
  {
    sub_1C7BAE8(&QuestPhasePresentMaster___c_TypeInfo);
    byte_4CEEDAA = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(QuestPhasePresentMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhasePresentMaster___c_TypeInfo->static_fields->__9 = (struct QuestPhasePresentMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestPhasePresentMaster___c___ctor(QuestPhasePresentMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_0(
        QuestPhasePresentMaster___c_o *this,
        QuestPhasePresentEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.phase;
}


bool QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_2(
        QuestPhasePresentMaster___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C7BD40(this, 0);
  return ent->fields.type != 15;
}


void QuestPhasePresentMaster___c__DisplayClass0_0___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhasePresentMaster___c__DisplayClass0_0___IsContainEntityFromPhase_b__1(
        QuestPhasePresentMaster___c__DisplayClass0_0_o *this,
        QuestPhasePresentEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.phase > this->fields.currentPhase;
}


void QuestPhasePresentMaster___c__DisplayClass0_1___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhasePresentMaster___c__DisplayClass0_1___IsContainEntityFromPhase_b__3(
        QuestPhasePresentMaster___c__DisplayClass0_1_o *this,
        GiftEntity_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Int32_array *itemList; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_4CEEDAB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_int____78794392);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__);
    sub_1C7BAE8(&QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
    byte_4CEEDAB = 1;
  }
  v5 = sub_1C7BD34(QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = info;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)info, v8, v9, v10, v11, v12, v13);
  itemList = this->fields.itemList;
  v15 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__,
    0);
  return !BasicHelper__Any_int__51745960(
            itemList,
            (System_Func_T__bool__o *)v15,
            (const MethodInfo_31594A8 *)Method_BasicHelper_Any_int____78794392);
}


void QuestPhasePresentMaster___c__DisplayClass0_2___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhasePresentMaster___c__DisplayClass0_2___IsContainEntityFromPhase_b__4(
        QuestPhasePresentMaster___c__DisplayClass0_2_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct GiftEntity_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C7BD40(this, x);
  return info->fields.objectId == x;
}