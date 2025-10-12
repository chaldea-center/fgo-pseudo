void ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3774C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C3774C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4C3774A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4C3774A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_30DBEC8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x21
  int32_t type; // w9
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x20
  __int64 v55; // x0
  System_Enum_o v56; // [xsp+8h] [xbp-58h] BYREF
  int32_t v57; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4C3774B & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_1C32C20(&StringLiteral_20256/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_4C3774B = 1;
  }
  v3 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 6);
  id = this->fields.id;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &id, v4, v5, v6, v7, v8, v9);
  if ( !v3 )
    sub_1C32E7C(v10);
  v13 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C32D5C(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_23;
  v3->m_Items[0] = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v13, v11, v12);
  atkSide = this->fields.atkSide;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &atkSide, v14, v15, v16, v17, v18, v19);
  v22 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C32D5C(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_23;
  v3->m_Items[1] = v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->m_Items[1], (int32_t)v22, v20, v21);
  atkClass = this->fields.atkClass;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &atkClass, v23, v24, v25, v26, v27, v28);
  v31 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C32D5C(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_23;
  v3->m_Items[2] = v31;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->m_Items[2], (int32_t)v31, v29, v30);
  defClass = this->fields.defClass;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &defClass, v32, v33, v34, v35, v36, v37);
  v40 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C32D5C(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 3 )
    goto LABEL_23;
  v3->m_Items[3] = v40;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->m_Items[3], (int32_t)v40, v38, v39);
  damageRate = this->fields.damageRate;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &damageRate, v41, v42, v43, v44, v45, v46);
  v49 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C32D5C(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 4 )
    goto LABEL_23;
  v3->m_Items[4] = v49;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->m_Items[4], (int32_t)v49, v47, v48);
  type = this->fields.type;
  v56.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v56.monitor = (void *)-1LL;
  v57 = type;
  v10 = (__int64)System_Enum__ToString(&v56, 0);
  v53 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C32D5C(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_24:
      v55 = sub_1C32EA0(v10);
      sub_1C32D48(v55, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 5 )
LABEL_23:
    sub_1C32E84(v10);
  v3->m_Items[5] = v53;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->m_Items[5], (int32_t)v53, v51, v52);
  return System_String__Format_63559972((System_String_o *)StringLiteral_20256/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0);
}


float ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}