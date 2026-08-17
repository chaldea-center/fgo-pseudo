void QuestBoardListViewObject___ctor(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596D2F3 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596D2F3 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void QuestBoardListViewObject__Awake(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct QuestBoardListViewItemDraw_o *itemDraw; // x8
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596D2E1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    byte_596D2E1 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___),
        this->fields.itemDraw = (struct QuestBoardListViewItemDraw_o *)Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
          (int32_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (itemDraw = this->fields.itemDraw) == 0)
    || (itemDraw->fields.mListViewObject = this,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&itemDraw->fields.mListViewObject,
          (int32_t)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(dispObject, v3);
  }
  v19 = UnityEngine_GameObject__GetComponent_object_(
          dispObject,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  this->fields.uiTouchPress = (struct UITouchPress_o *)v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.uiTouchPress,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void QuestBoardListViewObject__DisableBackPanel(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *uiTouchPress; // x20
  __int64 v5; // x1
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_596D2F1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2F1 = 1;
  }
  uiTouchPress = (UnityEngine_Object_o *)this->fields.uiTouchPress;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(uiTouchPress, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.uiTouchPress;
    if ( !v6 )
      sub_2213CDC(0, v5);
    UnityEngine_Behaviour__set_enabled(v6, 0, 0);
  }
}


QuestBoardListViewItem_o *QuestBoardListViewObject__GetItem(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596D2E3 & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    byte_596D2E3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
    return (QuestBoardListViewItem_o *)this->fields.linkItem;
  return 0;
}


void QuestBoardListViewObject__Init(QuestBoardListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  QuestBoardListViewObject__Init_43262556(this, initMode, 0, v3);
}


void QuestBoardListViewObject__InitItem(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewObject__Init_43262556(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  QuestBoardListViewObject__Init_43262640(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void QuestBoardListViewObject__Init_43262640(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  unsigned int v12; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  MethodInfo *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w9
  MissionNaviTransitionBoardItem_c *v31; // x19

  if ( (byte_596D2E5 & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    byte_596D2E5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (QuestBoardListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(QuestBoardListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( v12 <= 3 )
  {
    v30 = dword_E9CE90[v12];
    this->fields.dispMode = *((_DWORD *)&xmmword_E9C5F0 + v12);
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    QuestBoardListViewObject__SetupDisp(this, 1, v24);
  v31 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)v24, v25, v26, v27, v28, v29);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v31->_1.namespaze)(
      v31->_1.element_class,
      *(_QWORD *)&v31->_1.byval_arg.bits);
  }
}


bool QuestBoardListViewObject__IsDummy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct QuestBoardListViewItemDraw_o *v7; // x8

  if ( (byte_596D2F2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2F2 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( !v5 )
    return 0;
  v7 = this->fields.itemDraw;
  if ( !v7 )
    sub_2213CDC(v5, v6);
  return v7->fields.isDummy;
}


bool QuestBoardListViewObject__IsStateInput(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


void QuestBoardListViewObject__LateUpdate(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v6; // x11
  struct ListViewManager_o *v7; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_596D2EB & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    byte_596D2EB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
    {
      manager = this->fields.manager;
      if ( manager
        && (v6 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)v6) )
      {
        if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == QuestBoardListViewManager_TypeInfo )
          v7 = this->fields.manager;
        else
          v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      itemDraw = this->fields.itemDraw;
      if ( !itemDraw )
        sub_2213CDC(0, linkItem);
      QuestBoardListViewItemDraw__LateUpdateItem(
        itemDraw,
        (QuestBoardListViewItem_o *)linkItem,
        this->fields.dispMode,
        (QuestBoardListViewManager_o *)v7,
        0);
    }
  }
}


void QuestBoardListViewObject__OnChangeAlphaAnim(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v6; // x11
  struct ListViewManager_o *v7; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_596D2E9 & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    byte_596D2E9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
    {
      manager = this->fields.manager;
      if ( manager
        && (v6 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)v6) )
      {
        if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == QuestBoardListViewManager_TypeInfo )
          v7 = this->fields.manager;
        else
          v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      itemDraw = this->fields.itemDraw;
      if ( !itemDraw )
        sub_2213CDC(0, linkItem);
      QuestBoardListViewItemDraw__OnChangeAlphaAnim(
        itemDraw,
        (QuestBoardListViewItem_o *)linkItem,
        this->fields.dispMode,
        (QuestBoardListViewManager_o *)v7,
        0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewObject__OnClickClearResetBtn(
        QuestBoardListViewObject_o *this,
        bool isOpend,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MapControl_QuestInfo_o *manager; // x0
  __int64 naturalAligment; // x9
  QuestBoardListViewItem_o *linkItem; // x19
  __int64 v8; // x10
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  long double v12; // q0

  if ( (byte_596D2EF & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewObject_OnClickClearResetBtn__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D2EF = 1;
  }
  manager = (MapControl_QuestInfo_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_23;
  *(_QWORD *)&isOpend = QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_221405C(manager, QuestBoardListViewManager_TypeInfo, method, v3);
    goto LABEL_23;
  }
  if ( !LOBYTE(manager[3].fields.phaseInfoList) )
  {
    linkItem = (QuestBoardListViewItem_o *)this->fields.linkItem;
    if ( linkItem )
    {
      v8 = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v8
        && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == QuestBoardListViewItem_TypeInfo )
      {
        manager = linkItem->fields._quest_info_k__BackingField;
        if ( !manager )
          goto LABEL_23;
        if ( MapControl_QuestInfo__GetMine(manager, 0) )
        {
          manager = linkItem->fields._quest_info_k__BackingField;
          if ( !manager )
            goto LABEL_23;
          manager = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(manager, 0);
          if ( !manager )
            goto LABEL_23;
          if ( QuestEntity__HasFlag((QuestEntity_o *)manager, 0x400000000000000LL, 0) )
          {
            manager = linkItem->fields._quest_info_k__BackingField;
            if ( !manager )
              goto LABEL_23;
            if ( MapControl_QuestInfo__IsClear(manager, 0) )
            {
              v9 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_QuestBoardListViewObject_OnClickClearResetBtn__);
              OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
              manager = (MapControl_QuestInfo_o *)sub_291C204(0, v12);
              if ( manager )
              {
                TerminalSceneComponent__CallQuestClearReset((TerminalSceneComponent_o *)manager, linkItem, 0);
                return;
              }
LABEL_23:
              sub_2213CDC(manager, isOpend);
            }
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewObject__OnClickInfoBtn(
        QuestBoardListViewObject_o *this,
        bool isOpened,
        const MethodInfo *method)
{
  bool v3; // w20
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 naturalAligment; // x9
  struct ListViewItem_o *linkItem; // x21
  __int64 v11; // x10
  _DWORD *monitor; // x8
  int32_t v13; // w22
  __int64 v14; // x9
  __int64 v15; // x2
  TerminalSceneComponent_c *v16; // x0
  __int64 v17; // x2
  _DWORD *v18; // x8
  TerminalSceneComponent_c *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x2
  TerminalSceneComponent_c *v23; // x0
  QuestBoardListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1

  v3 = isOpened;
  if ( (byte_596D2EE & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    sub_2213A60(&Method_QuestBoardListViewObject_OnClickInfoBtn__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D2EE = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened, method);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_63;
  if ( TerminalSceneComponent__QuestInfoBusy(mInstance, 0) )
    return;
  mInstance = (TerminalSceneComponent_o *)this->fields.manager;
  if ( !mInstance )
    goto LABEL_63;
  *(_QWORD *)&isOpened = QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( mInstance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_64;
  }
  if ( LOBYTE(mInstance[1].monitor) )
    return;
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v11 = QuestBoardListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)v11)
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != QuestBoardListViewItem_TypeInfo
    || (mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor) == 0 )
  {
LABEL_63:
    sub_2213CDC(mInstance, isOpened);
  }
  if ( LODWORD(mInstance->fields.myFSM) != 2 )
    goto LABEL_30;
  mInstance = (TerminalSceneComponent_o *)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)mInstance, 0);
  if ( !mInstance )
    goto LABEL_63;
  if ( !QuestEntity__HasFlag((QuestEntity_o *)mInstance, 0x400000000000000LL, 0) )
    goto LABEL_30;
  mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor;
  if ( !mInstance )
    goto LABEL_63;
  mInstance = (TerminalSceneComponent_o *)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)mInstance, 0);
  if ( !mInstance )
    goto LABEL_63;
  if ( LODWORD(mInstance->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Height) != 5 )
    goto LABEL_30;
  monitor = linkItem[1].monitor;
  if ( !monitor )
    goto LABEL_63;
  v13 = monitor[4];
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, isOpened, v7);
  if ( CondType__IsQuestClear_47284152(v13, -1, 0, 0) )
  {
LABEL_30:
    mInstance = (TerminalSceneComponent_o *)this->fields.manager;
    if ( !mInstance )
      goto LABEL_63;
    *(_QWORD *)&isOpened = QuestBoardListViewManager_TypeInfo;
    v14 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
    if ( mInstance->klass->_2.naturalAligment >= (unsigned int)v14
      && (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v14 - 1] == QuestBoardListViewManager_TypeInfo )
    {
      QuestBoardListViewManager__SetShowingInfoAllOff(
        (QuestBoardListViewManager_o *)mInstance,
        (const MethodInfo *)QuestBoardListViewManager_TypeInfo);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened, v15);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v16 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened, v15);
        v16 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v16->static_fields->mInstance;
      if ( mInstance )
      {
        mInstance = (TerminalSceneComponent_o *)TerminalSceneComponent__QuestInfoShowing(mInstance, 0);
        v18 = linkItem[1].monitor;
        if ( v18 )
        {
          if ( (_DWORD)mInstance == v18[4] )
          {
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened, v17);
            if ( !byte_596A090 )
            {
              sub_2213A60(&TerminalSceneComponent_TypeInfo);
              byte_596A090 = 1;
            }
            v19 = TerminalSceneComponent_TypeInfo;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened, v17);
              v19 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v19->static_fields->mInstance;
            if ( mInstance )
            {
              TerminalSceneComponent__CallQuestInformationCloseAtAll(mInstance, 1, 0);
              return;
            }
          }
          else
          {
            if ( !v3 )
            {
              v20 = Method_QuestBoardListViewObject_OnClickInfoBtn__;
              if ( (*((_BYTE *)Method_QuestBoardListViewObject_OnClickInfoBtn__ + 83) & 2) != 0 )
                v20 = (_QWORD *)sub_2213A78(Method_QuestBoardListViewObject_OnClickInfoBtn__);
              v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
              OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
            }
            mInstance = (TerminalSceneComponent_o *)this->fields.itemDraw;
            if ( mInstance )
            {
              QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)mInstance, 1, 0);
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened, v22);
              if ( !byte_596A090 )
              {
                sub_2213A60(&TerminalSceneComponent_TypeInfo);
                byte_596A090 = 1;
              }
              v23 = TerminalSceneComponent_TypeInfo;
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened, v22);
                v23 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v23->static_fields->mInstance;
              if ( mInstance )
              {
                TerminalSceneComponent__CallQuestInformation(mInstance, (QuestBoardListViewItem_o *)linkItem, 0);
                return;
              }
            }
          }
        }
      }
      goto LABEL_63;
    }
LABEL_64:
    sub_221405C(mInstance, isOpened, v7, v8);
    QuestBoardListViewManager__OnStartFadeOutAlphaAnim(v24, v25);
  }
}


void QuestBoardListViewObject__OnDestroy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596D2E2 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2E2 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void QuestBoardListViewObject__OnDragStart(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v6; // x11
  struct ListViewManager_o *v7; // x21
  __int64 v8; // x1
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_596D2ED & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    byte_596D2ED = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
    {
      manager = this->fields.manager;
      if ( manager
        && (v6 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)v6) )
      {
        if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == QuestBoardListViewManager_TypeInfo )
          v7 = this->fields.manager;
        else
          v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      ListViewObject__OnDragStart((ListViewObject_o *)this, 0);
      itemDraw = this->fields.itemDraw;
      if ( !itemDraw )
        sub_2213CDC(0, v8);
      QuestBoardListViewItemDraw__OnDragStartItem(
        itemDraw,
        (QuestBoardListViewItem_o *)linkItem,
        this->fields.dispMode,
        (QuestBoardListViewManager_o *)v7,
        0);
    }
  }
}


void QuestBoardListViewObject__OnPress(QuestBoardListViewObject_o *this, bool is_press, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_596D2EC & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    byte_596D2EC = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0) <= 1 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v8 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment,
              manager->klass->_2.naturalAligment >= (unsigned int)v8) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == QuestBoardListViewManager_TypeInfo )
            v9 = this->fields.manager;
          else
            v9 = 0;
        }
        else
        {
          v9 = 0;
        }
        itemDraw = this->fields.itemDraw;
        if ( is_press )
        {
          if ( itemDraw )
          {
            QuestBoardListViewItemDraw__OnPressItem(
              itemDraw,
              (QuestBoardListViewItem_o *)linkItem,
              this->fields.dispMode,
              (QuestBoardListViewManager_o *)v9,
              0);
            return;
          }
        }
        else if ( itemDraw )
        {
          QuestBoardListViewItemDraw__OnPullItem(
            itemDraw,
            (QuestBoardListViewItem_o *)linkItem,
            this->fields.dispMode,
            (QuestBoardListViewManager_o *)v9,
            0);
          return;
        }
        sub_2213CDC(itemDraw, linkItem);
      }
    }
  }
}


void QuestBoardListViewObject__OnStartFadeOutAlphaAnim(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, method);
  QuestBoardListViewItemDraw__OnStartFadeOutAlphaAnim(itemDraw, 0);
}


void QuestBoardListViewObject__SetBackPanel(
        QuestBoardListViewObject_o *this,
        ScrTerminalListTop_o *scrTerminalListTop,
        const MethodInfo *method)
{
  UnityEngine_Object_o *uiTouchPress; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0
  struct UITouchPress_o *v8; // x8
  System_Collections_Generic_List_object__o *onClick; // x20
  EventDelegate_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_596D2F0 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18576/*"cbfTitleInfoBtnBack_Click"*/);
    byte_596D2F0 = 1;
  }
  uiTouchPress = (UnityEngine_Object_o *)this->fields.uiTouchPress;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scrTerminalListTop, method);
  if ( UnityEngine_Object__op_Inequality(uiTouchPress, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.uiTouchPress;
    if ( v7 )
    {
      UnityEngine_Behaviour__set_enabled(v7, 1, 0);
      v8 = this->fields.uiTouchPress;
      if ( v8 )
      {
        onClick = (System_Collections_Generic_List_object__o *)v8->fields.onClick;
        if ( !onClick || onClick->fields._size > 0 )
          return;
        v10 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
        EventDelegate___ctor_56337752(
          v10,
          (UnityEngine_MonoBehaviour_o *)scrTerminalListTop,
          (System_String_o *)StringLiteral_18576/*"cbfTitleInfoBtnBack_Click"*/,
          0);
        items = onClick->fields._items;
        v18 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++onClick->fields._version;
        if ( items )
        {
          size = onClick->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              onClick,
              (Il2CppObject *)v10,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            onClick->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
          }
          return;
        }
      }
    }
    sub_2213CDC(v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewObject__SetInfoShowing(QuestBoardListViewObject_o *this, bool onOff, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, onOff);
  QuestBoardListViewItemDraw__setInfoShowing(itemDraw, onOff, 0);
}


void QuestBoardListViewObject__SetInput(QuestBoardListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v10; // x1
  QuestBoardListViewItemDraw_o *v11; // x0

  if ( (byte_596D2E4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    byte_596D2E4 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v10);
    QuestBoardListViewItemDraw__SetInput(v11, (QuestBoardListViewItem_o *)v10, isInput, 0);
  }
}


void QuestBoardListViewObject__SetItem(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void QuestBoardListViewObject__SetItem_43262280(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void QuestBoardListViewObject__SetupDisp(
        QuestBoardListViewObject_o *this,
        bool isReloadTerminalBanner,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  bool v7; // w1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v11; // x1
  QuestBoardListViewItemDraw_o *v12; // x0

  if ( (byte_596D2E6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    byte_596D2E6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v11);
    QuestBoardListViewItemDraw__SetItem(
      v12,
      (QuestBoardListViewItem_o *)linkItem,
      this->fields.dispMode,
      isReloadTerminalBanner,
      0);
  }
}


void QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
        QuestBoardListViewObject_o *this,
        QuestBoardListViewItemDraw_QuestBoardDispOptions_o *questBoardDispOptions,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  bool v7; // w1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v11; // x1
  QuestBoardListViewItemDraw_o *v12; // x0

  if ( (byte_596D2E7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    byte_596D2E7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v11);
    QuestBoardListViewItemDraw__SetItemOfAreaForTeminalTopEffect(
      v12,
      (QuestBoardListViewItem_o *)linkItem,
      questBoardDispOptions,
      0);
  }
}


void QuestBoardListViewObject__SetupDispFolderForQuestBoardEffect(
        QuestBoardListViewObject_o *this,
        QuestBoardListViewItemDraw_QuestBoardDispOptions_o *questBoardDispOptions,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  bool v7; // w1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v11; // x1
  QuestBoardListViewItemDraw_o *v12; // x0

  if ( (byte_596D2E8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    byte_596D2E8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v11);
    QuestBoardListViewItemDraw__SetItemOfFolderForTerminalTopEffect(
      v12,
      (QuestBoardListViewItem_o *)linkItem,
      questBoardDispOptions,
      0);
  }
}


void QuestBoardListViewObject__Start(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.state )
    QuestBoardListViewObject__Init_43262556(this, 2, 0, v2);
}


void QuestBoardListViewObject__Update(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  struct ListViewManager_o *manager; // x8
  __int64 v6; // x11
  struct ListViewManager_o *v7; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_596D2EA & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItem_TypeInfo);
    sub_2213A60(&QuestBoardListViewManager_TypeInfo);
    byte_596D2EA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
    {
      manager = this->fields.manager;
      if ( manager
        && (v6 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)v6) )
      {
        if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == QuestBoardListViewManager_TypeInfo )
          v7 = this->fields.manager;
        else
          v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      itemDraw = this->fields.itemDraw;
      if ( !itemDraw )
        sub_2213CDC(0, linkItem);
      QuestBoardListViewItemDraw__UpdateItem(
        itemDraw,
        (QuestBoardListViewItem_o *)linkItem,
        this->fields.dispMode,
        (QuestBoardListViewManager_o *)v7,
        0);
    }
  }
}


void QuestBoardListViewObject__add_callbackFunc(
        QuestBoardListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  QuestBoardListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596D2DF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596D2DF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  QuestBoardListViewObject__remove_callbackFunc(v13, v14, v15);
}


QuestBoardListViewItemDraw_o *QuestBoardListViewObject__get_ItemDraw(
        QuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.itemDraw;
}


void QuestBoardListViewObject__remove_callbackFunc(
        QuestBoardListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  QuestBoardListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596D2E0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596D2E0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  QuestBoardListViewObject__get_ItemDraw(v13, v14);
}