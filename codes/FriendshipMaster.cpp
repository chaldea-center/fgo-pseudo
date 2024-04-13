void __fastcall FriendshipMaster___ctor(FriendshipMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB50E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB50E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    31,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipEntity_o *__fastcall FriendshipMaster__GetEntity(
        FriendshipMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB50C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__, id, rank, method);
    byte_42EB50C = 1;
  }
  PK = FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (FriendshipEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t v18; // w28
  int32_t v19; // w27
  ServantVoiceEntity_o *v20; // x8
  int32_t type; // w9
  bool v22; // cc
  System_String_o *v23; // x26
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v27; // x1
  float v28; // s0
  ServantVoiceEntity_o *result; // [xsp+10h] [xbp-60h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-54h] BYREF

  v32 = friendshipId;
  if ( (byte_42EB50F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TryGetEntityFromId_FriendshipEntity___,
      friendshipId,
      friendship,
      *(_QWORD *)&maxRank);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v15, v16, v17);
    byte_42EB50F = 1;
  }
  result = 0LL;
  *rank = -1;
  *max = 0;
  *late = 0;
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    v23 = System_Int32__ToString((int32_t)&v32, 0LL);
    v24 = System_Int32__ToString((int32_t)max, 0LL);
    v25 = System_String__Concat_44580072(v23, (System_String_o *)StringLiteral_1245/*":"*/, v24, 0LL);
    result = 0LL;
    EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                        (DataMasterBase_o *)this,
                                        &result,
                                        v25,
                                        (const MethodInfo_1AE4724 *)Method_DataMasterBase_TryGetEntityFromId_FriendshipEntity___);
    if ( !EntityFromId_ServantVoiceEntity )
      break;
    if ( v18 <= friendship )
    {
      *rank = *max;
      v20 = result;
      if ( !result )
LABEL_23:
        sub_B5D69C(EntityFromId_ServantVoiceEntity, v27);
      type = result->fields.type;
      v22 = type < 1;
      if ( type < 1 )
        type = v18;
      if ( !v22 )
        v19 = v18;
      v18 = type;
    }
    else
    {
      v20 = result;
      if ( !result )
        goto LABEL_23;
    }
    if ( v20->fields.type < 1 || *max >= maxRank )
      goto LABEL_19;
    ++*max;
  }
  if ( *max >= 1 )
    --*max;
LABEL_19:
  *late = v18 - friendship;
  if ( v18 - v19 < 1 )
    v28 = 0.0;
  else
    v28 = (float)(friendship - v19) / (float)(v18 - v19);
  *fraction = v28;
  return *rank > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FriendshipMaster__TryGetEntity(
        FriendshipMaster_o *this,
        FriendshipEntity_o **entity,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EB50D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&rank);
    byte_42EB50D = 1;
  }
  PK = FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FriendshipMaster__getFriendShipRank(
        FriendshipMaster_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t start_friendshipRank,
        const MethodInfo *method)
{
  int32_t RankMax; // w0
  const MethodInfo *v10; // x3
  int32_t v11; // w23
  FriendshipEntity_o *Entity; // x0
  const MethodInfo *v13; // x3
  int32_t v14; // w24

  RankMax = FriendshipMaster__getRankMax(this, friendshipId, *(const MethodInfo **)&friendship);
  if ( RankMax >= start_friendshipRank )
  {
    v11 = RankMax;
    Entity = FriendshipMaster__GetEntity(this, friendshipId, start_friendshipRank, v10);
    if ( Entity )
    {
      v14 = start_friendshipRank + 1;
      do
      {
        start_friendshipRank = Entity->fields.rank;
        if ( Entity->fields.friendship > friendship )
          break;
        if ( v14 > v11 )
          break;
        Entity = FriendshipMaster__GetEntity(this, friendshipId, v14++, v13);
      }
      while ( Entity );
    }
  }
  return start_friendshipRank;
}


int32_t __fastcall FriendshipMaster__getRankMax(FriendshipMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int i; // w8
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x21
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v22 = id;
  if ( (byte_42EB510 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v5, v6, v7);
    byte_42EB510 = 1;
  }
  for ( i = 0; ; i = v21 + 1 )
  {
    v21 = i;
    v9 = System_Int32__ToString((int32_t)&v22, 0LL);
    v10 = System_Int32__ToString((int32_t)&v21, 0LL);
    v11 = System_String__Concat_44580072(v9, (System_String_o *)StringLiteral_1245/*":"*/, v10, 0LL);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      sub_B5D69C(0LL, v13);
    klass = lookup->klass;
    v16 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   0LL,
                   v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
            v16,
            v11,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
  }
  return v21 - 1;
}