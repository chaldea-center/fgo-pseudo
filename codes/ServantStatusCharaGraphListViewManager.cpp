void ServantStatusCharaGraphListViewManager___ctor(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantStatusCharaGraphListViewManager__AfterScrollCallback(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596C2E0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__);
    byte_596C2E0 = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, 0);
  this->fields.callbackAfterScroll = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackAfterScroll,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void ServantStatusCharaGraphListViewManager__Awake(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusCharaGraphListViewManager__ChangeServantInfo(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int32_t *centerItem; // x0
  ServantStatusCharaGraphListViewItem_c *v6; // x1
  __int64 naturalAligment; // x9
  ServantStatusDialog_o *servantStatusDialog; // x8

  if ( (byte_596C2E1 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_596C2E1 = 1;
  }
  centerItem = (int32_t *)this->fields.centerItem;
  if ( centerItem )
  {
    v6 = ServantStatusCharaGraphListViewItem_TypeInfo;
    naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)centerItem + 304LL) >= (unsigned int)naturalAligment
      && *(ServantStatusCharaGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)centerItem + 200LL) + 8 * naturalAligment - 8) == ServantStatusCharaGraphListViewItem_TypeInfo )
    {
      servantStatusDialog = this->fields.servantStatusDialog;
      if ( servantStatusDialog )
      {
        ServantStatusDialog__ChangeCharaGraph(servantStatusDialog, centerItem[32], v2);
        return;
      }
    }
    else
    {
      centerItem = (int32_t *)sub_221405C(centerItem, ServantStatusCharaGraphListViewItem_TypeInfo, v2, v3);
    }
    sub_2213CDC(centerItem, v6);
  }
}


void ServantStatusCharaGraphListViewManager__CreateList(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  UILabel_o *debugScaleLabel; // x0
  int32_t CardImageLimitCountStage; // w22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x25
  UILabel_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  unsigned __int64 v12; // x26
  int32_t v13; // w24
  __int64 v14; // x29
  int v15; // w27
  __int64 v16; // x25
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v32; // x8
  UnityEngine_Object_o *backMask; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Action_o *v41; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  __int64 v49; // x2
  Il2CppObject *ComponentInChildren_object__58855044; // x21
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  SpringPanel_OnFinished_o *v57; // x22
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t selectIndex; // [xsp+Ch] [xbp-64h]

  if ( (byte_596C2CD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SpringPanel_OnFinished_TypeInfo);
    sub_2213A60(&ServantStatusCharaGraphListViewItem_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C2CD = 1;
  }
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    goto LABEL_32;
  UILabel__set_text(debugScaleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !mainInfo )
    goto LABEL_32;
  CardImageLimitCountStage = ServantStatusListViewItem__GetCardImageLimitCountStage(mainInfo, 0);
  debugScaleLabel = (UILabel_o *)ServantStatusListViewItem__GetCardImageLimitCountStageList(mainInfo, 0);
  if ( !debugScaleLabel )
    goto LABEL_32;
  m_CancellationTokenSource = debugScaleLabel->fields.m_CancellationTokenSource;
  v8 = debugScaleLabel;
  ListViewManager__CreateList((ListViewManager_o *)this, (int32_t)m_CancellationTokenSource, 0);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    selectIndex = 0;
    v12 = 0;
    v13 = 0;
    v14 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v12 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        sub_2213CE4(v9);
      v15 = *((_DWORD *)&v8->fields.leftAnchor + v12);
      if ( (v15 & 0x80000000) == 0 )
      {
        v16 = sub_2213CCC(ServantStatusCharaGraphListViewItem_TypeInfo);
        ListViewItem___ctor_50819428((ListViewItem_o *)v16, v13, 0);
        *(_QWORD *)(v16 + 120) = mainInfo;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 120), (int32_t)mainInfo, v17, v18, v19, v20, v21, v22);
        *(_DWORD *)(v16 + 128) = v15;
        if ( v15 == CardImageLimitCountStage )
          selectIndex = *(_DWORD *)(v16 + 20);
        debugScaleLabel = (UILabel_o *)this->fields.itemList;
        if ( !debugScaleLabel )
          goto LABEL_32;
        m_CachedPtr = debugScaleLabel->fields.m_CachedPtr;
        v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(debugScaleLabel->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_32;
        m_CancellationTokenSource_low = SLODWORD(debugScaleLabel->fields.m_CancellationTokenSource);
        ++v13;
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)debugScaleLabel,
            (Il2CppObject *)v16,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(debugScaleLabel->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v32 + 32) = v16;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 32), v16, v23, v24, v25, v26, v27, v28);
        }
      }
      if ( v14 == ++v12 )
        goto LABEL_20;
    }
  }
  selectIndex = 0;
LABEL_20:
  backMask = (UnityEngine_Object_o *)this->fields.backMask;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Equality(backMask, 0, 0) )
  {
    debugScaleLabel = (UILabel_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method);
    if ( !debugScaleLabel )
      goto LABEL_32;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)debugScaleLabel,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.backMask,
      (int32_t)Component_object,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 0, 1, 0);
  v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0);
  this->fields.callbackAfterScroll = v41;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackAfterScroll,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  debugScaleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !debugScaleLabel )
LABEL_32:
    sub_2213CDC(debugScaleLabel, mainInfo);
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           (UnityEngine_Component_o *)debugScaleLabel,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48, v49);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__58855044, 0, 0) )
  {
    v57 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v57,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
      0);
    if ( ComponentInChildren_object__58855044 )
    {
      ComponentInChildren_object__58855044[2].monitor = v57;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&ComponentInChildren_object__58855044[2].monitor,
        (int32_t)v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      goto LABEL_31;
    }
    goto LABEL_32;
  }
LABEL_31:
  this->fields.mainInfo = mainInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo,
    (int32_t)mainInfo,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.lateUpdateSetEnableScroll = 1;
}


void ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_596C2CE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C2CE = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_2213CDC(0, v3);
  UILabel__set_text(debugScaleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ServantStatusCharaGraphListViewManager__DragBackFadein(
        ServantStatusCharaGraphListViewManager_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (dragBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(dragBackSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragMaskObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite) == 0) )
  {
    sub_2213CDC(dragBackSprite, method);
  }
  gameObject = UnityEngine_Component__get_gameObject(dragBackSprite, 0);
  TweenAlpha__Begin(gameObject, duration, 0.0, 0);
}


void ServantStatusCharaGraphListViewManager__DragBackFadeout(
        ServantStatusCharaGraphListViewManager_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (dragBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(dragBackSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragMaskObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 1, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite) == 0) )
  {
    sub_2213CDC(dragBackSprite, method);
  }
  gameObject = UnityEngine_Component__get_gameObject(dragBackSprite, 0);
  TweenAlpha__Begin(gameObject, duration, 1.0, 0);
}


void ServantStatusCharaGraphListViewManager__DragBackOff(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dragBackSprite; // x0

  dragBackSprite = (UnityEngine_Component_o *)this->fields.dragBackSprite;
  if ( !dragBackSprite
    || (dragBackSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(dragBackSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 0, 0),
        (dragBackSprite = (UnityEngine_Component_o *)this->fields.dragMaskObject) == 0) )
  {
    sub_2213CDC(dragBackSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 0, 0);
}


UnityEngine_Vector2_o ServantStatusCharaGraphListViewManager__GetSreenPosition(
        ServantStatusCharaGraphListViewManager_o *this,
        UnityEngine_Vector3_o worldPos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  unsigned __int64 v13; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_596C2D6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2D6 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, cam, method);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
  if ( v8 )
  {
    if ( !byte_59699C0 )
    {
      sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_59699C0 = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    result.fields.x = static_fields->zeroVector.fields.x;
    result.fields.y = static_fields->zeroVector.fields.y;
  }
  else
  {
    if ( !cam )
      sub_2213CDC(v8, v9);
    v15.fields.x = x;
    v15.fields.y = y;
    v15.fields.z = z;
    v13 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_83198204(cam, v15, 0);
    result.fields.y = *((float *)&v13 + 1);
    LODWORD(result.fields.x) = v13;
  }
  return result;
}


UnityEngine_Vector3_o ServantStatusCharaGraphListViewManager__GetWorldPosition(
        ServantStatusCharaGraphListViewManager_o *this,
        UnityEngine_Vector2_o screenPos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v13; // 0:kr00_12.12
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_596C2D5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2D5 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, cam, method);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
  if ( v7 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    result.fields.x = static_fields->zeroVector.fields.x;
    result.fields.y = static_fields->zeroVector.fields.y;
    result.fields.z = static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !cam )
      sub_2213CDC(v7, v8);
    v14.fields.z = 0.0;
    v14.fields.x = x;
    v14.fields.y = y;
    v13 = UnityEngine_Camera__ScreenToWorldPoint_83198228(cam, v14, 0);
    result.fields.x = v13.fields.x;
    result.fields.y = v13.fields.y;
    result.fields.z = v13.fields.z;
  }
  return result;
}


void ServantStatusCharaGraphListViewManager__LateUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.lateUpdateSetEnableScroll )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      sub_2213CDC(0, method);
    UIScrollView__InvalidateBounds(scrollView, 0);
    ServantStatusCharaGraphListViewManager__SetEnableScroll(this, v4);
  }
  this->fields.lateUpdateSetEnableScroll = 0;
}


void ServantStatusCharaGraphListViewManager__OnClickExViewer(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusCharaGraphListViewManager_o *v3; // x19
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x21
  __int64 v6; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v8; // x2
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  const MethodInfo *v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v14; // x21
  EventDelegate_Callback_o *v15; // x22
  ServantStatusCharaGraphListViewObject_o *v16; // x20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3

  v3 = this;
  if ( (byte_596C2DD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__);
    byte_596C2DD = 1;
  }
  actionObject = v3->fields.actionObject;
  if ( !actionObject )
    goto LABEL_24;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(dragObject, 0, 0);
  Component_object = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !dragObject )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)dragObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v6);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_24;
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)Component_object,
      0,
      v8);
  }
  charaGraphViewer = v3->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_24;
  this = (ServantStatusCharaGraphListViewManager_o *)charaGraphViewer->fields.viewerListViewManager;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
    (ServantStatusCharaGraphViewerListViewManager_o *)this,
    0,
    v8);
  this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, v10);
  this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_24;
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, method);
  v11 = Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_2213A78(Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
  v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0, 0);
  backMask = v3->fields.backMask;
  v14 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)v3,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0);
  v15 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v15,
    (Il2CppObject *)v3,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v14, v15, 0),
        (this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.backMask) == 0)
    || (UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0),
        v16 = v3->fields.actionObject,
        v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v17, (Il2CppObject *)v3, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0),
        !v16) )
  {
LABEL_24:
    sub_2213CDC(this, method);
  }
  ServantStatusCharaGraphListViewObject__Init_41389356(v16, 6, v17, 0.1, v18);
}


void ServantStatusCharaGraphListViewManager__OnClickFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v2; // x19
  struct ServantStatusCharaGraphListViewItem_o *actionObjectItem; // x8
  ServantEntity_o *ServantEntity; // x0
  const MethodInfo *v5; // x2
  ServantEntity_o *v6; // x20
  struct ServantStatusCharaGraphListViewItem_o *v7; // x8
  int32_t v8; // w0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8
  __int64 v13; // x2
  struct ServantStatusCharaGraphListViewObject_o *v14; // x8
  UnityEngine_Object_o *dragObject; // x21
  __int64 v16; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v18; // x2
  UIDragDropListViewBackMask_o *v19; // x20
  EventDelegate_Callback_o *v20; // x21
  EventDelegate_Callback_o *v21; // x22
  ServantStatusCharaGraphListViewObject_o *v22; // x20
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x3
  ServantStatusCharaGraphListViewObject_o *v25; // x0
  int32_t v26; // w1
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v30; // x21
  EventDelegate_Callback_o *v31; // x22
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20

  v2 = this;
  if ( (byte_596C2DA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__);
    byte_596C2DA = 1;
  }
  actionObjectItem = v2->fields.actionObjectItem;
  if ( !actionObjectItem )
    goto LABEL_37;
  this = (ServantStatusCharaGraphListViewManager_o *)actionObjectItem->fields.mainInfo;
  if ( !this )
    goto LABEL_37;
  ServantEntity = ServantStatusListViewItem__GetServantEntity((ServantStatusListViewItem_o *)this, 0, 0);
  if ( !ServantEntity )
    goto LABEL_28;
  v6 = ServantEntity;
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.actionObjectItem;
  if ( !this )
    goto LABEL_37;
  this = (ServantStatusCharaGraphListViewManager_o *)ServantStatusCharaGraphListViewItem__get_IsSealed(
                                                       (ServantStatusCharaGraphListViewItem_o *)this,
                                                       method);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_28;
  v7 = v2->fields.actionObjectItem;
  if ( !v7 )
    goto LABEL_37;
  v8 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(v7->fields.limitCountStage, 0);
  if ( !ServantEntity__IsAdditionExpandImage(v6, v8, 0) )
  {
LABEL_28:
    this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
    if ( this )
    {
      ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, v5);
      this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
      if ( this )
      {
        ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, method);
        v27 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
        if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_2213A78(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
        v28 = (System_Reflection_MethodBase_o *)sub_2213A44(v27, v27[4]);
        OverwriteAssetSoundName__PlaySystemSe(v28, 1, 0, 0);
        backMask = v2->fields.backMask;
        v30 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v30,
          (Il2CppObject *)v2,
          (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
          0);
        v31 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v31,
          (Il2CppObject *)v2,
          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
          0);
        if ( backMask )
        {
          UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v30, v31, 0);
          this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.backMask;
          if ( this )
          {
            UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0);
            actionObject = v2->fields.actionObject;
            v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v23,
              (Il2CppObject *)v2,
              Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
              0);
            if ( actionObject )
            {
              v25 = actionObject;
              v26 = 6;
              goto LABEL_36;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  v9 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_2213A78(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
  v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
  charaGraphViewer = v2->fields.charaGraphViewer;
  if ( !charaGraphViewer )
    goto LABEL_37;
  this = (ServantStatusCharaGraphListViewManager_o *)charaGraphViewer->fields.viewerListViewManager;
  if ( !this )
    goto LABEL_37;
  ServantStatusCharaGraphViewerListViewManager__SetItemDataType(
    (ServantStatusCharaGraphViewerListViewManager_o *)this,
    1,
    v11);
  v14 = v2->fields.actionObject;
  if ( !v14 )
    goto LABEL_37;
  dragObject = (UnityEngine_Object_o *)v14->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v13);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(dragObject, 0, 0);
  Component_object = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !dragObject )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)dragObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v16);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_37;
    ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)Component_object,
      v2->fields.actionObjectItem,
      v18);
  }
  v19 = v2->fields.backMask;
  v20 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v20,
    (Il2CppObject *)v2,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0);
  v21 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v21,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !v19
    || (UIDragDropListViewBackMask__DragEndMultiTouch(v19, v20, v21, 0),
        v22 = v2->fields.actionObject,
        v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v23, (Il2CppObject *)v2, Method_ServantStatusCharaGraphListViewManager_OnEndAnother__, 0),
        !v22) )
  {
LABEL_37:
    sub_2213CDC(this, method);
  }
  v25 = v22;
  v26 = 10;
LABEL_36:
  ServantStatusCharaGraphListViewObject__Init_41389356(v25, v26, v23, 0.1, v24);
}


void ServantStatusCharaGraphListViewManager__OnClickListView(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager___c_c *v5; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__42_0; // x22
  Il2CppObject *v9; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  ServantStatusCharaGraphListViewItem_array *v21; // x2
  struct ListViewItem_o *linkItem; // x8
  const MethodInfo *v23; // x2
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppClass *v32; // x8
  __int64 naturalAligment; // x9
  struct ServantStatusCharaGraphListViewObject_o *v34; // x10
  int32_t v35; // w1
  struct ServantStatusCharaGraphListViewObject_o **p_actionObject; // x21
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3
  struct ServantStatusCharaGraphListViewItem_o *Item; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  __int64 v48; // x2
  ServantStatusDialog_c *v49; // x0

  if ( (byte_596C2D3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
    sub_2213A60(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__);
    sub_2213A60(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__42_0__);
    sub_2213A60(&ServantStatusCharaGraphListViewManager___c_TypeInfo);
    byte_596C2D3 = 1;
  }
  v5 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !*(&ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo, obj, method);
    v5 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__42_0 = (System_Func_object__object__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, obj, method);
      static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__42_0,
      v9,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__42_0__,
      0);
    v10 = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    v10->__9__42_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__42_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__42_0, (int32_t)_9__42_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__42_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_object_(
                                                                    v17,
                                                                    (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_40;
  v21 = charaGraphViewer;
  if ( SLODWORD(charaGraphViewer->max_length) >= 2 )
  {
    if ( !obj )
      goto LABEL_40;
    linkItem = obj->fields.linkItem;
    if ( !linkItem )
      goto LABEL_40;
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_40;
    ServantStatusCharaGraphViewer__Setup(
      (ServantStatusCharaGraphViewer_o *)charaGraphViewer,
      linkItem->fields.index,
      v21,
      v20);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_40;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, v23);
  }
  v24 = Method_ServantStatusCharaGraphListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_2213A78(Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
  v25 = (System_Reflection_MethodBase_o *)sub_2213A44(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_40;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0);
  if ( obj )
  {
    v32 = (Il2CppClass *)ServantStatusCharaGraphListViewObject_TypeInfo;
    naturalAligment = ServantStatusCharaGraphListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v34 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
          ? (struct ServantStatusCharaGraphListViewObject_o *)obj
          : 0LL;
    else
      v34 = 0;
    this->fields.actionObject = v34;
    p_actionObject = &this->fields.actionObject;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v35 = obj->klass->_2.typeHierarchy[naturalAligment - 1] == v32 ? (int)obj : 0;
    else
      v35 = 0;
  }
  else
  {
    v35 = 0;
    p_actionObject = &this->fields.actionObject;
    this->fields.actionObject = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_actionObject, v35, v26, v27, v28, v29, v30, v31);
  actionObject = this->fields.actionObject;
  v38 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0);
  if ( !actionObject
    || (ServantStatusCharaGraphListViewObject__Init_41389356(actionObject, 4, v38, 0.1, v39),
        (charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)*p_actionObject) == 0) )
  {
LABEL_40:
    sub_2213CDC(charaGraphViewer, v19);
  }
  Item = ServantStatusCharaGraphListViewObject__GetItem(
           (ServantStatusCharaGraphListViewObject_o *)charaGraphViewer,
           v19);
  this->fields.actionObjectItem = Item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actionObjectItem,
    (int32_t)Item,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v47, v48);
  if ( !byte_596C383 )
  {
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    byte_596C383 = 1;
  }
  v49 = ServantStatusDialog_TypeInfo;
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v47, v48);
    v49 = ServantStatusDialog_TypeInfo;
  }
  v49->static_fields->_IsViewCharaGraph_k__BackingField = 1;
}


void ServantStatusCharaGraphListViewManager__OnClickMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v6; // x21
  EventDelegate_Callback_o *v7; // x22
  ServantStatusCharaGraphViewerListViewManager_o *viewerListViewManager; // x0
  const MethodInfo *v9; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x3
  struct ServantStatusCharaGraphViewer_o *charaGraphViewer; // x8

  if ( (byte_596C2D8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__);
    byte_596C2D8 = 1;
  }
  v3 = Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  backMask = this->fields.backMask;
  v6 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0);
  v7 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v6, v7, 0),
        actionObject = this->fields.actionObject,
        v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
          0),
        !actionObject)
    || (ServantStatusCharaGraphListViewObject__Init_41389356(actionObject, 5, v11, 0.1, v12),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0)
    || (viewerListViewManager = charaGraphViewer->fields.viewerListViewManager) == 0 )
  {
    sub_2213CDC(viewerListViewManager, v9);
  }
  ServantStatusCharaGraphViewerListViewManager__PlayFadeOutObjectFrame(viewerListViewManager, 0.1, v9);
}


void ServantStatusCharaGraphListViewManager__OnDragUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusCharaGraphListViewManager_o *v3; // x20
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *parent; // x23
  struct ServantStatusCharaGraphListViewObject_o *v9; // x8
  float m_YMin; // s11
  float m_Width; // s13
  int32_t width; // w21
  int32_t height; // w22
  float x; // s9
  int32_t touchCount; // w25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s15
  const MethodInfo *v18; // x2
  bool IsAbleToPinch; // w24
  float v20; // s14
  float v21; // s15
  ServantStatusCharaGraphListViewManager_o *v22; // x0
  const MethodInfo *v23; // x2
  ServantStatusCharaGraphListViewManager_o *v24; // x0
  const MethodInfo *v25; // x2
  int32_t v26; // w8
  float Axis; // s13
  _BOOL4 v28; // w25
  _BOOL8 MouseButton; // x0
  float v30; // s14
  ServantStatusCharaGraphListViewManager_o *v31; // x0
  float v32; // s9
  float v33; // s10
  float v34; // s13
  UnityEngine_Vector2_o v35; // kr140_8
  UnityEngine_Vector2_o v36; // kr190_8
  float v37; // s8
  ServantStatusCharaGraphListViewManager_o *v38; // x0
  const MethodInfo *v39; // x2
  ServantStatusCharaGraphListViewManager_o *v40; // x0
  const MethodInfo *v41; // x2
  int32_t oldTouchCount; // w8
  char v43; // w24
  float v44; // s8
  float v45; // s4
  float v46; // s2
  float v47; // s3
  float v48; // s0
  float v49; // s12
  float baseScale; // s8
  float v51; // s0
  UnityEngine_Vector2_o v52; // kr198_8
  _BOOL4 v53; // w8
  _BOOL4 v54; // w9
  float v55; // s14
  int v56; // w8
  float v57; // s13
  float v58; // s2
  int emptyMessageLabel; // w8
  int32_t v60; // w1
  float v61; // s15
  float v62; // s10
  ServantStatusCharaGraphListViewManager_o *v63; // x0
  const MethodInfo *v64; // x2
  ServantStatusCharaGraphListViewManager_o *v65; // x0
  const MethodInfo *v66; // x2
  ServantStatusCharaGraphListViewManager_o *v67; // x0
  const MethodInfo *v68; // x2
  ServantStatusCharaGraphListViewManager_o *v69; // x0
  const MethodInfo *v70; // x2
  UnityEngine_Vector2_o v71; // kr1B8_8
  ServantStatusCharaGraphListViewManager_o *v72; // x0
  const MethodInfo *v73; // x2
  UnityEngine_Vector2_o v74; // kr1C0_8
  int v75; // w8
  int v76; // w9
  float v77; // s3
  float v78; // s0
  float v79; // s8
  float v80; // s9
  int v81; // w9
  float v82; // s0
  float v83; // s1
  float v84; // s1
  float v85; // s0
  float v86; // s0
  float v87; // s1
  UnityEngine_Vector2_o v88; // kr1C8_8
  UnityEngine_Vector2_o v89; // kr1D0_8
  float v90; // s0
  float v91; // s1
  float baseTouchSqrMagnitude; // s8
  unsigned __int64 mousePosition; // kr110_8
  unsigned int v94; // s0
  UnityEngine_Vector2_o SreenPosition; // [xsp+Ch] [xbp-1B4h]
  float v96; // [xsp+10h] [xbp-1B0h]
  float v97; // [xsp+10h] [xbp-1B0h]
  UnityEngine_Vector3_o v98; // [xsp+14h] [xbp-1ACh]
  unsigned __int64 v99; // [xsp+14h] [xbp-1ACh]
  unsigned __int64 position; // [xsp+1Ch] [xbp-1A4h]
  float value; // [xsp+20h] [xbp-1A0h]
  float v102; // [xsp+24h] [xbp-19Ch]
  float v103; // [xsp+24h] [xbp-19Ch]
  float v104; // [xsp+28h] [xbp-198h]
  float v105; // [xsp+2Ch] [xbp-194h]
  float v106; // [xsp+34h] [xbp-18Ch]
  float m_Height; // [xsp+38h] [xbp-188h]
  float m_XMin; // [xsp+3Ch] [xbp-184h]
  UnityEngine_Touch_o v109; // [xsp+40h] [xbp-180h] BYREF
  UnityEngine_Touch_o v110; // [xsp+90h] [xbp-130h] BYREF
  UnityEngine_Touch_o dest; // [xsp+E0h] [xbp-E0h] BYREF
  float z; // [xsp+178h] [xbp-48h]
  float v113; // [xsp+17Ch] [xbp-44h]
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v115; // 0:kr34_12.12
  UnityEngine_Vector3_o v116; // 0:kr54_12.12
  UnityEngine_Vector3_o v117; // 0:kr60_12.12
  UnityEngine_Vector3_o v118; // 0:kr74_12.12
  UnityEngine_Vector3_o v119; // 0:kr94_12.12
  UnityEngine_Vector3_o v120; // 0:krA0_12.12
  UnityEngine_Vector3_o v121; // 0:krB4_12.12
  UnityEngine_Vector3_o v122; // 0:krD4_12.12
  UnityEngine_Vector3_o v123; // 0:krE0_12.12
  UnityEngine_Vector3_o v124; // 0:kr100_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr120_12.12
  UnityEngine_Vector3_o v126; // 0:kr134_12.12
  UnityEngine_Vector3_o v127; // 0:kr160_12.12
  UnityEngine_Vector3_o v128; // 0:kr174_12.12
  UnityEngine_Vector3_o v129; // 0:kr180_12.12
  UnityEngine_Vector2_o v130; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v131; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v132; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_596C2D7 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_2213A60(&StringLiteral_9548/*"Mouse ScrollWheel"*/);
    byte_596C2D7 = 1;
  }
  actionObject = v3->fields.actionObject;
  memset(&v109, 0, sizeof(v109));
  memset(&v110, 0, sizeof(v110));
  memset(&dest, 0, sizeof(dest));
  if ( !actionObject )
    goto LABEL_149;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Equality(dragObject, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !dragObject )
      goto LABEL_149;
    this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)dragObject,
                                                         0);
    if ( !this )
      goto LABEL_149;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Equality(parent, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v9 = v3->fields.actionObject;
      if ( !v9 )
        goto LABEL_149;
      m_YMin = v9->fields.dragObjectRect.fields.m_YMin;
      m_Width = v9->fields.dragObjectRect.fields.m_Width;
      m_Height = v9->fields.dragObjectRect.fields.m_Height;
      m_XMin = v9->fields.dragObjectRect.fields.m_XMin;
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0);
      if ( !this )
        goto LABEL_149;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
      x = localScale.fields.x;
      mousePosition = (unsigned __int64)UnityEngine_Input__get_mousePosition(0);
      touchCount = UnityEngine_Input__get_touchCount(0);
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.charaGraphViewer;
      if ( !this )
        goto LABEL_149;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->zeroVector.fields.y;
      v113 = static_fields->zeroVector.fields.x;
      z = static_fields->zeroVector.fields.z;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch((ServantStatusCharaGraphViewer_o *)this, method);
      v106 = m_Width;
      if ( touchCount )
      {
        v20 = y;
        v3->fields.isOldMousePosition = 0;
        if ( touchCount != 2 )
        {
          v21 = z;
          if ( touchCount != 1 )
          {
            oldTouchCount = v3->fields.oldTouchCount;
            v43 = 0;
            Axis = 0.0;
            v44 = 0.0;
            v3->fields.oldTouchCount = 0;
            v3->fields.isTouchScale = 0;
            v28 = oldTouchCount > 0;
            goto LABEL_69;
          }
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0);
          if ( !this )
            goto LABEL_149;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            memmove(&dest, &this->fields.dropObjectList, 0x44u);
            v130 = UnityEngine_Touch__get_position(&dest, 0);
            WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(v22, v130, v3->fields.camera, v23);
            if ( !parent )
              goto LABEL_149;
            v115 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, WorldPosition, 0);
            if ( v3->fields.oldTouchCount == 1 )
            {
              v140 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                       v24,
                       v3->fields.oldTouchPosition,
                       v3->fields.camera,
                       v25);
              v116 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v140, 0);
              v20 = v115.fields.y - v116.fields.y;
              v113 = v115.fields.x - v116.fields.x;
              z = v115.fields.z - v116.fields.z;
            }
            else
            {
              v3->fields.oldTouchCount = 1;
            }
            x = localScale.fields.x;
            v52 = UnityEngine_Touch__get_position(&dest, 0);
            v21 = z;
            v28 = 0;
            v43 = 0;
            v44 = 0.0;
            v3->fields.oldTouchPosition = v52;
            Axis = 0.0;
            v3->fields.isTouchScale = 0;
LABEL_69:
            this = (ServantStatusCharaGraphListViewManager_o *)v3->fields.charaGraphViewer;
            if ( !this )
              goto LABEL_149;
            if ( BYTE4(this->fields.emptyMessageLabel) )
            {
              emptyMessageLabel = (int)this->fields.emptyMessageLabel;
              if ( x == v3->fields.baseScale )
              {
                if ( emptyMessageLabel == 1 )
                {
                  v60 = 2;
LABEL_76:
                  ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, v60, v18);
                }
              }
              else if ( emptyMessageLabel == 2 )
              {
                v60 = 1;
                goto LABEL_76;
              }
            }
            if ( (v43 & 1) != 0 && v44 > 0.0 && v3->fields.isTouchScale )
            {
              this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)dragObject,
                                                                   0);
              if ( !this )
                goto LABEL_149;
              v94 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
              v3->fields.baseTouchSqrMagnitude = v44;
              LODWORD(v3->fields.baseTouchScale) = v94;
            }
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)dragObject,
                                                                 0);
            if ( !this )
              goto LABEL_149;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)dragObject,
                                                                 0);
            if ( !this )
              goto LABEL_149;
            v134.fields.z = v21 + localPosition.fields.z;
            v61 = v113;
            v134.fields.y = v20 + localPosition.fields.y;
            v134.fields.x = v113 + localPosition.fields.x;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v134, 0);
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)dragObject,
                                                                 0);
            if ( !this )
              goto LABEL_149;
            v62 = (float)width;
            v126 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
            if ( !byte_59699C0 )
            {
              v63 = (ServantStatusCharaGraphListViewManager_o *)sub_2213A60(&UnityEngine_Vector2_TypeInfo);
              byte_59699C0 = 1;
            }
            z = v20;
            position = (unsigned __int64)ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                           v63,
                                           UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                                           v3->fields.camera,
                                           v64);
            v132.fields.x = (float)width;
            v132.fields.y = (float)height;
            v99 = (unsigned __int64)ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                      v65,
                                      v132,
                                      v3->fields.camera,
                                      v66);
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)dragObject,
                                                                 0);
            if ( !this )
              goto LABEL_149;
            v127 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
            SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v67, v127, v3->fields.camera, v68);
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)dragObject,
                                                                 0);
            if ( !this
              || (v135.fields.z = 0.0,
                  v135.fields.y = m_YMin + m_Height,
                  v135.fields.x = m_XMin,
                  v128 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v135, 0),
                  v71 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v69, v128, v3->fields.camera, v70),
                  (this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)dragObject,
                                                                        0)) == 0) )
            {
LABEL_149:
              sub_2213CDC(this, method);
            }
            v136.fields.z = 0.0;
            v136.fields.y = m_YMin;
            v136.fields.x = m_XMin + v106;
            v129 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v136, 0);
            v74 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v72, v129, v3->fields.camera, v73);
            v75 = Axis < 0.0 || v28;
            if ( v61 > 0.0 )
              v76 = 1;
            else
              v76 = v75;
            if ( (float)(v74.fields.x - v71.fields.x) <= v62 )
            {
              v77 = (float)height;
              if ( SreenPosition.fields.x <= (float)(v62 * 0.5) )
                v76 = 0;
              if ( v76 != 1 )
              {
                v80 = v126.fields.y;
                v79 = v126.fields.x;
                if ( ((v61 >= 0.0) & ~v75) != 0 || SreenPosition.fields.x >= (float)(v62 * 0.5) )
                  goto LABEL_107;
                v78 = (float)((float)(*(float *)&position + *(float *)&v99) * 0.5) - v127.fields.x;
                goto LABEL_106;
              }
              v78 = (float)((float)(*(float *)&position + *(float *)&v99) * 0.5) - v127.fields.x;
            }
            else
            {
              v77 = (float)height;
              if ( v71.fields.x <= 0.0 )
                v76 = 0;
              if ( v76 != 1 )
              {
                if ( ((v61 >= 0.0) & ~v75) != 0 )
                {
                  v80 = v126.fields.y;
                  v79 = v126.fields.x;
                }
                else
                {
                  v80 = v126.fields.y;
                  v79 = v126.fields.x;
                  if ( v74.fields.x < v62 )
                  {
                    v78 = *(float *)&v99 - v129.fields.x;
                    goto LABEL_106;
                  }
                }
LABEL_107:
                if ( z > 0.0 )
                  v81 = 1;
                else
                  v81 = v75;
                if ( (float)(v74.fields.y - v71.fields.y) > v77 )
                {
                  if ( v71.fields.y <= 0.0 )
                    v81 = 0;
                  if ( v81 == 1 )
                  {
                    v82 = *((float *)&position + 1);
                    v83 = v128.fields.y;
LABEL_132:
                    v86 = v82 - v83;
                    goto LABEL_133;
                  }
                  if ( ((z >= 0.0) & ~v75) == 0 && v74.fields.y < v77 )
                  {
                    v86 = *((float *)&v99 + 1) - v129.fields.y;
LABEL_133:
                    v80 = v80 + v86;
                  }
LABEL_134:
                  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)dragObject,
                                                                       0);
                  if ( this )
                  {
                    v137.fields.x = v79;
                    v137.fields.y = v80;
                    v137.fields.z = v126.fields.z;
                    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v137, 0);
                    return;
                  }
                  goto LABEL_149;
                }
                v84 = 0.5;
                if ( SreenPosition.fields.y <= (float)(v77 * 0.5) )
                  v81 = 0;
                if ( v81 == 1 )
                {
                  v85 = *((float *)&position + 1) + *((float *)&v99 + 1);
                }
                else
                {
                  if ( ((z >= 0.0) & ~v75) != 0 || SreenPosition.fields.y >= (float)(v77 * 0.5) )
                    goto LABEL_134;
                  v85 = *((float *)&position + 1) + *((float *)&v99 + 1);
                  v84 = 0.5;
                }
                v82 = v85 * v84;
                v83 = v127.fields.y;
                goto LABEL_132;
              }
              v78 = *(float *)&position - v128.fields.x;
            }
            v80 = v126.fields.y;
            v79 = v126.fields.x;
LABEL_106:
            v79 = v79 + v78;
            goto LABEL_107;
          }
LABEL_150:
          sub_2213CE4(this);
        }
        v21 = z;
        if ( !IsAbleToPinch )
        {
          v28 = 0;
          v44 = 0.0;
          v43 = 0;
          Axis = 0.0;
          goto LABEL_69;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0);
        if ( !this )
          goto LABEL_149;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_150;
        memmove(&v110, &this->fields.dropObjectList, 0x44u);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0);
        if ( !this )
          goto LABEL_149;
        if ( ((__int64)this->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
          goto LABEL_150;
        v105 = localScale.fields.x;
        memmove(&v109, (char *)&this->fields.seed + 4, 0x44u);
        v35 = UnityEngine_Touch__get_position(&v110, 0);
        v36 = UnityEngine_Touch__get_position(&v109, 0);
        v37 = (float)(v35.fields.y + v36.fields.y) * 0.5;
        v131.fields.x = (float)(v35.fields.x + v36.fields.x) * 0.5;
        v131.fields.y = v37;
        v120 = ServantStatusCharaGraphListViewManager__GetWorldPosition(v38, v131, v3->fields.camera, v39);
        if ( !parent )
          goto LABEL_149;
        v98 = v120;
        value = localScale.fields.z;
        v121 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v120, 0);
        v32 = v121.fields.x;
        if ( v3->fields.oldTouchCount == 2 )
        {
          v142 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v40,
                   v3->fields.oldTouchPosition,
                   v3->fields.camera,
                   v41);
          v122 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v142, 0);
          v113 = v121.fields.x - v122.fields.x;
          z = v121.fields.y - v122.fields.y;
          v96 = v121.fields.z - v122.fields.z;
        }
        else
        {
          v87 = z;
          v3->fields.isTouchScale = 0;
          v3->fields.oldTouchCount = 2;
          v96 = v87;
          z = v20;
        }
        Axis = 0.0;
        v3->fields.oldTouchPosition.fields.x = (float)(v35.fields.x + v36.fields.x) * 0.5;
        v3->fields.oldTouchPosition.fields.y = v37;
        v88 = UnityEngine_Touch__get_position(&v110, 0);
        v89 = UnityEngine_Touch__get_position(&v109, 0);
        v90 = (float)(v88.fields.x - v89.fields.x) * (float)(v88.fields.x - v89.fields.x);
        v91 = (float)(v88.fields.y - v89.fields.y) * (float)(v88.fields.y - v89.fields.y);
        v44 = v90 + v91;
        if ( !v3->fields.isTouchScale )
        {
          v28 = 0;
          v43 = 0;
          if ( v44 <= 0.0 )
          {
            v21 = v96;
            v20 = z;
            x = localScale.fields.x;
          }
          else
          {
            x = localScale.fields.x;
            v21 = v96;
            v20 = z;
            v3->fields.isTouchScale = 1;
            v3->fields.baseTouchScale = localScale.fields.x;
            v3->fields.baseTouchSqrMagnitude = v44;
          }
          goto LABEL_69;
        }
        v104 = v90 + v91;
        baseTouchSqrMagnitude = v3->fields.baseTouchSqrMagnitude;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v18);
        v28 = 0;
        v47 = z;
        v45 = v96;
        v46 = v121.fields.z;
        v33 = v121.fields.y;
        Axis = (float)(sqrtf(v104 / baseTouchSqrMagnitude) * v3->fields.baseTouchScale) - localScale.fields.x;
        v48 = v113;
      }
      else
      {
        v26 = v3->fields.oldTouchCount;
        Axis = 0.0;
        value = localScale.fields.z;
        v3->fields.isTouchScale = 0;
        v3->fields.oldTouchCount = 0;
        v28 = v26 > 0;
        if ( *(float *)&mousePosition >= 0.0
          && *(float *)&mousePosition <= (float)UnityEngine_Screen__get_width(0)
          && *((float *)&mousePosition + 1) >= 0.0
          && (IsAbleToPinch & (*((float *)&mousePosition + 1) <= (float)UnityEngine_Screen__get_height(0))) == 1 )
        {
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9548/*"Mouse ScrollWheel"*/, 0);
        }
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
        v105 = localScale.fields.x;
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0)) )
        {
          v30 = v113;
          v102 = Axis;
          v117 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                   (UnityEngine_Vector2_o)mousePosition,
                   v3->fields.camera,
                   v18);
          if ( !parent )
            goto LABEL_149;
          v98 = v117;
          v118 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v117, 0);
          v32 = v118.fields.x;
          v33 = v118.fields.y;
          if ( v3->fields.isOldMousePosition )
          {
            v141 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v31,
                     v3->fields.oldMousePosition,
                     v3->fields.camera,
                     v18);
            v119 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v141, 0);
            v30 = v118.fields.x - v119.fields.x;
            y = v118.fields.y - v119.fields.y;
            v34 = v118.fields.z - v119.fields.z;
          }
          else
          {
            v34 = z;
            v3->fields.isOldMousePosition = 1;
          }
          v45 = v34;
          Axis = v102;
          v46 = v118.fields.z;
          v3->fields.oldMousePosition = (struct UnityEngine_Vector2_o)mousePosition;
          v47 = y;
          v104 = 0.0;
          v48 = v30;
        }
        else
        {
          v46 = z;
          v33 = y;
          v47 = y;
          v3->fields.isOldMousePosition = 0;
          v45 = v46;
          v98.fields.y = y;
          v98.fields.z = v46;
          v104 = 0.0;
          v48 = v113;
          v32 = v113;
          v98.fields.x = v113;
        }
      }
      if ( Axis == 0.0 )
      {
        x = v105;
        v43 = 0;
        v21 = v45;
        v20 = v47;
        v113 = v48;
      }
      else
      {
        v49 = v48;
        baseScale = v3->fields.baseScale;
        v51 = v105 + Axis;
        if ( Axis >= 0.0 || v51 >= baseScale )
        {
          v53 = v51 > (float)(baseScale * 3.0);
          v54 = Axis > 0.0;
          v43 = v54 && v53;
          if ( v54 && v53 )
            baseScale = baseScale * 3.0;
          else
            baseScale = v105 + Axis;
        }
        else
        {
          v43 = 1;
        }
        v55 = v32;
        x = v105;
        if ( v105 == baseScale )
        {
          v21 = v45;
          v20 = v47;
        }
        else
        {
          v56 = v3->fields.oldTouchCount;
          v97 = v45;
          z = v47;
          if ( v56 > 0 || v3->fields.isOldMousePosition )
          {
            v103 = Axis;
            v57 = v46;
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)dragObject,
                                                                 0);
            if ( !this )
              goto LABEL_149;
            v123 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v98, 0);
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)dragObject,
                                                                 0);
            if ( !this )
              goto LABEL_149;
            v133.fields.x = baseScale;
            v133.fields.y = baseScale;
            v133.fields.z = value;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v133, 0);
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)dragObject,
                                                                 0);
            if ( !this )
              goto LABEL_149;
            v143 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v123, 0);
            if ( !parent )
              goto LABEL_149;
            v124 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v143, 0);
            v58 = v57 - v124.fields.z;
            Axis = v103;
            x = baseScale;
            v113 = v49 + (float)(v55 - v124.fields.x);
            v20 = z + (float)(v33 - v124.fields.y);
            v21 = v97 + v58;
            goto LABEL_68;
          }
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0);
          if ( !this )
            goto LABEL_149;
          v138.fields.x = baseScale;
          v138.fields.y = baseScale;
          v138.fields.z = value;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v138, 0);
          x = baseScale;
          v21 = v97;
          v20 = z;
        }
        v113 = v49;
      }
LABEL_68:
      v44 = v104;
      goto LABEL_69;
    }
  }
}


void ServantStatusCharaGraphListViewManager__OnEndAnother(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596C2DC & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    byte_596C2DC = 1;
  }
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0);
  v5 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask )
    sub_2213CDC(v6, v7);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v4, v5, 0);
}


void ServantStatusCharaGraphListViewManager__OnEndFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596C2D9 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    byte_596C2D9 = 1;
  }
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0);
  v5 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask )
    sub_2213CDC(v6, v7);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v4, v5, 0);
}


void ServantStatusCharaGraphListViewManager__OnEndMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Camera_o *main; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v11; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_c *v18; // x0
  EventDelegate_Callback_o *v19; // x21
  EventDelegate_Callback_o *v20; // x22
  const MethodInfo *v21; // x2
  float v22; // s0

  if ( (byte_596C2D4 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__);
    byte_596C2D4 = 1;
  }
  main = UnityEngine_Camera__get_main(0);
  this->fields.camera = main;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.camera, (int32_t)main, v4, v5, v6, v7, v8, v9);
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_12;
  dragObject = actionObject->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_12;
  LODWORD(v22) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)this->fields.charaGraphViewer;
  this->fields.baseScale = v22;
  if ( !dragObject )
    goto LABEL_12;
  if ( BYTE4(dragObject[2].monitor) )
  {
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)dragObject, 2, v21);
    charaGraphViewer = this->fields.charaGraphViewer;
    v14 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_2213CCC(ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      v15);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v14, v16);
  }
  backMask = this->fields.backMask;
  this->fields.isOldMousePosition = 0;
  v18 = EventDelegate_Callback_TypeInfo;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  v19 = (EventDelegate_Callback_o *)sub_2213CCC(v18);
  EventDelegate_Callback___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0);
  v20 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v20,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask )
LABEL_12:
    sub_2213CDC(dragObject, v11);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v19, v20, 0);
}


void ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  ServantStatusDialog_c *v7; // x0

  if ( (byte_596C2DB & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    byte_596C2DB = 1;
  }
  backMask = this->fields.backMask;
  if ( !backMask )
    sub_2213CDC(0, method);
  UIDragDropListViewBackMask__DragEnd(backMask, 0);
  ServantStatusCharaGraphListViewManager__RequestListObject(this, 3, v4);
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v5, v6);
  if ( !byte_596C383 )
  {
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    byte_596C383 = 1;
  }
  v7 = ServantStatusDialog_TypeInfo;
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v5, v6);
    v7 = ServantStatusDialog_TypeInfo;
  }
  v7->static_fields->_IsViewCharaGraph_k__BackingField = 0;
}


void ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v4; // x2
  RandomLimitCountManager_c *v5; // x0
  System_Int32_array *v6; // x20
  int32_t CardImageLimitCountStage; // w0
  int32_t v8; // w0

  if ( (byte_596C2DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&RandomLimitCountManager_TypeInfo);
    byte_596C2DF = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_16;
  if ( ServantStatusListViewItem__get_IsConvertOverwriteImage(mainInfo, 0) )
    return;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method, v4);
  if ( !byte_596C1A0 )
  {
    sub_2213A60(&RandomLimitCountManager_TypeInfo);
    byte_596C1A0 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method, v4);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount )
  {
    mainInfo = this->fields.mainInfo;
    if ( mainInfo )
    {
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetCardImageLimitCountStageList(mainInfo, 0);
      if ( this->fields.mainInfo )
      {
        v6 = (System_Int32_array *)mainInfo;
        CardImageLimitCountStage = ServantStatusListViewItem__GetCardImageLimitCountStage(this->fields.mainInfo, 0);
        v8 = System_Array__IndexOf_int_(
               v6,
               CardImageLimitCountStage,
               (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
        ListViewManager__MoveCenterItem((ListViewManager_o *)this, v8, 0, 0, 0.0, 0, 0);
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_2213CDC(mainInfo, method);
  }
LABEL_15:
  ServantStatusCharaGraphListViewManager__SetEnableScroll(this, method);
}


void ServantStatusCharaGraphListViewManager__OnModifyViewerCenter(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actionObject; // x21
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct ServantStatusCharaGraphListViewObject_o *v9; // x8
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v11; // x2
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596C2D2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2D2 = 1;
  }
  if ( item )
  {
    actionObject = (UnityEngine_Object_o *)this->fields.actionObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(actionObject, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      v9 = this->fields.actionObject;
      if ( !v9 )
        goto LABEL_15;
      dragObject = (UnityEngine_Object_o *)v9->fields.dragObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(dragObject, 0, 0);
      if ( ((unsigned __int8)Component_object & 1) == 0
        || !dragObject
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)dragObject,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0 )
      {
LABEL_15:
        sub_2213CDC(Component_object, v7);
      }
      ServantStatusCharaGraphListViewObject__ChangeDisplay(
        (ServantStatusCharaGraphListViewObject_o *)Component_object,
        item,
        v11);
      this->fields.actionObjectItem = item;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.actionObjectItem,
        (int32_t)item,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
  }
}


void ServantStatusCharaGraphListViewManager__OnMoveEnd(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596C2D1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2D1 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewManager__RequestListObject(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C2D0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__);
    sub_2213A60(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C2D0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      ServantStatusCharaGraphListViewObject__Init_41387464(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v10,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
  }
}


void ServantStatusCharaGraphListViewManager__SetEnableScroll(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  bool v4; // w20
  const MethodInfo *v5; // x2
  __int64 naturalAligment; // x10

  if ( (byte_596C2DE & 1) == 0 )
  {
    sub_2213A60(&ServantStatusCharaGraphListViewIndicator_TypeInfo);
    byte_596C2DE = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (!mainInfo->fields.isCollection
      ? (v4 = !ServantStatusListViewItem__get_IsEnableOwnRandomSetting(mainInfo, 0))
      : (v4 = 1),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.scrollView) == 0
     || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mainInfo, v4, 0),
         (mainInfo = (ServantStatusListViewItem_o *)this->fields.indicator) == 0)
     || (naturalAligment = ServantStatusCharaGraphListViewIndicator_TypeInfo->_2.naturalAligment,
         mainInfo->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (ServantStatusCharaGraphListViewIndicator_c *)mainInfo->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewIndicator_TypeInfo) )
  {
    sub_2213CDC(mainInfo, method);
  }
  ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
    (ServantStatusCharaGraphListViewIndicator_o *)mainInfo,
    v4,
    v5);
}


void ServantStatusCharaGraphListViewManager__SetMode(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_41386816(this, mode, v10);
}


void ServantStatusCharaGraphListViewManager__SetMode_41386816(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantStatusCharaGraphListViewManager__RequestListObject(this, dword_ED931C[mode - 1], v5);
}


void ServantStatusCharaGraphListViewManager__SetMode_41386920(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_41386816(this, mode, v10);
}


void ServantStatusCharaGraphListViewManager__SetObjectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596C2CF & 1) == 0 )
  {
    sub_2213A60(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_596C2CF = 1;
  }
  if ( obj
    && (naturalAligment = ServantStatusCharaGraphListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  ServantStatusCharaGraphListViewObject__Init_41386688(
    (ServantStatusCharaGraphListViewObject_o *)v7,
    v8,
    (const MethodInfo *)item);
}


void ServantStatusCharaGraphListViewManager__add_callbackFunc(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C2C8 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_596C2C8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v6->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewManager_o *)sub_221405C(
                                                      v6,
                                                      ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo,
                                                      v7,
                                                      v8);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc(v11, v12, v13);
}


void ServantStatusCharaGraphListViewManager__add_callbackFunc2(
        ServantStatusCharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C2CA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C2CA = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ServantStatusCharaGraphListViewManager__get_ObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596C2CC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2CC = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v3;
}


void ServantStatusCharaGraphListViewManager__remove_callbackFunc(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C2C9 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_596C2C9 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v6->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewManager_o *)sub_221405C(
                                                      v6,
                                                      ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo,
                                                      v7,
                                                      v8);
  ServantStatusCharaGraphListViewManager__add_callbackFunc2(v11, v12, v13);
}


void ServantStatusCharaGraphListViewManager__remove_callbackFunc2(
        ServantStatusCharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596C2CB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C2CB = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  ServantStatusCharaGraphListViewManager__get_ObjectList(v11, v12);
}


void ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2004E24;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2004DDC;
}


System_IAsyncResult_o *ServantStatusCharaGraphListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ServantStatusCharaGraphListViewManager_CallbackFunc__Invoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ServantStatusCharaGraphListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C2E2 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusCharaGraphListViewManager___c_TypeInfo);
    byte_596C2E2 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantStatusCharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusCharaGraphListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusCharaGraphListViewManager___c___ctor(
        ServantStatusCharaGraphListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ServantStatusCharaGraphListViewItem_o *ServantStatusCharaGraphListViewManager___c___OnClickListView_b__42_0(
        ServantStatusCharaGraphListViewManager___c_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_596C2E3 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_596C2E3 = 1;
  }
  if ( !x )
    return 0;
  naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
  if ( x->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ServantStatusCharaGraphListViewItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)x;
  return 0;
}