void __fastcall FriendshipMaster___ctor(FriendshipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD97C & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__, method);
    byte_4BFD97C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    31,
    (const MethodInfo_327D914 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipEntity_o *__fastcall FriendshipMaster__GetEntity(
        FriendshipMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BFD97A & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4BFD97A = 1;
  }
  PK = (Il2CppObject *)FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (FriendshipEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_327FC38 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__GetEntity__);
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
          sub_1C2E388(v13, v14);
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
  System_String_o *v18; // x26
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  _BOOL8 EntityFromId; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x8
  int monitor; // w9
  bool v25; // cc
  float v26; // s0
  float *v28; // [xsp+8h] [xbp-78h]
  Il2CppObject *result; // [xsp+10h] [xbp-70h] BYREF
  int32_t v30; // [xsp+1Ch] [xbp-64h] BYREF

  v30 = friendshipId;
  if ( (byte_4BFD97D & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntityFromId__,
      *(_QWORD *)&friendshipId);
    sub_1C2E12C(&StringLiteral_1525/*":"*/, v15);
    byte_4BFD97D = 1;
  }
  v16 = 0;
  v17 = 0;
  result = 0LL;
  *rank = -1;
  *max = 0;
  *late = 0;
  while ( 1 )
  {
    v18 = System_Int32__ToString((int32_t)&v30, 0LL);
    v19 = System_Int32__ToString((int32_t)max, 0LL);
    v20 = System_String__Concat_63246844(v18, (System_String_o *)StringLiteral_1525/*":"*/, v19, 0LL);
    EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     &result,
                     v20,
                     (const MethodInfo_327F2E8 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntityFromId__);
    if ( !EntityFromId )
      break;
    if ( v16 <= friendship )
    {
      *rank = *max;
      v23 = result;
      if ( !result )
LABEL_23:
        sub_1C2E388(EntityFromId, v22);
      monitor = (int)result[1].monitor;
      v25 = monitor < 1;
      if ( monitor < 1 )
        monitor = v16;
      if ( !v25 )
        v17 = v16;
      v16 = monitor;
    }
    else
    {
      v23 = result;
      if ( !result )
        goto LABEL_23;
    }
    if ( SLODWORD(v23[1].monitor) < 1 || *max >= maxRank )
      goto LABEL_19;
    ++*max;
  }
  if ( *max >= 1 )
    --*max;
LABEL_19:
  *late = v16 - friendship;
  if ( v16 - v17 < 1 )
    v26 = 0.0;
  else
    v26 = (float)(friendship - v17) / (float)(v16 - v17);
  *v28 = v26;
  return *rank > 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FriendshipMaster__GetRankMax(FriendshipMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int i; // w8
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v13; // x21
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  v19 = id;
  if ( (byte_4BFD97E & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__get_lookup__, *(_QWORD *)&id);
    sub_1C2E12C(&System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_1525/*":"*/, v5);
    byte_4BFD97E = 1;
  }
  for ( i = 0; ; i = v18 + 1 )
  {
    v18 = i;
    v7 = System_Int32__ToString((int32_t)&v19, 0LL);
    v8 = System_Int32__ToString((int32_t)&v18, 0LL);
    v9 = System_String__Concat_63246844(v7, (System_String_o *)StringLiteral_1525/*":"*/, v8, 0LL);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_327DA2C *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__get_lookup__);
    if ( !lookup )
      sub_1C2E388(0LL, v11);
    klass = lookup->klass;
    v13 = lookup;
    v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__TypeInfo )
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
      p_method = sub_1C8010C(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__FriendshipEntity__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))p_method)(
            v13,
            v9,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
  }
  return v18 - 1;
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

  if ( (byte_4BFD97B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__, entity);
    byte_4BFD97B = 1;
  }
  PK = (Il2CppObject *)FriendshipEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_FriendshipMaster__FriendshipEntity__string__TryGetEntity__);
}