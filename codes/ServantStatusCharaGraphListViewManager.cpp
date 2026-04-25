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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E00207 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__);
    byte_4E00207 = 1;
  }
  ServantStatusCharaGraphListViewManager__ChangeServantInfo(this, method);
  v3 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__, 0);
  this->fields.callbackAfterScroll = v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.callbackAfterScroll, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t *centerItem; // x0
  ServantStatusCharaGraphListViewItem_c *v4; // x1
  __int64 naturalAligment; // x9
  ServantStatusDialog_o *servantStatusDialog; // x8

  if ( (byte_4E00208 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4E00208 = 1;
  }
  centerItem = (int32_t *)this->fields.centerItem;
  if ( centerItem )
  {
    v4 = ServantStatusCharaGraphListViewItem_TypeInfo;
    naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)centerItem + 304LL) >= (unsigned int)naturalAligment
      && *(ServantStatusCharaGraphListViewItem_c **)(*(_QWORD *)(*(_QWORD *)centerItem + 200LL) + 8 * naturalAligment - 8) == ServantStatusCharaGraphListViewItem_TypeInfo )
    {
      servantStatusDialog = this->fields.servantStatusDialog;
      if ( servantStatusDialog )
      {
        ServantStatusDialog__ChangeCharaGraph(servantStatusDialog, centerItem[32], 0);
        return;
      }
    }
    else
    {
      centerItem = (int32_t *)sub_1CE6CF4(centerItem);
    }
    sub_1CE6958(centerItem, v4);
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
  unsigned __int64 v10; // x26
  int32_t v11; // w24
  __int64 v12; // x29
  int v13; // w27
  __int64 v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8
  UnityEngine_Object_o *backMask; // x22
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Action_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *ComponentInChildren_object__52407772; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  SpringPanel_OnFinished_o *v53; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t selectIndex; // [xsp+Ch] [xbp-64h]

  if ( (byte_4E001F4 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&SpringPanel_OnFinished_TypeInfo);
    sub_1CE6700(&ServantStatusCharaGraphListViewItem_TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E001F4 = 1;
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
    v10 = 0;
    v11 = 0;
    v12 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v10 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        sub_1CE6960(v9);
      v13 = *((_DWORD *)&v8->fields.leftAnchor + v10);
      if ( (v13 & 0x80000000) == 0 )
      {
        v14 = sub_1CE694C(ServantStatusCharaGraphListViewItem_TypeInfo);
        ListViewItem___ctor_44921328((ListViewItem_o *)v14, v11, 0);
        *(_QWORD *)(v14 + 120) = mainInfo;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v14 + 120), (int32_t)mainInfo, v15, v16, v17, v18, v19, v20);
        *(_DWORD *)(v14 + 128) = v13;
        if ( v13 == CardImageLimitCountStage )
          selectIndex = *(_DWORD *)(v14 + 20);
        debugScaleLabel = (UILabel_o *)this->fields.itemList;
        if ( !debugScaleLabel )
          goto LABEL_32;
        m_CachedPtr = debugScaleLabel->fields.m_CachedPtr;
        v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(debugScaleLabel->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_32;
        m_CancellationTokenSource_low = SLODWORD(debugScaleLabel->fields.m_CancellationTokenSource);
        ++v11;
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)debugScaleLabel,
            (Il2CppObject *)v14,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(debugScaleLabel->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v30 + 32) = v14;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 32), v14, v21, v22, v23, v24, v25, v26);
        }
      }
      if ( v12 == ++v10 )
        goto LABEL_20;
    }
  }
  selectIndex = 0;
LABEL_20:
  backMask = (UnityEngine_Object_o *)this->fields.backMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(backMask, 0, 0) )
  {
    debugScaleLabel = (UILabel_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method);
    if ( !debugScaleLabel )
      goto LABEL_32;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)debugScaleLabel,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.backMask,
      (int32_t)Component_object,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 0, 1, 0);
  v39 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_AfterScrollCallback__,
    0);
  this->fields.callbackAfterScroll = v39;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackAfterScroll,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  debugScaleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !debugScaleLabel )
LABEL_32:
    sub_1CE6958(debugScaleLabel, mainInfo);
  ComponentInChildren_object__52407772 = UnityEngine_Component__GetComponentInChildren_object__52407772(
                                           (UnityEngine_Component_o *)debugScaleLabel,
                                           (const MethodInfo_31FADDC *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__52407772, 0, 0) )
  {
    v53 = (SpringPanel_OnFinished_o *)sub_1CE694C(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v53,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnFinishedChangeCharaGraph__,
      0);
    if ( ComponentInChildren_object__52407772 )
    {
      ComponentInChildren_object__52407772[2].monitor = v53;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&ComponentInChildren_object__52407772[2].monitor,
        (int32_t)v53,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      goto LABEL_31;
    }
    goto LABEL_32;
  }
LABEL_31:
  this->fields.mainInfo = mainInfo;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)mainInfo, v47, v48, v49, v50, v51, v52);
  this->fields.lateUpdateSetEnableScroll = 1;
}


void ServantStatusCharaGraphListViewManager__DestroyList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *debugScaleLabel; // x0

  if ( (byte_4E001F5 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E001F5 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  debugScaleLabel = this->fields.debugScaleLabel;
  if ( !debugScaleLabel )
    sub_1CE6958(0, v3);
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
    sub_1CE6958(dragBackSprite, method);
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
    sub_1CE6958(dragBackSprite, method);
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
    sub_1CE6958(dragBackSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragBackSprite, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  float v11; // s0 OVERLAPPED
  float v12; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4E001FD & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001FD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
  if ( v8 )
  {
    if ( !byte_4DFDF89 )
    {
      sub_1CE6700(&UnityEngine_Vector2_TypeInfo);
      byte_4DFDF89 = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v11 = static_fields->zeroVector.fields.x;
    v12 = static_fields->zeroVector.fields.y;
  }
  else
  {
    if ( !cam )
      sub_1CE6958(v8, v9);
    v14.fields.x = x;
    v14.fields.y = y;
    v14.fields.z = z;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__WorldToScreenPoint_72722712(cam, v14, 0);
  }
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
  float v10; // s0 OVERLAPPED
  float v11; // s1
  float z; // s2
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4E001FC & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001FC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
  if ( v7 )
  {
    if ( !byte_4DFE0A9 )
    {
      sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
      byte_4DFE0A9 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v10 = static_fields->zeroVector.fields.x;
    v11 = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    if ( !cam )
      sub_1CE6958(v7, v8);
    v13.fields.z = 0.0;
    v13.fields.x = x;
    v13.fields.y = y;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__ScreenToWorldPoint_72722736(cam, v13, 0);
  }
  result.fields.z = z;
  result.fields.y = v11;
  result.fields.x = v10;
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
      sub_1CE6958(0, method);
    UIScrollView__InvalidateBounds(scrollView, 0);
    ServantStatusCharaGraphListViewManager__SetEnableScroll(this, v4);
  }
  this->fields.lateUpdateSetEnableScroll = 0;
}


void ServantStatusCharaGraphListViewManager__OnClickExViewer(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v2; // x19
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x21
  Il2CppObject *Component_object; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v9; // x21
  EventDelegate_Callback_o *v10; // x22
  ServantStatusCharaGraphListViewObject_o *v11; // x20
  System_Action_o *v12; // x21

  v2 = this;
  if ( (byte_4E00204 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__);
    byte_4E00204 = 1;
  }
  actionObject = v2->fields.actionObject;
  if ( !actionObject )
    goto LABEL_23;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(dragObject, 0, 0);
  Component_object = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !dragObject )
      goto LABEL_23;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)dragObject,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_23;
    ServantStatusCharaGraphListViewObject__SetItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)Component_object,
      0,
      0);
  }
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_23;
  ServantStatusCharaGraphViewer__SetItemDataType((ServantStatusCharaGraphViewer_o *)this, 0, 0);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_23;
  ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, 0);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_23;
  ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, 0);
  v6 = Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1CE6718(Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
  v7 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
  backMask = v2->fields.backMask;
  v9 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)v2,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0);
  v10 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v9, v10, 0),
        (this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.backMask) == 0)
    || (UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0),
        v11 = v2->fields.actionObject,
        v12 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(v12, (Il2CppObject *)v2, Method_ServantStatusCharaGraphListViewManager_OnEndUsually__, 0),
        !v11) )
  {
LABEL_23:
    sub_1CE6958(this, method);
  }
  ServantStatusCharaGraphListViewObject__Init_35950720(v11, 6, v12, 0.1, 0);
}


void ServantStatusCharaGraphListViewManager__OnClickFadeoutFrame(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v2; // x19
  struct ServantStatusCharaGraphListViewItem_o *actionObjectItem; // x8
  ServantEntity_o *ServantEntity; // x0
  ServantEntity_o *v5; // x20
  struct ServantStatusCharaGraphListViewItem_o *v6; // x8
  int32_t v7; // w0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ServantStatusCharaGraphListViewObject_o *v10; // x8
  UnityEngine_Object_o *dragObject; // x21
  Il2CppObject *Component_object; // x20
  UIDragDropListViewBackMask_o *v13; // x20
  EventDelegate_Callback_o *v14; // x21
  EventDelegate_Callback_o *v15; // x22
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v17; // x21
  int32_t v18; // w1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v22; // x21
  EventDelegate_Callback_o *v23; // x22

  v2 = this;
  if ( (byte_4E00201 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnEndAnother__);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnEndUsually__);
    byte_4E00201 = 1;
  }
  actionObjectItem = v2->fields.actionObjectItem;
  if ( !actionObjectItem )
    goto LABEL_36;
  this = (ServantStatusCharaGraphListViewManager_o *)actionObjectItem->fields.mainInfo;
  if ( !this )
    goto LABEL_36;
  ServantEntity = ServantStatusListViewItem__GetServantEntity((ServantStatusListViewItem_o *)this, 0, 0);
  if ( !ServantEntity )
    goto LABEL_27;
  v5 = ServantEntity;
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.actionObjectItem;
  if ( !this )
    goto LABEL_36;
  this = (ServantStatusCharaGraphListViewManager_o *)ServantStatusCharaGraphListViewItem__get_IsSealed(
                                                       (ServantStatusCharaGraphListViewItem_o *)this,
                                                       method);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_27;
  v6 = v2->fields.actionObjectItem;
  if ( !v6 )
    goto LABEL_36;
  v7 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(v6->fields.limitCountStage, 0);
  if ( !ServantEntity__IsAdditionExpandImage(v5, v7, 0) )
  {
LABEL_27:
    this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
    if ( this )
    {
      ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, 1, 0);
      this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
      if ( this )
      {
        ServantStatusCharaGraphViewer__DeactivateScrollViewObjects((ServantStatusCharaGraphViewer_o *)this, 0);
        v19 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
        if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
          v19 = (_QWORD *)sub_1CE6718(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
        v20 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v19, v19[4]);
        OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0, 0);
        backMask = v2->fields.backMask;
        v22 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v22,
          (Il2CppObject *)v2,
          (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
          0);
        v23 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v23,
          (Il2CppObject *)v2,
          Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
          0);
        if ( backMask )
        {
          UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v22, v23, 0);
          this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.backMask;
          if ( this )
          {
            UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)this, 0);
            actionObject = v2->fields.actionObject;
            v17 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v17,
              (Il2CppObject *)v2,
              Method_ServantStatusCharaGraphListViewManager_OnEndUsually__,
              0);
            if ( actionObject )
            {
              v18 = 6;
              goto LABEL_35;
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
  v8 = Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1CE6718(Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
  v9 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
  if ( !this )
    goto LABEL_36;
  ServantStatusCharaGraphViewer__SetItemDataType((ServantStatusCharaGraphViewer_o *)this, 1, 0);
  v10 = v2->fields.actionObject;
  if ( !v10 )
    goto LABEL_36;
  dragObject = (UnityEngine_Object_o *)v10->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(dragObject, 0, 0);
  Component_object = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !dragObject )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)dragObject,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_36;
    ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
      (ServantStatusCharaGraphListViewObject_o *)Component_object,
      v2->fields.actionObjectItem,
      0);
  }
  v13 = v2->fields.backMask;
  v14 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)v2,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0);
  v15 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v15,
    (Il2CppObject *)v2,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !v13
    || (UIDragDropListViewBackMask__DragEndMultiTouch(v13, v14, v15, 0),
        actionObject = v2->fields.actionObject,
        v17 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(v17, (Il2CppObject *)v2, Method_ServantStatusCharaGraphListViewManager_OnEndAnother__, 0),
        !actionObject) )
  {
LABEL_36:
    sub_1CE6958(this, method);
  }
  v18 = 10;
LABEL_35:
  ServantStatusCharaGraphListViewObject__Init_35950720(actionObject, v18, v17, 0.1, 0);
}


void ServantStatusCharaGraphListViewManager__OnClickListView(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager___c_c *v5; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Func_object__object__o *_9__42_0; // x22
  Il2CppObject *v8; // x23
  struct ServantStatusCharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  ServantStatusCharaGraphListViewItem_array *charaGraphViewer; // x0
  __int64 v18; // x1
  ServantStatusCharaGraphListViewItem_array *v19; // x2
  struct ListViewItem_o *linkItem; // x8
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppClass *v29; // x8
  __int64 naturalAligment; // x9
  struct ServantStatusCharaGraphListViewObject_o *v31; // x10
  int32_t v32; // w1
  struct ServantStatusCharaGraphListViewObject_o **p_actionObject; // x21
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v35; // x22
  struct ServantStatusCharaGraphListViewItem_o *Item; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  ServantStatusDialog_c *v43; // x0

  if ( (byte_4E001FA & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
    sub_1CE6700(&System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__);
    sub_1CE6700(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__42_0__);
    sub_1CE6700(&ServantStatusCharaGraphListViewManager___c_TypeInfo);
    byte_4E001FA = 1;
  }
  v5 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !ServantStatusCharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewManager___c_TypeInfo);
    v5 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__object__o *)v5->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantStatusCharaGraphListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__42_0 = (System_Func_object__object__o *)sub_1CE694C(System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__42_0,
      v8,
      Method_ServantStatusCharaGraphListViewManager___c__OnClickListView_b__42_0__,
      0);
    static_fields = ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_ListViewItem__ServantStatusCharaGraphListViewItem__o *)_9__42_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__42_0,
      (int32_t)_9__42_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
                                                               (System_Func_TSource__TResult__o *)_9__42_0,
                                                               (const MethodInfo_323A63C *)Method_System_Linq_Enumerable_Select_ListViewItem__ServantStatusCharaGraphListViewItem___);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)System_Linq_Enumerable__ToArray_object_(
                                                                    v16,
                                                                    (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_ServantStatusCharaGraphListViewItem___);
  if ( !charaGraphViewer )
    goto LABEL_40;
  v19 = charaGraphViewer;
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
      v19,
      0);
    charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.charaGraphViewer;
    if ( !charaGraphViewer )
      goto LABEL_40;
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)charaGraphViewer, 1, 0);
  }
  v21 = Method_ServantStatusCharaGraphListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1CE6718(Method_ServantStatusCharaGraphListViewManager_OnClickListView__);
  v22 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
  charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)this->fields.backMask;
  if ( !charaGraphViewer )
    goto LABEL_40;
  UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)charaGraphViewer, 0);
  if ( obj )
  {
    v29 = (Il2CppClass *)ServantStatusCharaGraphListViewObject_TypeInfo;
    naturalAligment = ServantStatusCharaGraphListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v31 = (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewObject_TypeInfo
          ? (struct ServantStatusCharaGraphListViewObject_o *)obj
          : 0LL;
    else
      v31 = 0;
    this->fields.actionObject = v31;
    p_actionObject = &this->fields.actionObject;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v32 = obj->klass->_2.typeHierarchy[naturalAligment - 1] == v29 ? (int)obj : 0;
    else
      v32 = 0;
  }
  else
  {
    v32 = 0;
    p_actionObject = &this->fields.actionObject;
    this->fields.actionObject = 0;
  }
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_actionObject, v32, v23, v24, v25, v26, v27, v28);
  actionObject = this->fields.actionObject;
  v35 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnEndMaxim__, 0);
  if ( !actionObject
    || (ServantStatusCharaGraphListViewObject__Init_35950720(actionObject, 4, v35, 0.1, 0),
        (charaGraphViewer = (ServantStatusCharaGraphListViewItem_array *)*p_actionObject) == 0) )
  {
LABEL_40:
    sub_1CE6958(charaGraphViewer, v18);
  }
  Item = ServantStatusCharaGraphListViewObject__GetItem((ServantStatusCharaGraphListViewObject_o *)charaGraphViewer, 0);
  this->fields.actionObjectItem = Item;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.actionObjectItem,
    (int32_t)Item,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
  if ( !byte_4E0020A )
  {
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    byte_4E0020A = 1;
  }
  v43 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v43 = ServantStatusDialog_TypeInfo;
  }
  v43->static_fields->_IsViewCharaGraph_k__BackingField = 1;
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
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x0
  __int64 v9; // x1
  ServantStatusCharaGraphListViewObject_o *actionObject; // x20
  System_Action_o *v11; // x21

  if ( (byte_4E001FF & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__);
    byte_4E001FF = 1;
  }
  v3 = Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__;
  if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1CE6718(Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
  v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  backMask = this->fields.backMask;
  v6 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0);
  v7 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask
    || (UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v6, v7, 0),
        actionObject = this->fields.actionObject,
        v11 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_ServantStatusCharaGraphListViewManager_OnEndFadeoutFrame__,
          0),
        !actionObject)
    || (ServantStatusCharaGraphListViewObject__Init_35950720(actionObject, 5, v11, 0.1, 0),
        (charaGraphViewer = this->fields.charaGraphViewer) == 0) )
  {
    sub_1CE6958(charaGraphViewer, v9);
  }
  ServantStatusCharaGraphViewer__FadeoutFrameScrollViewObjects(charaGraphViewer, 0.1, 0);
}


void ServantStatusCharaGraphListViewManager__OnDragUpdate(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v2; // x20
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  UnityEngine_Object_o *dragObject; // x19
  UnityEngine_Object_o *parent; // x23
  struct ServantStatusCharaGraphListViewObject_o *v6; // x8
  float m_XMin; // s9
  float m_YMin; // s11
  float m_Width; // s10
  float m_Height; // s14
  int32_t width; // w21
  int32_t height; // w22
  float x; // s8
  float y; // s12
  int32_t touchCount; // w25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v17; // s13
  float v18; // s15
  _BOOL4 IsAbleToPinch; // w24
  ServantStatusCharaGraphListViewManager_o *v20; // x0
  const MethodInfo *v21; // x2
  ServantStatusCharaGraphListViewManager_o *v22; // x0
  const MethodInfo *v23; // x2
  float v24; // s8
  float v25; // s9
  float v26; // s10
  int32_t v27; // w9
  _BOOL4 v28; // w8
  _BOOL4 v29; // w25
  int32_t v30; // w0
  float Axis; // s0
  UnityEngine_Vector2_o v32; // kr00_8
  UnityEngine_Vector2_o v33; // kr08_8
  float v34; // s12
  ServantStatusCharaGraphListViewManager_o *v35; // x0
  const MethodInfo *v36; // x2
  ServantStatusCharaGraphListViewManager_o *v37; // x0
  const MethodInfo *v38; // x2
  float v39; // s9
  float v40; // s10
  float v41; // s14
  float v42; // s11
  float v43; // s0
  int32_t oldTouchCount; // w8
  char v45; // w24
  _BOOL8 MouseButton; // x0
  const MethodInfo *v47; // x2
  float v48; // s14
  ServantStatusCharaGraphListViewManager_o *v49; // x0
  const MethodInfo *v50; // x2
  float v51; // s9
  float v52; // s10
  float v53; // s11
  float v54; // s0
  float v55; // s3
  float v56; // s0
  float v57; // s12
  float v58; // s2
  float baseScale; // s8
  float v60; // s0
  _BOOL4 v61; // w8
  _BOOL4 v62; // w9
  int emptyMessageLabel; // w8
  int32_t v64; // w1
  float v65; // s8
  float v66; // s9
  float v67; // s10
  float v68; // s0
  float v69; // s10
  ServantStatusCharaGraphListViewManager_o *v70; // x0
  const MethodInfo *v71; // x2
  float v72; // s8
  float v73; // s9
  ServantStatusCharaGraphListViewManager_o *v74; // x0
  const MethodInfo *v75; // x2
  float v76; // s8
  ServantStatusCharaGraphListViewManager_o *v77; // x0
  const MethodInfo *v78; // x2
  UnityEngine_Vector2_o SreenPosition; // kr18_8
  float v80; // s9
  ServantStatusCharaGraphListViewManager_o *v81; // x0
  const MethodInfo *v82; // x2
  UnityEngine_Vector2_o v83; // kr20_8
  float v84; // s13
  float v85; // s11
  ServantStatusCharaGraphListViewManager_o *v86; // x0
  const MethodInfo *v87; // x2
  UnityEngine_Vector2_o v88; // kr28_8
  int v89; // w8
  int v90; // w9
  float v91; // s3
  float v92; // s10
  float v93; // s0
  float v94; // s9
  float v95; // s0
  bool v96; // nf
  int v97; // w9
  float v98; // s0
  float v99; // s1
  float v100; // s1
  float v101; // s0
  float v102; // s0
  float v103; // s11
  UnityEngine_Vector2_o v104; // kr30_8
  UnityEngine_Vector2_o v105; // kr38_8
  float baseTouchSqrMagnitude; // s8
  float v107; // s0
  float v108; // [xsp+8h] [xbp-1B8h]
  float v109; // [xsp+Ch] [xbp-1B4h]
  float v110; // [xsp+14h] [xbp-1ACh]
  float v111; // [xsp+18h] [xbp-1A8h]
  float v112; // [xsp+18h] [xbp-1A8h]
  float v113; // [xsp+1Ch] [xbp-1A4h]
  float v114; // [xsp+1Ch] [xbp-1A4h]
  float v115; // [xsp+1Ch] [xbp-1A4h]
  UnityEngine_Vector3_o v116; // [xsp+20h] [xbp-1A0h]
  float v117; // [xsp+20h] [xbp-1A0h]
  float value; // [xsp+24h] [xbp-19Ch]
  float position; // [xsp+28h] [xbp-198h]
  float positiona; // [xsp+28h] [xbp-198h]
  float v121; // [xsp+2Ch] [xbp-194h]
  float v122; // [xsp+2Ch] [xbp-194h]
  float v123; // [xsp+2Ch] [xbp-194h]
  float z; // [xsp+30h] [xbp-190h]
  float v125; // [xsp+30h] [xbp-190h]
  float v126; // [xsp+34h] [xbp-18Ch]
  float v127; // [xsp+38h] [xbp-188h]
  UnityEngine_Vector3_o v128[7]; // [xsp+3Ch] [xbp-184h] BYREF
  UnityEngine_Touch_o v129; // [xsp+90h] [xbp-130h] BYREF
  UnityEngine_Touch_o dest; // [xsp+E0h] [xbp-E0h] BYREF
  float v131; // [xsp+178h] [xbp-48h]
  float v132; // [xsp+17Ch] [xbp-44h]
  UnityEngine_Vector2_o v133; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v134; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v135; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v157; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4E001FE & 1) == 0 )
  {
    sub_1CE6700(&System_Math_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1CE6700(&StringLiteral_9235/*"Mouse ScrollWheel"*/);
    byte_4E001FE = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v129, 0, sizeof(v129));
  memset(&v128[0].fields.y, 0, 68);
  actionObject = v2->fields.actionObject;
  if ( !actionObject )
    goto LABEL_136;
  dragObject = (UnityEngine_Object_o *)actionObject->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Equality(dragObject, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !dragObject )
      goto LABEL_136;
    this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)dragObject,
                                                         0);
    if ( !this )
      goto LABEL_136;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Object__op_Equality(parent, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v6 = v2->fields.actionObject;
      if ( !v6 )
        goto LABEL_136;
      m_XMin = v6->fields.dragObjectRect.fields.m_XMin;
      m_YMin = v6->fields.dragObjectRect.fields.m_YMin;
      m_Width = v6->fields.dragObjectRect.fields.m_Width;
      m_Height = v6->fields.dragObjectRect.fields.m_Height;
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0);
      if ( !this )
        goto LABEL_136;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
      v128[0].fields.x = localScale.fields.x;
      z = localScale.fields.z;
      mousePosition = UnityEngine_Input__get_mousePosition(0);
      x = mousePosition.fields.x;
      y = mousePosition.fields.y;
      touchCount = UnityEngine_Input__get_touchCount(0);
      if ( !byte_4DFE0A9 )
      {
        sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
        byte_4DFE0A9 = 1;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
      v126 = m_Width;
      v127 = m_XMin;
      if ( !this )
        goto LABEL_136;
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v17 = static_fields->zeroVector.fields.x;
      v18 = static_fields->zeroVector.fields.y;
      v132 = static_fields->zeroVector.fields.z;
      IsAbleToPinch = ServantStatusCharaGraphViewer__IsAbleToPinch((ServantStatusCharaGraphViewer_o *)this, 0);
      if ( touchCount )
      {
        v2->fields.isOldMousePosition = 0;
        if ( touchCount != 2 )
        {
          if ( touchCount == 1 )
          {
            this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0);
            if ( !this )
              goto LABEL_136;
            if ( LODWORD(this->fields.m_CancellationTokenSource) )
            {
              memmove(&dest, &this->fields.dropObjectList, 0x44u);
              v133 = UnityEngine_Touch__get_position(&dest, 0);
              WorldPosition = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                                v20,
                                v133,
                                v2->fields.camera,
                                v21);
              if ( !parent )
                goto LABEL_136;
              v139 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, WorldPosition, 0);
              if ( v2->fields.oldTouchCount == 1 )
              {
                v24 = v139.fields.x;
                v25 = v139.fields.y;
                v26 = v139.fields.z;
                v140 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                         v22,
                         v2->fields.oldTouchPosition,
                         v2->fields.camera,
                         v23);
                v141 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v140, 0);
                v17 = v24 - v141.fields.x;
                v18 = v25 - v141.fields.y;
                v132 = v26 - v141.fields.z;
              }
              else
              {
                v2->fields.oldTouchCount = 1;
              }
              v2->fields.oldTouchPosition = UnityEngine_Touch__get_position(&dest, 0);
              v29 = 0;
              v45 = 0;
              v2->fields.isTouchScale = 0;
              v131 = 0.0;
              goto LABEL_58;
            }
LABEL_137:
            sub_1CE6960(this);
          }
          oldTouchCount = v2->fields.oldTouchCount;
          v45 = 0;
          v2->fields.oldTouchCount = 0;
          v2->fields.isTouchScale = 0;
          v131 = 0.0;
          v29 = oldTouchCount > 0;
LABEL_58:
          v57 = 0.0;
          goto LABEL_64;
        }
        v131 = 0.0;
        if ( !IsAbleToPinch )
        {
          v29 = 0;
          v45 = 0;
          goto LABEL_58;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0);
        if ( !this )
          goto LABEL_136;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_137;
        memmove(&v129, &this->fields.dropObjectList, 0x44u);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_Input__get_touches(0);
        if ( !this )
          goto LABEL_136;
        if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_137;
        memmove(&v128[0].fields.y, (char *)&this->fields.seed + 4, 0x44u);
        v32 = UnityEngine_Touch__get_position(&v129, 0);
        v33 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v128[0].fields.y, 0);
        v34 = (float)(v32.fields.y + v33.fields.y) * 0.5;
        v134.fields.x = (float)(v32.fields.x + v33.fields.x) * 0.5;
        v134.fields.y = v34;
        v142 = ServantStatusCharaGraphListViewManager__GetWorldPosition(v35, v134, v2->fields.camera, v36);
        if ( !parent )
          goto LABEL_136;
        v116 = v142;
        v121 = m_Height;
        v143 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v142, 0);
        v39 = v143.fields.y;
        v40 = v143.fields.z;
        v111 = v143.fields.x;
        if ( v2->fields.oldTouchCount == 2 )
        {
          v41 = m_YMin;
          v42 = v143.fields.x;
          v144 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   v37,
                   v2->fields.oldTouchPosition,
                   v2->fields.camera,
                   v38);
          v145 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v144, 0);
          v17 = v42 - v145.fields.x;
          v18 = v39 - v145.fields.y;
          v43 = v40 - v145.fields.z;
        }
        else
        {
          v43 = v132;
          v41 = m_YMin;
          v2->fields.oldTouchCount = 2;
          v2->fields.isTouchScale = 0;
        }
        v115 = v43;
        v2->fields.oldTouchPosition.fields.x = (float)(v32.fields.x + v33.fields.x) * 0.5;
        v2->fields.oldTouchPosition.fields.y = v34;
        v104 = UnityEngine_Touch__get_position(&v129, 0);
        v105 = UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&v128[0].fields.y, 0);
        v57 = (float)((float)(v104.fields.x - v105.fields.x) * (float)(v104.fields.x - v105.fields.x))
            + (float)((float)(v104.fields.y - v105.fields.y) * (float)(v104.fields.y - v105.fields.y));
        if ( !v2->fields.isTouchScale )
        {
          m_YMin = v41;
          v29 = 0;
          v45 = 0;
          if ( v57 > 0.0 )
          {
            v2->fields.isTouchScale = 1;
            v2->fields.baseTouchSqrMagnitude = v57;
            v2->fields.baseTouchScale = v128[0].fields.x;
          }
          v107 = v115;
          m_Height = v121;
          goto LABEL_133;
        }
        baseTouchSqrMagnitude = v2->fields.baseTouchSqrMagnitude;
        m_YMin = v41;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        m_Height = v121;
        v29 = 0;
        v58 = (float)(sqrtf(v57 / baseTouchSqrMagnitude) * v2->fields.baseTouchScale) - v128[0].fields.x;
        v56 = v40;
        v52 = v39;
        v51 = v111;
        v55 = v115;
      }
      else
      {
        v27 = v2->fields.oldTouchCount;
        v28 = 0;
        v2->fields.isTouchScale = 0;
        v2->fields.oldTouchCount = 0;
        v29 = v27 > 0;
        if ( x >= 0.0 )
        {
          v30 = UnityEngine_Screen__get_width(0);
          v28 = 0;
          if ( y >= 0.0 && x <= (float)v30 )
            v28 = y <= (float)UnityEngine_Screen__get_height(0);
        }
        if ( IsAbleToPinch && v28 )
          Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9235/*"Mouse ScrollWheel"*/, 0);
        else
          Axis = 0.0;
        v131 = Axis;
        MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
        if ( MouseButton
          || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0))
          || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0)) )
        {
          v135.fields.x = x;
          v135.fields.y = y;
          v122 = m_Height;
          v48 = m_YMin;
          v146 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                   (ServantStatusCharaGraphListViewManager_o *)MouseButton,
                   v135,
                   v2->fields.camera,
                   v47);
          if ( !parent )
            goto LABEL_136;
          v116 = v146;
          v147 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v146, 0);
          v51 = v147.fields.x;
          v52 = v147.fields.y;
          v53 = v147.fields.z;
          if ( v2->fields.isOldMousePosition )
          {
            v148 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                     v49,
                     v2->fields.oldMousePosition,
                     v2->fields.camera,
                     v50);
            v149 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v148, 0);
            v17 = v51 - v149.fields.x;
            v18 = v52 - v149.fields.y;
            v54 = v53 - v149.fields.z;
          }
          else
          {
            v54 = v132;
            v2->fields.isOldMousePosition = 1;
          }
          v55 = v54;
          v56 = v53;
          m_YMin = v48;
          m_Height = v122;
          v2->fields.oldMousePosition.fields.x = x;
          v2->fields.oldMousePosition.fields.y = y;
          v57 = 0.0;
        }
        else
        {
          v56 = v132;
          v57 = 0.0;
          v52 = v18;
          v51 = v17;
          v55 = v132;
          v2->fields.isOldMousePosition = 0;
          v116.fields.y = v18;
          v116.fields.z = v55;
          v116.fields.x = v17;
        }
        v58 = v131;
      }
      v131 = v58;
      if ( v58 == 0.0 )
      {
        v45 = 0;
LABEL_63:
        v132 = v55;
        goto LABEL_64;
      }
      v132 = v56;
      baseScale = v2->fields.baseScale;
      v60 = v128[0].fields.x + v58;
      if ( v58 >= 0.0 || v60 >= baseScale )
      {
        v61 = v60 > (float)(baseScale * 3.0);
        v62 = v58 > 0.0;
        v45 = v62 && v61;
        if ( v62 && v61 )
          baseScale = baseScale * 3.0;
        else
          baseScale = v128[0].fields.x + v58;
      }
      else
      {
        v45 = 1;
      }
      if ( v128[0].fields.x == baseScale )
        goto LABEL_63;
      v114 = v55;
      if ( v2->fields.oldTouchCount > 0 || v2->fields.isOldMousePosition )
      {
        v123 = m_YMin;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v161 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v116, 0);
        v128[0].fields.x = v161.fields.x;
        positiona = v161.fields.y;
        v103 = v161.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v162.fields.z = z;
        v162.fields.x = baseScale;
        v162.fields.y = baseScale;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v162, 0);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v163.fields.x = v128[0].fields.x;
        v163.fields.y = positiona;
        v163.fields.z = v103;
        v164 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v163, 0);
        if ( !parent )
          goto LABEL_136;
        v165 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v164, 0);
        v17 = v17 + (float)(v51 - v165.fields.x);
        m_YMin = v123;
        v18 = v18 + (float)(v52 - v165.fields.y);
        v132 = v114 + (float)(v132 - v165.fields.z);
        v128[0].fields.x = baseScale;
LABEL_64:
        this = (ServantStatusCharaGraphListViewManager_o *)v2->fields.charaGraphViewer;
        if ( !this )
          goto LABEL_136;
        if ( BYTE4(this->fields.emptyMessageLabel) )
        {
          emptyMessageLabel = (int)this->fields.emptyMessageLabel;
          if ( v128[0].fields.x == v2->fields.baseScale )
          {
            if ( emptyMessageLabel == 1 )
            {
              v64 = 2;
LABEL_71:
              ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)this, v64, 0);
            }
          }
          else if ( emptyMessageLabel == 2 )
          {
            v64 = 1;
            goto LABEL_71;
          }
        }
        if ( (v45 & 1) != 0 && v57 > 0.0 && v2->fields.isTouchScale )
        {
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0);
          if ( !this )
            goto LABEL_136;
          LODWORD(v2->fields.baseTouchScale) = (unsigned int)UnityEngine_Transform__get_localScale(
                                                               (UnityEngine_Transform_o *)this,
                                                               0);
          v2->fields.baseTouchSqrMagnitude = v57;
        }
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        v65 = localPosition.fields.x;
        v66 = localPosition.fields.y;
        v67 = localPosition.fields.z;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v68 = v132;
        v151.fields.y = v18 + v66;
        v132 = v17;
        v151.fields.z = v68 + v67;
        v151.fields.x = v17 + v65;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v151, 0);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v69 = (float)width;
        v152 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
        v72 = v152.fields.x;
        v73 = v152.fields.z;
        v125 = v152.fields.y;
        if ( !byte_4DFDF89 )
        {
          v70 = (ServantStatusCharaGraphListViewManager_o *)sub_1CE6700(&UnityEngine_Vector2_TypeInfo);
          byte_4DFDF89 = 1;
        }
        v153 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v70,
                 UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                 v2->fields.camera,
                 v71);
        v113 = v153.fields.x;
        v117 = v153.fields.y;
        v153.fields.x = (float)width;
        v153.fields.y = (float)height;
        v154 = ServantStatusCharaGraphListViewManager__GetWorldPosition(
                 v74,
                 *(UnityEngine_Vector2_o *)&v153.fields.x,
                 v2->fields.camera,
                 v75);
        v110 = v154.fields.x;
        v112 = v154.fields.y;
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        value = v73;
        position = v72;
        v155 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
        v76 = v155.fields.x;
        v109 = v155.fields.y;
        SreenPosition = ServantStatusCharaGraphListViewManager__GetSreenPosition(v77, v155, v2->fields.camera, v78);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
          goto LABEL_136;
        v156.fields.y = m_YMin + m_Height;
        v156.fields.z = 0.0;
        v156.fields.x = v127;
        v157 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v156, 0);
        v80 = v157.fields.x;
        v108 = v157.fields.y;
        v83 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v81, v157, v2->fields.camera, v82);
        this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)dragObject,
                                                             0);
        if ( !this )
LABEL_136:
          sub_1CE6958(this, method);
        v158.fields.z = 0.0;
        v158.fields.y = m_YMin;
        v158.fields.x = v127 + v126;
        v159 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v158, 0);
        v84 = v159.fields.x;
        v85 = v159.fields.y;
        v88 = ServantStatusCharaGraphListViewManager__GetSreenPosition(v86, v159, v2->fields.camera, v87);
        v89 = v131 < 0.0 || v29;
        v90 = v89 | (v132 > 0.0);
        if ( (float)(v88.fields.x - v83.fields.x) <= v69 )
        {
          v95 = v69 * 0.5;
          if ( (v90 ^ 1) & 1 | (SreenPosition.fields.x <= (float)(v69 * 0.5)) )
          {
            v94 = position;
            v92 = v125;
            if ( ((v132 >= 0.0) & ~v89) == 0 )
            {
              v91 = (float)height;
              if ( SreenPosition.fields.x >= v95 )
                goto LABEL_99;
              v93 = (float)((float)(v113 + v110) * 0.5) - v76;
              goto LABEL_97;
            }
          }
          else
          {
            v92 = v125;
            v94 = position + (float)((float)((float)(v113 + v110) * 0.5) - v76);
          }
          v91 = (float)height;
        }
        else
        {
          v91 = (float)height;
          if ( !((v90 ^ 1) & 1 | (v83.fields.x <= 0.0)) )
          {
            v92 = v125;
            v93 = v113 - v80;
            v94 = position;
LABEL_97:
            v94 = v94 + v93;
            goto LABEL_99;
          }
          if ( ((v132 >= 0.0) & ~v89) != 0 )
          {
            v94 = position;
            v92 = v125;
          }
          else
          {
            v96 = v88.fields.x < v69;
            v94 = position;
            v92 = v125;
            if ( v96 )
            {
              v93 = v110 - v84;
              goto LABEL_97;
            }
          }
        }
LABEL_99:
        v97 = v89 | (v18 > 0.0);
        if ( (float)(v88.fields.y - v83.fields.y) > v91 )
        {
          if ( !((v97 ^ 1) & 1 | (v83.fields.y <= 0.0)) )
          {
            v98 = v117;
            v99 = v108;
LABEL_111:
            v102 = v98 - v99;
            goto LABEL_112;
          }
          if ( ((v18 >= 0.0) & ~v89) == 0 && v88.fields.y < v91 )
          {
            v102 = v112 - v85;
LABEL_112:
            v92 = v92 + v102;
          }
LABEL_113:
          this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)dragObject,
                                                               0);
          if ( this )
          {
            v160.fields.z = value;
            v160.fields.x = v94;
            v160.fields.y = v92;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v160, 0);
            return;
          }
          goto LABEL_136;
        }
        v100 = 0.5;
        if ( (v97 ^ 1) & 1 | (SreenPosition.fields.y <= (float)(v91 * 0.5)) )
        {
          if ( ((v18 >= 0.0) & ~v89) != 0 || SreenPosition.fields.y >= (float)(v91 * 0.5) )
            goto LABEL_113;
          v101 = v117 + v112;
          v100 = 0.5;
        }
        else
        {
          v101 = v117 + v112;
        }
        v98 = v101 * v100;
        v99 = v109;
        goto LABEL_111;
      }
      this = (ServantStatusCharaGraphListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)dragObject,
                                                           0);
      if ( !this )
        goto LABEL_136;
      v166.fields.z = z;
      v166.fields.x = baseScale;
      v166.fields.y = baseScale;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v166, 0);
      v107 = v114;
      v128[0].fields.x = baseScale;
LABEL_133:
      v132 = v107;
      goto LABEL_64;
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

  if ( (byte_4E00203 & 1) == 0 )
  {
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    byte_4E00203 = 1;
  }
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickExViewer__,
    0);
  v5 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask )
    sub_1CE6958(v6, v7);
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

  if ( (byte_4E00200 & 1) == 0 )
  {
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    byte_4E00200 = 1;
  }
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickFadeoutFrame__,
    0);
  v5 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask )
    sub_1CE6958(v6, v7);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v4, v5, 0);
}


void ServantStatusCharaGraphListViewManager__OnEndMaxim(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Camera_o *main; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  __int64 v11; // x1
  struct ServantStatusCharaGraphListViewObject_o *actionObject; // x8
  float v13; // s0
  ServantStatusCharaGraphViewer_o *charaGraphViewer; // x20
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v15; // x21
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v17; // x21
  EventDelegate_Callback_o *v18; // x22

  if ( (byte_4E001FB & 1) == 0 )
  {
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__);
    byte_4E001FB = 1;
  }
  main = UnityEngine_Camera__get_main(0);
  this->fields.camera = main;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.camera, (int32_t)main, v4, v5, v6, v7, v8, v9);
  actionObject = this->fields.actionObject;
  if ( !actionObject )
    goto LABEL_12;
  dragObject = actionObject->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_12;
  LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)this->fields.charaGraphViewer;
  this->fields.baseScale = v13;
  if ( !dragObject )
    goto LABEL_12;
  if ( BYTE4(dragObject[2].monitor) )
  {
    ServantStatusCharaGraphViewer__SetDispType((ServantStatusCharaGraphViewer_o *)dragObject, 2, 0);
    charaGraphViewer = this->fields.charaGraphViewer;
    v15 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *)sub_1CE694C(ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_TypeInfo);
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ServantStatusCharaGraphListViewManager_OnModifyViewerCenter__,
      0);
    if ( !charaGraphViewer )
      goto LABEL_12;
    ServantStatusCharaGraphViewer__SetModifyScrollViewCenter(charaGraphViewer, v15, 0);
  }
  this->fields.isOldMousePosition = 0;
  this->fields.oldTouchCount = 0;
  this->fields.isTouchScale = 0;
  backMask = this->fields.backMask;
  v17 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusCharaGraphListViewManager_OnClickMaxim__,
    0);
  v18 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v18,
    (Il2CppObject *)this,
    Method_ServantStatusCharaGraphListViewManager_OnDragUpdate__,
    0);
  if ( !backMask )
LABEL_12:
    sub_1CE6958(dragObject, v11);
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v17, v18, 0);
}


void ServantStatusCharaGraphListViewManager__OnEndUsually(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x0
  const MethodInfo *v4; // x2
  ServantStatusDialog_c *v5; // x0

  if ( (byte_4E00202 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    byte_4E00202 = 1;
  }
  backMask = this->fields.backMask;
  if ( !backMask )
    sub_1CE6958(0, method);
  UIDragDropListViewBackMask__DragEnd(backMask, 0);
  ServantStatusCharaGraphListViewManager__RequestListObject(this, 3, v4);
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
  if ( !byte_4E0020A )
  {
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    byte_4E0020A = 1;
  }
  v5 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v5 = ServantStatusDialog_TypeInfo;
  }
  v5->static_fields->_IsViewCharaGraph_k__BackingField = 0;
}


void ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  RandomLimitCountManager_c *v4; // x0
  System_Int32_array *v5; // x20
  int32_t CardImageLimitCountStage; // w0
  int32_t v7; // w0

  if ( (byte_4E00206 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_IndexOf_int___);
    sub_1CE6700(&RandomLimitCountManager_TypeInfo);
    byte_4E00206 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_16;
  if ( ServantStatusListViewItem__get_IsConvertOverwriteImage(mainInfo, 0) )
    return;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4E0020B )
  {
    sub_1CE6700(&RandomLimitCountManager_TypeInfo);
    byte_4E0020B = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( v4->static_fields->enableRandomLimitCount )
  {
    mainInfo = this->fields.mainInfo;
    if ( mainInfo )
    {
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetCardImageLimitCountStageList(mainInfo, 0);
      if ( this->fields.mainInfo )
      {
        v5 = (System_Int32_array *)mainInfo;
        CardImageLimitCountStage = ServantStatusListViewItem__GetCardImageLimitCountStage(this->fields.mainInfo, 0);
        v7 = System_Array__IndexOf_int_(
               v5,
               CardImageLimitCountStage,
               (const MethodInfo_330B610 *)Method_System_Array_IndexOf_int___);
        ListViewManager__MoveCenterItem((ListViewManager_o *)this, v7, 0, 0, 0.0, 0, 0);
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1CE6958(mainInfo, method);
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
  struct ServantStatusCharaGraphListViewObject_o *v8; // x8
  UnityEngine_Object_o *dragObject; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4E001F9 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001F9 = 1;
  }
  if ( item )
  {
    actionObject = (UnityEngine_Object_o *)this->fields.actionObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(actionObject, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      v8 = this->fields.actionObject;
      if ( !v8 )
        goto LABEL_15;
      dragObject = (UnityEngine_Object_o *)v8->fields.dragObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(dragObject, 0, 0);
      if ( ((unsigned __int8)Component_object & 1) == 0
        || !dragObject
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)dragObject,
                                 (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0 )
      {
LABEL_15:
        sub_1CE6958(Component_object, v7);
      }
      ServantStatusCharaGraphListViewObject__ChangeDisplay(
        (ServantStatusCharaGraphListViewObject_o *)Component_object,
        item,
        0);
      this->fields.actionObjectItem = item;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.actionObjectItem,
        (int32_t)item,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
  }
}


void ServantStatusCharaGraphListViewManager__OnMoveEnd(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4E001F8 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001F8 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1CE6958(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4E001F7 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__get_Count__);
    sub_1CE6700(&Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__);
    sub_1CE6700(&StringLiteral_10019/*"OnMoveEnd"*/);
    byte_4E001F7 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusCharaGraphListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1CE6958(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10019/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusCharaGraphListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1CE6958(v10, v11);
      ServantStatusCharaGraphListViewObject__Init_35950820(
        (ServantStatusCharaGraphListViewObject_o *)current,
        mode,
        v9,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusCharaGraphListViewObject__Dispose__);
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

  if ( (byte_4E00205 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusCharaGraphListViewIndicator_TypeInfo);
    byte_4E00205 = 1;
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
    sub_1CE6958(mainInfo, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_35062624(this, mode, v10);
}


void ServantStatusCharaGraphListViewManager__SetMode_35062624(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantStatusCharaGraphListViewManager__RequestListObject(this, dword_D57FB8[mode - 1], v5);
}


void ServantStatusCharaGraphListViewManager__SetMode_35062728(
        ServantStatusCharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusCharaGraphListViewManager__SetMode_35062624(this, mode, v10);
}


void ServantStatusCharaGraphListViewManager__SetObjectItem(
        ServantStatusCharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4E001F6 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewManager_o *)sub_1CE6700(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_4E001F6 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusCharaGraphListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusCharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewObject_TypeInfo )
  {
    sub_1CE6958(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusCharaGraphListViewObject__Init_35948808((ServantStatusCharaGraphListViewObject_o *)obj, v7, 0);
}


void ServantStatusCharaGraphListViewManager__add_callbackFunc(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusCharaGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusCharaGraphListViewManager_o *v10; // x0
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4E001EF & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4E001EF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v7->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1CE6CF4(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc(v10, v11, v12);
}


void ServantStatusCharaGraphListViewManager__add_callbackFunc2(
        ServantStatusCharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusCharaGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4E001F1 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    byte_4E001F1 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1CE6CF4(v7);
  ServantStatusCharaGraphListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *ServantStatusCharaGraphListViewManager__get_ObjectList(
        ServantStatusCharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4E001F3 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001F3 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1CE6958(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1CE6958(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1CE6958(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1CE6958(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusCharaGraphListViewObject__o *)v3;
}


void ServantStatusCharaGraphListViewManager__remove_callbackFunc(
        ServantStatusCharaGraphListViewManager_o *this,
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusCharaGraphListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusCharaGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4E001F0 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4E001F0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantStatusCharaGraphListViewManager_CallbackFunc_c *)v7->klass != ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1CE6CF4(v7);
  ServantStatusCharaGraphListViewManager__add_callbackFunc2(v10, v11, v12);
}


void ServantStatusCharaGraphListViewManager__remove_callbackFunc2(
        ServantStatusCharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusCharaGraphListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4E001F2 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    byte_4E001F2 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusCharaGraphListViewManager_o *)sub_1CE6CF4(v7);
  ServantStatusCharaGraphListViewManager__get_ObjectList(v10, v11);
}


void ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B12A08;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B129C0;
}


System_IAsyncResult_o *ServantStatusCharaGraphListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4E008E0 & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    byte_4E008E0 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void ServantStatusCharaGraphListViewManager_CallbackFunc__EndInvoke(
        ServantStatusCharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E008E1 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusCharaGraphListViewManager___c_TypeInfo);
    byte_4E008E1 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(ServantStatusCharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusCharaGraphListViewManager___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)ServantStatusCharaGraphListViewManager___c_TypeInfo->static_fields,
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

  if ( (byte_4E008E2 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4E008E2 = 1;
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