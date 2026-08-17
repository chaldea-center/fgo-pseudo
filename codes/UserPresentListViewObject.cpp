void UserPresentListViewObject___ctor(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F513 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596F513 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void UserPresentListViewObject__Awake(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596F50C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewItemDraw___);
    byte_596F50C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewItemDraw___);
  this->fields.itemDraw = (struct UserPresentListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UserPresentListViewItem_o *UserPresentListViewObject__GetItem(
        UserPresentListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596F50D & 1) == 0 )
  {
    sub_2213A60(&UserPresentListViewItem_TypeInfo);
    byte_596F50D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
    return (UserPresentListViewItem_o *)this->fields.linkItem;
  return 0;
}


void UserPresentListViewObject__Init(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  unsigned int v12; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w9
  MissionNaviTransitionBoardItem_c *v32; // x19

  if ( (byte_596F50F & 1) == 0 )
  {
    sub_2213A60(&UserPresentListViewItem_TypeInfo);
    byte_596F50F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UserPresentListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(UserPresentListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( v12 <= 3 )
  {
    v31 = dword_E9C0E0[v12];
    this->fields.dispMode = *((_DWORD *)&xmmword_E9C5F0 + v12);
    this->fields.state = v31;
  }
  if ( !state || dispMode != this->fields.dispMode )
    UserPresentListViewObject__SetupDisp(this, v24);
  v32 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v25, v26, v27, v28, v29, v30);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v32->_1.namespaze)(
      v32->_1.element_class,
      *(_QWORD *)&v32->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewObject__Init_47187316(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UserPresentListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewObject__Init_47188644(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UserPresentListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewObject__Init_47188728(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UserPresentListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void UserPresentListViewObject__OnClickCheck(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x0
  UserPresentListViewItem_c *v6; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596F512 & 1) == 0 )
  {
    sub_2213A60(&UserPresentListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_10243/*"OnClickListCheck"*/);
    byte_596F512 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = UserPresentListViewItem_TypeInfo;
    naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
    {
      if ( linkItem[1].fields.isTermination )
        return;
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10243/*"OnClickListCheck"*/, (Il2CppObject *)this, 0);
        return;
      }
    }
    else
    {
      sub_221405C(linkItem, UserPresentListViewItem_TypeInfo, v2, v3);
    }
    sub_2213CDC(manager, v6);
  }
}


void UserPresentListViewObject__OnClickSelect(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596F511 & 1) == 0 )
  {
    sub_2213A60(&Method_UserPresentListViewObject_OnClickSelect__);
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_596F511 = 1;
  }
  if ( this->fields.linkItem )
  {
    v3 = Method_UserPresentListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_UserPresentListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_UserPresentListViewObject_OnClickSelect__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, v5);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
  }
}


void UserPresentListViewObject__OnDestroy(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void UserPresentListViewObject__SetInput(UserPresentListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  UserPresentListViewItem_o *v8; // x1
  const MethodInfo *v9; // x3
  UserPresentListViewItemDraw_o *v10; // x0

  if ( (byte_596F50E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UserPresentListViewItem_TypeInfo);
    byte_596F50E = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_2213CDC(0, v8);
    UserPresentListViewItemDraw__SetInput(v10, v8, isInput, v9);
  }
}


void UserPresentListViewObject__SetItem(
        UserPresentListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void UserPresentListViewObject__SetupDisp(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  UserPresentListViewItemDraw_o *v11; // x0

  if ( (byte_596F510 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UserPresentListViewItem_TypeInfo);
    byte_596F510 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != UserPresentListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v9);
    UserPresentListViewItemDraw__SetItem(v11, (UserPresentListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}


void UserPresentListViewObject__add_callbackFunc(
        UserPresentListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  UserPresentListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596F50A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596F50A = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  UserPresentListViewObject__remove_callbackFunc(v13, v14, v15);
}


void UserPresentListViewObject__remove_callbackFunc(
        UserPresentListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  UserPresentListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596F50B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596F50B = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  UserPresentListViewObject__Awake(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewObject__setBlocked(UserPresentListViewObject_o *this, bool blocked, const MethodInfo *method)
{
  struct UserPresentListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (this = (UserPresentListViewObject_o *)itemDraw->fields.blockObj) == 0 )
    sub_2213CDC(this, blocked);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, blocked, 0);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewObject__setCheckBoxed(
        UserPresentListViewObject_o *this,
        bool checkBoxed,
        int32_t count,
        const MethodInfo *method)
{
  struct UserPresentListViewItemDraw_o *itemDraw; // x8
  UserPresentListViewObject_o *v5; // x20
  const MethodInfo *v7; // x2

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw
    || (v5 = this, (this = (UserPresentListViewObject_o *)itemDraw->fields.checkObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, checkBoxed, 0),
        (this = (UserPresentListViewObject_o *)v5->fields.itemDraw) == 0) )
  {
    sub_2213CDC(this, checkBoxed);
  }
  UserPresentListViewItemDraw__SetCheckCnt((UserPresentListViewItemDraw_o *)this, count, v7);
}