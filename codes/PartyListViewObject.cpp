void PartyListViewObject___ctor(PartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CB1C00 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewObject_TypeInfo);
    byte_4CB1C00 = 1;
  }
  this->fields.maxAlphaRate = 0.6;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void PartyListViewObject__Awake(PartyListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB1BEF & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
    byte_4CB1BEF = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C6BC60(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
  this->fields.itemDraw = (struct PartyListViewItemDraw_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *PartyListViewObject__CreateDragObject(PartyListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4CB1BF3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
    byte_4CB1BF3 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___)) == 0) )
  {
    sub_1C6BC60(DragObject, v4);
  }
  PartyListViewObject__Init_34338064((PartyListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void PartyListViewObject__EndCloseShowEquip(PartyListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void PartyListViewObject__EndCloseShowServant(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  PartyListViewManager_c *v6; // x10
  PartyListViewManager_o *v7; // x0

  if ( (byte_4CB1BF9 & 1) == 0 )
  {
    sub_1C6BA08(&PartyListViewManager_TypeInfo);
    byte_4CB1BF9 = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    naturalAligment = PartyListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v6 = (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1];
      v7 = v6 == PartyListViewManager_TypeInfo ? (PartyListViewManager_o *)this->fields.manager : 0LL;
      if ( v6 == PartyListViewManager_TypeInfo )
      {
        if ( !v7 )
          sub_1C6BC60(0, method);
        PartyListViewManager__SetScrollEnabled(v7, 1, v2);
      }
    }
  }
}


void PartyListViewObject__EndCloseShowServantQuestJump(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4CB1BFB & 1) == 0 )
  {
    sub_1C6BA08(&PartyListViewManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB1BFB = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    naturalAligment = PartyListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == PartyListViewManager_TypeInfo )
    {
      PartyListViewManager__SetScrollEnabled((PartyListViewManager_o *)manager, 1, v2);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v7);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__EndShowEquip(PartyListViewObject_o *this, bool isDecide, const MethodInfo *method)
{
  PartyListViewObject_o *v3; // x19
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *mPanel; // x20
  struct UIScrollView_o *v6; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  v3 = this;
  if ( (byte_4CB1BFD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&Method_PartyListViewObject_EndCloseShowEquip__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyListViewObject_o *)sub_1C6BA08(&StringLiteral_9930/*"OnModifyListView"*/);
    byte_4CB1BFD = 1;
  }
  scrollView = v3->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  mPanel = scrollView->fields.mPanel;
  this = (PartyListViewObject_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !mPanel )
    goto LABEL_13;
  UIPanel__EndShowOverWriteRange(mPanel, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0);
  this = (PartyListViewObject_o *)v3->fields.manager;
  if ( !this )
    goto LABEL_13;
  ListViewManager__JumpItem((ListViewManager_o *)this, v3->fields.showIndex, 0);
  v6 = v3->fields.scrollView;
  if ( !v6
    || (this = (PartyListViewObject_o *)v6->fields.mPanel) == 0
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0),
        (this = (PartyListViewObject_o *)v3->fields.manager) == 0)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_9930/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowEquip__, 0),
        !Instance) )
  {
LABEL_13:
    sub_1C6BC60(this, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__EndShowServant(PartyListViewObject_o *this, bool isDecide, const MethodInfo *method)
{
  PartyListViewObject_o *v3; // x19
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *mPanel; // x20
  struct UIScrollView_o *v6; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  v3 = this;
  if ( (byte_4CB1BF8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&Method_PartyListViewObject_EndCloseShowServant__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyListViewObject_o *)sub_1C6BA08(&StringLiteral_9930/*"OnModifyListView"*/);
    byte_4CB1BF8 = 1;
  }
  scrollView = v3->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  mPanel = scrollView->fields.mPanel;
  this = (PartyListViewObject_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !mPanel )
    goto LABEL_13;
  UIPanel__EndShowOverWriteRange(mPanel, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0);
  this = (PartyListViewObject_o *)v3->fields.manager;
  if ( !this )
    goto LABEL_13;
  ListViewManager__JumpItem((ListViewManager_o *)this, v3->fields.showIndex, 0);
  v6 = v3->fields.scrollView;
  if ( !v6
    || (this = (PartyListViewObject_o *)v6->fields.mPanel) == 0
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0),
        (this = (PartyListViewObject_o *)v3->fields.manager) == 0)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_9930/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowServant__, 0),
        !Instance) )
  {
LABEL_13:
    sub_1C6BC60(this, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__EndShowServantWithQuest(
        PartyListViewObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CB1BFA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_PartyListViewObject_EndCloseShowServantQuestJump__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB1BFA = 1;
  }
  if ( questId < 1 )
  {
    PartyListViewObject__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyListViewObject_EndCloseShowServantQuestJump__, 0);
    if ( !Instance )
      sub_1C6BC60(v8, v9);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
  }
}


void PartyListViewObject__EventMoveEnd(PartyListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  HIDWORD(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


PartyListViewItem_o *PartyListViewObject__GetItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CB1BF1 & 1) == 0 )
  {
    sub_1C6BA08(&PartyListViewItem_TypeInfo);
    byte_4CB1BF1 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyListViewItem_TypeInfo )
    return (PartyListViewItem_o *)this->fields.linkItem;
  return 0;
}


void PartyListViewObject__Init(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  PartyListViewItemDraw_o *transform; // x0
  struct System_Action_o **p_callbackFunc; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  char v18; // w1
  int32_t v19; // w8
  UnityEngine_Object_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Action_o *v23; // x20

  if ( (byte_4CB1BF4 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PartyListViewItem_TypeInfo);
    byte_4CB1BF4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PartyListViewItem_TypeInfo )
  {
    this->fields.state = 0;
    this->fields.dispMode = 0;
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
      goto LABEL_11;
    transform = this->fields.itemDraw;
    if ( transform )
    {
      PartyListViewItemDraw__SetItem(transform, 0, this->fields.dispMode, v13);
LABEL_11:
      ((void (__fastcall *)(PartyListViewObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
        this,
        0,
        this->klass->vtable._9_SetInput.method);
      return;
    }
LABEL_31:
    sub_1C6BC60(transform, v12);
  }
  transform = (PartyListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.basePosition, 0);
  transform = (PartyListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_31;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v16, v17);
  switch ( initMode )
  {
    case 0:
      v18 = 0;
      this->fields.dispMode = 0;
      this->fields.state = 1;
      break;
    case 1:
      v18 = 1;
      this->fields.dispMode = 1;
      goto LABEL_22;
    case 2:
      v19 = 2;
      goto LABEL_21;
    case 3:
      this->fields.dispMode = 2;
      this->fields.state = 3;
      v18 = 1;
      break;
    case 4:
      v19 = 4;
LABEL_21:
      v18 = 1;
      this->fields.dispMode = v19;
LABEL_22:
      this->fields.state = 1;
      break;
    default:
      v18 = this->fields.dispMode != 0;
      break;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v18, 0);
  ((void (__fastcall *)(PartyListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    this->fields.state == 3,
    this->klass->vtable._9_SetInput.method);
  v20 = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_31;
    PartyListViewItemDraw__SetItem(transform, (PartyListViewItem_o *)linkItem, this->fields.dispMode, v22);
  }
  v23 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v21, v22);
    ((void (__fastcall *)(intptr_t, intptr_t))v23->fields.invoke_impl)(v23->fields.method_code, v23->fields.method);
  }
  PartyListViewObject__InitAlphaMask(this, v12);
}


void PartyListViewObject__InitAlphaMask(PartyListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  System_Object_array *ComponentsInChildren_object__51985744; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *maskSprite; // x20
  Il2CppObject *ComponentInParent_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_4CB1BFE & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1BFE = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_16;
  ComponentsInChildren_object__51985744 = UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                            dispObject,
                                            (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = (struct UnityEngine_BoxCollider_array *)ComponentsInChildren_object__51985744;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.colliders, (int32_t)ComponentsInChildren_object__51985744, v5, v6);
  PartyListViewObject__UpdateCollider(this, 1, v7);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    dispObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !dispObject )
      goto LABEL_16;
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0);
    if ( !dispObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(dispObject, 0, 0);
  }
  if ( this->fields.useAlphaMask )
  {
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( dispObject )
    {
      ComponentInParent_object = UnityEngine_GameObject__GetComponentInParent_object_(
                                   dispObject,
                                   (const MethodInfo_319370C *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = (struct UIScrollView_o *)ComponentInParent_object;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.scrollView, (int32_t)ComponentInParent_object, v10, v11);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0);
        if ( dispObject )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         dispObject,
                                         (const MethodInfo_3193390 *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_object;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemSeed, (int32_t)ComponentInChildren_object, v13, v14);
          PartyListViewObject__UpdateAlphaMask(this, v15);
          return;
        }
      }
    }
LABEL_16:
    sub_1C6BC60(dispObject, method);
  }
}


void PartyListViewObject__InitItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__Init_34338064(PartyListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  PartyListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__Init_34339364(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  PartyListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__Init_34339448(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  PartyListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void PartyListViewObject__OnClickItem1(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 0, v2);
}


void PartyListViewObject__OnClickItem2(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 1, v2);
}


void PartyListViewObject__OnClickItem3(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 2, v2);
}


void PartyListViewObject__OnClickItem4(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 3, v2);
}


void PartyListViewObject__OnClickItem5(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 4, v2);
}


void PartyListViewObject__OnClickItem6(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberServant(this, 5, v2);
}


void PartyListViewObject__OnClickItemEquip1(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 0, v2);
}


void PartyListViewObject__OnClickItemEquip2(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 1, v2);
}


void PartyListViewObject__OnClickItemEquip3(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 2, v2);
}


void PartyListViewObject__OnClickItemEquip4(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 3, v2);
}


void PartyListViewObject__OnClickItemEquip5(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 4, v2);
}


void PartyListViewObject__OnClickItemEquip6(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__SelectMemberEquip(this, 5, v2);
}


void PartyListViewObject__OnDestroy(PartyListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB1BF0 & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1BF0 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
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
    sub_1C6B9AC(p_dragObject, 0, v7, v8);
  }
}


void PartyListViewObject__OnLongPressItem1(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 0, v2);
}


void PartyListViewObject__OnLongPressItem2(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 1, v2);
}


void PartyListViewObject__OnLongPressItem3(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 2, v2);
}


void PartyListViewObject__OnLongPressItem4(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 3, v2);
}


void PartyListViewObject__OnLongPressItem5(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 4, v2);
}


void PartyListViewObject__OnLongPressItem6(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenServantDetail(this, 5, v2);
}


void PartyListViewObject__OnLongPressItemEquip1(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 0, v2);
}


void PartyListViewObject__OnLongPressItemEquip2(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 1, v2);
}


void PartyListViewObject__OnLongPressItemEquip3(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 2, v2);
}


void PartyListViewObject__OnLongPressItemEquip4(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 3, v2);
}


void PartyListViewObject__OnLongPressItemEquip5(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 4, v2);
}


void PartyListViewObject__OnLongPressItemEquip6(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListViewObject__OpenEquipDetail(this, 5, v2);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__OpenEquipDetail(PartyListViewObject_o *this, int32_t m, const MethodInfo *method)
{
  PartyListViewObject_o *v4; // x19
  int32_t state; // w8
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  PartyListViewItem_c *v8; // x10
  PartyListViewItem_o *v9; // x21
  PartyListViewObject_o *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *v13; // x21
  int64_t EquipUserSvtId; // x22
  ServantStatusDialog_EndDelegate_o *v15; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  bool IsNpc; // w21
  Il2CppObject *Instance; // x22
  EquipTargetInfo_o *DisplayFollowerInfoEquipTarget; // x20
  ServantStatusDialog_EndDelegate_o *v22; // x23
  int32_t v23; // w1
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0

  v4 = this;
  if ( (byte_4CB1BFC & 1) == 0 )
  {
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&PartyListViewItem_TypeInfo);
    sub_1C6BA08(&Method_PartyListViewObject_EndShowEquip__);
    sub_1C6BA08(&Method_PartyListViewObject_OpenEquipDetail__);
    this = (PartyListViewObject_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB1BFC = 1;
  }
  state = v4->fields.state;
  v4->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v4->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v8 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
        v9 = v8 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)v4->fields.linkItem : 0LL;
        if ( v8 == PartyListViewItem_TypeInfo )
        {
          if ( v9 )
          {
            this = (PartyListViewObject_o *)PartyListViewItem__GetMember(v9, m, 0);
            v4->fields.showIndex = v9->fields.index;
            if ( this )
            {
              v10 = this;
              if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)this, 0) < 1 )
              {
                if ( !PartyOrganizationListViewItem__get_ServantLeader((PartyOrganizationListViewItem_o *)v10, 0) )
                  goto LABEL_32;
                this = (PartyListViewObject_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                  (PartyOrganizationListViewItem_o *)v10,
                                                  0);
                if ( !this )
                  goto LABEL_35;
                if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0) )
                  goto LABEL_32;
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)v10, 0);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(EquipSvtId, 0) < 1 )
                {
LABEL_32:
                  v24 = Method_PartyListViewObject_OpenEquipDetail__;
                  if ( (*((_BYTE *)Method_PartyListViewObject_OpenEquipDetail__ + 83) & 2) != 0 )
                    v24 = (_QWORD *)sub_1C6BA20(Method_PartyListViewObject_OpenEquipDetail__);
                  v25 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v24, v24[4]);
                  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
                  return;
                }
                v17 = Method_PartyListViewObject_OpenEquipDetail__;
                if ( (*((_BYTE *)Method_PartyListViewObject_OpenEquipDetail__ + 83) & 2) != 0 )
                  v17 = (_QWORD *)sub_1C6BA20(Method_PartyListViewObject_OpenEquipDetail__);
                v18 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v17, v17[4]);
                OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
                this = (PartyListViewObject_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                  (PartyOrganizationListViewItem_o *)v10,
                                                  0);
                if ( this )
                {
                  IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0);
                  PartyOrganizationListViewItem__SetFollowerChangeFriendShipEquipSkillInfo(
                    (PartyOrganizationListViewItem_o *)v10,
                    0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  DisplayFollowerInfoEquipTarget = PartyOrganizationListViewItem__get_DisplayFollowerInfoEquipTarget(
                                                     (PartyOrganizationListViewItem_o *)v10,
                                                     0);
                  v22 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
                  ServantStatusDialog_EndDelegate___ctor(
                    v22,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowEquip__,
                    0);
                  if ( Instance )
                  {
                    if ( IsNpc )
                      v23 = 19;
                    else
                      v23 = 14;
                    CommonUI__OpenServantEquipStatusDialog_31433124(
                      (CommonUI_o *)Instance,
                      v23,
                      DisplayFollowerInfoEquipTarget,
                      v22,
                      0,
                      0);
                    return;
                  }
                }
              }
              else
              {
                v11 = Method_PartyListViewObject_OpenEquipDetail__;
                if ( (*((_BYTE *)Method_PartyListViewObject_OpenEquipDetail__ + 83) & 2) != 0 )
                  v11 = (_QWORD *)sub_1C6BA20(Method_PartyListViewObject_OpenEquipDetail__);
                v12 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v11, v11[4]);
                OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
                v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                                   (PartyOrganizationListViewItem_o *)v10,
                                   0);
                v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
                ServantStatusDialog_EndDelegate___ctor(
                  v15,
                  (Il2CppObject *)v4,
                  Method_PartyListViewObject_EndShowEquip__,
                  0);
                this = (PartyListViewObject_o *)PartyOrganizationListViewItem__IsDisplayEquipSkillChange(
                                                  (PartyOrganizationListViewItem_o *)v10,
                                                  0);
                if ( v13 )
                {
                  CommonUI__OpenServantEquipStatusDialog(
                    (CommonUI_o *)v13,
                    11,
                    EquipUserSvtId,
                    1,
                    v15,
                    0,
                    (unsigned __int8)this & 1,
                    0);
                  return;
                }
              }
            }
          }
LABEL_35:
          sub_1C6BC60(this, *(_QWORD *)&m);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__OpenServantDetail(PartyListViewObject_o *this, int32_t m, const MethodInfo *method)
{
  PartyListViewObject_o *v4; // x19
  int32_t state; // w8
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  PartyListViewItem_c *v8; // x10
  PartyListViewItem_o *v9; // x21
  const MethodInfo *v10; // x2
  PartyListViewObject_o *v11; // x22
  FollowerInfo_o *itemDraw; // x0
  const MethodInfo *v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  PartyListViewManager_o *v16; // x0
  __int64 v17; // x10
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *v20; // x20
  ServantLeaderInfo_o *ServantLeader; // x21
  ServantStatusDialog_EndDelegate_o *v22; // x22
  PartyListViewManager_o *manager; // x0
  __int64 v24; // x10
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  bool v29; // zf
  CommonUI_o *v30; // x22
  ServantStatusDialog_FormationEndDelegate_o *v31; // x23
  ServantStatusDialog_EndDelegate_o *v32; // x23

  v4 = this;
  if ( (byte_4CB1BF7 & 1) == 0 )
  {
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C6BA08(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C6BA08(&PartyListViewItem_TypeInfo);
    sub_1C6BA08(&PartyListViewManager_TypeInfo);
    sub_1C6BA08(&Method_PartyListViewObject_EndShowServantWithQuest__);
    sub_1C6BA08(&Method_PartyListViewObject_EndShowServant__);
    sub_1C6BA08(&Method_PartyListViewObject_OpenServantDetail__);
    this = (PartyListViewObject_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB1BF7 = 1;
  }
  state = v4->fields.state;
  v4->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v4->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v8 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
        v9 = v8 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)v4->fields.linkItem : 0LL;
        if ( v8 == PartyListViewItem_TypeInfo )
        {
          if ( v9 )
          {
            this = (PartyListViewObject_o *)PartyListViewItem__GetMember(v9, m, 0);
            v4->fields.showIndex = v9->fields.index;
            if ( this )
            {
              v11 = this;
              if ( this->fields.callbackFunc && !BYTE1(this[1].fields.colliders) )
              {
                manager = (PartyListViewManager_o *)v4->fields.manager;
                if ( manager )
                {
                  v24 = PartyListViewManager_TypeInfo->_2.naturalAligment;
                  if ( manager->klass->_2.naturalAligment >= (unsigned int)v24
                    && (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[v24 - 1] == PartyListViewManager_TypeInfo )
                  {
                    PartyListViewManager__SetScrollEnabled(manager, 0, v10);
                  }
                }
                v4->fields._DetailMemberIndex_k__BackingField = m;
                v25 = Method_PartyListViewObject_OpenServantDetail__;
                if ( (*((_BYTE *)Method_PartyListViewObject_OpenServantDetail__ + 83) & 2) != 0 )
                  v25 = (_QWORD *)sub_1C6BA20(Method_PartyListViewObject_OpenServantDetail__);
                v26 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v25, v25[4]);
                OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
                menuKind = v9->fields.menuKind;
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v29 = menuKind == 8;
                v30 = (CommonUI_o *)Instance;
                if ( v29 )
                {
                  v31 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C6BC54(ServantStatusDialog_FormationEndDelegate_TypeInfo);
                  ServantStatusDialog_FormationEndDelegate___ctor(
                    v31,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowServantWithQuest__,
                    0);
                  if ( v30 )
                  {
                    CommonUI__OpenServantStatusDialog_31426604(v30, 1, v9, m, v31, 1, 0, 0);
                    return;
                  }
                }
                else
                {
                  v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
                  ServantStatusDialog_EndDelegate___ctor(
                    v32,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowServant__,
                    0);
                  if ( v30 )
                  {
                    CommonUI__OpenServantStatusDialog(v30, 1, v9, m, v32, 1, 0, 0);
                    return;
                  }
                }
              }
              else
              {
                itemDraw = (FollowerInfo_o *)this->fields.itemDraw;
                if ( !itemDraw || FollowerInfo__get_IsNpc(itemDraw, 0) )
                {
                  v14 = Method_PartyListViewObject_OpenServantDetail__;
                  if ( (*((_BYTE *)Method_PartyListViewObject_OpenServantDetail__ + 83) & 2) != 0 )
                    v14 = (_QWORD *)sub_1C6BA20(Method_PartyListViewObject_OpenServantDetail__);
                  v15 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v14, v14[4]);
                  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
                  return;
                }
                v16 = (PartyListViewManager_o *)v4->fields.manager;
                if ( v16 )
                {
                  v17 = PartyListViewManager_TypeInfo->_2.naturalAligment;
                  if ( v16->klass->_2.naturalAligment >= (unsigned int)v17
                    && (PartyListViewManager_c *)v16->klass->_2.typeHierarchy[v17 - 1] == PartyListViewManager_TypeInfo )
                  {
                    PartyListViewManager__SetScrollEnabled(v16, 0, v13);
                  }
                }
                v18 = Method_PartyListViewObject_OpenServantDetail__;
                if ( (*((_BYTE *)Method_PartyListViewObject_OpenServantDetail__ + 83) & 2) != 0 )
                  v18 = (_QWORD *)sub_1C6BA20(Method_PartyListViewObject_OpenServantDetail__);
                v19 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v18, v18[4]);
                OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
                v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(
                                  (PartyOrganizationListViewItem_o *)v11,
                                  0);
                v22 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
                ServantStatusDialog_EndDelegate___ctor(
                  v22,
                  (Il2CppObject *)v4,
                  Method_PartyListViewObject_EndShowServant__,
                  0);
                if ( v20 )
                {
                  CommonUI__OpenServantStatusDialog_31430016((CommonUI_o *)v20, 5, ServantLeader, v22, 0);
                  return;
                }
              }
            }
          }
          sub_1C6BC60(this, *(_QWORD *)&m);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__SelectMemberEquip(PartyListViewObject_o *this, int32_t m, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  PartyListViewItem_c *v7; // x10
  struct ListViewItem_o *Member; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_Component_o *manager; // x21
  System_String_o *v12; // x0
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB1BF6 & 1) == 0 )
  {
    sub_1C6BA08(&PartyListViewItem_TypeInfo);
    sub_1C6BA08(&Method_PartyListViewObject_SelectMemberEquip__);
    sub_1C6BA08(&StringLiteral_9849/*"OnClickListViewChangeEquip"*/);
    byte_4CB1BF6 = 1;
  }
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v7 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
        Member = v7 == PartyListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
        if ( v7 == PartyListViewItem_TypeInfo )
        {
          if ( Member )
          {
            Member = (struct ListViewItem_o *)PartyListViewItem__GetMember((PartyListViewItem_o *)Member, m, 0);
            if ( Member )
            {
              if ( LOBYTE(Member[3].fields.sortValue0B) )
              {
                v9 = Method_PartyListViewObject_SelectMemberEquip__;
                if ( (*((_BYTE *)Method_PartyListViewObject_SelectMemberEquip__ + 83) & 2) != 0 )
                  v9 = (_QWORD *)sub_1C6BA20(Method_PartyListViewObject_SelectMemberEquip__);
                v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
                OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
                return;
              }
              manager = (UnityEngine_Component_o *)this->fields.manager;
              v13 = m + 1;
              v12 = System_Int32__ToString((int32_t)&v13, 0);
              Member = (struct ListViewItem_o *)System_String__Concat_63966792(
                                                  (System_String_o *)StringLiteral_9849/*"OnClickListViewChangeEquip"*/,
                                                  v12,
                                                  0);
              if ( manager )
              {
                UnityEngine_Component__SendMessage(manager, (System_String_o *)Member, (Il2CppObject *)this, 0);
                return;
              }
            }
          }
          sub_1C6BC60(Member, *(_QWORD *)&m);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__SelectMemberServant(PartyListViewObject_o *this, int32_t m, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  PartyListViewItem_c *v7; // x10
  struct ListViewItem_o *Member; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_Component_o *manager; // x21
  System_String_o *v12; // x0
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB1BF5 & 1) == 0 )
  {
    sub_1C6BA08(&PartyListViewItem_TypeInfo);
    sub_1C6BA08(&Method_PartyListViewObject_SelectMemberServant__);
    sub_1C6BA08(&StringLiteral_9850/*"OnClickListViewChangeServant"*/);
    byte_4CB1BF5 = 1;
  }
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v7 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
        Member = v7 == PartyListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
        if ( v7 == PartyListViewItem_TypeInfo )
        {
          if ( Member )
          {
            Member = (struct ListViewItem_o *)PartyListViewItem__GetMember((PartyListViewItem_o *)Member, m, 0);
            if ( Member )
            {
              if ( LOBYTE(Member[3].fields.sortValue0B) )
              {
                v9 = Method_PartyListViewObject_SelectMemberServant__;
                if ( (*((_BYTE *)Method_PartyListViewObject_SelectMemberServant__ + 83) & 2) != 0 )
                  v9 = (_QWORD *)sub_1C6BA20(Method_PartyListViewObject_SelectMemberServant__);
                v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
                OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
                return;
              }
              manager = (UnityEngine_Component_o *)this->fields.manager;
              v13 = m + 1;
              v12 = System_Int32__ToString((int32_t)&v13, 0);
              Member = (struct ListViewItem_o *)System_String__Concat_63966792(
                                                  (System_String_o *)StringLiteral_9850/*"OnClickListViewChangeServant"*/,
                                                  v12,
                                                  0);
              if ( manager )
              {
                UnityEngine_Component__SendMessage(manager, (System_String_o *)Member, (Il2CppObject *)this, 0);
                return;
              }
            }
          }
          sub_1C6BC60(Member, *(_QWORD *)&m);
        }
      }
    }
  }
}


void PartyListViewObject__SetActiveGrandEffect(PartyListViewObject_o *this, bool flag, const MethodInfo *method)
{
  PartyListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C6BC60(0, flag);
  PartyListViewItemDraw__SetActiveGrandEffect(itemDraw, flag, method);
}


void PartyListViewObject__SetInput(PartyListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  PartyListViewItemDraw_o *v10; // x0

  if ( (byte_4CB1BF2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PartyListViewItem_TypeInfo);
    byte_4CB1BF2 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C6BC60(0, v9);
    PartyListViewItemDraw__SetInput(v10, (PartyListViewItem_o *)v9, isInput, v6);
  }
}


void PartyListViewObject__SetItem(
        PartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44077592((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void PartyListViewObject__SetItem_34345540(PartyListViewObject_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


// attributes: thunk
void PartyListViewObject__Update(PartyListViewObject_o *this, const MethodInfo *method)
{
  PartyListViewObject__UpdateAlphaMask(this, method);
}


void PartyListViewObject__UpdateAlphaMask(PartyListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *itemSeed; // x20
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v6; // x1
  void *transform; // x0
  float v8; // s8
  float v9; // s0
  struct ListViewItemSeed_o *v10; // x8
  float v11; // s0
  float v12; // s1
  float v13; // s8
  float maxAlphaRate; // s10
  float v15; // s8
  const MethodInfo *v16; // x2
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB1BFF & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1BFF = 1;
  }
  if ( this->fields.useAlphaMask )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
    {
      itemSeed = (UnityEngine_Object_o *)this->fields.itemSeed;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(itemSeed, 0, 0) )
      {
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(maskSprite, 0, 0) )
        {
          transform = this->fields.scrollView;
          if ( !transform )
            goto LABEL_29;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v9) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
          v10 = this->fields.itemSeed;
          if ( !v10 )
            goto LABEL_29;
          transform = this->fields.maskSprite;
          v11 = fabsf(v8 + v9) / v10->fields.arrangementPich.fields.x;
          v12 = fminf(v11, 1.0);
          v13 = v11 < 0.0 ? 0.0 : v12;
          if ( !transform )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_29;
          v15 = maxAlphaRate * v13;
          if ( v15 > 0.05 != UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
            PartyListViewObject__UpdateCollider(this, v15 <= 0.05, v16);
          transform = this->fields.maskSprite;
          if ( !transform
            || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v15 > 0.05, 0),
                (transform = this->fields.maskSprite) == 0) )
          {
LABEL_29:
            sub_1C6BC60(transform, v6);
          }
          v17.fields.r = *((float *)transform + 37);
          v17.fields.g = *((float *)transform + 38);
          v17.fields.b = *((float *)transform + 39);
          v17.fields.a = v15;
          UIWidget__set_color((UIWidget_o *)transform, v17, 0);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewObject__UpdateCollider(PartyListViewObject_o *this, bool enable, const MethodInfo *method)
{
  struct UnityEngine_BoxCollider_array *colliders; // x8
  PartyListViewObject_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  colliders = this->fields.colliders;
  if ( !colliders )
LABEL_7:
    sub_1C6BC60(this, enable);
  v4 = this;
  v5 = 0;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C6BC68(this);
    this = (PartyListViewObject_o *)colliders->m_Items[v5];
    if ( this )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0);
      colliders = v4->fields.colliders;
      ++v5;
      if ( colliders )
        continue;
    }
    goto LABEL_7;
  }
}


void PartyListViewObject__add_callbackFunc(
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

  if ( (byte_4CB1BED & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB1BED = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListViewObject_o *)sub_1C6BFFC(v8);
  PartyListViewObject__remove_callbackFunc(v11, v12, v13);
}


int32_t PartyListViewObject__get_DetailMemberIndex(PartyListViewObject_o *this, const MethodInfo *method)
{
  return this->fields._DetailMemberIndex_k__BackingField;
}


void PartyListViewObject__remove_callbackFunc(
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

  if ( (byte_4CB1BEE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB1BEE = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListViewObject_o *)sub_1C6BFFC(v8);
  PartyListViewObject__set_DetailMemberIndex(v11, v12, v13);
}


void PartyListViewObject__set_DetailMemberIndex(PartyListViewObject_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DetailMemberIndex_k__BackingField = value;
}