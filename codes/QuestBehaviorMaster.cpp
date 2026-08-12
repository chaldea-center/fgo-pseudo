void QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5970E82 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo);
    byte_5970E82 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_3FCF10C *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
  this->fields.dictQuestPhaseCache = (struct System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dictQuestPhaseCache,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    207,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
}


int32_t QuestBehaviorMaster__GetBattleBg(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        int32_t defaultBgNo,
        const MethodInfo *method)
{
  QuestBehaviorEntity_o *PriorityEntity; // x0
  QuestBehaviorEntity_o *v6; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct System_Int32_array *behaviorValues; // x8

  PriorityEntity = QuestBehaviorMaster__GetPriorityEntity(this, questPhaseUniqueId, 3, method);
  if ( PriorityEntity )
  {
    v6 = PriorityEntity;
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                      (System_Collections_ICollection_o *)PriorityEntity->fields.behaviorValues,
                      0);
    if ( !IsNullOrEmpty )
    {
      behaviorValues = v6->fields.behaviorValues;
      if ( !behaviorValues )
        sub_2213CDC(IsNullOrEmpty, v8);
      if ( !LODWORD(behaviorValues->max_length) )
        sub_2213CE4(IsNullOrEmpty);
      return behaviorValues->m_Items[0];
    }
  }
  return defaultBgNo;
}


int32_t QuestBehaviorMaster__GetBattleBgType(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        int32_t defType,
        const MethodInfo *method)
{
  QuestBehaviorEntity_o *PriorityEntity; // x0
  QuestBehaviorEntity_o *v6; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct System_Int32_array *behaviorValues; // x8

  PriorityEntity = QuestBehaviorMaster__GetPriorityEntity(this, questPhaseUniqueId, 8, method);
  if ( PriorityEntity )
  {
    v6 = PriorityEntity;
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                      (System_Collections_ICollection_o *)PriorityEntity->fields.behaviorValues,
                      0);
    if ( !IsNullOrEmpty )
    {
      behaviorValues = v6->fields.behaviorValues;
      if ( !behaviorValues )
        sub_2213CDC(IsNullOrEmpty, v8);
      if ( !LODWORD(behaviorValues->max_length) )
        sub_2213CE4(IsNullOrEmpty);
      return behaviorValues->m_Items[0];
    }
  }
  return defType;
}


System_Int32_array *QuestBehaviorMaster__GetBattleIndividuality(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  QuestBehaviorEntity_o *PriorityEntity; // x0
  __int64 v8; // x1
  long double v9; // q0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_5970E87 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    byte_5970E87 = 1;
  }
  PriorityEntity = QuestBehaviorMaster__GetPriorityEntity(this, questPhaseUniqueId, 4, method);
  if ( PriorityEntity )
  {
    defVals = PriorityEntity->fields.behaviorValues;
    if ( !defVals )
    {
      v10 = Method_System_Array_Empty_int___;
      v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v11 )
      {
        sub_224B964(Method_System_Array_Empty_int___);
        v11 = v10[7];
      }
      v12 = *(_QWORD *)(v11 + 16);
      if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
        v12 = sub_224B908(v9);
      if ( !*(_DWORD *)(v12 + 228) )
        *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(v12, v8);
      v13 = *(_QWORD *)(v10[7] + 16LL);
      if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
        v13 = sub_224B908(v9);
      return **(System_Int32_array ***)(v13 + 184);
    }
  }
  return defVals;
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_o *QuestBehaviorMaster__GetEntity(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970E80 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
    byte_5970E80 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestBehaviorEntity__o *QuestBehaviorMaster__GetList(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v5; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *lookupCache; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o **p_lookupCache; // x21
  int64_t v9; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x22
  int64_t v33; // x23
  __int64 v34; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v35; // x24
  System_Collections_Generic_List_object__o *v36; // x25
  __int64 v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x8
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  System_Collections_Generic_List_object__o *v55; // x19
  __int64 v57; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_IEnumerator_T__o *v58; // [xsp+20h] [xbp-70h]
  Il2CppObject *value; // [xsp+28h] [xbp-68h] BYREF

  v5 = (unsigned int)questId;
  if ( (byte_5970E84 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
    byte_5970E84 = 1;
  }
  value = 0;
  p_lookupCache = (System_Collections_Generic_Dictionary_TKey__TValue__o **)&this->fields.lookupCache;
  lookupCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.lookupCache;
  if ( lookupCache )
  {
    v9 = (unsigned int)phase | (unsigned __int64)(v5 << 32);
  }
  else
  {
    v57 = v5;
    v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
    System_Collections_Generic_Dictionary_long__object____ctor(
      v10,
      (const MethodInfo_3FCF10C *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
    this->fields.lookupCache = (struct System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___o *)v10;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.lookupCache,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    lookupCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.list;
    if ( !lookupCache )
      goto LABEL_54;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)lookupCache,
                   (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__GetEnumerator__);
    v58 = Enumerator;
    if ( !Enumerator )
      sub_2213CDC(Enumerator, v19);
    for ( i = Enumerator; ; i = v58 )
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
            goto LABEL_12;
        }
        v24 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_12:
        v24 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
              i,
              *(_QWORD *)(v24 + 8));
      if ( (v25 & 1) == 0 )
        break;
      if ( !v58 )
        sub_2213CDC(v25, v17);
      v26 = v58->klass;
      v27 = *(unsigned __int16 *)&v58->klass->_2.rank;
      if ( *(_WORD *)&v58->klass->_2.rank )
      {
        v28 = &v26->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_QuestBehaviorEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_20;
        }
        v29 = (__int64)&v26->vtable[*v28];
      }
      else
      {
LABEL_20:
        v29 = sub_224BC3C(v58, System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, 0);
      }
      v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
              v58,
              *(_QWORD *)(v29 + 8));
      v32 = (Il2CppObject *)v30;
      if ( v30 )
      {
        if ( !*p_lookupCache )
          sub_2213CDC(0, v31);
        v33 = *(unsigned int *)(v30 + 20) | ((unsigned __int64)*(unsigned int *)(v30 + 16) << 32);
        if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
                *p_lookupCache,
                v33,
                (const MethodInfo_3FCFCB0 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__) )
        {
          v35 = *p_lookupCache;
          v36 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v36,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
          if ( !v35 )
            sub_2213CDC(v37, v38);
          System_Collections_Generic_Dictionary_long__object___set_Item(
            v35,
            v33,
            (Il2CppObject *)v36,
            (const MethodInfo_3FCFAA8 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
        }
        if ( !*p_lookupCache )
          sub_2213CDC(0, v34);
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                              *p_lookupCache,
                                                              v33,
                                                              (const MethodInfo_3FCFA1C *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
        if ( !Item
          || (items = Item->fields._items,
              v48 = Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__,
              ++Item->fields._version,
              !items) )
        {
          sub_2213CDC(Item, v40);
        }
        size = Item->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            Item,
            v32,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          Item->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v32;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 4), (int32_t)v32, v41, v42, v43, v44, v45, v46);
        }
      }
    }
    if ( v58 )
    {
      v51 = v58->klass;
      v52 = *(unsigned __int16 *)&v58->klass->_2.rank;
      if ( *(_WORD *)&v58->klass->_2.rank )
      {
        v53 = &v51->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
        {
          --v52;
          v53 += 4;
          if ( !v52 )
            goto LABEL_40;
        }
        v54 = (__int64)&v51->vtable[*v53];
      }
      else
      {
LABEL_40:
        v54 = sub_224BC3C(v58, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(v58, *(_QWORD *)(v54 + 8));
    }
    lookupCache = *p_lookupCache;
    if ( !*p_lookupCache )
LABEL_54:
      sub_2213CDC(lookupCache, v17);
    v9 = (unsigned int)phase | (unsigned __int64)(v57 << 32);
  }
  if ( System_Collections_Generic_Dictionary_long__object___TryGetValue(
         lookupCache,
         v9,
         &value,
         (const MethodInfo_3FD1574 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_QuestBehaviorEntity__o *)value;
  }
  v55 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
  return (System_Collections_Generic_List_QuestBehaviorEntity__o *)v55;
}


QuestBehaviorEntity_o *QuestBehaviorMaster__GetPriorityEntity(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x19
  System_Func_object__bool__o *v11; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970E88 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
    sub_2213A60(&System_Func_QuestBehaviorEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestBehaviorMaster___c__DisplayClass12_0__GetPriorityEntity_b__0__);
    sub_2213A60(&QuestBehaviorMaster___c__DisplayClass12_0_TypeInfo);
    byte_5970E88 = 1;
  }
  value = 0;
  v7 = sub_2213CCC(QuestBehaviorMaster___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache,
        *(_DWORD *)(v7 + 16) = kind,
        !dictQuestPhaseCache) )
  {
    sub_2213CDC(dictQuestPhaseCache, v9);
  }
  if ( !System_Collections_Generic_Dictionary_long__object___TryGetValue(
          dictQuestPhaseCache,
          questPhaseUniqueId,
          &value,
          (const MethodInfo_3FD1574 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__) )
    return 0;
  v10 = value;
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestBehaviorEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_QuestBehaviorMaster___c__DisplayClass12_0__GetPriorityEntity_b__0__,
    0);
  return (QuestBehaviorEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                                    (System_Func_TSource__bool__o *)v11,
                                    (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
}


void QuestBehaviorMaster__InitQuestPhaseCache(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x21
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 i; // x21
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  QuestBehaviorEntity_o *v23; // x0
  const MethodInfo *v24; // x1
  Il2CppObject *v25; // x21
  int64_t UniqueId; // x0
  __int64 v27; // x1
  int64_t v28; // x22
  System_Collections_Generic_List_object__o *v29; // x23
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_Action_T__o *v46; // x21
  Il2CppObject *v47; // [xsp+0h] [xbp-80h]
  __int64 v48; // [xsp+18h] [xbp-68h]

  if ( (byte_5970E8B & 1) == 0 )
  {
    sub_2213A60(&System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
    sub_2213A60(&Method_QuestBehaviorMaster__InitQuestPhaseCache_b__16_0__);
    byte_5970E8B = 1;
  }
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !dictQuestPhaseCache )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_long__object___Clear(
    dictQuestPhaseCache,
    (const MethodInfo_3FCFC44 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v4,
    (const MethodInfo_3FCF10C *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                   (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    goto LABEL_52;
  klass = dictQuestPhaseCache->klass;
  v6 = dictQuestPhaseCache;
  v47 = (Il2CppObject *)this;
  v7 = *(unsigned __int16 *)&dictQuestPhaseCache->klass->_2.rank;
  if ( *(_WORD *)&dictQuestPhaseCache->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestBehaviorEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    v9 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v9 = sub_224BC3C(dictQuestPhaseCache, System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v9)(
          v6,
          *(_QWORD *)(v9 + 8));
  v48 = v10;
  if ( !v10 )
    sub_2213CDC(v10, v11);
  for ( i = v10; ; i = v48 )
  {
    v13 = *(_QWORD *)i;
    v14 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))v16)(i, *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v48 )
      sub_2213CDC(v17, v18);
    v19 = *(_QWORD *)v48;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestBehaviorEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_25;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_25:
      v22 = sub_224BC3C(v48, System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, 0);
    }
    v23 = (QuestBehaviorEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v48, *(_QWORD *)(v22 + 8));
    v25 = (Il2CppObject *)v23;
    if ( !v23 )
      sub_2213CDC(0, v24);
    UniqueId = QuestBehaviorEntity__GetUniqueId(v23, v24);
    if ( !v4 )
      sub_2213CDC(UniqueId, v27);
    v28 = UniqueId;
    if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
            v4,
            UniqueId,
            (const MethodInfo_3FCFCB0 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__) )
    {
      v29 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v29,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        v4,
        v28,
        (Il2CppObject *)v29,
        (const MethodInfo_3FCFAA8 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                          v4,
                                                          v28,
                                                          (const MethodInfo_3FCFA1C *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    if ( !Item
      || (items = Item->fields._items,
          v39 = Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__,
          ++Item->fields._version,
          !items) )
    {
      sub_2213CDC(Item, v31);
    }
    size = Item->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Item,
        v25,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &items->obj.klass + size;
      Item->fields._size = size + 1;
      v41[4] = (Il2CppClass *)v25;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v25, v32, v33, v34, v35, v36, v37);
    }
  }
  if ( v48 )
  {
    v42 = *(_QWORD *)v48;
    v43 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_43;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_43:
      v45 = sub_224BC3C(v48, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v45)(v48, *(_QWORD *)(v45 + 8));
  }
  v46 = (System_Action_T__o *)sub_2213CCC(System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo);
  System_Action_KeyValuePair_long__object_____ctor(
    v46,
    v47,
    Method_QuestBehaviorMaster__InitQuestPhaseCache_b__16_0__,
    0);
  BasicHelper__ForEach_KeyValuePair_long__object__(
    (System_Collections_Generic_IEnumerable_T__o *)v4,
    v46,
    (const MethodInfo_381119C *)Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
  if ( !v4 )
LABEL_52:
    sub_2213CDC(dictQuestPhaseCache, method);
  System_Collections_Generic_Dictionary_long__object___Clear(
    v4,
    (const MethodInfo_3FCFC44 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool QuestBehaviorMaster__IsOpenQuestBehaviorCond(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t behaviorType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int v11; // w23

  if ( (byte_5970E89 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    byte_5970E89 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_2213CDC(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
  if ( Count - 1 < 0 )
    return 0;
  v11 = Count;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               --v11,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    if ( !list )
      goto LABEL_15;
    if ( LODWORD(list->fields.items) == questId
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == behaviorType
      && QuestBehaviorEntity__checkConditions((QuestBehaviorEntity_o *)list, *(const MethodInfo **)&questId) )
    {
      return 1;
    }
    if ( v11 <= 0 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool QuestBehaviorMaster__IsSharedReward(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int64_t QuestPhaseUniqueId; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Object_array *v11; // x19
  QuestBehaviorMaster___c_c *v12; // x0
  struct QuestBehaviorMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__14_0; // x20
  Il2CppObject *v15; // x21
  struct QuestBehaviorMaster___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970E8A & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_QuestBehaviorEntity___);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__);
    sub_2213A60(&System_Func_QuestBehaviorEntity__bool__TypeInfo);
    sub_2213A60(&Method_QuestBehaviorMaster___c__IsSharedReward_b__14_0__);
    sub_2213A60(&QuestBehaviorMaster___c_TypeInfo);
    byte_5970E8A = 1;
  }
  value = 0;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, *(_QWORD *)&questId);
  QuestPhaseUniqueId = BattleDataDefine__MakeQuestPhaseUniqueId(questId, phase, 0);
  if ( !this->fields.dictQuestPhaseCache )
    sub_2213CDC(QuestPhaseUniqueId, v8);
  System_Collections_Generic_Dictionary_long__object___TryGetValue(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache,
    QuestPhaseUniqueId,
    &value,
    (const MethodInfo_3FD1574 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)value, 0) )
  {
    return 0;
  }
  else
  {
    v11 = (System_Object_array *)value;
    v12 = QuestBehaviorMaster___c_TypeInfo;
    if ( !*(&QuestBehaviorMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestBehaviorMaster___c_TypeInfo, v9);
      v12 = QuestBehaviorMaster___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__14_0 = (System_Func_object__bool__o *)static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !*(&v12->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v12, v9);
        static_fields = QuestBehaviorMaster___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__14_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestBehaviorEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__14_0, v15, Method_QuestBehaviorMaster___c__IsSharedReward_b__14_0__, 0);
      v16 = QuestBehaviorMaster___c_TypeInfo->static_fields;
      v16->__9__14_0 = (struct System_Func_QuestBehaviorEntity__bool__o *)_9__14_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__14_0, (int32_t)_9__14_0, v17, v18, v19, v20, v21, v22);
    }
    return BasicHelper__Any_object__58785420(
             v11,
             (System_Func_T__bool__o *)_9__14_0,
             (const MethodInfo_380FE8C *)Method_BasicHelper_Any_QuestBehaviorEntity___);
  }
}


// local variable allocation has failed, the output may be wrong!
bool QuestBehaviorMaster__TryGetEntity(
        QuestBehaviorMaster_o *this,
        QuestBehaviorEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970E81 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
    byte_5970E81 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
}


void QuestBehaviorMaster___InitQuestPhaseCache_b__16_0(
        QuestBehaviorMaster_o *this,
        System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___o pair,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBehaviorEntity__o *value; // x20
  int64_t key; // x19
  QuestBehaviorMaster___c_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x21
  struct QuestBehaviorMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__16_1; // x22
  Il2CppObject *v10; // x23
  struct QuestBehaviorMaster___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x0
  __int64 v20; // x1

  value = pair.fields.value;
  key = pair.fields.key;
  if ( (byte_5970E8C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    sub_2213A60(&System_Func_QuestBehaviorEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Value__);
    sub_2213A60(&Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__16_1__);
    sub_2213A60(&QuestBehaviorMaster___c_TypeInfo);
    byte_5970E8C = 1;
  }
  v6 = QuestBehaviorMaster___c_TypeInfo;
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !*(&QuestBehaviorMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBehaviorMaster___c_TypeInfo, pair.fields.key);
    v6 = QuestBehaviorMaster___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__16_1 = (System_Func_object__int__o *)static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, pair.fields.key);
      static_fields = QuestBehaviorMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestBehaviorEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_1, v10, Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__16_1__, 0);
    v11 = QuestBehaviorMaster___c_TypeInfo->static_fields;
    v11->__9__16_1 = (struct System_Func_QuestBehaviorEntity__int__o *)_9__16_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__16_1, (int32_t)_9__16_1, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)value,
                                                               (System_Func_TSource__TKey__o *)_9__16_1,
                                                               (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    sub_2213CDC(v19, v20);
  System_Collections_Generic_Dictionary_long__object___set_Item(
    dictQuestPhaseCache,
    key,
    &v19->obj,
    (const MethodInfo_3FCFAA8 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
}


QuestBehaviorEntity_array *QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v7; // x22
  const MethodInfo *v8; // x1
  void *list; // x0
  int v10; // w23
  QuestBehaviorEntity_o *v11; // x24
  int32_t priority; // w28
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_5970E85 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    byte_5970E85 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
  if ( (int)list - 1 >= 0 )
  {
    v10 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               --v10,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
      if ( !list )
        break;
      v11 = (QuestBehaviorEntity_o *)list;
      if ( *((_DWORD *)list + 4) == questId && *((_DWORD *)list + 5) == phase && *((_DWORD *)list + 8) == 1 )
      {
        if ( !v7 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v7,
                *((_DWORD *)list + 6),
                (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
          goto LABEL_15;
        priority = v11->fields.priority;
        list = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v7,
                 v11->fields.num,
                 (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
        if ( !list )
          break;
        if ( priority >= *((_DWORD *)list + 7) )
        {
LABEL_15:
          list = (void *)QuestBehaviorEntity__checkConditions(v11, v8);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            System_Collections_Generic_Dictionary_int__object___Remove(
              v7,
              v11->fields.num,
              (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
            System_Collections_Generic_Dictionary_int__object___Add(
              v7,
              v11->fields.num,
              (Il2CppObject *)v11,
              (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
          }
        }
      }
      if ( v10 <= 0 )
        goto LABEL_18;
    }
LABEL_22:
    sub_2213CDC(list, v8);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          v7,
          (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
    return 0;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             v7,
             (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
  return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int v9; // w22

  if ( (byte_5970E86 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    byte_5970E86 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_2213CDC(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Count__);
  if ( Count - 1 < 0 )
    return 0;
  v9 = Count;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               --v9,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestBehaviorEntity__get_Item__);
    if ( !list )
      goto LABEL_16;
    if ( LODWORD(list->fields.items) == questId
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == 2
      && SHIDWORD(list[1].klass) >= 1
      && QuestBehaviorEntity__checkConditions((QuestBehaviorEntity_o *)list, *(const MethodInfo **)&questId) )
    {
      return 1;
    }
    if ( v9 <= 0 )
      return 0;
  }
}


QuestBehaviorEntity_array *QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  if ( (byte_5970E83 & 1) == 0 )
  {
    sub_2213A60(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
    sub_2213A60(&JsonManager_TypeInfo);
    byte_5970E83 = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, obj);
  return (QuestBehaviorEntity_array *)JsonManager__DeserializeArray_object_(
                                        obj,
                                        (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


bool QuestBehaviorMaster__preProcess(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  QuestBehaviorMaster__InitQuestPhaseCache(this, method);
  return 1;
}


void QuestBehaviorMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970E8D & 1) == 0 )
  {
    sub_2213A60(&QuestBehaviorMaster___c_TypeInfo);
    byte_5970E8D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestBehaviorMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBehaviorMaster___c_TypeInfo->static_fields->__9 = (struct QuestBehaviorMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestBehaviorMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBehaviorMaster___c___ctor(QuestBehaviorMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestBehaviorMaster___c___InitQuestPhaseCache_b__16_1(
        QuestBehaviorMaster___c_o *this,
        QuestBehaviorEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_2213CDC(this, 0);
  return ent->fields.priority;
}


bool QuestBehaviorMaster___c___IsSharedReward_b__14_0(
        QuestBehaviorMaster___c_o *this,
        QuestBehaviorEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.behaviorType == 11;
}


void QuestBehaviorMaster___c__DisplayClass12_0___ctor(
        QuestBehaviorMaster___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBehaviorMaster___c__DisplayClass12_0___GetPriorityEntity_b__0(
        QuestBehaviorMaster___c__DisplayClass12_0_o *this,
        QuestBehaviorEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.behaviorType == this->fields.kind && QuestBehaviorEntity__checkConditions(x, (const MethodInfo *)x);
}