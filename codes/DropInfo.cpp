void __fastcall DropInfo___ctor(DropInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


DropInfo_SaveData_o *__fastcall DropInfo__GetSaveData(DropInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  DropInfo_SaveData_o *result; // x0

  if ( (byte_49FBFAD & 1) == 0 )
  {
    sub_1B640C8(&DropInfo_SaveData_TypeInfo, method);
    byte_49FBFAD = 1;
  }
  v4 = sub_1B64314(DropInfo_SaveData_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  result = (DropInfo_SaveData_o *)v4;
  *(_OWORD *)(v4 + 16) = *(_OWORD *)&this->fields.type;
  *(_QWORD *)(v4 + 32) = *(_QWORD *)&this->fields.lv;
  *(_BYTE *)(v4 + 40) = this->fields.isRateUp;
  *(_QWORD *)(v4 + 44) = *(_QWORD *)&this->fields.originalNum;
  *(_BYTE *)(v4 + 52) = this->fields.isAdd;
  return result;
}


void __fastcall DropInfo__SetDataFromSaveData(
        DropInfo_o *this,
        DropInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1B64324(this);
  *(_OWORD *)&this->fields.type = *(_OWORD *)&saveData->fields.type;
  *(_QWORD *)&this->fields.lv = *(_QWORD *)&saveData->fields.lv;
  this->fields.isRateUp = saveData->fields.isRateUp;
  *(_QWORD *)&this->fields.originalNum = *(_QWORD *)&saveData->fields.originalNum;
  this->fields.isAdd = saveData->fields.isAdd;
}


bool __fastcall DropInfo__isItem(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsItem_37376280(this->fields.type, 0LL);
}


bool __fastcall DropInfo__isServant(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsServant_37376332(this->fields.type, 0LL);
}


void __fastcall DropInfo__setNum(DropInfo_o *this, int32_t num, const MethodInfo *method)
{
  this->fields.num = num;
  this->fields.originalNum = num;
}


void __fastcall DropInfo_SaveData___ctor(DropInfo_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}