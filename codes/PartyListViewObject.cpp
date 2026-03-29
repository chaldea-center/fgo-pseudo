void PartyListViewObject___ctor(PartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C292 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2C292 = 1;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2C281 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
    byte_4D2C281 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
  this->fields.itemDraw = (struct PartyListViewItemDraw_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *PartyListViewObject__CreateDragObject(PartyListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4D2C285 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___);
    byte_4D2C285 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___)) == 0) )
  {
    sub_1C93D2C(DragObject, v4);
  }
  PartyListViewObject__Init_34734452((PartyListViewObject_o *)DragObject, 2, v6);
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

  if ( (byte_4D2C28B & 1) == 0 )
  {
    sub_1C93AD4(&PartyListViewManager_TypeInfo);
    byte_4D2C28B = 1;
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
          sub_1C93D2C(0, method);
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

  if ( (byte_4D2C28D & 1) == 0 )
  {
    sub_1C93AD4(&PartyListViewManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2C28D = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v7);
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
  if ( (byte_4D2C28F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&Method_PartyListViewObject_EndCloseShowEquip__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyListViewObject_o *)sub_1C93AD4(&StringLiteral_9990/*"OnModifyListView"*/);
    byte_4D2C28F = 1;
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
          (System_String_o *)StringLiteral_9990/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowEquip__, 0),
        !Instance) )
  {
LABEL_13:
    sub_1C93D2C(this, isDecide);
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
  if ( (byte_4D2C28A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&Method_PartyListViewObject_EndCloseShowServant__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyListViewObject_o *)sub_1C93AD4(&StringLiteral_9990/*"OnModifyListView"*/);
    byte_4D2C28A = 1;
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
          (System_String_o *)StringLiteral_9990/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowServant__, 0),
        !Instance) )
  {
LABEL_13:
    sub_1C93D2C(this, isDecide);
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

  if ( (byte_4D2C28C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyListViewObject_EndCloseShowServantQuestJump__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C28C = 1;
  }
  if ( questId < 1 )
  {
    PartyListViewObject__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyListViewObject_EndCloseShowServantQuestJump__, 0);
    if ( !Instance )
      sub_1C93D2C(v8, v9);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
  }
}


void PartyListViewObject__EventMoveEnd(PartyListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 0;
  HIDWORD(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


PartyListViewItem_o *PartyListViewObject__GetItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2C283 & 1) == 0 )
  {
    sub_1C93AD4(&PartyListViewItem_TypeInfo);
    byte_4D2C283 = 1;
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  char v22; // w1
  int32_t v23; // w8
  UnityEngine_Object_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Action_o *v31; // x20

  if ( (byte_4D2C286 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PartyListViewItem_TypeInfo);
    byte_4D2C286 = 1;
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
    sub_1C93D2C(transform, v12);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  switch ( initMode )
  {
    case 0:
      v22 = 0;
      this->fields.dispMode = 0;
      this->fields.state = 1;
      break;
    case 1:
      v22 = 1;
      this->fields.dispMode = 1;
      goto LABEL_22;
    case 2:
      v23 = 2;
      goto LABEL_21;
    case 3:
      this->fields.dispMode = 2;
      this->fields.state = 3;
      v22 = 1;
      break;
    case 4:
      v23 = 4;
LABEL_21:
      v22 = 1;
      this->fields.dispMode = v23;
LABEL_22:
      this->fields.state = 1;
      break;
    default:
      v22 = this->fields.dispMode != 0;
      break;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v22, 0);
  ((void (__fastcall *)(PartyListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    this->fields.state == 3,
    this->klass->vtable._9_SetInput.method);
  v24 = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
  {
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_31;
    PartyListViewItemDraw__SetItem(transform, (PartyListViewItem_o *)linkItem, this->fields.dispMode, v26);
  }
  v31 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v25, (int32_t)v26, v27, v28, v29, v30);
    ((void (__fastcall *)(intptr_t, intptr_t))v31->fields.invoke_impl)(v31->fields.method_code, v31->fields.method);
  }
  PartyListViewObject__InitAlphaMask(this, v12);
}


void PartyListViewObject__InitAlphaMask(PartyListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  System_Object_array *ComponentsInChildren_object__52415656; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *maskSprite; // x20
  Il2CppObject *ComponentInParent_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4D2C290 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C290 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_16;
  ComponentsInChildren_object__52415656 = UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                            dispObject,
                                            (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = (struct UnityEngine_BoxCollider_array *)ComponentsInChildren_object__52415656;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.colliders,
    (int32_t)ComponentsInChildren_object__52415656,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  PartyListViewObject__UpdateCollider(this, 1, v11);
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
                                   (const MethodInfo_31FC664 *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = (struct UIScrollView_o *)ComponentInParent_object;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.scrollView,
        (int32_t)ComponentInParent_object,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0);
        if ( dispObject )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         dispObject,
                                         (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_object;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.itemSeed,
            (int32_t)ComponentInChildren_object,
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
LABEL_16:
    sub_1C93D2C(dispObject, method);
  }
}


void PartyListViewObject__InitItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void PartyListViewObject__Init_34734452(PartyListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v10; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v10.fields.x = v5;
  v10.fields.y = v6;
  v10.fields.z = v7;
  PartyListViewObject__Init(this, initMode, 0, v4, v10, v3);
}


void PartyListViewObject__Init_34735752(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
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
  PartyListViewObject__Init(this, initMode, callbackFunc, delay, v11, method);
}


void PartyListViewObject__Init_34735836(
        PartyListViewObject_o *this,
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
  PartyListViewObject__Init(this, initMode, callbackFunc, v4, v11, method);
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

  if ( (byte_4D2C282 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C282 = 1;
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
  if ( (byte_4D2C28E & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&PartyListViewItem_TypeInfo);
    sub_1C93AD4(&Method_PartyListViewObject_EndShowEquip__);
    sub_1C93AD4(&Method_PartyListViewObject_OpenEquipDetail__);
    this = (PartyListViewObject_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C28E = 1;
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
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(EquipSvtId, 0) < 1 )
                {
LABEL_32:
                  v24 = Method_PartyListViewObject_OpenEquipDetail__;
                  if ( (*((_BYTE *)Method_PartyListViewObject_OpenEquipDetail__ + 83) & 2) != 0 )
                    v24 = (_QWORD *)sub_1C93AEC(Method_PartyListViewObject_OpenEquipDetail__);
                  v25 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v24, v24[4]);
                  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
                  return;
                }
                v17 = Method_PartyListViewObject_OpenEquipDetail__;
                if ( (*((_BYTE *)Method_PartyListViewObject_OpenEquipDetail__ + 83) & 2) != 0 )
                  v17 = (_QWORD *)sub_1C93AEC(Method_PartyListViewObject_OpenEquipDetail__);
                v18 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v17, v17[4]);
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
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  DisplayFollowerInfoEquipTarget = PartyOrganizationListViewItem__get_DisplayFollowerInfoEquipTarget(
                                                     (PartyOrganizationListViewItem_o *)v10,
                                                     0);
                  v22 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
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
                    CommonUI__OpenServantEquipStatusDialog_31596056(
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
                  v11 = (_QWORD *)sub_1C93AEC(Method_PartyListViewObject_OpenEquipDetail__);
                v12 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v11, v11[4]);
                OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
                v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                                   (PartyOrganizationListViewItem_o *)v10,
                                   0);
                v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
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
          sub_1C93D2C(this, *(_QWORD *)&m);
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
  if ( (byte_4D2C289 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C93AD4(&PartyListViewItem_TypeInfo);
    sub_1C93AD4(&PartyListViewManager_TypeInfo);
    sub_1C93AD4(&Method_PartyListViewObject_EndShowServantWithQuest__);
    sub_1C93AD4(&Method_PartyListViewObject_EndShowServant__);
    sub_1C93AD4(&Method_PartyListViewObject_OpenServantDetail__);
    this = (PartyListViewObject_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C289 = 1;
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
              if ( this->fields.callbackFunc && !*((_BYTE *)this + 401) )
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
                  v25 = (_QWORD *)sub_1C93AEC(Method_PartyListViewObject_OpenServantDetail__);
                v26 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v25, v25[4]);
                OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
                menuKind = v9->fields.menuKind;
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v29 = menuKind == 8;
                v30 = (CommonUI_o *)Instance;
                if ( v29 )
                {
                  v31 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C93D20(ServantStatusDialog_FormationEndDelegate_TypeInfo);
                  ServantStatusDialog_FormationEndDelegate___ctor(
                    v31,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowServantWithQuest__,
                    0);
                  if ( v30 )
                  {
                    CommonUI__OpenServantStatusDialog_31589732(v30, 1, v9, m, v31, 1, 0, 0);
                    return;
                  }
                }
                else
                {
                  v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
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
                    v14 = (_QWORD *)sub_1C93AEC(Method_PartyListViewObject_OpenServantDetail__);
                  v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
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
                  v18 = (_QWORD *)sub_1C93AEC(Method_PartyListViewObject_OpenServantDetail__);
                v19 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v18, v18[4]);
                OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
                v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(
                                  (PartyOrganizationListViewItem_o *)v11,
                                  0);
                v22 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
                ServantStatusDialog_EndDelegate___ctor(
                  v22,
                  (Il2CppObject *)v4,
                  Method_PartyListViewObject_EndShowServant__,
                  0);
                if ( v20 )
                {
                  CommonUI__OpenServantStatusDialog_31592948((CommonUI_o *)v20, 5, ServantLeader, v22, 0);
                  return;
                }
              }
            }
          }
          sub_1C93D2C(this, *(_QWORD *)&m);
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

  if ( (byte_4D2C288 & 1) == 0 )
  {
    sub_1C93AD4(&PartyListViewItem_TypeInfo);
    sub_1C93AD4(&Method_PartyListViewObject_SelectMemberEquip__);
    sub_1C93AD4(&StringLiteral_9908/*"OnClickListViewChangeEquip"*/);
    byte_4D2C288 = 1;
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
                  v9 = (_QWORD *)sub_1C93AEC(Method_PartyListViewObject_SelectMemberEquip__);
                v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
                OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
                return;
              }
              manager = (UnityEngine_Component_o *)this->fields.manager;
              v13 = m + 1;
              v12 = System_Int32__ToString((int32_t)&v13, 0);
              Member = (struct ListViewItem_o *)System_String__Concat_64425724(
                                                  (System_String_o *)StringLiteral_9908/*"OnClickListViewChangeEquip"*/,
                                                  v12,
                                                  0);
              if ( manager )
              {
                UnityEngine_Component__SendMessage(manager, (System_String_o *)Member, (Il2CppObject *)this, 0);
                return;
              }
            }
          }
          sub_1C93D2C(Member, *(_QWORD *)&m);
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

  if ( (byte_4D2C287 & 1) == 0 )
  {
    sub_1C93AD4(&PartyListViewItem_TypeInfo);
    sub_1C93AD4(&Method_PartyListViewObject_SelectMemberServant__);
    sub_1C93AD4(&StringLiteral_9909/*"OnClickListViewChangeServant"*/);
    byte_4D2C287 = 1;
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
                  v9 = (_QWORD *)sub_1C93AEC(Method_PartyListViewObject_SelectMemberServant__);
                v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
                OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
                return;
              }
              manager = (UnityEngine_Component_o *)this->fields.manager;
              v13 = m + 1;
              v12 = System_Int32__ToString((int32_t)&v13, 0);
              Member = (struct ListViewItem_o *)System_String__Concat_64425724(
                                                  (System_String_o *)StringLiteral_9909/*"OnClickListViewChangeServant"*/,
                                                  v12,
                                                  0);
              if ( manager )
              {
                UnityEngine_Component__SendMessage(manager, (System_String_o *)Member, (Il2CppObject *)this, 0);
                return;
              }
            }
          }
          sub_1C93D2C(Member, *(_QWORD *)&m);
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
    sub_1C93D2C(0, flag);
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

  if ( (byte_4D2C284 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PartyListViewItem_TypeInfo);
    byte_4D2C284 = 1;
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
      sub_1C93D2C(0, v9);
    PartyListViewItemDraw__SetInput(v10, (PartyListViewItem_o *)v9, isInput, v6);
  }
}


void PartyListViewObject__SetItem(
        PartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void PartyListViewObject__SetItem_34741932(PartyListViewObject_o *this, ListViewItem_o *item, const MethodInfo *method)
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
  struct ListViewItemSeed_o *v9; // x8
  float v10; // s0
  float v11; // s1
  float v12; // s8
  float maxAlphaRate; // s10
  float v14; // s8
  const MethodInfo *v15; // x2
  float v16; // s0
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2C291 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C291 = 1;
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
          LODWORD(v16) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
          v9 = this->fields.itemSeed;
          if ( !v9 )
            goto LABEL_29;
          transform = this->fields.maskSprite;
          v10 = fabsf(v8 + v16) / v9->fields.arrangementPich.fields.x;
          v11 = fminf(v10, 1.0);
          v12 = v10 < 0.0 ? 0.0 : v11;
          if ( !transform )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_29;
          v14 = maxAlphaRate * v12;
          if ( v14 > 0.05 != UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
            PartyListViewObject__UpdateCollider(this, v14 <= 0.05, v15);
          transform = this->fields.maskSprite;
          if ( !transform
            || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v14 > 0.05, 0),
                (transform = this->fields.maskSprite) == 0) )
          {
LABEL_29:
            sub_1C93D2C(transform, v6);
          }
          v17.fields.r = *((float *)transform + 37);
          v17.fields.g = *((float *)transform + 38);
          v17.fields.b = *((float *)transform + 39);
          v17.fields.a = v14;
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
    sub_1C93D2C(this, enable);
  v4 = this;
  v5 = 0;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
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

  if ( (byte_4D2C27F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2C27F = 1;
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
  v11 = (PartyListViewObject_o *)sub_1C940C8(v8);
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

  if ( (byte_4D2C280 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2C280 = 1;
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
  v11 = (PartyListViewObject_o *)sub_1C940C8(v8);
  PartyListViewObject__set_DetailMemberIndex(v11, v12, v13);
}


void PartyListViewObject__set_DetailMemberIndex(PartyListViewObject_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DetailMemberIndex_k__BackingField = value;
}