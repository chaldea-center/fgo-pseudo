void __fastcall DataLostResetEffectComponent___ctor(DataLostResetEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40FB401 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FB401 = 1;
  }
  LODWORD(this->fields.whiteOutSe) = 1069547520;
  *(_QWORD *)&this->fields.effectWaitTime = 0x40D000003FC00000LL;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this[1].klass = (DataLostResetEffectComponent_c *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}