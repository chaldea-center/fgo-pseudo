void ScriptFsmObject___ctor(ScriptFsmObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool ScriptFsmObject__IsPlaying(ScriptFsmObject_o *this, const MethodInfo *method)
{
  return this->fields.isPlaying;
}


void ScriptFsmObject__OnFinished(ScriptFsmObject_o *this, const MethodInfo *method)
{
  this->fields.isPlaying = 0;
}


void ScriptFsmObject__SendEvent(ScriptFsmObject_o *this, System_String_o *eventName, const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0

  ScriptFsmObject__Skip(this, (const MethodInfo *)eventName);
  fsm = this->fields.fsm;
  this->fields.isPlaying = 1;
  if ( !fsm )
    sub_1C6BC60(0, v5);
  PlayMakerFSM__SendEvent(fsm, eventName, 0);
}


void ScriptFsmObject__SetBool(ScriptFsmObject_o *this, System_String_o *name, bool value, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmBool_o *FsmBool; // x0

  fsm = this->fields.fsm;
  if ( !fsm || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0)) == 0 )
    sub_1C6BC60(fsm, name);
  FsmBool = HutongGames_PlayMaker_FsmVariables__GetFsmBool((HutongGames_PlayMaker_FsmVariables_o *)fsm, name, 0);
  if ( FsmBool )
    FsmBool->fields.value = value;
}


void ScriptFsmObject__SetFloat(ScriptFsmObject_o *this, System_String_o *name, float value, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmFloat_o *FsmFloat; // x0

  fsm = this->fields.fsm;
  if ( !fsm || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0)) == 0 )
    sub_1C6BC60(fsm, name);
  FsmFloat = HutongGames_PlayMaker_FsmVariables__GetFsmFloat((HutongGames_PlayMaker_FsmVariables_o *)fsm, name, 0);
  if ( FsmFloat )
    FsmFloat->fields.value = value;
}


void ScriptFsmObject__SetState(ScriptFsmObject_o *this, System_String_o *stateName, const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0

  ScriptFsmObject__Skip(this, (const MethodInfo *)stateName);
  fsm = this->fields.fsm;
  this->fields.isPlaying = 1;
  if ( !fsm )
    sub_1C6BC60(0, v5);
  PlayMakerFSM__SetState(fsm, stateName, 0);
}


void ScriptFsmObject__SetString(
        ScriptFsmObject_o *this,
        System_String_o *name,
        System_String_o *value,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  fsm = this->fields.fsm;
  if ( !fsm || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0)) == 0 )
    sub_1C6BC60(fsm, name);
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString((HutongGames_PlayMaker_FsmVariables_o *)fsm, name, 0);
  if ( FsmString )
  {
    FsmString->fields.value = value;
    sub_1C6B9AC((CGThumbnailListItem_o *)&FsmString->fields.value, (int32_t)value, v8, v9);
  }
}


void ScriptFsmObject__Skip(ScriptFsmObject_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4CB8262 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12237/*"SKIP"*/);
    byte_4CB8262 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12237/*"SKIP"*/, 0);
}