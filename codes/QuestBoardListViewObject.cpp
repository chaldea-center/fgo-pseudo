void __fastcall QuestBoardListViewObject___ctor(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8A8D & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A8D = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct QuestBoardListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct QuestBoardListViewItemDraw_o *itemDraw; // x8

  if ( (byte_42E8A7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42E8A7F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (struct QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___),
        this->fields.itemDraw = Component_srcLineSprite,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.itemDraw,
          (System_Int32_array **)Component_srcLineSprite,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (itemDraw = this->fields.itemDraw) == 0LL) )
  {
    sub_B5D69C(dispObject, v5);
  }
  itemDraw->fields.mListViewObject = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&itemDraw->fields.mListViewObject,
    (System_Int32_array **)this,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


QuestBoardListViewItem_o *__fastcall QuestBoardListViewObject__GetItem(
        QuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E8A81 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A81 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == QuestBoardListViewItem_TypeInfo )
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
  QuestBoardListViewObject__Init_25394508(
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
void __fastcall QuestBoardListViewObject__Init_25394444(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  QuestBoardListViewObject__Init_25394508(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall QuestBoardListViewObject__Init_25394508(
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

  if ( (byte_42E8A83 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42E8A83 = 1;
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
    sub_B5D69C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B5D560(
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
    v30 = dword_32A3000[v13];
    this->fields.dispMode = dword_32A072C[v13];
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    QuestBoardListViewObject__SetupDisp(this, v23);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    System_Action__Invoke(klass, 0LL);
  }
}


bool __fastcall QuestBoardListViewObject__IsStateInput(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


void __fastcall QuestBoardListViewObject__LateUpdate(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  QuestBoardListViewItem_c *v10; // x10
  QuestBoardListViewItem_o *v11; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  struct ListViewManager_o *v14; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42E8A88 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v5, v6, v7);
    byte_42E8A88 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      v10 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1];
      v11 = v10 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v10 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v13 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == QuestBoardListViewManager_TypeInfo )
            v14 = this->fields.manager;
          else
            v14 = 0LL;
        }
        else
        {
          v14 = 0LL;
        }
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_B5D69C(0LL, v11);
        QuestBoardListViewItemDraw__LateUpdateItem(
          itemDraw,
          v11,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v14,
          0LL);
      }
    }
  }
}


void __fastcall QuestBoardListViewObject__OnChangeAlphaAnim(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  QuestBoardListViewItem_c *v10; // x10
  QuestBoardListViewItem_o *v11; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  struct ListViewManager_o *v14; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42E8A86 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v5, v6, v7);
    byte_42E8A86 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      v10 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1];
      v11 = v10 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v10 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v13 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == QuestBoardListViewManager_TypeInfo )
            v14 = this->fields.manager;
          else
            v14 = 0LL;
        }
        else
        {
          v14 = 0LL;
        }
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_B5D69C(0LL, v11);
        QuestBoardListViewItemDraw__OnChangeAlphaAnim(
          itemDraw,
          v11,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v14,
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  MapControl_QuestInfo_o *manager; // x0
  __int64 v15; // x9
  struct ListViewItem_o *linkItem; // x8
  __int64 v17; // x11
  QuestBoardListViewItem_c *v18; // x10
  QuestBoardListViewItem_o *v19; // x19
  const MethodInfo *v20; // x2
  int v21; // w2
  __int64 v22; // x3
  TerminalSceneComponent_c *v23; // x0

  if ( (byte_42E8A8C & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, isOpend, (_DWORD)method, v3);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v11, v12, v13);
    byte_42E8A8C = 1;
  }
  manager = (MapControl_QuestInfo_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_36;
  *(_QWORD *)&isOpend = QuestBoardListViewManager_TypeInfo;
  v15 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v15 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    manager = (MapControl_QuestInfo_o *)sub_B5D990(manager);
    goto LABEL_36;
  }
  if ( !manager[3].fields.isNew )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v17 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v17 )
      {
        v18 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v17 - 1];
        v19 = v18 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v18 == QuestBoardListViewItem_TypeInfo )
        {
          if ( !v19 )
            goto LABEL_36;
          manager = v19->fields._quest_info_k__BackingField;
          if ( !manager )
            goto LABEL_36;
          if ( MapControl_QuestInfo__GetMine(manager, 0LL) )
          {
            manager = v19->fields._quest_info_k__BackingField;
            if ( !manager )
              goto LABEL_36;
            manager = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(manager, 0LL);
            if ( !manager )
              goto LABEL_36;
            if ( QuestEntity__HasFlag((QuestEntity_o *)manager, 0x400000000000000LL, v20) )
            {
              manager = v19->fields._quest_info_k__BackingField;
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
                if ( !byte_42E4B1E )
                {
                  sub_B5D5C4(&TerminalSceneComponent_TypeInfo, isOpend, v21, v22);
                  byte_42E4B1E = 1;
                }
                v23 = TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  v23 = TerminalSceneComponent_TypeInfo;
                }
                manager = (MapControl_QuestInfo_o *)v23->static_fields->mInstance;
                if ( manager )
                {
                  TerminalSceneComponent__CallQuestClearReset((TerminalSceneComponent_o *)manager, v19, 0LL);
                  return;
                }
LABEL_36:
                sub_B5D69C(manager, isOpend);
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
  __int64 v3; // x3
  bool v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  TerminalSceneComponent_c *v18; // x0
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v20; // x9
  struct ListViewItem_o *linkItem; // x21
  __int64 v22; // x10
  const MethodInfo *v23; // x2
  _DWORD *monitor; // x8
  int32_t v25; // w22
  __int64 v26; // x9
  int v27; // w2
  __int64 v28; // x3
  TerminalSceneComponent_c *v29; // x0
  int v30; // w2
  __int64 v31; // x3
  _DWORD *v32; // x8
  TerminalSceneComponent_c *v33; // x0
  int v34; // w2
  __int64 v35; // x3
  TerminalSceneComponent_c *v36; // x0
  QuestBoardListViewManager_o *v37; // x0
  const MethodInfo *v38; // x1

  v4 = isOpened;
  if ( (byte_42E8A8B & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, isOpened, (_DWORD)method, v3);
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v15, v16, v17);
    byte_42E8A8B = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, isOpened, (_DWORD)method, v3);
    byte_42E4B1E = 1;
  }
  v18 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v18 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v18->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_73;
  if ( TerminalSceneComponent__QuestInfoBusy(mInstance, 0LL) )
    return;
  mInstance = (TerminalSceneComponent_o *)this->fields.manager;
  if ( !mInstance )
    goto LABEL_73;
  *(_QWORD *)&isOpened = QuestBoardListViewManager_TypeInfo;
  v20 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mInstance->klass->_2.bitflags2 + 1) < (unsigned int)v20
    || (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v20 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_74;
  }
  if ( LOBYTE(mInstance[1].fields.uiRoot) )
    return;
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v22 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v22)
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v22 - 1] != QuestBoardListViewItem_TypeInfo
    || (mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor) == 0LL )
  {
LABEL_73:
    sub_B5D69C(mInstance, isOpened);
  }
  if ( LODWORD(mInstance->fields.uiRoot) != 2 )
    goto LABEL_33;
  mInstance = (TerminalSceneComponent_o *)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)mInstance, 0LL);
  if ( !mInstance )
    goto LABEL_73;
  if ( !QuestEntity__HasFlag((QuestEntity_o *)mInstance, 0x400000000000000LL, v23) )
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
  v25 = monitor[4];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25877652(v25, -1, 0, 0LL) )
  {
LABEL_33:
    mInstance = (TerminalSceneComponent_o *)this->fields.manager;
    if ( !mInstance )
      goto LABEL_73;
    v26 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&mInstance->klass->_2.bitflags2 + 1) >= (unsigned int)v26
      && (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v26 - 1] == QuestBoardListViewManager_TypeInfo )
    {
      QuestBoardListViewManager__SetShowingInfoAllOff(
        (QuestBoardListViewManager_o *)mInstance,
        (const MethodInfo *)QuestBoardListViewManager_TypeInfo);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, isOpened, v27, v28);
        byte_42E4B1E = 1;
      }
      v29 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v29->static_fields->mInstance;
      if ( mInstance )
      {
        mInstance = (TerminalSceneComponent_o *)TerminalSceneComponent__QuestInfoShowing(mInstance, 0LL);
        v32 = linkItem[1].monitor;
        if ( v32 )
        {
          if ( (_DWORD)mInstance == v32[4] )
          {
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_42E4B1E )
            {
              sub_B5D5C4(&TerminalSceneComponent_TypeInfo, isOpened, v30, v31);
              byte_42E4B1E = 1;
            }
            v33 = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v33 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v33->static_fields->mInstance;
            if ( mInstance )
            {
              TerminalSceneComponent__CallQuestInformationCloseAtAll(mInstance, 1, 0LL);
              return;
            }
          }
          else
          {
            if ( !v4 )
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
              if ( !byte_42E4B1E )
              {
                sub_B5D5C4(&TerminalSceneComponent_TypeInfo, isOpened, v34, v35);
                byte_42E4B1E = 1;
              }
              v36 = TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v36 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v36->static_fields->mInstance;
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
    v37 = (QuestBoardListViewManager_o *)sub_B5D990(mInstance);
    QuestBoardListViewManager__OnChangeAlphaAnim(v37, v38);
  }
}


void __fastcall QuestBoardListViewObject__OnDestroy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E8A80 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8A80 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall QuestBoardListViewObject__OnDragStart(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  QuestBoardListViewItem_c *v10; // x10
  QuestBoardListViewItem_o *v11; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  struct ListViewManager_o *v14; // x21
  __int64 v15; // x1
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42E8A8A & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v5, v6, v7);
    byte_42E8A8A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      v10 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1];
      v11 = v10 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v10 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v13 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == QuestBoardListViewManager_TypeInfo )
            v14 = this->fields.manager;
          else
            v14 = 0LL;
        }
        else
        {
          v14 = 0LL;
        }
        ListViewObject__OnDragStart((ListViewObject_o *)this, 0LL);
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_B5D69C(0LL, v15);
        QuestBoardListViewItemDraw__OnDragStartItem(
          itemDraw,
          v11,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v14,
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v10; // x11
  QuestBoardListViewItem_c *v11; // x10
  QuestBoardListViewItem_o *v12; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v14; // x11
  struct ListViewManager_o *v15; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0
  int32_t dispMode; // w2

  if ( (byte_42E8A89 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, is_press, (_DWORD)method, v3);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v6, v7, v8);
    byte_42E8A89 = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) <= 1 )
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
          manager = this->fields.manager;
          if ( manager
            && (v14 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
                *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
          {
            if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] == QuestBoardListViewManager_TypeInfo )
              v15 = this->fields.manager;
            else
              v15 = 0LL;
          }
          else
          {
            v15 = 0LL;
          }
          itemDraw = this->fields.itemDraw;
          if ( !itemDraw )
            sub_B5D69C(0LL, v12);
          dispMode = this->fields.dispMode;
          if ( is_press )
            QuestBoardListViewItemDraw__OnPressItem(itemDraw, v12, dispMode, (QuestBoardListViewManager_o *)v15, 0LL);
          else
            QuestBoardListViewItemDraw__OnPullItem(itemDraw, v12, dispMode, (QuestBoardListViewManager_o *)v15, 0LL);
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
    sub_B5D69C(0LL, onOff);
  QuestBoardListViewItemDraw__setInfoShowing(itemDraw, onOff, 0LL);
}


void __fastcall QuestBoardListViewObject__SetInput(
        QuestBoardListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 v11; // x11
  struct ListViewItem_o *v12; // x1
  QuestBoardListViewItemDraw_o *v13; // x0

  if ( (byte_42E8A82 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, v6, v7, v8);
    byte_42E8A82 = 1;
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
      && (v11 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
    {
      if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == QuestBoardListViewItem_TypeInfo )
        v12 = this->fields.linkItem;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
    QuestBoardListViewItemDraw__SetInput(v13, (QuestBoardListViewItem_o *)v12, isInput, 0LL);
  }
}


void __fastcall QuestBoardListViewObject__SetItem(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall QuestBoardListViewObject__SetItem_25394144(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall QuestBoardListViewObject__SetupDisp(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x10
  bool v10; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  QuestBoardListViewItemDraw_o *v13; // x0

  if ( (byte_42E8A84 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, v5, v6, v7);
    byte_42E8A84 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == QuestBoardListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v10 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
    QuestBoardListViewItemDraw__SetItem(v13, (QuestBoardListViewItem_o *)linkItem, this->fields.dispMode, 0LL);
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
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  struct ListViewItem_o *linkItem; // x25
  __int64 v17; // x10
  bool v18; // w1
  UnityEngine_Object_o *itemDraw; // x26
  __int64 v20; // x1
  QuestBoardListViewItemDraw_o *v21; // x0

  if ( (byte_42E8A85 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isBoardDisp, isBadgeDisp, isBlackMarkOnly);
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, v13, v14, v15);
    byte_42E8A85 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v17 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v17
      && (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v17 - 1] == QuestBoardListViewItem_TypeInfo )
    {
      v18 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v18 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v18, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v21 = this->fields.itemDraw;
    if ( !v21 )
      sub_B5D69C(0LL, v20);
    QuestBoardListViewItemDraw__SetItemOfAreaForTeminalTopEffect(
      v21,
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
    QuestBoardListViewObject__Init_25394508(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


void __fastcall QuestBoardListViewObject__Update(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  QuestBoardListViewItem_c *v10; // x10
  QuestBoardListViewItem_o *v11; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  struct ListViewManager_o *v14; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42E8A87 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestBoardListViewManager_TypeInfo, v5, v6, v7);
    byte_42E8A87 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&QuestBoardListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      v10 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1];
      v11 = v10 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v10 == QuestBoardListViewItem_TypeInfo )
      {
        manager = this->fields.manager;
        if ( manager
          && (v13 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1),
              *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
        {
          if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == QuestBoardListViewManager_TypeInfo )
            v14 = this->fields.manager;
          else
            v14 = 0LL;
        }
        else
        {
          v14 = 0LL;
        }
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_B5D69C(0LL, v11);
        QuestBoardListViewItemDraw__UpdateItem(
          itemDraw,
          v11,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v14,
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
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  QuestBoardListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E8A7D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8A7D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (QuestBoardListViewObject_o *)sub_B5D990(v9);
  QuestBoardListViewObject__remove_callbackFunc(v12, v13, v14);
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
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  QuestBoardListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E8A7E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8A7E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (QuestBoardListViewObject_o *)sub_B5D990(v9);
  QuestBoardListViewObject__get_ItemDraw(v12, v13);
}