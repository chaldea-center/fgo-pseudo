void __fastcall PartyListViewObject___ctor(PartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_42B3CE5 & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    byte_42B3CE5 = 1;
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

  if ( (byte_42B3CD4 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
    byte_42B3CD4 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B52A5C(0LL, v3);
  Component_srcLineSprite = (struct PartyListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                dispObject,
                                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B52920(
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

  if ( (byte_42B3CD8 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
    byte_42B3CD8 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___)) == 0LL) )
  {
    sub_B52A5C(DragObject, v4);
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
  const MethodInfo *v2; // x2
  struct ListViewManager_o *manager; // x8
  __int64 v5; // x11
  PartyListViewManager_c *v6; // x10
  PartyListViewManager_o *v7; // x0

  if ( (byte_42B3CDE & 1) == 0 )
  {
    sub_B52984(&PartyListViewManager_TypeInfo);
    byte_42B3CDE = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    v5 = *(&PartyListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == PartyListViewManager_TypeInfo ? (PartyListViewManager_o *)this->fields.manager : 0LL;
      if ( v6 == PartyListViewManager_TypeInfo )
      {
        if ( !v7 )
          sub_B52A5C(0LL, method);
        PartyListViewManager__SetScrollEnabled(v7, 1, v2);
      }
    }
  }
}


void __fastcall PartyListViewObject__EndCloseShowServantQuestJump(
        PartyListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewManager_o *manager; // x0
  __int64 v5; // x10
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42B3CE0 & 1) == 0 )
  {
    sub_B52984(&PartyListViewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42B3CE0 = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    v5 = *(&PartyListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] == PartyListViewManager_TypeInfo )
    {
      PartyListViewManager__SetScrollEnabled((PartyListViewManager_o *)manager, 1, v2);
    }
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v7);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowEquip(PartyListViewObject_o *this, bool isDecide, const MethodInfo *method)
{
  PartyListViewObject_o *v3; // x19
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v5; // x20
  struct UIScrollView_o *v6; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  v3 = this;
  if ( (byte_42B3CE2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&Method_PartyListViewObject_EndCloseShowEquip__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyListViewObject_o *)sub_B52984(&StringLiteral_10092/*"OnModifyListView"*/);
    byte_42B3CE2 = 1;
  }
  scrollView = v3->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  v5 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  this = (PartyListViewObject_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v5 )
    goto LABEL_14;
  UIPanel__EndShowOverWriteRange(v5, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  this = (PartyListViewObject_o *)v3->fields.manager;
  if ( !this )
    goto LABEL_14;
  ListViewManager__JumpItem((ListViewManager_o *)this, v3->fields.showIndex, 0LL);
  v6 = v3->fields.scrollView;
  if ( !v6
    || (this = *(PartyListViewObject_o **)&v6->fields.mPlane.fields.m_Normal.fields.x) == 0LL
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        (this = (PartyListViewObject_o *)v3->fields.manager) == 0LL)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10092/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowEquip__, 0LL),
        !Instance) )
  {
LABEL_14:
    sub_B52A5C(this, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog(Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowServant(
        PartyListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyListViewObject_o *v3; // x19
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v5; // x20
  struct UIScrollView_o *v6; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  v3 = this;
  if ( (byte_42B3CDD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&Method_PartyListViewObject_EndCloseShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyListViewObject_o *)sub_B52984(&StringLiteral_10092/*"OnModifyListView"*/);
    byte_42B3CDD = 1;
  }
  scrollView = v3->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  v5 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  this = (PartyListViewObject_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v5 )
    goto LABEL_14;
  UIPanel__EndShowOverWriteRange(v5, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  this = (PartyListViewObject_o *)v3->fields.manager;
  if ( !this )
    goto LABEL_14;
  ListViewManager__JumpItem((ListViewManager_o *)this, v3->fields.showIndex, 0LL);
  v6 = v3->fields.scrollView;
  if ( !v6
    || (this = *(PartyListViewObject_o **)&v6->fields.mPlane.fields.m_Normal.fields.x) == 0LL
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        (this = (PartyListViewObject_o *)v3->fields.manager) == 0LL)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10092/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowServant__, 0LL),
        !Instance) )
  {
LABEL_14:
    sub_B52A5C(this, isDecide);
  }
  CommonUI__CloseServantStatusDialog(Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowServantWithQuest(
        PartyListViewObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42B3CDF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PartyListViewObject_EndCloseShowServantQuestJump__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B3CDF = 1;
  }
  if ( questId < 1 )
  {
    PartyListViewObject__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyListViewObject_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_B52A5C(v8, v9);
    CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
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
    sub_B52920(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


PartyListViewItem_o *__fastcall PartyListViewObject__GetItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_42B3CD6 & 1) == 0 )
  {
    sub_B52984(&PartyListViewItem_TypeInfo);
    byte_42B3CD6 = 1;
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


void __fastcall PartyListViewObject__Init(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v10; // x10
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  PartyListViewItemDraw_o *transform; // x0
  struct System_Action_o **p_callbackFunc; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t *p_dispMode; // x23
  char v23; // w1
  int32_t v24; // w8
  UnityEngine_Object_o *v25; // x22
  System_String_array **v26; // x2
  MethodInfo *v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Action_o *v32; // x20

  if ( (byte_42B3CD9 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyListViewItem_TypeInfo);
    byte_42B3CD9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v10 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1), *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] != PartyListViewItem_TypeInfo )
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
      PartyListViewItemDraw__SetItem(transform, 0LL, this->fields.dispMode, v13);
LABEL_12:
      ((void (__fastcall *)(PartyListViewObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
        this,
        0LL,
        this->klass->vtable._10_Invalidation.methodPtr);
      return;
    }
LABEL_33:
    sub_B52A5C(transform, v12);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  switch ( initMode )
  {
    case 0:
      this->fields.dispMode = 0;
      p_dispMode = &this->fields.dispMode;
      v23 = 0;
      this->fields.state = 1;
      break;
    case 1:
      v23 = 1;
      this->fields.dispMode = 1;
      p_dispMode = &this->fields.dispMode;
      goto LABEL_22;
    case 2:
      v24 = 2;
      goto LABEL_19;
    case 3:
      this->fields.dispMode = 2;
      p_dispMode = &this->fields.dispMode;
      this->fields.state = 3;
      v23 = 1;
      break;
    case 4:
      v24 = 4;
LABEL_19:
      this->fields.dispMode = v24;
      p_dispMode = &this->fields.dispMode;
      v23 = 1;
LABEL_22:
      *(p_dispMode - 5) = 1;
      break;
    default:
      p_dispMode = &this->fields.dispMode;
      v23 = this->fields.dispMode != 0;
      break;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v23, 0LL);
  ((void (__fastcall *)(PartyListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.state == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  v25 = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_33;
    PartyListViewItemDraw__SetItem(transform, (PartyListViewItem_o *)linkItem, *p_dispMode, v27);
  }
  v32 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      v26,
      (System_String_array **)v27,
      v28,
      v29,
      v30,
      v31);
    System_Action__Invoke(v32, 0LL);
  }
  PartyListViewObject__InitAlphaMask(this, v12);
}


void __fastcall PartyListViewObject__InitAlphaMask(PartyListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct UnityEngine_BoxCollider_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *maskSprite; // x20
  struct UIScrollView_o *ComponentInParent_UIScrollView; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_42B3CE3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3CE3 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_17;
  v4 = (struct UnityEngine_BoxCollider_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                                 dispObject,
                                                 (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.colliders,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  PartyListViewObject__UpdateCollider(this, 1, v11);
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
                                         (const MethodInfo_1B7B364 *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = ComponentInParent_UIScrollView;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.scrollView,
        (System_Int32_array **)ComponentInParent_UIScrollView,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
        if ( dispObject )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        dispObject,
                                                        (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_Dropdown_DropdownItem;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.itemSeed,
            (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          PartyListViewObject__UpdateAlphaMask(this, v27);
          return;
        }
      }
    }
LABEL_17:
    sub_B52A5C(dispObject, method);
  }
}


void __fastcall PartyListViewObject__InitItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init_32277372(
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
void __fastcall PartyListViewObject__Init_32278632(
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
void __fastcall PartyListViewObject__Init_32278696(
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

  if ( (byte_42B3CD5 & 1) == 0 )
  {
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3CD5 = 1;
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
  int32_t state; // w8
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x11
  PartyListViewItem_c *v8; // x10
  PartyListViewItem_o *v9; // x21
  PartyListViewObject_o *v10; // x20
  CommonUI_o *v11; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool IsNpc; // w22
  CommonUI_o *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v18; // x23
  int32_t v19; // w1

  v4 = this;
  if ( (byte_42B3CE1 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyListViewItem_TypeInfo);
    sub_B52984(&Method_PartyListViewObject_EndShowEquip__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyListViewObject_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B3CE1 = 1;
  }
  state = v4->fields.state;
  v4->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v4->fields.linkItem;
    if ( linkItem )
    {
      v7 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
      {
        v8 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1];
        v9 = v8 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)v4->fields.linkItem : 0LL;
        if ( v8 == PartyListViewItem_TypeInfo )
        {
          if ( v9 )
          {
            this = (PartyListViewObject_o *)PartyListViewItem__GetMember(v9, m, method);
            v4->fields.showIndex = v9->fields.index;
            if ( this )
            {
              v10 = this;
              if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)this, 0LL) < 1 )
              {
                if ( !PartyOrganizationListViewItem__get_ServantLeader((PartyOrganizationListViewItem_o *)v10, 0LL) )
                  goto LABEL_42;
                this = (PartyListViewObject_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                  (PartyOrganizationListViewItem_o *)v10,
                                                  0LL);
                if ( !this )
                  goto LABEL_39;
                if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
                  goto LABEL_42;
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)v10, 0LL);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(EquipSvtId, 0LL) < 1 )
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
                                                  (PartyOrganizationListViewItem_o *)v10,
                                                  0LL);
                if ( this )
                {
                  IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                                   (PartyOrganizationListViewItem_o *)v10,
                                   0LL);
                  v18 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
                  ServantStatusDialog_EndDelegate___ctor(
                    v18,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowEquip__,
                    0LL);
                  if ( Instance )
                  {
                    if ( IsNpc )
                      v19 = 19;
                    else
                      v19 = 14;
                    CommonUI__OpenServantEquipStatusDialog_18173384(Instance, v19, EquipTarget1, v18, 0LL, 0LL);
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
                v11 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                                   (PartyOrganizationListViewItem_o *)v10,
                                   0LL);
                v13 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
                ServantStatusDialog_EndDelegate___ctor(
                  v13,
                  (Il2CppObject *)v4,
                  Method_PartyListViewObject_EndShowEquip__,
                  0LL);
                if ( v11 )
                {
                  CommonUI__OpenServantEquipStatusDialog(v11, 11, EquipUserSvtId, 1, v13, 0LL, 0LL);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_B52A5C(this, *(_QWORD *)&m);
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
  int32_t state; // w8
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x11
  PartyListViewItem_c *v8; // x10
  PartyListViewItem_o *v9; // x21
  const MethodInfo *v10; // x2
  PartyListViewObject_o *v11; // x22
  PartyListViewManager_o *manager; // x0
  __int64 v13; // x10
  int32_t menuKind; // w22
  WebViewManager_o *Instance; // x0
  bool v16; // zf
  CommonUI_o *v17; // x22
  ServantStatusDialog_FormationEndDelegate_o *v18; // x23
  FollowerInfo_o *itemDraw; // x0
  const MethodInfo *v20; // x2
  ServantStatusDialog_EndDelegate_o *v21; // x23
  PartyListViewManager_o *v22; // x0
  __int64 v23; // x10
  CommonUI_o *v24; // x20
  ServantLeaderInfo_o *ServantLeader; // x21
  ServantStatusDialog_EndDelegate_o *v26; // x22

  v4 = this;
  if ( (byte_42B3CDC & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_B52984(&PartyListViewItem_TypeInfo);
    sub_B52984(&PartyListViewManager_TypeInfo);
    sub_B52984(&Method_PartyListViewObject_EndShowServantWithQuest__);
    sub_B52984(&Method_PartyListViewObject_EndShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyListViewObject_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B3CDC = 1;
  }
  state = v4->fields.state;
  v4->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v4->fields.linkItem;
    if ( linkItem )
    {
      v7 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
      {
        v8 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1];
        v9 = v8 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)v4->fields.linkItem : 0LL;
        if ( v8 == PartyListViewItem_TypeInfo )
        {
          if ( v9 )
          {
            this = (PartyListViewObject_o *)PartyListViewItem__GetMember(v9, m, method);
            v4->fields.showIndex = v9->fields.index;
            if ( this )
            {
              v11 = this;
              if ( this->fields.callbackFunc )
              {
                manager = (PartyListViewManager_o *)v4->fields.manager;
                if ( manager )
                {
                  v13 = *(&PartyListViewManager_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13
                    && (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == PartyListViewManager_TypeInfo )
                  {
                    PartyListViewManager__SetScrollEnabled(manager, 0, v10);
                  }
                }
                v4->fields._DetailMemberIndex_k__BackingField = m;
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                menuKind = v9->fields.menuKind;
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v16 = menuKind == 8;
                v17 = (CommonUI_o *)Instance;
                if ( v16 )
                {
                  v18 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B52A54(ServantStatusDialog_FormationEndDelegate_TypeInfo);
                  ServantStatusDialog_FormationEndDelegate___ctor(
                    v18,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowServantWithQuest__,
                    0LL);
                  if ( v17 )
                  {
                    CommonUI__OpenServantStatusDialog_18167424(v17, 1, v9, m, v18, 1, 0LL);
                    return;
                  }
                }
                else
                {
                  v21 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
                  ServantStatusDialog_EndDelegate___ctor(
                    v21,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowServant__,
                    0LL);
                  if ( v17 )
                  {
                    CommonUI__OpenServantStatusDialog(v17, 1, v9, m, v21, 1, 0LL);
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
                v22 = (PartyListViewManager_o *)v4->fields.manager;
                if ( v22 )
                {
                  v23 = *(&PartyListViewManager_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
                    && (PartyListViewManager_c *)v22->klass->_2.typeHierarchy[v23 - 1] == PartyListViewManager_TypeInfo )
                  {
                    PartyListViewManager__SetScrollEnabled(v22, 0, v20);
                  }
                }
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(
                                  (PartyOrganizationListViewItem_o *)v11,
                                  0LL);
                v26 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
                ServantStatusDialog_EndDelegate___ctor(
                  v26,
                  (Il2CppObject *)v4,
                  Method_PartyListViewObject_EndShowServant__,
                  0LL);
                if ( v24 )
                {
                  CommonUI__OpenServantStatusDialog_18171020(v24, 5, ServantLeader, v26, 0LL);
                  return;
                }
              }
            }
          }
          sub_B52A5C(this, *(_QWORD *)&m);
        }
      }
    }
  }
}


void __fastcall PartyListViewObject__SelectMemberEquip(
        PartyListViewObject_o *this,
        int32_t m,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x10
  UnityEngine_Component_o *manager; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B3CDB & 1) == 0 )
  {
    sub_B52984(&PartyListViewItem_TypeInfo);
    sub_B52984(&StringLiteral_10022/*"OnClickListViewChangeEquip"*/);
    byte_42B3CDB = 1;
  }
  v11 = 0;
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v6 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
        && (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == PartyListViewItem_TypeInfo )
      {
        manager = (UnityEngine_Component_o *)this->fields.manager;
        v11 = m + 1;
        v8 = System_Int32__ToString((int32_t)&v11, 0LL);
        v9 = System_String__Concat_44568316((System_String_o *)StringLiteral_10022/*"OnClickListViewChangeEquip"*/, v8, 0LL);
        if ( !manager )
          sub_B52A5C(v9, v10);
        UnityEngine_Component__SendMessage(manager, v9, (Il2CppObject *)this, 0LL);
      }
    }
  }
}


void __fastcall PartyListViewObject__SelectMemberServant(
        PartyListViewObject_o *this,
        int32_t m,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x10
  UnityEngine_Component_o *manager; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B3CDA & 1) == 0 )
  {
    sub_B52984(&PartyListViewItem_TypeInfo);
    sub_B52984(&StringLiteral_10023/*"OnClickListViewChangeServant"*/);
    byte_42B3CDA = 1;
  }
  v11 = 0;
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v6 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
        && (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == PartyListViewItem_TypeInfo )
      {
        manager = (UnityEngine_Component_o *)this->fields.manager;
        v11 = m + 1;
        v8 = System_Int32__ToString((int32_t)&v11, 0LL);
        v9 = System_String__Concat_44568316((System_String_o *)StringLiteral_10023/*"OnClickListViewChangeServant"*/, v8, 0LL);
        if ( !manager )
          sub_B52A5C(v9, v10);
        UnityEngine_Component__SendMessage(manager, v9, (Il2CppObject *)this, 0LL);
      }
    }
  }
}


void __fastcall PartyListViewObject__SetInput(PartyListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1
  PartyListViewItemDraw_o *v10; // x0

  if ( (byte_42B3CD7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyListViewItem_TypeInfo);
    byte_42B3CD7 = 1;
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
      && (v8 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
    {
      if ( (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == PartyListViewItem_TypeInfo )
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
      sub_B52A5C(0LL, v9);
    PartyListViewItemDraw__SetInput(v10, (PartyListViewItem_o *)v9, isInput, v6);
  }
}


void __fastcall PartyListViewObject__SetItem(
        PartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33992116((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall PartyListViewObject__SetItem_32282800(
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

  if ( (byte_42B3CE4 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3CE4 = 1;
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
            sub_B52A5C(transform, v6);
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
    sub_B52A5C(this, enable);
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
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
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

  if ( (byte_42B3CD2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B3CD2 = 1;
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
  sub_B52D50(v8);
  PartyListViewObject__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall PartyListViewObject__get_DetailMemberIndex(PartyListViewObject_o *this, const MethodInfo *method)
{
  return this->fields._DetailMemberIndex_k__BackingField;
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
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_42B3CD3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B3CD3 = 1;
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
  sub_B52D50(v8);
  PartyListViewObject__set_DetailMemberIndex(v11, v12, v13);
}


void __fastcall PartyListViewObject__set_DetailMemberIndex(
        PartyListViewObject_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DetailMemberIndex_k__BackingField = value;
}