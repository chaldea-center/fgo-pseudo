void __fastcall BaseNpGaugeConvert___ctor(BaseNpGaugeConvert_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BaseNpGaugeConvert__Init(BaseNpGaugeConvert_o *this, DataVals_o *baseVals, const MethodInfo *method)
{
  int32_t Param; // w20

  if ( !baseVals )
    sub_B170D4();
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  this->fields.convertCoefficient = (float)Param
                                  / ((float (__fastcall *)(BaseNpGaugeConvert_o *, Il2CppMethodPointer))this->klass->vtable._4_get_Denominator.method)(
                                      this,
                                      this->klass->vtable._5_Init.methodPtr);
}


float __fastcall BaseNpGaugeConvert__PointToTurn(BaseNpGaugeConvert_o *this, int32_t point, const MethodInfo *method)
{
  return 0.0;
}


float __fastcall BaseNpGaugeConvert__TurnToPoint(BaseNpGaugeConvert_o *this, int32_t turn, const MethodInfo *method)
{
  return 0.0;
}


float __fastcall BaseNpGaugeConvert__get_Denominator(BaseNpGaugeConvert_o *this, const MethodInfo *method)
{
  return 1.0;
}