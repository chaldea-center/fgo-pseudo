void ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27055 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27055 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4C27053 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4C27053 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_30CD428 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x21
  int32_t type; // w9
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x20
  __int64 v36; // x0
  System_Enum_o v37; // [xsp+8h] [xbp-58h] BYREF
  int32_t v38; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4C27054 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_1C2D490(&StringLiteral_20244/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_4C27054 = 1;
  }
  v3 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 6);
  id = this->fields.id;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id, v4, v5, v6);
  if ( !v3 )
    sub_1C2D6EC(v7, v8);
  v11 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C2D5CC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_23;
  v3->m_Items[0] = v11;
  sub_1C2D434((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v11, v9, v10);
  atkSide = this->fields.atkSide;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide, v12, v13, v14);
  v16 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C2D5CC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_23;
  v3->m_Items[1] = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->m_Items[1], (int32_t)v16, v9, v15);
  atkClass = this->fields.atkClass;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass, v17, v18, v19);
  v21 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C2D5CC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_23;
  v3->m_Items[2] = v21;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->m_Items[2], (int32_t)v21, v9, v20);
  defClass = this->fields.defClass;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass, v22, v23, v24);
  v26 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C2D5CC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 3 )
    goto LABEL_23;
  v3->m_Items[3] = v26;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->m_Items[3], (int32_t)v26, v9, v25);
  damageRate = this->fields.damageRate;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate, v27, v28, v29);
  v31 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C2D5CC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 4 )
    goto LABEL_23;
  v3->m_Items[4] = v31;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->m_Items[4], (int32_t)v31, v9, v30);
  type = this->fields.type;
  v37.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v37.monitor = (void *)-1LL;
  v38 = type;
  v7 = System_Enum__ToString(&v37, 0);
  v34 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C2D5CC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_24:
      v36 = sub_1C2D710(v7);
      sub_1C2D5B8(v36, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 5 )
LABEL_23:
    sub_1C2D6F4(v7, v8, v9);
  v3->m_Items[5] = v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->m_Items[5], (int32_t)v34, v9, v33);
  return System_String__Format_63499292((System_String_o *)StringLiteral_20244/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0);
}


float ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}