void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41887EC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41887EC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_41887EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&atkSide);
    byte_41887EA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_1733078 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x21
  __int64 v44; // x21
  System_Int32_array **v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v53; // x0
  __int64 v54; // x0
  int32_t damageRate; // [xsp+8h] [xbp-38h] BYREF
  int32_t defClass; // [xsp+Ch] [xbp-34h] BYREF
  int32_t atkClass; // [xsp+10h] [xbp-30h] BYREF
  int32_t atkSide; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t id; // [xsp+18h] [xbp-28h] BYREF
  int32_t type; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_41887EB & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&object___TypeInfo, v3);
    sub_B2C35C(&ClassRelationOverwriteEntity_TYPE_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_19386/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v5);
    byte_41887EB = 1;
  }
  type = 0;
  v6 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
  id = this->fields.id;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &id);
  if ( !v6 )
    goto LABEL_26;
  v15 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B2C41C(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( !v6->max_length )
    goto LABEL_24;
  v6->m_Items[0] = (Il2CppObject *)v15;
  sub_B2C2F8((BattleServantConfConponent_o *)v6->m_Items, v15, v9, v10, v11, v12, v13, v14);
  atkSide = this->fields.atkSide;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &atkSide);
  v22 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B2C41C(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_24;
  v6->m_Items[1] = (Il2CppObject *)v22;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  atkClass = this->fields.atkClass;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &atkClass);
  v29 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B2C41C(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_24;
  v6->m_Items[2] = (Il2CppObject *)v29;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  defClass = this->fields.defClass;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &defClass);
  v36 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B2C41C(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_24;
  v6->m_Items[3] = (Il2CppObject *)v36;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  damageRate = this->fields.damageRate;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &damageRate);
  v43 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B2C41C(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_25:
      v54 = sub_B2C454(v7);
      sub_B2C400(v54, 0LL);
    }
  }
  if ( v6->max_length <= 4 )
    goto LABEL_24;
  v6->m_Items[4] = (Il2CppObject *)v43;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  type = this->fields.type;
  v7 = j_il2cpp_value_box_0(ClassRelationOverwriteEntity_TYPE_TypeInfo, &type);
  if ( !v7 )
LABEL_26:
    sub_B2C434(v7, v8);
  v44 = v7;
  v45 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 360LL))(
                                 v7,
                                 *(_QWORD *)(*(_QWORD *)v7 + 368LL));
  v7 = j_il2cpp_object_unbox_0(v44);
  type = *(_DWORD *)v7;
  if ( v45 )
  {
    v7 = sub_B2C41C(v45, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( v6->max_length <= 5 )
  {
LABEL_24:
    v53 = sub_B2C460(v7);
    sub_B2C400(v53, 0LL);
  }
  v6->m_Items[5] = (Il2CppObject *)v45;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[5], v45, v46, v47, v48, v49, v50, v51);
  return System_String__Format_44384256((System_String_o *)StringLiteral_19386/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v6, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}