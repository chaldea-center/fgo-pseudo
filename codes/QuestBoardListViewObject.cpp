void __fastcall QuestBoardListViewObject___ctor(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4186E49 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4186E49 = 1;
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

  if ( (byte_4186E3B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___, method);
    byte_4186E3B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (struct QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___),
        this->fields.itemDraw = Component_srcLineSprite,
        sub_B2C2F8(
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
    sub_B2C434(dispObject, v3);
  }
  itemDraw->fields.mListViewObject = this;
  sub_B2C2F8(
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

  if ( (byte_4186E3D & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, method);
    byte_4186E3D = 1;
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
  QuestBoardListViewObject__Init_23867596(
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
void __fastcall QuestBoardListViewObject__Init_23867532(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  QuestBoardListViewObject__Init_23867596(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__Init_23867596(
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

  if ( (byte_4186E3F & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4186E3F = 1;
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
    sub_B2C434(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B2C2F8(
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
    v30 = dword_31A1298[v13];
    this->fields.dispMode = dword_319E8FC[v13];
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    QuestBoardListViewObject__SetupDisp(this, v23);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    System_Action__Invoke(klass, 0LL);
  }
}


bool __fastcall QuestBoardListViewObject__IsStateInput(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


void __fastcall QuestBoardListViewObject__LateUpdate(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  QuestBoardListViewItem_c *v6; // x10
  QuestBoardListViewItem_o *v7; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4186E44 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, method);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4186E44 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v9 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
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
          sub_B2C434(0LL, v7);
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
  __int64 v5; // x11
  QuestBoardListViewItem_c *v6; // x10
  QuestBoardListViewItem_o *v7; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4186E42 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, method);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4186E42 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v9 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
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
          sub_B2C434(0LL, v7);
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
  __int64 v8; // x9
  struct ListViewItem_o *linkItem; // x8
  __int64 v10; // x11
  QuestBoardListViewItem_c *v11; // x10
  QuestBoardListViewItem_o *v12; // x19
  MapControl_QuestInfo_o *v13; // x20
  int64_t *p_endTime; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  TerminalSceneComponent_c *v16; // x0

  if ( (byte_4186E48 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, isOpend);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v6);
    byte_4186E48 = 1;
  }
  manager = (MapControl_QuestInfo_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_40;
  *(_QWORD *)&isOpend = QuestBoardListViewManager_TypeInfo;
  v8 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    manager = (MapControl_QuestInfo_o *)sub_B2C728(manager);
    goto LABEL_40;
  }
  if ( !manager[3].fields.isNew )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v10 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10 )
      {
        v11 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1];
        v12 = v11 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v11 == QuestBoardListViewItem_TypeInfo )
        {
          if ( !v12 )
            goto LABEL_40;
          manager = v12->fields._quest_info_k__BackingField;
          if ( !manager )
            goto LABEL_40;
          if ( MapControl_QuestInfo__GetMine(manager, 0LL) )
          {
            manager = v12->fields._quest_info_k__BackingField;
            if ( !manager )
              goto LABEL_40;
            manager = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(manager, 0LL);
            if ( !manager )
              goto LABEL_40;
            v13 = manager;
            if ( LOBYTE(manager[1].fields.phaseCount)
              || (PhaseDetail = QuestEntity__GetPhaseDetail((QuestEntity_o *)manager, (const MethodInfo *)isOpend)) == 0LL )
            {
              p_endTime = &v13->fields.endTime;
            }
            else
            {
              p_endTime = &PhaseDetail->fields.flag;
            }
            if ( (*((_BYTE *)p_endTime + 7) & 4) != 0 )
            {
              manager = v12->fields._quest_info_k__BackingField;
              if ( !manager )
                goto LABEL_40;
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
                if ( !byte_4183C65 )
                {
                  sub_B2C35C(&TerminalSceneComponent_TypeInfo, isOpend);
                  byte_4183C65 = 1;
                }
                v16 = TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  v16 = TerminalSceneComponent_TypeInfo;
                }
                manager = (MapControl_QuestInfo_o *)v16->static_fields->mInstance;
                if ( manager )
                {
                  TerminalSceneComponent__CallQuestClearReset((TerminalSceneComponent_o *)manager, v12, 0LL);
                  return;
                }
LABEL_40:
                sub_B2C434(manager, isOpend);
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
  __int64 v11; // x9
  struct ListViewItem_o *linkItem; // x21
  __int64 v13; // x10
  TerminalSceneComponent_o *v14; // x22
  int64_t *p_TUTORIAL_MENU_MESSAGE_POS; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  _DWORD *monitor; // x8
  int32_t v18; // w22
  __int64 v19; // x9
  TerminalSceneComponent_c *v20; // x0
  _DWORD *v21; // x8
  TerminalSceneComponent_c *v22; // x0
  TerminalSceneComponent_c *v23; // x0
  QuestBoardListViewManager_o *v24; // x0
  const MethodInfo *v25; // x1

  v3 = isOpened;
  if ( (byte_4186E47 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, isOpened);
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, v5);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
    byte_4186E47 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, isOpened);
    byte_4183C65 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_77;
  if ( TerminalSceneComponent__QuestInfoBusy(mInstance, 0LL) )
    return;
  mInstance = (TerminalSceneComponent_o *)this->fields.manager;
  if ( !mInstance )
    goto LABEL_77;
  *(_QWORD *)&isOpened = QuestBoardListViewManager_TypeInfo;
  v11 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mInstance->klass->_2.bitflags2 + 1) < (unsigned int)v11
    || (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v11 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_78;
  }
  if ( LOBYTE(mInstance[1].fields.uiRoot) )
    return;
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v13 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v13)
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] != QuestBoardListViewItem_TypeInfo
    || (mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor) == 0LL )
  {
LABEL_77:
    sub_B2C434(mInstance, isOpened);
  }
  if ( LODWORD(mInstance->fields.uiRoot) != 2 )
    goto LABEL_37;
  mInstance = (TerminalSceneComponent_o *)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)mInstance, 0LL);
  if ( !mInstance )
    goto LABEL_77;
  v14 = mInstance;
  if ( LOBYTE(mInstance->fields.TUTORIAL_GACHA_ARROW_RECT.fields.m_Height)
    || (PhaseDetail = QuestEntity__GetPhaseDetail((QuestEntity_o *)mInstance, (const MethodInfo *)isOpened)) == 0LL )
  {
    p_TUTORIAL_MENU_MESSAGE_POS = (int64_t *)&v14->fields.TUTORIAL_MENU_MESSAGE_POS;
  }
  else
  {
    p_TUTORIAL_MENU_MESSAGE_POS = &PhaseDetail->fields.flag;
  }
  if ( (*((_BYTE *)p_TUTORIAL_MENU_MESSAGE_POS + 7) & 4) == 0 )
    goto LABEL_37;
  mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor;
  if ( !mInstance )
    goto LABEL_77;
  mInstance = (TerminalSceneComponent_o *)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)mInstance, 0LL);
  if ( !mInstance )
    goto LABEL_77;
  if ( LODWORD(mInstance->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y) != 5 )
    goto LABEL_37;
  monitor = linkItem[1].monitor;
  if ( !monitor )
    goto LABEL_77;
  v18 = monitor[4];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25746984(v18, -1, 0, 0LL) )
  {
LABEL_37:
    mInstance = (TerminalSceneComponent_o *)this->fields.manager;
    if ( !mInstance )
      goto LABEL_77;
    v19 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&mInstance->klass->_2.bitflags2 + 1) >= (unsigned int)v19
      && (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v19 - 1] == QuestBoardListViewManager_TypeInfo )
    {
      QuestBoardListViewManager__SetShowingInfoAllOff(
        (QuestBoardListViewManager_o *)mInstance,
        (const MethodInfo *)QuestBoardListViewManager_TypeInfo);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, isOpened);
        byte_4183C65 = 1;
      }
      v20 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v20 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v20->static_fields->mInstance;
      if ( mInstance )
      {
        mInstance = (TerminalSceneComponent_o *)TerminalSceneComponent__QuestInfoShowing(mInstance, 0LL);
        v21 = linkItem[1].monitor;
        if ( v21 )
        {
          if ( (_DWORD)mInstance == v21[4] )
          {
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_4183C65 )
            {
              sub_B2C35C(&TerminalSceneComponent_TypeInfo, isOpened);
              byte_4183C65 = 1;
            }
            v22 = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v22 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v22->static_fields->mInstance;
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
              if ( !byte_4183C65 )
              {
                sub_B2C35C(&TerminalSceneComponent_TypeInfo, isOpened);
                byte_4183C65 = 1;
              }
              v23 = TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v23 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v23->static_fields->mInstance;
              if ( mInstance )
              {
                TerminalSceneComponent__CallQuestInformation(mInstance, (QuestBoardListViewItem_o *)linkItem, 0LL);
                return;
              }
            }
          }
        }
      }
      goto LABEL_77;
    }
LABEL_78:
    v24 = (QuestBoardListViewManager_o *)sub_B2C728(mInstance);
    QuestBoardListViewManager__OnChangeAlphaAnim(v24, v25);
  }
}


void __fastcall QuestBoardListViewObject__OnDestroy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4186E3C & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4186E3C = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B2C2F8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall QuestBoardListViewObject__OnDragStart(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  QuestBoardListViewItem_c *v6; // x10
  QuestBoardListViewItem_o *v7; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x21
  __int64 v11; // x1
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4186E46 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, method);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4186E46 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v9 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
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
          sub_B2C434(0LL, v11);
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
  __int64 v7; // x11
  QuestBoardListViewItem_c *v8; // x10
  QuestBoardListViewItem_o *v9; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  struct ListViewManager_o *v12; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0
  int32_t dispMode; // w2

  if ( (byte_4186E45 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, is_press);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v5);
    byte_4186E45 = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) <= 1 )
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
          manager = this->fields.manager;
          if ( manager
            && (v11 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
                *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
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
            sub_B2C434(0LL, v9);
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


void __fastcall QuestBoardListViewObject__SetInfoShowing(
        QuestBoardListViewObject_o *this,
        bool onOff,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B2C434(0LL, onOff);
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
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1
  QuestBoardListViewItemDraw_o *v10; // x0

  if ( (byte_4186E3E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isInput);
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, v5);
    byte_4186E3E = 1;
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
      && (v8 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
    {
      if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == QuestBoardListViewItem_TypeInfo )
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
      sub_B2C434(0LL, v9);
    QuestBoardListViewItemDraw__SetInput(v10, (QuestBoardListViewItem_o *)v9, isInput, 0LL);
  }
}


void __fastcall QuestBoardListViewObject__SetItem(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall QuestBoardListViewObject__SetItem_23867232(
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
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  QuestBoardListViewItemDraw_o *v9; // x0

  if ( (byte_4186E40 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, v3);
    byte_4186E40 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == QuestBoardListViewItem_TypeInfo )
    {
      v6 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B2C434(0LL, v8);
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
  __int64 v15; // x10
  bool v16; // w1
  UnityEngine_Object_o *itemDraw; // x26
  __int64 v18; // x1
  QuestBoardListViewItemDraw_o *v19; // x0

  if ( (byte_4186E41 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isBoardDisp);
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, v13);
    byte_4186E41 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v15 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v15
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v15 - 1] == QuestBoardListViewItem_TypeInfo )
    {
      v16 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v16 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v16, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v19 = this->fields.itemDraw;
    if ( !v19 )
      sub_B2C434(0LL, v18);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__Start(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    QuestBoardListViewObject__Init_23867596(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


void __fastcall QuestBoardListViewObject__Update(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  QuestBoardListViewItem_c *v6; // x10
  QuestBoardListViewItem_o *v7; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4186E43 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItem_TypeInfo, method);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v3);
    byte_4186E43 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v9 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
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
          sub_B2C434(0LL, v7);
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

  if ( (byte_4186E39 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186E39 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (QuestBoardListViewObject_o *)sub_B2C728(v8);
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

  if ( (byte_4186E3A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186E3A = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (QuestBoardListViewObject_o *)sub_B2C728(v8);
  QuestBoardListViewObject__get_ItemDraw(v11, v12);
}