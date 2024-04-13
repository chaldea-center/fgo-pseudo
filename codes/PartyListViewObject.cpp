void __fastcall PartyListViewObject___ctor(PartyListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECEAE & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEAE = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct PartyListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42ECE9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42ECE9D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct PartyListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                dispObject,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyListViewObject__CreateDragObject(
        PartyListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  PartyListViewObject_o *v8; // x20
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42ECEA1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___, (_DWORD)method, v2, v3);
    byte_42ECEA1 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  v8 = (PartyListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyListViewObject__Init(v8, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
  return v7;
}


void __fastcall PartyListViewObject__EndCloseShowEquip(PartyListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListViewObject__EndCloseShowServant(PartyListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  struct ListViewManager_o *manager; // x8
  __int64 v6; // x11
  PartyListViewManager_c *v7; // x10
  PartyListViewManager_o *v8; // x0

  if ( (byte_42ECEA7 & 1) == 0 )
  {
    sub_B5D5C4(&PartyListViewManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42ECEA7 = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    v6 = *(&PartyListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      v7 = (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1];
      v8 = v7 == PartyListViewManager_TypeInfo ? (PartyListViewManager_o *)this->fields.manager : 0LL;
      if ( v7 == PartyListViewManager_TypeInfo )
      {
        if ( !v8 )
          sub_B5D69C(0LL, method);
        PartyListViewManager__SetScrollEnabled(v8, 1, v2);
      }
    }
  }
}


void __fastcall PartyListViewObject__EndCloseShowServantQuestJump(
        PartyListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewManager_o *manager; // x0
  __int64 v9; // x10
  AvalonSceneManager_o *Instance; // x0
  __int64 v11; // x1

  if ( (byte_42ECEA9 & 1) == 0 )
  {
    sub_B5D5C4(&PartyListViewManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    byte_42ECEA9 = 1;
  }
  manager = this->fields.manager;
  if ( manager )
  {
    v9 = *(&PartyListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == PartyListViewManager_TypeInfo )
    {
      PartyListViewManager__SetScrollEnabled((PartyListViewManager_o *)manager, 1, v2);
    }
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v11);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowEquip(PartyListViewObject_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v3; // x3
  PartyListViewObject_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v18; // x20
  struct UIScrollView_o *v19; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v21; // x21

  v4 = this;
  if ( (byte_42ECEAB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_PartyListViewObject_EndCloseShowEquip__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    this = (PartyListViewObject_o *)sub_B5D5C4(&StringLiteral_10134/*"OnModifyListView"*/, v14, v15, v16);
    byte_42ECEAB = 1;
  }
  scrollView = v4->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  v18 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  this = (PartyListViewObject_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v18 )
    goto LABEL_14;
  UIPanel__EndShowOverWriteRange(v18, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  this = (PartyListViewObject_o *)v4->fields.manager;
  if ( !this )
    goto LABEL_14;
  ListViewManager__JumpItem((ListViewManager_o *)this, v4->fields.showIndex, 0LL);
  v19 = v4->fields.scrollView;
  if ( !v19
    || (this = *(PartyListViewObject_o **)&v19->fields.mPlane.fields.m_Normal.fields.x) == 0LL
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        (this = (PartyListViewObject_o *)v4->fields.manager) == 0LL)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10134/*"OnModifyListView"*/,
          (Il2CppObject *)v4,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v21, (Il2CppObject *)v4, Method_PartyListViewObject_EndCloseShowEquip__, 0LL),
        !Instance) )
  {
LABEL_14:
    sub_B5D69C(this, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog(Instance, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowServant(
        PartyListViewObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyListViewObject_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v18; // x20
  struct UIScrollView_o *v19; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v21; // x21

  v4 = this;
  if ( (byte_42ECEA6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_PartyListViewObject_EndCloseShowServant__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    this = (PartyListViewObject_o *)sub_B5D5C4(&StringLiteral_10134/*"OnModifyListView"*/, v14, v15, v16);
    byte_42ECEA6 = 1;
  }
  scrollView = v4->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  v18 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  this = (PartyListViewObject_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v18 )
    goto LABEL_14;
  UIPanel__EndShowOverWriteRange(v18, (float)ManagerConfig_TypeInfo->static_fields->WIDTH, 0LL);
  this = (PartyListViewObject_o *)v4->fields.manager;
  if ( !this )
    goto LABEL_14;
  ListViewManager__JumpItem((ListViewManager_o *)this, v4->fields.showIndex, 0LL);
  v19 = v4->fields.scrollView;
  if ( !v19
    || (this = *(PartyListViewObject_o **)&v19->fields.mPlane.fields.m_Normal.fields.x) == 0LL
    || (UIPanel__EndShowOverWriteRange((UIPanel_o *)this, (float)ManagerConfig_TypeInfo->static_fields->WIDTH_21_9, 0LL),
        (this = (PartyListViewObject_o *)v4->fields.manager) == 0LL)
    || (UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10134/*"OnModifyListView"*/,
          (Il2CppObject *)v4,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v21, (Il2CppObject *)v4, Method_PartyListViewObject_EndCloseShowServant__, 0LL),
        !Instance) )
  {
LABEL_14:
    sub_B5D69C(this, isDecide);
  }
  CommonUI__CloseServantStatusDialog(Instance, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__EndShowServantWithQuest(
        PartyListViewObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42ECEA8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, questId, method);
    sub_B5D5C4(&Method_PartyListViewObject_EndCloseShowServantQuestJump__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42ECEA8 = 1;
  }
  if ( questId < 1 )
  {
    PartyListViewObject__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyListViewObject_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_B5D69C(v14, v15);
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


PartyListViewItem_o *__fastcall PartyListViewObject__GetItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42ECE9F & 1) == 0 )
  {
    sub_B5D5C4(&PartyListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE9F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == PartyListViewItem_TypeInfo )
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v13; // x10
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  PartyListViewItemDraw_o *transform; // x0
  struct System_Action_o **p_callbackFunc; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t *p_dispMode; // x23
  char v26; // w1
  int32_t v27; // w8
  UnityEngine_Object_o *v28; // x22
  System_String_array **v29; // x2
  MethodInfo *v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Action_o *v35; // x20

  if ( (byte_42ECEA2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    sub_B5D5C4(&PartyListViewItem_TypeInfo, v9, v10, v11);
    byte_42ECEA2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v13 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1), *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v13)
    || (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] != PartyListViewItem_TypeInfo )
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
      PartyListViewItemDraw__SetItem(transform, 0LL, this->fields.dispMode, v16);
LABEL_12:
      ((void (__fastcall *)(PartyListViewObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
        this,
        0LL,
        this->klass->vtable._10_Invalidation.methodPtr);
      return;
    }
LABEL_33:
    sub_B5D69C(transform, v15);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  switch ( initMode )
  {
    case 0:
      this->fields.dispMode = 0;
      p_dispMode = &this->fields.dispMode;
      v26 = 0;
      this->fields.state = 1;
      break;
    case 1:
      v26 = 1;
      this->fields.dispMode = 1;
      p_dispMode = &this->fields.dispMode;
      goto LABEL_22;
    case 2:
      v27 = 2;
      goto LABEL_19;
    case 3:
      this->fields.dispMode = 2;
      p_dispMode = &this->fields.dispMode;
      this->fields.state = 3;
      v26 = 1;
      break;
    case 4:
      v27 = 4;
LABEL_19:
      this->fields.dispMode = v27;
      p_dispMode = &this->fields.dispMode;
      v26 = 1;
LABEL_22:
      *(p_dispMode - 5) = 1;
      break;
    default:
      p_dispMode = &this->fields.dispMode;
      v26 = this->fields.dispMode != 0;
      break;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v26, 0LL);
  ((void (__fastcall *)(PartyListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.state == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  v28 = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_33;
    PartyListViewItemDraw__SetItem(transform, (PartyListViewItem_o *)linkItem, *p_dispMode, v30);
  }
  v35 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      v29,
      (System_String_array **)v30,
      v31,
      v32,
      v33,
      v34);
    System_Action__Invoke(v35, 0LL);
  }
  PartyListViewObject__InitAlphaMask(this, v15);
}


void __fastcall PartyListViewObject__InitAlphaMask(PartyListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  UnityEngine_GameObject_o *dispObject; // x0
  struct UnityEngine_BoxCollider_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *maskSprite; // x20
  struct UIScrollView_o *ComponentInParent_UIScrollView; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1

  if ( (byte_42ECEAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42ECEAC = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_17;
  v15 = (struct UnityEngine_BoxCollider_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                  dispObject,
                                                  (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.colliders,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  PartyListViewObject__UpdateCollider(this, 1, v22);
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
                                         (const MethodInfo_1CC4548 *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = ComponentInParent_UIScrollView;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.scrollView,
        (System_Int32_array **)ComponentInParent_UIScrollView,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
        if ( dispObject )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        dispObject,
                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_Dropdown_DropdownItem;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.itemSeed,
            (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          PartyListViewObject__UpdateAlphaMask(this, v38);
          return;
        }
      }
    }
LABEL_17:
    sub_B5D69C(dispObject, method);
  }
}


void __fastcall PartyListViewObject__InitItem(PartyListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewObject__Init_33832140(
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
void __fastcall PartyListViewObject__Init_33833400(
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
void __fastcall PartyListViewObject__Init_33833464(
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

  if ( (byte_42ECE9E & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42ECE9E = 1;
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
  __int64 v3; // x3
  PartyListViewObject_o *v5; // x19
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int32_t state; // w8
  struct ListViewItem_o *linkItem; // x8
  __int64 v23; // x11
  PartyListViewItem_c *v24; // x10
  PartyListViewItem_o *v25; // x21
  PartyListViewObject_o *v26; // x20
  CommonUI_o *v27; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v29; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool IsNpc; // w22
  CommonUI_o *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v34; // x23
  int32_t v35; // w1

  v5 = this;
  if ( (byte_42ECEAA & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, m, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&PartyListViewItem_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_PartyListViewObject_EndShowEquip__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    this = (PartyListViewObject_o *)sub_B5D5C4(&SoundManager_TypeInfo, v18, v19, v20);
    byte_42ECEAA = 1;
  }
  state = v5->fields.state;
  v5->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v5->fields.linkItem;
    if ( linkItem )
    {
      v23 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v23 )
      {
        v24 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v23 - 1];
        v25 = v24 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)v5->fields.linkItem : 0LL;
        if ( v24 == PartyListViewItem_TypeInfo )
        {
          if ( v25 )
          {
            this = (PartyListViewObject_o *)PartyListViewItem__GetMember(v25, m, method);
            v5->fields.showIndex = v25->fields.index;
            if ( this )
            {
              v26 = this;
              if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)this, 0LL) < 1 )
              {
                if ( !PartyOrganizationListViewItem__get_ServantLeader((PartyOrganizationListViewItem_o *)v26, 0LL) )
                  goto LABEL_42;
                this = (PartyListViewObject_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                  (PartyOrganizationListViewItem_o *)v26,
                                                  0LL);
                if ( !this )
                  goto LABEL_39;
                if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
                  goto LABEL_42;
                EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)v26, 0LL);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL) < 1 )
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
                                                  (PartyOrganizationListViewItem_o *)v26,
                                                  0LL);
                if ( this )
                {
                  IsNpc = ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)this, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                                   (PartyOrganizationListViewItem_o *)v26,
                                   0LL);
                  v34 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
                  ServantStatusDialog_EndDelegate___ctor(
                    v34,
                    (Il2CppObject *)v5,
                    Method_PartyListViewObject_EndShowEquip__,
                    0LL);
                  if ( Instance )
                  {
                    if ( IsNpc )
                      v35 = 19;
                    else
                      v35 = 14;
                    CommonUI__OpenServantEquipStatusDialog_18217320(Instance, v35, EquipTarget1, v34, 0LL, 0LL);
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
                v27 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                                   (PartyOrganizationListViewItem_o *)v26,
                                   0LL);
                v29 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
                ServantStatusDialog_EndDelegate___ctor(
                  v29,
                  (Il2CppObject *)v5,
                  Method_PartyListViewObject_EndShowEquip__,
                  0LL);
                if ( v27 )
                {
                  CommonUI__OpenServantEquipStatusDialog(v27, 11, EquipUserSvtId, 1, v29, 0LL, 0LL);
                  return;
                }
              }
            }
          }
LABEL_39:
          sub_B5D69C(this, *(_QWORD *)&m);
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
  __int64 v3; // x3
  PartyListViewObject_o *v5; // x19
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int32_t state; // w8
  struct ListViewItem_o *linkItem; // x8
  __int64 v29; // x11
  PartyListViewItem_c *v30; // x10
  PartyListViewItem_o *v31; // x21
  const MethodInfo *v32; // x2
  PartyListViewObject_o *v33; // x22
  FollowerInfo_o *itemDraw; // x0
  const MethodInfo *v35; // x2
  PartyListViewManager_o *v36; // x0
  __int64 v37; // x10
  CommonUI_o *v38; // x20
  ServantLeaderInfo_o *ServantLeader; // x21
  ServantStatusDialog_EndDelegate_o *v40; // x22
  PartyListViewManager_o *manager; // x0
  __int64 v42; // x10
  int32_t menuKind; // w22
  WebViewManager_o *Instance; // x0
  bool v45; // zf
  CommonUI_o *v46; // x22
  ServantStatusDialog_FormationEndDelegate_o *v47; // x23
  ServantStatusDialog_EndDelegate_o *v48; // x23

  v5 = this;
  if ( (byte_42ECEA5 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, m, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&PartyListViewItem_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&PartyListViewManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_PartyListViewObject_EndShowServantWithQuest__, v15, v16, v17);
    sub_B5D5C4(&Method_PartyListViewObject_EndShowServant__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    this = (PartyListViewObject_o *)sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    byte_42ECEA5 = 1;
  }
  state = v5->fields.state;
  v5->fields.isBusy = 0;
  if ( state == 3 )
  {
    linkItem = v5->fields.linkItem;
    if ( linkItem )
    {
      v29 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v29 )
      {
        v30 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v29 - 1];
        v31 = v30 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)v5->fields.linkItem : 0LL;
        if ( v30 == PartyListViewItem_TypeInfo )
        {
          if ( v31 )
          {
            this = (PartyListViewObject_o *)PartyListViewItem__GetMember(v31, m, method);
            v5->fields.showIndex = v31->fields.index;
            if ( this )
            {
              v33 = this;
              if ( this->fields.callbackFunc && !BYTE1(this[1].fields.itemSeed) )
              {
                manager = (PartyListViewManager_o *)v5->fields.manager;
                if ( manager )
                {
                  v42 = *(&PartyListViewManager_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v42
                    && (PartyListViewManager_c *)manager->klass->_2.typeHierarchy[v42 - 1] == PartyListViewManager_TypeInfo )
                  {
                    PartyListViewManager__SetScrollEnabled(manager, 0, v32);
                  }
                }
                v5->fields._DetailMemberIndex_k__BackingField = m;
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                menuKind = v31->fields.menuKind;
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v45 = menuKind == 8;
                v46 = (CommonUI_o *)Instance;
                if ( v45 )
                {
                  v47 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B5D694(ServantStatusDialog_FormationEndDelegate_TypeInfo);
                  ServantStatusDialog_FormationEndDelegate___ctor(
                    v47,
                    (Il2CppObject *)v5,
                    Method_PartyListViewObject_EndShowServantWithQuest__,
                    0LL);
                  if ( v46 )
                  {
                    CommonUI__OpenServantStatusDialog_18211360(v46, 1, v31, m, v47, 1, 0LL);
                    return;
                  }
                }
                else
                {
                  v48 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
                  ServantStatusDialog_EndDelegate___ctor(
                    v48,
                    (Il2CppObject *)v5,
                    Method_PartyListViewObject_EndShowServant__,
                    0LL);
                  if ( v46 )
                  {
                    CommonUI__OpenServantStatusDialog(v46, 1, v31, m, v48, 1, 0LL);
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
                v36 = (PartyListViewManager_o *)v5->fields.manager;
                if ( v36 )
                {
                  v37 = *(&PartyListViewManager_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v36->klass->_2.bitflags2 + 1) >= (unsigned int)v37
                    && (PartyListViewManager_c *)v36->klass->_2.typeHierarchy[v37 - 1] == PartyListViewManager_TypeInfo )
                  {
                    PartyListViewManager__SetScrollEnabled(v36, 0, v35);
                  }
                }
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playSystemSe(0, 0LL);
                v38 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(
                                  (PartyOrganizationListViewItem_o *)v33,
                                  0LL);
                v40 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
                ServantStatusDialog_EndDelegate___ctor(
                  v40,
                  (Il2CppObject *)v5,
                  Method_PartyListViewObject_EndShowServant__,
                  0LL);
                if ( v38 )
                {
                  CommonUI__OpenServantStatusDialog_18214956(v38, 5, ServantLeader, v40, 0LL);
                  return;
                }
              }
            }
          }
          sub_B5D69C(this, *(_QWORD *)&m);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v13; // x11
  PartyListViewItem_c *v14; // x10
  PartyListViewItem_o *Member; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  UnityEngine_Component_o *manager; // x21
  System_String_o *v19; // x0
  int v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ECEA4 & 1) == 0 )
  {
    sub_B5D5C4(&PartyListViewItem_TypeInfo, m, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyListViewObject_SelectMemberEquip__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10064/*"OnClickListViewChangeEquip"*/, v9, v10, v11);
    byte_42ECEA4 = 1;
  }
  v20 = 0;
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v13 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        v14 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1];
        Member = v14 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v14 == PartyListViewItem_TypeInfo )
        {
          if ( Member )
          {
            Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, m, method);
            if ( Member )
            {
              if ( Member[1].fields._IsWaveBattleRestart_k__BackingField )
              {
                v16 = Method_PartyListViewObject_SelectMemberEquip__;
                if ( (*((_BYTE *)Method_PartyListViewObject_SelectMemberEquip__ + 75) & 2) != 0 )
                  v16 = (_QWORD *)sub_B5D5CC(Method_PartyListViewObject_SelectMemberEquip__);
                v17 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v16, v16[3]);
                OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
                return;
              }
              manager = (UnityEngine_Component_o *)this->fields.manager;
              v20 = m + 1;
              v19 = System_Int32__ToString((int32_t)&v20, 0LL);
              Member = (PartyListViewItem_o *)System_String__Concat_44577788(
                                                (System_String_o *)StringLiteral_10064/*"OnClickListViewChangeEquip"*/,
                                                v19,
                                                0LL);
              if ( manager )
              {
                UnityEngine_Component__SendMessage(manager, (System_String_o *)Member, (Il2CppObject *)this, 0LL);
                return;
              }
            }
          }
          sub_B5D69C(Member, *(_QWORD *)&m);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v13; // x11
  PartyListViewItem_c *v14; // x10
  PartyListViewItem_o *Member; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  UnityEngine_Component_o *manager; // x21
  System_String_o *v19; // x0
  int v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ECEA3 & 1) == 0 )
  {
    sub_B5D5C4(&PartyListViewItem_TypeInfo, m, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyListViewObject_SelectMemberServant__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10065/*"OnClickListViewChangeServant"*/, v9, v10, v11);
    byte_42ECEA3 = 1;
  }
  v20 = 0;
  if ( this->fields.state == 3 )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      v13 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        v14 = (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1];
        Member = v14 == PartyListViewItem_TypeInfo ? (PartyListViewItem_o *)this->fields.linkItem : 0LL;
        if ( v14 == PartyListViewItem_TypeInfo )
        {
          if ( Member )
          {
            Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, m, method);
            if ( Member )
            {
              if ( Member[1].fields._IsWaveBattleRestart_k__BackingField )
              {
                v16 = Method_PartyListViewObject_SelectMemberServant__;
                if ( (*((_BYTE *)Method_PartyListViewObject_SelectMemberServant__ + 75) & 2) != 0 )
                  v16 = (_QWORD *)sub_B5D5CC(Method_PartyListViewObject_SelectMemberServant__);
                v17 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v16, v16[3]);
                OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
                return;
              }
              manager = (UnityEngine_Component_o *)this->fields.manager;
              v20 = m + 1;
              v19 = System_Int32__ToString((int32_t)&v20, 0LL);
              Member = (PartyListViewItem_o *)System_String__Concat_44577788(
                                                (System_String_o *)StringLiteral_10065/*"OnClickListViewChangeServant"*/,
                                                v19,
                                                0LL);
              if ( manager )
              {
                UnityEngine_Component__SendMessage(manager, (System_String_o *)Member, (Il2CppObject *)this, 0LL);
                return;
              }
            }
          }
          sub_B5D69C(Member, *(_QWORD *)&m);
        }
      }
    }
  }
}


void __fastcall PartyListViewObject__SetInput(PartyListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v10; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11
  struct ListViewItem_o *v13; // x1
  PartyListViewItemDraw_o *v14; // x0

  if ( (byte_42ECEA0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&PartyListViewItem_TypeInfo, v6, v7, v8);
    byte_42ECEA0 = 1;
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
      && (v12 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
    {
      if ( (PartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == PartyListViewItem_TypeInfo )
        v13 = this->fields.linkItem;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v13);
    PartyListViewItemDraw__SetInput(v14, (PartyListViewItem_o *)v13, isInput, v10);
  }
}


void __fastcall PartyListViewObject__SetItem(
        PartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall PartyListViewObject__SetItem_33837568(
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *itemSeed; // x20
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *transform; // x0
  float v10; // s8
  float v11; // s0
  struct ListViewItemSeed_o *v12; // x8
  float v13; // s0
  float maxAlphaRate; // s10
  float v15; // s8
  float v16; // s8
  const MethodInfo *v17; // x2
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  UIWidget_o *v22; // x19
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ECEAD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEAD = 1;
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
          LODWORD(v10) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)transform,
                                         0LL);
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)transform,
                                         0LL);
          v12 = this->fields.itemSeed;
          if ( !v12 )
            goto LABEL_29;
          v13 = UnityEngine_Mathf__Clamp01(fabsf(v10 + v11) / v12->fields.arrangementPich.fields.x, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !transform )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          v15 = v13;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          v16 = v15 * maxAlphaRate;
          if ( (((v16 > 0.05) ^ UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL)) & 1) != 0 )
            PartyListViewObject__UpdateCollider(this, v16 <= 0.05, v17);
          transform = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !transform
            || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v16 > 0.05, 0LL),
                (v22 = (UIWidget_o *)this->fields.maskSprite) == 0LL) )
          {
LABEL_29:
            sub_B5D69C(transform, v8);
          }
          v24.fields.r = v22->fields.mColor.fields.r;
          v24.fields.g = v22->fields.mColor.fields.g;
          v24.fields.b = v22->fields.mColor.fields.b;
          v24.fields.a = v16;
          var40.methodPointer = 0LL;
          var40.invoker_method = 0LL;
          UnityEngine_Color___ctor(v24, v18, v19, v20, v21, &var40);
          *(_QWORD *)&v25.fields.r = var40.methodPointer;
          *(_QWORD *)&v25.fields.b = var40.invoker_method;
          UIWidget__set_color(v22, v25, 0LL);
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
    sub_B5D69C(this, enable);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ECE9B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ECE9B = 1;
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
  sub_B5D990(v9);
  PartyListViewObject__remove_callbackFunc(v12, v13, v14);
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
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyListViewObject_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_42ECE9C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ECE9C = 1;
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
  sub_B5D990(v9);
  PartyListViewObject__set_DetailMemberIndex(v12, v13, v14);
}


void __fastcall PartyListViewObject__set_DetailMemberIndex(
        PartyListViewObject_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DetailMemberIndex_k__BackingField = value;
}