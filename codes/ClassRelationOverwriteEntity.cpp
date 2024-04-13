void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA8EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA8EB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_42EA8E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, atkSide, atkClass, *(_QWORD *)&defClass);
    byte_42EA8E9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Object_array *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x21
  __int64 v52; // x21
  System_Int32_array **v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v61; // x0
  __int64 v62; // x0
  int32_t damageRate; // [xsp+8h] [xbp-38h] BYREF
  int32_t defClass; // [xsp+Ch] [xbp-34h] BYREF
  int32_t atkClass; // [xsp+10h] [xbp-30h] BYREF
  int32_t atkSide; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t id; // [xsp+18h] [xbp-28h] BYREF
  int32_t type; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42EA8EA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&object___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ClassRelationOverwriteEntity_TYPE_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19630/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v11, v12, v13);
    byte_42EA8EA = 1;
  }
  type = 0;
  v14 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
  id = this->fields.id;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &id);
  if ( !v14 )
    goto LABEL_26;
  v23 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B5D684(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_25;
  }
  if ( !v14->max_length )
    goto LABEL_24;
  v14->m_Items[0] = (Il2CppObject *)v23;
  sub_B5D560((BattleServantConfConponent_o *)v14->m_Items, v23, v17, v18, v19, v20, v21, v22);
  atkSide = this->fields.atkSide;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &atkSide);
  v30 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B5D684(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_25;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_24;
  v14->m_Items[1] = (Il2CppObject *)v30;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
  atkClass = this->fields.atkClass;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &atkClass);
  v37 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B5D684(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_25;
  }
  if ( v14->max_length <= 2 )
    goto LABEL_24;
  v14->m_Items[2] = (Il2CppObject *)v37;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
  defClass = this->fields.defClass;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &defClass);
  v44 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B5D684(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_25;
  }
  if ( v14->max_length <= 3 )
    goto LABEL_24;
  v14->m_Items[3] = (Il2CppObject *)v44;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
  damageRate = this->fields.damageRate;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &damageRate);
  v51 = (System_Int32_array **)v15;
  if ( v15 )
  {
    v15 = sub_B5D684(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_25:
      v62 = sub_B5D6BC(v15);
      sub_B5D668(v62, 0LL);
    }
  }
  if ( v14->max_length <= 4 )
    goto LABEL_24;
  v14->m_Items[4] = (Il2CppObject *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
  type = this->fields.type;
  v15 = j_il2cpp_value_box_0(ClassRelationOverwriteEntity_TYPE_TypeInfo, &type);
  if ( !v15 )
LABEL_26:
    sub_B5D69C(v15, v16);
  v52 = v15;
  v53 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 360LL))(
                                 v15,
                                 *(_QWORD *)(*(_QWORD *)v15 + 368LL));
  v15 = j_il2cpp_object_unbox_0(v52);
  type = *(_DWORD *)v15;
  if ( v53 )
  {
    v15 = sub_B5D684(v53, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_25;
  }
  if ( v14->max_length <= 5 )
  {
LABEL_24:
    v61 = sub_B5D6C8(v15);
    sub_B5D668(v61, 0LL);
  }
  v14->m_Items[5] = (Il2CppObject *)v53;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[5], v53, v54, v55, v56, v57, v58, v59);
  return System_String__Format_44656512((System_String_o *)StringLiteral_19630/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v14, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}