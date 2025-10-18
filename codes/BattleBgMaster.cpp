void BattleBgMaster___ctor(BattleBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42BD1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
    byte_4C42BD1 = 1;
  }
  this->fields.DefaultBgShadowImageId = 1;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    133,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
}


bool BattleBgMaster__GetBeAcceptedOverwriteShadow(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x1
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4) )
  {
    if ( !entity )
      sub_1C372B4(0);
    return BattleBgEntity__IsAcceptedOverwrittenShadow(entity, v5);
  }
  else
  {
    return 0;
  }
}


System_String_o *BattleBgMaster__GetBgAssetPath(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  int32_t Item1; // w19

  if ( (byte_4C42BD5 & 1) == 0 )
  {
    sub_1C37058(&BattleDataDefine_TypeInfo);
    byte_4C42BD5 = 1;
  }
  Item1 = BattleBgMaster__GetBgResourceIdType(this, bgId, bgType, method).fields.Item1;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath(Item1, 0);
}


System_Int32_array *BattleBgMaster__GetBgIndividuality(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  bool v8; // w8
  System_Int32_array *result; // x0
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42BD2 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C42BD2 = 1;
  }
  entity = 0;
  v8 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  result = 0;
  if ( v8 )
  {
    if ( !entity )
      sub_1C372B4(0);
    result = *(System_Int32_array **)((char *)&qword_28 + (_QWORD)entity);
    if ( !result )
      return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  }
  return result;
}


System_ValueTuple_int__int__o BattleBgMaster__GetBgResourceIdType(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v8; // x0
  int v9; // w1
  int32_t v10; // w2
  const MethodInfo_3AFCC28 *v11; // x3
  System_ValueTuple_int__int__o v12; // x0
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__int__o v15; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C42BD4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_ValueTuple_int__int___ctor__);
    byte_4C42BD4 = 1;
  }
  entity = 0;
  v8 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( !v8 )
    goto LABEL_7;
  if ( !entity )
    sub_1C372B4(v8);
  v9 = *(_DWORD *)((char *)&off_18 + (_QWORD)entity);
  if ( v9 > 0 )
  {
    v10 = *(_DWORD *)((char *)&off_18 + (_QWORD)entity + 4);
    v11 = (const MethodInfo_3AFCC28 *)Method_System_ValueTuple_int__int___ctor__;
    v12 = (System_ValueTuple_int__int__o)&v15;
    v15 = 0;
  }
  else
  {
LABEL_7:
    v11 = (const MethodInfo_3AFCC28 *)Method_System_ValueTuple_int__int___ctor__;
    v15 = 0;
    v12 = (System_ValueTuple_int__int__o)&v15;
    v9 = bgId;
    v10 = bgType;
  }
  System_ValueTuple_int__int____ctor(v12, v9, v10, v11);
  return v15;
}


int32_t BattleBgMaster__GetBgShadowImageId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        bool isEnemy,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  if ( !BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, method) )
    return this->fields.DefaultBgShadowImageId;
  if ( !entity )
    sub_1C372B4(0);
  return BattleBgEntity__GetShadowImage(entity, isEnemy, v7);
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleBgMaster__GetBgSpecialShadowEffectId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        bool isEnemy,
        int32_t defId,
        const MethodInfo *method)
{
  int32_t v7; // w19
  const MethodInfo *v8; // x3
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v7 = defId;
  entity = 0;
  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, *(const MethodInfo **)&defId) )
  {
    if ( !entity )
      sub_1C372B4(0);
    return BattleBgEntity__GetSpecialShadowEffectId(entity, isEnemy, v7, v8);
  }
  return v7;
}


System_Int32_array *BattleBgMaster__GetBgSpecialShadowEffectIdArray(BattleBgMaster_o *this, const MethodInfo *method)
{
  return this->fields.bgSpecialShadowEffectIdArray;
}


// local variable allocation has failed, the output may be wrong!
BattleBgEntity_o *BattleBgMaster__GetEntity(BattleBgMaster_o *this, int32_t id, int32_t type, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C42BCF & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
    byte_4C42BCF = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&type);
  return (BattleBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_33A5B58 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
}


int32_t BattleBgMaster__GetInvalidOverwrite(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x1
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  if ( !BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4) )
    return 0;
  if ( !entity )
    sub_1C372B4(0);
  return BattleBgEntity__GetInvalidOverwrite(entity, v5);
}


// local variable allocation has failed, the output may be wrong!
bool BattleBgMaster__TryGetEntity(
        BattleBgMaster_o *this,
        BattleBgEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C42BD0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
    byte_4C42BD0 = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
}


bool BattleBgMaster__preProcess(BattleBgMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v4; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v6; // x21
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x21
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  BattleBgEntity_o *v20; // x0
  const MethodInfo *v21; // x2
  System_Collections_Generic_IEnumerable_int__o *AllSpecialShadowEffectIds; // x0
  System_Collections_Generic_IEnumerable_int__o *v23; // x22
  System_Collections_Generic_IEnumerable_int__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x22
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  struct System_Int32_array *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3

  if ( (byte_4C42BD3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Cast_BattleBgEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C42BD3 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v4 = System_Linq_Enumerable__Cast_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_30F6330 *)Method_System_Linq_Enumerable_Cast_BattleBgEntity___);
  if ( !v4 )
    sub_1C372B4(0);
  klass = v4->klass;
  v6 = v4;
  v7 = *(unsigned __int16 *)&v4->klass->_2.rank;
  if ( *(_WORD *)&v4->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBgEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v9 = sub_1C87870(v4, System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v9)(
          v6,
          *(_QWORD *)(v9 + 8));
  v11 = v10;
  while ( 1 )
  {
    if ( !v11 )
      sub_1C372B4(v10);
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_16:
      v15 = sub_1C87870(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v11;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBgEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_23;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_23:
      v19 = sub_1C87870(v11, System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo, 0);
    }
    v20 = (BattleBgEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1C372B4(0);
    AllSpecialShadowEffectIds = BattleBgEntity__GetAllSpecialShadowEffectIds(v20, 0, v21);
    v23 = AllSpecialShadowEffectIds;
    if ( !AllSpecialShadowEffectIds )
      sub_1C372B4(0);
    v24 = AllSpecialShadowEffectIds->klass;
    v25 = *(unsigned __int16 *)&AllSpecialShadowEffectIds->klass->_2.rank;
    if ( *(_WORD *)&AllSpecialShadowEffectIds->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v26 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_31;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_31:
      v27 = sub_1C87870(AllSpecialShadowEffectIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v27)(
            v23,
            *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_1C372B4(0);
    while ( 1 )
    {
      v29 = *(_QWORD *)v28;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_38;
        }
        v32 = v29 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_38:
        v32 = sub_1C87870(v28, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
        break;
      v33 = *(_QWORD *)v28;
      v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
      {
        v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v35 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_45;
        }
        v36 = v33 + 16LL * *v35 + 312;
      }
      else
      {
LABEL_45:
        v36 = sub_1C87870(v28, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
      if ( (int)v37 >= 1 )
      {
        if ( !v3 )
          sub_1C372B4(v37);
        System_Collections_Generic_HashSet_int___Add(
          v3,
          v37,
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v38 = *(_QWORD *)v28;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_54;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_54:
      v41 = sub_1C87870(v28, System_IDisposable_TypeInfo, 0);
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v28, *(_QWORD *)(v41 + 8));
  }
  v42 = *(_QWORD *)v11;
  v43 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
  {
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_63;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_63:
    v45 = sub_1C87870(v11, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v11, *(_QWORD *)(v45 + 8));
  v46 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.bgSpecialShadowEffectIdArray = v46;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bgSpecialShadowEffectIdArray, (int32_t)v46, v47, v48);
  return 1;
}