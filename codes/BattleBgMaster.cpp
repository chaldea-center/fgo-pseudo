void BattleBgMaster___ctor(BattleBgMaster_o *this, const MethodInfo *method)
{
  const MethodInfo_3F1339C *v3; // x2

  if ( (byte_5970444 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
    byte_5970444 = 1;
  }
  v3 = (const MethodInfo_3F1339C *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__;
  this->fields.DefaultBgShadowImageId = 1;
  DataMasterBase_object__object__object____ctor((DataMasterBase_TMaster__TEntity__PKType__o *)this, 135, v3);
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

  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4) )
  {
    if ( !entity )
      sub_2213CDC(0, v5);
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
  System_ValueTuple_int__int__o v7; // x1
  int32_t Item1; // w19

  if ( (byte_5970448 & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_5970448 = 1;
  }
  Item1 = BattleBgMaster__GetBgResourceIdType(this, bgId, bgType, method).fields.Item1;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v7);
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

  if ( (byte_5970445 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5970445 = 1;
  }
  entity = 0;
  v9 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  result = 0;
  if ( v9 )
  {
    if ( !entity )
      sub_2213CDC(0, v8);
    result = *(System_Int32_array **)((char *)&qword_28 + (_QWORD)entity);
    if ( !result )
      return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
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
  const MethodInfo_3CEDC64 *v12; // x3
  System_ValueTuple_int__int__o v13; // x0
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__int__o v16; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5970447 & 1) == 0 )
  {
    sub_2213A60(&Method_System_ValueTuple_int__int___ctor__);
    byte_5970447 = 1;
  }
  entity = 0;
  v8 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( !v8 )
    goto LABEL_7;
  if ( !entity )
    sub_2213CDC(v8, v9);
  v10 = *(_DWORD *)((char *)off_18 + (_QWORD)entity);
  if ( v10 > 0 )
  {
    v11 = *(_DWORD *)((char *)off_18 + (_QWORD)entity + 4);
    v12 = (const MethodInfo_3CEDC64 *)Method_System_ValueTuple_int__int___ctor__;
    v13 = (System_ValueTuple_int__int__o)&v16;
    v16 = 0;
  }
  else
  {
LABEL_7:
    v12 = (const MethodInfo_3CEDC64 *)Method_System_ValueTuple_int__int___ctor__;
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
    sub_2213CDC(0, v7);
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
      sub_2213CDC(0, v8);
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

  if ( (byte_5970442 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
    byte_5970442 = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&type);
  return (BattleBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_3F157EC *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
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

  if ( !BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4) )
    return 0;
  if ( !entity )
    sub_2213CDC(0, v5);
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

  if ( (byte_5970443 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
    byte_5970443 = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
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
  __int64 i; // x21
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  BattleBgEntity_o *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_IEnumerable_int__o *AllSpecialShadowEffectIds; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerable_int__o *v29; // x21
  System_Collections_Generic_IEnumerable_int__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x21
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  struct System_Int32_array *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v63; // [xsp+20h] [xbp-70h]
  __int64 v64; // [xsp+28h] [xbp-68h]

  if ( (byte_5970446 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_BattleBgEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970446 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v4 = System_Linq_Enumerable__Cast_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_BattleBgEntity___);
  if ( !v4 )
    sub_2213CDC(0, v5);
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
    v10 = sub_224BC3C(v4, System_Collections_Generic_IEnumerable_BattleBgEntity__TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v10)(
          v7,
          *(_QWORD *)(v10 + 8));
  v64 = v11;
  if ( !v11 )
    sub_2213CDC(v11, v12);
  for ( i = v11; ; i = v64 )
  {
    v14 = *(_QWORD *)i;
    v15 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
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
      v17 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(i, *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v64 )
      sub_2213CDC(v18, v19);
    v20 = *(_QWORD *)v64;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBgEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_24;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_24:
      v23 = sub_224BC3C(v64, System_Collections_Generic_IEnumerator_BattleBgEntity__TypeInfo, 0);
    }
    v24 = (BattleBgEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v64, *(_QWORD *)(v23 + 8));
    if ( !v24 )
      sub_2213CDC(0, v25);
    AllSpecialShadowEffectIds = BattleBgEntity__GetAllSpecialShadowEffectIds(v24, 0, v26);
    v29 = AllSpecialShadowEffectIds;
    if ( !AllSpecialShadowEffectIds )
      sub_2213CDC(0, v28);
    v30 = AllSpecialShadowEffectIds->klass;
    v31 = *(unsigned __int16 *)&AllSpecialShadowEffectIds->klass->_2.rank;
    if ( *(_WORD *)&AllSpecialShadowEffectIds->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v32 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_32;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_32:
      v33 = sub_224BC3C(AllSpecialShadowEffectIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v33)(
            v29,
            *(_QWORD *)(v33 + 8));
    v63 = v35;
    if ( !v35 )
      sub_2213CDC(0, v34);
    while ( 1 )
    {
      v36 = *(_QWORD *)v35;
      v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_39;
        }
        v39 = v36 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_39:
        v39 = sub_224BC3C(v35, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
      if ( (v40 & 1) == 0 )
        break;
      if ( !v63 )
        sub_2213CDC(v40, v41);
      v42 = *(_QWORD *)v63;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v44 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_47;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_47:
        v45 = sub_224BC3C(v63, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v63, *(_QWORD *)(v45 + 8));
      if ( (int)v46 > 0 )
      {
        if ( !v3 )
          sub_2213CDC(v46, (unsigned int)v46);
        System_Collections_Generic_HashSet_int___Add(
          v3,
          v46,
          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v35 = v63;
    }
    if ( v63 )
    {
      v47 = *(_QWORD *)v63;
      v48 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_59;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_59:
        v50 = sub_224BC3C(v63, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v63, *(_QWORD *)(v50 + 8));
    }
  }
  if ( v64 )
  {
    v51 = *(_QWORD *)v64;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_70;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_70:
      v54 = sub_224BC3C(v64, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v54)(v64, *(_QWORD *)(v54 + 8));
  }
  v55 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.bgSpecialShadowEffectIdArray = v55;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bgSpecialShadowEffectIdArray,
    (int32_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  return 1;
}