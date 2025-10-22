void ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C57684 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_18008/*"class_b_"*/);
    sub_1C3E564(&StringLiteral_18012/*"class_g_"*/);
    sub_1C3E564(&StringLiteral_18013/*"class_n_"*/);
    sub_1C3E564(&StringLiteral_18014/*"class_s_"*/);
    byte_4C57684 = 1;
  }
  v3 = sub_1C3E60C(string___TypeInfo, 8);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_13;
  v8 = StringLiteral_18013/*"class_n_"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_18013/*"class_n_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_13;
  v11 = StringLiteral_18008/*"class_b_"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_18008/*"class_b_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), v11, v9, v10);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_13;
  v14 = StringLiteral_18014/*"class_s_"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_18014/*"class_s_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), v14, v12, v13);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_13;
  v17 = StringLiteral_18012/*"class_g_"*/;
  *(_QWORD *)(v7 + 56) = StringLiteral_18012/*"class_g_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 56), v17, v15, v16);
  if ( *(_DWORD *)(v7 + 24) <= 4u )
    goto LABEL_13;
  v20 = StringLiteral_18012/*"class_g_"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_18012/*"class_g_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 64), v20, v18, v19);
  if ( *(_DWORD *)(v7 + 24) <= 5u
    || (v23 = StringLiteral_18012/*"class_g_"*/,
        *(_QWORD *)(v7 + 72) = StringLiteral_18012/*"class_g_"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v7 + 72), v23, v21, v22),
        *(_DWORD *)(v7 + 24) <= 6u)
    || (v26 = StringLiteral_18013/*"class_n_"*/,
        *(_QWORD *)(v7 + 80) = StringLiteral_18013/*"class_n_"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v7 + 80), v26, v24, v25),
        *(_DWORD *)(v7 + 24) <= 7u) )
  {
LABEL_13:
    sub_1C3E7C8(v3, v4);
  }
  v29 = StringLiteral_18013/*"class_n_"*/;
  *(_QWORD *)(v7 + 88) = StringLiteral_18013/*"class_n_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 88), v29, v27, v28);
  this->fields.frameCardFileList = (struct System_String_array *)v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, v7, v30, v31);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantExceedEntity__CreatePK(int32_t rarity, int32_t exceedCount, const MethodInfo *method)
{
  if ( (byte_4C57683 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C57683 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_30F7BF8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantExceedEntity__CreatePrimaryKey(ServantExceedEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExceedEntity__CreatePK(this->fields.rarity, this->fields.exceedCount, v2);
}


int32_t ServantExceedEntity__GetFrameType(ServantExceedEntity_o *this, bool isGrandServant, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 40;
  if ( isGrandServant )
    v3 = 56;
  return *(_DWORD *)((char *)&this->klass + v3);
}


int32_t ServantExceedEntity__GetRarityIcon(ServantExceedEntity_o *this, bool isGrandServant, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 44;
  if ( isGrandServant )
    v3 = 60;
  return *(_DWORD *)((char *)&this->klass + v3);
}


System_String_o *ServantExceedEntity__getFrameCardPrefix(ServantExceedEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *frameCardFileList; // x8
  __int64 frameType; // x9

  frameCardFileList = this->fields.frameCardFileList;
  if ( !frameCardFileList )
    sub_1C3E7C0(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= LODWORD(frameCardFileList->max_length) )
    sub_1C3E7C8(this, method);
  return frameCardFileList->m_Items[frameType];
}