void DebugListViewMenu___ctor(DebugListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugListViewMenu__Init(DebugListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  DebugListViewManager_o *listViewManager; // x0

  if ( !this->fields.state )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    DebugListViewManager__CreateList(listViewManager, method);
  }
  listViewManager = this->fields.listViewManager;
  this->fields.state = 1;
  if ( !listViewManager )
LABEL_6:
    sub_1C93D2C(listViewManager, method);
  DebugListViewManager__SetMode_38028156(listViewManager, 1, 0, v2);
}


void DebugListViewMenu__StartInput(DebugListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  DebugListViewManager_o *listViewManager; // x0

  if ( this->fields.state == 1 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      sub_1C93D2C(0, method);
    DebugListViewManager__SetMode_38028156(listViewManager, 1, 0, v2);
  }
}