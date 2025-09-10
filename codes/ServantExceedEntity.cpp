void ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C27BD4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_17985/*"class_b_"*/);
    sub_1C2D490(&StringLiteral_17989/*"class_g_"*/);
    sub_1C2D490(&StringLiteral_17990/*"class_n_"*/);
    sub_1C2D490(&StringLiteral_17991/*"class_s_"*/);
    byte_4C27BD4 = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 8);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_13;
  v8 = StringLiteral_17990/*"class_n_"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_17990/*"class_n_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_13;
  v10 = StringLiteral_17985/*"class_b_"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_17985/*"class_b_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), v10, v5, v9);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_13;
  v12 = StringLiteral_17991/*"class_s_"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_17991/*"class_s_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), v12, v5, v11);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_13;
  v14 = StringLiteral_17989/*"class_g_"*/;
  *(_QWORD *)(v7 + 56) = StringLiteral_17989/*"class_g_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 56), v14, v5, v13);
  if ( *(_DWORD *)(v7 + 24) <= 4u )
    goto LABEL_13;
  v16 = StringLiteral_17989/*"class_g_"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_17989/*"class_g_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 64), v16, v5, v15);
  if ( *(_DWORD *)(v7 + 24) <= 5u
    || (v18 = StringLiteral_17989/*"class_g_"*/,
        *(_QWORD *)(v7 + 72) = StringLiteral_17989/*"class_g_"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 72), v18, v5, v17),
        *(_DWORD *)(v7 + 24) <= 6u)
    || (v20 = StringLiteral_17990/*"class_n_"*/,
        *(_QWORD *)(v7 + 80) = StringLiteral_17990/*"class_n_"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 80), v20, v5, v19),
        *(_DWORD *)(v7 + 24) <= 7u) )
  {
LABEL_13:
    sub_1C2D6F4(v3, v4, v5);
  }
  v22 = StringLiteral_17990/*"class_n_"*/;
  *(_QWORD *)(v7 + 88) = StringLiteral_17990/*"class_n_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 88), v22, v5, v21);
  this->fields.frameCardFileList = (struct System_String_array *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, v7, v23, v24);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantExceedEntity__CreatePK(int32_t rarity, int32_t exceedCount, const MethodInfo *method)
{
  if ( (byte_4C27BD3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27BD3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v2; // x2
  struct System_String_array *frameCardFileList; // x8
  __int64 frameType; // x9

  frameCardFileList = this->fields.frameCardFileList;
  if ( !frameCardFileList )
    sub_1C2D6EC(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= LODWORD(frameCardFileList->max_length) )
    sub_1C2D6F4(this, method, v2);
  return frameCardFileList->m_Items[frameType];
}