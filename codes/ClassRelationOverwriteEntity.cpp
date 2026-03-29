void ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3077F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D3077F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4D3077D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4D3077D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_31A3514 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *ClassRelationOverwriteEntity__CreatePrimaryKey(
        ClassRelationOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ClassRelationOverwriteEntity__CreatePK(
           this->fields.id,
           this->fields.atkSide,
           this->fields.atkClass,
           this->fields.defClass,
           v2);
}


System_String_o *ClassRelationOverwriteEntity__getFieldsLogString(
        ClassRelationOverwriteEntity_o *this,
        const MethodInfo *method)
{
  System_Object_array *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppObject *v40; // x21
  int32_t type; // w9
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject *v48; // x20
  __int64 v50; // x0
  System_Enum_o v51; // [xsp+8h] [xbp-58h] BYREF
  int32_t v52; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4D3077E & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_1C93AD4(&StringLiteral_20484/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_4D3077E = 1;
  }
  v3 = (System_Object_array *)sub_1C93B7C(object___TypeInfo, 6);
  id = this->fields.id;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  if ( !v3 )
    sub_1C93D2C(v4, v5);
  v12 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_23;
  v3->m_Items[0] = v12;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v3->m_Items, (int32_t)v12, v6, v7, v8, v9, v10, v11);
  atkSide = this->fields.atkSide;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide);
  v19 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_23;
  v3->m_Items[1] = v19;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[1], (int32_t)v19, v13, v14, v15, v16, v17, v18);
  atkClass = this->fields.atkClass;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass);
  v26 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_23;
  v3->m_Items[2] = v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[2], (int32_t)v26, v20, v21, v22, v23, v24, v25);
  defClass = this->fields.defClass;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass);
  v33 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 3 )
    goto LABEL_23;
  v3->m_Items[3] = v33;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[3], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  damageRate = this->fields.damageRate;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate);
  v40 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 4 )
    goto LABEL_23;
  v3->m_Items[4] = v40;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[4], (int32_t)v40, v34, v35, v36, v37, v38, v39);
  type = this->fields.type;
  v51.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v51.monitor = (void *)-1LL;
  v52 = type;
  v4 = System_Enum__ToString(&v51, 0);
  v48 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_24:
      v50 = sub_1C93D50(v4);
      sub_1C93BFC(v50, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 5 )
LABEL_23:
    sub_1C93D34(v4);
  v3->m_Items[5] = v48;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[5], (int32_t)v48, v42, v43, v44, v45, v46, v47);
  return System_String__Format_64467168((System_String_o *)StringLiteral_20484/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0);
}


float ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}