void StaffPhotoEntity___ctor(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E05662 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_int___ctor__);
    byte_4E05662 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_34E6B24 *)Method_DataEntityBase_int___ctor__);
}


int32_t StaffPhotoEntity__CreatePrimaryKey(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool StaffPhotoEntity__IsEnableSameSet(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E05660 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_19247/*"enableSameSet"*/);
    byte_4E05660 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.extendData, (System_String_o *)StringLiteral_19247/*"enableSameSet"*/, 0, 0) == 1;
}


bool StaffPhotoEntity__IsRestrictionSvt(StaffPhotoEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *IntArrayDefaultEmpty; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4E05661 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_int____79907888);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&Method_StaffPhotoEntity___c__DisplayClass1_0__IsRestrictionSvt_b__0__);
    sub_1CE6700(&StaffPhotoEntity___c__DisplayClass1_0_TypeInfo);
    sub_1CE6700(&StringLiteral_23444/*"restrictionSvtList"*/);
    byte_4E05661 = 1;
  }
  v5 = sub_1CE694C(StaffPhotoEntity___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  IntArrayDefaultEmpty = EntityScriptUtil__GetIntArrayDefaultEmpty(
                           this->fields.extendData,
                           (System_String_o *)StringLiteral_23444/*"restrictionSvtList"*/,
                           0);
  v9 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_StaffPhotoEntity___c__DisplayClass1_0__IsRestrictionSvt_b__0__,
    0);
  return BasicHelper__Any_int__52351580(
           IntArrayDefaultEmpty,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_31ED25C *)Method_BasicHelper_Any_int____79907888);
}


void StaffPhotoEntity___c__DisplayClass1_0___ctor(
        StaffPhotoEntity___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool StaffPhotoEntity___c__DisplayClass1_0___IsRestrictionSvt_b__0(
        StaffPhotoEntity___c__DisplayClass1_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}