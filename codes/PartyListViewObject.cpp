void __fastcall PartyListViewObject___ctor(PartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_49F82F9 & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    byte_49F82F9 = 1;
  }
  this->fields.maxAlphaRate = 0.6;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall PartyListViewObject__Awake(PartyListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F82E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___, method);
    byte_49F82E8 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64324(0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
  this->fields.itemDraw = (struct PartyListViewItemDraw_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


UnityEngine_GameObject_o *__fastcall PartyListViewObject__CreateDragObject(
        PartyListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  const MethodInfo *v5; // x2

  if ( (byte_49F82EC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___, method);
    byte_49F82EC = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___)) == 0LL) )
  {
    sub_1B64324(DragObject);
  }
  PartyListViewObject__Init_31692340((PartyListViewObject_o *)DragObject, 2, v5);
  return v4;
}


void __fastcall PartyListViewObject__EndCloseShowEquip(PartyListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListViewObject__EndCloseShowServant(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  PartyListViewManager_c *v6; // x10
  PartyListViewManager_o *v7; // x0

  if ( (byte_49F82F2 & 1) == 0 )
  {
    sub_1B640C8(&PartyListViewManager_TypeInfo, method);
    byte_49F82F2 = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(PartyListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == PartyListViewManager_TypeInfo ? (PartyListViewManager_o *)this->fields.manager : 0LL;
      if ( v6 == PartyListViewManager_TypeInfo )
      {
        if ( !v7 )
          sub_1B64324(0LL);
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
  __int64 v4; // x1
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *Instance; // x0

  if ( (byte_49F82F4 & 1) == 0 )
  {
    sub_1B640C8(&PartyListViewManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_49F82F4 = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(PartyListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyListViewManager_TypeInfo )
    {
      PartyListViewManager__SetScrollEnabled((PartyListViewManager_o *)manager, 1, v2);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
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
  UIPanel_o *mPanel; // x20
  struct UIScrollView_o *v10; // x8
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x21

  v3 = this;
  if ( (byte_49F82F6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&Method_PartyListViewObject_EndCloseShowEquip__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (PartyListViewObject_o *)sub_1B640C8(&StringLiteral_9882/*"OnModifyListView"*/, v7);
    byte_49F82F6 = 1;
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
  UIPanel__EndShowOverWriteRange(mPanel, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  this = (PartyListViewObject_o *)v3->fields.manager;
  if ( !this )
    goto LABEL_13;
  ListViewManager__JumpItem((ListViewManager_o *)this, v3->fields.showIndex, 0LL);
  v10 = v3->fields.scrollView;
  if ( !v10
    || (this = (PartyListViewObject_o *)v10->fields.mPanel) == 0LL
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        (this = (PartyListViewObject_o *)v3->fields.manager) == 0LL)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_9882/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13),
        System_Action___ctor(v14, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowEquip__, 0LL),
        !Instance) )
  {
LABEL_13:
    sub_1B64324(this);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v14, 0LL);
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
  UIPanel_o *mPanel; // x20
  struct UIScrollView_o *v10; // x8
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x21

  v3 = this;
  if ( (byte_49F82F1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&Method_PartyListViewObject_EndCloseShowServant__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (PartyListViewObject_o *)sub_1B640C8(&StringLiteral_9882/*"OnModifyListView"*/, v7);
    byte_49F82F1 = 1;
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
  UIPanel__EndShowOverWriteRange(mPanel, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  this = (PartyListViewObject_o *)v3->fields.manager;
  if ( !this )
    goto LABEL_13;
  ListViewManager__JumpItem((ListViewManager_o *)this, v3->fields.showIndex, 0LL);
  v10 = v3->fields.scrollView;
  if ( !v10
    || (this = (PartyListViewObject_o *)v10->fields.mPanel) == 0LL
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        (this = (PartyListViewObject_o *)v3->fields.manager) == 0LL)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_9882/*"OnModifyListView"*/,
          (Il2CppObject *)v3,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13),
        System_Action___ctor(v14, (Il2CppObject *)v3, Method_PartyListViewObject_EndCloseShowServant__, 0LL),
        !Instance) )
  {
LABEL_13:
    sub_1B64324(this);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
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
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49F82F3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_PartyListViewObject_EndCloseShowServantQuestJump__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F82F3 = 1;
  }
  if ( questId < 1 )
  {
    PartyListViewObject__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListViewObject_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_1B64324(v12);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v11, 0LL);
  }
}


void __fastcall PartyListViewObject__EventMoveEnd(PartyListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc[-1].fields.isMine = 0;
  *((_DWORD *)&p_callbackFunc[-1].fields.isMine + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


PartyListViewItem_o *__fastcall PartyListViewObject__GetItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49F82EA & 1) == 0 )
  {
    sub_1B640C8(&PartyListViewItem_TypeInfo, method);
    byte_49F82EA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyListViewItem_TypeInfo )
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
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v13; // x3
  PartyListViewItemDraw_o *transform; // x0
  struct System_Action_o **p_callbackFunc; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  char v18; // w1
  int32_t v19; // w8
  UnityEngine_Object_o *v20; // x22
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Action_o *v24; // x20

  if ( (byte_49F82ED & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode);
    sub_1B640C8(&PartyListViewItem_TypeInfo, v9);
    byte_49F82ED = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyListViewItem_TypeInfo )
  {
    this->fields.state = 0;
    this->fields.dispMode = 0;
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
      goto LABEL_11;
    transform = this->fields.itemDraw;
    if ( transform )
    {
      PartyListViewItemDraw__SetItem(transform, 0LL, this->fields.dispMode, v13);
LABEL_11:
      ((void (__fastcall *)(PartyListViewObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
        this,
        0LL,
        this->klass->vtable._10_Invalidation.methodPtr);
      return;
    }
LABEL_31:
    sub_1B64324(transform);
  }
  transform = (PartyListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.basePosition, 0LL);
  transform = (PartyListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_31;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v16, v17);
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v18, 0LL);
  ((void (__fastcall *)(PartyListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.state == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  v20 = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_31;
    PartyListViewItemDraw__SetItem(transform, (PartyListViewItem_o *)linkItem, this->fields.dispMode, v23);
  }
  v24 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v22, (int32_t)v23);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v24->fields.m_target)(
      v24->fields.original_method_info,
      *(_QWORD *)&v24->fields.extra_arg);
  }
  PartyListViewObject__InitAlphaMask(this, v21);
}


void __fastcall PartyListViewObject__InitAlphaMask(PartyListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  System_Object_array *ComponentsInChildren_object__48794364; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *maskSprite; // x20
  Il2CppObject *ComponentInParent_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_49F82F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F82F7 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_16;
  ComponentsInChildren_object__48794364 = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                            dispObject,
                                            (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = (struct UnityEngine_BoxCollider_array *)ComponentsInChildren_object__48794364;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.colliders,
    (int32_t)ComponentsInChildren_object__48794364,
    v8,
    v9);
  PartyListViewObject__UpdateCollider(this, 1, v10);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    dispObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !dispObject )
      goto LABEL_16;
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
    if ( !dispObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(dispObject, 0, 0LL);
  }
  if ( this->fields.useAlphaMask )
  {
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( dispObject )
    {
      ComponentInParent_object = UnityEngine_GameObject__GetComponentInParent_object_(
                                   dispObject,
                                   (const MethodInfo_2E884B8 *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = (struct UIScrollView_o *)ComponentInParent_object;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.scrollView,
        (int32_t)ComponentInParent_object,
        v13,
        v14);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
        if ( dispObject )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         dispObject,
                                         (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_object;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.itemSeed,
            (int32_t)ComponentInChildren_object,
            v16,
            v17);
          PartyListViewObject__UpdateAlphaMask(this, v18);
          return;
        }
      }
    }
LABEL_16:
    sub_1B64324(dispObject);
  }
}


void __fastcall PartyListViewObject__InitItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init_31692340(
        PartyListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F7111 = 1;
  }
  PartyListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init_31693640(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F7111 = 1;
  }
  PartyListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init_31693724(
        PartyListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F7111 = 1;
  }
  PartyListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
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
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F82E9 & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F82E9 = 1;
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
    sub_1B6406C(p_dragObject, 0, v8, v9);
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
  __int64 methodPtr_low; // x11
  PartyListViewItem_c *v13; // x10
  PartyListViewItem_o *v14; // x21
  PartyListViewObject_o *v15; // x20
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *v18; // x21
  int64_t EquipUserSvtId; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  ServantStatusDialog_EndDelegate_o *v22; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  bool IsNpc; // w22
  Il2CppObject *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  ServantStatusDialog_EndDelegate_o *v31; // x23
  int32_t v32; // w1
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0

  v4 = this;
  if ( (byte_49F82F5 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&m);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&PartyListViewItem_TypeInfo, v6);
    sub_1B640C8(&Method_PartyListViewObject_EndShowEquip__, v7);
    sub_1B640C8(&Method_PartyListViewObject_OpenEquipDetail__, v8);
    this = (PartyListViewObject_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_49F82F5 = 1;
  }
  state = v4->fields.state;
  v4->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v4->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v13 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
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
                  goto LABEL_32;
                this = (PartyListViewObject_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                  (PartyOrganizationListViewItem_o *)v15,
                                                  0LL);
                if ( !this )
                  goto LABEL_35;
                if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
                  goto LABEL_32;
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)v15, 0LL);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(EquipSvtId, 0LL) < 1 )
                {
LABEL_32:
                  v33 = Method_PartyListViewObject_OpenEquipDetail__;
                  if ( (*((_BYTE *)Method_PartyListViewObject_OpenEquipDetail__ + 83) & 2) != 0 )
                    v33 = (_QWORD *)sub_1B640E0(Method_PartyListViewObject_OpenEquipDetail__);
                  v34 = (System_Reflection_MethodBase_o *)sub_1B640AC(v33, v33[4]);
                  OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0LL);
                  return;
                }
                v24 = Method_PartyListViewObject_OpenEquipDetail__;
                if ( (*((_BYTE *)Method_PartyListViewObject_OpenEquipDetail__ + 83) & 2) != 0 )
                  v24 = (_QWORD *)sub_1B640E0(Method_PartyListViewObject_OpenEquipDetail__);
                v25 = (System_Reflection_MethodBase_o *)sub_1B640AC(v24, v24[4]);
                OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
                this = (PartyListViewObject_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                  (PartyOrganizationListViewItem_o *)v15,
                                                  0LL);
                if ( this )
                {
                  IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                                   (PartyOrganizationListViewItem_o *)v15,
                                   0LL);
                  v31 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(
                                                               ServantStatusDialog_EndDelegate_TypeInfo,
                                                               v29,
                                                               v30);
                  ServantStatusDialog_EndDelegate___ctor(
                    v31,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowEquip__,
                    0LL);
                  if ( Instance )
                  {
                    if ( IsNpc )
                      v32 = 19;
                    else
                      v32 = 14;
                    CommonUI__OpenServantEquipStatusDialog_30360564(
                      (CommonUI_o *)Instance,
                      v32,
                      EquipTarget1,
                      v31,
                      0LL,
                      0LL);
                    return;
                  }
                }
              }
              else
              {
                v16 = Method_PartyListViewObject_OpenEquipDetail__;
                if ( (*((_BYTE *)Method_PartyListViewObject_OpenEquipDetail__ + 83) & 2) != 0 )
                  v16 = (_QWORD *)sub_1B640E0(Method_PartyListViewObject_OpenEquipDetail__);
                v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
                OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
                v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                                   (PartyOrganizationListViewItem_o *)v15,
                                   0LL);
                v22 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(
                                                             ServantStatusDialog_EndDelegate_TypeInfo,
                                                             v20,
                                                             v21);
                ServantStatusDialog_EndDelegate___ctor(
                  v22,
                  (Il2CppObject *)v4,
                  Method_PartyListViewObject_EndShowEquip__,
                  0LL);
                if ( v18 )
                {
                  CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v18, 11, EquipUserSvtId, 1, v22, 0LL, 0LL);
                  return;
                }
              }
            }
          }
LABEL_35:
          sub_1B64324(this);
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
  __int64 v11; // x1
  int32_t state; // w8
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  PartyListViewItem_c *v15; // x10
  PartyListViewItem_o *v16; // x21
  const MethodInfo *v17; // x2
  PartyListViewObject_o *v18; // x22
  FollowerInfo_o *callbackFunc; // x0
  const MethodInfo *v20; // x2
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  PartyListViewManager_o *v23; // x0
  __int64 v24; // x10
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *v27; // x20
  ServantLeaderInfo_o *ServantLeader; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  ServantStatusDialog_EndDelegate_o *v31; // x22
  PartyListViewManager_o *manager; // x0
  __int64 v33; // x10
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  bool v40; // zf
  CommonUI_o *v41; // x22
  ServantStatusDialog_FormationEndDelegate_o *v42; // x23
  ServantStatusDialog_EndDelegate_o *v43; // x23

  v4 = this;
  if ( (byte_49F82F0 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&m);
    sub_1B640C8(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5);
    sub_1B640C8(&PartyListViewItem_TypeInfo, v6);
    sub_1B640C8(&PartyListViewManager_TypeInfo, v7);
    sub_1B640C8(&Method_PartyListViewObject_EndShowServantWithQuest__, v8);
    sub_1B640C8(&Method_PartyListViewObject_EndShowServant__, v9);
    sub_1B640C8(&Method_PartyListViewObject_OpenServantDetail__, v10);
    this = (PartyListViewObject_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_49F82F0 = 1;
  }
  state = v4->fields.state;
  v4->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v4->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v15 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        v16 = v15 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)v4->fields.linkItem : 0LL;
        if ( v15 == PartyListViewItem_TypeInfo )
        {
          if ( v16 )
          {
            this = (PartyListViewObject_o *)PartyListViewItem__GetMember(v16, m, method);
            v4->fields.showIndex = v16->fields.index;
            if ( this )
            {
              v18 = this;
              if ( *(_QWORD *)&this->fields.isBusy && !BYTE1(this[1].fields.maxAlphaRate) )
              {
                manager = (PartyListViewManager_o *)v4->fields.manager;
                if ( manager )
                {
                  v33 = LOBYTE(PartyListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v33
                    && (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[v33 - 1] == PartyListViewManager_TypeInfo )
                  {
                    PartyListViewManager__SetScrollEnabled(manager, 0, v17);
                  }
                }
                v4->fields._DetailMemberIndex_k__BackingField = m;
                v34 = Method_PartyListViewObject_OpenServantDetail__;
                if ( (*((_BYTE *)Method_PartyListViewObject_OpenServantDetail__ + 83) & 2) != 0 )
                  v34 = (_QWORD *)sub_1B640E0(Method_PartyListViewObject_OpenServantDetail__);
                v35 = (System_Reflection_MethodBase_o *)sub_1B640AC(v34, v34[4]);
                OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
                menuKind = v16->fields.menuKind;
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v40 = menuKind == 8;
                v41 = (CommonUI_o *)Instance;
                if ( v40 )
                {
                  v42 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1B64314(
                                                                        ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                                        v38,
                                                                        v39);
                  ServantStatusDialog_FormationEndDelegate___ctor(
                    v42,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowServantWithQuest__,
                    0LL);
                  if ( v41 )
                  {
                    CommonUI__OpenServantStatusDialog_30354120(v41, 1, v16, m, v42, 1, 0LL);
                    return;
                  }
                }
                else
                {
                  v43 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(
                                                               ServantStatusDialog_EndDelegate_TypeInfo,
                                                               v38,
                                                               v39);
                  ServantStatusDialog_EndDelegate___ctor(
                    v43,
                    (Il2CppObject *)v4,
                    Method_PartyListViewObject_EndShowServant__,
                    0LL);
                  if ( v41 )
                  {
                    CommonUI__OpenServantStatusDialog(v41, 1, v16, m, v43, 1, 0LL);
                    return;
                  }
                }
              }
              else
              {
                callbackFunc = (FollowerInfo_o *)this->fields.callbackFunc;
                if ( !callbackFunc || FollowerInfo__get_IsNpc(callbackFunc, 0LL) )
                {
                  v21 = Method_PartyListViewObject_OpenServantDetail__;
                  if ( (*((_BYTE *)Method_PartyListViewObject_OpenServantDetail__ + 83) & 2) != 0 )
                    v21 = (_QWORD *)sub_1B640E0(Method_PartyListViewObject_OpenServantDetail__);
                  v22 = (System_Reflection_MethodBase_o *)sub_1B640AC(v21, v21[4]);
                  OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
                  return;
                }
                v23 = (PartyListViewManager_o *)v4->fields.manager;
                if ( v23 )
                {
                  v24 = LOBYTE(PartyListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v24
                    && (PartyListViewManager_c *)v23->klass->_2.typeHierarchy[v24 - 1] == PartyListViewManager_TypeInfo )
                  {
                    PartyListViewManager__SetScrollEnabled(v23, 0, v20);
                  }
                }
                v25 = Method_PartyListViewObject_OpenServantDetail__;
                if ( (*((_BYTE *)Method_PartyListViewObject_OpenServantDetail__ + 83) & 2) != 0 )
                  v25 = (_QWORD *)sub_1B640E0(Method_PartyListViewObject_OpenServantDetail__);
                v26 = (System_Reflection_MethodBase_o *)sub_1B640AC(v25, v25[4]);
                OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
                v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(
                                  (PartyOrganizationListViewItem_o *)v18,
                                  0LL);
                v31 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(
                                                             ServantStatusDialog_EndDelegate_TypeInfo,
                                                             v29,
                                                             v30);
                ServantStatusDialog_EndDelegate___ctor(
                  v31,
                  (Il2CppObject *)v4,
                  Method_PartyListViewObject_EndShowServant__,
                  0LL);
                if ( v27 )
                {
                  CommonUI__OpenServantStatusDialog_30357468((CommonUI_o *)v27, 5, ServantLeader, v31, 0LL);
                  return;
                }
              }
            }
          }
          sub_1B64324(this);
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
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  PartyListViewItem_c *v9; // x10
  PartyListViewItem_o *Member; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  UnityEngine_Component_o *manager; // x21
  System_String_o *v14; // x0
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F82EF & 1) == 0 )
  {
    sub_1B640C8(&PartyListViewItem_TypeInfo, *(_QWORD *)&m);
    sub_1B640C8(&Method_PartyListViewObject_SelectMemberEquip__, v5);
    sub_1B640C8(&StringLiteral_9806/*"OnClickListViewChangeEquip"*/, v6);
    byte_49F82EF = 1;
  }
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v9 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        Member = v9 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v9 == PartyListViewItem_TypeInfo )
        {
          if ( Member )
          {
            Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, m, method);
            if ( Member )
            {
              if ( Member[1].fields._IsWaveBattleRestart_k__BackingField )
              {
                v11 = Method_PartyListViewObject_SelectMemberEquip__;
                if ( (*((_BYTE *)Method_PartyListViewObject_SelectMemberEquip__ + 83) & 2) != 0 )
                  v11 = (_QWORD *)sub_1B640E0(Method_PartyListViewObject_SelectMemberEquip__);
                v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
                OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
                return;
              }
              manager = (UnityEngine_Component_o *)this->fields.manager;
              v15 = m + 1;
              v14 = System_Int32__ToString((int32_t)&v15, 0LL);
              Member = (PartyListViewItem_o *)System_String__Concat_61375396(
                                                (System_String_o *)StringLiteral_9806/*"OnClickListViewChangeEquip"*/,
                                                v14,
                                                0LL);
              if ( manager )
              {
                UnityEngine_Component__SendMessage(manager, (System_String_o *)Member, (Il2CppObject *)this, 0LL);
                return;
              }
            }
          }
          sub_1B64324(Member);
        }
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
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  PartyListViewItem_c *v9; // x10
  PartyListViewItem_o *Member; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  UnityEngine_Component_o *manager; // x21
  System_String_o *v14; // x0
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F82EE & 1) == 0 )
  {
    sub_1B640C8(&PartyListViewItem_TypeInfo, *(_QWORD *)&m);
    sub_1B640C8(&Method_PartyListViewObject_SelectMemberServant__, v5);
    sub_1B640C8(&StringLiteral_9807/*"OnClickListViewChangeServant"*/, v6);
    byte_49F82EE = 1;
  }
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v9 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
        Member = v9 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v9 == PartyListViewItem_TypeInfo )
        {
          if ( Member )
          {
            Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, m, method);
            if ( Member )
            {
              if ( Member[1].fields._IsWaveBattleRestart_k__BackingField )
              {
                v11 = Method_PartyListViewObject_SelectMemberServant__;
                if ( (*((_BYTE *)Method_PartyListViewObject_SelectMemberServant__ + 83) & 2) != 0 )
                  v11 = (_QWORD *)sub_1B640E0(Method_PartyListViewObject_SelectMemberServant__);
                v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
                OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
                return;
              }
              manager = (UnityEngine_Component_o *)this->fields.manager;
              v15 = m + 1;
              v14 = System_Int32__ToString((int32_t)&v15, 0LL);
              Member = (PartyListViewItem_o *)System_String__Concat_61375396(
                                                (System_String_o *)StringLiteral_9807/*"OnClickListViewChangeServant"*/,
                                                v14,
                                                0LL);
              if ( manager )
              {
                UnityEngine_Component__SendMessage(manager, (System_String_o *)Member, (Il2CppObject *)this, 0LL);
                return;
              }
            }
          }
          sub_1B64324(Member);
        }
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
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  PartyListViewItemDraw_o *v11; // x0

  if ( (byte_49F82EB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B640C8(&PartyListViewItem_TypeInfo, v5);
    byte_49F82EB = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyListViewItem_TypeInfo )
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
      sub_1B64324(0LL);
    PartyListViewItemDraw__SetInput(v11, (PartyListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall PartyListViewObject__SetItem(
        PartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40419096((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall PartyListViewObject__SetItem_31698200(
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
  void *transform; // x0
  float v7; // s8
  float v8; // s0
  struct ListViewItemSeed_o *v9; // x8
  float v10; // s0
  float v11; // s1
  float v12; // s8
  float maxAlphaRate; // s10
  float v14; // s8
  const MethodInfo *v15; // x2
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F82F8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F82F8 = 1;
  }
  if ( this->fields.useAlphaMask )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    {
      itemSeed = (UnityEngine_Object_o *)this->fields.itemSeed;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(itemSeed, 0LL, 0LL) )
      {
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(maskSprite, 0LL, 0LL) )
        {
          transform = this->fields.scrollView;
          if ( !transform )
            goto LABEL_29;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          v9 = this->fields.itemSeed;
          if ( !v9 )
            goto LABEL_29;
          transform = this->fields.maskSprite;
          v10 = fabsf(v7 + v8) / v9->fields.arrangementPich.fields.x;
          v11 = fminf(v10, 1.0);
          v12 = v10 < 0.0 ? 0.0 : v11;
          if ( !transform )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          v14 = maxAlphaRate * v12;
          if ( v14 > 0.05 != UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
            PartyListViewObject__UpdateCollider(this, v14 <= 0.05, v15);
          transform = this->fields.maskSprite;
          if ( !transform
            || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v14 > 0.05, 0LL),
                (transform = this->fields.maskSprite) == 0LL) )
          {
LABEL_29:
            sub_1B64324(transform);
          }
          v16.fields.r = *((float *)transform + 37);
          v16.fields.g = *((float *)transform + 38);
          v16.fields.b = *((float *)transform + 39);
          v16.fields.a = v14;
          UIWidget__set_color((UIWidget_o *)transform, v16, 0LL);
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

  colliders = this->fields.colliders;
  if ( !colliders )
LABEL_7:
    sub_1B64324(this);
  v4 = this;
  v5 = 0LL;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B6432C(this, enable);
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

  if ( (byte_49F82E6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F82E6 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListViewObject_o *)sub_1B645E4(v8);
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

  if ( (byte_49F82E7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F82E7 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListViewObject_o *)sub_1B645E4(v8);
  PartyListViewObject__set_DetailMemberIndex(v11, v12, v13);
}


void __fastcall PartyListViewObject__set_DetailMemberIndex(
        PartyListViewObject_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DetailMemberIndex_k__BackingField = value;
}