void BattleDropItem___ctor(BattleDropItem_o *this, const MethodInfo *method)
{
  this->fields.dropUpRate = 1000;
  System_Object___ctor((Il2CppObject *)this, 0);
}


DropInfo_o *BattleDropItem__GetDropInfo(BattleDropItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  bool isRateUp; // w8
  DropInfo_o *result; // x0
  bool isAdd; // w10
  int32x2_t v9; // d0
  int32_t rarity; // w8

  if ( (byte_59733F4 & 1) == 0 )
  {
    sub_2213A60(&DropInfo_TypeInfo);
    byte_59733F4 = 1;
  }
  v3 = sub_2213CCC(DropInfo_TypeInfo);
  DropInfo___ctor((DropInfo_o *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  isRateUp = this->fields.isRateUp;
  result = (DropInfo_o *)v3;
  isAdd = this->fields.isAdd;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.type;
  v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.limitCount;
  *(_BYTE *)(v3 + 40) = isRateUp;
  *(_BYTE *)(v3 + 52) = isAdd;
  *(int32x2_t *)(v3 + 24) = vrev64_s32(v9);
  rarity = this->fields.rarity;
  *(_DWORD *)(v3 + 44) = this->fields.originalNum;
  *(_DWORD *)(v3 + 36) = rarity;
  return result;
}


int32_t BattleDropItem__getBonusAddNum(BattleDropItem_o *this, const MethodInfo *method)
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


int32_t BattleDropItem__getBonusAddNumClamp(BattleDropItem_o *this, const MethodInfo *method)
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


int32_t BattleDropItem__getOriginalNum(BattleDropItem_o *this, const MethodInfo *method)
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


int32_t BattleDropItem__getTotalNum(BattleDropItem_o *this, const MethodInfo *method)
{
  int32_t originalNum; // w8
  int32_t num; // w9

  originalNum = this->fields.originalNum;
  num = this->fields.num;
  if ( originalNum <= 0 )
  {
    originalNum = this->fields.num;
    this->fields.originalNum = num;
  }
  return ((num - originalNum) & ~((num - originalNum) >> 31)) + originalNum;
}


bool BattleDropItem__isAutoSellItem(BattleDropItem_o *this, const MethodInfo *method)
{
  return this->fields.sellQp > 0 || this->fields.sellMana > 0;
}


bool BattleDropItem__isBonusAdd(BattleDropItem_o *this, const MethodInfo *method)
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


void BattleDropItem__setData(BattleDropItem_o *this, DropInfo_o *info, const MethodInfo *method)
{
  int v3; // w9
  int originalNum; // w8
  bool isRateUp; // w9
  int32_t rarity; // w8
  bool isAdd; // w9

  if ( !info )
    sub_2213CDC(this, 0);
  *(_QWORD *)&this->fields.type = *(_QWORD *)&info->fields.type;
  v3 = *(_QWORD *)&info->fields.num;
  *(int32x2_t *)&this->fields.limitCount = vrev64_s32(*(int32x2_t *)&info->fields.num);
  originalNum = info->fields.originalNum;
  if ( originalNum <= 0 )
    originalNum = v3;
  isRateUp = info->fields.isRateUp;
  this->fields.originalNum = originalNum;
  rarity = info->fields.rarity;
  this->fields.isRateUp = isRateUp;
  isAdd = info->fields.isAdd;
  this->fields.rarity = rarity;
  this->fields.isAdd = isAdd;
}


void BattleDropItem__setNum(BattleDropItem_o *this, int32_t num, int32_t original, const MethodInfo *method)
{
  this->fields.num = num;
  this->fields.originalNum = original;
}