void __fastcall QuestBoardListViewObject___ctor(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13104 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B13104 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall QuestBoardListViewObject__Awake(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct QuestBoardListViewItemDraw_o *itemDraw; // x8

  if ( (byte_4B130F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___, method, v2);
    byte_4B130F4 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewItemDraw___),
        this->fields.itemDraw = (struct QuestBoardListViewItemDraw_o *)Component_object,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.itemDraw,
          (int64_t)Component_object,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (itemDraw = this->fields.itemDraw) == 0LL) )
  {
    sub_1BCAA3C(dispObject, v4);
  }
  itemDraw->fields.mListViewObject = this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&itemDraw->fields.mListViewObject,
    (int64_t)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


QuestBoardListViewItem_o *__fastcall QuestBoardListViewObject__GetItem(
        QuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B130F6 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, method, v2);
    byte_4B130F6 = 1;
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

  QuestBoardListViewObject__Init_34629928(this, initMode, 0LL, v3);
}


void __fastcall QuestBoardListViewObject__InitItem(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__Init_34629928(
        QuestBoardListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  QuestBoardListViewObject__Init_34630012(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__Init_34630012(
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
  PartyOrganizationUtility_o *p_callbackFunc; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t v30; // w9
  PartyOrganizationUtility_c *klass; // x19

  if ( (byte_4B130F8 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B130F8 = 1;
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
    sub_1BCAA3C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (unsigned int)v11 <= 3 )
  {
    v30 = dword_BD2610[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BD2B90 + v11);
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    QuestBoardListViewObject__SetupDisp(this, v23);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


bool __fastcall QuestBoardListViewObject__IsDummy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct QuestBoardListViewItemDraw_o *v7; // x8

  if ( (byte_4B13103 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13103 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( !v5 )
    return 0;
  v7 = this->fields.itemDraw;
  if ( !v7 )
    sub_1BCAA3C(v5, v6);
  return v7->fields.isDummy;
}


bool __fastcall QuestBoardListViewObject__IsStateInput(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


void __fastcall QuestBoardListViewObject__LateUpdate(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v8; // x10
  QuestBoardListViewItem_o *v9; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  struct ListViewManager_o *v12; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4B130FD & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v4, v5);
    byte_4B130FD = 1;
  }
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
          sub_1BCAA3C(0LL, v9);
        QuestBoardListViewItemDraw__LateUpdateItem(
          itemDraw,
          v9,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v12,
          0LL);
      }
    }
  }
}


void __fastcall QuestBoardListViewObject__OnChangeAlphaAnim(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v8; // x10
  QuestBoardListViewItem_o *v9; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  struct ListViewManager_o *v12; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4B130FB & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v4, v5);
    byte_4B130FB = 1;
  }
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
          sub_1BCAA3C(0LL, v9);
        QuestBoardListViewItemDraw__OnChangeAlphaAnim(
          itemDraw,
          v9,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v12,
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MapControl_QuestInfo_o *manager; // x0
  __int64 methodPtr_low; // x9
  struct ListViewItem_o *linkItem; // x8
  __int64 v13; // x11
  QuestBoardListViewItem_o *v14; // x19
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x2
  TerminalSceneComponent_c *v18; // x0

  if ( (byte_4B13101 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, isOpend, method);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_QuestBoardListViewObject_OnClickClearResetBtn__, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B13101 = 1;
  }
  manager = (MapControl_QuestInfo_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_32;
  *(_QWORD *)&isOpend = QuestBoardListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_1BCACFC(manager);
    goto LABEL_32;
  }
  if ( !LOBYTE(manager[3].fields.phaseInfoList) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v13 = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v13 )
      {
        v14 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == QuestBoardListViewItem_TypeInfo
            ? (QuestBoardListViewItem_o *)this->fields.linkItem
            : 0LL;
        if ( v14 )
        {
          manager = v14->fields._quest_info_k__BackingField;
          if ( !manager )
            goto LABEL_32;
          if ( MapControl_QuestInfo__GetMine(manager, 0LL) )
          {
            manager = v14->fields._quest_info_k__BackingField;
            if ( !manager )
              goto LABEL_32;
            manager = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(manager, 0LL);
            if ( !manager )
              goto LABEL_32;
            if ( QuestEntity__HasFlag((QuestEntity_o *)manager, 0x400000000000000LL, 0LL) )
            {
              manager = v14->fields._quest_info_k__BackingField;
              if ( !manager )
                goto LABEL_32;
              if ( MapControl_QuestInfo__IsClear(manager, 0LL) )
              {
                v15 = Method_QuestBoardListViewObject_OnClickClearResetBtn__;
                if ( (*((_BYTE *)Method_QuestBoardListViewObject_OnClickClearResetBtn__ + 83) & 2) != 0 )
                  v15 = (_QWORD *)sub_1BCA7F8(Method_QuestBoardListViewObject_OnClickClearResetBtn__);
                v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
                OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpend);
                if ( !byte_4B10F83 )
                {
                  sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, isOpend, v17);
                  byte_4B10F83 = 1;
                }
                v18 = TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpend);
                  v18 = TerminalSceneComponent_TypeInfo;
                }
                manager = (MapControl_QuestInfo_o *)v18->static_fields->mInstance;
                if ( manager )
                {
                  TerminalSceneComponent__CallQuestClearReset((TerminalSceneComponent_o *)manager, v14, 0LL);
                  return;
                }
LABEL_32:
                sub_1BCAA3C(manager, isOpend);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  TerminalSceneComponent_c *v13; // x0
  TerminalSceneComponent_o *mInstance; // x0
  __int64 methodPtr_low; // x9
  struct ListViewItem_o *linkItem; // x21
  __int64 v17; // x10
  _DWORD *monitor; // x8
  int32_t v19; // w22
  __int64 v20; // x9
  __int64 v21; // x2
  TerminalSceneComponent_c *v22; // x0
  __int64 v23; // x2
  _DWORD *v24; // x8
  TerminalSceneComponent_c *v25; // x0
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  __int64 v28; // x2
  TerminalSceneComponent_c *v29; // x0
  QuestBoardListViewManager_o *v30; // x0
  const MethodInfo *v31; // x1

  v3 = isOpened;
  if ( (byte_4B13100 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, isOpened, method);
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_QuestBoardListViewObject_OnClickInfoBtn__, v9, v10);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v11, v12);
    byte_4B13100 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, isOpened, method);
    byte_4B10F83 = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v13->static_fields->mInstance;
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
  if ( LOBYTE(mInstance[1].fields.myFSM) )
    return;
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v17 = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)v17)
    || (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[v17 - 1] != QuestBoardListViewItem_TypeInfo
    || (mInstance = (TerminalSceneComponent_o *)linkItem[1].monitor) == 0LL )
  {
LABEL_63:
    sub_1BCAA3C(mInstance, isOpened);
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
  v19 = monitor[4];
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, isOpened);
  if ( CondType__IsQuestClear_38310172(v19, -1, 0, 0LL) )
  {
LABEL_30:
    mInstance = (TerminalSceneComponent_o *)this->fields.manager;
    if ( !mInstance )
      goto LABEL_63;
    v20 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(mInstance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v20
      && (QuestBoardListViewManager_c *)mInstance->klass->_2.typeHierarchy[v20 - 1] == QuestBoardListViewManager_TypeInfo )
    {
      QuestBoardListViewManager__SetShowingInfoAllOff(
        (QuestBoardListViewManager_o *)mInstance,
        (const MethodInfo *)QuestBoardListViewManager_TypeInfo);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, isOpened, v21);
        byte_4B10F83 = 1;
      }
      v22 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened);
        v22 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v22->static_fields->mInstance;
      if ( mInstance )
      {
        mInstance = (TerminalSceneComponent_o *)TerminalSceneComponent__QuestInfoShowing(mInstance, 0LL);
        v24 = linkItem[1].monitor;
        if ( v24 )
        {
          if ( (_DWORD)mInstance == v24[4] )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, isOpened, v23);
              byte_4B10F83 = 1;
            }
            v25 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened);
              v25 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v25->static_fields->mInstance;
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
              v26 = Method_QuestBoardListViewObject_OnClickInfoBtn__;
              if ( (*((_BYTE *)Method_QuestBoardListViewObject_OnClickInfoBtn__ + 83) & 2) != 0 )
                v26 = (_QWORD *)sub_1BCA7F8(Method_QuestBoardListViewObject_OnClickInfoBtn__);
              v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
              OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
            }
            mInstance = (TerminalSceneComponent_o *)this->fields.itemDraw;
            if ( mInstance )
            {
              QuestBoardListViewItemDraw__setInfoShowing((QuestBoardListViewItemDraw_o *)mInstance, 1, 0LL);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened);
              if ( !byte_4B10F83 )
              {
                sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, isOpened, v28);
                byte_4B10F83 = 1;
              }
              v29 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isOpened);
                v29 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v29->static_fields->mInstance;
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
    sub_1BCACFC(mInstance);
    QuestBoardListViewManager__OnChangeAlphaAnim(v30, v31);
  }
}


void __fastcall QuestBoardListViewObject__OnDestroy(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B130F5 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B130F5 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BCA784(p_dragObject, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall QuestBoardListViewObject__OnDragStart(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v8; // x10
  QuestBoardListViewItem_o *v9; // x20
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  struct ListViewManager_o *v12; // x21
  __int64 v13; // x1
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4B130FF & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v4, v5);
    byte_4B130FF = 1;
  }
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
        ListViewObject__OnDragStart((ListViewObject_o *)this, 0LL);
        itemDraw = this->fields.itemDraw;
        if ( !itemDraw )
          sub_1BCAA3C(0LL, v13);
        QuestBoardListViewItemDraw__OnDragStartItem(
          itemDraw,
          v9,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v12,
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
  __int64 v6; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v9; // x10
  QuestBoardListViewItem_o *v10; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v12; // x11
  struct ListViewManager_o *v13; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0
  int32_t dispMode; // w2

  if ( (byte_4B130FE & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, is_press, method);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v5, v6);
    byte_4B130FE = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) <= 1 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v9 = (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        v10 = v9 == QuestBoardListViewItem_TypeInfo ? (QuestBoardListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v9 == QuestBoardListViewItem_TypeInfo )
        {
          manager = this->fields.manager;
          if ( manager
            && (v12 = LOBYTE(QuestBoardListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12) )
          {
            if ( (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == QuestBoardListViewManager_TypeInfo )
              v13 = this->fields.manager;
            else
              v13 = 0LL;
          }
          else
          {
            v13 = 0LL;
          }
          itemDraw = this->fields.itemDraw;
          if ( !itemDraw )
            sub_1BCAA3C(0LL, v10);
          dispMode = this->fields.dispMode;
          if ( is_press )
            QuestBoardListViewItemDraw__OnPressItem(itemDraw, v10, dispMode, (QuestBoardListViewManager_o *)v13, 0LL);
          else
            QuestBoardListViewItemDraw__OnPullItem(itemDraw, v10, dispMode, (QuestBoardListViewManager_o *)v13, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  EventDelegate_o *v16; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *Component_object; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 klass_low; // x8
  __int64 v28; // x9
  _QWORD *v29; // x10
  int v30; // w10
  __int64 v31; // x8

  if ( (byte_4B13102 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_TypeInfo, scrTerminalListTop, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__get_Count__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_17974/*"cbfTitleInfoBtnBack_Click"*/, v14, v15);
    byte_4B13102 = 1;
  }
  v16 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, scrTerminalListTop, method, v3);
  EventDelegate___ctor_47349156(
    v16,
    (UnityEngine_MonoBehaviour_o *)scrTerminalListTop,
    (System_String_o *)StringLiteral_17974/*"cbfTitleInfoBtnBack_Click"*/,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
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
      v28 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v29 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( v28 )
      {
        if ( (unsigned int)klass_low >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v16,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = klass_low + 1;
          v31 = v28 + 8 * klass_low;
          LODWORD(gameObject[1].klass) = v30;
          *(_QWORD *)(v31 + 32) = v16;
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v16, v21, v22, v23, v24, v25, v26);
        }
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(gameObject, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__SetInfoShowing(
        QuestBoardListViewObject_o *this,
        bool onOff,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BCAA3C(0LL, onOff);
  QuestBoardListViewItemDraw__setInfoShowing(itemDraw, onOff, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewObject__SetInput(
        QuestBoardListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v11; // x1
  QuestBoardListViewItemDraw_o *v12; // x0

  if ( (byte_4B130F7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isInput, method);
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v5, v6);
    byte_4B130F7 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(QuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (QuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1BCAA3C(0LL, v11);
    QuestBoardListViewItemDraw__SetInput(v12, (QuestBoardListViewItem_o *)v11, isInput, 0LL);
  }
}


void __fastcall QuestBoardListViewObject__SetItem(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall QuestBoardListViewObject__SetItem_34629652(
        QuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall QuestBoardListViewObject__SetupDisp(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v11; // x1
  QuestBoardListViewItemDraw_o *v12; // x0

  if ( (byte_4B130F9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v4, v5);
    byte_4B130F9 = 1;
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
    v8 = 0;
    goto LABEL_8;
  }
  v8 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1BCAA3C(0LL, v11);
    QuestBoardListViewItemDraw__SetItem(v12, (QuestBoardListViewItem_o *)linkItem, this->fields.dispMode, 0LL);
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
  __int64 v14; // x2
  struct ListViewItem_o *linkItem; // x25
  __int64 methodPtr_low; // x10
  bool v17; // w1
  __int64 v18; // x1
  UnityEngine_Object_o *itemDraw; // x26
  __int64 v20; // x1
  QuestBoardListViewItemDraw_o *v21; // x0

  if ( (byte_4B130FA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isBoardDisp, isBadgeDisp);
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, v13, v14);
    byte_4B130FA = 1;
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
    v17 = 0;
    goto LABEL_8;
  }
  v17 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v17, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v21 = this->fields.itemDraw;
    if ( !v21 )
      sub_1BCAA3C(0LL, v20);
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


void __fastcall QuestBoardListViewObject__Start(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.state )
    QuestBoardListViewObject__Init_34629928(this, 2, 0LL, v2);
}


void __fastcall QuestBoardListViewObject__Update(QuestBoardListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  QuestBoardListViewItem_c *v8; // x10
  QuestBoardListViewItem_o *v9; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v11; // x11
  struct ListViewManager_o *v12; // x3
  QuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4B130FC & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&QuestBoardListViewManager_TypeInfo, v4, v5);
    byte_4B130FC = 1;
  }
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
          sub_1BCAA3C(0LL, v9);
        QuestBoardListViewItemDraw__UpdateItem(
          itemDraw,
          v9,
          this->fields.dispMode,
          (QuestBoardListViewManager_o *)v12,
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

  if ( (byte_4B130F2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B130F2 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B130F3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B130F3 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  QuestBoardListViewObject__get_ItemDraw(v11, v12);
}