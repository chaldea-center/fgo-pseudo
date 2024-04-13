void __fastcall WarBoardSquareEntity___ctor(WarBoardSquareEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EABB8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EABB8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardSquareEntity__CreatePK(
        int32_t warBoardId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EABB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, squareIndex, (_DWORD)method, v3);
    byte_42EABB7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warBoardId,
           squareIndex,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  const MethodInfo_234ED3C *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  float v11; // s0
  float v12; // s1
  float v13; // s2
  struct System_Nullable_Vector3__o v14; // [xsp+0h] [xbp-20h] BYREF
  System_Nullable_Vector3__o v15; // 0:x0.16
  System_Nullable_Vector3__o v16; // 0:x0.16
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EABB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_HasValue__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_Value__, v8, v9, v10);
    byte_42EABB6 = 1;
  }
  if ( !this->fields.position.fields.has_value )
  {
    v17.fields.x = (float)this->fields.positionX;
    v17.fields.y = (float)-this->fields.positionY;
    *(_QWORD *)&v15.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v15.fields.value.fields.x = &v14;
    v17.fields.z = 0.0;
    v14 = (struct System_Nullable_Vector3__o)0LL;
    System_Nullable_Vector3____ctor(v15, v17, v2);
    this->fields.position = v14;
  }
  *(_QWORD *)&v16.fields.value.fields.x = &this->fields;
  *(_QWORD *)&v16.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
  *(UnityEngine_Vector3_o *)&v11 = System_Nullable_Vector3___get_Value(v16, (const MethodInfo_234ED58 *)v2);
  result.fields.z = v13;
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}