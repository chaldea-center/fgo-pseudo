void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F99D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F99D5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_40F99D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&atkSide);
    byte_40F99D3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_18C2910 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Object_array *v7; // x19
  int *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x21
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x21
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x21
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x21
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  __int64 v41; // x0
  __int64 v42; // x21
  System_Int32_array **v43; // x20
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int32_t damageRate; // [xsp+8h] [xbp-38h] BYREF
  int32_t defClass; // [xsp+Ch] [xbp-34h] BYREF
  int32_t atkClass; // [xsp+10h] [xbp-30h] BYREF
  int32_t atkSide; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t id; // [xsp+18h] [xbp-28h] BYREF
  int32_t type; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40F99D4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&object___TypeInfo, v4);
    sub_B16FFC(&ClassRelationOverwriteEntity_TYPE_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_19312, v6);
    byte_40F99D4 = 1;
  }
  type = 0;
  v7 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v2);
  id = this->fields.id;
  v8 = (int *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  if ( !v7 )
    goto LABEL_26;
  v16 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (int *)sub_B170BC(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( !v7->max_length )
    goto LABEL_24;
  v7->m_Items[0] = (Il2CppObject *)v16;
  sub_B16F98((BattleServantConfConponent_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
  atkSide = this->fields.atkSide;
  v8 = (int *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide);
  v22 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (int *)sub_B170BC(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_24;
  v7->m_Items[1] = (Il2CppObject *)v22;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[1], v22, v10, v17, v18, v19, v20, v21);
  atkClass = this->fields.atkClass;
  v8 = (int *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass);
  v28 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (int *)sub_B170BC(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_24;
  v7->m_Items[2] = (Il2CppObject *)v28;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[2], v28, v10, v23, v24, v25, v26, v27);
  defClass = this->fields.defClass;
  v8 = (int *)j_il2cpp_value_box_0(int_TypeInfo, &defClass);
  v34 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (int *)sub_B170BC(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_24;
  v7->m_Items[3] = (Il2CppObject *)v34;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[3], v34, v10, v29, v30, v31, v32, v33);
  damageRate = this->fields.damageRate;
  v8 = (int *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate);
  v40 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (int *)sub_B170BC(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_25:
      sub_B170F4(v8);
      sub_B170A0();
    }
  }
  if ( v7->max_length <= 4 )
    goto LABEL_24;
  v7->m_Items[4] = (Il2CppObject *)v40;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[4], v40, v10, v35, v36, v37, v38, v39);
  type = this->fields.type;
  v41 = j_il2cpp_value_box_0(ClassRelationOverwriteEntity_TYPE_TypeInfo, &type);
  if ( !v41 )
LABEL_26:
    sub_B170D4();
  v42 = v41;
  v43 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v41 + 360LL))(
                                 v41,
                                 *(_QWORD *)(*(_QWORD *)v41 + 368LL));
  v8 = (int *)j_il2cpp_object_unbox_0(v42);
  type = *v8;
  if ( v43 )
  {
    v8 = (int *)sub_B170BC(v43, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v7->max_length <= 5 )
  {
LABEL_24:
    sub_B17100(v8, v9, v10);
    sub_B170A0();
  }
  v7->m_Items[5] = (Il2CppObject *)v43;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[5], v43, v10, v44, v45, v46, v47, v48);
  return System_String__Format_43822456((System_String_o *)StringLiteral_19312, v7, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}