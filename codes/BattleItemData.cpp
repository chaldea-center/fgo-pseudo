void BattleItemData___ctor(BattleItemData_o *this, const MethodInfo *method)
{
  if ( (byte_4D33598 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_BattleItemData___ctor__);
    byte_4D33598 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3AC58E4 *)Method_SingletonTemplate_BattleItemData___ctor__);
}


void BattleItemData__AddItemCount(BattleItemData_o *this, const MethodInfo *method)
{
  ++this->fields.itemNumber;
}


void BattleItemData__AddItemCountWithIdCheck(BattleItemData_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  if ( this->fields.itemId == id )
    this->fields.itemNumber += num;
}


int32_t BattleItemData__GetItemCount(BattleItemData_o *this, const MethodInfo *method)
{
  return this->fields.itemNumber;
}


int32_t BattleItemData__GetItemCountWithIdCheck(BattleItemData_o *this, int32_t id, const MethodInfo *method)
{
  if ( this->fields.itemId == id )
    return this->fields.itemNumber;
  else
    return 0;
}


int32_t BattleItemData__GetItemId(BattleItemData_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}


BattleItemData_SaveData_o *BattleItemData__GetSaveData(BattleItemData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D33597 & 1) == 0 )
  {
    sub_1C93AD4(&BattleItemData_SaveData_TypeInfo);
    byte_4D33597 = 1;
  }
  v3 = (Il2CppObject *)sub_1C93D20(BattleItemData_SaveData_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v3 )
    sub_1C93D2C(v4, v5);
  v3[1].klass = *(Il2CppClass **)&this->fields.itemId;
  return (BattleItemData_SaveData_o *)v3;
}


void BattleItemData__Initialize(BattleItemData_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.isLoadedFromSaveData = 0;
  this->fields.itemId = id;
  this->fields.itemNumber = 0;
}


void BattleItemData__SetDataFromWaveInfo(BattleItemData_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  this->fields.itemId = id;
  this->fields.itemNumber = num;
  this->fields.isLoadedFromSaveData = 1;
}


void BattleItemData__SetItemId(BattleItemData_o *this, int32_t id, const MethodInfo *method)
{
  if ( !this->fields.isLoadedFromSaveData )
  {
    this->fields.isLoadedFromSaveData = 0;
    this->fields.itemId = id;
    this->fields.itemNumber = 0;
  }
}


void BattleItemData__SetSaveData(BattleItemData_o *this, BattleItemData_SaveData_o *saveData, const MethodInfo *method)
{
  BattleItemData_SaveData_Fields fields; // d0

  if ( saveData )
  {
    fields = saveData->fields;
    this->fields.isLoadedFromSaveData = 1;
    *(BattleItemData_SaveData_Fields *)&this->fields.itemId = fields;
  }
}


void BattleItemData__UseItem(BattleItemData_o *this, int32_t count, const MethodInfo *method)
{
  this->fields.itemNumber -= count;
}


void BattleItemData_SaveData___ctor(BattleItemData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}