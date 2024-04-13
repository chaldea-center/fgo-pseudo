void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_String_array *v28; // x20
  __int64 v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x0
  __int64 v87; // x0

  if ( (byte_42EB99E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17670/*"class_b_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17673/*"class_g_"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17674/*"class_n_"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17675/*"class_s_"*/, v17, v18, v19);
    byte_42EB99E = 1;
  }
  v20 = sub_B5D5DC(string___TypeInfo, 8LL);
  if ( !v20 )
    sub_B5D69C(0LL, v21);
  v28 = (struct System_String_array *)v20;
  v29 = StringLiteral_17674/*"class_n_"*/;
  if ( StringLiteral_17674/*"class_n_"*/ )
  {
    v29 = sub_B5D684(StringLiteral_17674/*"class_n_"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_46;
    v30 = (System_Int32_array **)StringLiteral_17674/*"class_n_"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_45;
  v28->m_Items[0] = (System_String_o *)v30;
  sub_B5D560((BattleServantConfConponent_o *)v28->m_Items, v30, v22, v23, v24, v25, v26, v27);
  v29 = StringLiteral_17670/*"class_b_"*/;
  if ( StringLiteral_17670/*"class_b_"*/ )
  {
    v29 = sub_B5D684(StringLiteral_17670/*"class_b_"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_46;
    v37 = (System_Int32_array **)StringLiteral_17670/*"class_b_"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_45;
  v28->m_Items[1] = (System_String_o *)v37;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
  v29 = StringLiteral_17675/*"class_s_"*/;
  if ( StringLiteral_17675/*"class_s_"*/ )
  {
    v29 = sub_B5D684(StringLiteral_17675/*"class_s_"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_46;
    v44 = (System_Int32_array **)StringLiteral_17675/*"class_s_"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_45;
  v28->m_Items[2] = (System_String_o *)v44;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
  v29 = StringLiteral_17673/*"class_g_"*/;
  if ( StringLiteral_17673/*"class_g_"*/ )
  {
    v29 = sub_B5D684(StringLiteral_17673/*"class_g_"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_46;
    v51 = (System_Int32_array **)StringLiteral_17673/*"class_g_"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_45;
  v28->m_Items[3] = (System_String_o *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
  v29 = StringLiteral_17673/*"class_g_"*/;
  if ( StringLiteral_17673/*"class_g_"*/ )
  {
    v29 = sub_B5D684(StringLiteral_17673/*"class_g_"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_46;
    v58 = (System_Int32_array **)StringLiteral_17673/*"class_g_"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v28->max_length <= 4 )
    goto LABEL_45;
  v28->m_Items[4] = (System_String_o *)v58;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
  v29 = StringLiteral_17673/*"class_g_"*/;
  if ( StringLiteral_17673/*"class_g_"*/ )
  {
    v29 = sub_B5D684(StringLiteral_17673/*"class_g_"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_46;
    v65 = (System_Int32_array **)StringLiteral_17673/*"class_g_"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( v28->max_length <= 5 )
    goto LABEL_45;
  v28->m_Items[5] = (System_String_o *)v65;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[5], v65, v59, v60, v61, v62, v63, v64);
  v29 = StringLiteral_17674/*"class_n_"*/;
  if ( StringLiteral_17674/*"class_n_"*/ )
  {
    v29 = sub_B5D684(StringLiteral_17674/*"class_n_"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_46;
    v72 = (System_Int32_array **)StringLiteral_17674/*"class_n_"*/;
  }
  else
  {
    v72 = 0LL;
  }
  if ( v28->max_length <= 6 )
    goto LABEL_45;
  v28->m_Items[6] = (System_String_o *)v72;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[6], v72, v66, v67, v68, v69, v70, v71);
  v29 = StringLiteral_17674/*"class_n_"*/;
  if ( StringLiteral_17674/*"class_n_"*/ )
  {
    v29 = sub_B5D684(StringLiteral_17674/*"class_n_"*/, v28->obj.klass->_1.element_class);
    if ( v29 )
    {
      v79 = (System_Int32_array **)StringLiteral_17674/*"class_n_"*/;
      goto LABEL_43;
    }
LABEL_46:
    v87 = sub_B5D6BC(v29);
    sub_B5D668(v87, 0LL);
  }
  v79 = 0LL;
LABEL_43:
  if ( v28->max_length <= 7 )
  {
LABEL_45:
    v86 = sub_B5D6C8(v29);
    sub_B5D668(v86, 0LL);
  }
  v28->m_Items[7] = (System_String_o *)v79;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[7], v79, v73, v74, v75, v76, v77, v78);
  this->fields.frameCardFileList = v28;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v28, v80, v81, v82, v83, v84, v85);
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EB99D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, exceedCount, (_DWORD)method, v3);
    byte_42EB99D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantExceedEntity__CreatePrimaryKey(
        ServantExceedEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExceedEntity__CreatePK(this->fields.rarity, this->fields.exceedCount, v2);
}


System_String_o *__fastcall ServantExceedEntity__getFrameCardPrefix(
        ServantExceedEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *frameCardFileList; // x8
  __int64 frameType; // x9
  __int64 v5; // x0

  frameCardFileList = this->fields.frameCardFileList;
  if ( !frameCardFileList )
    sub_B5D69C(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return frameCardFileList->m_Items[frameType];
}