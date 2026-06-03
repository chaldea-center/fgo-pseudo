void StaffPhotoEntity___ctor(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78301 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_int___ctor__);
    byte_4E78301 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3533444 *)Method_DataEntityBase_int___ctor__);
}


int32_t StaffPhotoEntity__CreatePrimaryKey(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool StaffPhotoEntity__IsEnableSameSet(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E782FF & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19326/*"enableSameSet"*/);
    byte_4E782FF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.extendData, (System_String_o *)StringLiteral_19326/*"enableSameSet"*/, 0, 0) == 1;
}


bool StaffPhotoEntity__IsRestrictionSvt(StaffPhotoEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *IntArrayDefaultEmpty; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4E78300 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_int____80372680);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&Method_StaffPhotoEntity___c__DisplayClass1_0__IsRestrictionSvt_b__0__);
    sub_1D0F0B4(&StaffPhotoEntity___c__DisplayClass1_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23546/*"restrictionSvtList"*/);
    byte_4E78300 = 1;
  }
  v5 = sub_1D0F300(StaffPhotoEntity___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  IntArrayDefaultEmpty = EntityScriptUtil__GetIntArrayDefaultEmpty(
                           this->fields.extendData,
                           (System_String_o *)StringLiteral_23546/*"restrictionSvtList"*/,
                           0);
  v9 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_StaffPhotoEntity___c__DisplayClass1_0__IsRestrictionSvt_b__0__,
    0);
  return BasicHelper__Any_int__52658284(
           IntArrayDefaultEmpty,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_323806C *)Method_BasicHelper_Any_int____80372680);
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