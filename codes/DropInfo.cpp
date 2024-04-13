void __fastcall DropInfo___ctor(DropInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


DropInfo_SaveData_o *__fastcall DropInfo__GetSaveData(DropInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DropInfo_SaveData_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  DropInfo_SaveData_o *result; // x0

  if ( (byte_42EA9DE & 1) == 0 )
  {
    sub_B5D5C4(&DropInfo_SaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA9DE = 1;
  }
  v5 = (DropInfo_SaveData_o *)sub_B5D694(DropInfo_SaveData_TypeInfo);
  DropInfo_SaveData___ctor(v5, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  result = v5;
  v5->fields.type = this->fields.type;
  v5->fields.objectId = this->fields.objectId;
  v5->fields.num = this->fields.num;
  v5->fields.limitCount = this->fields.limitCount;
  v5->fields.lv = this->fields.lv;
  v5->fields.rarity = this->fields.rarity;
  v5->fields.isRateUp = this->fields.isRateUp;
  v5->fields.originalNum = this->fields.originalNum;
  v5->fields.effectType = this->fields.effectType;
  v5->fields.isAdd = this->fields.isAdd;
  return result;
}


void __fastcall DropInfo__SetDataFromSaveData(
        DropInfo_o *this,
        DropInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_B5D69C(this, 0LL);
  this->fields.type = saveData->fields.type;
  this->fields.objectId = saveData->fields.objectId;
  this->fields.num = saveData->fields.num;
  this->fields.limitCount = saveData->fields.limitCount;
  this->fields.lv = saveData->fields.lv;
  this->fields.rarity = saveData->fields.rarity;
  this->fields.isRateUp = saveData->fields.isRateUp;
  this->fields.originalNum = saveData->fields.originalNum;
  this->fields.effectType = saveData->fields.effectType;
  this->fields.isAdd = saveData->fields.isAdd;
}


bool __fastcall DropInfo__isItem(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsItem_28424904(this->fields.type, 0LL);
}


bool __fastcall DropInfo__isServant(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsServant_28424960(this->fields.type, 0LL);
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