void __fastcall SubmarineScanEvent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421366E & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineScanEvent_TypeInfo, v1);
    byte_421366E = 1;
  }
  SubmarineScanEvent_TypeInfo->static_fields->NO_DIRECTION = -1;
}


void __fastcall SubmarineScanEvent___ctor(
        SubmarineScanEvent_o *this,
        SubmarineMapPanelData_o *panelData,
        int32_t chain,
        int32_t direction,
        bool isOpened,
        bool isHitObstacle,
        bool isStopped,
        const MethodInfo *method)
{
  __int64 v15; // x0
  bool HasEnemyParts_k__BackingField; // w8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !panelData )
    sub_B0D97C(v15);
  this->fields._HIndex_k__BackingField = panelData->fields._HIndex_k__BackingField;
  this->fields._VIndex_k__BackingField = panelData->fields._VIndex_k__BackingField;
  this->fields._IsAlreadyOpened_k__BackingField = panelData->fields._IsOpened_k__BackingField;
  HasEnemyParts_k__BackingField = panelData->fields._HasEnemyParts_k__BackingField;
  this->fields._Chain_k__BackingField = chain;
  this->fields._Direction_k__BackingField = direction;
  this->fields._IsOpened_k__BackingField = isOpened;
  this->fields._IsHitObstacle_k__BackingField = isHitObstacle;
  this->fields._HasEnemyParts_k__BackingField = HasEnemyParts_k__BackingField;
  this->fields._IsStopped_k__BackingField = isStopped;
}


int32_t __fastcall SubmarineScanEvent__get_Chain(SubmarineScanEvent_o *this, const MethodInfo *method)
{
  return this->fields._Chain_k__BackingField;
}


int32_t __fastcall SubmarineScanEvent__get_Direction(SubmarineScanEvent_o *this, const MethodInfo *method)
{
  return this->fields._Direction_k__BackingField;
}


int32_t __fastcall SubmarineScanEvent__get_HIndex(SubmarineScanEvent_o *this, const MethodInfo *method)
{
  return this->fields._HIndex_k__BackingField;
}


bool __fastcall SubmarineScanEvent__get_HasEnemyParts(SubmarineScanEvent_o *this, const MethodInfo *method)
{
  return this->fields._HasEnemyParts_k__BackingField;
}


bool __fastcall SubmarineScanEvent__get_IsAlreadyOpened(SubmarineScanEvent_o *this, const MethodInfo *method)
{
  return this->fields._IsAlreadyOpened_k__BackingField;
}


bool __fastcall SubmarineScanEvent__get_IsHitObstacle(SubmarineScanEvent_o *this, const MethodInfo *method)
{
  return this->fields._IsHitObstacle_k__BackingField;
}


bool __fastcall SubmarineScanEvent__get_IsOpened(SubmarineScanEvent_o *this, const MethodInfo *method)
{
  return this->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineScanEvent__get_IsStopped(SubmarineScanEvent_o *this, const MethodInfo *method)
{
  return this->fields._IsStopped_k__BackingField;
}


int32_t __fastcall SubmarineScanEvent__get_VIndex(SubmarineScanEvent_o *this, const MethodInfo *method)
{
  return this->fields._VIndex_k__BackingField;
}


void __fastcall SubmarineScanEvent__set_Chain(SubmarineScanEvent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Chain_k__BackingField = value;
}


void __fastcall SubmarineScanEvent__set_Direction(SubmarineScanEvent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Direction_k__BackingField = value;
}


void __fastcall SubmarineScanEvent__set_HIndex(SubmarineScanEvent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._HIndex_k__BackingField = value;
}


void __fastcall SubmarineScanEvent__set_HasEnemyParts(SubmarineScanEvent_o *this, bool value, const MethodInfo *method)
{
  this->fields._HasEnemyParts_k__BackingField = value;
}


void __fastcall SubmarineScanEvent__set_IsAlreadyOpened(
        SubmarineScanEvent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAlreadyOpened_k__BackingField = value;
}


void __fastcall SubmarineScanEvent__set_IsHitObstacle(SubmarineScanEvent_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsHitObstacle_k__BackingField = value;
}


void __fastcall SubmarineScanEvent__set_IsOpened(SubmarineScanEvent_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsOpened_k__BackingField = value;
}


void __fastcall SubmarineScanEvent__set_IsStopped(SubmarineScanEvent_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsStopped_k__BackingField = value;
}


void __fastcall SubmarineScanEvent__set_VIndex(SubmarineScanEvent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._VIndex_k__BackingField = value;
}