void __fastcall QuestBoardListViewObject___ctor(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_42B019C & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    byte_42B019C = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall QuestBoardListViewObject__Awake(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct QuestBoardListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct QuestBoardListViewItemDraw_o *itemDraw; // x8

  if ( (byte_42B018E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___);
    byte_42B018E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (struct QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___),
        this->fields.itemDraw = Component_srcLineSprite,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.itemDraw,
          (System_Int32_array **)Component_srcLineSprite,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (itemDraw = this->fields.itemDraw) == 0LL) )
  {
    sub_B52A5C(dispObject, v3);
  }
  itemDraw->fields.mListViewObject = this;
  sub_B52920(
    (BattleServantConfConponent_o *)&itemDraw->fields.mListViewObject,
    (System_Int32_array **)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


QuestBoardListViewItem_o *__fastcall QuestBoardListViewObject__GetItem(
        QuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_42B0190 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    byte_42B0190 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == QuestBoardListViewItem_TypeInfo )
    return (QuestBoardListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__Init(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  QuestBoardListViewObject__Init_25280440(
    this,
    initMode,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v5);
}


void __fastcall QuestBoardListViewObject__InitItem(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__Init_25280376(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  QuestBoardListViewObject__Init_25280440(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall QuestBoardListViewObject__Init_25280440(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x10
  int32_t v13; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w9
  System_Action_o *klass; // x19

  if ( (byte_42B0192 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    byte_42B0192 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v12 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == QuestBoardListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(QuestBoardListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (unsigned int)v13 <= 3 )
  {
    v30 = dword_327C138[v13];
    this->fields.dispMode = dword_32788A0[v13];
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    QuestBoardListViewObject__SetupDisp(this, v23);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    System_Action__Invoke(klass, 0LL);
  }
}


bool __fastcall QuestBoardListViewObject__IsStateInput(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


void __fastcall QuestBoardListViewObject__LateUpdate(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  QuestBoardListViewItem_c *v5; // x10
  QuestBoardListViewItem_o *v6; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42B0197 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    byte_42B0197 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4 )
    {
      v5 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1];
      v6 = v5 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v8 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == QuestBoardListViewManager_TypeInfo )
            v9 = this->fields.manager;
          else
            v9 = 0LL;
        }
        else
        {
          v9 = 0LL;
        }
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_B52A5C(0LL, v6);
        QuestBoardListViewItemDraw__LateUpdateItem(
          itemDraw,
          v6,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v9,
          0LL);
      }
    }
  }
}


void __fastcall QuestBoardListViewObject__OnChangeAlphaAnim(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  QuestBoardListViewItem_c *v5; // x10
  QuestBoardListViewItem_o *v6; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42B0195 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    byte_42B0195 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4 )
    {
      v5 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1];
      v6 = v5 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v8 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == QuestBoardListViewManager_TypeInfo )
            v9 = this->fields.manager;
          else
            v9 = 0LL;
        }
        else
        {
          v9 = 0LL;
        }
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_B52A5C(0LL, v6);
        QuestBoardListViewItemDraw__OnChangeAlphaAnim(
          itemDraw,
          v6,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v9,
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
  MapControl_QuestInfo_o *manager; // x0
  __int64 v5; // x9
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x11
  QuestBoardListViewItem_c *v8; // x10
  QuestBoardListViewItem_o *v9; // x19
  const MethodInfo *v10; // x2
  TerminalSceneComponent_c *v11; // x0

  if ( (byte_42B019B & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42B019B = 1;
  }
  manager = (MapControl_QuestInfo_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_36;
  *(_QWORD *)&isOpend = QuestBoardListViewManager_TypeInfo;
  v5 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    manager = (MapControl_QuestInfo_o *)sub_B52D50(manager);
    goto LABEL_36;
  }
  if ( !manager[3].fields.isNew )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v7 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
      {
        v8 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1];
        v9 = v8 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v8 == QuestBoardListViewItem_TypeInfo )
        {
          if ( !v9 )
            goto LABEL_36;
          manager = v9->fields._quest_info_k__BackingField;
          if ( !manager )
            goto LABEL_36;
          if ( MapControl_QuestInfo__GetMine(manager, 0LL) )
          {
            manager = v9->fields._quest_info_k__BackingField;
            if ( !manager )
              goto LABEL_36;
            manager = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(manager, 0LL);
            if ( !manager )
              goto LABEL_36;
            if ( QuestEntity__HasFlag((QuestEntity_o *)manager, 0x400000000000000LL, v10) )
            {
              manager = v9->fields._quest_info_k__BackingField;
              if ( !manager )
                goto LABEL_36;
              if ( MapControl_QuestInfo__IsClear(manager, 0LL) )
              {
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_42AC2A0 )
                {
                  sub_B52984(&TerminalSceneComponent_TypeInfo);
                  byte_42AC2A0 = 1;
                }
                v11 = TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  v11 = TerminalSceneComponent_TypeInfo;
                }
                manager = (MapControl_QuestInfo_o *)v11->static_fields->mInstance;
                if ( manager )
                {
                  TerminalSceneComponent__CallQuestClearReset((TerminalSceneComponent_o *)manager, v9, 0LL);
                  return;
                }
LABEL_36:
                sub_B52A5C(manager, isOpend);
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
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v7; // x9
  struct ListViewItem_o *linkItem; // x21
  __int64 v9; // x10
  const MethodInfo *v10; // x2
  _DWORD *monitor; // x8
  int32_t v12; // w22
  __int64 v13; // x9
  TerminalSceneComponent_c *v14; // x0
  _DWORD *v15; // x8
  TerminalSceneComponent_c *v16; // x0
  TerminalSceneComponent_c *v17; // x0
  QuestBoardListViewManager_o *v18; // x0
  const MethodInfo *v19; // x1

  v3 = isOpened;
  if ( (byte_42B019A & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42B019A = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_73;
  if ( TerminalSceneComponent__QuestInfoBusy(mInstance, 0LL) )
    return;
  mInstance = (TerminalSceneComponent_o *)this->fields.manager;
  if ( !mInstance )
    goto LABEL_73;
  *(_QWORD *)&isOpened = QuestBoardListViewManager_TypeInfo;
  v7 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mInstance->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v7 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_74;
  }
  if ( LOBYTE(mInstance[1].fields.uiRoot) )
    return;
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v9 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] != QuestBoardListViewItem_TypeInfo
    || (mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor) == 0LL )
  {
LABEL_73:
    sub_B52A5C(mInstance, isOpened);
  }
  if ( LODWORD(mInstance->fields.uiRoot) != 2 )
    goto LABEL_33;
  mInstance = (TerminalSceneComponent_o *)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)mInstance, 0LL);
  if ( !mInstance )
    goto LABEL_73;
  if ( !QuestEntity__HasFlag((QuestEntity_o *)mInstance, 0x400000000000000LL, v10) )
    goto LABEL_33;
  mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor;
  if ( !mInstance )
    goto LABEL_73;
  mInstance = (TerminalSceneComponent_o *)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)mInstance, 0LL);
  if ( !mInstance )
    goto LABEL_73;
  if ( LODWORD(mInstance->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y) != 5 )
    goto LABEL_33;
  monitor = linkItem[1].monitor;
  if ( !monitor )
    goto LABEL_73;
  v12 = monitor[4];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25987760(v12, -1, 0, 0LL) )
  {
LABEL_33:
    mInstance = (TerminalSceneComponent_o *)this->fields.manager;
    if ( !mInstance )
      goto LABEL_73;
    v13 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&mInstance->klass->_2.bitflags2 + 1) >= (unsigned int)v13
      && (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v13 - 1] == QuestBoardListViewManager_TypeInfo )
    {
      QuestBoardListViewManager__SetShowingInfoAllOff(
        (QuestBoardListViewManager_o *)mInstance,
        (const MethodInfo *)QuestBoardListViewManager_TypeInfo);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42AC2A0 )
      {
        sub_B52984(&TerminalSceneComponent_TypeInfo);
        byte_42AC2A0 = 1;
      }
      v14 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v14 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v14->static_fields->mInstance;
      if ( mInstance )
      {
        mInstance = (TerminalSceneComponent_o *)TerminalSceneComponent__QuestInfoShowing(mInstance, 0LL);
        v15 = linkItem[1].monitor;
        if ( v15 )
        {
          if ( (_DWORD)mInstance == v15[4] )
          {
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_42AC2A0 )
            {
              sub_B52984(&TerminalSceneComponent_TypeInfo);
              byte_42AC2A0 = 1;
            }
            v16 = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v16 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v16->static_fields->mInstance;
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
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SoundManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              }
              SoundManager__playSystemSe(0, 0LL);
            }
            mInstance = (TerminalSceneComponent_o *)this->fields.itemDraw;
            if ( mInstance )
            {
              QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)mInstance, 1, 0LL);
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_42AC2A0 )
              {
                sub_B52984(&TerminalSceneComponent_TypeInfo);
                byte_42AC2A0 = 1;
              }
              v17 = TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v17 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v17->static_fields->mInstance;
              if ( mInstance )
              {
                TerminalSceneComponent__CallQuestInformation(mInstance, (QuestBoardListViewItem_o *)linkItem, 0LL);
                return;
              }
            }
          }
        }
      }
      goto LABEL_73;
    }
LABEL_74:
    v18 = (QuestBoardListViewManager_o *)sub_B52D50(mInstance);
    QuestBoardListViewManager__OnChangeAlphaAnim(v18, v19);
  }
}


void __fastcall QuestBoardListViewObject__OnDestroy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B018F & 1) == 0 )
  {
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B018F = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B52920(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall QuestBoardListViewObject__OnDragStart(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  QuestBoardListViewItem_c *v5; // x10
  QuestBoardListViewItem_o *v6; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x21
  __int64 v10; // x1
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42B0199 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    byte_42B0199 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4 )
    {
      v5 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1];
      v6 = v5 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v8 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == QuestBoardListViewManager_TypeInfo )
            v9 = this->fields.manager;
          else
            v9 = 0LL;
        }
        else
        {
          v9 = 0LL;
        }
        ListViewObject__OnDragStart((ListViewObject_o *)this, 0LL);
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_B52A5C(0LL, v10);
        QuestBoardListViewItemDraw__OnDragStartItem(
          itemDraw,
          v6,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v9,
          0LL);
      }
    }
  }
}


void __fastcall QuestBoardListViewObject__OnPress(
        QuestBoardListViewObject_o *this,
        bool is_press,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11
  QuestBoardListViewItem_c *v7; // x10
  QuestBoardListViewItem_o *v8; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v10; // x11
  struct ListViewManager_o *v11; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0
  int32_t dispMode; // w2

  if ( (byte_42B0198 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    byte_42B0198 = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) <= 1 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v6 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
      {
        v7 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1];
        v8 = v7 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v7 == QuestBoardListViewItem_TypeInfo )
        {
          manager = this->fields.manager;
          if ( manager
            && (v10 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
                *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
          {
            if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == QuestBoardListViewManager_TypeInfo )
              v11 = this->fields.manager;
            else
              v11 = 0LL;
          }
          else
          {
            v11 = 0LL;
          }
          itemDraw = this->fields.itemDraw;
          if ( !itemDraw )
            sub_B52A5C(0LL, v8);
          dispMode = this->fields.dispMode;
          if ( is_press )
            QuestBoardListViewItemDraw__OnPressItem(itemDraw, v8, dispMode, (QuestBoardListViewManager_o *)v11, 0LL);
          else
            QuestBoardListViewItemDraw__OnPullItem(itemDraw, v8, dispMode, (QuestBoardListViewManager_o *)v11, 0LL);
        }
      }
    }
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
    sub_B52A5C(0LL, onOff);
  QuestBoardListViewItemDraw__setInfoShowing(itemDraw, onOff, 0LL);
}


void __fastcall QuestBoardListViewObject__SetInput(
        QuestBoardListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x11
  struct ListViewItem_o *v8; // x1
  QuestBoardListViewItemDraw_o *v9; // x0

  if ( (byte_42B0191 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    byte_42B0191 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (v7 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
    {
      if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == QuestBoardListViewItem_TypeInfo )
        v8 = this->fields.linkItem;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B52A5C(0LL, v8);
    QuestBoardListViewItemDraw__SetInput(v9, (QuestBoardListViewItem_o *)v8, isInput, 0LL);
  }
}


void __fastcall QuestBoardListViewObject__SetItem(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33992116((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall QuestBoardListViewObject__SetItem_25280076(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall QuestBoardListViewObject__SetupDisp(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  QuestBoardListViewItemDraw_o *v8; // x0

  if ( (byte_42B0193 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    byte_42B0193 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == QuestBoardListViewItem_TypeInfo )
    {
      v5 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v5 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_B52A5C(0LL, v7);
    QuestBoardListViewItemDraw__SetItem(v8, (QuestBoardListViewItem_o *)linkItem, this->fields.dispMode, 0LL);
  }
}


void __fastcall QuestBoardListViewObject__SetupDispAreaForTerminalTopEffect(
        QuestBoardListViewObject_o *this,
        bool isBoardDisp,
        bool isBadgeDisp,
        bool isBlackMarkOnly,
        bool isWhiteMarkOnly,
        bool isSpecialClosedBanner,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x25
  __int64 v14; // x10
  bool v15; // w1
  UnityEngine_Object_o *itemDraw; // x26
  __int64 v17; // x1
  QuestBoardListViewItemDraw_o *v18; // x0

  if ( (byte_42B0194 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    byte_42B0194 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v14 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == QuestBoardListViewItem_TypeInfo )
    {
      v15 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v15 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v15, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v18 = this->fields.itemDraw;
    if ( !v18 )
      sub_B52A5C(0LL, v17);
    QuestBoardListViewItemDraw__SetItemOfAreaForTeminalTopEffect(
      v18,
      (QuestBoardListViewItem_o *)linkItem,
      isBoardDisp,
      isBadgeDisp,
      isBlackMarkOnly,
      isWhiteMarkOnly,
      isSpecialClosedBanner,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__Start(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    QuestBoardListViewObject__Init_25280440(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


void __fastcall QuestBoardListViewObject__Update(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  QuestBoardListViewItem_c *v5; // x10
  QuestBoardListViewItem_o *v6; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11
  struct ListViewManager_o *v9; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42B0196 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItem_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    byte_42B0196 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4 )
    {
      v5 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1];
      v6 = v5 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v8 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == QuestBoardListViewManager_TypeInfo )
            v9 = this->fields.manager;
          else
            v9 = 0LL;
        }
        else
        {
          v9 = 0LL;
        }
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_B52A5C(0LL, v6);
        QuestBoardListViewItemDraw__UpdateItem(
          itemDraw,
          v6,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v9,
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

  if ( (byte_42B018C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B018C = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (QuestBoardListViewObject_o *)sub_B52D50(v8);
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

  if ( (byte_42B018D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B018D = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (QuestBoardListViewObject_o *)sub_B52D50(v8);
  QuestBoardListViewObject__get_ItemDraw(v11, v12);
}