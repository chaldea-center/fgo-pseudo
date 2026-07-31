void ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7

  if ( (byte_5939012 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_18746/*"class_b_"*/);
    sub_21FFC50(&StringLiteral_18750/*"class_g_"*/);
    sub_21FFC50(&StringLiteral_18751/*"class_n_"*/);
    sub_21FFC50(&StringLiteral_18752/*"class_s_"*/);
    byte_5939012 = 1;
  }
  v3 = sub_21FFD10(string___TypeInfo, 8);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_13;
  v12 = StringLiteral_18751/*"class_n_"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_18751/*"class_n_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_13;
  v19 = StringLiteral_18746/*"class_b_"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_18746/*"class_b_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_13;
  v26 = StringLiteral_18752/*"class_s_"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_18752/*"class_s_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_13;
  v33 = StringLiteral_18750/*"class_g_"*/;
  *(_QWORD *)(v11 + 56) = StringLiteral_18750/*"class_g_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 56), v33, v27, v28, v29, v30, v31, v32);
  if ( *(_DWORD *)(v11 + 24) <= 4u )
    goto LABEL_13;
  v40 = StringLiteral_18750/*"class_g_"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_18750/*"class_g_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 64), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v11 + 24) <= 5u
    || (v47 = StringLiteral_18750/*"class_g_"*/,
        *(_QWORD *)(v11 + 72) = StringLiteral_18750/*"class_g_"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 72), v47, v41, v42, v43, v44, v45, v46),
        *(_DWORD *)(v11 + 24) <= 6u)
    || (v54 = StringLiteral_18751/*"class_n_"*/,
        *(_QWORD *)(v11 + 80) = StringLiteral_18751/*"class_n_"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 80), v54, v48, v49, v50, v51, v52, v53),
        (*(_DWORD *)(v11 + 24) & 0xFFFFFFF8) == 0) )
  {
LABEL_13:
    sub_21FFED4(v3);
  }
  v61 = StringLiteral_18751/*"class_n_"*/;
  *(_QWORD *)(v11 + 88) = StringLiteral_18751/*"class_n_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 88), v61, v55, v56, v57, v58, v59, v60);
  this->fields.frameCardFileList = (struct System_String_array *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, v11, v62, v63, v64, v65, v66, v67);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantExceedEntity__CreatePK(int32_t rarity, int32_t exceedCount, const MethodInfo *method)
{
  if ( (byte_5939011 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939011 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_21FFECC(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= LODWORD(frameCardFileList->max_length) )
    sub_21FFED4(this);
  return frameCardFileList->m_Items[frameType];
}