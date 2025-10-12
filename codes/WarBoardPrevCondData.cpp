void WarBoardPrevCondData___ctor(WarBoardPrevCondData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields = (WarBoardPrevCondData_Fields)-1LL;
}


void WarBoardPrevCondData___ctor_38064840(
        WarBoardPrevCondData_o *this,
        int32_t id,
        int32_t turn,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._condId_k__BackingField = id;
  this->fields._clearedTurn_k__BackingField = turn;
}


void WarBoardPrevCondData___ctor_38064884(
        WarBoardPrevCondData_o *this,
        WarBoardPrevCondData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveData )
    sub_1C32E7C(v5);
  this->fields = (WarBoardPrevCondData_Fields)saveData->fields;
}


void WarBoardPrevCondData__SetClearedTurn(WarBoardPrevCondData_o *this, int32_t turn, const MethodInfo *method)
{
  if ( this->fields._clearedTurn_k__BackingField < 0 )
    this->fields._clearedTurn_k__BackingField = turn;
}


int32_t WarBoardPrevCondData__get_clearedTurn(WarBoardPrevCondData_o *this, const MethodInfo *method)
{
  return this->fields._clearedTurn_k__BackingField;
}


int32_t WarBoardPrevCondData__get_condId(WarBoardPrevCondData_o *this, const MethodInfo *method)
{
  return this->fields._condId_k__BackingField;
}


void WarBoardPrevCondData__set_clearedTurn(WarBoardPrevCondData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._clearedTurn_k__BackingField = value;
}


void WarBoardPrevCondData__set_condId(WarBoardPrevCondData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._condId_k__BackingField = value;
}


void WarBoardPrevCondData_SaveData___ctor(WarBoardPrevCondData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields = (WarBoardPrevCondData_SaveData_Fields)-1LL;
}


void WarBoardPrevCondData_SaveData___ctor_38028440(
        WarBoardPrevCondData_SaveData_o *this,
        WarBoardPrevCondData_o *prevCondData,
        const MethodInfo *method)
{
  __int64 v5; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !prevCondData )
    sub_1C32E7C(v5);
  this->fields = (WarBoardPrevCondData_SaveData_Fields)prevCondData->fields;
}