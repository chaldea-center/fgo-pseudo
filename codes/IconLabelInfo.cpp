void __fastcall IconLabelInfo___ctor(IconLabelInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall IconLabelInfo__Clear(IconLabelInfo_o *this, const MethodInfo *method)
{
  this->fields.lv = 0;
  *(_QWORD *)&this->fields.adjustData = 0LL;
  this->fields.time = 0LL;
  *(_QWORD *)&this->fields.iconKind = 0LL;
  *(_WORD *)&this->fields.isHide = 0;
}


bool __fastcall IconLabelInfo__IsClear(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.iconKind == 0;
}


void __fastcall IconLabelInfo__Set(IconLabelInfo_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_B170D4();
  this->fields.iconKind = info->fields.iconKind;
  this->fields.data = info->fields.data;
  this->fields.adjustData = info->fields.adjustData;
  this->fields.equipData = info->fields.equipData;
  this->fields.time = info->fields.time;
  this->fields.isHide = info->fields.isHide;
  this->fields.isMaxHide = info->fields.isMaxHide;
  this->fields.lv = info->fields.lv;
}


void __fastcall IconLabelInfo__SetPurchaseDecision(
        IconLabelInfo_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  this->fields.iconKind = iconKind;
  this->fields.data = price;
  this->fields.adjustData = holdCount;
  this->fields.equipData = 0;
  this->fields.lv = 0;
}


void __fastcall IconLabelInfo__SetTime(
        IconLabelInfo_o *this,
        int32_t iconKind,
        int64_t time,
        bool isHide,
        bool isMaxHide,
        int32_t lv,
        const MethodInfo *method)
{
  this->fields.iconKind = iconKind;
  this->fields.data = 0;
  *(_QWORD *)&this->fields.adjustData = 0LL;
  this->fields.time = time;
  this->fields.isHide = isHide;
  this->fields.isMaxHide = isMaxHide;
  this->fields.lv = lv;
}


void __fastcall IconLabelInfo__Set_28888132(
        IconLabelInfo_o *this,
        int32_t iconKind,
        int32_t data,
        int32_t adjustData,
        int32_t equipData,
        bool isHide,
        bool isMaxHide,
        int32_t lv,
        const MethodInfo *method)
{
  this->fields.iconKind = iconKind;
  this->fields.data = data;
  this->fields.adjustData = adjustData;
  this->fields.equipData = equipData;
  this->fields.time = 0LL;
  this->fields.isHide = isHide;
  this->fields.isMaxHide = isMaxHide;
  this->fields.lv = lv;
}


int32_t __fastcall IconLabelInfo__get_AdjustData(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.adjustData;
}


int32_t __fastcall IconLabelInfo__get_Data(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


int32_t __fastcall IconLabelInfo__get_EquipData(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.equipData;
}


bool __fastcall IconLabelInfo__get_IsHide(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.isHide;
}


bool __fastcall IconLabelInfo__get_IsMaxHide(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.isMaxHide;
}


int32_t __fastcall IconLabelInfo__get_Kind(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.iconKind;
}


int32_t __fastcall IconLabelInfo__get_Lv(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


int64_t __fastcall IconLabelInfo__get_TimeData(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.time;
}