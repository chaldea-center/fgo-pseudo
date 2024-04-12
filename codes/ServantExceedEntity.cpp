void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *v11; // x20
  __int64 v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x0
  __int64 v70; // x0

  if ( (byte_42B2ED7 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_17576/*"class_b_"*/);
    sub_B52984(&StringLiteral_17579/*"class_g_"*/);
    sub_B52984(&StringLiteral_17580/*"class_n_"*/);
    sub_B52984(&StringLiteral_17581/*"class_s_"*/);
    byte_42B2ED7 = 1;
  }
  v3 = sub_B5299C(string___TypeInfo, 8LL);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  v11 = (struct System_String_array *)v3;
  v12 = StringLiteral_17580/*"class_n_"*/;
  if ( StringLiteral_17580/*"class_n_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17580/*"class_n_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_46;
    v13 = (System_Int32_array **)StringLiteral_17580/*"class_n_"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
    goto LABEL_45;
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  v12 = StringLiteral_17576/*"class_b_"*/;
  if ( StringLiteral_17576/*"class_b_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17576/*"class_b_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_46;
    v20 = (System_Int32_array **)StringLiteral_17576/*"class_b_"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_45;
  v11->m_Items[1] = (System_String_o *)v20;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[1], v20, v14, v15, v16, v17, v18, v19);
  v12 = StringLiteral_17581/*"class_s_"*/;
  if ( StringLiteral_17581/*"class_s_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17581/*"class_s_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_46;
    v27 = (System_Int32_array **)StringLiteral_17581/*"class_s_"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_45;
  v11->m_Items[2] = (System_String_o *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  v12 = StringLiteral_17579/*"class_g_"*/;
  if ( StringLiteral_17579/*"class_g_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17579/*"class_g_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_46;
    v34 = (System_Int32_array **)StringLiteral_17579/*"class_g_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v11->max_length <= 3 )
    goto LABEL_45;
  v11->m_Items[3] = (System_String_o *)v34;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[3], v34, v28, v29, v30, v31, v32, v33);
  v12 = StringLiteral_17579/*"class_g_"*/;
  if ( StringLiteral_17579/*"class_g_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17579/*"class_g_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_46;
    v41 = (System_Int32_array **)StringLiteral_17579/*"class_g_"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v11->max_length <= 4 )
    goto LABEL_45;
  v11->m_Items[4] = (System_String_o *)v41;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[4], v41, v35, v36, v37, v38, v39, v40);
  v12 = StringLiteral_17579/*"class_g_"*/;
  if ( StringLiteral_17579/*"class_g_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17579/*"class_g_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_46;
    v48 = (System_Int32_array **)StringLiteral_17579/*"class_g_"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( v11->max_length <= 5 )
    goto LABEL_45;
  v11->m_Items[5] = (System_String_o *)v48;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[5], v48, v42, v43, v44, v45, v46, v47);
  v12 = StringLiteral_17580/*"class_n_"*/;
  if ( StringLiteral_17580/*"class_n_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17580/*"class_n_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_46;
    v55 = (System_Int32_array **)StringLiteral_17580/*"class_n_"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v11->max_length <= 6 )
    goto LABEL_45;
  v11->m_Items[6] = (System_String_o *)v55;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[6], v55, v49, v50, v51, v52, v53, v54);
  v12 = StringLiteral_17580/*"class_n_"*/;
  if ( StringLiteral_17580/*"class_n_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17580/*"class_n_"*/, v11->obj.klass->_1.element_class);
    if ( v12 )
    {
      v62 = (System_Int32_array **)StringLiteral_17580/*"class_n_"*/;
      goto LABEL_43;
    }
LABEL_46:
    v70 = sub_B52A7C(v12);
    sub_B52A28(v70, 0LL);
  }
  v62 = 0LL;
LABEL_43:
  if ( v11->max_length <= 7 )
  {
LABEL_45:
    v69 = sub_B52A88(v12);
    sub_B52A28(v69, 0LL);
  }
  v11->m_Items[7] = (System_String_o *)v62;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[7], v62, v56, v57, v58, v59, v60, v61);
  this->fields.frameCardFileList = v11;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v63, v64, v65, v66, v67, v68);
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_42B2ED6 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2ED6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_B52A5C(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  return frameCardFileList->m_Items[frameType];
}