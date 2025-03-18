void __fastcall ScriptFsmObject___ctor(ScriptFsmObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall ScriptFsmObject__IsPlaying(ScriptFsmObject_o *this, const MethodInfo *method)
{
  return this->fields.isPlaying;
}


void __fastcall ScriptFsmObject__OnFinished(ScriptFsmObject_o *this, const MethodInfo *method)
{
  this->fields.isPlaying = 0;
}


void __fastcall ScriptFsmObject__SendEvent(
        ScriptFsmObject_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0

  ScriptFsmObject__Skip(this, (const MethodInfo *)eventName);
  fsm = this->fields.fsm;
  this->fields.isPlaying = 1;
  if ( !fsm )
    sub_1C3B9C0(0LL, v5);
  PlayMakerFSM__SendEvent(fsm, eventName, 0LL);
}


void __fastcall ScriptFsmObject__SetBool(
        ScriptFsmObject_o *this,
        System_String_o *name,
        bool value,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmBool_o *FsmBool; // x0

  fsm = this->fields.fsm;
  if ( !fsm || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL )
    sub_1C3B9C0(fsm, name);
  FsmBool = HutongGames_PlayMaker_FsmVariables__GetFsmBool((HutongGames_PlayMaker_FsmVariables_o *)fsm, name, 0LL);
  if ( FsmBool )
    FsmBool->fields.value = value;
}


void __fastcall ScriptFsmObject__SetFloat(
        ScriptFsmObject_o *this,
        System_String_o *name,
        float value,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmFloat_o *FsmFloat; // x0

  fsm = this->fields.fsm;
  if ( !fsm || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL )
    sub_1C3B9C0(fsm, name);
  FsmFloat = HutongGames_PlayMaker_FsmVariables__GetFsmFloat((HutongGames_PlayMaker_FsmVariables_o *)fsm, name, 0LL);
  if ( FsmFloat )
    FsmFloat->fields.value = value;
}


void __fastcall ScriptFsmObject__SetState(
        ScriptFsmObject_o *this,
        System_String_o *stateName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0

  ScriptFsmObject__Skip(this, (const MethodInfo *)stateName);
  fsm = this->fields.fsm;
  this->fields.isPlaying = 1;
  if ( !fsm )
    sub_1C3B9C0(0LL, v5);
  PlayMakerFSM__SetState(fsm, stateName, 0LL);
}


void __fastcall ScriptFsmObject__SetString(
        ScriptFsmObject_o *this,
        System_String_o *name,
        System_String_o *value,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  fsm = this->fields.fsm;
  if ( !fsm || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL )
    sub_1C3B9C0(fsm, name);
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString((HutongGames_PlayMaker_FsmVariables_o *)fsm, name, 0LL);
  if ( FsmString )
  {
    FsmString->fields.value = value;
    sub_1C3B708((PartyOrganizationUtility_o *)&FsmString->fields.value, (int64_t)value, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall ScriptFsmObject__Skip(ScriptFsmObject_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C23C30 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_12424/*"Servants/"*/, method);
    byte_4C23C30 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C3B9C0(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12424/*"Servants/"*/, 0LL);
}