void __fastcall FriendshipMaster___ctor(FriendshipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC772 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
    byte_4BDC772 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    31,
    (const MethodInfo_325E55C *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipEntity_o *__fastcall FriendshipMaster__GetEntity(
        FriendshipMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDC770 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
    byte_4BDC770 = 1;
  }
  PK = (Il2CppObject *)FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (FriendshipEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3260880 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipEntity_o *__fastcall FriendshipMaster__GetFriendShipRankEntity(
        FriendshipMaster_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t startFriendshipRank,
        const MethodInfo *method)
{
  int32_t RankMax; // w22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4
  FriendshipEntity_o *v12; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  int32_t v16; // w24
  FriendshipEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0LL;
  RankMax = FriendshipMaster__GetRankMax(this, friendshipId, *(const MethodInfo **)&friendship);
  v12 = FriendshipMaster__GetEntity(this, friendshipId, startFriendshipRank, v10);
  if ( RankMax >= startFriendshipRank )
  {
    v13 = FriendshipMaster__TryGetEntity(this, &entity, friendshipId, startFriendshipRank, v11);
    if ( v13 )
    {
      v16 = startFriendshipRank + 1;
      do
      {
        v12 = entity;
        if ( !entity )
          sub_1C22094(v13, v14);
        if ( entity->fields.friendship > friendship )
          break;
        if ( v16 > RankMax )
          break;
        v13 = FriendshipMaster__TryGetEntity(this, &entity, friendshipId, v16++, v15);
      }
      while ( v13 );
    }
  }
  return v12;
}


bool __fastcall FriendshipMaster__GetFriendshipRank(
        FriendshipMaster_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t maxRank,
        int32_t *rank,
        int32_t *max,
        int32_t *late,
        float *fraction,
        const MethodInfo *method)
{
  int32_t v15; // w28
  int32_t v16; // w27
  System_String_o *v17; // x26
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  _BOOL8 EntityFromId; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x8
  int monitor; // w9
  bool v24; // cc
  float v25; // s0
  float *v27; // [xsp+8h] [xbp-78h]
  Il2CppObject *result; // [xsp+10h] [xbp-70h] BYREF
  int32_t v29; // [xsp+1Ch] [xbp-64h] BYREF

  v29 = friendshipId;
  if ( (byte_4BDC773 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntityFromId__);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDC773 = 1;
  }
  v15 = 0;
  v16 = 0;
  result = 0LL;
  *rank = -1;
  *max = 0;
  *late = 0;
  while ( 1 )
  {
    v17 = System_Int32__ToString((int32_t)&v29, 0LL);
    v18 = System_Int32__ToString((int32_t)max, 0LL);
    v19 = System_String__Concat_63126736(v17, (System_String_o *)StringLiteral_1546/*":"*/, v18, 0LL);
    EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     &result,
                     v19,
                     (const MethodInfo_325FF30 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntityFromId__);
    if ( !EntityFromId )
      break;
    if ( v15 <= friendship )
    {
      *rank = *max;
      v22 = result;
      if ( !result )
LABEL_23:
        sub_1C22094(EntityFromId, v21);
      monitor = (int)result[1].monitor;
      v24 = monitor < 1;
      if ( monitor < 1 )
        monitor = v15;
      if ( !v24 )
        v16 = v15;
      v15 = monitor;
    }
    else
    {
      v22 = result;
      if ( !result )
        goto LABEL_23;
    }
    if ( SLODWORD(v22[1].monitor) < 1 || *max >= maxRank )
      goto LABEL_19;
    ++*max;
  }
  if ( *max >= 1 )
    --*max;
LABEL_19:
  *late = v15 - friendship;
  if ( v15 - v16 < 1 )
    v25 = 0.0;
  else
    v25 = (float)(friendship - v16) / (float)(v15 - v16);
  *v27 = v25;
  return *rank > 0;
}


int32_t __fastcall FriendshipMaster__GetRankMax(FriendshipMaster_o *this, int32_t id, const MethodInfo *method)
{
  int i; // w8
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  v17 = id;
  if ( (byte_4BDC774 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDC774 = 1;
  }
  for ( i = 0; ; i = v16 + 1 )
  {
    v16 = i;
    v5 = System_Int32__ToString((int32_t)&v17, 0LL);
    v6 = System_Int32__ToString((int32_t)&v16, 0LL);
    v7 = System_String__Concat_63126736(v5, (System_String_o *)StringLiteral_1546/*":"*/, v6, 0LL);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_325E674 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__get_lookup__);
    if ( !lookup )
      sub_1C22094(0LL, v9);
    klass = lookup->klass;
    v11 = lookup;
    v12 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))p_method)(
            v11,
            v7,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
  }
  return v16 - 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FriendshipMaster__TryGetEntity(
        FriendshipMaster_o *this,
        FriendshipEntity_o **entity,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDC771 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
    byte_4BDC771 = 1;
  }
  PK = (Il2CppObject *)FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
}