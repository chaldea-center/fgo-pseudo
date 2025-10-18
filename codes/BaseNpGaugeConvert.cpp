void BaseNpGaugeConvert___ctor(BaseNpGaugeConvert_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BaseNpGaugeConvert__Init(BaseNpGaugeConvert_o *this, DataVals_o *baseVals, const MethodInfo *method)
{
  int32_t Param; // w20

  if ( !baseVals )
    sub_1C372B4(this);
  Param = DataVals__GetParam(baseVals, 4, 0, 0);
  this->fields.convertCoefficient = (float)Param
                                  / ((float (__fastcall *)(BaseNpGaugeConvert_o *, const MethodInfo *))this->klass->vtable._4_get_Denominator.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_Denominator.method);
}


float BaseNpGaugeConvert__PointToTurn(BaseNpGaugeConvert_o *this, int32_t point, const MethodInfo *method)
{
  return 0.0;
}


float BaseNpGaugeConvert__TurnToPoint(BaseNpGaugeConvert_o *this, int32_t turn, const MethodInfo *method)
{
  return 0.0;
}


float BaseNpGaugeConvert__get_Denominator(BaseNpGaugeConvert_o *this, const MethodInfo *method)
{
  return 1.0;
}