void __fastcall WarBoardSquareEntity___ctor(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FBAEB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FBAEB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardSquareEntity__CreatePK(
        int32_t warBoardId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  if ( (byte_40FBAEA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&squareIndex);
    byte_40FBAEA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warBoardId,
           squareIndex,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  const MethodInfo_29CF778 *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s2
  struct System_Nullable_Vector3__o v9; // [xsp+0h] [xbp-20h] BYREF
  System_Nullable_Vector3__o v10; // 0:x0.16
  System_Nullable_Vector3__o v11; // 0:x0.16
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBAE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, method);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_HasValue__, v4);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_Value__, v5);
    byte_40FBAE9 = 1;
  }
  if ( !this->fields.position.fields.has_value )
  {
    v12.fields.x = (float)this->fields.positionX;
    v12.fields.y = (float)-this->fields.positionY;
    *(_QWORD *)&v10.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v10.fields.value.fields.x = &v9;
    v12.fields.z = 0.0;
    v9 = (struct System_Nullable_Vector3__o)0LL;
    System_Nullable_Vector3____ctor(v10, v12, v2);
    this->fields.position = v9;
  }
  *(_QWORD *)&v11.fields.value.fields.x = &this->fields;
  *(_QWORD *)&v11.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
  *(UnityEngine_Vector3_o *)&v6 = System_Nullable_Vector3___get_Value(v11, (const MethodInfo_29CF794 *)v2);
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}