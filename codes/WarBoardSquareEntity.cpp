void __fastcall WarBoardSquareEntity___ctor(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17222 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B17222 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardSquareEntity__CreatePK(
        int32_t warBoardId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  if ( (byte_4B17221 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&squareIndex, method);
    byte_4B17221 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warBoardId,
           squareIndex,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  const MethodInfo_36C2D28 *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float v8; // s0
  float v9; // s1
  float v10; // s2
  struct System_Nullable_Vector3__o v11; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_Vector3__o v12; // 0:x0.16
  System_Nullable_Vector3__o v13; // 0:x0.16
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17220 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_Value__, v6, v7);
    byte_4B17220 = 1;
  }
  if ( !this->fields.position.fields.hasValue )
  {
    *(_QWORD *)&v12.fields.hasValue = &v11;
    v14.fields.x = (float)this->fields.positionX;
    *(_QWORD *)&v12.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    v14.fields.y = (float)-this->fields.positionY;
    v14.fields.z = 0.0;
    v11 = (struct System_Nullable_Vector3__o)0LL;
    System_Nullable_Vector3____ctor(v12, v14, v2);
    this->fields.position = v11;
  }
  *(_QWORD *)&v13.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
  *(_QWORD *)&v13.fields.hasValue = &this->fields;
  *(UnityEngine_Vector3_o *)&v8 = System_Nullable_Vector3___get_Value(v13, (const MethodInfo_36C2D44 *)v2);
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}