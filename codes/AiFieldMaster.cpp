void __fastcall AiFieldMaster___ctor(AiFieldMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB42EC & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__, method);
    byte_4BB42EC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    185,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *__fastcall AiFieldMaster__GetEntity(
        AiFieldMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB42EA & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4BB42EA = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiFieldEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_323D0DC *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__);
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

  if ( (byte_4BB42EB & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__, entity);
    byte_4BB42EB = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__);
}


AiFieldEntity_array *__fastcall AiFieldMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x8
  AiFieldEntity_c *v35; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v38; // x10
  __int64 size; // x11
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4BB42ED & 1) == 0 )
  {
    sub_1C13D24(&AiFieldEntity_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_AiFieldEntity__GetEnumerator__, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_AiFieldMaster___, v4);
    sub_1C13D24(&System_IDisposable_TypeInfo, v5);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_AiFieldEntity__TypeInfo, v6);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_AiFieldEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_AiFieldEntity__ToArray__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_AiFieldEntity___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_List_AiFieldEntity__TypeInfo, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BB42ED = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_AiFieldEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_AiFieldEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_AiFieldMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)Instance->fields.datalist;
  if ( !Instance )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_AiFieldEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v16);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_AiFieldEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_AiFieldEntity__TypeInfo )
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
      v25 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_AiFieldEntity__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v34 = v26;
    if ( !v26 )
      goto LABEL_38;
    v35 = AiFieldEntity_TypeInfo;
    methodPtr_low = LOBYTE(AiFieldEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low
      || *(AiFieldEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != AiFieldEntity_TypeInfo )
    {
      sub_1C14240(v26);
LABEL_38:
      sub_1C13F80(v26, v27);
    }
    if ( *(_DWORD *)(v26 + 16) == id )
    {
      if ( !v13 )
        sub_1C13F80(v26, AiFieldEntity_TypeInfo);
      items = v13->fields._items;
      v38 = Method_System_Collections_Generic_List_AiFieldEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1C13F80(v26, v35);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v34;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 4), v34, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_33;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_33:
    v44 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                Enumerator,
                                *(_QWORD *)(v44 + 8));
  if ( !v13 )
LABEL_41:
    sub_1C13F80(Instance, v15);
  return (AiFieldEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v13,
                                  (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_AiFieldEntity__ToArray__);
}