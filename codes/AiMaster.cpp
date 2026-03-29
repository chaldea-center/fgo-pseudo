void AiMaster___ctor(AiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D305BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
    byte_4D305BE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    109,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiEntity_o *AiMaster__GetEntity(AiMaster_o *this, int32_t id, int32_t idx, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D305BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
    byte_4D305BC = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                         PK,
                         (const MethodInfo_34681D4 *)Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool AiMaster__TryGetEntity(AiMaster_o *this, AiEntity_o **entity, int32_t id, int32_t idx, const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D305BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
    byte_4D305BD = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
}


AiEntity_array *AiMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x8
  AiEntity_c *v25; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4D305BF & 1) == 0 )
  {
    sub_1C93AD4(&AiEntity_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_AiEntity__GetEnumerator__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_AiMaster___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_AiEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AiEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AiEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AiEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_AiEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D305BF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_AiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_AiEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_AiMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)Instance->fields.datalist;
  if ( !Instance )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_AiEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_AiEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_AiEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_18:
      v15 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_AiEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v24 = v16;
    if ( !v16 )
      goto LABEL_38;
    v25 = AiEntity_TypeInfo;
    naturalAligment = AiEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 304LL) < (unsigned int)naturalAligment
      || *(AiEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * naturalAligment - 8) != AiEntity_TypeInfo )
    {
      sub_1C940C8(v16);
LABEL_38:
      sub_1C93D2C(v16, v17);
    }
    if ( *(_DWORD *)(v16 + 16) == id )
    {
      if ( !v3 )
        sub_1C93D2C(v16, AiEntity_TypeInfo);
      items = v3->fields._items;
      v28 = Method_System_Collections_Generic_List_AiEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(v16, v25);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v16,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v24;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_33;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_33:
    v34 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                Enumerator,
                                *(_QWORD *)(v34 + 8));
  if ( !v3 )
LABEL_41:
    sub_1C93D2C(Instance, v5);
  return (AiEntity_array *)System_Collections_Generic_List_object___ToArray(
                             v3,
                             (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_AiEntity__ToArray__);
}