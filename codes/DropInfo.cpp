void __fastcall DropInfo___ctor(DropInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


DropInfo_SaveData_o *__fastcall DropInfo__GetSaveData(DropInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  DropInfo_SaveData_o *result; // x0

  if ( (byte_4B15D75 & 1) == 0 )
  {
    sub_1BCA7E0(&DropInfo_SaveData_TypeInfo, method, v2);
    byte_4B15D75 = 1;
  }
  v5 = sub_1BCAA2C(DropInfo_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  result = (DropInfo_SaveData_o *)v5;
  *(_OWORD *)(v5 + 16) = *(_OWORD *)&this->fields.type;
  *(_QWORD *)(v5 + 32) = *(_QWORD *)&this->fields.lv;
  *(_BYTE *)(v5 + 40) = this->fields.isRateUp;
  *(_QWORD *)(v5 + 44) = *(_QWORD *)&this->fields.originalNum;
  *(_BYTE *)(v5 + 52) = this->fields.isAdd;
  return result;
}


void __fastcall DropInfo__SetDataFromSaveData(
        DropInfo_o *this,
        DropInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1BCAA3C(this, 0LL);
  *(_OWORD *)&this->fields.type = *(_OWORD *)&saveData->fields.type;
  *(_QWORD *)&this->fields.lv = *(_QWORD *)&saveData->fields.lv;
  this->fields.isRateUp = saveData->fields.isRateUp;
  *(_QWORD *)&this->fields.originalNum = *(_QWORD *)&saveData->fields.originalNum;
  this->fields.isAdd = saveData->fields.isAdd;
}


bool __fastcall DropInfo__isItem(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsItem_38401476(this->fields.type, 0LL);
}


bool __fastcall DropInfo__isServant(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsServant_38401528(this->fields.type, 0LL);
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