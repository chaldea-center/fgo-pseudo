void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E2C09 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__, method);
    byte_48E2C09 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    200,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_o *__fastcall QuestBehaviorMaster__GetEntity(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_48E2C07 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_48E2C07 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__IsOpenQuestBehaviorCond(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t behaviorType,
        const MethodInfo *method)
{
  int32_t v7; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w23
  __int64 methodPtr_low; // x9
  QuestConsumeItemEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  v7 = questId;
  if ( (byte_48E2C10 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B00CCC(&QuestBehaviorEntity_TypeInfo, v10);
    byte_48E2C10 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B00F28(list, *(_QWORD *)&questId);
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v12 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == behaviorType
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      return 1;
    }
    if ( --v12 < 0 )
      return 0;
  }
  sub_1B011E8(list);
  return QuestConsumeItemEntity__CreatePrimaryKey(v15, v16);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__TryGetEntity(
        QuestBehaviorMaster_o *this,
        QuestBehaviorEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_48E2C08 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__, entity);
    byte_48E2C08 = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestBehaviorMaster__getBattleBg(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v7; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w23
  int klass_high; // w26
  System_Collections_ObjectModel_Collection_T__o *v14; // x24
  __int64 methodPtr_low; // x9
  struct System_Collections_Generic_IList_T__o *items; // x8
  QuestBehaviorMaster_o *v18; // x0
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v7 = questId;
  if ( (byte_48E2C0B & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B00CCC(&QuestBehaviorEntity_TypeInfo, v10);
    byte_48E2C0B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1B00F28(list, *(_QWORD *)&questId);
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v12 < 0 )
    return defaultValue;
  klass_high = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v14 = list;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == 3
      && klass_high < SHIDWORD(list[1].klass)
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      items = v14[1].fields.items;
      if ( items )
      {
        if ( SLODWORD(items[1].monitor) >= 1 )
        {
          klass_high = HIDWORD(v14[1].klass);
          defaultValue = (int32_t)items[2].klass;
        }
      }
    }
    if ( --v12 < 0 )
      return defaultValue;
  }
  sub_1B011E8(list);
  return (unsigned int)QuestBehaviorMaster__getBattleSkill(v18, v19, v20, v21);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestBehaviorMaster__getBattleIndividuality(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  int32_t v7; // w20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w23
  int klass_high; // w28
  System_Collections_ObjectModel_Collection_T__o *v15; // x24
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v18; // x0
  System_Int32_array *v19; // x1
  const MethodInfo *v20; // x2

  v7 = questId;
  if ( (byte_48E2C0E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B00CCC(&int___TypeInfo, v10);
    sub_1B00CCC(&QuestBehaviorEntity_TypeInfo, v11);
    byte_48E2C0E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1B00F28(list, *(_QWORD *)&questId);
  v13 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v13 < 0 )
    return defVals;
  klass_high = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v15 = list;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == 4
      && klass_high < SHIDWORD(list[1].klass)
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      defVals = (System_Int32_array *)v15[1].fields.items;
      klass_high = HIDWORD(v15[1].klass);
      if ( !defVals )
        defVals = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
    }
    if ( --v13 < 0 )
      return defVals;
  }
  sub_1B011E8(list);
  return (System_Int32_array *)QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_array *__fastcall QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_int__object__o *v18; // x22
  QuestBehaviorEntity_c *v19; // x1
  void *list; // x0
  int32_t v21; // w23
  QuestBehaviorEntity_o *v22; // x24
  __int64 methodPtr_low; // x9
  int32_t priority; // w29
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_48E2C0C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__, v14);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo, v15);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v16);
    sub_1B00CCC(&QuestBehaviorEntity_TypeInfo, v17);
    byte_48E2C0C = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (_DWORD)list - 1;
  if ( (int)list - 1 < 0 )
  {
LABEL_19:
    if ( v18 )
    {
      if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
              v18,
              (const MethodInfo_30361DC *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v18,
                 (const MethodInfo_303633C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_1B00F28(list, v19);
  }
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v21,
             (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    v19 = QuestBehaviorEntity_TypeInfo;
    v22 = (QuestBehaviorEntity_o *)list;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(QuestBehaviorEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( *((_DWORD *)list + 4) == questId && *((_DWORD *)list + 5) == phase && *((_DWORD *)list + 8) == 1 )
    {
      if ( !v18 )
        goto LABEL_23;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v18,
              *((_DWORD *)list + 6),
              (const MethodInfo_3036720 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
        goto LABEL_16;
      priority = v22->fields.priority;
      list = System_Collections_Generic_Dictionary_int__object___get_Item(
               v18,
               v22->fields.num,
               (const MethodInfo_303648C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
      if ( !list )
        goto LABEL_23;
      if ( priority >= *((_DWORD *)list + 7) )
      {
LABEL_16:
        list = (void *)QuestBehaviorEntity__checkConditions(v22, (const MethodInfo *)v19);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          System_Collections_Generic_Dictionary_int__object___Remove(
            v18,
            v22->fields.num,
            (const MethodInfo_30379B4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
          System_Collections_Generic_Dictionary_int__object___Add(
            v18,
            v22->fields.num,
            (Il2CppObject *)v22,
            (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
        }
      }
    }
    if ( --v21 < 0 )
      goto LABEL_19;
  }
  sub_1B011E8(list);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v27, v28, v29, v30);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t v5; // w20
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w2
  System_Int32_array *v16; // x3
  const MethodInfo *v17; // x4

  v5 = questId;
  if ( (byte_48E2C0D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&QuestBehaviorEntity_TypeInfo, v8);
    byte_48E2C0D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1B00F28(list, *(_QWORD *)&questId);
  v10 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v10 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v5
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].monitor) == 2
      && SHIDWORD(list[1].klass) >= 1
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      return 1;
    }
    if ( --v10 < 0 )
      return 0;
  }
  sub_1B011E8(list);
  return (unsigned __int8)QuestBehaviorMaster__getBattleIndividuality(v13, v14, v15, v16, v17);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_48E2C0A & 1) == 0 )
  {
    sub_1B00CCC(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___, obj);
    sub_1B00CCC(&JsonManager_TypeInfo, v4);
    byte_48E2C0A = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_object_(
                                   obj,
                                   (const MethodInfo_2DB84AC *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *__fastcall QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(
        QuestBehaviorMaster_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x21
  QuestBehaviorEntity_c *v16; // x1
  void *list; // x0
  int32_t v18; // w22
  QuestBehaviorEntity_o *v19; // x23
  __int64 methodPtr_low; // x9
  const MethodInfo_32FA0F8 *v21; // x4
  struct System_Int32_array *behaviorValues; // x2
  int64_t v23; // x23
  const MethodInfo_32FA0F8 *v24; // x4
  struct System_Int32_array *v25; // x2
  int64_t v26; // x23
  QuestBehaviorMaster_o *v28; // x0
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x4
  System_Collections_Generic_KeyValuePair_int__object__o v33; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v35; // 0:x0.16
  System_Collections_Generic_KeyValuePair_int__object__o v36; // 0:x0.16

  if ( (byte_48E2C0F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIds);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__, v9);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo, v10);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v13);
    sub_1B00CCC(&QuestBehaviorEntity_TypeInfo, v14);
    byte_48E2C0F = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B00F18(System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo);
  System_Collections_Generic_Dictionary_long__KeyValuePair_int__object_____ctor(
    v15,
    (const MethodInfo_30663CC *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_20:
    sub_1B00F28(list, v16);
  v18 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)list,
          (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v18 < 0 )
    return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v15;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v18,
             (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v16 = QuestBehaviorEntity_TypeInfo;
    v19 = (QuestBehaviorEntity_o *)list;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(QuestBehaviorEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( *((_DWORD *)list + 8) == 4 )
    {
      list = (void *)System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)questIds,
                       *((_DWORD *)list + 4),
                       (const MethodInfo_2D7A61C *)Method_System_Linq_Enumerable_Contains_int___);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_20;
        if ( System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
               v15,
               v19->fields.phase + 100 * v19->fields.questId,
               &value,
               (const MethodInfo_30684EC *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__) )
        {
          if ( value.fields.key < v19->fields.priority
            && QuestBehaviorEntity__checkConditions(v19, (const MethodInfo *)v16) )
          {
            v35.fields.value = (Il2CppObject *)(unsigned int)v19->fields.priority;
            behaviorValues = v19->fields.behaviorValues;
            *(_QWORD *)&v35.fields.key = &v33;
            v23 = v19->fields.phase + 100 * v19->fields.questId;
            *(_QWORD *)&v33.fields.key = 0LL;
            v33.fields.value = 0LL;
            System_Collections_Generic_KeyValuePair_int__object____ctor(
              v35,
              (int32_t)behaviorValues,
              (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
              v21);
            System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____set_Item(
              v15,
              v23,
              v33,
              (const MethodInfo_3066D94 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__);
          }
        }
        else if ( QuestBehaviorEntity__checkConditions(v19, (const MethodInfo *)v16) )
        {
          v36.fields.value = (Il2CppObject *)(unsigned int)v19->fields.priority;
          v25 = v19->fields.behaviorValues;
          *(_QWORD *)&v36.fields.key = &v33;
          v26 = v19->fields.phase + 100 * v19->fields.questId;
          v33 = (System_Collections_Generic_KeyValuePair_int__object__o)0LL;
          System_Collections_Generic_KeyValuePair_int__object____ctor(
            v36,
            (int32_t)v25,
            (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
            v24);
          System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____Add(
            v15,
            v26,
            v33,
            (const MethodInfo_3066DA8 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__);
        }
      }
    }
    if ( --v18 < 0 )
      return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v15;
  }
  sub_1B011E8(list);
  return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                                                                      v28,
                                                                                      v29,
                                                                                      v30,
                                                                                      v31,
                                                                                      v32);
}