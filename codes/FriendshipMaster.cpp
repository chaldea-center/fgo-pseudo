void FriendshipMaster___ctor(FriendshipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37C14 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
    byte_4C37C14 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    31,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipEntity_o *FriendshipMaster__GetEntity(
        FriendshipMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37C12 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
    byte_4C37C12 = 1;
  }
  PK = (Il2CppObject *)FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (FriendshipEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_339B2F0 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipEntity_o *FriendshipMaster__GetFriendShipRankEntity(
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
  const MethodInfo *v14; // x4
  int32_t v15; // w24
  FriendshipEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0;
  RankMax = FriendshipMaster__GetRankMax(this, friendshipId, *(const MethodInfo **)&friendship);
  v12 = FriendshipMaster__GetEntity(this, friendshipId, startFriendshipRank, v10);
  if ( RankMax >= startFriendshipRank )
  {
    v13 = FriendshipMaster__TryGetEntity(this, &entity, friendshipId, startFriendshipRank, v11);
    if ( v13 )
    {
      v15 = startFriendshipRank + 1;
      do
      {
        v12 = entity;
        if ( !entity )
          sub_1C32E7C(v13);
        if ( entity->fields.friendship > friendship )
          break;
        if ( v15 > RankMax )
          break;
        v13 = FriendshipMaster__TryGetEntity(this, &entity, friendshipId, v15++, v14);
      }
      while ( v13 );
    }
  }
  return v12;
}


bool FriendshipMaster__GetFriendshipRank(
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
  Il2CppObject *v21; // x8
  int monitor; // w9
  float v23; // s0
  float *v25; // [xsp+8h] [xbp-78h]
  Il2CppObject *result; // [xsp+10h] [xbp-70h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-64h] BYREF

  v27 = friendshipId;
  if ( (byte_4C37C15 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntityFromId__);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C37C15 = 1;
  }
  v15 = 0;
  v16 = 0;
  result = 0;
  *rank = -1;
  *max = 0;
  *late = 0;
  while ( 1 )
  {
    v17 = System_Int32__ToString((int32_t)&v27, 0);
    v18 = System_Int32__ToString((int32_t)max, 0);
    v19 = System_String__Concat_63556792(v17, (System_String_o *)StringLiteral_1457/*":"*/, v18, 0);
    EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     &result,
                     v19,
                     (const MethodInfo_339A9A0 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntityFromId__);
    if ( !EntityFromId )
      break;
    if ( v15 <= friendship )
    {
      *rank = *max;
      v21 = result;
      if ( !result )
LABEL_22:
        sub_1C32E7C(EntityFromId);
      monitor = (int)result[1].monitor;
      if ( monitor >= 1 )
        v16 = v15;
      else
        monitor = v15;
      v15 = monitor;
    }
    else
    {
      v21 = result;
      if ( !result )
        goto LABEL_22;
    }
    if ( SLODWORD(v21[1].monitor) < 1 || *max >= maxRank )
      goto LABEL_18;
    ++*max;
  }
  if ( *max >= 1 )
    --*max;
LABEL_18:
  *late = v15 - friendship;
  if ( v15 - v16 < 1 )
    v23 = 0.0;
  else
    v23 = (float)(friendship - v16) / (float)(v15 - v16);
  *v25 = v23;
  return *rank > 0;
}


int32_t FriendshipMaster__GetRankMax(FriendshipMaster_o *this, int32_t id, const MethodInfo *method)
{
  int i; // w8
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  int v15; // [xsp+8h] [xbp-38h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = id;
  if ( (byte_4C37C16 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C37C16 = 1;
  }
  for ( i = 0; ; i = v15 + 1 )
  {
    v15 = i;
    v5 = System_Int32__ToString((int32_t)&v16, 0);
    v6 = System_Int32__ToString((int32_t)&v15, 0);
    v7 = System_String__Concat_63556792(v5, (System_String_o *)StringLiteral_1457/*":"*/, v6, 0);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_33990E4 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__get_lookup__);
    if ( !lookup )
      sub_1C32E7C(0);
    klass = lookup->klass;
    v10 = lookup;
    v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v13)(
            v10,
            v7,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
  }
  return v15 - 1;
}


// local variable allocation has failed, the output may be wrong!
bool FriendshipMaster__TryGetEntity(
        FriendshipMaster_o *this,
        FriendshipEntity_o **entity,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37C13 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
    byte_4C37C13 = 1;
  }
  PK = (Il2CppObject *)FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
}