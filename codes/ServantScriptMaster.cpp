void __fastcall ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16AED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__, method, v2);
    byte_4B16AED = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    10,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B16AEA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&form);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v7, v8);
    byte_4B16AEA = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, *(_QWORD *)&id);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&form);
  return (ServantScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantScriptEntity__o *__fastcall ServantScriptMaster__GetEntityListFromId(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  v3 = id;
  if ( (byte_4B16AEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v13, v14);
    byte_4B16AEE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantScriptEntity__TypeInfo,
                                                       v17,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        methodPtr_low = LOBYTE(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantScriptEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantScriptEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v20 )
            break;
          items = v20->fields._items;
          v30 = Method_System_Collections_Generic_List_ServantScriptEntity__Add__;
          ++v20->fields._version;
          if ( !items )
            break;
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v32[4] = *(Il2CppClass **)&id;
            sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), *(int64_t *)&id, v22, v23, v24, v25, v26, v27);
          }
        }
      }
      if ( Count == ++v21 )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v20;
    }
LABEL_18:
    sub_1BCAA3C(list, *(_QWORD *)&id);
  }
  return (System_Collections_Generic_List_ServantScriptEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntityWithRetryFormId0(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x22
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v19; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v20; // x20
  __int64 v21; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v22; // x10
  __int64 v23; // x0
  __int64 methodPtr_low; // x11
  ServantScriptEntity_o *v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16AEF & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&id,
      *(_QWORD *)&formId);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v7, v8);
    byte_4B16AEF = 1;
  }
  v26 = 0LL;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, *(_QWORD *)&id);
  PK = ServantScriptEntity__CreatePK(id, formId, *(const MethodInfo **)&formId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_30;
  klass = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v17);
    PK = ServantScriptEntity__CreatePK(id, 0, v18);
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_30:
    sub_1BCAA3C(lookup, v11);
  v19 = lookup->klass;
  v20 = lookup;
  v21 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v22 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v19->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_21;
    }
    v23 = (__int64)&v19->vtable[*(_DWORD *)v22 + 1].method;
  }
  else
  {
LABEL_21:
    v23 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v23)(
          v20,
          PK,
          &v26,
          *(_QWORD *)(v23 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v26 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v26->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantScriptEntity_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantScriptEntity_TypeInfo )
    return v26;
  return 0LL;
}


ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity_40550276(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantScriptMaster__GetEntity(this, id, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantScriptMaster__TryGetEntity(
        ServantScriptMaster_o *this,
        ServantScriptEntity_o **entity,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B16AEB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v9, v10);
    byte_4B16AEB = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, entity);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantScriptMaster__getId(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  int v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  int32_t v14; // w20
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  System_String_o *v18; // x19
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageLimitCounta; // [xsp+18h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-24h] BYREF

  v3 = imageLimitCount;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4B16AEC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&imageLimitCount, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B16AEC = 1;
  }
  entity = 0LL;
  if ( v3 >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&imageLimitCount);
    v14 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(v3, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = (Il2CppObject *)MyroomServantSpecialImageMaster__TryGetEntity(
                                      (MyroomServantSpecialImageMaster_o *)Master_object,
                                      &entity,
                                      svtId,
                                      v14,
                                      0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return entity->fields.imageId;
LABEL_19:
      sub_1BCAA3C(Master_object, v16);
    }
    v3 = imageLimitCounta;
  }
  if ( v3 >= 11 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Master_object )
      goto LABEL_19;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Master_object, &svtIda, &imageLimitCounta, 0LL);
  }
  v18 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v19 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v20 = System_String__Concat_62401220(v18, v19, 0LL);
  return System_Int32__Parse(v20, 0LL);
}


UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t offsetKind,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o Offset_40551216; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_40551216 = ServantScriptMaster__getOffset_40551216(this, id, 0, offsetKind, v4);
  y = Offset_40551216.fields.y;
  x = Offset_40551216.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset_40551216(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        int32_t offsetKind,
        const MethodInfo *method)
{
  int32_t v5; // w19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ServantScriptEntity_o *EntityWithRetryFormId0; // x0
  __int64 v14; // x1
  __int64 v15; // x9
  __int64 v16; // x10
  float x; // s0
  float y; // s1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  UnityEngine_Vector2_o Offset; // kr00_8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5 = offsetKind;
  if ( (byte_4B16AF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantScriptAddMaster___, *(_QWORD *)&id, *(_QWORD *)&formId);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__, v11, v12);
    byte_4B16AF0 = 1;
  }
  entity = 0LL;
  if ( (unsigned int)(v5 - 3) > 1 )
  {
LABEL_16:
    EntityWithRetryFormId0 = ServantScriptMaster__GetEntityWithRetryFormId0(
                               this,
                               id,
                               formId,
                               *(const MethodInfo **)&offsetKind);
    if ( EntityWithRetryFormId0 || (EntityWithRetryFormId0 = ServantScriptMaster__GetEntity(this, 1, 0, v20)) != 0LL )
    {
      Offset = ServantScriptEntity__getOffset(EntityWithRetryFormId0, v5, v19);
      y = Offset.fields.y;
      x = Offset.fields.x;
      goto LABEL_21;
    }
LABEL_20:
    sub_1BCAA3C(EntityWithRetryFormId0, v14);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&id);
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !EntityWithRetryFormId0 )
    goto LABEL_20;
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)EntityWithRetryFormId0,
                                                      &entity,
                                                      id,
                                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EntityWithRetryFormId0 & 1) == 0 )
  {
    v5 = 1;
    goto LABEL_16;
  }
  if ( !entity )
    goto LABEL_20;
  v15 = 28LL;
  if ( v5 == 4 )
    v15 = 36LL;
  if ( v5 == 4 )
    v16 = 32LL;
  else
    v16 = 24LL;
  x = (float)*(int *)((char *)&entity->klass + v16);
  y = (float)*(int *)((char *)&entity->klass + v15);
LABEL_21:
  result.fields.y = y;
  result.fields.x = x;
  return result;
}