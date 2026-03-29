void QuestBoardListViewObject___ctor(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D609 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2D609 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void QuestBoardListViewObject__Awake(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct QuestBoardListViewItemDraw_o *itemDraw; // x8

  if ( (byte_4D2D5F8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___);
    byte_4D2D5F8 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___),
        this->fields.itemDraw = (struct QuestBoardListViewItemDraw_o *)Component_object,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
          (int32_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (itemDraw = this->fields.itemDraw) == 0) )
  {
    sub_1C93D2C(dispObject, v3);
  }
  itemDraw->fields.mListViewObject = this;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&itemDraw->fields.mListViewObject,
    (int32_t)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


QuestBoardListViewItem_o *QuestBoardListViewObject__GetItem(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2D5FA & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    byte_4D2D5FA = 1;
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

  QuestBoardListViewObject__Init_37092256(this, initMode, 0, v3);
}


void QuestBoardListViewObject__InitItem(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void QuestBoardListViewObject__Init_37092256(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  QuestBoardListViewObject__Init_37092340(this, initMode, callbackFunc, v4, v11, method);
}


void QuestBoardListViewObject__Init_37092340(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w9
  GrandQuestFolderBoardItem_c *klass; // x19

  if ( (byte_4D2D5FC & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    byte_4D2D5FC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(QuestBoardListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (unsigned int)v11 <= 3 )
  {
    v29 = dword_D00810[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_D00E00 + v11);
    this->fields.state = v29;
  }
  if ( !state || dispMode != this->fields.dispMode )
    QuestBoardListViewObject__SetupDisp(this, 1, v23);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)v23, v24, v25, v26, v27, v28);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


bool QuestBoardListViewObject__IsDummy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct QuestBoardListViewItemDraw_o *v6; // x8

  if ( (byte_4D2D608 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D608 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.itemDraw;
  if ( !v6 )
    sub_1C93D2C(v4, v5);
  return v6->fields.isDummy;
}


bool QuestBoardListViewObject__IsStateInput(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


void QuestBoardListViewObject__LateUpdate(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  QuestBoardListViewItem_c *v5; // x10
  QuestBoardListViewItem_o *v6; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4D2D602 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewManager_TypeInfo);
    byte_4D2D602 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == QuestBoardListViewItem_TypeInfo )
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
        if ( !itemDraw )
          sub_1C93D2C(0, v6);
        QuestBoardListViewItemDraw__LateUpdateItem(
          itemDraw,
          v6,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v9,
          0);
      }
    }
  }
}


void QuestBoardListViewObject__OnChangeAlphaAnim(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  QuestBoardListViewItem_c *v5; // x10
  QuestBoardListViewItem_o *v6; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4D2D600 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewManager_TypeInfo);
    byte_4D2D600 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == QuestBoardListViewItem_TypeInfo )
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
        if ( !itemDraw )
          sub_1C93D2C(0, v6);
        QuestBoardListViewItemDraw__OnChangeAlphaAnim(
          itemDraw,
          v6,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v9,
          0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewObject__OnClickClearResetBtn(
        QuestBoardListViewObject_o *this,
        bool isOpend,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *manager; // x0
  __int64 naturalAligment; // x9
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x11
  QuestBoardListViewItem_o *v8; // x19
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  TerminalSceneComponent_c *v11; // x0

  if ( (byte_4D2D606 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewManager_TypeInfo);
    sub_1C93AD4(&Method_QuestBoardListViewObject_OnClickClearResetBtn__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D606 = 1;
  }
  manager = (MapControl_QuestInfo_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_32;
  *(_QWORD *)&isOpend = QuestBoardListViewManager_TypeInfo;
  naturalAligment = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_1C940C8(manager);
    goto LABEL_32;
  }
  if ( !LOBYTE(manager[3].fields.warId) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v7 = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v7 )
      {
        v8 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == QuestBoardListViewItem_TypeInfo
           ? (QuestBoardListViewItem_o *)this->fields.linkItem
           : 0LL;
        if ( v8 )
        {
          manager = v8->fields._quest_info_k__BackingField;
          if ( !manager )
            goto LABEL_32;
          if ( MapControl_QuestInfo__GetMine(manager, 0) )
          {
            manager = v8->fields._quest_info_k__BackingField;
            if ( !manager )
              goto LABEL_32;
            manager = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(manager, 0);
            if ( !manager )
              goto LABEL_32;
            if ( QuestEntity__HasFlag((QuestEntity_o *)manager, 0x400000000000000LL, 0) )
            {
              manager = v8->fields._quest_info_k__BackingField;
              if ( !manager )
                goto LABEL_32;
              if ( MapControl_QuestInfo__IsClear(manager, 0) )
              {
                v9 = Method_QuestBoardListViewObject_OnClickClearResetBtn__;
                if ( (*((_BYTE *)Method_QuestBoardListViewObject_OnClickClearResetBtn__ + 83) & 2) != 0 )
                  v9 = (_QWORD *)sub_1C93AEC(Method_QuestBoardListViewObject_OnClickClearResetBtn__);
                v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
                OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4D2A6EE )
                {
                  sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
                  byte_4D2A6EE = 1;
                }
                v11 = TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  v11 = TerminalSceneComponent_TypeInfo;
                }
                manager = (MapControl_QuestInfo_o *)v11->static_fields->mInstance;
                if ( manager )
                {
                  TerminalSceneComponent__CallQuestClearReset((TerminalSceneComponent_o *)manager, v8, 0);
                  return;
                }
LABEL_32:
                sub_1C93D2C(manager, isOpend);
              }
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
  __int64 naturalAligment; // x9
  struct ListViewItem_o *linkItem; // x21
  __int64 v9; // x10
  _DWORD *monitor; // x8
  int32_t v11; // w22
  __int64 v12; // x9
  TerminalSceneComponent_c *v13; // x0
  _DWORD *v14; // x8
  TerminalSceneComponent_c *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  TerminalSceneComponent_c *v18; // x0
  QuestBoardListViewObject_o *v19; // x0
  bool v20; // w1
  const MethodInfo *v21; // x2

  v3 = isOpened;
  if ( (byte_4D2D605 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewManager_TypeInfo);
    sub_1C93AD4(&Method_QuestBoardListViewObject_OnClickInfoBtn__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D605 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
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
  if ( LOBYTE(mInstance[1].fields.uiRoot) )
    return;
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v9 = QuestBoardListViewItem_TypeInfo->_2.naturalAligment, linkItem->klass->_2.naturalAligment < (unsigned int)v9)
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] != QuestBoardListViewItem_TypeInfo
    || (mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor) == 0 )
  {
LABEL_63:
    sub_1C93D2C(mInstance, isOpened);
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
  v11 = monitor[4];
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_41038904(v11, -1, 0, 0) )
  {
LABEL_30:
    mInstance = (TerminalSceneComponent_o *)this->fields.manager;
    if ( !mInstance )
      goto LABEL_63;
    v12 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment;
    if ( mInstance->klass->_2.naturalAligment >= (unsigned int)v12
      && (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v12 - 1] == QuestBoardListViewManager_TypeInfo )
    {
      QuestBoardListViewManager__SetShowingInfoAllOff((QuestBoardListViewManager_o *)mInstance, 0);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      v13 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v13 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v13->static_fields->mInstance;
      if ( mInstance )
      {
        mInstance = (TerminalSceneComponent_o *)TerminalSceneComponent__QuestInfoShowing(mInstance, 0);
        v14 = linkItem[1].monitor;
        if ( v14 )
        {
          if ( (_DWORD)mInstance == v14[4] )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4D2A6EE )
            {
              sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
              byte_4D2A6EE = 1;
            }
            v15 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v15 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v15->static_fields->mInstance;
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
              v16 = Method_QuestBoardListViewObject_OnClickInfoBtn__;
              if ( (*((_BYTE *)Method_QuestBoardListViewObject_OnClickInfoBtn__ + 83) & 2) != 0 )
                v16 = (_QWORD *)sub_1C93AEC(Method_QuestBoardListViewObject_OnClickInfoBtn__);
              v17 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v16, v16[4]);
              OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
            }
            mInstance = (TerminalSceneComponent_o *)this->fields.itemDraw;
            if ( mInstance )
            {
              QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)mInstance, 1, 0);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4D2A6EE )
              {
                sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
                byte_4D2A6EE = 1;
              }
              v18 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v18 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v18->static_fields->mInstance;
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
    sub_1C940C8(mInstance);
    QuestBoardListViewObject__OnClickClearResetBtn(v19, v20, v21);
  }
}


void QuestBoardListViewObject__OnDestroy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2D5F9 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D5F9 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C93A78(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void QuestBoardListViewObject__OnDragStart(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  QuestBoardListViewItem_c *v5; // x10
  QuestBoardListViewItem_o *v6; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x21
  __int64 v10; // x1
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4D2D604 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewManager_TypeInfo);
    byte_4D2D604 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == QuestBoardListViewItem_TypeInfo )
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
        ListViewObject__OnDragStart((ListViewObject_o *)this, 0);
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_1C93D2C(0, v10);
        QuestBoardListViewItemDraw__OnDragStartItem(
          itemDraw,
          v6,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v9,
          0);
      }
    }
  }
}


void QuestBoardListViewObject__OnPress(QuestBoardListViewObject_o *this, bool is_press, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  QuestBoardListViewItem_c *v7; // x10
  QuestBoardListViewItem_o *v8; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  struct ListViewManager_o *v11; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0
  int32_t dispMode; // w2

  if ( (byte_4D2D603 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewManager_TypeInfo);
    byte_4D2D603 = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0) <= 1 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v7 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
        v8 = v7 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v7 == QuestBoardListViewItem_TypeInfo )
        {
          manager = this->fields.manager;
          if ( manager
            && (v10 = QuestBoardListViewManager_TypeInfo->_2.naturalAligment,
                manager->klass->_2.naturalAligment >= (unsigned int)v10) )
          {
            if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == QuestBoardListViewManager_TypeInfo )
              v11 = this->fields.manager;
            else
              v11 = 0;
          }
          else
          {
            v11 = 0;
          }
          itemDraw = this->fields.itemDraw;
          if ( !itemDraw )
            sub_1C93D2C(0, v8);
          dispMode = this->fields.dispMode;
          if ( is_press )
            QuestBoardListViewItemDraw__OnPressItem(itemDraw, v8, dispMode, (QuestBoardListViewManager_o *)v11, 0);
          else
            QuestBoardListViewItemDraw__OnPullItem(itemDraw, v8, dispMode, (QuestBoardListViewManager_o *)v11, 0);
        }
      }
    }
  }
}


void QuestBoardListViewObject__OnStartFadeOutAlphaAnim(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C93D2C(0, method);
  QuestBoardListViewItemDraw__OnStartFadeOutAlphaAnim(itemDraw, 0);
}


void QuestBoardListViewObject__SetBackPanel(
        QuestBoardListViewObject_o *this,
        ScrTerminalListTop_o *scrTerminalListTop,
        const MethodInfo *method)
{
  EventDelegate_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *Component_object; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 klass_low; // x8
  intptr_t m_CachedPtr; // x9
  _QWORD *v17; // x10
  int v18; // w10
  intptr_t v19; // x8

  if ( (byte_4D2D607 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_17931/*"cbfTitleInfoBtnBack_Click"*/);
    byte_4D2D607 = 1;
  }
  v5 = (EventDelegate_o *)sub_1C93D20(EventDelegate_TypeInfo);
  EventDelegate___ctor_49997668(
    v5,
    (UnityEngine_MonoBehaviour_o *)scrTerminalListTop,
    (System_String_o *)StringLiteral_17931/*"cbfTitleInfoBtnBack_Click"*/,
    0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)Component_object[1].monitor;
      if ( !gameObject )
        return;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (int)klass_low > 0 )
        return;
      m_CachedPtr = gameObject->fields.m_CachedPtr;
      v17 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( m_CachedPtr )
      {
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v5,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = klass_low + 1;
          v19 = m_CachedPtr + 8 * klass_low;
          LODWORD(gameObject[1].klass) = v18;
          *(_QWORD *)(v19 + 32) = v5;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 32), (int32_t)v5, v9, v10, v11, v12, v13, v14);
        }
        return;
      }
    }
LABEL_15:
    sub_1C93D2C(gameObject, v7);
  }
}


void QuestBoardListViewObject__SetInfoShowing(QuestBoardListViewObject_o *this, bool onOff, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C93D2C(0, onOff);
  QuestBoardListViewItemDraw__setInfoShowing(itemDraw, onOff, 0);
}


void QuestBoardListViewObject__SetInput(QuestBoardListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v8; // x1
  QuestBoardListViewItemDraw_o *v9; // x0

  if ( (byte_4D2D5FB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    byte_4D2D5FB = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListViewItem_TypeInfo )
        v8 = this->fields.linkItem;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C93D2C(0, v8);
    QuestBoardListViewItemDraw__SetInput(v9, (QuestBoardListViewItem_o *)v8, isInput, 0);
  }
}


void QuestBoardListViewObject__SetItem(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void QuestBoardListViewObject__SetItem_37091980(
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
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v9; // x1
  QuestBoardListViewItemDraw_o *v10; // x0

  if ( (byte_4D2D5FD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    byte_4D2D5FD = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C93D2C(0, v9);
    QuestBoardListViewItemDraw__SetItem(
      v10,
      (QuestBoardListViewItem_o *)linkItem,
      this->fields.dispMode,
      isReloadTerminalBanner,
      0);
  }
}


void QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
        QuestBoardListViewObject_o *this,
        bool isBoardDisp,
        bool isBadgeDisp,
        bool isBlackMarkOnly,
        bool isWhiteMarkOnly,
        bool isSpecialClosedBanner,
        bool isClosedBanner,
        bool isNextDisp,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x27
  __int64 naturalAligment; // x10
  bool v19; // w1
  UnityEngine_Object_o *itemDraw; // x28
  __int64 v21; // x1
  QuestBoardListViewItemDraw_o *v22; // x0

  if ( (byte_4D2D5FE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    byte_4D2D5FE = 1;
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
    v19 = 0;
    goto LABEL_8;
  }
  v19 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v19, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v22 = this->fields.itemDraw;
    if ( !v22 )
      sub_1C93D2C(0, v21);
    QuestBoardListViewItemDraw__SetItemOfAreaForTeminalTopEffect(
      v22,
      (QuestBoardListViewItem_o *)linkItem,
      isBoardDisp,
      isBadgeDisp,
      isBlackMarkOnly,
      isWhiteMarkOnly,
      isSpecialClosedBanner,
      isClosedBanner,
      isNextDisp,
      0);
  }
}


void QuestBoardListViewObject__SetupDispFolderForQuestBoardEffect(
        QuestBoardListViewObject_o *this,
        bool isBoardDisp,
        bool isBadgeDisp,
        bool isClosedBanner,
        bool isNextDisp,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x24
  __int64 naturalAligment; // x10
  bool v13; // w1
  UnityEngine_Object_o *itemDraw; // x25
  __int64 v15; // x1
  QuestBoardListViewItemDraw_o *v16; // x0

  if ( (byte_4D2D5FF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    byte_4D2D5FF = 1;
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
    v13 = 0;
    goto LABEL_8;
  }
  v13 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v13, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v16 = this->fields.itemDraw;
    if ( !v16 )
      sub_1C93D2C(0, v15);
    QuestBoardListViewItemDraw__SetItemOfFolderForTerminalTopEffect(
      v16,
      (QuestBoardListViewItem_o *)linkItem,
      isBoardDisp,
      isBadgeDisp,
      isClosedBanner,
      isNextDisp,
      0);
  }
}


void QuestBoardListViewObject__Start(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.state )
    QuestBoardListViewObject__Init_37092256(this, 2, 0, v2);
}


void QuestBoardListViewObject__Update(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  QuestBoardListViewItem_c *v5; // x10
  QuestBoardListViewItem_o *v6; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4D2D601 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardListViewItem_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewManager_TypeInfo);
    byte_4D2D601 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = QuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == QuestBoardListViewItem_TypeInfo )
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
        if ( !itemDraw )
          sub_1C93D2C(0, v6);
        QuestBoardListViewItemDraw__UpdateItem(
          itemDraw,
          v6,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v9,
          0);
      }
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
  __int64 v9; // x0
  bool v10; // zf
  QuestBoardListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2D5F6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2D5F6 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  QuestBoardListViewObject__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  QuestBoardListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2D5F7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2D5F7 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  QuestBoardListViewObject__get_ItemDraw(v11, v12);
}