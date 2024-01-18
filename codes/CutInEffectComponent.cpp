void __fastcall CutInEffectComponent___ctor(CutInEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4189006 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectComponent_TypeInfo, method);
    byte_4189006 = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall CutInEffectComponent__GetPrefabRoot(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *prefabRoots; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  prefabRoots = this->fields.prefabRoots;
  if ( !prefabRoots )
    sub_B2C434(this, idx);
  max_length = prefabRoots->max_length;
  if ( max_length <= idx )
    return 0LL;
  if ( max_length <= (unsigned int)idx )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  return prefabRoots->m_Items[idx];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CutInEffectComponent__PlayBuffEffect(
        CutInEffectComponent_o *this,
        int32_t functionIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePerformance; // x21
  __int64 v6; // x1
  BattlePerformance_o *v7; // x0

  if ( (byte_4189005 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&functionIndex);
    byte_4189005 = 1;
  }
  battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(battlePerformance, 0LL, 0LL) )
  {
    v7 = this->fields.battlePerformance;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    BattlePerformance__PlayBuffInSkillCutInEffect(v7, functionIndex, 0LL);
  }
}


void __fastcall CutInEffectComponent__PlayVoiceFromIdx(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_String_array *voiceStrs; // x8
  int32_t max_length; // w9
  CommonEffectComponent_o *v6; // x19
  __int64 v7; // x1
  System_String_o **monitor; // x8
  __int64 v9; // x0

  voiceStrs = this->fields.voiceStrs;
  if ( voiceStrs )
  {
    max_length = voiceStrs->max_length;
    if ( max_length > idx )
    {
      if ( max_length > (unsigned int)idx )
      {
        v6 = (CommonEffectComponent_o *)this;
        this = (CutInEffectComponent_o *)System_String__IsNullOrEmpty(voiceStrs->m_Items[idx], 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        monitor = (System_String_o **)v6[1].monitor;
        if ( !monitor )
          sub_B2C434(this, v7);
        if ( *((_DWORD *)monitor + 6) > (unsigned int)idx )
        {
          CommonEffectComponent__PlayVoice(v6, monitor[idx + 4], 0LL);
          return;
        }
      }
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
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

  this->fields.battlePerformance = performance;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.battlePerformance,
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

  this->fields.voiceStrs = voiceStrs;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.voiceStrs,
    (System_Int32_array **)voiceStrs,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}