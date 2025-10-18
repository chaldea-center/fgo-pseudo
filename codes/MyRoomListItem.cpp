void MyRoomListItem___ctor(MyRoomListItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomListItem__Awake(MyRoomListItem_o *this, const MethodInfo *method)
{
  ;
}


void MyRoomListItem__EnableBlackOutPanel(MyRoomListItem_o *this, System_String_o *message, const MethodInfo *method)
{
  BlackoutPanelControl_o *blackOutPanel; // x0

  blackOutPanel = this->fields.blackOutPanel;
  if ( !blackOutPanel
    || (BlackoutPanelControl__Show(blackOutPanel, 0), (blackOutPanel = this->fields.blackOutPanel) == 0) )
  {
    sub_1C372B4(blackOutPanel);
  }
  BlackoutPanelControl__SetTextCenter(blackOutPanel, message, 0);
}