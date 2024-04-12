void __fastcall WarBoardSquareEntity___ctor(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2259 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2259 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardSquareEntity__CreatePK(
        int32_t warBoardId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  if ( (byte_42B2258 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2258 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warBoardId,
           squareIndex,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardSquareEntity__CreatePrimaryKey(
        WarBoardSquareEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardSquareEntity__CreatePK(this->fields.warBoardId, this->fields.squareIndex, v2);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardSquareEntity__GetPosition(
        WarBoardSquareEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo_2175340 *v2; // x2
  float v4; // s0
  float v5; // s1
  float v6; // s2
  struct System_Nullable_Vector3__o v7; // [xsp+0h] [xbp-20h] BYREF
  System_Nullable_Vector3__o v8; // 0:x0.16
  System_Nullable_Vector3__o v9; // 0:x0.16
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2257 & 1) == 0 )
  {
    sub_B52984(&Method_System_Nullable_Vector3___ctor__);
    sub_B52984(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_B52984(&Method_System_Nullable_Vector3__get_Value__);
    byte_42B2257 = 1;
  }
  if ( !this->fields.position.fields.has_value )
  {
    v10.fields.x = (float)this->fields.positionX;
    v10.fields.y = (float)-this->fields.positionY;
    *(_QWORD *)&v8.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v8.fields.value.fields.x = &v7;
    v10.fields.z = 0.0;
    v7 = (struct System_Nullable_Vector3__o)0LL;
    System_Nullable_Vector3____ctor(v8, v10, v2);
    this->fields.position = v7;
  }
  *(_QWORD *)&v9.fields.value.fields.x = &this->fields;
  *(_QWORD *)&v9.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
  *(UnityEngine_Vector3_o *)&v4 = System_Nullable_Vector3___get_Value(v9, (const MethodInfo_217535C *)v2);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}