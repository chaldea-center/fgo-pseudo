void ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56AEC & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C56AEC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4C56AEA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4C56AEA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_30F8548 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x21
  int32_t type; // w9
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x20
  __int64 v56; // x0
  System_Enum_o v57; // [xsp+8h] [xbp-58h] BYREF
  int32_t v58; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4C56AEB & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_1C3E564(&StringLiteral_20277/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_4C56AEB = 1;
  }
  v3 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 6);
  id = this->fields.id;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &id, v4, v5, v6, v7, v8, v9);
  if ( !v3 )
    sub_1C3E7C0(v10, v11);
  v14 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C3E6A0(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_23;
  v3->m_Items[0] = v14;
  sub_1C3E508((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v14, v12, v13);
  atkSide = this->fields.atkSide;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &atkSide, v15, v16, v17, v18, v19, v20);
  v23 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C3E6A0(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_23;
  v3->m_Items[1] = v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->m_Items[1], (int32_t)v23, v21, v22);
  atkClass = this->fields.atkClass;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &atkClass, v24, v25, v26, v27, v28, v29);
  v32 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C3E6A0(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_23;
  v3->m_Items[2] = v32;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->m_Items[2], (int32_t)v32, v30, v31);
  defClass = this->fields.defClass;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &defClass, v33, v34, v35, v36, v37, v38);
  v41 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C3E6A0(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 3 )
    goto LABEL_23;
  v3->m_Items[3] = v41;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->m_Items[3], (int32_t)v41, v39, v40);
  damageRate = this->fields.damageRate;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &damageRate, v42, v43, v44, v45, v46, v47);
  v50 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C3E6A0(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 4 )
    goto LABEL_23;
  v3->m_Items[4] = v50;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->m_Items[4], (int32_t)v50, v48, v49);
  type = this->fields.type;
  v57.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v57.monitor = (void *)-1LL;
  v58 = type;
  v10 = (__int64)System_Enum__ToString(&v57, 0);
  v54 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C3E6A0(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_24:
      v56 = sub_1C3E7E4(v10);
      sub_1C3E68C(v56, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 5 )
LABEL_23:
    sub_1C3E7C8(v10, v11);
  v3->m_Items[5] = v54;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->m_Items[5], (int32_t)v54, v52, v53);
  return System_String__Format_63677896((System_String_o *)StringLiteral_20277/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0);
}


float ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}