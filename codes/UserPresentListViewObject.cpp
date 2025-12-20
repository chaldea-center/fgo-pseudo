void UserPresentListViewObject___ctor(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B5A3 & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    byte_4D2B5A3 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void UserPresentListViewObject__Awake(UserPresentListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4D2B59C & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewItemDraw___);
    byte_4D2B59C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C942F0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewItemDraw___);
  this->fields.itemDraw = (struct UserPresentListViewItemDraw_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
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

  if ( (byte_4D2B59D & 1) == 0 )
  {
    sub_1C94098(&UserPresentListViewItem_TypeInfo);
    byte_4D2B59D = 1;
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
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w9
  GrandQuestFolderBoardItem_c *klass; // x19

  if ( (byte_4D2B59F & 1) == 0 )
  {
    sub_1C94098(&UserPresentListViewItem_TypeInfo);
    byte_4D2B59F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(UserPresentListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C942F0(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (unsigned int)v11 <= 3 )
  {
    v30 = dword_CFE250[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_CFEF30 + v11);
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    UserPresentListViewObject__SetupDisp(this, v23);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, v24, v25, v26, v27, v28, v29);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewObject__Init_40977792(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  UserPresentListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewObject__Init_40979144(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  UserPresentListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewObject__Init_40979228(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  UserPresentListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void UserPresentListViewObject__OnClickCheck(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  UserPresentListViewItem_c *v4; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D2B5A2 & 1) == 0 )
  {
    sub_1C94098(&UserPresentListViewItem_TypeInfo);
    sub_1C94098(&StringLiteral_9865/*"OnClickListCheck"*/);
    byte_4D2B5A2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = UserPresentListViewItem_TypeInfo;
    naturalAligment = UserPresentListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewItem_TypeInfo )
    {
      if ( LOBYTE(linkItem[1].fields.basePosition.fields.x) )
        return;
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9865/*"OnClickListCheck"*/, (Il2CppObject *)this, 0);
        return;
      }
    }
    else
    {
      sub_1C9468C(linkItem);
    }
    sub_1C942F0(manager, v4);
  }
}


void UserPresentListViewObject__OnClickSelect(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D2B5A1 & 1) == 0 )
  {
    sub_1C94098(&Method_UserPresentListViewObject_OnClickSelect__);
    sub_1C94098(&StringLiteral_9870/*"OnClickListView"*/);
    byte_4D2B5A1 = 1;
  }
  if ( this->fields.linkItem )
  {
    v3 = Method_UserPresentListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_UserPresentListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_UserPresentListViewObject_OnClickSelect__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C942F0(0, v5);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9870/*"OnClickListView"*/, (Il2CppObject *)this, 0);
  }
}


void UserPresentListViewObject__OnDestroy(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void UserPresentListViewObject__SetInput(UserPresentListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  UserPresentListViewItem_o *v6; // x1
  const MethodInfo *v7; // x3
  UserPresentListViewItemDraw_o *v8; // x0

  if ( (byte_4D2B59E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UserPresentListViewItem_TypeInfo);
    byte_4D2B59E = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1C942F0(0, v6);
    UserPresentListViewItemDraw__SetInput(v8, v6, isInput, v7);
  }
}


void UserPresentListViewObject__SetItem(
        UserPresentListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_44621212((ListViewObject_o *)this, item, seed, 0);
}


void UserPresentListViewObject__SetupDisp(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  UserPresentListViewItemDraw_o *v9; // x0

  if ( (byte_4D2B5A0 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UserPresentListViewItem_TypeInfo);
    byte_4D2B5A0 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C942F0(0, v7);
    UserPresentListViewItemDraw__SetItem(v9, (UserPresentListViewItem_o *)linkItem, this->fields.dispMode, v8);
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
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B59A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D2B59A = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  UserPresentListViewObject__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  UserPresentListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2B59B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D2B59B = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  UserPresentListViewObject__Awake(v11, v12);
}


void UserPresentListViewObject__setBlocked(UserPresentListViewObject_o *this, bool blocked, const MethodInfo *method)
{
  struct UserPresentListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (this = (UserPresentListViewObject_o *)itemDraw->fields.blockObj) == 0 )
    sub_1C942F0(this, blocked);
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
    sub_1C942F0(this, checkBoxed);
  }
  UserPresentListViewItemDraw__SetCheckCnt((UserPresentListViewItemDraw_o *)this, count, v7);
}