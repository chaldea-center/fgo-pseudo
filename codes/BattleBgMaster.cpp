void __fastcall BattleBgMaster___ctor(BattleBgMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC100 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC100 = 1;
  }
  *(&this->fields.revision + 1) = 1;
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    128,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
}


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

  if ( (byte_42EC101 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, bgId, bgType, method);
    byte_42EC101 = 1;
  }
  entity = 0LL;
  v9 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B5D69C(0LL, v8);
    result = entity->fields.individuality;
    if ( !result )
      return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
  return result;
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
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v6 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( v6 )
  {
    if ( !entity )
      sub_B5D69C(v6, v7);
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
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, method) )
  {
    if ( !entity )
      sub_B5D69C(0LL, v6);
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
  System_String_o *PK; // x1

  if ( (byte_42EC0FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__, id, type, method);
    byte_42EC0FE = 1;
  }
  PK = BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&type);
  return (BattleBgEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23FB260 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
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
    sub_B5D69C(0LL, v5);
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
  System_String_o *PK; // x2

  if ( (byte_42EC0FF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&type);
    byte_42EC0FF = 1;
  }
  PK = BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
}


bool __fastcall BattleBgMaster__preProcess(BattleBgMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x20
  __int64 v33; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v35; // x1
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x3
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  BattleBgEntity_o *v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  __int64 v50; // x9
  __int64 SpecialShadowEffectId; // x0
  __int64 v52; // x1
  int32_t v53; // w22
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_42EC102 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBgEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    byte_42EC102 = 1;
  }
  v32 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v36);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v43 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_16:
      v46 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v42);
    }
    v47 = (BattleBgEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                                Enumerator,
                                *(_QWORD *)(v46 + 8));
    if ( !v47 )
      goto LABEL_34;
    v50 = *(&BattleBgEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v47->klass->_2.bitflags2 + 1) < (unsigned int)v50
      || (BattleBgEntity_c *)v47->klass->_2.typeHierarchy[v50 - 1] != BattleBgEntity_TypeInfo )
    {
      sub_B5D990(v47);
LABEL_34:
      sub_B5D69C(v47, v48);
    }
    SpecialShadowEffectId = BattleBgEntity__GetSpecialShadowEffectId(v47, 0, v49);
    v53 = SpecialShadowEffectId;
    if ( (int)SpecialShadowEffectId >= 1 )
    {
      if ( !v32 )
        sub_B5D69C(SpecialShadowEffectId, v52);
      if ( !System_Collections_Generic_List_int___Contains(
              v32,
              SpecialShadowEffectId,
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v32,
          v53,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v54 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_29:
    v57 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v42);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v57 + 8));
  if ( !v32 )
LABEL_36:
    sub_B5D69C(list, v33);
  v58 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v32,
                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)&this->fields.DefaultBgShadowImageId = v58;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.DefaultBgShadowImageId, v58, v59, v60, v61, v62, v63, v64);
  return 1;
}