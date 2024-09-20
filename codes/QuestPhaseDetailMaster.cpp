void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B5F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
    byte_4A5B5F9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    72,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
}


System_String_array *__fastcall QuestPhaseDetailMaster__GetAfterAction(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v5; // x1
  bool v6; // w8
  System_String_array *result; // x0
  struct System_String_array *afterActionVals; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v6 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1B8880C(0LL, v5);
    afterActionVals = entity->fields.afterActionVals;
    if ( afterActionVals )
    {
      if ( (int)afterActionVals->max_length <= 1 )
        return 0LL;
      else
        return entity->fields.afterActionVals;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_array *__fastcall QuestPhaseDetailMaster__GetBeforeAction(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v5; // x1
  bool v6; // w8
  System_String_array *result; // x0
  struct System_String_array *beforeActionVals; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v6 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1B8880C(0LL, v5);
    beforeActionVals = entity->fields.beforeActionVals;
    if ( beforeActionVals )
    {
      if ( (int)beforeActionVals->max_length <= 1 )
        return 0LL;
      else
        return entity->fields.beforeActionVals;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailEntity_o *__fastcall QuestPhaseDetailMaster__GetEntity(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B5F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
    byte_4A5B5F7 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseDetailMaster__TryGetEntity(
        QuestPhaseDetailMaster_o *this,
        QuestPhaseDetailEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B5F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
    byte_4A5B5F8 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool __fastcall QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  _QWORD *v14; // x0
  __int64 v15; // x1
  _QWORD *v16; // x20
  __int64 methodPtr_low; // x9
  _QWORD *v18; // x22
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x23
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v45; // x0

  if ( (byte_4A5B5FA & 1) == 0 )
  {
    sub_1B885B0(&QuestPhaseDetailEntity_BoardInfo___TypeInfo);
    sub_1B885B0(&QuestPhaseDetailEntity_BoardInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
    sub_1B885B0(&QuestPhaseDetailEntity_TypeInfo);
    sub_1B885B0(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
    byte_4A5B5FA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
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
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12].method;
    }
    else
    {
LABEL_16:
      v13 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                      Enumerator,
                      *(_QWORD *)(v13 + 8));
    v16 = v14;
    if ( !v14 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(QuestPhaseDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v14 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v14 + 200LL) + 8 * methodPtr_low - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      sub_1B88ACC(v14);
LABEL_44:
      sub_1B8880C(v14, v15);
    }
    v18 = (_QWORD *)v14[5];
    if ( v18 )
    {
      v19 = (Il2CppObject *)v18[2];
      if ( v19 )
      {
        if ( !v18[4] )
        {
LABEL_28:
          v20 = (Il2CppObject *)v18[3];
          if ( !v20 )
          {
            v20 = (Il2CppObject *)sub_1B887FC(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
            System_Object___ctor(v20, 0LL);
          }
          v21 = sub_1B887FC(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v21, 0LL);
          if ( !v21 )
            sub_1B8880C(v22, v23);
          *(_QWORD *)(v21 + 24) = v19;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)v19, v24, v25);
          *(_QWORD *)(v21 + 16) = v20;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)v20, v26, v27);
          v28 = v16[5];
          v29 = sub_1B88658(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
          v31 = v29;
          if ( !v29 )
            sub_1B8880C(0LL, v30);
          v32 = sub_1B886EC(v21, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
          if ( !v32 )
          {
            v45 = sub_1B88830(0LL);
            sub_1B886D8(v45, 0LL);
          }
          if ( !*(_DWORD *)(v31 + 24) )
            sub_1B88814(v32, v33);
          *(_QWORD *)(v31 + 32) = v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), v21, v34, v35);
          if ( !v28 )
            sub_1B8880C(v36, v37);
          *(_QWORD *)(v28 + 32) = v31;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 32), v31, v38, v39);
        }
      }
      else if ( v18[3] && !v18[4] )
      {
        v19 = (Il2CppObject *)sub_1B887FC(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
        System_Object___ctor(v19, 0LL);
        goto LABEL_28;
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_40;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_40:
    v43 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return 1;
}