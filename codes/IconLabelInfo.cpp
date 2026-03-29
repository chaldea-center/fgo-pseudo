void IconLabelInfo___ctor(IconLabelInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void IconLabelInfo__Clear(IconLabelInfo_o *this, const MethodInfo *method)
{
  this->fields.lv = 0;
  this->fields.actualRarity = 0;
  *(_QWORD *)&this->fields.adjustData = 0;
  this->fields.time = 0;
  *(_QWORD *)&this->fields.iconKind = 0;
  *(_WORD *)&this->fields.isHide = 0;
}


bool IconLabelInfo__IsClear(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.iconKind == 0;
}


void IconLabelInfo__Set(IconLabelInfo_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_1C93D2C(this, 0);
  this->fields = info->fields;
}


void IconLabelInfo__SetPurchaseDecision(
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


void IconLabelInfo__SetTime(
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
  *(_QWORD *)&this->fields.adjustData = 0;
  this->fields.time = time;
  this->fields.isHide = isHide;
  this->fields.isMaxHide = isMaxHide;
  this->fields.lv = lv;
}


void IconLabelInfo__Set_41636824(
        IconLabelInfo_o *this,
        int32_t iconKind,
        int32_t data,
        int32_t adjustData,
        int32_t equipData,
        bool isHide,
        bool isMaxHide,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  this->fields.iconKind = iconKind;
  this->fields.data = data;
  this->fields.adjustData = adjustData;
  this->fields.equipData = equipData;
  this->fields.time = 0;
  this->fields.isHide = isHide;
  this->fields.isMaxHide = isMaxHide;
  this->fields.lv = lv;
  this->fields.actualRarity = actualRarity;
}


int32_t IconLabelInfo__get_ActualRarity(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.actualRarity;
}


int32_t IconLabelInfo__get_AdjustData(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.adjustData;
}


int32_t IconLabelInfo__get_Data(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


int32_t IconLabelInfo__get_EquipData(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.equipData;
}


bool IconLabelInfo__get_IsHide(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.isHide;
}


bool IconLabelInfo__get_IsMaxHide(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.isMaxHide;
}


int32_t IconLabelInfo__get_Kind(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.iconKind;
}


int32_t IconLabelInfo__get_Lv(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


int64_t IconLabelInfo__get_TimeData(IconLabelInfo_o *this, const MethodInfo *method)
{
  return this->fields.time;
}