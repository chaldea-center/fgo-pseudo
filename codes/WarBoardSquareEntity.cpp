void WarBoardSquareEntity___ctor(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C441A3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C441A3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardSquareEntity__CreatePK(int32_t warBoardId, int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4C441A2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C441A2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warBoardId,
           squareIndex,
           (const MethodInfo_30E5DE0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardSquareEntity__CreatePrimaryKey(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardSquareEntity__CreatePK(this->fields.warBoardId, this->fields.squareIndex, v2);
}


UnityEngine_Vector3_o WarBoardSquareEntity__GetPosition(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  const MethodInfo_38CD368 *v2; // x2
  struct System_Nullable_Vector3__o v4; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_Vector3__o v5; // 0:x0.16
  System_Nullable_Vector3__o v6; // 0:x0.16
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C441A1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_Vector3___ctor__);
    sub_1C37058(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_Vector3__get_Value__);
    byte_4C441A1 = 1;
  }
  if ( !this->fields.position.fields.hasValue )
  {
    *(_QWORD *)&v5.fields.hasValue = &v4;
    v7.fields.x = (float)this->fields.positionX;
    *(_QWORD *)&v5.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    v7.fields.y = (float)-this->fields.positionY;
    v7.fields.z = 0.0;
    v4 = (struct System_Nullable_Vector3__o)0LL;
    System_Nullable_Vector3____ctor(v5, v7, v2);
    this->fields.position = v4;
  }
  *(_QWORD *)&v6.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
  *(_QWORD *)&v6.fields.hasValue = &this->fields;
  return System_Nullable_Vector3___get_Value(v6, (const MethodInfo_38CD384 *)v2);
}