void __fastcall BattleItemData___ctor(BattleItemData_o *this, const MethodInfo *method)
{
  if ( (byte_4B0493C & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonTemplate_BattleItemData___ctor__, method);
    byte_4B0493C = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38E0260 *)Method_SingletonTemplate_BattleItemData___ctor__);
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
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattleItemData_SaveData_o *result; // x0

  if ( (byte_4B0493B & 1) == 0 )
  {
    sub_1BC3008(&BattleItemData_SaveData_TypeInfo, method);
    byte_4B0493B = 1;
  }
  v3 = (Il2CppObject *)sub_1BC3254(BattleItemData_SaveData_TypeInfo);
  System_Object___ctor(v3, 0LL);
  if ( !v3 )
    sub_1BC3264(v4, v5);
  result = (BattleItemData_SaveData_o *)v3;
  v3[1].klass = *(Il2CppClass **)&this->fields.itemId;
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