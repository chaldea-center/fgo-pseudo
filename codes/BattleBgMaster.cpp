void BattleBgMaster___ctor(BattleBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6FFE & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
    byte_4CC6FFE = 1;
  }
  this->fields.DefaultBgShadowImageId = 1;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    133,
    (const MethodInfo_340B614 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
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
      sub_1C71608(0, v5);
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

  if ( (byte_4CC7002 & 1) == 0 )
  {
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    byte_4CC7002 = 1;
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
  __int64 v8; // x1
  bool v9; // w8
  System_Int32_array *result; // x0
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC6FFF & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    byte_4CC6FFF = 1;
  }
  entity = 0;
  v9 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  result = 0;
  if ( v9 )
  {
    if ( !entity )
      sub_1C71608(0, v8);
    result = *(System_Int32_array **)((char *)&qword_28 + (_QWORD)entity);
    if ( !result )
      return (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
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
  __int64 v9; // x1
  int v10; // w1
  int32_t v11; // w2
  const MethodInfo_3B6FC94 *v12; // x3
  System_ValueTuple_int__int__o v13; // x0
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__int__o v16; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CC7001 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_ValueTuple_int__int___ctor__);
    byte_4CC7001 = 1;
  }
  entity = 0;
  v8 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( !v8 )
    goto LABEL_7;
  if ( !entity )
    sub_1C71608(v8, v9);
  v10 = *(_DWORD *)((char *)&off_18 + (_QWORD)entity);
  if ( v10 > 0 )
  {
    v11 = *(_DWORD *)((char *)&off_18 + (_QWORD)entity + 4);
    v12 = (const MethodInfo_3B6FC94 *)Method_System_ValueTuple_int__int___ctor__;
    v13 = (System_ValueTuple_int__int__o)&v16;
    v16 = 0;
  }
  else
  {
LABEL_7:
    v12 = (const MethodInfo_3B6FC94 *)Method_System_ValueTuple_int__int___ctor__;
    v16 = 0;
    v13 = (System_ValueTuple_int__int__o)&v16;
    v10 = bgId;
    v11 = bgType;
  }
  System_ValueTuple_int__int____ctor(v13, v10, v11, v12);
  return v16;
}


int32_t BattleBgMaster__GetBgShadowImageId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  if ( !BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, method) )
    return this->fields.DefaultBgShadowImageId;
  if ( !entity )
    sub_1C71608(0, v7);
  return BattleBgEntity__GetShadowImage(entity, isEnemy, v8);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v7 = defId;
  entity = 0;
  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, *(const MethodInfo **)&defId) )
  {
    if ( !entity )
      sub_1C71608(0, v8);
    return BattleBgEntity__GetSpecialShadowEffectId(entity, isEnemy, v7, v9);
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

  if ( (byte_4CC6FFC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
    byte_4CC6FFC = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&type);
  return (BattleBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_340D938 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
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
    sub_1C71608(0, v5);
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

  if ( (byte_4CC6FFD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
    byte_4CC6FFD = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
}


bool BattleBgMaster__preProcess(BattleBgMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v7; // x21
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  BattleBgEntity_o *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  System_Collections_Generic_IEnumerable_int__o *AllSpecialShadowEffectIds; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_int__o *v27; // x22
  System_Collections_Generic_IEnumerable_int__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x22
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  struct System_Int32_array *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7

  if ( (byte_4CC7000 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Cast_BattleBgEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC7000 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v4 = System_Linq_Enumerable__Cast_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_31598C0 *)Method_System_Linq_Enumerable_Cast_BattleBgEntity___);
  if ( !v4 )
    sub_1C71608(0, v5);
  klass = v4->klass;
  v7 = v4;
  v8 = *(unsigned __int16 *)&v4->klass->_2.rank;
  if ( *(_WORD *)&v4->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBgEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v10 = sub_1C47738(v4, System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v10)(
          v7,
          *(_QWORD *)(v10 + 8));
  v13 = v11;
  while ( 1 )
  {
    if ( !v13 )
      sub_1C71608(v11, v12);
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_16:
      v17 = sub_1C47738(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    v18 = *(_QWORD *)v13;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBgEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_23;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_23:
      v21 = sub_1C47738(v13, System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo, 0);
    }
    v22 = (BattleBgEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_1C71608(0, v23);
    AllSpecialShadowEffectIds = BattleBgEntity__GetAllSpecialShadowEffectIds(v22, 0, v24);
    v27 = AllSpecialShadowEffectIds;
    if ( !AllSpecialShadowEffectIds )
      sub_1C71608(0, v26);
    v28 = AllSpecialShadowEffectIds->klass;
    v29 = *(unsigned __int16 *)&AllSpecialShadowEffectIds->klass->_2.rank;
    if ( *(_WORD *)&AllSpecialShadowEffectIds->klass->_2.rank )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v30 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_31;
      }
      v31 = (__int64)&v28->vtable[*v30];
    }
    else
    {
LABEL_31:
      v31 = sub_1C47738(AllSpecialShadowEffectIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v31)(
            v27,
            *(_QWORD *)(v31 + 8));
    if ( !v33 )
      sub_1C71608(0, v32);
    while ( 1 )
    {
      v34 = *(_QWORD *)v33;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_38;
        }
        v37 = v34 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_38:
        v37 = sub_1C47738(v33, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
        break;
      v38 = *(_QWORD *)v33;
      v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v40 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_45;
        }
        v41 = v38 + 16LL * *v40 + 312;
      }
      else
      {
LABEL_45:
        v41 = sub_1C47738(v33, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
      if ( (int)v42 >= 1 )
      {
        if ( !v3 )
          sub_1C71608(v42, (unsigned int)v42);
        System_Collections_Generic_HashSet_int___Add(
          v3,
          v42,
          (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v43 = *(_QWORD *)v33;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_54;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_54:
      v46 = sub_1C47738(v33, System_IDisposable_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v33, *(_QWORD *)(v46 + 8));
  }
  v47 = *(_QWORD *)v13;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_63;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_63:
    v50 = sub_1C47738(v13, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v13, *(_QWORD *)(v50 + 8));
  v51 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.bgSpecialShadowEffectIdArray = v51;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.bgSpecialShadowEffectIdArray,
    (int32_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  return 1;
}