void __fastcall DropInfo___ctor(DropInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


DropInfo_SaveData_o *__fastcall DropInfo__GetSaveData(DropInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  DropInfo_SaveData_o *result; // x0

  if ( (byte_4A1F664 & 1) == 0 )
  {
    sub_1B715CC(&DropInfo_SaveData_TypeInfo, method);
    byte_4A1F664 = 1;
  }
  v3 = sub_1B71818(DropInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B71828(v4, v5);
  result = (DropInfo_SaveData_o *)v3;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&this->fields.type;
  *(_QWORD *)(v3 + 32) = *(_QWORD *)&this->fields.lv;
  *(_BYTE *)(v3 + 40) = this->fields.isRateUp;
  *(_QWORD *)(v3 + 44) = *(_QWORD *)&this->fields.originalNum;
  *(_BYTE *)(v3 + 52) = this->fields.isAdd;
  return result;
}


void __fastcall DropInfo__SetDataFromSaveData(
        DropInfo_o *this,
        DropInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1B71828(this, 0LL);
  *(_OWORD *)&this->fields.type = *(_OWORD *)&saveData->fields.type;
  *(_QWORD *)&this->fields.lv = *(_QWORD *)&saveData->fields.lv;
  this->fields.isRateUp = saveData->fields.isRateUp;
  *(_QWORD *)&this->fields.originalNum = *(_QWORD *)&saveData->fields.originalNum;
  this->fields.isAdd = saveData->fields.isAdd;
}


bool __fastcall DropInfo__isItem(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsItem_37485852(this->fields.type, 0LL);
}


bool __fastcall DropInfo__isServant(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsServant_37485904(this->fields.type, 0LL);
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