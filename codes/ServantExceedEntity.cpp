void ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C382D6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_17989/*"class_b_"*/);
    sub_1C32C20(&StringLiteral_17993/*"class_g_"*/);
    sub_1C32C20(&StringLiteral_17994/*"class_n_"*/);
    sub_1C32C20(&StringLiteral_17995/*"class_s_"*/);
    byte_4C382D6 = 1;
  }
  v3 = sub_1C32CC8(string___TypeInfo, 8);
  if ( !v3 )
    sub_1C32E7C(0);
  v6 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_13;
  v7 = StringLiteral_17994/*"class_n_"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_17994/*"class_n_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), v7, v4, v5);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_13;
  v10 = StringLiteral_17989/*"class_b_"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_17989/*"class_b_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 40), v10, v8, v9);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_13;
  v13 = StringLiteral_17995/*"class_s_"*/;
  *(_QWORD *)(v6 + 48) = StringLiteral_17995/*"class_s_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 48), v13, v11, v12);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_13;
  v16 = StringLiteral_17993/*"class_g_"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_17993/*"class_g_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 56), v16, v14, v15);
  if ( *(_DWORD *)(v6 + 24) <= 4u )
    goto LABEL_13;
  v19 = StringLiteral_17993/*"class_g_"*/;
  *(_QWORD *)(v6 + 64) = StringLiteral_17993/*"class_g_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 64), v19, v17, v18);
  if ( *(_DWORD *)(v6 + 24) <= 5u
    || (v22 = StringLiteral_17993/*"class_g_"*/,
        *(_QWORD *)(v6 + 72) = StringLiteral_17993/*"class_g_"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 72), v22, v20, v21),
        *(_DWORD *)(v6 + 24) <= 6u)
    || (v25 = StringLiteral_17994/*"class_n_"*/,
        *(_QWORD *)(v6 + 80) = StringLiteral_17994/*"class_n_"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 80), v25, v23, v24),
        *(_DWORD *)(v6 + 24) <= 7u) )
  {
LABEL_13:
    sub_1C32E84(v3);
  }
  v28 = StringLiteral_17994/*"class_n_"*/;
  *(_QWORD *)(v6 + 88) = StringLiteral_17994/*"class_n_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 88), v28, v26, v27);
  this->fields.frameCardFileList = (struct System_String_array *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, v6, v29, v30);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantExceedEntity__CreatePK(int32_t rarity, int32_t exceedCount, const MethodInfo *method)
{
  if ( (byte_4C382D5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C382D5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_30DB578 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_1C32E7C(this);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= LODWORD(frameCardFileList->max_length) )
    sub_1C32E84(this);
  return frameCardFileList->m_Items[frameType];
}