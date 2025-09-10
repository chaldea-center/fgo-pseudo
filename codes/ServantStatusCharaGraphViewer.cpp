void ServantStatusCharaGraphViewer___ctor(ServantStatusCharaGraphViewer_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(
        ServantStatusCharaGraphViewer_o *this,
        const MethodInfo *method)
{
  struct ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0

  viewerListViewManager = this->fields.viewerListViewManager;
  this->fields._IsAbleToSwitchDispMode_k__BackingField = 0;
  if ( !viewerListViewManager )
    sub_1C2D6EC(0, method);
  viewerListViewManager->fields.currentPhase = 0;
  ListViewManager__DestroyList((ListViewManager_o *)viewerListViewManager, 0);
}


void ServantStatusCharaGraphViewer__FadeoutFrameScrollViewObjects(
        ServantStatusCharaGraphViewer_o *this,
        float delay,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0

  viewerListViewManager = this->fields.viewerListViewManager;
  if ( !viewerListViewManager )
    sub_1C2D6EC(0, method);
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, delay, method);
}


ServantStatusCharaGraphListViewItem_o *ServantStatusCharaGraphViewer__GetCenterItem(
        ServantStatusCharaGraphViewer_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewer_o *v2; // x19
  struct ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x8
  ServantStatusCharaGraphListViewItem_o *centerItem; // x8
  __int64 naturalAligment; // x11

  v2 = this;
  if ( (byte_4C22F9A & 1) == 0 )
  {
    this = (ServantStatusCharaGraphViewer_o *)sub_1C2D490(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4C22F9A = 1;
  }
  viewerListViewManager = v2->fields.viewerListViewManager;
  if ( !viewerListViewManager )
    sub_1C2D6EC(this, method);
  centerItem = (ServantStatusCharaGraphListViewItem_o *)viewerListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0;
  naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
  if ( centerItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ServantStatusCharaGraphListViewItem_c *)centerItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return centerItem;
  return 0;
}


int32_t ServantStatusCharaGraphViewer__GetDispType(ServantStatusCharaGraphViewer_o *this, const MethodInfo *method)
{
  return this->fields.currentDispType;
}


bool ServantStatusCharaGraphViewer__IsAbleToPinch(ServantStatusCharaGraphViewer_o *this, const MethodInfo *method)
{
  struct ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  struct ListViewItem_o *centerItem; // x20
  UnityEngine_Vector2_o CenterPosition; // kr00_8
  float v6; // s8

  if ( this->fields.currentDispType != 2 )
    return 1;
  viewerListViewManager = this->fields.viewerListViewManager;
  if ( !viewerListViewManager )
    goto LABEL_11;
  centerItem = viewerListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0;
  CenterPosition = ServantStatusCharaGraphViewerListViewManager__get_CenterPosition(viewerListViewManager, method);
  viewerListViewManager = this->fields.viewerListViewManager;
  if ( !viewerListViewManager )
LABEL_11:
    sub_1C2D6EC(viewerListViewManager, method);
  if ( centerItem->fields.basePosition.fields.y <= CenterPosition.fields.y )
    v6 = CenterPosition.fields.y - CenterPosition.fields.x;
  else
    v6 = CenterPosition.fields.x - CenterPosition.fields.y;
  return v6 < (float)(COERCE_FLOAT(LODWORD(ListViewManager__getPitch((ListViewManager_o *)viewerListViewManager, 0).fields.y))
                    * 0.01);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphViewer__SetDispType(
        ServantStatusCharaGraphViewer_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  long double v5; // q0
  ServantStatusCharaGraphViewerListViewManager_c *klass; // x8
  const MethodInfo *v7; // x2

  this->fields.currentDispType = dispType;
  switch ( dispType )
  {
    case 2:
      viewerListViewManager = this->fields.viewerListViewManager;
      if ( viewerListViewManager )
      {
        ServantStatusCharaGraphViewerListViewManager__SetEnableScroll(viewerListViewManager, 1, method);
        viewerListViewManager = (ServantStatusCharaGraphViewerListViewManager_o *)this->fields.dragObjRootPanel;
        if ( viewerListViewManager )
        {
          ((void (__fastcall *)(ServantStatusCharaGraphViewerListViewManager_o *, const MethodInfo *, float))viewerListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
            viewerListViewManager,
            viewerListViewManager->klass->vtable._8_ItemDragStart.method,
            0.0);
          viewerListViewManager = (ServantStatusCharaGraphViewerListViewManager_o *)this->fields.listViewPanel;
          if ( viewerListViewManager )
          {
            klass = viewerListViewManager->klass;
            LODWORD(v5) = 1.0;
            goto LABEL_11;
          }
        }
      }
LABEL_17:
      sub_1C2D6EC(viewerListViewManager, *(_QWORD *)&dispType);
    case 1:
      viewerListViewManager = (ServantStatusCharaGraphViewerListViewManager_o *)this->fields.dragObjRootPanel;
      if ( !viewerListViewManager )
        goto LABEL_17;
      ((void (__fastcall *)(ServantStatusCharaGraphViewerListViewManager_o *, const MethodInfo *, const MethodInfo *, float))viewerListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
        viewerListViewManager,
        viewerListViewManager->klass->vtable._8_ItemDragStart.method,
        method,
        1.0);
      viewerListViewManager = (ServantStatusCharaGraphViewerListViewManager_o *)this->fields.listViewPanel;
      if ( !viewerListViewManager )
        goto LABEL_17;
      ((void (__fastcall *)(ServantStatusCharaGraphViewerListViewManager_o *, const MethodInfo *, float))viewerListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
        viewerListViewManager,
        viewerListViewManager->klass->vtable._8_ItemDragStart.method,
        0.0);
      viewerListViewManager = this->fields.viewerListViewManager;
      if ( !viewerListViewManager )
        goto LABEL_17;
      ServantStatusCharaGraphViewerListViewManager__SetEnableScroll(viewerListViewManager, 0, v7);
      break;
    case 0:
      viewerListViewManager = (ServantStatusCharaGraphViewerListViewManager_o *)this->fields.dragObjRootPanel;
      if ( viewerListViewManager )
      {
        ((void (__fastcall *)(ServantStatusCharaGraphViewerListViewManager_o *, const MethodInfo *, const MethodInfo *, float))viewerListViewManager->klass->vtable._8_ItemDragStart.methodPtr)(
          viewerListViewManager,
          viewerListViewManager->klass->vtable._8_ItemDragStart.method,
          method,
          0.0);
        viewerListViewManager = (ServantStatusCharaGraphViewerListViewManager_o *)this->fields.listViewPanel;
        if ( viewerListViewManager )
        {
          klass = viewerListViewManager->klass;
          LODWORD(v5) = 0;
LABEL_11:
          ((void (__fastcall *)(long double))klass->vtable._8_ItemDragStart.methodPtr)(v5);
          return;
        }
      }
      goto LABEL_17;
  }
}


void ServantStatusCharaGraphViewer__SetItemDataType(
        ServantStatusCharaGraphViewer_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0

  viewerListViewManager = this->fields.viewerListViewManager;
  if ( !viewerListViewManager )
    sub_1C2D6EC(0, dispType);
  ServantStatusCharaGraphViewerListViewManager__SetItemDataType(viewerListViewManager, dispType, method);
}


void ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(
        ServantStatusCharaGraphViewer_o *this,
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyScrollViewCenter,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewerListViewManager; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ServantStatusCharaGraphViewerListViewManager_o *v8; // x0

  if ( (byte_4C22F9B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22F9B = 1;
  }
  viewerListViewManager = (UnityEngine_Object_o *)this->fields.viewerListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewerListViewManager, 0, 0) )
  {
    v8 = this->fields.viewerListViewManager;
    if ( !v8 )
      sub_1C2D6EC(0, v6);
    ServantStatusCharaGraphViewerListViewManager__SetModifyScrollViewCenter(v8, onModifyScrollViewCenter, v7);
  }
}


void ServantStatusCharaGraphViewer__Setup(
        ServantStatusCharaGraphViewer_o *this,
        int32_t currentIndex,
        ServantStatusCharaGraphListViewItem_array *items,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0

  ServantStatusCharaGraphViewer__SetDispType(this, 0, (const MethodInfo *)items);
  if ( items && SLODWORD(items->max_length) >= 2 )
  {
    viewerListViewManager = this->fields.viewerListViewManager;
    this->fields._IsAbleToSwitchDispMode_k__BackingField = 1;
    if ( !viewerListViewManager )
      sub_1C2D6EC(0, v7);
    ServantStatusCharaGraphViewerListViewManager__CreateList(viewerListViewManager, currentIndex, items, v8);
  }
  else
  {
    ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(this, v7);
  }
}


bool ServantStatusCharaGraphViewer__get_IsAbleToSwitchDispMode(
        ServantStatusCharaGraphViewer_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAbleToSwitchDispMode_k__BackingField;
}


void ServantStatusCharaGraphViewer__set_IsAbleToSwitchDispMode(
        ServantStatusCharaGraphViewer_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAbleToSwitchDispMode_k__BackingField = value;
}