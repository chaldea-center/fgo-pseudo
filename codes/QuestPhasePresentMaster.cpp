void __fastcall QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B026FC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__, method);
    byte_4B026FC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    497,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *__fastcall QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B026FD & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4B026FD = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_32B3B28 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4B026FB & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo, v10);
    byte_4B026FB = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v14);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v23 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v28 = v24;
    if ( !v24 )
      sub_1BC3264(0LL, v25);
    if ( *(_DWORD *)(v24 + 16) == questId )
    {
      if ( !v11 )
        sub_1BC3264(v24, v25);
      items = v11->fields._items;
      v30 = Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 4), v28, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_29;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_29:
    v36 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
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
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  QuestPhasePresentMaster___c_c *v34; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v36; // x23
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  System_Func_object__bool__o *v41; // x21
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  GiftEntity_array *GiftListById; // x0
  QuestPhasePresentMaster___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x21
  System_Func_object__bool__o *_9__0_2; // x22
  Il2CppObject *v52; // x23
  struct QuestPhasePresentMaster___c_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x21
  System_Func_object__bool__o *v58; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B026FA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_GiftDetailMaster___, presentEnt);
    sub_1BC3008(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___, v13);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v14);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_GiftEntity___, v15);
    sub_1BC3008(&System_Func_GiftEntity__bool__TypeInfo, v16);
    sub_1BC3008(&System_Func_QuestPhasePresentEntity__int__TypeInfo, v17);
    sub_1BC3008(&System_Func_QuestPhasePresentEntity__bool__TypeInfo, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__, v19);
    sub_1BC3008(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__, v20);
    sub_1BC3008(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__, v21);
    sub_1BC3008(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__, v22);
    sub_1BC3008(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo, v23);
    sub_1BC3008(&Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__, v24);
    sub_1BC3008(&QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo, v25);
    sub_1BC3008(&QuestPhasePresentMaster___c_TypeInfo, v26);
    byte_4B026FA = 1;
  }
  entity = 0LL;
  v27 = sub_1BC3254(QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_36;
  *(_DWORD *)(v27 + 16) = currentPhase;
  *presentEnt = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)presentEnt, 0, v30, v31);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhasePresentMaster__GetList(this, questId, v32);
  if ( !List )
    goto LABEL_36;
  v33 = List;
  if ( SLODWORD(List[1].monitor) < 1 )
    return 0;
  v34 = QuestPhasePresentMaster___c_TypeInfo;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v34 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v34->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_QuestPhasePresentEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v36,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
      0LL);
    static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v33,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_302D508 *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
  v41 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_QuestPhasePresentEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v41,
    (Il2CppObject *)v27,
    Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
    0LL);
  v42 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
          v40,
          (System_Func_TSource__bool__o *)v41,
          (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
  *presentEnt = (QuestPhasePresentEntity_o *)v42;
  sub_1BC2FAC((CGThumbnailListItem_o *)presentEnt, (int32_t)v42, v43, v44);
  if ( !*presentEnt )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)List,
          &entity,
          (*presentEnt)->fields.giftId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return 1;
  v45 = sub_1BC3254(QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v45, 0LL);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)entity;
  if ( !entity )
    goto LABEL_36;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
                                                                (GiftDetailEntity_o *)entity,
                                                                0LL);
  if ( !v45 )
    goto LABEL_36;
  *(_QWORD *)(v45 + 16) = List;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 16), (int32_t)List, v46, v47);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v45 + 16), 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)List, (*presentEnt)->fields.giftId, 0LL);
  v49 = QuestPhasePresentMaster___c_TypeInfo;
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v49 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__bool__o *)v49->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__0_2 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_2,
      v52,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__,
      0LL);
    v53 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    v53->__9__0_2 = (struct System_Func_GiftEntity__bool__o *)_9__0_2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v53->__9__0_2, (int32_t)_9__0_2, v54, v55);
  }
  v56 = System_Linq_Enumerable__Where_object_(
          v50,
          (System_Func_TSource__bool__o *)_9__0_2,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v56,
                                                               (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  v58 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_GiftEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v58,
    (Il2CppObject *)v45,
    Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__,
    0LL);
  v59 = System_Linq_Enumerable__Where_object_(
          v57,
          (System_Func_TSource__bool__o *)v58,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                v59,
                                                                (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  if ( !List )
LABEL_36:
    sub_1BC3264(List, v29);
  if ( List[1].monitor )
    return 1;
  *presentEnt = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)presentEnt, 0, v60, v61);
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

  if ( (byte_4B026FE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__, entity);
    byte_4B026FE = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void __fastcall QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B026FF & 1) == 0 )
  {
    sub_1BC3008(&QuestPhasePresentMaster___c_TypeInfo, v1);
    byte_4B026FF = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(QuestPhasePresentMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhasePresentMaster___c_TypeInfo->static_fields->__9 = (struct QuestPhasePresentMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
  return x->fields.phase;
}


bool __fastcall QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_2(
        QuestPhasePresentMaster___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, 0LL);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Int32_array *itemList; // x19
  System_Func_int__bool__o *v14; // x20

  if ( (byte_4B02700 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_int____76812400, info);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v5);
    sub_1BC3008(&Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__, v6);
    sub_1BC3008(&QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo, v7);
    byte_4B02700 = 1;
  }
  v8 = sub_1BC3254(QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  *(_QWORD *)(v8 + 16) = info;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)info, v11, v12);
  itemList = this->fields.itemList;
  v14 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__,
    0LL);
  return !BasicHelper__Any_int__50245724(
            itemList,
            (System_Func_T__bool__o *)v14,
            (const MethodInfo_2FEB05C *)Method_BasicHelper_Any_int____76812400);
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
    sub_1BC3264(this, x);
  return info->fields.objectId == x;
}