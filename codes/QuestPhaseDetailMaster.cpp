void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70305 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__, method);
    byte_4A70305 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    72,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
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
      sub_1B9026C(0LL, v5);
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
      sub_1B9026C(0LL, v5);
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

  if ( (byte_4A70303 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4A70303 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_312C900 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_4A70304 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__, entity);
    byte_4A70304 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
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
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  _QWORD *v22; // x0
  __int64 v23; // x1
  _QWORD *v24; // x20
  __int64 methodPtr_low; // x9
  _QWORD *v26; // x22
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x23
  __int64 v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  __int64 v53; // x0

  if ( (byte_4A70306 & 1) == 0 )
  {
    sub_1B90010(&QuestPhaseDetailEntity_BoardInfo___TypeInfo, method);
    sub_1B90010(&QuestPhaseDetailEntity_BoardInfo_TypeInfo, v3);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v4);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B90010(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo, v8);
    sub_1B90010(&QuestPhaseDetailEntity_TypeInfo, v9);
    sub_1B90010(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v10);
    byte_4A70306 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(QuestPhaseDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v22 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * methodPtr_low - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      sub_1B9052C(v22);
LABEL_44:
      sub_1B9026C(v22, v23);
    }
    v26 = (_QWORD *)v22[5];
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
            v28 = (Il2CppObject *)sub_1B9025C(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
            System_Object___ctor(v28, 0LL);
          }
          v29 = sub_1B9025C(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v29, 0LL);
          if ( !v29 )
            sub_1B9026C(v30, v31);
          *(_QWORD *)(v29 + 24) = v27;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)v27, v32, v33);
          *(_QWORD *)(v29 + 16) = v28;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)v28, v34, v35);
          v36 = v24[5];
          v37 = sub_1B900B8(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
          v39 = v37;
          if ( !v37 )
            sub_1B9026C(0LL, v38);
          v40 = sub_1B9014C(v29, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
          if ( !v40 )
          {
            v53 = sub_1B90290(0LL);
            sub_1B90138(v53, 0LL);
          }
          if ( !*(_DWORD *)(v39 + 24) )
            sub_1B90274(v40, v41);
          *(_QWORD *)(v39 + 32) = v29;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v39 + 32), v29, v42, v43);
          if ( !v36 )
            sub_1B9026C(v44, v45);
          *(_QWORD *)(v36 + 32) = v39;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 32), v39, v46, v47);
        }
      }
      else if ( v26[3] && !v26[4] )
      {
        v27 = (Il2CppObject *)sub_1B9025C(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
        System_Object___ctor(v27, 0LL);
        goto LABEL_28;
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
        goto LABEL_40;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_40:
    v51 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return 1;
}