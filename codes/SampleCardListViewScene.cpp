void SampleCardListViewScene___ctor(SampleCardListViewScene_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SampleCardListViewScene__Init(SampleCardListViewScene_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SampleCardListViewManager_o *cardListViewManager; // x0
  SampleCardListViewManager_o *v5; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4D29F2D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SampleCardListViewScene_OnMoveEnd__);
    byte_4D29F2D = 1;
  }
  if ( !this->fields.state )
  {
    cardListViewManager = this->fields.cardListViewManager;
    if ( !cardListViewManager )
      goto LABEL_8;
    SampleCardListViewManager__CreateList(cardListViewManager, this->fields.cardSum, v2);
  }
  this->fields.state = 1;
  v5 = this->fields.cardListViewManager;
  v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SampleCardListViewScene_OnMoveEnd__, 0);
  if ( !v5 )
LABEL_8:
    sub_1C942F0(cardListViewManager, method);
  SampleCardListViewManager__SetMode_38294336(v5, 1, v6, v7);
}


void SampleCardListViewScene__OnMoveEnd(SampleCardListViewScene_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t state; // w8
  struct SampleCardListViewManager_o *v5; // x20
  System_Action_o *v6; // x21
  SampleCardListViewManager_o *cardListViewManager; // x0
  int32_t v8; // w1
  System_Action_o *v9; // x2

  if ( (byte_4D29F2E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SampleCardListViewScene_OnMoveEnd__);
    byte_4D29F2E = 1;
  }
  state = this->fields.state;
  if ( state == 2 )
  {
    cardListViewManager = this->fields.cardListViewManager;
    this->fields.state = 3;
    if ( cardListViewManager )
    {
      v8 = 3;
      v9 = 0;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C942F0(cardListViewManager, method);
  }
  if ( state == 1 )
  {
    this->fields.state = 2;
    v5 = this->fields.cardListViewManager;
    v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_SampleCardListViewScene_OnMoveEnd__, 0);
    if ( v5 )
    {
      v8 = 2;
      cardListViewManager = v5;
      v9 = v6;
LABEL_9:
      SampleCardListViewManager__SetMode_38294336(cardListViewManager, v8, v9, v2);
      return;
    }
    goto LABEL_11;
  }
}


void SampleCardListViewScene__Start(SampleCardListViewScene_o *this, const MethodInfo *method)
{
  ListViewManager_o *cardListViewManager; // x0

  cardListViewManager = (ListViewManager_o *)this->fields.cardListViewManager;
  if ( !cardListViewManager )
    sub_1C942F0(0, method);
  ListViewManager__set_IsInput(cardListViewManager, 0, 0);
}