void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44808 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44808 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4B44806 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&atkSide);
    byte_4B44806 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_3032434 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePrimaryKey(
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


System_String_o *__fastcall ClassRelationOverwriteEntity__getFieldsLogString(
        ClassRelationOverwriteEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Object_array *v6; // x19
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_String_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x21
  int32_t type; // w9
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x20
  __int64 v39; // x0
  System_Enum_o v40; // [xsp+8h] [xbp-58h] BYREF
  int32_t v41; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4B44807 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&object___TypeInfo, v3);
    sub_1BDB878(&ClassRelationOverwriteEntity_TYPE_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_20276/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v5);
    byte_4B44807 = 1;
  }
  v6 = (System_Object_array *)sub_1BDB920(object___TypeInfo, 6LL);
  id = this->fields.id;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id, v7, v8, v9);
  if ( !v6 )
    sub_1BDBAD4(v10, v11);
  v14 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BDB9B4(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( !v6->max_length )
    goto LABEL_23;
  v6->m_Items[0] = v14;
  sub_1BDB81C((CGThumbnailListItem_o *)v6->m_Items, (int32_t)v14, v12, v13);
  atkSide = this->fields.atkSide;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide, v15, v16, v17);
  v19 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BDB9B4(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_23;
  v6->m_Items[1] = v19;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->m_Items[1], (int32_t)v19, v12, v18);
  atkClass = this->fields.atkClass;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass, v20, v21, v22);
  v24 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BDB9B4(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_23;
  v6->m_Items[2] = v24;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->m_Items[2], (int32_t)v24, v12, v23);
  defClass = this->fields.defClass;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass, v25, v26, v27);
  v29 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BDB9B4(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_23;
  v6->m_Items[3] = v29;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->m_Items[3], (int32_t)v29, v12, v28);
  damageRate = this->fields.damageRate;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate, v30, v31, v32);
  v34 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BDB9B4(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 4 )
    goto LABEL_23;
  v6->m_Items[4] = v34;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->m_Items[4], (int32_t)v34, v12, v33);
  type = this->fields.type;
  v40.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v40.monitor = (void *)-1LL;
  v41 = type;
  v10 = System_Enum__ToString(&v40, 0LL);
  v37 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BDB9B4(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_24:
      v39 = sub_1BDBAF8(v10);
      sub_1BDB9A0(v39, 0LL);
    }
  }
  if ( v6->max_length <= 5 )
LABEL_23:
    sub_1BDBADC(v10, v11, v12);
  v6->m_Items[5] = v37;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->m_Items[5], (int32_t)v37, v12, v36);
  return System_String__Format_62613688((System_String_o *)StringLiteral_20276/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v6, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}