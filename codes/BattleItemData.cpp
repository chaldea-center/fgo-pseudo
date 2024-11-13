void __fastcall BattleItemData___ctor(BattleItemData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18867 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_BattleItemData___ctor__, method, v2);
    byte_4B18867 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37DF02C *)Method_SingletonTemplate_BattleItemData___ctor__);
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
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  BattleItemData_SaveData_o *result; // x0

  if ( (byte_4B18866 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleItemData_SaveData_TypeInfo, method, v2);
    byte_4B18866 = 1;
  }
  v5 = (Il2CppObject *)sub_1BCAA2C(BattleItemData_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  result = (BattleItemData_SaveData_o *)v5;
  v5[1].klass = *(Il2CppClass **)&this->fields.itemId;
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