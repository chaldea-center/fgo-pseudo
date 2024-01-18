void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_array *v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x0
  __int64 v75; // x0

  if ( (byte_418AB57 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    sub_B2C35C(&string___TypeInfo, v3);
    sub_B2C35C(&StringLiteral_17451/*"class_b_"*/, v4);
    sub_B2C35C(&StringLiteral_17454/*"class_g_"*/, v5);
    sub_B2C35C(&StringLiteral_17455/*"class_n_"*/, v6);
    sub_B2C35C(&StringLiteral_17456/*"class_s_"*/, v7);
    byte_418AB57 = 1;
  }
  v8 = sub_B2C374(string___TypeInfo, 8LL);
  if ( !v8 )
    sub_B2C434(0LL, v9);
  v16 = (struct System_String_array *)v8;
  v17 = StringLiteral_17455/*"class_n_"*/;
  if ( StringLiteral_17455/*"class_n_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_17455/*"class_n_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v18 = (System_Int32_array **)StringLiteral_17455/*"class_n_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
    goto LABEL_45;
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
  v17 = StringLiteral_17451/*"class_b_"*/;
  if ( StringLiteral_17451/*"class_b_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_17451/*"class_b_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v25 = (System_Int32_array **)StringLiteral_17451/*"class_b_"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_45;
  v16->m_Items[1] = (System_String_o *)v25;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  v17 = StringLiteral_17456/*"class_s_"*/;
  if ( StringLiteral_17456/*"class_s_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_17456/*"class_s_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v32 = (System_Int32_array **)StringLiteral_17456/*"class_s_"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_45;
  v16->m_Items[2] = (System_String_o *)v32;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  v17 = StringLiteral_17454/*"class_g_"*/;
  if ( StringLiteral_17454/*"class_g_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_17454/*"class_g_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v39 = (System_Int32_array **)StringLiteral_17454/*"class_g_"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v16->max_length <= 3 )
    goto LABEL_45;
  v16->m_Items[3] = (System_String_o *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v17 = StringLiteral_17454/*"class_g_"*/;
  if ( StringLiteral_17454/*"class_g_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_17454/*"class_g_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v46 = (System_Int32_array **)StringLiteral_17454/*"class_g_"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( v16->max_length <= 4 )
    goto LABEL_45;
  v16->m_Items[4] = (System_String_o *)v46;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v17 = StringLiteral_17454/*"class_g_"*/;
  if ( StringLiteral_17454/*"class_g_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_17454/*"class_g_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v53 = (System_Int32_array **)StringLiteral_17454/*"class_g_"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( v16->max_length <= 5 )
    goto LABEL_45;
  v16->m_Items[5] = (System_String_o *)v53;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[5], v53, v47, v48, v49, v50, v51, v52);
  v17 = StringLiteral_17455/*"class_n_"*/;
  if ( StringLiteral_17455/*"class_n_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_17455/*"class_n_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v60 = (System_Int32_array **)StringLiteral_17455/*"class_n_"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v16->max_length <= 6 )
    goto LABEL_45;
  v16->m_Items[6] = (System_String_o *)v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[6], v60, v54, v55, v56, v57, v58, v59);
  v17 = StringLiteral_17455/*"class_n_"*/;
  if ( StringLiteral_17455/*"class_n_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_17455/*"class_n_"*/, v16->obj.klass->_1.element_class);
    if ( v17 )
    {
      v67 = (System_Int32_array **)StringLiteral_17455/*"class_n_"*/;
      goto LABEL_43;
    }
LABEL_46:
    v75 = sub_B2C454(v17);
    sub_B2C400(v75, 0LL);
  }
  v67 = 0LL;
LABEL_43:
  if ( v16->max_length <= 7 )
  {
LABEL_45:
    v74 = sub_B2C460(v17);
    sub_B2C400(v74, 0LL);
  }
  v16->m_Items[7] = (System_String_o *)v67;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[7], v67, v61, v62, v63, v64, v65, v66);
  this->fields.frameCardFileList = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v68, v69, v70, v71, v72, v73);
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_418AB56 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&exceedCount);
    byte_418AB56 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_B2C434(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  return frameCardFileList->m_Items[frameType];
}