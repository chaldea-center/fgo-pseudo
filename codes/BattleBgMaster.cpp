void __fastcall BattleBgMaster___ctor(BattleBgMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__, method, v2);
    byte_4B15E66 = 1;
  }
  *(&this->fields.revision + 1) = 1;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    129,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleBgMaster__GetBgAssetPath(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t Item1; // w19

  if ( (byte_4B15E6A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, *(_QWORD *)&bgId, *(_QWORD *)&bgType);
    byte_4B15E6A = 1;
  }
  Item1 = BattleBgMaster__GetBgResourceIdType(this, bgId, bgType, method).fields.Item1;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v7);
  return BattleDataDefine__MakeBgPath(Item1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBgMaster__GetBgIndividuality(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  bool v9; // w8
  System_Int32_array *result; // x0
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15E67 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&bgId, *(_QWORD *)&bgType);
    byte_4B15E67 = 1;
  }
  entity = 0LL;
  v9 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v8);
    result = entity->fields.individuality;
    if ( !result )
      return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_int__int__o __fastcall BattleBgMaster__GetBgResourceIdType(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int resourceId; // w1
  int32_t resourceType; // w2
  const MethodInfo_38F0500 *v12; // x3
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__int__o v15; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_int__int__o v16; // 0:x0.8

  if ( (byte_4B15E69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_ValueTuple_int__int___ctor__, *(_QWORD *)&bgId, *(_QWORD *)&bgType);
    byte_4B15E69 = 1;
  }
  entity = 0LL;
  v8 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( !v8 )
    goto LABEL_7;
  if ( !entity )
    sub_1BCAA3C(v8, v9);
  resourceId = entity->fields.resourceId;
  if ( resourceId > 0 )
  {
    resourceType = entity->fields.resourceType;
    v12 = (const MethodInfo_38F0500 *)Method_System_ValueTuple_int__int___ctor__;
    v16 = (System_ValueTuple_int__int__o)&v15;
    v15 = 0LL;
  }
  else
  {
LABEL_7:
    v12 = (const MethodInfo_38F0500 *)Method_System_ValueTuple_int__int___ctor__;
    v15 = 0LL;
    v16 = (System_ValueTuple_int__int__o)&v15;
    resourceId = bgId;
    resourceType = bgType;
  }
  System_ValueTuple_int__int____ctor(v16, resourceId, resourceType, v12);
  return v15;
}


int32_t __fastcall BattleBgMaster__GetBgShadowImageId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t *p_imageId; // x8
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  v6 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( v6 )
  {
    if ( !entity )
      sub_1BCAA3C(v6, v7);
    p_imageId = &entity->fields.imageId;
  }
  else
  {
    p_imageId = &this->fields.revision + 1;
  }
  return *p_imageId;
}


int32_t __fastcall BattleBgMaster__GetBgSpecialShadowEffectId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, method) )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v6);
    return BattleBgEntity__GetSpecialShadowEffectId(entity, defId, v7);
  }
  return defId;
}


System_Int32_array *__fastcall BattleBgMaster__GetBgSpecialShadowEffectIdArray(
        BattleBgMaster_o *this,
        const MethodInfo *method)
{
  return *(System_Int32_array **)&this->fields.DefaultBgShadowImageId;
}


// local variable allocation has failed, the output may be wrong!
BattleBgEntity_o *__fastcall BattleBgMaster__GetEntity(
        BattleBgMaster_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15E64 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&type);
    byte_4B15E64 = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&type);
  return (BattleBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31B3198 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
}


int32_t __fastcall BattleBgMaster__GetInvalidOverwrite(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x1
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( !BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4) )
    return 0;
  if ( !entity )
    sub_1BCAA3C(0LL, v5);
  return BattleBgEntity__GetInvalidOverwrite(entity, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBgMaster__TryGetEntity(
        BattleBgMaster_o *this,
        BattleBgEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15E65 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B15E65 = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
}


bool __fastcall BattleBgMaster__preProcess(BattleBgMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v23; // x21
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  BattleBgEntity_o *v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  __int64 methodPtr_low; // x9
  __int64 SpecialShadowEffectId; // x0
  __int64 v41; // x1
  int32_t v42; // w22
  _BOOL8 v43; // x0
  __int64 v44; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  System_Int32_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4B15E68 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBgEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v21, v22);
    byte_4B15E68 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (BattleBgEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                Enumerator,
                                *(_QWORD *)(v35 + 8));
    if ( !v36 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(BattleBgEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v36->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (BattleBgEntity_c *)v36->klass->_2.typeHierarchy[methodPtr_low - 1] != BattleBgEntity_TypeInfo )
    {
      sub_1BCACFC(v36);
LABEL_37:
      sub_1BCAA3C(v36, v37);
    }
    SpecialShadowEffectId = BattleBgEntity__GetSpecialShadowEffectId(v36, 0, v38);
    v42 = SpecialShadowEffectId;
    if ( (int)SpecialShadowEffectId >= 1 )
    {
      if ( !v23 )
        sub_1BCAA3C(SpecialShadowEffectId, v41);
      v43 = System_Collections_Generic_List_int___Contains(
              v23,
              SpecialShadowEffectId,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v43 )
      {
        items = v23->fields._items;
        v46 = Method_System_Collections_Generic_List_int__Add__;
        ++v23->fields._version;
        if ( !items )
          sub_1BCAA3C(v43, v44);
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            v42,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v23->fields._size = size + 1;
          items->m_Items[size + 1] = v42;
        }
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
        goto LABEL_32;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_32:
    v51 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                                                             Enumerator,
                                                             *(_QWORD *)(v51 + 8));
  if ( !v23 )
LABEL_40:
    sub_1BCAA3C(list, v24);
  v52 = System_Collections_Generic_List_int___ToArray(
          v23,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)&this->fields.DefaultBgShadowImageId = v52;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.DefaultBgShadowImageId,
    (int64_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  return 1;
}