void __fastcall DropInfo___ctor(DropInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


DropInfo_SaveData_o *__fastcall DropInfo__GetSaveData(DropInfo_o *this, const MethodInfo *method)
{
  DropInfo_SaveData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  DropInfo_SaveData_o *result; // x0

  if ( (byte_438D0C0 & 1) == 0 )
  {
    sub_B775C4(&DropInfo_SaveData_TypeInfo);
    byte_438D0C0 = 1;
  }
  v3 = (DropInfo_SaveData_o *)sub_B77694(DropInfo_SaveData_TypeInfo);
  DropInfo_SaveData___ctor(v3, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  result = v3;
  v3->fields.type = this->fields.type;
  v3->fields.objectId = this->fields.objectId;
  v3->fields.num = this->fields.num;
  v3->fields.limitCount = this->fields.limitCount;
  v3->fields.lv = this->fields.lv;
  v3->fields.rarity = this->fields.rarity;
  v3->fields.isRateUp = this->fields.isRateUp;
  v3->fields.originalNum = this->fields.originalNum;
  v3->fields.effectType = this->fields.effectType;
  v3->fields.isAdd = this->fields.isAdd;
  return result;
}


void __fastcall DropInfo__SetDataFromSaveData(
        DropInfo_o *this,
        DropInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_B7769C(this, 0LL);
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
  return Gift__IsItem_28103496(this->fields.type, 0LL);
}


bool __fastcall DropInfo__isServant(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsServant_28103552(this->fields.type, 0LL);
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