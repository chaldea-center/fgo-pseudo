void __fastcall DropInfo___ctor(DropInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DropInfo__isItem(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsItem_26783148(this->fields.type, 0LL);
}


bool __fastcall DropInfo__isServant(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsServant_26783204(this->fields.type, 0LL);
}


void __fastcall DropInfo__setNum(DropInfo_o *this, int32_t num, const MethodInfo *method)
{
  this->fields.num = num;
  this->fields.originalNum = num;
}