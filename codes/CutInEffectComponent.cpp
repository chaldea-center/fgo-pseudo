void __fastcall CutInEffectComponent___ctor(CutInEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CutInEffectComponent__GetPrefabRoot(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_String_array *voiceStrs; // x8
  int32_t max_length; // w9

  voiceStrs = this->fields.voiceStrs;
  if ( !voiceStrs )
    sub_B170D4();
  max_length = voiceStrs->max_length;
  if ( max_length <= idx )
    return 0LL;
  if ( max_length <= (unsigned int)idx )
  {
    sub_B17100(this, *(_QWORD *)&idx, method);
    sub_B170A0();
  }
  return (UnityEngine_GameObject_o *)voiceStrs->m_Items[idx];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CutInEffectComponent__PlayBuffEffect(
        CutInEffectComponent_o *this,
        int32_t functionIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  CutInEffectComponent_c *v6; // x0

  if ( (byte_40FB3CD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&functionIndex);
    byte_40FB3CD = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    v6 = this[1].klass;
    if ( !v6 )
      sub_B170D4();
    BattlePerformance__PlayBuffInSkillCutInEffect((BattlePerformance_o *)v6, functionIndex, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CutInEffectComponent__PlayVoiceFromIdx(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct BattlePerformance_o *battlePerformance; // x8
  int32_t fsm; // w9
  CutInEffectComponent_o *v6; // x19
  struct BattlePerformance_o *v7; // x8

  battlePerformance = this->fields.battlePerformance;
  if ( battlePerformance )
  {
    fsm = (int32_t)battlePerformance->fields.fsm;
    if ( fsm > idx )
    {
      if ( fsm > (unsigned int)idx )
      {
        v6 = this;
        this = (CutInEffectComponent_o *)System_String__IsNullOrEmpty(
                                           *((System_String_o **)&battlePerformance->fields.data + idx),
                                           0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        v7 = v6->fields.battlePerformance;
        if ( !v7 )
          sub_B170D4();
        if ( LODWORD(v7->fields.fsm) > idx )
        {
          CommonEffectComponent__PlayVoice(
            (CommonEffectComponent_o *)v6,
            *((System_String_o **)&v7->fields.data + idx),
            0LL);
          return;
        }
      }
      sub_B17100(this, *(_QWORD *)&idx, method);
      sub_B170A0();
    }
  }
}


void __fastcall CutInEffectComponent__SetBattlePerformance(
        CutInEffectComponent_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this[1].klass = (CutInEffectComponent_c *)performance;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)performance,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CutInEffectComponent__SetVoiceStrs(
        CutInEffectComponent_o *this,
        System_String_array *voiceStrs,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.battlePerformance = (struct BattlePerformance_o *)voiceStrs;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battlePerformance,
    (System_Int32_array **)voiceStrs,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}