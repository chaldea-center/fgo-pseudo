void __fastcall FriendshipMaster___ctor(FriendshipMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16421 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__, method, v2);
    byte_4B16421 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    31,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipEntity_o *__fastcall FriendshipMaster__GetEntity(
        FriendshipMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1641F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&rank);
    byte_4B1641F = 1;
  }
  PK = (Il2CppObject *)FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (FriendshipEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
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
  __int64 v16; // x2
  int32_t v17; // w28
  int32_t v18; // w27
  System_String_o *v19; // x26
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  _BOOL8 EntityFromId_object; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x8
  int monitor; // w9
  bool v26; // cc
  float v27; // s0
  float *v29; // [xsp+8h] [xbp-78h]
  Il2CppObject *result; // [xsp+10h] [xbp-70h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-64h] BYREF

  v31 = friendshipId;
  if ( (byte_4B16422 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_TryGetEntityFromId_FriendshipEntity___,
      *(_QWORD *)&friendshipId,
      *(_QWORD *)&friendship);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v15, v16);
    byte_4B16422 = 1;
  }
  v17 = 0;
  v18 = 0;
  result = 0LL;
  *rank = -1;
  *max = 0;
  *late = 0;
  while ( 1 )
  {
    v19 = System_Int32__ToString((int32_t)&v31, 0LL);
    v20 = System_Int32__ToString((int32_t)max, 0LL);
    v21 = System_String__Concat_62412480(v19, (System_String_o *)StringLiteral_1541/*":"*/, v20, 0LL);
    result = 0LL;
    EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                            (DataMasterBase_o *)this,
                            &result,
                            v21,
                            (const MethodInfo_2F13130 *)Method_DataMasterBase_TryGetEntityFromId_FriendshipEntity___);
    if ( !EntityFromId_object )
      break;
    if ( v17 <= friendship )
    {
      *rank = *max;
      v24 = result;
      if ( !result )
LABEL_23:
        sub_1BCAA3C(EntityFromId_object, v23);
      monitor = (int)result[1].monitor;
      v26 = monitor < 1;
      if ( monitor < 1 )
        monitor = v17;
      if ( !v26 )
        v18 = v17;
      v17 = monitor;
    }
    else
    {
      v24 = result;
      if ( !result )
        goto LABEL_23;
    }
    if ( SLODWORD(v24[1].monitor) < 1 || *max >= maxRank )
      goto LABEL_19;
    ++*max;
  }
  if ( *max >= 1 )
    --*max;
LABEL_19:
  *late = v17 - friendship;
  if ( v17 - v18 < 1 )
    v27 = 0.0;
  else
    v27 = (float)(friendship - v18) / (float)(v17 - v18);
  *v29 = v27;
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
  Il2CppObject *PK; // x2

  if ( (byte_4B16420 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B16420 = 1;
  }
  PK = (Il2CppObject *)FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
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
  __int64 v5; // x2
  int i; // w8
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x21
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  v19 = id;
  if ( (byte_4B16423 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&id,
      method);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v4, v5);
    byte_4B16423 = 1;
  }
  for ( i = 0; ; i = v18 + 1 )
  {
    v18 = i;
    v7 = System_Int32__ToString((int32_t)&v19, 0LL);
    v8 = System_Int32__ToString((int32_t)&v18, 0LL);
    v9 = System_String__Concat_62412480(v7, (System_String_o *)StringLiteral_1541/*":"*/, v8, 0LL);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      sub_1BCAA3C(0LL, v11);
    klass = lookup->klass;
    v13 = lookup;
    v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
            v13,
            v9,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
  }
  return v18 - 1;
}