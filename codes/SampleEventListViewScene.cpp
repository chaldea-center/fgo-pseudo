void SampleEventListViewScene___ctor(SampleEventListViewScene_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SampleEventListViewScene__Init(SampleEventListViewScene_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SampleEventListViewManager_o *listViewManager; // x0
  SampleEventListViewManager_o *v5; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4E74DB0 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_SampleEventListViewScene_OnMoveEnd__);
    byte_4E74DB0 = 1;
  }
  if ( !this->fields.state )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    SampleEventListViewManager__CreateList(listViewManager, this->fields.listSum, v2);
  }
  this->fields.state = 1;
  v5 = this->fields.listViewManager;
  v6 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SampleEventListViewScene_OnMoveEnd__, 0);
  if ( !v5 )
LABEL_8:
    sub_1D0F30C(listViewManager, method);
  SampleEventListViewManager__SetMode_38905364(v5, 1, v6, v7);
}


void SampleEventListViewScene__OnMoveEnd(SampleEventListViewScene_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  SampleEventListViewManager_o *listViewManager; // x8

  if ( this->fields.state == 1 )
  {
    listViewManager = this->fields.listViewManager;
    this->fields.state = 2;
    if ( !listViewManager )
      sub_1D0F30C(this, method);
    SampleEventListViewManager__SetMode_38905364(listViewManager, 2, 0, v2);
  }
}


void SampleEventListViewScene__Start(SampleEventListViewScene_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1D0F30C(0, method);
  ListViewManager__set_IsInput(listViewManager, 0, 0);
}