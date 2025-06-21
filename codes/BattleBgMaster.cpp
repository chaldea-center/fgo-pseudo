void __fastcall BattleBgMaster___ctor(BattleBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C160 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__, method);
    byte_4B1C160 = 1;
  }
  this->fields.DefaultBgShadowImageId = 1;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    133,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
}


bool __fastcall BattleBgMaster__GetBeAcceptedOverwriteShadow(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x1
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4) )
  {
    if ( !entity )
      sub_1BCB254(0LL, v5);
    return BattleBgEntity__IsAcceptedOverwrittenShadow(entity, v5);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleBgMaster__GetBgAssetPath(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  int32_t Item1; // w19

  if ( (byte_4B1C164 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, *(_QWORD *)&bgId);
    byte_4B1C164 = 1;
  }
  Item1 = BattleBgMaster__GetBgResourceIdType(this, bgId, bgType, method).fields.Item1;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
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

  if ( (byte_4B1C161 & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, *(_QWORD *)&bgId);
    byte_4B1C161 = 1;
  }
  entity = 0LL;
  v9 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_1BCB254(0LL, v8);
    result = entity->fields.individuality;
    if ( !result )
      return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
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
  const MethodInfo_3A050F4 *v12; // x3
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__int__o v15; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_int__int__o v16; // 0:x0.8

  if ( (byte_4B1C163 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_ValueTuple_int__int___ctor__, *(_QWORD *)&bgId);
    byte_4B1C163 = 1;
  }
  entity = 0LL;
  v8 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( !v8 )
    goto LABEL_7;
  if ( !entity )
    sub_1BCB254(v8, v9);
  resourceId = entity->fields.resourceId;
  if ( resourceId > 0 )
  {
    resourceType = entity->fields.resourceType;
    v12 = (const MethodInfo_3A050F4 *)Method_System_ValueTuple_int__int___ctor__;
    v16 = (System_ValueTuple_int__int__o)&v15;
    v15 = 0LL;
  }
  else
  {
LABEL_7:
    v12 = (const MethodInfo_3A050F4 *)Method_System_ValueTuple_int__int___ctor__;
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
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  if ( !BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, method) )
    return this->fields.DefaultBgShadowImageId;
  if ( !entity )
    sub_1BCB254(0LL, v7);
  return BattleBgEntity__GetShadowImage(entity, isEnemy, v8);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBgMaster__GetBgSpecialShadowEffectId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        bool isEnemy,
        int32_t defId,
        const MethodInfo *method)
{
  int32_t v7; // w19
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v7 = defId;
  entity = 0LL;
  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, *(const MethodInfo **)&defId) )
  {
    if ( !entity )
      sub_1BCB254(0LL, v8);
    return BattleBgEntity__GetSpecialShadowEffectId(entity, isEnemy, v7, v9);
  }
  return v7;
}


System_Int32_array *__fastcall BattleBgMaster__GetBgSpecialShadowEffectIdArray(
        BattleBgMaster_o *this,
        const MethodInfo *method)
{
  return this->fields.bgSpecialShadowEffectIdArray;
}


// local variable allocation has failed, the output may be wrong!
BattleBgEntity_o *__fastcall BattleBgMaster__GetEntity(
        BattleBgMaster_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C15E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B1C15E = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&type);
  return (BattleBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_32CC8B8 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
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
    sub_1BCB254(0LL, v5);
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

  if ( (byte_4B1C15F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__, entity);
    byte_4B1C15F = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
}


bool __fastcall BattleBgMaster__preProcess(BattleBgMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_HashSet_int__o *v13; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x21
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x21
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  BattleBgEntity_o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  System_Collections_Generic_IEnumerable_int__o *AllSpecialShadowEffectIds; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerable_int__o *v37; // x22
  System_Collections_Generic_IEnumerable_int__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x22
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  struct System_Int32_array *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3

  if ( (byte_4B1C162 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Cast_BattleBgEntity___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_4B1C162 = 1;
  }
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v13,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v14 = System_Linq_Enumerable__Cast_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_302917C *)Method_System_Linq_Enumerable_Cast_BattleBgEntity___);
  if ( !v14 )
    sub_1BCB254(0LL, v15);
  klass = v14->klass;
  v17 = v14;
  v18 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBgEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1B560(v14, System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v17,
          *(_QWORD *)(p_method + 8));
  v23 = v21;
  while ( 1 )
  {
    if ( !v23 )
      sub_1BCB254(v21, v22);
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_16:
      v27 = sub_1C1B560(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBgEntity__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_23;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_23:
      v31 = sub_1C1B560(v23, System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo, 0LL);
    }
    v32 = (BattleBgEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    if ( !v32 )
      sub_1BCB254(0LL, v33);
    AllSpecialShadowEffectIds = BattleBgEntity__GetAllSpecialShadowEffectIds(v32, 0, v34);
    v37 = AllSpecialShadowEffectIds;
    if ( !AllSpecialShadowEffectIds )
      sub_1BCB254(0LL, v36);
    v38 = AllSpecialShadowEffectIds->klass;
    v39 = *(unsigned __int16 *)(&AllSpecialShadowEffectIds->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&AllSpecialShadowEffectIds->klass->_2.bitflags2 + 3) )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v40 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_31;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_31:
      v41 = sub_1C1B560(AllSpecialShadowEffectIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v41)(
            v37,
            *(_QWORD *)(v41 + 8));
    if ( !v43 )
      sub_1BCB254(0LL, v42);
    while ( 1 )
    {
      v44 = *(_QWORD *)v43;
      v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_38;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_38:
        v47 = sub_1C1B560(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
        break;
      v48 = *(_QWORD *)v43;
      v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v50 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_45;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_45:
        v51 = sub_1C1B560(v43, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
      if ( (int)v52 >= 1 )
      {
        if ( !v13 )
          sub_1BCB254(v52, (unsigned int)v52);
        System_Collections_Generic_HashSet_int___Add(
          v13,
          v52,
          (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v53 = *(_QWORD *)v43;
    v54 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_54;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_54:
      v56 = sub_1C1B560(v43, System_IDisposable_TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v43, *(_QWORD *)(v56 + 8));
  }
  v57 = *(_QWORD *)v23;
  v58 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_63;
    }
    v60 = v57 + 16LL * *v59 + 312;
  }
  else
  {
LABEL_63:
    v60 = sub_1C1B560(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v60)(v23, *(_QWORD *)(v60 + 8));
  v61 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.bgSpecialShadowEffectIdArray = v61;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.bgSpecialShadowEffectIdArray, (int32_t)v61, v62, v63);
  return 1;
}