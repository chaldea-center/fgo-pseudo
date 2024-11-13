void __fastcall AiFieldMaster___ctor(AiFieldMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__, method, v2);
    byte_4B15E19 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    181,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *__fastcall AiFieldMaster__GetEntity(
        AiFieldMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15E17 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&idx);
    byte_4B15E17 = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, 0LL);
  return (AiFieldEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_31B3198 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiFieldMaster__TryGetEntity(
        AiFieldMaster_o *this,
        AiFieldEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15E18 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B15E18 = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__);
}


AiFieldEntity_array *__fastcall AiFieldMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x20
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x8
  AiFieldEntity_c *v47; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v50; // x10
  __int64 size; // x11
  Il2CppClass **v52; // x0
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0

  if ( (byte_4B15E1A & 1) == 0 )
  {
    sub_1BCA7E0(&AiFieldEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_AiFieldMaster___, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiFieldEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiFieldEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiFieldEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_AiFieldEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B15E1A = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AiFieldEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AiFieldEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_AiFieldMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (Il2CppObject *)Instance[2].klass;
  if ( !Instance )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        p_offset += 4;
        if ( !v31 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_18;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_18:
      v37 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
            Enumerator,
            *(_QWORD *)(v37 + 8));
    v46 = v38;
    if ( !v38 )
      goto LABEL_38;
    v47 = AiFieldEntity_TypeInfo;
    methodPtr_low = LOBYTE(AiFieldEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v38 + 304LL) < (unsigned int)methodPtr_low
      || *(AiFieldEntity_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * methodPtr_low - 8) != AiFieldEntity_TypeInfo )
    {
      sub_1BCACFC(v38);
LABEL_38:
      sub_1BCAA3C(v38, v39);
    }
    if ( *(_DWORD *)(v38 + 16) == id )
    {
      if ( !v25 )
        sub_1BCAA3C(v38, AiFieldEntity_TypeInfo);
      items = v25->fields._items;
      v50 = Method_System_Collections_Generic_List_AiFieldEntity__Add__;
      ++v25->fields._version;
      if ( !items )
        sub_1BCAA3C(v38, v47);
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)v38,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v46;
        sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), v46, v40, v41, v42, v43, v44, v45);
      }
    }
  }
  v53 = Enumerator->klass;
  v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_33;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_33:
    v56 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                               Enumerator,
                               *(_QWORD *)(v56 + 8));
  if ( !v25 )
LABEL_41:
    sub_1BCAA3C(Instance, v27);
  return (AiFieldEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v25,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_AiFieldEntity__ToArray__);
}