void __fastcall CutInEffectComponent___ctor(CutInEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A71214 & 1) == 0 )
  {
    sub_1B90010(&CommonEffectComponent_TypeInfo, method);
    byte_4A71214 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CutInEffectComponent__GetPrefabRoot(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *prefabRoots; // x8
  int32_t max_length; // w9

  prefabRoots = this->fields.prefabRoots;
  if ( !prefabRoots )
    sub_1B9026C(this, idx);
  max_length = prefabRoots->max_length;
  if ( max_length <= idx )
    return 0LL;
  if ( max_length <= (unsigned int)idx )
    sub_1B90274(this, *(_QWORD *)&idx);
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

  if ( (byte_4A71213 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, *(_QWORD *)&functionIndex);
    byte_4A71213 = 1;
  }
  battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePerformance, 0LL, 0LL) )
  {
    v7 = this->fields.battlePerformance;
    if ( !v7 )
      sub_1B9026C(0LL, v6);
    BattlePerformance__PlayBuffInSkillCutInEffect(v7, functionIndex, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CutInEffectComponent__PlayVoiceFromIdx(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_String_array *voiceStrs; // x8
  int32_t max_length; // w9
  CutInEffectComponent_o *v6; // x20
  const MethodInfo *v7; // x3
  struct System_String_array *v8; // x8

  voiceStrs = this->fields.voiceStrs;
  if ( voiceStrs )
  {
    max_length = voiceStrs->max_length;
    if ( max_length > idx )
    {
      if ( max_length > (unsigned int)idx )
      {
        v6 = this;
        this = (CutInEffectComponent_o *)System_String__IsNullOrEmpty(voiceStrs->m_Items[idx], 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        v8 = v6->fields.voiceStrs;
        if ( !v8 )
          sub_1B9026C(this, *(_QWORD *)&idx);
        if ( v8->max_length > idx )
        {
          CommonEffectComponent__PlayVoice_40702604((CommonEffectComponent_o *)this, v8->m_Items[idx], 0LL, v7);
          return;
        }
      }
      sub_1B90274(this, *(_QWORD *)&idx);
    }
  }
}


void __fastcall CutInEffectComponent__SetBattlePerformance(
        CutInEffectComponent_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.battlePerformance = performance;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.battlePerformance,
    (int32_t)performance,
    (int32_t)method,
    v3);
}


void __fastcall CutInEffectComponent__SetVoiceStrs(
        CutInEffectComponent_o *this,
        System_String_array *voiceStrs,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.voiceStrs = voiceStrs;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.voiceStrs, (int32_t)voiceStrs, (int32_t)method, v3);
}