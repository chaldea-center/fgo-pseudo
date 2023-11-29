void __fastcall BattleServantHpShiftDecagramEffectComponent___ctor(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        const MethodInfo *method)
{
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftDecagramEffectComponent__UpdateIcon(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  const MethodInfo *v6; // x3
  BattleServantHpShiftComponent_o *v7; // x0

  if ( (byte_40FCCE2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40FCCE2 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v7 = (BattleServantHpShiftComponent_o *)this[1].klass;
    if ( !v7 )
      sub_B170D4();
    BattleServantHpShiftComponent__UpdateIconActive(v7, index, 1, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftDecagramEffectComponent__UpdateIconInactive(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  const MethodInfo *v6; // x3
  BattleServantHpShiftComponent_o *v7; // x0

  if ( (byte_40FCCE3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40FCCE3 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v7 = (BattleServantHpShiftComponent_o *)this[1].klass;
    if ( !v7 )
      sub_B170D4();
    BattleServantHpShiftComponent__UpdateIconActive(v7, index, 0, v6);
  }
}


BattleServantHpShiftComponent_o *__fastcall BattleServantHpShiftDecagramEffectComponent__get_Parent(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        const MethodInfo *method)
{
  return (BattleServantHpShiftComponent_o *)this[1].klass;
}


void __fastcall BattleServantHpShiftDecagramEffectComponent__set_Parent(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        BattleServantHpShiftComponent_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this[1].klass = (BattleServantHpShiftDecagramEffectComponent_c *)value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}