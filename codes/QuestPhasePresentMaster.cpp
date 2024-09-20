void __fastcall QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B6A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
    byte_4A5B6A1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    490,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *__fastcall QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B6A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
    byte_4A5B6A2 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestPhasePresentEntity__o *__fastcall QuestPhasePresentMaster__GetList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  QuestPhasePresentEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4A5B6A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
    sub_1B885B0(&QuestPhasePresentEntity_TypeInfo);
    byte_4A5B6A0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_35;
    v23 = QuestPhasePresentEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestPhasePresentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestPhasePresentEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != QuestPhasePresentEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_35:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      if ( !v5 )
        sub_1B8880C(v18, QuestPhasePresentEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_QuestPhasePresentEntity__o *)v5;
}


bool __fastcall QuestPhasePresentMaster__IsContainEntityFromPhase(
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
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  QuestPhasePresentMaster___c_c *v16; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v18; // x23
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__bool__o *v23; // x21
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  GiftEntity_array *GiftListById; // x0
  QuestPhasePresentMaster___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  System_Func_object__bool__o *_9__0_2; // x22
  Il2CppObject *v34; // x23
  struct QuestPhasePresentMaster___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  System_Func_object__bool__o *v40; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5B69F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1B885B0(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_QuestPhasePresentEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_QuestPhasePresentEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__);
    sub_1B885B0(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__);
    sub_1B885B0(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__);
    sub_1B885B0(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__);
    sub_1B885B0(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__);
    sub_1B885B0(&QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
    sub_1B885B0(&QuestPhasePresentMaster___c_TypeInfo);
    byte_4A5B69F = 1;
  }
  entity = 0LL;
  v9 = sub_1B887FC(QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_36;
  *(_DWORD *)(v9 + 16) = currentPhase;
  *presentEnt = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)presentEnt, 0, v12, v13);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhasePresentMaster__GetList(this, questId, v14);
  if ( !List )
    goto LABEL_36;
  v15 = List;
  if ( SLODWORD(List[1].monitor) < 1 )
    return 0;
  v16 = QuestPhasePresentMaster___c_TypeInfo;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v16 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v16->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_QuestPhasePresentEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v18,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
      0LL);
    static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v15,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
  v23 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestPhasePresentEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v9,
    Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
    0LL);
  v24 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          v22,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
  *presentEnt = (QuestPhasePresentEntity_o *)v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)presentEnt, (int32_t)v24, v25, v26);
  if ( !*presentEnt )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)List,
          &entity,
          (*presentEnt)->fields.giftId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    return 1;
  v27 = sub_1B887FC(QuestPhasePresentMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)entity;
  if ( !entity )
    goto LABEL_36;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
                                                                (GiftDetailEntity_o *)entity,
                                                                0LL);
  if ( !v27 )
    goto LABEL_36;
  *(_QWORD *)(v27 + 16) = List;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)List, v28, v29);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v27 + 16), 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !*presentEnt || !List )
    goto LABEL_36;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)List, (*presentEnt)->fields.giftId, 0LL);
  v31 = QuestPhasePresentMaster___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
    v31 = QuestPhasePresentMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__bool__o *)v31->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = QuestPhasePresentMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__0_2 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_2,
      v34,
      Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_2__,
      0LL);
    v35 = QuestPhasePresentMaster___c_TypeInfo->static_fields;
    v35->__9__0_2 = (struct System_Func_GiftEntity__bool__o *)_9__0_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->__9__0_2, (int32_t)_9__0_2, v36, v37);
  }
  v38 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)_9__0_2,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               v38,
                                                               (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  v40 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v40,
    (Il2CppObject *)v27,
    Method_QuestPhasePresentMaster___c__DisplayClass0_1__IsContainEntityFromPhase_b__3__,
    0LL);
  v41 = System_Linq_Enumerable__Where_object_(
          v39,
          (System_Func_TSource__bool__o *)v40,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  List = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                v41,
                                                                (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  if ( !List )
LABEL_36:
    sub_1B8880C(List, v11);
  if ( List[1].monitor )
    return 1;
  *presentEnt = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)presentEnt, 0, v42, v43);
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

  if ( (byte_4A5B6A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
    byte_4A5B6A3 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void __fastcall QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B6A4 & 1) == 0 )
  {
    sub_1B885B0(&QuestPhasePresentMaster___c_TypeInfo);
    byte_4A5B6A4 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestPhasePresentMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestPhasePresentMaster___c_TypeInfo->static_fields->__9 = (struct QuestPhasePresentMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.phase;
}


bool __fastcall QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_2(
        QuestPhasePresentMaster___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Int32_array *itemList; // x19
  System_Func_int__bool__o *v11; // x20

  if ( (byte_4A5B6A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__);
    sub_1B885B0(&QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
    byte_4A5B6A5 = 1;
  }
  v5 = sub_1B887FC(QuestPhasePresentMaster___c__DisplayClass0_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = info;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)info, v8, v9);
  itemList = this->fields.itemList;
  v11 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_QuestPhasePresentMaster___c__DisplayClass0_2__IsContainEntityFromPhase_b__4__,
    0LL);
  return !BasicHelper__Any_int__48671312(
            itemList,
            (System_Func_T__bool__o *)v11,
            (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
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
    sub_1B8880C(this, x);
  return info->fields.objectId == x;
}