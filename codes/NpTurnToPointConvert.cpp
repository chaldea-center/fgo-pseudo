void __fastcall NpTurnToPointConvert___ctor(NpTurnToPointConvert_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall NpTurnToPointConvert__TurnToPoint(
        NpTurnToPointConvert_o *this,
        int32_t turn,
        const MethodInfo *method)
{
  return this->fields.convertCoefficient * (float)turn;
}