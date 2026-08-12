void SampleCardListViewScene___ctor(SampleCardListViewScene_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SampleCardListViewScene__Init(SampleCardListViewScene_o *this, const MethodInfo *method)
{
  SampleCardListViewManager_o *cardListViewManager; // x0
  SampleCardListViewManager_o *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_596DE4E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SampleCardListViewScene_OnMoveEnd__);
    byte_596DE4E = 1;
  }
  if ( !this->fields.state )
  {
    cardListViewManager = this->fields.cardListViewManager;
    if ( !cardListViewManager )
      goto LABEL_8;
    SampleCardListViewManager__CreateList(cardListViewManager, this->fields.cardSum, 0);
  }
  v4 = this->fields.cardListViewManager;
  this->fields.state = 1;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SampleCardListViewScene_OnMoveEnd__, 0);
  if ( !v4 )
LABEL_8:
    sub_2213CDC(cardListViewManager, method);
  SampleCardListViewManager__SetMode_44469776(v4, 1, v5, 0);
}


void SampleCardListViewScene__OnMoveEnd(SampleCardListViewScene_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  SampleCardListViewManager_o *v4; // x20
  System_Action_o *v5; // x21
  SampleCardListViewManager_o *cardListViewManager; // x0

  if ( (byte_596DE4F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SampleCardListViewScene_OnMoveEnd__);
    byte_596DE4F = 1;
  }
  state = this->fields.state;
  if ( state == 2 )
  {
    cardListViewManager = this->fields.cardListViewManager;
    this->fields.state = 3;
    if ( !cardListViewManager )
      goto LABEL_10;
    SampleCardListViewManager__SetMode(cardListViewManager, 3, 0);
  }
  else if ( state == 1 )
  {
    v4 = this->fields.cardListViewManager;
    this->fields.state = 2;
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SampleCardListViewScene_OnMoveEnd__, 0);
    if ( v4 )
    {
      SampleCardListViewManager__SetMode_44469776(v4, 2, v5, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(cardListViewManager, method);
  }
}


void SampleCardListViewScene__Start(SampleCardListViewScene_o *this, const MethodInfo *method)
{
  ListViewManager_o *cardListViewManager; // x0

  cardListViewManager = (ListViewManager_o *)this->fields.cardListViewManager;
  if ( !cardListViewManager )
    sub_2213CDC(0, method);
  ListViewManager__set_IsInput(cardListViewManager, 0, 0);
}