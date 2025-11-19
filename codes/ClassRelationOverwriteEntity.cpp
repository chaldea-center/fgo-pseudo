void ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB604E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB604E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4CB604C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4CB604C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_3139E40 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x21
  int32_t type; // w9
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x20
  __int64 v26; // x0
  System_Enum_o v27; // [xsp+8h] [xbp-58h] BYREF
  int32_t v28; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4CB604D & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_1C6BA08(&StringLiteral_20323/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_4CB604D = 1;
  }
  v3 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 6);
  id = this->fields.id;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  v8 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C6BB44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_23;
  v3->m_Items[0] = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v8, v6, v7);
  atkSide = this->fields.atkSide;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide);
  v11 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C6BB44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_23;
  v3->m_Items[1] = v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->m_Items[1], (int32_t)v11, v9, v10);
  atkClass = this->fields.atkClass;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass);
  v14 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C6BB44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_23;
  v3->m_Items[2] = v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->m_Items[2], (int32_t)v14, v12, v13);
  defClass = this->fields.defClass;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass);
  v17 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C6BB44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 3 )
    goto LABEL_23;
  v3->m_Items[3] = v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->m_Items[3], (int32_t)v17, v15, v16);
  damageRate = this->fields.damageRate;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate);
  v20 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C6BB44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 4 )
    goto LABEL_23;
  v3->m_Items[4] = v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->m_Items[4], (int32_t)v20, v18, v19);
  type = this->fields.type;
  v27.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v27.monitor = (void *)-1LL;
  v28 = type;
  v4 = System_Enum__ToString(&v27, 0);
  v24 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_1C6BB44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_24:
      v26 = sub_1C6BC84(v4);
      sub_1C6BB30(v26, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 5 )
LABEL_23:
    sub_1C6BC68(v4);
  v3->m_Items[5] = v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->m_Items[5], (int32_t)v24, v22, v23);
  return System_String__Format_64008236((System_String_o *)StringLiteral_20323/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0);
}


float ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}