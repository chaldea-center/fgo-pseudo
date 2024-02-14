void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42146FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_42146FD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_42146FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&atkSide);
    byte_42146FB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_1713C34 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x21
  __int64 v43; // x21
  System_Int32_array **v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v52; // x0
  __int64 v53; // x0
  int32_t damageRate; // [xsp+8h] [xbp-38h] BYREF
  int32_t defClass; // [xsp+Ch] [xbp-34h] BYREF
  int32_t atkClass; // [xsp+10h] [xbp-30h] BYREF
  int32_t atkSide; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t id; // [xsp+18h] [xbp-28h] BYREF
  int32_t type; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42146FC & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&object___TypeInfo, v3);
    sub_B0D8A4(&ClassRelationOverwriteEntity_TYPE_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_19447/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v5);
    byte_42146FC = 1;
  }
  type = 0;
  v6 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
  id = this->fields.id;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &id);
  if ( !v6 )
    goto LABEL_26;
  v14 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B0D964(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( !v6->max_length )
    goto LABEL_24;
  v6->m_Items[0] = (Il2CppObject *)v14;
  sub_B0D840((BattleServantConfConponent_o *)v6->m_Items, v14, v8, v9, v10, v11, v12, v13);
  atkSide = this->fields.atkSide;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &atkSide);
  v21 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B0D964(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_24;
  v6->m_Items[1] = (Il2CppObject *)v21;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  atkClass = this->fields.atkClass;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &atkClass);
  v28 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B0D964(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_24;
  v6->m_Items[2] = (Il2CppObject *)v28;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  defClass = this->fields.defClass;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &defClass);
  v35 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B0D964(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_24;
  v6->m_Items[3] = (Il2CppObject *)v35;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
  damageRate = this->fields.damageRate;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &damageRate);
  v42 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = sub_B0D964(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_25:
      v53 = sub_B0D99C(v7);
      sub_B0D948(v53, 0LL);
    }
  }
  if ( v6->max_length <= 4 )
    goto LABEL_24;
  v6->m_Items[4] = (Il2CppObject *)v42;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
  type = this->fields.type;
  v7 = j_il2cpp_value_box_0(ClassRelationOverwriteEntity_TYPE_TypeInfo, &type);
  if ( !v7 )
LABEL_26:
    sub_B0D97C(v7);
  v43 = v7;
  v44 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 360LL))(
                                 v7,
                                 *(_QWORD *)(*(_QWORD *)v7 + 368LL));
  v7 = j_il2cpp_object_unbox_0(v43);
  type = *(_DWORD *)v7;
  if ( v44 )
  {
    v7 = sub_B0D964(v44, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_25;
  }
  if ( v6->max_length <= 5 )
  {
LABEL_24:
    v52 = sub_B0D9A8(v7);
    sub_B0D948(v52, 0LL);
  }
  v6->m_Items[5] = (Il2CppObject *)v44;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[5], v44, v45, v46, v47, v48, v49, v50);
  return System_String__Format_43928628((System_String_o *)StringLiteral_19447/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v6, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}