void QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C380E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
    byte_4C380E0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    497,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C380E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
    byte_4C380E1 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_339B2F0 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestPhasePresentEntity__o *QuestPhasePresentMaster__GetList(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  struct System_Object_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11
  Il2CppClass **v23; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4C380DF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
    byte_4C380DF = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v19 = v16;
    if ( !v16 )
      sub_1C32E7C(0);
    if ( *(_DWORD *)(v16 + 16) == questId )
    {
      if ( !v5 )
        sub_1C32E7C(v16);
      items = v5->fields._items;
      v21 = Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C32E7C(v16);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v16,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), v19, v17, v18);
      }
    }
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_29:
    v27 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  QuestPhasePresentMaster___c_c *v15; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v17; // x23
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_object__bool__o *v22; // x21
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  GiftEntity_array *GiftListById; // x0
  QuestPhasePresentMaster___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  System_Func_object__bool__o *_9__0_2; // x22
  Il2CppObject *v33; // x23
  struct QuestPhasePresentMaster___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  System_Func_object__bool__o *v39; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C380DE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C32C20(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_QuestPhasePresentEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_QuestPhasePresentEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__);
    sub_1C32C20(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__);
    sub_1C32C20(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__);
    sub_1C32C20(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__);
    sub_1C32C20(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__);
    sub_1C32C20(&QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
    sub_1C32C20(&QuestPhasePresentMaster___c_TypeInfo);
    byte_4C380DE = 1;
  }
  entity = 0;
  v9 = sub_1C32E6C(QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_DWORD *)(v9 + 16) = currentPhase;
  *presentEnt = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)presentEnt, 0, v11, v12);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhasePresentMaster__GetList(this, questId, v13);
  if ( !List )
    goto LABEL_36;
  v14 = List;
  if ( SLODWORD(List[1].monitor) < 1 )
    return 0;
  v15 = QuestPhasePresentMaster___c_TypeInfo;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v15 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v15->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestPhasePresentEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v17,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
      0);
    static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
  v22 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestPhasePresentEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v9,
    Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
    0);
  v23 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
  *presentEnt = (QuestPhasePresentEntity_o *)v23;
  sub_1C32BC4((CGThumbnailListItem_o *)presentEnt, (int32_t)v23, v24, v25);
  if ( !*presentEnt )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)List,
          &entity,
          (*presentEnt)->fields.giftId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return 1;
  v26 = sub_1C32E6C(QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)entity;
  if ( !entity )
    goto LABEL_36;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
                                                                (GiftDetailEntity_o *)entity,
                                                                0);
  if ( !v26 )
    goto LABEL_36;
  *(_QWORD *)(v26 + 16) = List;
  sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 16), (int32_t)List, v27, v28);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v26 + 16), 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)List, (*presentEnt)->fields.giftId, 0);
  v30 = QuestPhasePresentMaster___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v30 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__bool__o *)v30->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__0_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_2,
      v33,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__,
      0);
    v34 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    v34->__9__0_2 = (struct System_Func_GiftEntity__bool__o *)_9__0_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v34->__9__0_2, (int32_t)_9__0_2, v35, v36);
  }
  v37 = System_Linq_Enumerable__Where_object_(
          v31,
          (System_Func_TSource__bool__o *)_9__0_2,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v37,
                                                               (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  v39 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GiftEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v39,
    (Il2CppObject *)v26,
    Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__,
    0);
  v40 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                v40,
                                                                (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  if ( !List )
LABEL_36:
    sub_1C32E7C(List);
  if ( List[1].monitor )
    return 1;
  *presentEnt = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)presentEnt, 0, v41, v42);
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

  if ( (byte_4C380E2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
    byte_4C380E2 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C380E3 & 1) == 0 )
  {
    sub_1C32C20(&QuestPhasePresentMaster___c_TypeInfo);
    byte_4C380E3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(QuestPhasePresentMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhasePresentMaster___c_TypeInfo->static_fields->__9 = (struct QuestPhasePresentMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return x->fields.phase;
}


bool QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_2(
        QuestPhasePresentMaster___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Int32_array *itemList; // x19
  System_Func_int__bool__o *v10; // x20

  if ( (byte_4C380E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__);
    sub_1C32C20(&QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
    byte_4C380E4 = 1;
  }
  v5 = sub_1C32E6C(QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = info;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)info, v7, v8);
  itemList = this->fields.itemList;
  v10 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__,
    0);
  return !BasicHelper__Any_int__51143952(
            itemList,
            (System_Func_T__bool__o *)v10,
            (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
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
    sub_1C32E7C(this);
  return info->fields.objectId == x;
}