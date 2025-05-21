void __fastcall MyRoomListItem___ctor(MyRoomListItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomListItem__Awake(MyRoomListItem_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomListItem__EnableBlackOutPanel(
        MyRoomListItem_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  BlackoutPanelControl_o *blackOutPanel; // x0

  blackOutPanel = this->fields.blackOutPanel;
  if ( !blackOutPanel
    || (BlackoutPanelControl__Show(blackOutPanel, 0LL), (blackOutPanel = this->fields.blackOutPanel) == 0LL) )
  {
    sub_1BDBAD4(blackOutPanel, message);
  }
  BlackoutPanelControl__SetTextCenter(blackOutPanel, message, 0LL);
}