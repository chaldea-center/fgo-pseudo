void __fastcall PartyListViewObject___ctor(PartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_418B554 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_418B554 = 1;
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct PartyListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418B544 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___, method);
    byte_418B544 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct PartyListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                dispObject,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyListViewObject__CreateDragObject(
        PartyListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  PartyListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B548 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___, method);
    byte_418B548 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
  }
  v6 = (PartyListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyListViewObject__Init(v6, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
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
  __int64 v3; // x1

  if ( (byte_418B54F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_418B54F = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowEquip(PartyListViewObject_o *this, bool isDecide, const MethodInfo *method)
{
  PartyListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v9; // x20
  struct UIScrollView_o *v10; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21

  v3 = this;
  if ( (byte_418B551 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&Method_PartyListViewObject_EndCloseShowEquip__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (PartyListViewObject_o *)sub_B2C35C(&StringLiteral_10028/*"OnModifyListView"*/, v7);
    byte_418B551 = 1;
  }
  scrollView = v3->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  v9 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  this = (PartyListViewObject_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v9 )
    goto LABEL_14;
  UIPanel__EndShowOverWriteRange(v9, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  this = (PartyListViewObject_o *)v3->fields.manager;
  if ( !this )
    goto LABEL_14;
  ListViewManager__JumpItem((ListViewManager_o *)this, v3->fields.showIndex, 0LL);
  v10 = v3->fields.scrollView;
  if ( !v10
    || (this = *(PartyListViewObject_o **)&v10->fields.mPlane.fields.m_Normal.fields.x) == 0LL
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        (this = (PartyListViewObject_o *)v3->fields.manager) == 0LL)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10028/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v12, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowEquip__, 0LL),
        !Instance) )
  {
LABEL_14:
    sub_B2C434(this, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowServant(
        PartyListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v9; // x20
  struct UIScrollView_o *v10; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21

  v3 = this;
  if ( (byte_418B54D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&Method_PartyListViewObject_EndCloseShowServant__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (PartyListViewObject_o *)sub_B2C35C(&StringLiteral_10028/*"OnModifyListView"*/, v7);
    byte_418B54D = 1;
  }
  scrollView = v3->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  v9 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  this = (PartyListViewObject_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v9 )
    goto LABEL_14;
  UIPanel__EndShowOverWriteRange(v9, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  this = (PartyListViewObject_o *)v3->fields.manager;
  if ( !this )
    goto LABEL_14;
  ListViewManager__JumpItem((ListViewManager_o *)this, v3->fields.showIndex, 0LL);
  v10 = v3->fields.scrollView;
  if ( !v10
    || (this = *(PartyListViewObject_o **)&v10->fields.mPlane.fields.m_Normal.fields.x) == 0LL
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        (this = (PartyListViewObject_o *)v3->fields.manager) == 0LL)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10028/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v12, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowServant__, 0LL),
        !Instance) )
  {
LABEL_14:
    sub_B2C434(this, isDecide);
  }
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B54E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyListViewObject_EndCloseShowServantQuestJump__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_418B54E = 1;
  }
  if ( questId < 1 )
  {
    PartyListViewObject__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyListViewObject_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_B2C434(v10, v11);
    CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
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
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


PartyListViewItem_o *__fastcall PartyListViewObject__GetItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_418B546 & 1) == 0 )
  {
    sub_B2C35C(&PartyListViewItem_TypeInfo, method);
    byte_418B546 = 1;
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
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  PartyListViewItemDraw_o *transform; // x0
  struct System_Action_o **p_callbackFunc; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t *p_dispMode; // x23
  char v24; // w1
  int32_t v25; // w8
  UnityEngine_Object_o *v26; // x22
  System_String_array **v27; // x2
  MethodInfo *v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_o *v33; // x20

  if ( (byte_418B549 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode);
    sub_B2C35C(&PartyListViewItem_TypeInfo, v9);
    byte_418B549 = 1;
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
    transform = this->fields.itemDraw;
    if ( transform )
    {
      PartyListViewItemDraw__SetItem(transform, 0LL, this->fields.dispMode, v14);
LABEL_12:
      ((void (__fastcall *)(PartyListViewObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
        this,
        0LL,
        this->klass->vtable._10_Invalidation.methodPtr);
      return;
    }
LABEL_33:
    sub_B2C434(transform, v13);
  }
  transform = (PartyListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.basePosition, 0LL);
  transform = (PartyListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  switch ( initMode )
  {
    case 0:
      this->fields.dispMode = 0;
      p_dispMode = &this->fields.dispMode;
      v24 = 0;
      this->fields.state = 1;
      break;
    case 1:
      v24 = 1;
      this->fields.dispMode = 1;
      p_dispMode = &this->fields.dispMode;
      goto LABEL_22;
    case 2:
      v25 = 2;
      goto LABEL_19;
    case 3:
      this->fields.dispMode = 2;
      p_dispMode = &this->fields.dispMode;
      this->fields.state = 3;
      v24 = 1;
      break;
    case 4:
      v25 = 4;
LABEL_19:
      this->fields.dispMode = v25;
      p_dispMode = &this->fields.dispMode;
      v24 = 1;
LABEL_22:
      *(p_dispMode - 5) = 1;
      break;
    default:
      p_dispMode = &this->fields.dispMode;
      v24 = this->fields.dispMode != 0;
      break;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v24, 0LL);
  ((void (__fastcall *)(PartyListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.state == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  v26 = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_33;
    PartyListViewItemDraw__SetItem(transform, (PartyListViewItem_o *)linkItem, *p_dispMode, v28);
  }
  v33 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      v27,
      (System_String_array **)v28,
      v29,
      v30,
      v31,
      v32);
    System_Action__Invoke(v33, 0LL);
  }
  PartyListViewObject__InitAlphaMask(this, v13);
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
  struct UIScrollView_o *ComponentInParent_UIScrollView; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_418B552 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418B552 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_17;
  v7 = (struct UnityEngine_BoxCollider_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                 dispObject,
                                                 (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = v7;
  sub_B2C2F8(
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
    dispObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !dispObject )
      goto LABEL_17;
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
    if ( !dispObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(dispObject, 0, 0LL);
  }
  if ( this->fields.useAlphaMask )
  {
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( dispObject )
    {
      ComponentInParent_UIScrollView = UnityEngine_GameObject__GetComponentInParent_UIScrollView_(
                                         dispObject,
                                         (const MethodInfo_1AA7A88 *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = ComponentInParent_UIScrollView;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.scrollView,
        (System_Int32_array **)ComponentInParent_UIScrollView,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
        if ( dispObject )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        dispObject,
                                                        (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_Dropdown_DropdownItem;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.itemSeed,
            (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          PartyListViewObject__UpdateAlphaMask(this, v30);
          return;
        }
      }
    }
LABEL_17:
    sub_B2C434(dispObject, method);
  }
}


void __fastcall PartyListViewObject__InitItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init_31935380(
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
void __fastcall PartyListViewObject__Init_31936640(
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
void __fastcall PartyListViewObject__Init_31936704(
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

  if ( (byte_418B545 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418B545 = 1;
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
  PartyListViewObject_o *v4; // x19
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
  PartyListViewObject_o *v15; // x20
  CommonUI_o *v16; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool IsNpc; // w22
  CommonUI_o *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v23; // x23
  int32_t v24; // w1

  v4 = this;
  if ( (byte_418B550 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&m);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&PartyListViewItem_TypeInfo, v6);
    sub_B2C35C(&Method_PartyListViewObject_EndShowEquip__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    this = (PartyListViewObject_o *)sub_B2C35C(&SoundManager_TypeInfo, v9);
    byte_418B550 = 1;
  }
  state = v4->fields.state;
  v4->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v4->fields.linkItem;
    if ( linkItem )
    {
      v12 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
      {
        v13 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1];
        v14 = v13 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)v4->fields.linkItem : 0LL;
        if ( v13 == PartyListViewItem_TypeInfo )
        {
          if ( v14 )
          {
            this = (PartyListViewObject_o *)PartyListViewItem__GetMember(v14, m, method);
            v4->fields.showIndex = v14->fields.index;
            if ( this )
            {
              v15 = this;
              if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)this, 0LL) < 1 )
              {
                if ( !PartyOrganizationListViewItem__get_ServantLeader((PartyOrganizationListViewItem_o *)v15, 0LL) )
                  goto LABEL_42;
                this = (PartyListViewObject_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                  (PartyOrganizationListViewItem_o *)v15,
                                                  0LL);
                if ( !this )
                  goto LABEL_39;
                if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
                  goto LABEL_42;
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)v15, 0LL);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(EquipSvtId, 0LL) < 1 )
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
                this = (PartyListViewObject_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                  (PartyOrganizationListViewItem_o *)v15,
                                                  0LL);
                if ( this )
                {
                  IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                                   (PartyOrganizationListViewItem_o *)v15,
                                   0LL);
                  v23 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
                  ServantStatusDialog_EndDelegate___ctor(
                    v23,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowEquip__,
                    0LL);
                  if ( Instance )
                  {
                    if ( IsNpc )
                      v24 = 19;
                    else
                      v24 = 14;
                    CommonUI__OpenServantEquipStatusDialog_17986440(Instance, v24, EquipTarget1, v23, 0LL, 0LL);
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
                v16 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                                   (PartyOrganizationListViewItem_o *)v15,
                                   0LL);
                v18 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
                ServantStatusDialog_EndDelegate___ctor(
                  v18,
                  (Il2CppObject *)v4,
                  Method_PartyListViewObject_EndShowEquip__,
                  0LL);
                if ( v16 )
                {
                  CommonUI__OpenServantEquipStatusDialog(v16, 11, EquipUserSvtId, 1, v18, 0LL, 0LL);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_B2C434(this, *(_QWORD *)&m);
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
  PartyListViewObject_o *v4; // x19
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
  PartyListViewObject_o *v16; // x22
  int32_t menuKind; // w22
  WebViewManager_o *Instance; // x0
  bool v19; // zf
  CommonUI_o *v20; // x22
  ServantStatusDialog_FormationEndDelegate_o *v21; // x23
  FollowerInfo_o *itemDraw; // x0
  ServantStatusDialog_EndDelegate_o *v23; // x23
  CommonUI_o *v24; // x20
  ServantLeaderInfo_o *ServantLeader; // x21
  ServantStatusDialog_EndDelegate_o *v26; // x22

  v4 = this;
  if ( (byte_418B54C & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&m);
    sub_B2C35C(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5);
    sub_B2C35C(&PartyListViewItem_TypeInfo, v6);
    sub_B2C35C(&Method_PartyListViewObject_EndShowServantWithQuest__, v7);
    sub_B2C35C(&Method_PartyListViewObject_EndShowServant__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    this = (PartyListViewObject_o *)sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_418B54C = 1;
  }
  state = v4->fields.state;
  v4->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v4->fields.linkItem;
    if ( linkItem )
    {
      v13 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        v14 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1];
        v15 = v14 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)v4->fields.linkItem : 0LL;
        if ( v14 == PartyListViewItem_TypeInfo )
        {
          if ( v15 )
          {
            this = (PartyListViewObject_o *)PartyListViewItem__GetMember(v15, m, method);
            v4->fields.showIndex = v15->fields.index;
            if ( this )
            {
              v16 = this;
              if ( this->fields.callbackFunc )
              {
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                menuKind = v15->fields.menuKind;
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v19 = menuKind == 8;
                v20 = (CommonUI_o *)Instance;
                if ( v19 )
                {
                  v21 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B2C42C(ServantStatusDialog_FormationEndDelegate_TypeInfo);
                  ServantStatusDialog_FormationEndDelegate___ctor(
                    v21,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowServantWithQuest__,
                    0LL);
                  if ( v20 )
                  {
                    CommonUI__OpenServantStatusDialog_17980576(v20, 1, v15, m, v21, 0LL);
                    return;
                  }
                }
                else
                {
                  v23 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
                  ServantStatusDialog_EndDelegate___ctor(
                    v23,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowServant__,
                    0LL);
                  if ( v20 )
                  {
                    CommonUI__OpenServantStatusDialog(v20, 1, v15, m, v23, 0LL);
                    return;
                  }
                }
              }
              else
              {
                itemDraw = (FollowerInfo_o *)this->fields.itemDraw;
                if ( !itemDraw || FollowerInfo__get_IsNpc(itemDraw, 0LL) )
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
                v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(
                                  (PartyOrganizationListViewItem_o *)v16,
                                  0LL);
                v26 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
                ServantStatusDialog_EndDelegate___ctor(
                  v26,
                  (Il2CppObject *)v4,
                  Method_PartyListViewObject_EndShowServant__,
                  0LL);
                if ( v24 )
                {
                  CommonUI__OpenServantStatusDialog_17984076(v24, 5, ServantLeader, v26, 0LL);
                  return;
                }
              }
            }
          }
          sub_B2C434(this, *(_QWORD *)&m);
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
  __int64 v11; // x1
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418B54B & 1) == 0 )
  {
    sub_B2C35C(&PartyListViewItem_TypeInfo, *(_QWORD *)&m);
    sub_B2C35C(&StringLiteral_9958/*"OnClickListViewChangeEquip"*/, v5);
    byte_418B54B = 1;
  }
  v12 = 0;
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
        v12 = m + 1;
        v9 = System_Int32__ToString((int32_t)&v12, 0LL);
        v10 = System_String__Concat_44305532((System_String_o *)StringLiteral_9958/*"OnClickListViewChangeEquip"*/, v9, 0LL);
        if ( !manager )
          sub_B2C434(v10, v11);
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
  __int64 v11; // x1
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418B54A & 1) == 0 )
  {
    sub_B2C35C(&PartyListViewItem_TypeInfo, *(_QWORD *)&m);
    sub_B2C35C(&StringLiteral_9959/*"OnClickListViewChangeServant"*/, v5);
    byte_418B54A = 1;
  }
  v12 = 0;
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
        v12 = m + 1;
        v9 = System_Int32__ToString((int32_t)&v12, 0LL);
        v10 = System_String__Concat_44305532((System_String_o *)StringLiteral_9959/*"OnClickListViewChangeServant"*/, v9, 0LL);
        if ( !manager )
          sub_B2C434(v10, v11);
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

  if ( (byte_418B547 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isInput);
    sub_B2C35C(&PartyListViewItem_TypeInfo, v5);
    byte_418B547 = 1;
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
      sub_B2C434(0LL, v10);
    PartyListViewItemDraw__SetInput(v11, (PartyListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall PartyListViewObject__SetItem(
        PartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall PartyListViewObject__SetItem_31940680(
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
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  float v8; // s8
  float v9; // s0
  struct ListViewItemSeed_o *v10; // x8
  float v11; // s0
  float maxAlphaRate; // s10
  float v13; // s8
  float v14; // s8
  const MethodInfo *v15; // x2
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  UIWidget_o *v20; // x19
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418B553 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B553 = 1;
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
          transform = (UnityEngine_Component_o *)this->fields.scrollView;
          if ( !transform )
            goto LABEL_29;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v9) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          v10 = this->fields.itemSeed;
          if ( !v10 )
            goto LABEL_29;
          v11 = UnityEngine_Mathf__Clamp01(fabsf(v8 + v9) / v10->fields.arrangementPich.fields.x, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !transform )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          v13 = v11;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          v14 = v13 * maxAlphaRate;
          if ( (((v14 > 0.05) ^ UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL)) & 1) != 0 )
            PartyListViewObject__UpdateCollider(this, v14 <= 0.05, v15);
          transform = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !transform
            || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v14 > 0.05, 0LL),
                (v20 = (UIWidget_o *)this->fields.maskSprite) == 0LL) )
          {
LABEL_29:
            sub_B2C434(transform, v6);
          }
          v22.fields.r = v20->fields.mColor.fields.r;
          v22.fields.g = v20->fields.mColor.fields.g;
          v22.fields.b = v20->fields.mColor.fields.b;
          v22.fields.a = v14;
          var40.methodPointer = 0LL;
          var40.invoker_method = 0LL;
          UnityEngine_Color___ctor(v22, v16, v17, v18, v19, &var40);
          *(_QWORD *)&v23.fields.r = var40.methodPointer;
          *(_QWORD *)&v23.fields.b = var40.invoker_method;
          UIWidget__set_color(v20, v23, 0LL);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__UpdateCollider(PartyListViewObject_o *this, bool enable, const MethodInfo *method)
{
  struct UnityEngine_BoxCollider_array *colliders; // x8
  PartyListViewObject_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  colliders = this->fields.colliders;
  if ( !colliders )
LABEL_7:
    sub_B2C434(this, enable);
  v4 = this;
  v5 = 0LL;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
    this = (PartyListViewObject_o *)colliders->m_Items[v5];
    if ( this )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0LL);
      colliders = v4->fields.colliders;
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

  if ( (byte_418B542 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B542 = 1;
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
  sub_B2C728(v8);
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

  if ( (byte_418B543 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B543 = 1;
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
  sub_B2C728(v8);
  PartyListViewObject__Awake(v11, v12);
}