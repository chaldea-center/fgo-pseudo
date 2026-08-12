void QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970FD2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
    byte_5970FD2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    499,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970FD3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
    byte_5970FD3 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestPhasePresentEntity__o *QuestPhasePresentMaster__GetList(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-38h]

  if ( (byte_5970FD1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
    byte_5970FD1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestPhasePresentEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v38 )
      sub_2213CDC(v15, v16);
    v17 = v38->klass;
    v18 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v38, System_Collections_Generic_IEnumerator_QuestPhasePresentEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v38,
            *(_QWORD *)(v20 + 8));
    v28 = v21;
    if ( !v21 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v21 + 16) == questId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v30 = Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v21, v21);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v21,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_34;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_34:
      v36 = sub_224BC3C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v38, *(_QWORD *)(v36 + 8));
  }
  return (System_Collections_Generic_List_QuestPhasePresentEntity__o *)v5;
}


bool QuestPhasePresentMaster__IsContainEntityFromPhase(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **presentEnt,
        int32_t questId,
        int32_t currentPhase,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *List; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  QuestPhasePresentMaster___c_c *v20; // x0
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__0_0; // x22
  Il2CppObject *v23; // x23
  struct QuestPhasePresentMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_object__bool__o *v32; // x22
  Il2CppObject *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  __int64 v41; // x20
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  GiftEntity_array *GiftListById; // x0
  __int64 v50; // x1
  QuestPhasePresentMaster___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  struct QuestPhasePresentMaster___c_StaticFields *v53; // x9
  System_Func_object__bool__o *_9__0_2; // x22
  Il2CppObject *v55; // x23
  struct QuestPhasePresentMaster___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x21
  System_Func_object__bool__o *v65; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5970FD0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_2213A60(&System_Func_GiftEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_QuestPhasePresentEntity__int__TypeInfo);
    sub_2213A60(&System_Func_QuestPhasePresentEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__);
    sub_2213A60(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__);
    sub_2213A60(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__);
    sub_2213A60(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__);
    sub_2213A60(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
    sub_2213A60(&Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__);
    sub_2213A60(&QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
    sub_2213A60(&QuestPhasePresentMaster___c_TypeInfo);
    byte_5970FD0 = 1;
  }
  entity = 0;
  v9 = sub_2213CCC(QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_DWORD *)(v9 + 16) = currentPhase;
  *presentEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)presentEnt, 0, v12, v13, v14, v15, v16, v17);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhasePresentMaster__GetList(this, questId, v18);
  if ( !List )
    goto LABEL_36;
  v19 = List;
  if ( SLODWORD(List[1].monitor) < 1 )
    return 0;
  v20 = QuestPhasePresentMaster___c_TypeInfo;
  if ( !*(&QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo, v11);
    v20 = QuestPhasePresentMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__0_0 = (System_Func_object__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v11);
      static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestPhasePresentEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v23,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
      0);
    v24 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    v24->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__0_0, (int32_t)_9__0_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
  v32 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestPhasePresentEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v9,
    Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
    0);
  v33 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          v31,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
  *presentEnt = (QuestPhasePresentEntity_o *)v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)presentEnt, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  if ( !*presentEnt )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)List,
          &entity,
          (*presentEnt)->fields.giftId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return 1;
  v41 = sub_2213CCC(QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)entity;
  if ( !entity )
    goto LABEL_36;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
                                                                (GiftDetailEntity_o *)entity,
                                                                0);
  if ( !v41 )
    goto LABEL_36;
  *(_QWORD *)(v41 + 16) = List;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 16), (int32_t)List, v42, v43, v44, v45, v46, v47);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v41 + 16), 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)List, (*presentEnt)->fields.giftId, 0);
  v51 = QuestPhasePresentMaster___c_TypeInfo;
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !*(&QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo, v50);
    v51 = QuestPhasePresentMaster___c_TypeInfo;
  }
  v53 = v51->static_fields;
  _9__0_2 = (System_Func_object__bool__o *)v53->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !*(&v51->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v51, v50);
      v53 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__0_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_2,
      v55,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__,
      0);
    v56 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    v56->__9__0_2 = (struct System_Func_GiftEntity__bool__o *)_9__0_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v56->__9__0_2, (int32_t)_9__0_2, v57, v58, v59, v60, v61, v62);
  }
  v63 = System_Linq_Enumerable__Where_object_(
          v52,
          (System_Func_TSource__bool__o *)_9__0_2,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v63,
                                                               (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  v65 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GiftEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v65,
    (Il2CppObject *)v41,
    Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__,
    0);
  v66 = System_Linq_Enumerable__Where_object_(
          v64,
          (System_Func_TSource__bool__o *)v65,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                v66,
                                                                (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  if ( !List )
LABEL_36:
    sub_2213CDC(List, v11);
  if ( List[1].monitor )
    return 1;
  *presentEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)presentEnt, 0, v67, v68, v69, v70, v71, v72);
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

  if ( (byte_5970FD4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
    byte_5970FD4 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970FD5 & 1) == 0 )
  {
    sub_2213A60(&QuestPhasePresentMaster___c_TypeInfo);
    byte_5970FD5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestPhasePresentMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhasePresentMaster___c_TypeInfo->static_fields->__9 = (struct QuestPhasePresentMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return x->fields.phase;
}


bool QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_2(
        QuestPhasePresentMaster___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Int32_array *itemList; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_5970FD6 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__);
    sub_2213A60(&QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
    byte_5970FD6 = 1;
  }
  v5 = sub_2213CCC(QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = info;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)info, v8, v9, v10, v11, v12, v13);
  itemList = this->fields.itemList;
  v15 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__,
    0);
  return !BasicHelper__Any_int__58784608(
            itemList,
            (System_Func_T__bool__o *)v15,
            (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


void QuestPhasePresentMaster___c__DisplayClass0_2___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool QuestPhasePresentMaster___c__DisplayClass0_2___IsContainEntityFromPhase_b__4(
        QuestPhasePresentMaster___c__DisplayClass0_2_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct GiftEntity_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_2213CDC(this, *(_QWORD *)&x);
  return info->fields.objectId == x;
}