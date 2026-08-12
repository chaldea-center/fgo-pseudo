void StaffPhotoEntity___ctor(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59714EF & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59714EF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t StaffPhotoEntity__CreatePrimaryKey(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool StaffPhotoEntity__IsEnableSameSet(StaffPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59714ED & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19881/*"enableSameSet"*/);
    byte_59714ED = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.extendData, (System_String_o *)StringLiteral_19881/*"enableSameSet"*/, 0, 0) == 1;
}


bool StaffPhotoEntity__IsRestrictionSvt(StaffPhotoEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_string__object__o *extendData; // x0
  System_String_o *v9; // x1
  System_Int32_array *IntArrayDefaultEmpty; // x19
  System_Func_int__bool__o *v11; // x20

  if ( (byte_59714EE & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_StaffPhotoEntity___c__DisplayClass1_0__IsRestrictionSvt_b__0__);
    sub_2213A60(&StaffPhotoEntity___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&StringLiteral_24282/*"restrictionSvtList"*/);
    byte_59714EE = 1;
  }
  v5 = sub_2213CCC(StaffPhotoEntity___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  extendData = this->fields.extendData;
  v9 = (System_String_o *)StringLiteral_24282/*"restrictionSvtList"*/;
  *(_DWORD *)(v5 + 16) = svtId;
  IntArrayDefaultEmpty = EntityScriptUtil__GetIntArrayDefaultEmpty(extendData, v9, 0);
  v11 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_StaffPhotoEntity___c__DisplayClass1_0__IsRestrictionSvt_b__0__,
    0);
  return BasicHelper__Any_int__58784608(
           IntArrayDefaultEmpty,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
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