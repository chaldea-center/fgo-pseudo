void __fastcall BattleItemData___ctor(BattleItemData_o *this, const MethodInfo *method)
{
  if ( (byte_49FE9D8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_BattleItemData___ctor__, method);
    byte_49FE9D8 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_36EC554 *)Method_SingletonTemplate_BattleItemData___ctor__);
}


void __fastcall BattleItemData__AddItemCount(BattleItemData_o *this, const MethodInfo *method)
{
  ++this->fields.itemNumber;
}


void __fastcall BattleItemData__AddItemCountWithIdCheck(
        BattleItemData_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  if ( this->fields.itemId == id )
    this->fields.itemNumber += num;
}


int32_t __fastcall BattleItemData__GetItemCount(BattleItemData_o *this, const MethodInfo *method)
{
  return this->fields.itemNumber;
}


int32_t __fastcall BattleItemData__GetItemCountWithIdCheck(
        BattleItemData_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( this->fields.itemId == id )
    return this->fields.itemNumber;
  else
    return 0;
}


int32_t __fastcall BattleItemData__GetItemId(BattleItemData_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}


BattleItemData_SaveData_o *__fastcall BattleItemData__GetSaveData(BattleItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x20
  __int64 v5; // x0
  BattleItemData_SaveData_o *result; // x0

  if ( (byte_49FE9D7 & 1) == 0 )
  {
    sub_1B640C8(&BattleItemData_SaveData_TypeInfo, method);
    byte_49FE9D7 = 1;
  }
  v4 = (Il2CppObject *)sub_1B64314(BattleItemData_SaveData_TypeInfo, method, v2);
  System_Object___ctor(v4, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  result = (BattleItemData_SaveData_o *)v4;
  v4[1].klass = *(Il2CppClass **)&this->fields.itemId;
  return result;
}


void __fastcall BattleItemData__Initialize(BattleItemData_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.isLoadedFromSaveData = 0;
  this->fields.itemId = id;
  this->fields.itemNumber = 0;
}


void __fastcall BattleItemData__SetDataFromWaveInfo(
        BattleItemData_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  this->fields.itemId = id;
  this->fields.itemNumber = num;
  this->fields.isLoadedFromSaveData = 1;
}


void __fastcall BattleItemData__SetItemId(BattleItemData_o *this, int32_t id, const MethodInfo *method)
{
  if ( !this->fields.isLoadedFromSaveData )
  {
    this->fields.isLoadedFromSaveData = 0;
    this->fields.itemId = id;
    this->fields.itemNumber = 0;
  }
}


void __fastcall BattleItemData__SetSaveData(
        BattleItemData_o *this,
        BattleItemData_SaveData_o *saveData,
        const MethodInfo *method)
{
  BattleItemData_SaveData_Fields fields; // d0

  if ( saveData )
  {
    fields = saveData->fields;
    this->fields.isLoadedFromSaveData = 1;
    *(BattleItemData_SaveData_Fields *)&this->fields.itemId = fields;
  }
}


void __fastcall BattleItemData__UseItem(BattleItemData_o *this, int32_t count, const MethodInfo *method)
{
  this->fields.itemNumber -= count;
}


void __fastcall BattleItemData_SaveData___ctor(BattleItemData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}