void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC89A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__, method);
    byte_49FC89A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    72,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
}


System_String_array *__fastcall QuestPhaseDetailMaster__GetAfterAction(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  bool v5; // w8
  System_String_array *result; // x0
  struct System_String_array *afterActionVals; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v5 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0LL;
  if ( v5 )
  {
    if ( !entity )
      sub_1B64324(0LL);
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
  bool v5; // w8
  System_String_array *result; // x0
  struct System_String_array *beforeActionVals; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v5 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0LL;
  if ( v5 )
  {
    if ( !entity )
      sub_1B64324(0LL);
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

  if ( (byte_49FC898 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49FC898 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_49FC899 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__, entity);
    byte_49FC899 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool __fastcall QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  _QWORD *v21; // x0
  __int64 v22; // x2
  _QWORD *v23; // x20
  QuestPhaseDetailEntity_c *v24; // x1
  __int64 methodPtr_low; // x9
  _QWORD *v26; // x22
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x23
  __int64 v29; // x22
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x20
  __int64 v36; // x0
  __int64 v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  __int64 v50; // x0

  if ( (byte_49FC89B & 1) == 0 )
  {
    sub_1B640C8(&QuestPhaseDetailEntity_BoardInfo___TypeInfo, method);
    sub_1B640C8(&QuestPhaseDetailEntity_BoardInfo_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo, v8);
    sub_1B640C8(&QuestPhaseDetailEntity_TypeInfo, v9);
    sub_1B640C8(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v10);
    byte_49FC89B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_44;
    v24 = QuestPhaseDetailEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestPhaseDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v21 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v21 + 200LL) + 8 * methodPtr_low - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      sub_1B645E4(v21);
LABEL_44:
      sub_1B64324(v21);
    }
    v26 = (_QWORD *)v21[5];
    if ( v26 )
    {
      v27 = (Il2CppObject *)v26[2];
      if ( v27 )
      {
        if ( !v26[4] )
        {
LABEL_28:
          v28 = (Il2CppObject *)v26[3];
          if ( !v28 )
          {
            v28 = (Il2CppObject *)sub_1B64314(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v24, v22);
            System_Object___ctor(v28, 0LL);
          }
          v29 = sub_1B64314(QuestPhaseDetailEntity_BoardInfo_TypeInfo, v24, v22);
          System_Object___ctor((Il2CppObject *)v29, 0LL);
          if ( !v29 )
            sub_1B64324(v30);
          *(_QWORD *)(v29 + 24) = v27;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)v27, v31, v32);
          *(_QWORD *)(v29 + 16) = v28;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)v28, v33, v34);
          v35 = v23[5];
          v36 = sub_1B64170(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
          v37 = v36;
          if ( !v36 )
            sub_1B64324(0LL);
          v38 = sub_1B64204(v29, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
          if ( !v38 )
          {
            v50 = sub_1B64348(0LL);
            sub_1B641F0(v50, 0LL);
          }
          if ( !*(_DWORD *)(v37 + 24) )
            sub_1B6432C(v38, v39);
          *(_QWORD *)(v37 + 32) = v29;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), v29, v40, v41);
          if ( !v35 )
            sub_1B64324(v42);
          *(_QWORD *)(v35 + 32) = v37;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 32), v37, v43, v44);
        }
      }
      else if ( v26[3] && !v26[4] )
      {
        v27 = (Il2CppObject *)sub_1B64314(
                                QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo,
                                QuestPhaseDetailEntity_TypeInfo,
                                v22);
        System_Object___ctor(v27, 0LL);
        goto LABEL_28;
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_40;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_40:
    v48 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return 1;
}