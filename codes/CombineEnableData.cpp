void __fastcall CombineEnableData___ctor(CombineEnableData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CombineEnableData__sumEnableNum(CombineEnableData_o *this, const MethodInfo *method)
{
  return vaddvq_s32(*(int32x4_t *)&this->fields.limitUpEnableNum)
       + this->fields.costumeCombineEnableNum
       + this->fields.friendshipExceedEnableNum;
}