void __fastcall BattleDropItem___ctor(BattleDropItem_o *this, const MethodInfo *method)
{
  this->fields.dropUpRate = 1000;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleDropItem__getBonusAddNum(BattleDropItem_o *this, const MethodInfo *method)
{
  int32_t originalNum; // w9
  int32_t num; // w8

  originalNum = this->fields.originalNum;
  num = this->fields.num;
  if ( originalNum <= 0 )
  {
    originalNum = this->fields.num;
    this->fields.originalNum = num;
  }
  return num - originalNum;
}


int32_t __fastcall BattleDropItem__getBonusAddNumClamp(BattleDropItem_o *this, const MethodInfo *method)
{
  int32_t originalNum; // w9
  int32_t num; // w8

  originalNum = this->fields.originalNum;
  num = this->fields.num;
  if ( originalNum <= 0 )
  {
    originalNum = this->fields.num;
    this->fields.originalNum = num;
  }
  return (num - originalNum) & ~((num - originalNum) >> 31);
}


int32_t __fastcall BattleDropItem__getOriginalNum(BattleDropItem_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.originalNum;
  if ( result <= 0 )
  {
    result = this->fields.num;
    this->fields.originalNum = result;
  }
  return result;
}


int32_t __fastcall BattleDropItem__getTotalNum(BattleDropItem_o *this, const MethodInfo *method)
{
  int originalNum; // w9
  int32_t num; // w8

  originalNum = this->fields.originalNum;
  num = this->fields.num;
  if ( originalNum <= 0 )
  {
    originalNum = this->fields.num;
    this->fields.originalNum = num;
  }
  if ( num - originalNum <= 0 )
    return originalNum;
  else
    return num;
}


bool __fastcall BattleDropItem__isAutoSellItem(BattleDropItem_o *this, const MethodInfo *method)
{
  return this->fields.sellQp > 0 || this->fields.sellMana > 0;
}


bool __fastcall BattleDropItem__isBonusAdd(BattleDropItem_o *this, const MethodInfo *method)
{
  int32_t originalNum; // w9
  int32_t num; // w8

  originalNum = this->fields.originalNum;
  num = this->fields.num;
  if ( originalNum <= 0 )
  {
    originalNum = this->fields.num;
    this->fields.originalNum = num;
  }
  return num - originalNum > 0;
}


void __fastcall BattleDropItem__setData(BattleDropItem_o *this, DropInfo_o *info, const MethodInfo *method)
{
  int32_t num; // w8

  if ( !info )
    sub_B0D97C(this);
  this->fields.type = info->fields.type;
  this->fields.objectId = info->fields.objectId;
  this->fields.limitCount = info->fields.limitCount;
  num = info->fields.num;
  this->fields.num = num;
  this->fields.isRateUp = info->fields.isRateUp;
  if ( info->fields.originalNum >= 1 )
    num = info->fields.originalNum;
  this->fields.originalNum = num;
  this->fields.rarity = info->fields.rarity;
  this->fields.isAdd = info->fields.isAdd;
}


void __fastcall BattleDropItem__setNum(BattleDropItem_o *this, int32_t num, int32_t original, const MethodInfo *method)
{
  this->fields.num = num;
  this->fields.originalNum = original;
}