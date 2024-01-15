void __fastcall FriendshipMaster___ctor(FriendshipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB2C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__, method);
    byte_40FB2C9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    30,
    (const MethodInfo_266F73C *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipEntity_o *__fastcall FriendshipMaster__GetEntity(
        FriendshipMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB2C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FB2C7 = 1;
  }
  PK = FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (FriendshipEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_266F7D8 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
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
  __int64 v15; // x1
  int32_t v16; // w28
  int32_t v17; // w27
  ServantVoiceEntity_o *v18; // x8
  int32_t type; // w9
  bool v20; // cc
  System_String_o *v21; // x26
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  float v24; // s0
  ServantVoiceEntity_o *result; // [xsp+10h] [xbp-60h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-54h] BYREF

  v28 = friendshipId;
  if ( (byte_40FB2CA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TryGetEntityFromId_FriendshipEntity___, *(_QWORD *)&friendshipId);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v15);
    byte_40FB2CA = 1;
  }
  result = 0LL;
  *rank = -1;
  *max = 0;
  *late = 0;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v21 = System_Int32__ToString((int32_t)&v28, 0LL);
    v22 = System_Int32__ToString((int32_t)max, 0LL);
    v23 = System_String__Concat_43746016(v21, (System_String_o *)StringLiteral_1223/*":"*/, v22, 0LL);
    result = 0LL;
    if ( !DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
            (DataMasterBase_o *)this,
            &result,
            v23,
            (const MethodInfo_18C375C *)Method_DataMasterBase_TryGetEntityFromId_FriendshipEntity___) )
      break;
    if ( v16 <= friendship )
    {
      *rank = *max;
      v18 = result;
      if ( !result )
LABEL_23:
        sub_B170D4();
      type = result->fields.type;
      v20 = type < 1;
      if ( type < 1 )
        type = v16;
      if ( !v20 )
        v17 = v16;
      v16 = type;
    }
    else
    {
      v18 = result;
      if ( !result )
        goto LABEL_23;
    }
    if ( v18->fields.type < 1 || *max >= maxRank )
      goto LABEL_19;
    ++*max;
  }
  if ( *max >= 1 )
    --*max;
LABEL_19:
  *late = v16 - friendship;
  if ( v16 - v17 < 1 )
    v24 = 0.0;
  else
    v24 = (float)(friendship - v17) / (float)(v16 - v17);
  *fraction = v24;
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

  if ( (byte_40FB2C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__, entity);
    byte_40FB2C8 = 1;
  }
  PK = FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FriendshipMaster__getRankMax(FriendshipMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v4; // x1
  int i; // w8
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x21
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = id;
  if ( (byte_40FB2CB & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v4);
    byte_40FB2CB = 1;
  }
  for ( i = 0; ; i = v16 + 1 )
  {
    v16 = i;
    v6 = System_Int32__ToString((int32_t)&v17, 0LL);
    v7 = System_Int32__ToString((int32_t)&v16, 0LL);
    v8 = System_String__Concat_43746016(v6, (System_String_o *)StringLiteral_1223/*":"*/, v7, 0LL);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      sub_B170D4();
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
      p_method = sub_AAFEF8(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
            v11,
            v8,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
  }
  return v16 - 1;
}