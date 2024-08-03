void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC1BC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC1BC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_49FC1BA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&atkSide);
    byte_49FC1BA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_2E37F60 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x21
  int32_t type; // w9
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x20
  __int64 v29; // x0
  System_Enum_o v30; // [xsp+8h] [xbp-58h] BYREF
  int32_t v31; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_49FC1BB & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&object___TypeInfo, v3);
    sub_1B640C8(&ClassRelationOverwriteEntity_TYPE_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_20125/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v5);
    byte_49FC1BB = 1;
  }
  v6 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
  id = this->fields.id;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  if ( !v6 )
    sub_1B64324(v7);
  v11 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B64204(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( !v6->max_length )
    goto LABEL_23;
  v6->m_Items[0] = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v6->m_Items, (int32_t)v11, v9, v10);
  atkSide = this->fields.atkSide;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide);
  v14 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B64204(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_23;
  v6->m_Items[1] = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->m_Items[1], (int32_t)v14, v12, v13);
  atkClass = this->fields.atkClass;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass);
  v17 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B64204(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_23;
  v6->m_Items[2] = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->m_Items[2], (int32_t)v17, v15, v16);
  defClass = this->fields.defClass;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass);
  v20 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B64204(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_23;
  v6->m_Items[3] = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->m_Items[3], (int32_t)v20, v18, v19);
  damageRate = this->fields.damageRate;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate);
  v23 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B64204(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 4 )
    goto LABEL_23;
  v6->m_Items[4] = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->m_Items[4], (int32_t)v23, v21, v22);
  type = this->fields.type;
  v30.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v30.monitor = (void *)-1LL;
  v31 = type;
  v7 = System_Enum__ToString(&v30, 0LL);
  v27 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B64204(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_24:
      v29 = sub_1B64348(v7);
      sub_1B641F0(v29, 0LL);
    }
  }
  if ( v6->max_length <= 5 )
LABEL_23:
    sub_1B6432C(v7, v8);
  v6->m_Items[5] = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->m_Items[5], (int32_t)v27, v25, v26);
  return System_String__Format_61389904((System_String_o *)StringLiteral_20125/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v6, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}