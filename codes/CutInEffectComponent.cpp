void __fastcall CutInEffectComponent___ctor(CutInEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C233FD & 1) == 0 )
  {
    sub_1C3B764(&CommonEffectComponent_TypeInfo, method);
    byte_4C233FD = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
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
    sub_1C3B9C0(this, idx);
  max_length = prefabRoots->max_length;
  if ( max_length <= idx )
    return 0LL;
  if ( max_length <= (unsigned int)idx )
    sub_1C3B9C8(this, *(_QWORD *)&idx);
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

  if ( (byte_4C233FC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&functionIndex);
    byte_4C233FC = 1;
  }
  battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePerformance, 0LL, 0LL) )
  {
    v7 = this->fields.battlePerformance;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
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
  CommonEffectComponent_o *v6; // x19
  System_String_o **monitor; // x8

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
          sub_1C3B9C0(this, *(_QWORD *)&idx);
        if ( *((_DWORD *)monitor + 6) > (unsigned int)idx )
        {
          CommonEffectComponent__PlayVoice(v6, monitor[idx + 4], 0LL);
          return;
        }
      }
      sub_1C3B9C8(this, *(_QWORD *)&idx);
    }
  }
}


void __fastcall CutInEffectComponent__SetBattlePerformance(
        CutInEffectComponent_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.battlePerformance = performance;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.battlePerformance,
    (int64_t)performance,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.voiceStrs = voiceStrs;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.voiceStrs,
    (int64_t)voiceStrs,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}