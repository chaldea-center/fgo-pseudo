void __fastcall AiMaster___ctor(AiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AD93 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
    byte_4A5AD93 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    105,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiEntity_o *__fastcall AiMaster__GetEntity(AiMaster_o *this, int32_t id, int32_t idx, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AD91 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
    byte_4A5AD91 = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                         PK,
                         (const MethodInfo_311DC8C *)Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
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

  if ( (byte_4A5AD92 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
    byte_4A5AD92 = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
}


AiEntity_array *__fastcall AiMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  AiEntity_c *v21; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4A5AD94 & 1) == 0 )
  {
    sub_1B885B0(&AiEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_AiMaster___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_AiEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD94 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AiEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_AiMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (Il2CppObject *)Instance[2].klass;
  if ( !Instance )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_18:
      v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v20 = v16;
    if ( !v16 )
      goto LABEL_38;
    v21 = AiEntity_TypeInfo;
    methodPtr_low = LOBYTE(AiEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 304LL) < (unsigned int)methodPtr_low
      || *(AiEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * methodPtr_low - 8) != AiEntity_TypeInfo )
    {
      sub_1B88ACC(v16);
LABEL_38:
      sub_1B8880C(v16, v17);
    }
    if ( *(_DWORD *)(v16 + 16) == id )
    {
      if ( !v3 )
        sub_1B8880C(v16, AiEntity_TypeInfo);
      items = v3->fields._items;
      v24 = Method_System_Collections_Generic_List_AiEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(v16, v21);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v16,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v20;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), v20, v18, v19);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_33;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_33:
    v30 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                               Enumerator,
                               *(_QWORD *)(v30 + 8));
  if ( !v3 )
LABEL_41:
    sub_1B8880C(Instance, v5);
  return (AiEntity_array *)System_Collections_Generic_List_object___ToArray(
                             v3,
                             (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_AiEntity__ToArray__);
}