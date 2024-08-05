void __fastcall AiMaster___ctor(AiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE148 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_AiMaster__AiEntity__string___ctor__, method);
    byte_49FE148 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    105,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiEntity_o *__fastcall AiMaster__GetEntity(AiMaster_o *this, int32_t id, int32_t idx, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE146 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FE146 = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                         PK,
                         (const MethodInfo_30D64D8 *)Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiMaster__TryGetEntity(
        AiMaster_o *this,
        AiEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE147 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__, entity);
    byte_49FE147 = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
}


AiEntity_array *__fastcall AiMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  AiEntity_c *v31; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_49FE149 & 1) == 0 )
  {
    sub_1B64870(&AiEntity_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_AiMaster___, v4);
    sub_1B64870(&System_IDisposable_TypeInfo, v5);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_AiEntity__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_AiEntity__ToArray__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_AiEntity___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_AiEntity__TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FE149 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_AiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_AiEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_AiMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (Il2CppObject *)Instance[2].klass;
  if ( !Instance )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_18:
      v25 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v30 = v26;
    if ( !v26 )
      goto LABEL_38;
    v31 = AiEntity_TypeInfo;
    methodPtr_low = LOBYTE(AiEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low
      || *(AiEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != AiEntity_TypeInfo )
    {
      sub_1B64D8C(v26);
LABEL_38:
      sub_1B64ACC(v26, v27);
    }
    if ( *(_DWORD *)(v26 + 16) == id )
    {
      if ( !v13 )
        sub_1B64ACC(v26, AiEntity_TypeInfo);
      items = v13->fields._items;
      v34 = Method_System_Collections_Generic_List_AiEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B64ACC(v26, v31);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v30;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v36 + 4), v30, v28, v29);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_33;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_33:
    v40 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                               Enumerator,
                               *(_QWORD *)(v40 + 8));
  if ( !v13 )
LABEL_41:
    sub_1B64ACC(Instance, v15);
  return (AiEntity_array *)System_Collections_Generic_List_object___ToArray(
                             v13,
                             (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_AiEntity__ToArray__);
}