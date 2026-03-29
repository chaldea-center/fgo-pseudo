void iTweenFSMEvents___ctor(iTweenFSMEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void iTweenFSMEvents__iTweenOnComplete(iTweenFSMEvents_o *this, int32_t aniTweenID, const MethodInfo *method)
{
  struct HutongGames_PlayMaker_Actions_iTweenFsmAction_o *itweenFSMAction; // x8
  struct HutongGames_PlayMaker_Actions_iTweenFsmAction_o *fsm; // x0

  itweenFSMAction = this->fields.itweenFSMAction;
  if ( itweenFSMAction && this->fields.itweenID == aniTweenID && (!this->fields.islooping || !this->fields.donotfinish) )
  {
    fsm = (struct HutongGames_PlayMaker_Actions_iTweenFsmAction_o *)itweenFSMAction->fields.fsm;
    if ( !fsm
      || (HutongGames_PlayMaker_Fsm__Event_67237532(
            (HutongGames_PlayMaker_Fsm_o *)fsm,
            itweenFSMAction->fields.finishEvent,
            0),
          (fsm = this->fields.itweenFSMAction) == 0) )
    {
      sub_1C93D2C(fsm, *(_QWORD *)&aniTweenID);
    }
    HutongGames_PlayMaker_FsmStateAction__Finish((HutongGames_PlayMaker_FsmStateAction_o *)fsm, 0);
  }
}


void iTweenFSMEvents__iTweenOnStart(iTweenFSMEvents_o *this, int32_t aniTweenID, const MethodInfo *method)
{
  struct HutongGames_PlayMaker_Actions_iTweenFsmAction_o *itweenFSMAction; // x8
  HutongGames_PlayMaker_Fsm_o *fsm; // x0

  if ( this->fields.itweenID == aniTweenID )
  {
    itweenFSMAction = this->fields.itweenFSMAction;
    if ( itweenFSMAction )
    {
      fsm = itweenFSMAction->fields.fsm;
      if ( !fsm )
        sub_1C93D2C(0, aniTweenID);
      HutongGames_PlayMaker_Fsm__Event_67237532(fsm, itweenFSMAction->fields.startEvent, 0);
    }
  }
}