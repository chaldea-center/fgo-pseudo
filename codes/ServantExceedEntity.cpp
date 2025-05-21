void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  __int64 v12; // x20
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4B45339 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    sub_1BDB878(&string___TypeInfo, v3);
    sub_1BDB878(&StringLiteral_17997/*"class_b_"*/, v4);
    sub_1BDB878(&StringLiteral_18001/*"class_g_"*/, v5);
    sub_1BDB878(&StringLiteral_18002/*"class_n_"*/, v6);
    sub_1BDB878(&StringLiteral_18003/*"class_s_"*/, v7);
    byte_4B45339 = 1;
  }
  v8 = sub_1BDB920(string___TypeInfo, 8LL);
  if ( !v8 )
    sub_1BDBAD4(0LL, v9);
  v12 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_13;
  v13 = StringLiteral_18002/*"class_n_"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_18002/*"class_n_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 32), v13, v10, v11);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_13;
  v15 = StringLiteral_17997/*"class_b_"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_17997/*"class_b_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 40), v15, v10, v14);
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_13;
  v17 = StringLiteral_18003/*"class_s_"*/;
  *(_QWORD *)(v12 + 48) = StringLiteral_18003/*"class_s_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 48), v17, v10, v16);
  if ( *(_DWORD *)(v12 + 24) <= 3u )
    goto LABEL_13;
  v19 = StringLiteral_18001/*"class_g_"*/;
  *(_QWORD *)(v12 + 56) = StringLiteral_18001/*"class_g_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 56), v19, v10, v18);
  if ( *(_DWORD *)(v12 + 24) <= 4u )
    goto LABEL_13;
  v21 = StringLiteral_18001/*"class_g_"*/;
  *(_QWORD *)(v12 + 64) = StringLiteral_18001/*"class_g_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 64), v21, v10, v20);
  if ( *(_DWORD *)(v12 + 24) <= 5u
    || (v23 = StringLiteral_18001/*"class_g_"*/,
        *(_QWORD *)(v12 + 72) = StringLiteral_18001/*"class_g_"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 72), v23, v10, v22),
        *(_DWORD *)(v12 + 24) <= 6u)
    || (v25 = StringLiteral_18002/*"class_n_"*/,
        *(_QWORD *)(v12 + 80) = StringLiteral_18002/*"class_n_"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 80), v25, v10, v24),
        *(_DWORD *)(v12 + 24) <= 7u) )
  {
LABEL_13:
    sub_1BDBADC(v8, v9, v10);
  }
  v27 = StringLiteral_18002/*"class_n_"*/;
  *(_QWORD *)(v12 + 88) = StringLiteral_18002/*"class_n_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 88), v27, v10, v26);
  this->fields.frameCardFileList = (struct System_String_array *)v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, v12, v28, v29);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_4B45338 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&exceedCount);
    byte_4B45338 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantExceedEntity__CreatePrimaryKey(
        ServantExceedEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExceedEntity__CreatePK(this->fields.rarity, this->fields.exceedCount, v2);
}


int32_t __fastcall ServantExceedEntity__GetFrameType(
        ServantExceedEntity_o *this,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 40LL;
  if ( isGrandServant )
    v3 = 56LL;
  return *(_DWORD *)((char *)&this->klass + v3);
}


int32_t __fastcall ServantExceedEntity__GetRarityIcon(
        ServantExceedEntity_o *this,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 44LL;
  if ( isGrandServant )
    v3 = 60LL;
  return *(_DWORD *)((char *)&this->klass + v3);
}


System_String_o *__fastcall ServantExceedEntity__getFrameCardPrefix(
        ServantExceedEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_array *frameCardFileList; // x8
  __int64 frameType; // x9

  frameCardFileList = this->fields.frameCardFileList;
  if ( !frameCardFileList )
    sub_1BDBAD4(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
    sub_1BDBADC(this, method, v2);
  return frameCardFileList->m_Items[frameType];
}