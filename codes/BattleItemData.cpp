void __fastcall BattleItemData___ctor(BattleItemData_o *this, const MethodInfo *method)
{
  if ( (byte_438810C & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonTemplate_BattleItemData___ctor__);
    sub_B775C4(&SingletonTemplate_BattleItemData__TypeInfo);
    byte_438810C = 1;
  }
  if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2D16BA8 *)Method_SingletonTemplate_BattleItemData___ctor__);
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
  BattleItemData_SaveData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattleItemData_SaveData_o *result; // x0

  if ( (byte_438810B & 1) == 0 )
  {
    sub_B775C4(&BattleItemData_SaveData_TypeInfo);
    byte_438810B = 1;
  }
  v3 = (BattleItemData_SaveData_o *)sub_B77694(BattleItemData_SaveData_TypeInfo);
  BattleItemData_SaveData___ctor(v3, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  result = v3;
  v3->fields.id = this->fields.itemId;
  v3->fields.number = this->fields.itemNumber;
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
  int32_t number; // w8

  if ( saveData )
  {
    this->fields.itemId = saveData->fields.id;
    number = saveData->fields.number;
    this->fields.isLoadedFromSaveData = 1;
    this->fields.itemNumber = number;
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