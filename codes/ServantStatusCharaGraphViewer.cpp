void __fastcall ServantStatusCharaGraphViewer___ctor(ServantStatusCharaGraphViewer_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(
        ServantStatusCharaGraphViewer_o *this,
        const MethodInfo *method)
{
  struct ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0

  viewerListViewManager = this->fields.viewerListViewManager;
  this->fields._IsAbleToSwitchDispMode_k__BackingField = 0;
  if ( !viewerListViewManager )
    sub_B170D4();
  viewerListViewManager->fields.currentPhase = 0;
  ListViewManager__DestroyList((ListViewManager_o *)viewerListViewManager, 0LL);
}


void __fastcall ServantStatusCharaGraphViewer__FadeoutFrameScrollViewObjects(
        ServantStatusCharaGraphViewer_o *this,
        float delay,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0

  viewerListViewManager = this->fields.viewerListViewManager;
  if ( !viewerListViewManager )
    sub_B170D4();
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, delay, method);
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphViewer__GetCenterItem(
        ServantStatusCharaGraphViewer_o *this,
        const MethodInfo *method)
{
  struct ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x8
  ServantStatusCharaGraphListViewItem_o *centerItem; // x8
  __int64 v5; // x11

  if ( (byte_40F8764 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, method);
    byte_40F8764 = 1;
  }
  viewerListViewManager = this->fields.viewerListViewManager;
  if ( !viewerListViewManager )
    sub_B170D4();
  centerItem = (ServantStatusCharaGraphListViewItem_o *)viewerListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0LL;
  v5 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&centerItem->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (ServantStatusCharaGraphListViewItem_c *)centerItem->klass->_2.typeHierarchy[v5 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return centerItem;
  return 0LL;
}


int32_t __fastcall ServantStatusCharaGraphViewer__GetDispType(
        ServantStatusCharaGraphViewer_o *this,
        const MethodInfo *method)
{
  return this->fields.currentDispType;
}


bool __fastcall ServantStatusCharaGraphViewer__IsAbleToPinch(
        ServantStatusCharaGraphViewer_o *this,
        const MethodInfo *method)
{
  struct ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  struct ListViewItem_o *centerItem; // x20
  UnityEngine_Vector2_o CenterPosition; // kr00_8
  ListViewManager_o *v6; // x0
  float v7; // s8

  if ( this->fields.currentDispType != 2 )
    return 1;
  viewerListViewManager = this->fields.viewerListViewManager;
  if ( !viewerListViewManager )
    goto LABEL_11;
  centerItem = viewerListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0;
  CenterPosition = ServantStatusCharaGraphViewerListViewManager__get_CenterPosition(viewerListViewManager, method);
  v6 = (ListViewManager_o *)this->fields.viewerListViewManager;
  if ( !v6 )
LABEL_11:
    sub_B170D4();
  if ( centerItem->fields.basePosition.fields.y <= CenterPosition.fields.y )
    v7 = CenterPosition.fields.y - CenterPosition.fields.x;
  else
    v7 = CenterPosition.fields.x - CenterPosition.fields.y;
  return v7 < (float)(COERCE_FLOAT(LODWORD(ListViewManager__getPitch(v6, 0LL).fields.y)) * 0.01);
}


void __fastcall ServantStatusCharaGraphViewer__SetDispType(
        ServantStatusCharaGraphViewer_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  struct UIPanel_o *v4; // x0
  long double v5; // q0
  struct UIPanel_o *v6; // x0
  UIPanel_c *klass; // x8
  struct UIPanel_o *v8; // x0
  struct UIPanel_o *v9; // x0
  const MethodInfo *v10; // x2
  ServantStatusCharaGraphViewerListViewManager_o *v11; // x0
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  struct UIPanel_o *dragObjRootPanel; // x0
  struct UIPanel_o *listViewPanel; // x0

  this->fields.currentDispType = dispType;
  switch ( dispType )
  {
    case 2:
      viewerListViewManager = this->fields.viewerListViewManager;
      if ( viewerListViewManager )
      {
        ServantStatusCharaGraphViewerListViewManager__SetEnableScroll(viewerListViewManager, 1, method);
        dragObjRootPanel = this->fields.dragObjRootPanel;
        if ( dragObjRootPanel )
        {
          ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))dragObjRootPanel->klass->vtable._8_set_alpha.method)(
            dragObjRootPanel,
            dragObjRootPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
            0.0);
          listViewPanel = this->fields.listViewPanel;
          if ( listViewPanel )
          {
            klass = listViewPanel->klass;
            LODWORD(v5) = 1.0;
            goto LABEL_15;
          }
        }
      }
LABEL_17:
      sub_B170D4();
    case 1:
      v8 = this->fields.dragObjRootPanel;
      if ( v8 )
      {
        ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, const MethodInfo *, float))v8->klass->vtable._8_set_alpha.method)(
          v8,
          v8->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          method,
          1.0);
        v9 = this->fields.listViewPanel;
        if ( v9 )
        {
          ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v9->klass->vtable._8_set_alpha.method)(
            v9,
            v9->klass->vtable._9_CalculateFinalAlpha.methodPtr,
            0.0);
          v11 = this->fields.viewerListViewManager;
          if ( v11 )
          {
            ServantStatusCharaGraphViewerListViewManager__SetEnableScroll(v11, 0, v10);
            return;
          }
        }
      }
      goto LABEL_17;
    case 0:
      v4 = this->fields.dragObjRootPanel;
      if ( v4 )
      {
        ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, const MethodInfo *, float))v4->klass->vtable._8_set_alpha.method)(
          v4,
          v4->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          method,
          0.0);
        v6 = this->fields.listViewPanel;
        if ( v6 )
        {
          klass = v6->klass;
          LODWORD(v5) = 0;
LABEL_15:
          ((void (__fastcall *)(long double))klass->vtable._8_set_alpha.method)(v5);
          return;
        }
      }
      goto LABEL_17;
  }
}


void __fastcall ServantStatusCharaGraphViewer__SetItemDataType(
        ServantStatusCharaGraphViewer_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0

  viewerListViewManager = this->fields.viewerListViewManager;
  if ( !viewerListViewManager )
    sub_B170D4();
  ServantStatusCharaGraphViewerListViewManager__SetItemDataType(viewerListViewManager, dispType, method);
}


void __fastcall ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(
        ServantStatusCharaGraphViewer_o *this,
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyScrollViewCenter,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewerListViewManager; // x21
  const MethodInfo *v6; // x2
  ServantStatusCharaGraphViewerListViewManager_o *v7; // x0

  if ( (byte_40F8765 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, onModifyScrollViewCenter);
    byte_40F8765 = 1;
  }
  viewerListViewManager = (UnityEngine_Object_o *)this->fields.viewerListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewerListViewManager, 0LL, 0LL) )
  {
    v7 = this->fields.viewerListViewManager;
    if ( !v7 )
      sub_B170D4();
    ServantStatusCharaGraphViewerListViewManager__SetModifyScrollViewCenter(v7, onModifyScrollViewCenter, v6);
  }
}


void __fastcall ServantStatusCharaGraphViewer__Setup(
        ServantStatusCharaGraphViewer_o *this,
        int32_t currentIndex,
        ServantStatusCharaGraphListViewItem_array *items,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0

  ServantStatusCharaGraphViewer__SetDispType(this, 0, (const MethodInfo *)items);
  if ( items && (int)items->max_length >= 2 )
  {
    viewerListViewManager = this->fields.viewerListViewManager;
    this->fields._IsAbleToSwitchDispMode_k__BackingField = 1;
    if ( !viewerListViewManager )
      sub_B170D4();
    ServantStatusCharaGraphViewerListViewManager__CreateList(viewerListViewManager, currentIndex, items, v8);
  }
  else
  {
    ServantStatusCharaGraphViewer__DeactivateScrollViewObjects(this, v7);
  }
}


bool __fastcall ServantStatusCharaGraphViewer__get_IsAbleToSwitchDispMode(
        ServantStatusCharaGraphViewer_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAbleToSwitchDispMode_k__BackingField;
}


void __fastcall ServantStatusCharaGraphViewer__set_IsAbleToSwitchDispMode(
        ServantStatusCharaGraphViewer_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAbleToSwitchDispMode_k__BackingField = value;
}