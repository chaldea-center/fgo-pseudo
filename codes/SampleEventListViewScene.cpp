void SampleEventListViewScene___ctor(SampleEventListViewScene_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SampleEventListViewScene__Init(SampleEventListViewScene_o *this, const MethodInfo *method)
{
  SampleEventListViewManager_o *listViewManager; // x0
  SampleEventListViewManager_o *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_4CB3A95 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SampleEventListViewScene_OnMoveEnd__);
    byte_4CB3A95 = 1;
  }
  if ( !this->fields.state )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    SampleEventListViewManager__CreateList(listViewManager, this->fields.listSum, 0);
  }
  this->fields.state = 1;
  v4 = this->fields.listViewManager;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SampleEventListViewScene_OnMoveEnd__, 0);
  if ( !v4 )
LABEL_8:
    sub_1C6BC60(listViewManager, method);
  SampleEventListViewManager__SetMode_37885016(v4, 1, v5, 0);
}


void SampleEventListViewScene__OnMoveEnd(SampleEventListViewScene_o *this, const MethodInfo *method)
{
  SampleEventListViewManager_o *listViewManager; // x8

  if ( this->fields.state == 1 )
  {
    listViewManager = this->fields.listViewManager;
    this->fields.state = 2;
    if ( !listViewManager )
      sub_1C6BC60(this, method);
    SampleEventListViewManager__SetMode(listViewManager, 2, 0);
  }
}


void SampleEventListViewScene__Start(SampleEventListViewScene_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C6BC60(0, method);
  ListViewManager__set_IsInput(listViewManager, 0, 0);
}