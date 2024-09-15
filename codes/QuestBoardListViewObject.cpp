void __fastcall QuestBoardListViewObject___ctor(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A2AF42 & 1) == 0 )
  {
    sub_1B761C0(&ListViewObject_TypeInfo, method);
    byte_4A2AF42 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall QuestBoardListViewObject__Awake(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  struct QuestBoardListViewItemDraw_o *itemDraw; // x8

  if ( (byte_4A2AF32 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___, method);
    byte_4A2AF32 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___),
        this->fields.itemDraw = (struct QuestBoardListViewItemDraw_o *)Component_object,
        sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7),
        (itemDraw = this->fields.itemDraw) == 0LL) )
  {
    sub_1B7641C(dispObject, v3);
  }
  itemDraw->fields.mListViewObject = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&itemDraw->fields.mListViewObject, (int32_t)this, v8, v9);
}


QuestBoardListViewItem_o *__fastcall QuestBoardListViewObject__GetItem(
        QuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A2AF34 & 1) == 0 )
  {
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, method);
    byte_4A2AF34 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
    return (QuestBoardListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall QuestBoardListViewObject__Init(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  QuestBoardListViewObject__Init_33846068(this, initMode, 0LL, v3);
}


void __fastcall QuestBoardListViewObject__InitItem(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__Init_33846068(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4A28BB1 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A28BB1 = 1;
  }
  QuestBoardListViewObject__Init_33846152(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__Init_33846152(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w9
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A2AF36 & 1) == 0 )
  {
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A2AF36 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(QuestBoardListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B7641C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  if ( (unsigned int)v11 <= 3 )
  {
    v22 = dword_BACCD0[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BAD250 + v11);
    this->fields.state = v22;
  }
  if ( !state || dispMode != this->fields.dispMode )
    QuestBoardListViewObject__SetupDisp(this, v19);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B76164(p_callbackFunc, 0, v20, v21);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


bool __fastcall QuestBoardListViewObject__IsDummy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct QuestBoardListViewItemDraw_o *v6; // x8

  if ( (byte_4A2AF41 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2AF41 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( !v4 )
    return 0;
  v6 = this->fields.itemDraw;
  if ( !v6 )
    sub_1B7641C(v4, v5);
  return v6->fields.isDummy;
}


bool __fastcall QuestBoardListViewObject__IsStateInput(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


void __fastcall QuestBoardListViewObject__LateUpdate(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v6; // x10
  QuestBoardListViewItem_o *v7; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4A2AF3B & 1) == 0 )
  {
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, method);
    sub_1B761C0(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4A2AF3B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v9 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v9) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == QuestBoardListViewManager_TypeInfo )
            v10 = this->fields.manager;
          else
            v10 = 0LL;
        }
        else
        {
          v10 = 0LL;
        }
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_1B7641C(0LL, v7);
        QuestBoardListViewItemDraw__LateUpdateItem(
          itemDraw,
          v7,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v10,
          0LL);
      }
    }
  }
}


void __fastcall QuestBoardListViewObject__OnChangeAlphaAnim(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v6; // x10
  QuestBoardListViewItem_o *v7; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4A2AF39 & 1) == 0 )
  {
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, method);
    sub_1B761C0(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4A2AF39 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v9 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v9) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == QuestBoardListViewManager_TypeInfo )
            v10 = this->fields.manager;
          else
            v10 = 0LL;
        }
        else
        {
          v10 = 0LL;
        }
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_1B7641C(0LL, v7);
        QuestBoardListViewItemDraw__OnChangeAlphaAnim(
          itemDraw,
          v7,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v10,
          0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__OnClickClearResetBtn(
        QuestBoardListViewObject_o *this,
        bool isOpend,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MapControl_QuestInfo_o *manager; // x0
  __int64 methodPtr_low; // x9
  struct ListViewItem_o *linkItem; // x8
  __int64 v10; // x11
  QuestBoardListViewItem_o *v11; // x19
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  TerminalSceneComponent_c *v14; // x0

  if ( (byte_4A2AF3F & 1) == 0 )
  {
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, isOpend);
    sub_1B761C0(&QuestBoardListViewManager_TypeInfo, v4);
    sub_1B761C0(&Method_QuestBoardListViewObject_OnClickClearResetBtn__, v5);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v6);
    byte_4A2AF3F = 1;
  }
  manager = (MapControl_QuestInfo_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_32;
  *(_QWORD *)&isOpend = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_1B766DC(manager);
    goto LABEL_32;
  }
  if ( !LOBYTE(manager[3].fields.phaseInfoList) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v10 = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v10 )
      {
        v11 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == QuestBoardListViewItem_TypeInfo
            ? (QuestBoardListViewItem_o *)this->fields.linkItem
            : 0LL;
        if ( v11 )
        {
          manager = v11->fields._quest_info_k__BackingField;
          if ( !manager )
            goto LABEL_32;
          if ( MapControl_QuestInfo__GetMine(manager, 0LL) )
          {
            manager = v11->fields._quest_info_k__BackingField;
            if ( !manager )
              goto LABEL_32;
            manager = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(manager, 0LL);
            if ( !manager )
              goto LABEL_32;
            if ( QuestEntity__HasFlag((QuestEntity_o *)manager, 0x400000000000000LL, 0LL) )
            {
              manager = v11->fields._quest_info_k__BackingField;
              if ( !manager )
                goto LABEL_32;
              if ( MapControl_QuestInfo__IsClear(manager, 0LL) )
              {
                v12 = Method_QuestBoardListViewObject_OnClickClearResetBtn__;
                if ( (*((_BYTE *)Method_QuestBoardListViewObject_OnClickClearResetBtn__ + 83) & 2) != 0 )
                  v12 = (_QWORD *)sub_1B761D8(Method_QuestBoardListViewObject_OnClickClearResetBtn__);
                v13 = (System_Reflection_MethodBase_o *)sub_1B761A4(v12, v12[4]);
                OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4A2915D )
                {
                  sub_1B761C0(&TerminalSceneComponent_TypeInfo, isOpend);
                  byte_4A2915D = 1;
                }
                v14 = TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  v14 = TerminalSceneComponent_TypeInfo;
                }
                manager = (MapControl_QuestInfo_o *)v14->static_fields->mInstance;
                if ( manager )
                {
                  TerminalSceneComponent__CallQuestClearReset((TerminalSceneComponent_o *)manager, v11, 0LL);
                  return;
                }
LABEL_32:
                sub_1B7641C(manager, isOpend);
              }
            }
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__OnClickInfoBtn(
        QuestBoardListViewObject_o *this,
        bool isOpened,
        const MethodInfo *method)
{
  bool v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalSceneComponent_c *v9; // x0
  TerminalSceneComponent_o *mInstance; // x0
  __int64 methodPtr_low; // x9
  struct ListViewItem_o *linkItem; // x21
  __int64 v13; // x10
  _DWORD *monitor; // x8
  int32_t v15; // w22
  __int64 v16; // x9
  TerminalSceneComponent_c *v17; // x0
  _DWORD *v18; // x8
  TerminalSceneComponent_c *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  TerminalSceneComponent_c *v22; // x0
  QuestBoardListViewManager_o *v23; // x0
  const MethodInfo *v24; // x1

  v3 = isOpened;
  if ( (byte_4A2AF3E & 1) == 0 )
  {
    sub_1B761C0(&CondType_TypeInfo, isOpened);
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, v5);
    sub_1B761C0(&QuestBoardListViewManager_TypeInfo, v6);
    sub_1B761C0(&Method_QuestBoardListViewObject_OnClickInfoBtn__, v7);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v8);
    byte_4A2AF3E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A2915D )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, isOpened);
    byte_4A2915D = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_63;
  if ( TerminalSceneComponent__QuestInfoBusy(mInstance, 0LL) )
    return;
  mInstance = (TerminalSceneComponent_o *)this->fields.manager;
  if ( !mInstance )
    goto LABEL_63;
  *(_QWORD *)&isOpened = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mInstance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_64;
  }
  if ( LOBYTE(mInstance[1].fields.uiRoot) )
    return;
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v13 = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)v13)
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] != QuestBoardListViewItem_TypeInfo
    || (mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor) == 0LL )
  {
LABEL_63:
    sub_1B7641C(mInstance, isOpened);
  }
  if ( LODWORD(mInstance->fields.myFSM) != 2 )
    goto LABEL_30;
  mInstance = (TerminalSceneComponent_o *)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)mInstance, 0LL);
  if ( !mInstance )
    goto LABEL_63;
  if ( !QuestEntity__HasFlag((QuestEntity_o *)mInstance, 0x400000000000000LL, 0LL) )
    goto LABEL_30;
  mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor;
  if ( !mInstance )
    goto LABEL_63;
  mInstance = (TerminalSceneComponent_o *)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)mInstance, 0LL);
  if ( !mInstance )
    goto LABEL_63;
  if ( LODWORD(mInstance->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Height) != 5 )
    goto LABEL_30;
  monitor = linkItem[1].monitor;
  if ( !monitor )
    goto LABEL_63;
  v15 = monitor[4];
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_37418488(v15, -1, 0, 0LL) )
  {
LABEL_30:
    mInstance = (TerminalSceneComponent_o *)this->fields.manager;
    if ( !mInstance )
      goto LABEL_63;
    v16 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(mInstance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v16
      && (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v16 - 1] == QuestBoardListViewManager_TypeInfo )
    {
      QuestBoardListViewManager__SetShowingInfoAllOff(
        (QuestBoardListViewManager_o *)mInstance,
        (const MethodInfo *)QuestBoardListViewManager_TypeInfo);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A2915D )
      {
        sub_1B761C0(&TerminalSceneComponent_TypeInfo, isOpened);
        byte_4A2915D = 1;
      }
      v17 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v17 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v17->static_fields->mInstance;
      if ( mInstance )
      {
        mInstance = (TerminalSceneComponent_o *)TerminalSceneComponent__QuestInfoShowing(mInstance, 0LL);
        v18 = linkItem[1].monitor;
        if ( v18 )
        {
          if ( (_DWORD)mInstance == v18[4] )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A2915D )
            {
              sub_1B761C0(&TerminalSceneComponent_TypeInfo, isOpened);
              byte_4A2915D = 1;
            }
            v19 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v19 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v19->static_fields->mInstance;
            if ( mInstance )
            {
              TerminalSceneComponent__CallQuestInformationCloseAtAll(mInstance, 1, 0LL);
              return;
            }
          }
          else
          {
            if ( !v3 )
            {
              v20 = Method_QuestBoardListViewObject_OnClickInfoBtn__;
              if ( (*((_BYTE *)Method_QuestBoardListViewObject_OnClickInfoBtn__ + 83) & 2) != 0 )
                v20 = (_QWORD *)sub_1B761D8(Method_QuestBoardListViewObject_OnClickInfoBtn__);
              v21 = (System_Reflection_MethodBase_o *)sub_1B761A4(v20, v20[4]);
              OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
            }
            mInstance = (TerminalSceneComponent_o *)this->fields.itemDraw;
            if ( mInstance )
            {
              QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)mInstance, 1, 0LL);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4A2915D )
              {
                sub_1B761C0(&TerminalSceneComponent_TypeInfo, isOpened);
                byte_4A2915D = 1;
              }
              v22 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v22 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v22->static_fields->mInstance;
              if ( mInstance )
              {
                TerminalSceneComponent__CallQuestInformation(mInstance, (QuestBoardListViewItem_o *)linkItem, 0LL);
                return;
              }
            }
          }
        }
      }
      goto LABEL_63;
    }
LABEL_64:
    sub_1B766DC(mInstance);
    QuestBoardListViewManager__OnChangeAlphaAnim(v23, v24);
  }
}


void __fastcall QuestBoardListViewObject__OnDestroy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A2AF33 & 1) == 0 )
  {
    sub_1B761C0(&NGUITools_TypeInfo, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    byte_4A2AF33 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B76164(p_dragObject, 0, v8, v9);
  }
}


void __fastcall QuestBoardListViewObject__OnDragStart(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v6; // x10
  QuestBoardListViewItem_o *v7; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x21
  __int64 v11; // x1
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4A2AF3D & 1) == 0 )
  {
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, method);
    sub_1B761C0(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4A2AF3D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v9 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v9) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == QuestBoardListViewManager_TypeInfo )
            v10 = this->fields.manager;
          else
            v10 = 0LL;
        }
        else
        {
          v10 = 0LL;
        }
        ListViewObject__OnDragStart((ListViewObject_o *)this, 0LL);
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_1B7641C(0LL, v11);
        QuestBoardListViewItemDraw__OnDragStartItem(
          itemDraw,
          v7,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v10,
          0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__OnPress(
        QuestBoardListViewObject_o *this,
        bool is_press,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v8; // x10
  QuestBoardListViewItem_o *v9; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  struct ListViewManager_o *v12; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0
  int32_t dispMode; // w2

  if ( (byte_4A2AF3C & 1) == 0 )
  {
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, is_press);
    sub_1B761C0(&QuestBoardListViewManager_TypeInfo, v5);
    byte_4A2AF3C = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) <= 1 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v8 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        v9 = v8 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v8 == QuestBoardListViewItem_TypeInfo )
        {
          manager = this->fields.manager;
          if ( manager
            && (v11 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11) )
          {
            if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] == QuestBoardListViewManager_TypeInfo )
              v12 = this->fields.manager;
            else
              v12 = 0LL;
          }
          else
          {
            v12 = 0LL;
          }
          itemDraw = this->fields.itemDraw;
          if ( !itemDraw )
            sub_1B7641C(0LL, v9);
          dispMode = this->fields.dispMode;
          if ( is_press )
            QuestBoardListViewItemDraw__OnPressItem(itemDraw, v9, dispMode, (QuestBoardListViewManager_o *)v12, 0LL);
          else
            QuestBoardListViewItemDraw__OnPullItem(itemDraw, v9, dispMode, (QuestBoardListViewManager_o *)v12, 0LL);
        }
      }
    }
  }
}


void __fastcall QuestBoardListViewObject__SetBackPanel(
        QuestBoardListViewObject_o *this,
        ScrTerminalListTop_o *scrTerminalListTop,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventDelegate_o *v10; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *Component_object; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 klass_low; // x8
  __int64 v17; // x9
  _QWORD *v18; // x10
  int v19; // w10
  __int64 v20; // x8

  if ( (byte_4A2AF40 & 1) == 0 )
  {
    sub_1B761C0(&EventDelegate_TypeInfo, scrTerminalListTop);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventDelegate__get_Count__, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&StringLiteral_17785/*"cbfTitleInfoBtnBack_Click"*/, v9);
    byte_4A2AF40 = 1;
  }
  v10 = (EventDelegate_o *)sub_1B7640C(EventDelegate_TypeInfo);
  EventDelegate___ctor_46674396(
    v10,
    (UnityEngine_MonoBehaviour_o *)scrTerminalListTop,
    (System_String_o *)StringLiteral_17785/*"cbfTitleInfoBtnBack_Click"*/,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)Component_object[1].monitor;
      if ( !gameObject )
        return;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (int)klass_low > 0 )
        return;
      v17 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v18 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( v17 )
      {
        if ( (unsigned int)klass_low >= *(_DWORD *)(v17 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v10,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = klass_low + 1;
          v20 = v17 + 8 * klass_low;
          LODWORD(gameObject[1].klass) = v19;
          *(_QWORD *)(v20 + 32) = v10;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v10, v14, v15);
        }
        return;
      }
    }
LABEL_15:
    sub_1B7641C(gameObject, v12);
  }
}


void __fastcall QuestBoardListViewObject__SetInfoShowing(
        QuestBoardListViewObject_o *this,
        bool onOff,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B7641C(0LL, onOff);
  QuestBoardListViewItemDraw__setInfoShowing(itemDraw, onOff, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__SetInput(
        QuestBoardListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v9; // x1
  QuestBoardListViewItemDraw_o *v10; // x0

  if ( (byte_4A2AF35 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, v5);
    byte_4A2AF35 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1B7641C(0LL, v9);
    QuestBoardListViewItemDraw__SetInput(v10, (QuestBoardListViewItem_o *)v9, isInput, 0LL);
  }
}


void __fastcall QuestBoardListViewObject__SetItem(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40571128((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall QuestBoardListViewObject__SetItem_33845792(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall QuestBoardListViewObject__SetupDisp(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  QuestBoardListViewItemDraw_o *v9; // x0

  if ( (byte_4A2AF37 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, v3);
    byte_4A2AF37 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B7641C(0LL, v8);
    QuestBoardListViewItemDraw__SetItem(v9, (QuestBoardListViewItem_o *)linkItem, this->fields.dispMode, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
        QuestBoardListViewObject_o *this,
        bool isBoardDisp,
        bool isBadgeDisp,
        bool isBlackMarkOnly,
        bool isWhiteMarkOnly,
        bool isSpecialClosedBanner,
        const MethodInfo *method)
{
  __int64 v13; // x1
  struct ListViewItem_o *linkItem; // x25
  __int64 methodPtr_low; // x10
  bool v16; // w1
  UnityEngine_Object_o *itemDraw; // x26
  __int64 v18; // x1
  QuestBoardListViewItemDraw_o *v19; // x0

  if ( (byte_4A2AF38 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, isBoardDisp);
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, v13);
    byte_4A2AF38 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v16 = 0;
    goto LABEL_8;
  }
  v16 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v16, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v19 = this->fields.itemDraw;
    if ( !v19 )
      sub_1B7641C(0LL, v18);
    QuestBoardListViewItemDraw__SetItemOfAreaForTeminalTopEffect(
      v19,
      (QuestBoardListViewItem_o *)linkItem,
      isBoardDisp,
      isBadgeDisp,
      isBlackMarkOnly,
      isWhiteMarkOnly,
      isSpecialClosedBanner,
      0LL);
  }
}


void __fastcall QuestBoardListViewObject__Start(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.state )
    QuestBoardListViewObject__Init_33846068(this, 2, 0LL, v2);
}


void __fastcall QuestBoardListViewObject__Update(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v6; // x10
  QuestBoardListViewItem_o *v7; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4A2AF3A & 1) == 0 )
  {
    sub_1B761C0(&QuestBoardListViewItem_TypeInfo, method);
    sub_1B761C0(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4A2AF3A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v9 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v9) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == QuestBoardListViewManager_TypeInfo )
            v10 = this->fields.manager;
          else
            v10 = 0LL;
        }
        else
        {
          v10 = 0LL;
        }
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_1B7641C(0LL, v7);
        QuestBoardListViewItemDraw__UpdateItem(
          itemDraw,
          v7,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v10,
          0LL);
      }
    }
  }
}


void __fastcall QuestBoardListViewObject__add_callbackFunc(
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

  if ( (byte_4A2AF30 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A2AF30 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1BB16B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B766DC(v8);
  QuestBoardListViewObject__remove_callbackFunc(v11, v12, v13);
}


QuestBoardListViewItemDraw_o *__fastcall QuestBoardListViewObject__get_ItemDraw(
        QuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.itemDraw;
}


void __fastcall QuestBoardListViewObject__remove_callbackFunc(
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

  if ( (byte_4A2AF31 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A2AF31 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1BB16B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B766DC(v8);
  QuestBoardListViewObject__get_ItemDraw(v11, v12);
}