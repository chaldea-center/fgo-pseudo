void WarBoardSquareEntity___ctor(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971AB0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971AB0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardSquareEntity__CreatePK(int32_t warBoardId, int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_5971AAF & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5971AAF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warBoardId,
           squareIndex,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardSquareEntity__CreatePrimaryKey(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardSquareEntity__CreatePK(this->fields.warBoardId, this->fields.squareIndex, v2);
}


UnityEngine_Vector3_o WarBoardSquareEntity__GetPosition(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  const MethodInfo_45E9150 *v2; // x2
  struct System_Nullable_Vector3__o v7; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o Value; // 0:kr00_12.12
  System_Nullable_Vector3__o v9; // 0:x0.16
  System_Nullable_Vector3__o v10; // 0:x0.16
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971AAE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_Value__);
    byte_5971AAE = 1;
  }
  if ( !this->fields.position.fields.hasValue )
  {
    v11.fields.z = 0.0;
    *(_QWORD *)&v9.fields.hasValue = &v7;
    v11.fields.x = (float)this->fields.positionX;
    v11.fields.y = (float)-this->fields.positionY;
    v7 = (struct System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v9.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v9, v11, v2);
    this->fields.position = v7;
  }
  *(_QWORD *)&v10.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
  *(_QWORD *)&v10.fields.hasValue = &this->fields;
  Value = System_Nullable_Vector3___get_Value(v10, (const MethodInfo_45E916C *)v2);
  result.fields.x = Value.fields.x;
  result.fields.y = Value.fields.y;
  result.fields.z = Value.fields.z;
  return result;
}