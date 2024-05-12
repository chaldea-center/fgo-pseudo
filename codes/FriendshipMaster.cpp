void __fastcall FriendshipMaster___ctor(FriendshipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D8D7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
    byte_438D8D7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    31,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipEntity_o *__fastcall FriendshipMaster__GetEntity(
        FriendshipMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D8D5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
    byte_438D8D5 = 1;
  }
  PK = FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (FriendshipEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_21FBCE4 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
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
  ServantVoiceEntity_o *v17; // x8
  int32_t type; // w9
  bool v19; // cc
  System_String_o *v20; // x26
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v24; // x1
  float v25; // s0
  ServantVoiceEntity_o *result; // [xsp+10h] [xbp-60h] BYREF
  int32_t v29; // [xsp+1Ch] [xbp-54h] BYREF

  v29 = friendshipId;
  if ( (byte_438D8D8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TryGetEntityFromId_FriendshipEntity___);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438D8D8 = 1;
  }
  result = 0LL;
  *rank = -1;
  *max = 0;
  *late = 0;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v20 = System_Int32__ToString((int32_t)&v29, 0LL);
    v21 = System_Int32__ToString((int32_t)max, 0LL);
    v22 = System_String__Concat_44904220(v20, (System_String_o *)StringLiteral_1252/*":"*/, v21, 0LL);
    result = 0LL;
    EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                        (DataMasterBase_o *)this,
                                        &result,
                                        v22,
                                        (const MethodInfo_1D188C8 *)Method_DataMasterBase_TryGetEntityFromId_FriendshipEntity___);
    if ( !EntityFromId_ServantVoiceEntity )
      break;
    if ( v15 <= friendship )
    {
      *rank = *max;
      v17 = result;
      if ( !result )
LABEL_23:
        sub_B7769C(EntityFromId_ServantVoiceEntity, v24);
      type = result->fields.type;
      v19 = type < 1;
      if ( type < 1 )
        type = v15;
      if ( !v19 )
        v16 = v15;
      v15 = type;
    }
    else
    {
      v17 = result;
      if ( !result )
        goto LABEL_23;
    }
    if ( v17->fields.type < 1 || *max >= maxRank )
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
  *fraction = v25;
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

  if ( (byte_438D8D6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
    byte_438D8D6 = 1;
  }
  PK = FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
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
  int i; // w8
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x21
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = id;
  if ( (byte_438D8D9 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438D8D9 = 1;
  }
  for ( i = 0; ; i = v16 + 1 )
  {
    v16 = i;
    v5 = System_Int32__ToString((int32_t)&v17, 0LL);
    v6 = System_Int32__ToString((int32_t)&v16, 0LL);
    v7 = System_String__Concat_44904220(v5, (System_String_o *)StringLiteral_1252/*":"*/, v6, 0LL);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      sub_B7769C(0LL, v9);
    klass = lookup->klass;
    v11 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
            v11,
            v7,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
  }
  return v16 - 1;
}