void __fastcall PartyListViewObject___ctor(PartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_40FDDCD & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FDDCD = 1;
  }
  this->fields.maxAlphaRate = 0.6;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall PartyListViewObject__Awake(PartyListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct PartyListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FDDBD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___, method);
    byte_40FDDBD = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct PartyListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                dispObject,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyListViewObject__CreateDragObject(
        PartyListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  PartyListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FDDC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___, method);
    byte_40FDDC1 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     DragObject,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___)) == 0LL) )
  {
    sub_B170D4();
  }
  v6 = (PartyListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyListViewObject__Init(v6, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v4;
}


void __fastcall PartyListViewObject__EndCloseShowEquip(PartyListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListViewObject__EndCloseShowServant(PartyListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListViewObject__EndCloseShowServantQuestJump(
        PartyListViewObject_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FDDC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FDDC8 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowEquip(PartyListViewObject_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *manager; // x0
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v10; // x20
  ListViewManager_o *v11; // x0
  struct UIScrollView_o *v12; // x8
  UIPanel_o *v13; // x0
  CommonUI_o *Instance; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x21

  if ( (byte_40FDDCA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&Method_PartyListViewObject_EndCloseShowEquip__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_9996, v7);
    byte_40FDDCA = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9996, (Il2CppObject *)this, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  v10 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v10 )
    goto LABEL_14;
  UIPanel__EndShowOverWriteRange(v10, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  v11 = this->fields.manager;
  if ( !v11
    || (ListViewManager__JumpItem(v11, this->fields.showIndex, 0LL), (v12 = this->fields.scrollView) == 0LL)
    || (v13 = *(UIPanel_o **)&v12->fields.mPlane.fields.m_Normal.fields.x) == 0LL
    || (UIPanel__EndShowOverWriteRange(v13, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18),
        System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyListViewObject_EndCloseShowEquip__, 0LL),
        !Instance) )
  {
LABEL_14:
    sub_B170D4();
  }
  CommonUI__CloseServantEquipStatusDialog(Instance, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowServant(
        PartyListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *manager; // x0
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v10; // x20
  ListViewManager_o *v11; // x0
  struct UIScrollView_o *v12; // x8
  UIPanel_o *v13; // x0
  CommonUI_o *Instance; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x21

  if ( (byte_40FDDC6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&Method_PartyListViewObject_EndCloseShowServant__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_9996, v7);
    byte_40FDDC6 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9996, (Il2CppObject *)this, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  v10 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v10 )
    goto LABEL_14;
  UIPanel__EndShowOverWriteRange(v10, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  v11 = this->fields.manager;
  if ( !v11
    || (ListViewManager__JumpItem(v11, this->fields.showIndex, 0LL), (v12 = this->fields.scrollView) == 0LL)
    || (v13 = *(UIPanel_o **)&v12->fields.mPlane.fields.m_Normal.fields.x) == 0LL
    || (UIPanel__EndShowOverWriteRange(v13, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18),
        System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyListViewObject_EndCloseShowServant__, 0LL),
        !Instance) )
  {
LABEL_14:
    sub_B170D4();
  }
  CommonUI__CloseServantStatusDialog(Instance, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowServantWithQuest(
        PartyListViewObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FDDC7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_PartyListViewObject_EndCloseShowServantQuestJump__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FDDC7 = 1;
  }
  if ( questId < 1 )
  {
    PartyListViewObject__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyListViewObject_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
  }
}


void __fastcall PartyListViewObject__EventMoveEnd(PartyListViewObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc[-1].fields.isOpenAfter = 0;
  p_callbackFunc[-1].fields.adjustHeight = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


PartyListViewItem_o *__fastcall PartyListViewObject__GetItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FDDBF & 1) == 0 )
  {
    sub_B16FFC(&PartyListViewItem_TypeInfo, method);
    byte_40FDDBF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == PartyListViewItem_TypeInfo )
    return (PartyListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v11; // x10
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v13; // x3
  PartyListViewItemDraw_o *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v16; // x0
  struct System_Action_o **p_callbackFunc; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t *p_dispMode; // x23
  char v25; // w1
  int32_t v26; // w8
  UnityEngine_Object_o *v27; // x22
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  MethodInfo *v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  PartyListViewItemDraw_o *v35; // x0
  System_Action_o *v36; // x20

  if ( (byte_40FDDC2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode);
    sub_B16FFC(&PartyListViewItem_TypeInfo, v9);
    byte_40FDDC2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v11 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1), *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != PartyListViewItem_TypeInfo )
  {
    this->fields.state = 0;
    this->fields.dispMode = 0;
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
      goto LABEL_12;
    v14 = this->fields.itemDraw;
    if ( v14 )
    {
      PartyListViewItemDraw__SetItem(v14, 0LL, this->fields.dispMode, v13);
LABEL_12:
      ((void (__fastcall *)(PartyListViewObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
        this,
        0LL,
        this->klass->vtable._10_Invalidation.methodPtr);
      return;
    }
LABEL_33:
    sub_B170D4();
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL);
  v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v16 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v16, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  switch ( initMode )
  {
    case 0:
      this->fields.dispMode = 0;
      p_dispMode = &this->fields.dispMode;
      v25 = 0;
      this->fields.state = 1;
      break;
    case 1:
      v25 = 1;
      this->fields.dispMode = 1;
      p_dispMode = &this->fields.dispMode;
      goto LABEL_22;
    case 2:
      v26 = 2;
      goto LABEL_19;
    case 3:
      this->fields.dispMode = 2;
      p_dispMode = &this->fields.dispMode;
      this->fields.state = 3;
      v25 = 1;
      break;
    case 4:
      v26 = 4;
LABEL_19:
      this->fields.dispMode = v26;
      p_dispMode = &this->fields.dispMode;
      v25 = 1;
LABEL_22:
      *(p_dispMode - 5) = 1;
      break;
    default:
      p_dispMode = &this->fields.dispMode;
      v25 = this->fields.dispMode != 0;
      break;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v25, 0LL);
  ((void (__fastcall *)(PartyListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.state == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  v27 = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    v35 = this->fields.itemDraw;
    if ( !v35 )
      goto LABEL_33;
    PartyListViewItemDraw__SetItem(v35, (PartyListViewItem_o *)linkItem, *p_dispMode, v30);
  }
  v36 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      v29,
      (System_String_array **)v30,
      v31,
      v32,
      v33,
      v34);
    System_Action__Invoke(v36, 0LL);
  }
  PartyListViewObject__InitAlphaMask(this, v28);
}


void __fastcall PartyListViewObject__InitAlphaMask(PartyListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct UnityEngine_BoxCollider_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  struct UIScrollView_o *ComponentInParent_UIScrollView; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Component_o *manager; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_40FDDCB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FDDCB = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_17;
  v7 = (struct UnityEngine_BoxCollider_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                                 dispObject,
                                                 (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.colliders,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  PartyListViewObject__UpdateCollider(this, 1, v14);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v16 )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  if ( this->fields.useAlphaMask )
  {
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v18 )
    {
      ComponentInParent_UIScrollView = UnityEngine_GameObject__GetComponentInParent_UIScrollView_(
                                         v18,
                                         (const MethodInfo_19D168C *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = ComponentInParent_UIScrollView;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.scrollView,
        (System_Int32_array **)ComponentInParent_UIScrollView,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        v27 = UnityEngine_Component__get_gameObject(manager, 0LL);
        if ( v27 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v27,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_Dropdown_DropdownItem;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.itemSeed,
            (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          PartyListViewObject__UpdateAlphaMask(this, v35);
          return;
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
}


void __fastcall PartyListViewObject__InitItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init_32484608(
        PartyListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init_32485868(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyListViewObject__Init(this, initMode, callbackFunc, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init_32485932(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyListViewObject__Init(this, initMode, callbackFunc, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
}


void __fastcall PartyListViewObject__OnClickItem1(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 0, v2);
}


void __fastcall PartyListViewObject__OnClickItem2(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 1, v2);
}


void __fastcall PartyListViewObject__OnClickItem3(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 2, v2);
}


void __fastcall PartyListViewObject__OnClickItem4(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 3, v2);
}


void __fastcall PartyListViewObject__OnClickItem5(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 4, v2);
}


void __fastcall PartyListViewObject__OnClickItem6(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 5, v2);
}


void __fastcall PartyListViewObject__OnClickItemEquip1(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 0, v2);
}


void __fastcall PartyListViewObject__OnClickItemEquip2(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 1, v2);
}


void __fastcall PartyListViewObject__OnClickItemEquip3(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 2, v2);
}


void __fastcall PartyListViewObject__OnClickItemEquip4(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 3, v2);
}


void __fastcall PartyListViewObject__OnClickItemEquip5(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 4, v2);
}


void __fastcall PartyListViewObject__OnClickItemEquip6(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 5, v2);
}


void __fastcall PartyListViewObject__OnDestroy(PartyListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_40FDDBE & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FDDBE = 1;
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
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall PartyListViewObject__OnLongPressItem1(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 0, v2);
}


void __fastcall PartyListViewObject__OnLongPressItem2(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 1, v2);
}


void __fastcall PartyListViewObject__OnLongPressItem3(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 2, v2);
}


void __fastcall PartyListViewObject__OnLongPressItem4(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 3, v2);
}


void __fastcall PartyListViewObject__OnLongPressItem5(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 4, v2);
}


void __fastcall PartyListViewObject__OnLongPressItem6(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 5, v2);
}


void __fastcall PartyListViewObject__OnLongPressItemEquip1(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 0, v2);
}


void __fastcall PartyListViewObject__OnLongPressItemEquip2(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 1, v2);
}


void __fastcall PartyListViewObject__OnLongPressItemEquip3(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 2, v2);
}


void __fastcall PartyListViewObject__OnLongPressItemEquip4(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 3, v2);
}


void __fastcall PartyListViewObject__OnLongPressItemEquip5(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 4, v2);
}


void __fastcall PartyListViewObject__OnLongPressItemEquip6(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 5, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__OpenEquipDetail(PartyListViewObject_o *this, int32_t m, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t state; // w8
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11
  PartyListViewItem_c *v13; // x10
  PartyListViewItem_o *v14; // x21
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v16; // x20
  CommonUI_o *v17; // x21
  int64_t EquipUserSvtId; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  ServantStatusDialog_EndDelegate_o *v23; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantLeaderInfo_o *v26; // x0
  bool IsNpc; // w22
  CommonUI_o *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ServantStatusDialog_EndDelegate_o *v34; // x23
  int32_t v35; // w1

  if ( (byte_40FDDC9 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&m);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&PartyListViewItem_TypeInfo, v6);
    sub_B16FFC(&Method_PartyListViewObject_EndShowEquip__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    byte_40FDDC9 = 1;
  }
  state = this->fields.state;
  this->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v12 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
      {
        v13 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1];
        v14 = v13 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v13 == PartyListViewItem_TypeInfo )
        {
          if ( v14 )
          {
            Member = PartyListViewItem__GetMember(v14, m, method);
            this->fields.showIndex = v14->fields.index;
            if ( Member )
            {
              v16 = Member;
              if ( PartyOrganizationListViewItem__get_EquipUserSvtId(Member, 0LL) < 1 )
              {
                if ( !PartyOrganizationListViewItem__get_ServantLeader(v16, 0LL) )
                  goto LABEL_42;
                ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v16, 0LL);
                if ( !ServantLeader )
                  goto LABEL_39;
                if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
                  goto LABEL_42;
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v16, 0LL);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(EquipSvtId, 0LL) < 1 )
                {
LABEL_42:
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SoundManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  }
                  SoundManager__playSystemSe(2, 0LL);
                  return;
                }
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                v26 = PartyOrganizationListViewItem__get_ServantLeader(v16, 0LL);
                if ( v26 )
                {
                  IsNpc = ServantLeaderInfo__IsNpc(v26, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v16, 0LL);
                  v34 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                               ServantStatusDialog_EndDelegate_TypeInfo,
                                                               v30,
                                                               v31,
                                                               v32,
                                                               v33);
                  ServantStatusDialog_EndDelegate___ctor(
                    v34,
                    (Il2CppObject *)this,
                    Method_PartyListViewObject_EndShowEquip__,
                    0LL);
                  if ( Instance )
                  {
                    if ( IsNpc )
                      v35 = 19;
                    else
                      v35 = 14;
                    CommonUI__OpenServantEquipStatusDialog_18252676(Instance, v35, EquipTarget1, v34, 0LL, 0LL);
                    return;
                  }
                }
              }
              else
              {
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                v17 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v16, 0LL);
                v23 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                             ServantStatusDialog_EndDelegate_TypeInfo,
                                                             v19,
                                                             v20,
                                                             v21,
                                                             v22);
                ServantStatusDialog_EndDelegate___ctor(
                  v23,
                  (Il2CppObject *)this,
                  Method_PartyListViewObject_EndShowEquip__,
                  0LL);
                if ( v17 )
                {
                  CommonUI__OpenServantEquipStatusDialog(v17, 11, EquipUserSvtId, 1, v23, 0LL, 0LL);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_B170D4();
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__OpenServantDetail(
        PartyListViewObject_o *this,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t state; // w8
  struct ListViewItem_o *linkItem; // x8
  __int64 v13; // x11
  PartyListViewItem_c *v14; // x10
  PartyListViewItem_o *v15; // x21
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v17; // x22
  int32_t menuKind; // w22
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  bool v24; // zf
  CommonUI_o *v25; // x22
  ServantStatusDialog_FormationEndDelegate_o *v26; // x23
  FollowerInfo_o *followerInfo; // x0
  ServantStatusDialog_EndDelegate_o *v28; // x23
  CommonUI_o *v29; // x20
  ServantLeaderInfo_o *ServantLeader; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  ServantStatusDialog_EndDelegate_o *v35; // x22

  if ( (byte_40FDDC5 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&m);
    sub_B16FFC(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5);
    sub_B16FFC(&PartyListViewItem_TypeInfo, v6);
    sub_B16FFC(&Method_PartyListViewObject_EndShowServantWithQuest__, v7);
    sub_B16FFC(&Method_PartyListViewObject_EndShowServant__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40FDDC5 = 1;
  }
  state = this->fields.state;
  this->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v13 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        v14 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1];
        v15 = v14 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v14 == PartyListViewItem_TypeInfo )
        {
          if ( v15 )
          {
            Member = PartyListViewItem__GetMember(v15, m, method);
            this->fields.showIndex = v15->fields.index;
            if ( Member )
            {
              v17 = Member;
              if ( Member->fields.userServantEntity )
              {
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                menuKind = v15->fields.menuKind;
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v24 = menuKind == 8;
                v25 = (CommonUI_o *)Instance;
                if ( v24 )
                {
                  v26 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B170CC(
                                                                        ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                                        v20,
                                                                        v21,
                                                                        v22,
                                                                        v23);
                  ServantStatusDialog_FormationEndDelegate___ctor(
                    v26,
                    (Il2CppObject *)this,
                    Method_PartyListViewObject_EndShowServantWithQuest__,
                    0LL);
                  if ( v25 )
                  {
                    CommonUI__OpenServantStatusDialog_18246812(v25, 1, v15, m, v26, 0LL);
                    return;
                  }
                }
                else
                {
                  v28 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                               ServantStatusDialog_EndDelegate_TypeInfo,
                                                               v20,
                                                               v21,
                                                               v22,
                                                               v23);
                  ServantStatusDialog_EndDelegate___ctor(
                    v28,
                    (Il2CppObject *)this,
                    Method_PartyListViewObject_EndShowServant__,
                    0LL);
                  if ( v25 )
                  {
                    CommonUI__OpenServantStatusDialog(v25, 1, v15, m, v28, 0LL);
                    return;
                  }
                }
              }
              else
              {
                followerInfo = Member->fields.followerInfo;
                if ( !followerInfo || FollowerInfo__get_IsNpc(followerInfo, 0LL) )
                {
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SoundManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  }
                  SoundManager__playSystemSe(2, 0LL);
                  return;
                }
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                v29 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v17, 0LL);
                v35 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                             ServantStatusDialog_EndDelegate_TypeInfo,
                                                             v31,
                                                             v32,
                                                             v33,
                                                             v34);
                ServantStatusDialog_EndDelegate___ctor(
                  v35,
                  (Il2CppObject *)this,
                  Method_PartyListViewObject_EndShowServant__,
                  0LL);
                if ( v29 )
                {
                  CommonUI__OpenServantStatusDialog_18250312(v29, 5, ServantLeader, v35, 0LL);
                  return;
                }
              }
            }
          }
          sub_B170D4();
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__SelectMemberEquip(
        PartyListViewObject_o *this,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x10
  UnityEngine_Component_o *manager; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FDDC4 & 1) == 0 )
  {
    sub_B16FFC(&PartyListViewItem_TypeInfo, *(_QWORD *)&m);
    sub_B16FFC(&StringLiteral_9926, v5);
    byte_40FDDC4 = 1;
  }
  v11 = 0;
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v7 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7
        && (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == PartyListViewItem_TypeInfo )
      {
        manager = (UnityEngine_Component_o *)this->fields.manager;
        v11 = m + 1;
        v9 = System_Int32__ToString((int32_t)&v11, 0LL);
        v10 = System_String__Concat_43743732((System_String_o *)StringLiteral_9926, v9, 0LL);
        if ( !manager )
          sub_B170D4();
        UnityEngine_Component__SendMessage(manager, v10, (Il2CppObject *)this, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__SelectMemberServant(
        PartyListViewObject_o *this,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x10
  UnityEngine_Component_o *manager; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FDDC3 & 1) == 0 )
  {
    sub_B16FFC(&PartyListViewItem_TypeInfo, *(_QWORD *)&m);
    sub_B16FFC(&StringLiteral_9927, v5);
    byte_40FDDC3 = 1;
  }
  v11 = 0;
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v7 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7
        && (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == PartyListViewItem_TypeInfo )
      {
        manager = (UnityEngine_Component_o *)this->fields.manager;
        v11 = m + 1;
        v9 = System_Int32__ToString((int32_t)&v11, 0LL);
        v10 = System_String__Concat_43743732((System_String_o *)StringLiteral_9927, v9, 0LL);
        if ( !manager )
          sub_B170D4();
        UnityEngine_Component__SendMessage(manager, v10, (Il2CppObject *)this, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__SetInput(PartyListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  struct ListViewItem_o *v10; // x1
  PartyListViewItemDraw_o *v11; // x0

  if ( (byte_40FDDC0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isInput);
    sub_B16FFC(&PartyListViewItem_TypeInfo, v5);
    byte_40FDDC0 = 1;
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
      && (v9 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
    {
      if ( (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == PartyListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_B170D4();
    PartyListViewItemDraw__SetInput(v11, (PartyListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall PartyListViewObject__SetItem(
        PartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall PartyListViewObject__SetItem_32489908(
        PartyListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


// attributes: thunk
void __fastcall PartyListViewObject__Update(PartyListViewObject_o *this, const MethodInfo *method)
{
  PartyListViewObject__UpdateAlphaMask(this, method);
}


void __fastcall PartyListViewObject__UpdateAlphaMask(PartyListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *itemSeed; // x20
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Transform_o *transform; // x0
  float v8; // s8
  UnityEngine_Transform_o *v9; // x0
  float v10; // s0
  struct ListViewItemSeed_o *v11; // x8
  float v12; // s0
  UnityEngine_Component_o *v13; // x0
  float maxAlphaRate; // s10
  float v15; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v17; // s8
  const MethodInfo *v18; // x2
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  UIWidget_o *v25; // x19
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDDCC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDDCC = 1;
  }
  if ( this->fields.useAlphaMask )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    {
      itemSeed = (UnityEngine_Object_o *)this->fields.itemSeed;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(itemSeed, 0LL, 0LL) )
      {
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(maskSprite, 0LL, 0LL) )
        {
          v6 = (UnityEngine_Component_o *)this->fields.scrollView;
          if ( !v6 )
            goto LABEL_29;
          transform = UnityEngine_Component__get_transform(v6, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
          v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( !v9 )
            goto LABEL_29;
          LODWORD(v10) = (unsigned int)UnityEngine_Transform__get_localPosition(v9, 0LL);
          v11 = this->fields.itemSeed;
          if ( !v11 )
            goto LABEL_29;
          v12 = UnityEngine_Mathf__Clamp01(fabsf(v8 + v10) / v11->fields.arrangementPich.fields.x, 0LL);
          v13 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v13 )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          v15 = v12;
          gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
          if ( !gameObject )
            goto LABEL_29;
          v17 = v15 * maxAlphaRate;
          if ( (((v17 > 0.05) ^ UnityEngine_GameObject__get_activeSelf(gameObject, 0LL)) & 1) != 0 )
            PartyListViewObject__UpdateCollider(this, v17 <= 0.05, v18);
          v19 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v19
            || (v20 = UnityEngine_Component__get_gameObject(v19, 0LL)) == 0LL
            || (UnityEngine_GameObject__SetActive(v20, v17 > 0.05, 0LL),
                (v25 = (UIWidget_o *)this->fields.maskSprite) == 0LL) )
          {
LABEL_29:
            sub_B170D4();
          }
          v27.fields.r = v25->fields.mColor.fields.r;
          v27.fields.g = v25->fields.mColor.fields.g;
          v27.fields.b = v25->fields.mColor.fields.b;
          v27.fields.a = v17;
          var40.methodPointer = 0LL;
          var40.invoker_method = 0LL;
          UnityEngine_Color___ctor(v27, v21, v22, v23, v24, &var40);
          *(_QWORD *)&v28.fields.r = var40.methodPointer;
          *(_QWORD *)&v28.fields.b = var40.invoker_method;
          UIWidget__set_color(v25, v28, 0LL);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__UpdateCollider(PartyListViewObject_o *this, bool enable, const MethodInfo *method)
{
  struct UnityEngine_BoxCollider_array *colliders; // x8
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UnityEngine_Collider_o *v8; // x0

  colliders = this->fields.colliders;
  if ( !colliders )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, enable, method);
      sub_B170A0();
    }
    v8 = (UnityEngine_Collider_o *)colliders->m_Items[v5];
    if ( v8 )
    {
      UnityEngine_Collider__set_enabled(v8, v6, 0LL);
      colliders = this->fields.colliders;
      ++v5;
      if ( colliders )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall PartyListViewObject__add_callbackFunc(
        PartyListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FDDBB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDDBB = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyListViewObject__remove_callbackFunc(
        PartyListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FDDBC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FDDBC = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyListViewObject__Awake(v11, v12);
}