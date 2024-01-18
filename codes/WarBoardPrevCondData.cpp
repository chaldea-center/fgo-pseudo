void __fastcall WarBoardPrevCondData___ctor(WarBoardPrevCondData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields = (WarBoardPrevCondData_Fields)-1LL;
}


void __fastcall WarBoardPrevCondData___ctor_27739336(
        WarBoardPrevCondData_o *this,
        int32_t id,
        int32_t turn,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._condId_k__BackingField = id;
  this->fields._clearedTurn_k__BackingField = turn;
}


void __fastcall WarBoardPrevCondData___ctor_27739392(
        WarBoardPrevCondData_o *this,
        WarBoardPrevCondData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveData )
    sub_B2C434(v5, v6);
  this->fields._condId_k__BackingField = saveData->fields.condId;
  this->fields._clearedTurn_k__BackingField = saveData->fields.clearedTurn;
}


void __fastcall WarBoardPrevCondData__SetClearedTurn(
        WarBoardPrevCondData_o *this,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (this->fields._clearedTurn_k__BackingField & 0x80000000) != 0 )
    this->fields._clearedTurn_k__BackingField = turn;
}


int32_t __fastcall WarBoardPrevCondData__get_clearedTurn(WarBoardPrevCondData_o *this, const MethodInfo *method)
{
  return this->fields._clearedTurn_k__BackingField;
}


int32_t __fastcall WarBoardPrevCondData__get_condId(WarBoardPrevCondData_o *this, const MethodInfo *method)
{
  return this->fields._condId_k__BackingField;
}


void __fastcall WarBoardPrevCondData__set_clearedTurn(
        WarBoardPrevCondData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._clearedTurn_k__BackingField = value;
}


void __fastcall WarBoardPrevCondData__set_condId(WarBoardPrevCondData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._condId_k__BackingField = value;
}


void __fastcall WarBoardPrevCondData_SaveData___ctor(WarBoardPrevCondData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields = (WarBoardPrevCondData_SaveData_Fields)-1LL;
}


void __fastcall WarBoardPrevCondData_SaveData___ctor_22650752(
        WarBoardPrevCondData_SaveData_o *this,
        WarBoardPrevCondData_o *prevCondData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !prevCondData )
    sub_B2C434(v5, v6);
  this->fields.condId = prevCondData->fields._condId_k__BackingField;
  this->fields.clearedTurn = prevCondData->fields._clearedTurn_k__BackingField;
}